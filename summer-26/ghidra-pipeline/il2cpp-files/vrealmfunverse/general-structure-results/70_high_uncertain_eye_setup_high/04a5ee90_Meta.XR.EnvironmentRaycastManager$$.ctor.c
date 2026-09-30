/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$.ctor
ENTRY_POINT: 04a5ee90
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager___ctor(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_w8;
  long in_x9;
  long in_x11;
  long unaff_x21;
  uint unaff_w25;
  undefined4 *unaff_x27;
  
  if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (((uint)in_x11 < *(uint *)(in_x9 + 0x18)) &&
     (*(int *)(in_x9 + in_x11 * 4 + 0x20) = unaff_x27[1] + 1, unaff_w25 < in_w8)) {
    uVar1 = *(undefined4 *)(unaff_x21 + 0x28);
    iVar2 = *(int *)(unaff_x21 + 0x20);
    iVar3 = *(int *)(unaff_x21 + 0x38);
    *unaff_x27 = 0xffffffff;
    unaff_x27[1] = uVar1;
    iVar2 = iVar2 + -1;
    *(int *)(unaff_x21 + 0x20) = iVar2;
    *(int *)(unaff_x21 + 0x38) = iVar3 + 1;
    if (iVar2 == 0) {
      unaff_w25 = 0xffffffff;
      *(undefined4 *)(unaff_x21 + 0x24) = 0;
    }
    *(uint *)(unaff_x21 + 0x28) = unaff_w25;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


