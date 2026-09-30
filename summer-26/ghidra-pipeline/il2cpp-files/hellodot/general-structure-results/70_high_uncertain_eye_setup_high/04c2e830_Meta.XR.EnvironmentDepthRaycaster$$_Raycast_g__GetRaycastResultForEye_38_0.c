/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$<Raycast>g__GetRaycastResultForEye|38_0
ENTRY_POINT: 04c2e830
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__<Raycast>g__GetRaycastResultForEye_38_0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint in_w10;
  long unaff_x19;
  uint unaff_w21;
  
  if (unaff_w21 < in_w10) {
    if (*(long *)(param_1 + (long)(int)unaff_w21 * 8 + 0x20) == 0) {
      iVar1 = *(int *)(unaff_x19 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar2 = FUN_04f321b8(0x10000,iVar1 + unaff_w21 * -0x10000,0);
      uVar3 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8b30,uVar2);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_04c2e8bc;
                    /* try { // try from 04c2e8a0 to 04d2e8c7 has its CatchHandler @ 04c2eab4 */
      *(undefined8 *)(lVar4 + (long)(int)unaff_w21 * 8 + 0x20) = uVar3;
    }
    return;
  }
LAB_04c2e8bc:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


