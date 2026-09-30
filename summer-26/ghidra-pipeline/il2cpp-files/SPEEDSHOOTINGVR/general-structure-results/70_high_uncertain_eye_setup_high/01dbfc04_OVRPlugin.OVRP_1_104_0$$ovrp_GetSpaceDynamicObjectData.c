/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetSpaceDynamicObjectData
ENTRY_POINT: 01dbfc04
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetSpaceDynamicObjectData(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01db669c();
  puVar7 = (undefined8 *)(unaff_x19 + 0x58);
  plVar8 = (long *)*puVar7;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 01dbfc54 to 01ebfc7f has its CatchHandler @ 01dc004c */
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0235aa20) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01dbfc94;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0103c348(plVar8,*(long *)PTR_DAT_0235aa20,0);
LAB_01dbfc94:
  iVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
  puVar1 = PTR_DAT_0235aa28;
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348(plVar8,*(long *)puVar1,0);
OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported:
      lVar4 = (*(code *)*puVar3)(plVar8,iVar9,puVar3[1]);
      if ((lVar4 != 0) && (uVar5 = FUN_01db86c8(lVar4,0), (uVar5 & 1) == 0)) {
        FUN_01db751c(lVar4);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar2);
  }
  *puVar7 = 0;
  thunk_FUN_0106e12c(puVar7,0);
  return;
}


