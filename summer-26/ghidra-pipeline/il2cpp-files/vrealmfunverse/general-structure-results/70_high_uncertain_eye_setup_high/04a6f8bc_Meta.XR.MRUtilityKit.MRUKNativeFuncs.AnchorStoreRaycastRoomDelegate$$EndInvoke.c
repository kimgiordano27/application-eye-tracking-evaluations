/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$EndInvoke
ENTRY_POINT: 04a6f8bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate__EndInvoke(uint param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x24;
  ulong unaff_x25;
  
  do {
    unaff_w22 = unaff_w22 + (param_1 & 1);
    do {
      do {
        unaff_x25 = unaff_x25 + 1;
        unaff_x24 = unaff_x24 + 0x10;
        if ((long)*(int *)(unaff_x21 + 0x24) <= (long)unaff_x25) {
          return unaff_w22;
        }
        lVar2 = *(long *)(unaff_x21 + 0x18);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar2 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
      } while (*(int *)(lVar2 + unaff_x24 + 0x20) < 0);
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + unaff_x24 + 0x28)
                         ,*(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar1 & 1) == 0);
    param_1 = FUN_04a6dd60();
  } while( true );
}


