/*
FUNCTION_NAME: FUN_05b02f14
ENTRY_POINT: 05b02f14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05b02f14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__57>__
  ;
  if ((DAT_06bc27da & 1) == 0) {
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__57>__
                );
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(PTR_DAT_067d7df8);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__12>__
                );
    DAT_06bc27da = 1;
  }
  uVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_05a9f134(uVar3,0);
  lVar4 = FUN_05abef1c(uVar3,0);
  if ((param_1 == 0) || (plVar9 = *(long **)(param_1 + 0x150), plVar9 == (long *)0x0)) {
LAB_05b030d0:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (lVar4 == 0) {
    if (0xe < *(uint *)(plVar9 + 3)) {
      plVar9[0x12] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar9 + 0x40));
    if (lVar5 == 0) {
      uVar3 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar3,0);
    }
    if (0xe < *(uint *)(plVar9 + 3)) {
      plVar9[0x12] = lVar4;
      puVar1 = PTR_DAT_067d7df8;
      *(long *)(lVar4 + 0x78) = param_1;
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__12>__
      ;
      *(undefined8 *)(lVar4 + 0x80) = param_4;
      local_50 = 0;
      uStack_48 = 0;
      FUN_05a9e398(&local_50,*(undefined8 *)puVar1,0);
      uVar8 = uStack_48;
      uVar6 = local_50;
      uVar7 = *(undefined8 *)puVar2;
      local_50 = 0;
      uStack_48 = 0;
      *(undefined8 *)(lVar4 + 0x28) = uVar8;
      *(undefined8 *)(lVar4 + 0x20) = uVar6;
      FUN_05a9e398(&local_50,uVar7,0);
      uVar6 = FUN_05a9e714(local_50,uStack_48,0);
      uVar8 = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar4 + 0x40) = uVar6;
      local_50 = 0;
      uStack_48 = 0;
      FUN_05a9e398(&local_50,uVar8,0);
      uVar6 = FUN_05a9e714(local_50,uStack_48,0);
      *(undefined8 *)(lVar4 + 0x50) = uVar6;
      *(undefined8 *)(lVar4 + 0x58) = param_2;
      *(undefined8 *)(lVar4 + 0x60) = param_3;
      FUN_05abcc88(lVar4,1,0);
      puVar1 = PTR_DAT_067ca498;
      if (*(long *)(lVar4 + 0x78) != 0) {
        FUN_05abfcc4(*(long *)(lVar4 + 0x78),1,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar6 = _DAT_011b3b30;
        *(undefined8 *)(lVar4 + 0x18) = _UNK_011b3b38;
        *(undefined8 *)(lVar4 + 0x10) = uVar6;
        FUN_05abcc30(lVar4,1,0);
        return uVar3;
      }
      goto LAB_05b030d0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


