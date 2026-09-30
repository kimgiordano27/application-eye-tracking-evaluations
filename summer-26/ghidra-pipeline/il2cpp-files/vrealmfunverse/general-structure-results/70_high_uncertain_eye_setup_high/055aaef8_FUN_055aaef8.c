/*
FUNCTION_NAME: FUN_055aaef8
ENTRY_POINT: 055aaef8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_055aaef8(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_066d178a & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    DAT_066d178a = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x48) != 0)) {
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x48) + 0x10);
    uVar4 = *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_04d8a7b0(uVar4,0);
    uVar1 = FUN_04d938a0(uVar3,uVar4,0);
    if ((uVar1 & 1) != 0) {
      if ((*(char *)(param_2 + 0x38) != '\0') && (uVar1 = FUN_055a329c(param_1), (uVar1 & 1) != 0))
      {
        return 0;
      }
      uVar3 = FUN_055a2f00(param_1);
      return uVar3;
    }
    if (*(char *)(param_2 + 0x38) == '\0') {
      plVar2 = *(long **)(param_1 + 0x18);
      if (plVar2 == (long *)0x0) goto LAB_055ab000;
      uVar3 = (**(code **)(*plVar2 + 0x558))(plVar2,*(undefined8 *)(*plVar2 + 0x560));
    }
    else {
      uVar3 = FUN_055a33c8(param_1);
    }
    uVar3 = System_Net_HttpWebResponse__System_IDisposable_Dispose
                      (param_1,uVar3,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40)
                      );
    return uVar3;
  }
LAB_055ab000:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


