/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationLevel
ENTRY_POINT: 04f2ccd0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 120
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationLevel(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long unaff_x19;
  byte unaff_w21;
  long *unaff_x22;
  
  thunk_FUN_02bb0e9c();
  FUN_04c0ac30();
  if (unaff_x22 != (long *)0x0) {
    (**(code **)(*unaff_x22 + 0x558))();
    if (*(byte *)(unaff_x19 + 0x60) != (unaff_w21 & 1)) {
      bVar1 = (unaff_w21 & 1) == 0;
      if (bVar1) {
                    /* try { // try from 04f2cd34 to 0502cd4b has its CatchHandler @ 04f2ce08 */
        puVar2 = (undefined4 *)(unaff_x19 + 0x28);
        puVar3 = (undefined4 *)(unaff_x19 + 0x2c);
        puVar4 = (undefined4 *)(unaff_x19 + 0x30);
        puVar5 = (undefined4 *)(unaff_x19 + 0x34);
      }
      else {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f2cc44 with catch @ 04f2cd18
                        */
        puVar2 = (undefined4 *)(unaff_x19 + 0x38);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f2cc70 with catch @ 04f2cd1c
                        */
        puVar3 = (undefined4 *)(unaff_x19 + 0x3c);
        puVar4 = (undefined4 *)(unaff_x19 + 0x40);
        puVar5 = (undefined4 *)(unaff_x19 + 0x44);
      }
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_04f2cd80;
      FUN_05c59bb8(*puVar2,*puVar3,*puVar4,*puVar5,*(long *)(unaff_x19 + 0x58),0);
      *(byte *)(unaff_x19 + 0x60) = !bVar1;
    }
    return;
  }
LAB_04f2cd80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


