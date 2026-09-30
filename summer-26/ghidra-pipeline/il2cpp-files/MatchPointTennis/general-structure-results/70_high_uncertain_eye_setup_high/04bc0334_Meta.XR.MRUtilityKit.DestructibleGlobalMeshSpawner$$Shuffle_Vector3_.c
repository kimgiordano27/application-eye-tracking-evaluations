/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$Shuffle<Vector3>
ENTRY_POINT: 04bc0334
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__Shuffle<Vector3>(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  void *unaff_x21;
  long *unaff_x23;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000068;
  
  FUN_0795bd40();
  if (*unaff_x23 == 0) {
    uVar2 = FUN_07abdcec(0);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_0795b598();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar1 = FUN_07ab4fe8(lVar3,0);
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000008 = lVar3;
      memcpy(&stack0x00000018,unaff_x21,0x48);
      plVar4 = (long *)thunk_FUN_04457f54(&stack0x00000008,0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      uVar5 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f254e0,uVar5,0);
      FUN_07ac1838(0,uVar1,uVar5,0,0);
    }
    memcpy(&stack0x00000008,unaff_x21,0x48);
    thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8),&stack0x00000008);
    FUN_0795c108();
  }
  FUN_067804dc();
  return;
}


