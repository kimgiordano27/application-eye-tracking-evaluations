/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SimplexNoiseMask$$SampleMask
ENTRY_POINT: 04aacec4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SimplexNoiseMask__SampleMask(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int in_w8;
  long *plVar4;
  code *pcVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  long unaff_x22;
  long lVar6;
  void *unaff_x23;
  int unaff_w24;
  long unaff_x26;
  long unaff_x29;
  
  iVar1 = in_w8 + -1;
  if (unaff_w24 < iVar1) {
    *(int *)(unaff_x22 + 0x20) = iVar1;
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60))();
  }
  else if (iVar1 == unaff_w24) {
    *(int *)(unaff_x22 + 0x20) = unaff_w24;
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60))();
  if (*(long *)(unaff_x22 + 0x10) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8))
              (*(long *)(unaff_x22 + 0x10),param_1 + -1);
    lVar6 = *(long *)(unaff_x22 + 0x18);
    memcpy(unaff_x19,unaff_x23,unaff_x21);
    if (lVar6 != 0) {
      plVar4 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      puVar3 = (undefined8 *)plVar4[0x16];
      uVar2 = *puVar3;
      if (-1 < *(int *)(*plVar4 + 0x28)) {
        unaff_x19 = (undefined8 *)*unaff_x19;
      }
      pcVar5 = (code *)puVar3[2];
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x19;
      (*pcVar5)(uVar2,puVar3,lVar6,unaff_x29 + -0x20,unaff_x29 + -0xc);
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_04aacfd4;
    }
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_04aacfd4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


