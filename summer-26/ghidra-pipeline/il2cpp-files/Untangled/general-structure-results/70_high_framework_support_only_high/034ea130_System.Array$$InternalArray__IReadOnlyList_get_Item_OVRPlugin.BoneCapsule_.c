/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.BoneCapsule>
ENTRY_POINT: 034ea130
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_BoneCapsule>
               (float param_1,float param_2)

{
  long lVar1;
  undefined8 uVar2;
  int in_w8;
  undefined8 unaff_x19;
  long unaff_x20;
  int unaff_w23;
  long unaff_x24;
  
  if (in_w8 == 0) {
    FUN_02f07e70(PTR_DAT_06d03888);
    *(undefined1 *)(unaff_x24 + 0x4b) = 1;
  }
  FUN_066d3bd8(param_1 + (float)unaff_w23 * 50.0 *
                         *(float *)(*(long *)(*(long *)PTR_DAT_06d03888 + 0xb8) + 0x18),
               param_2 + (float)unaff_w23 * 50.0 *
                         *(float *)(*(long *)(*(long *)PTR_DAT_06d03888 + 0xb8) + 0x1c));
  if ((*(long *)(unaff_x20 + 0x60) != 0) &&
     (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x60) + 0x100), lVar1 != 0)) {
    FUN_066dbaf4(lVar1,0);
    if ((*(long *)(unaff_x20 + 0x60) != 0) && (*(long *)(*(long *)(unaff_x20 + 0x60) + 0x100) != 0))
    {
      FUN_066dbc80();
      if ((*(long *)(unaff_x20 + 0x58) != 0) &&
         (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x58) + 0x100), lVar1 != 0)) {
        FUN_066dbaf4(lVar1,0);
        if (*(long *)(unaff_x20 + 0x58) != 0) {
          lVar1 = *(long *)(*(long *)(unaff_x20 + 0x58) + 0x100);
          uVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d026a8);
          FUN_066dbbb0();
          if (lVar1 != 0) {
            FUN_066dbc80(lVar1,uVar2,0);
            if (*(long *)(unaff_x20 + 0x68) != 0) {
              *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + 0x58) = unaff_x19;
              thunk_FUN_02f411dc();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


