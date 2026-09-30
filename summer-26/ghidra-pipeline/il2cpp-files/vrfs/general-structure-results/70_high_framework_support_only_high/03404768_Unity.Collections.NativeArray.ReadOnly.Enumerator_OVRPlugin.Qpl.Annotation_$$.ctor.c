/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 03404768
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03404944) */

void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Qpl_Annotation>___ctor(void)

{
  long lVar1;
  int in_w8;
  long *unaff_x19;
  long lVar2;
  int unaff_w22;
  char in_stack_00000008;
  
  if (unaff_w22 == in_w8) {
    lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06da3b08);
    if (lVar1 == 0) {
LAB_03404940:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_033ff510();
    (**(code **)(*unaff_x19 + 0x278))();
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06e1b940 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar1 = FUN_047fdc9c(0);
    if (lVar1 == 0) goto LAB_03404940;
    FUN_033f6e4c();
    *(undefined4 *)(lVar1 + 0x10) = 0;
    if (*(int *)(lVar1 + 0x14) < 0) {
      *(undefined4 *)(lVar1 + 0x14) = 0;
      FUN_033ff6b8(lVar1,0);
    }
    lVar2 = unaff_x19[0x24];
    in_stack_00000008 = '\0';
    FUN_03714a74(lVar2,&stack0x00000008,0);
    if (unaff_x19[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_04077b60(unaff_x19[0x24],lVar1,*(undefined8 *)PTR_DAT_06de2b88);
    if (in_stack_00000008 != '\0') {
      thunk_FUN_0160f328(lVar2,0);
    }
  }
  return;
}


