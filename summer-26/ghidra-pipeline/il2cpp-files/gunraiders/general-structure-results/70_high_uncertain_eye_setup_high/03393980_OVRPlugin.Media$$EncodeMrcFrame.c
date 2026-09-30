/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 03393980
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_Media__EncodeMrcFrame(ulong param_1,long param_2)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(Method_Unity_Collections_NativeArray_Enumerator<Vector2>_Dispose__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_Dispose__);
    *(undefined1 *)(unaff_x22 + 0x6a9) = 1;
  }
  if (unaff_x21 != 0) {
    if (*(char *)(unaff_x21 + 0x88) == '\0') {
      if ((unaff_x19 == 0) || (*(char *)(unaff_x19 + 0xd0) == '\0')) {
        if (*(long *)(param_2 + 0x20) == 0) goto LAB_033939ec;
        uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x20) + 0x28);
      }
      else {
        uVar1 = *(undefined4 *)(unaff_x19 + 0xd4);
      }
    }
    else {
      uVar1 = *(undefined4 *)(unaff_x21 + 0x8c);
    }
    return uVar1;
  }
LAB_033939ec:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


