/*
FUNCTION_NAME: FUN_075c4130
ENTRY_POINT: 075c4130
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_075c4130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  
  puVar1 = OVRPlugin_OVRP_1_65_0_TypeInfo;
  if ((DAT_0826e846 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_55_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_55_1_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_52_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_66_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_65_0_TypeInfo);
    DAT_0826e846 = 1;
  }
  lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_062855bc(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    *(undefined8 *)(lVar3 + 0x18) = param_3;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_075c42dc(*(long *)(param_1 + 0x18),param_2,param_3,param_4);
      puVar2 = OVRPlugin_OVRP_1_66_0_TypeInfo;
      puVar1 = OVRPlugin_OVRP_1_55_0_TypeInfo;
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
        uVar4 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
        FUN_044a3874(uVar4,lVar3,*(undefined8 *)puVar2,0);
        uVar5 = FUN_03f45cf0(uVar10,uVar4,*(undefined8 *)puVar1);
        if ((uVar5 & 1) != 0) {
          return;
        }
        plVar6 = (long *)FUN_075c3bec();
        if (plVar6 != (long *)0x0) {
          lVar8 = *plVar6;
          uVar4 = *(undefined8 *)(lVar3 + 0x10);
          uVar10 = *(undefined8 *)(lVar3 + 0x18);
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_OVRP_1_52_0_TypeInfo) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                goto LAB_075c42ac;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar6,*(long *)OVRPlugin_OVRP_1_52_0_TypeInfo,6);
LAB_075c42ac:
                    /* WARNING: Could not recover jumptable at 0x075c42cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar7)(plVar6,uVar4,uVar10,puVar7[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


