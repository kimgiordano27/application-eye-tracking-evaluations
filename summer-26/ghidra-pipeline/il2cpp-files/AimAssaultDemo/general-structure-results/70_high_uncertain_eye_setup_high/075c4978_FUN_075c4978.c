/*
FUNCTION_NAME: FUN_075c4978
ENTRY_POINT: 075c4978
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined1 FUN_075c4978(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  double dVar13;
  undefined8 local_68;
  
  puVar2 = OVRPlugin_OVRP_1_71_0_TypeInfo;
  if ((DAT_0826e84d & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d89f60);
    FUN_0373b518(OVRPlugin_OVRP_1_52_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07d8acb8);
    FUN_0373b518(OVRPlugin_OVRP_1_72_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_71_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07de5f38);
    DAT_0826e84d = 1;
  }
  local_68 = 0;
  lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_062855bc(lVar4,0);
  puVar2 = PTR_DAT_07de5f38;
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x10) = 0;
    puVar3 = OVRPlugin_OVRP_1_72_0_TypeInfo;
    puVar1 = PTR_DAT_07d89f60;
    uVar5 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
    FUN_05562fc4(uVar5,lVar4,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    puVar3 = OVRPlugin_OVRP_1_52_0_TypeInfo;
    puVar2 = PTR_DAT_07d8acb8;
    uVar6 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeOffset(0);
    FUN_075c3d24(param_1,param_2,param_3,uVar5);
    while( true ) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar7 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeOffset(0);
      local_68 = FUN_06225c68(uVar7,uVar6,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar2);
      }
      dVar13 = (double)FUN_0625996c(&local_68,0);
      if (((double)param_4 <= dVar13) || (*(char *)(lVar4 + 0x10) == '\x01')) {
        FUN_075c4130(param_1,param_2,param_3,uVar5);
        return *(undefined1 *)(lVar4 + 0x10);
      }
      plVar8 = (long *)FUN_075c3bec();
      if (plVar8 == (long *)0x0) break;
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_075c4b5c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,4);
LAB_075c4b5c:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


