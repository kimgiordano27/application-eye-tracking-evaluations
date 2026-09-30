/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03b8a0b8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>(void)

{
  int iVar1;
  float *pfVar2;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  do {
    FUN_031f20f4();
    *(undefined1 *)(unaff_x27 + 0xdd9) = unaff_w28;
    do {
      if (((((unaff_x23 != (long *)0x0) && (*unaff_x23 == *unaff_x22)) &&
           (pfVar2 = (float *)thunk_FUN_0322f29c(unaff_x23), fStack0000000000000018 == *pfVar2)) &&
          ((fStack000000000000001c == pfVar2[1] && (fStack0000000000000020 == pfVar2[2])))) &&
         ((fStack0000000000000024 == pfVar2[3] &&
          ((fStack0000000000000028 == pfVar2[4] && (fStack000000000000002c == pfVar2[5])))))) {
        iVar1 = thunk_FUN_032019d8();
        return iVar1 + (int)unaff_x24;
      }
      unaff_x24 = unaff_x24 + 1;
      if (unaff_x26 == unaff_x24) {
        iVar1 = thunk_FUN_032019d8();
        return iVar1 + -1;
      }
      memcpy(&stack0x00000018,(void *)(unaff_x25 + unaff_x24 * (ulong)*(uint *)(*unaff_x20 + 0x104))
             ,(ulong)*(uint *)(*unaff_x20 + 0x104));
      unaff_x23 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
    } while (*(char *)(unaff_x27 + 0xdd9) != '\0');
  } while( true );
}


