/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<TrackerCoroutine>d__134$$System.IDisposable.Dispose
ENTRY_POINT: 0772fc2c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_MRUtilityKit_MRUK_<TrackerCoroutine>d__134__System_IDisposable_Dispose(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x19;
  
  if (param_1 != 0) {
    lVar4 = FUN_04d7a1ac(param_1,*(undefined8 *)PTR_DAT_09f316e0);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
    }
    uVar5 = FUN_0952c404(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = FUN_095259a0();
      if (lVar4 == 0) goto LAB_0772fccc;
      lVar4 = FUN_04d7a120(lVar4,*(undefined8 *)PTR_DAT_09f316d8);
    }
    uVar3 = (**(code **)(*unaff_x19 + 0x7a8))();
    uVar2 = _UNK_01c77048;
    uVar1 = _DAT_01c77040;
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x20) = uVar3;
      *(undefined8 *)(lVar4 + 0x2c) = uVar2;
      *(undefined8 *)(lVar4 + 0x24) = uVar1;
      return;
    }
  }
LAB_0772fccc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


