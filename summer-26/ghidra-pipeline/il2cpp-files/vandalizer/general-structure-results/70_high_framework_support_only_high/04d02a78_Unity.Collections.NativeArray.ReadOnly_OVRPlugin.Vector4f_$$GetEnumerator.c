/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$GetEnumerator
ENTRY_POINT: 04d02a78
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__GetEnumerator(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined *puVar2;
  
  FUN_05e44034();
  puVar2 = PTR_DAT_075b9458;
  if ((unaff_x24 != 0) && (puVar2 = PTR_DAT_075d6310, unaff_x23 != 0)) {
    *(long *)(unaff_x20 + 0x10) = unaff_x24;
    thunk_FUN_0329bf60();
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    thunk_FUN_0329bf60((undefined8 *)(unaff_x20 + 0x18),0);
    *(long *)(unaff_x20 + 0x20) = unaff_x23;
    thunk_FUN_0329bf60();
    if (unaff_x22 == 0) {
      unaff_x22 = FUN_0552f684(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38)
                              );
    }
    *(long *)(unaff_x20 + 0x28) = unaff_x22;
    thunk_FUN_0329bf60((long *)(unaff_x20 + 0x28),unaff_x22);
    *(byte *)(unaff_x20 + 0x30) = unaff_w21 & 1;
    return;
  }
  uVar1 = thunk_FUN_03257e30(puVar2);
  FUN_062984a4(uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c();
}


