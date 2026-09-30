/*
FUNCTION_NAME: FUN_0540011c
ENTRY_POINT: 0540011c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 FUN_0540011c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  undefined8 local_48;
  
  if ((DAT_066d0ba6 & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_72_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_063254e0);
    FUN_02b3c81c(OVRPlugin_OVRP_1_73_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_063254d8);
    FUN_02b3c81c(OVRPlugin_LogLevel_TypeInfo);
    FUN_02b3c81c(System_DateTimeOffset_var);
    DAT_066d0ba6 = 1;
  }
  puVar5 = OVRPlugin_OVRP_1_72_0_TypeInfo;
  puVar4 = OVRPlugin_LogLevel_TypeInfo;
  puVar3 = System_DateTimeOffset_var;
  puVar2 = PTR_DAT_063254e0;
  puVar1 = PTR_DAT_063254d8;
  local_48 = 0;
  if (param_1 == (long *)0x0) {
    return 0;
  }
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_73_0_TypeInfo);
  FUN_0452d044(uVar7,*(undefined8 *)puVar5);
  local_48 = uVar7;
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_0452d044(uVar7,*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_06312310;
  iVar13 = 0;
  do {
    lVar10 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0540024c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02b7654c(param_1,*(long *)puVar4,0);
LAB_0540024c:
    iVar6 = (*(code *)*puVar8)(param_1,puVar8[1]);
    if (iVar6 <= iVar13) {
      return local_48;
    }
    lVar10 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_054002ac;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02b7654c(param_1,*(long *)puVar3,0);
LAB_054002ac:
    uVar9 = (*(code *)*puVar8)(param_1,iVar13,puVar8[1]);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar1 + 0xe0));
    }
    uVar11 = FUN_04d938a0(uVar9,0,0);
    if ((uVar11 & 1) != 0) {
      uVar7 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar7 = FUN_02b3c908(uVar7,1);
      FUN_0275e13c();
      puVar1 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ScaleProperty_TypeInfo;
      uVar9 = thunk_FUN_02ba3594(
                                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ScaleProperty_TypeInfo
                                );
      FUN_0275a400(uVar7,uVar9);
      uVar9 = thunk_FUN_02ba3594(puVar1);
      FUN_0275a434(uVar7,0,uVar9);
      uVar9 = thunk_FUN_02ba3594(
                                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TextOverflowProperty_TypeInfo
                                );
      uVar7 = FUN_0540ce80(uVar9,uVar7,0);
      thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
      uVar9 = thunk_FUN_02b79644();
      FUN_04cf4a4c(uVar9,uVar7,0);
                    /* try { // try from 054003b8 to 055003bf has its CatchHandler @ 054007e8 */
      uVar7 = FUN_0540c738(uVar9,0);
                    /* try { // try from 054003cc to 055003d3 has its CatchHandler @ 054007e4 */
      uVar9 = thunk_FUN_02ba3594(
                                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TopProperty_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar7,uVar9);
    }
    FUN_053df7e4(uVar9,uVar7,&local_48,0);
    iVar13 = iVar13 + 1;
  } while( true );
}


