/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 05b085d8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_MRUtilityKit_SceneDebugger__GetClosestSeatPoseDebugger(long *param_1,long param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if (*(int *)((long)param_1 + 0xc) != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(int *)((long)param_1 + 0xc) != *(int *)(*param_1 + 0x20) + 1) goto LAB_05b08608;
  }
  FUN_05e22a2c(0);
LAB_05b08608:
  lVar4 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0322bef4(lVar4);
    lVar4 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  lVar5 = param_1[2];
  if ((uVar1 & 1) == 0) {
    FUN_0322bef4(lVar4);
    lVar4 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  memcpy(&stack0x00000008,param_1 + 3,0x58);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_0322bef4(lVar4);
  }
  uVar3 = thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30),&stack0x00000008);
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  FUN_05da3e28(&stack0x00000060,lVar5,uVar3,0);
  auVar2._8_8_ = in_stack_00000068;
  auVar2._0_8_ = in_stack_00000060;
  return auVar2;
}


