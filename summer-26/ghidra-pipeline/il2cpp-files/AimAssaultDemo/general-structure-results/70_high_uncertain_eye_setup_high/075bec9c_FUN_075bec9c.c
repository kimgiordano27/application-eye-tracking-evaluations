/*
FUNCTION_NAME: FUN_075bec9c
ENTRY_POINT: 075bec9c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_16
*/


undefined8 FUN_075bec9c(long param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((DAT_0826e70e & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_117_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_118_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_119_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_11_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_120_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_122_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_123_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07d9a8e0);
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_0826e70e = 1;
  }
  uVar6 = 0;
  if ((param_2 != (long *)0x0) && (*(int *)(param_1 + 0x38) != 0)) {
    lVar2 = FUN_075bef88(param_2,param_1);
    uVar3 = FUN_06176284(lVar2,0,0);
    uVar6 = 0;
    if ((uVar3 & 1) == 0) {
      if (lVar2 == 0) {
LAB_075bef84:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar3 = FUN_061760a4(lVar2,0);
      if ((uVar3 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar3 = FUN_075ac5e0(uVar6,0,0);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
      }
      uVar3 = FUN_061760a4(lVar2,0);
      uVar5 = 0;
      if ((uVar3 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
      }
      switch(*(undefined4 *)(param_1 + 0x28)) {
      case 0:
                    /* WARNING: Could not recover jumptable at 0x075bee34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*param_2 + 0x1a8))
                          (param_2,uVar5,lVar2,*(undefined8 *)(*param_2 + 0x1b0));
        return uVar6;
      case 1:
        uVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d9a8e0);
        FUN_075be9c0(uVar6,uVar5,lVar2);
        break;
      case 2:
        uVar6 = FUN_075bf14c(uVar5,lVar2,*(undefined8 *)(param_1 + 0x30));
        return uVar6;
      case 3:
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_075bef84;
        uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20);
        uVar6 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_123_0_TypeInfo);
        FUN_05369874(uVar6,uVar5,lVar2,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        break;
      case 4:
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_075bef84;
        uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x24);
        uVar6 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_120_0_TypeInfo);
        FUN_0536992c(uVar7,uVar6,uVar5,lVar2,*(undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo);
        break;
      case 5:
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_075bef84;
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
        uVar6 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_121_0_TypeInfo);
        FUN_053698cc(uVar6,uVar5,lVar2,uVar4,*(undefined8 *)OVRPlugin_OVRP_1_117_0_TypeInfo);
        break;
      case 6:
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_075bef84;
        uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x30);
        uVar6 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_122_0_TypeInfo);
        FUN_05369818(uVar6,uVar5,lVar2,uVar1,*(undefined8 *)OVRPlugin_OVRP_1_118_0_TypeInfo);
        break;
      default:
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}


