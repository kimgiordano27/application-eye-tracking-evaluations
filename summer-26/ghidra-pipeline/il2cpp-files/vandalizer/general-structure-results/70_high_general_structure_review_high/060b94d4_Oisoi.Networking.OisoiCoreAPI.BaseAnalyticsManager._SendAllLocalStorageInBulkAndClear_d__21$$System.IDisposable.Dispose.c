/*
FUNCTION_NAME: Oisoi.Networking.OisoiCoreAPI.BaseAnalyticsManager.<SendAllLocalStorageInBulkAndClear>d__21$$System.IDisposable.Dispose
ENTRY_POINT: 060b94d4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Oisoi_Networking_OisoiCoreAPI_BaseAnalyticsManager_<SendAllLocalStorageInBulkAndClear>d__21__System_IDisposable_Dispose
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_0329bf60();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_031f21f4(param_3);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x01') {
      if (param_2 == 0) {
        uVar3 = thunk_FUN_0323b52c(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar3,0);
      }
      goto LAB_060b9538;
    }
    pcVar4 = FUN_0316ea88;
  }
  else {
    if (cVar1 != '\x02') {
LAB_060b9538:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_060b9548;
    }
    pcVar4 = FUN_0316eab0;
  }
  *(code **)(param_1 + 0x18) = pcVar4;
LAB_060b9548:
  *(code **)(param_1 + 0x38) = FUN_0316ea28;
  return;
}


