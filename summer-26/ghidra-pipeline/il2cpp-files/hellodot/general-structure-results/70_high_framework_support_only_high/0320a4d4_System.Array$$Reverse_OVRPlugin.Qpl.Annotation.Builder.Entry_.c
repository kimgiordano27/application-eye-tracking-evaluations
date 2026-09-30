/*
FUNCTION_NAME: System.Array$$Reverse<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 0320a4d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Reverse<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (void *param_1,undefined8 param_2,size_t param_3)

{
  void *pvVar1;
  char in_NG;
  char in_OV;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *in_x9;
  size_t unaff_x19;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  size_t unaff_x26;
  long unaff_x29;
  
  if (in_NG == in_OV) {
    in_x9 = (void *)(unaff_x29 + -0x50);
  }
  memcpy(param_1,in_x9,param_3);
  pvVar1 = *(void **)(unaff_x29 + -0x70);
  if (-1 < *(int *)(unaff_x24[3] + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x58);
  }
  memcpy(unaff_x23,pvVar1,unaff_x26);
  pvVar1 = *(void **)(unaff_x29 + -0x68);
  if (-1 < *(int *)(unaff_x24[4] + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x60);
  }
  memcpy(unaff_x25,pvVar1,unaff_x19);
  if (-1 < *(int *)(*unaff_x24 + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  if (-1 < *(int *)(unaff_x24[1] + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  puVar3 = (undefined8 *)unaff_x24[5];
  if (-1 < *(int *)(unaff_x24[2] + 0x28)) {
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  uVar2 = *puVar3;
  if (-1 < *(int *)(unaff_x24[3] + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  if (-1 < *(int *)(unaff_x24[4] + 0x28)) {
    unaff_x25 = (undefined8 *)*unaff_x25;
  }
  *(undefined8 **)(unaff_x29 + -0x38) = unaff_x20;
  *(undefined8 **)(unaff_x29 + -0x30) = unaff_x21;
  *(undefined8 **)(unaff_x29 + -0x28) = unaff_x22;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
  lVar4 = *(long *)(unaff_x29 + -0x90);
  (*(code *)puVar3[2])(uVar2,puVar3,0,unaff_x29 + -0x38,unaff_x29 + -0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(unaff_x29 + -0x10);
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x98));
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


