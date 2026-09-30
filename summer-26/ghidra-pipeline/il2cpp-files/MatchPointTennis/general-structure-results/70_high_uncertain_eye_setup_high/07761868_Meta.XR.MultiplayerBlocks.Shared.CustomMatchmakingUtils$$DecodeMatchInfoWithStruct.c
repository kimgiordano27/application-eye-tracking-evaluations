/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$DecodeMatchInfoWithStruct
ENTRY_POINT: 07761868
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__DecodeMatchInfoWithStruct
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  
  do {
    if ((uint)in_x10 < in_w11) {
      *(uint *)(unaff_x19 + 0x18) = (uint)in_x10 + 1;
      *(long *)(param_1 + in_x10 * 8 + 0x20) = param_3;
      thunk_FUN_044bb4b4();
    }
    else {
      FUN_05bade44();
    }
    do {
      lVar1 = *(long *)(unaff_x21 + 0x18);
      if (lVar1 == 0) goto LAB_077618e8;
      if (*(int *)(lVar1 + 0x18) == 0) {
LAB_077618ec:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (*(long *)(lVar1 + 0x20) != 0) {
        FUN_077617f0();
        lVar1 = *(long *)(unaff_x21 + 0x18);
        if (lVar1 == 0) goto LAB_077618e8;
      }
      if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_077618ec;
      unaff_x21 = *(long *)(lVar1 + 0x28);
      if (unaff_x21 == 0) {
        return;
      }
      if ((*(byte *)(unaff_x22 + 0x2c4) & 1) == 0) {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x22 + 0x2c4) = unaff_w23;
      }
      if (unaff_x21 == 0) goto LAB_077618e8;
      param_3 = *(long *)(unaff_x21 + 0x28);
    } while (param_3 == 0);
    if (*(long *)(unaff_x21 + 0x20) == 0) {
LAB_077618e8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    *(undefined8 *)(param_3 + 0x1c) = *(undefined8 *)(*(long *)(unaff_x21 + 0x20) + 0x10);
    if (unaff_x19 == 0) goto LAB_077618e8;
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_077618e8;
    in_x10 = (long)*(int *)(unaff_x19 + 0x18);
    in_w11 = *(uint *)(param_1 + 0x18);
  } while( true );
}


