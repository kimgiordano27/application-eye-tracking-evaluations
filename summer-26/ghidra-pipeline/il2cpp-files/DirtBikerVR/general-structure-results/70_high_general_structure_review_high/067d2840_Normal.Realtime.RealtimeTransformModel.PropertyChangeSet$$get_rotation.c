/*
FUNCTION_NAME: Normal.Realtime.RealtimeTransformModel.PropertyChangeSet$$get_rotation
ENTRY_POINT: 067d2840
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_1
*/


undefined8
Normal_Realtime_RealtimeTransformModel_PropertyChangeSet__get_rotation
          (undefined8 param_1,long param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w9;
  int in_w10;
  
  if (in_w10 < param_4) {
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(PTR_DAT_0849faa0);
    uVar3 = thunk_FUN_03af1434(PTR_DAT_0849f8c0);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar1,uVar2,uVar3,0);
    uVar2 = thunk_FUN_03af1434(PTR_DAT_084ac968);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar1,uVar2);
  }
  if (param_4 != 0) {
    if (in_w9 == 0) {
      param_2 = 0;
    }
    else {
      if (in_w9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      param_2 = param_2 + 0x20;
    }
    uVar1 = FUN_065cd30c(param_2 + (param_3 & 0xffffffff),param_4,param_1,0);
    return uVar1;
  }
  return **(undefined8 **)(*(long *)(PTR_DAT_08486760 + 0x90) + 0xb8);
}


