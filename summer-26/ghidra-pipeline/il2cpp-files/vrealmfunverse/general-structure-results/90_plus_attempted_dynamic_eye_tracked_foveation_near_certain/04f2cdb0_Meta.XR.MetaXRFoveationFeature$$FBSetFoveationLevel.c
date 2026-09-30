/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 04f2cdb0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 123
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel(long param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar1 = (undefined4 *)(param_1 + 0x40);
  puVar2 = (undefined4 *)(param_1 + 0x44);
  puVar3 = (undefined4 *)(param_1 + 0x48);
  puVar4 = (undefined4 *)(param_1 + 0x4c);
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined4 *)(param_1 + 0x30);
    puVar2 = (undefined4 *)(param_1 + 0x34);
    puVar3 = (undefined4 *)(param_1 + 0x38);
    puVar4 = (undefined4 *)(param_1 + 0x3c);
  }
                    /* try { // try from 04f2cdf8 to 0502ce07 has its CatchHandler @ 04f2ce08 */
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar5 = *puVar4;
    uVar6 = *puVar3;
                    /* catch() { ... } // from try @ 04f2cd34 with catch @ 04f2ce08
                       catch() { ... } // from try @ 04f2cdf8 with catch @ 04f2ce08 */
                    /* try { // try from 04f2ce0c to 0502ce0f has its CatchHandler @ 04f2ce18 */
    uVar7 = *puVar2;
                    /* try { // try from 04f2ce10 to 0502ce1b has its CatchHandler @ 04f2cb10 */
    uVar8 = *puVar1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f2ce0c with catch @ 04f2ce18
                        */
    FUN_05c54194(uVar8,uVar7,uVar6,uVar5,*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_05c54340(uVar8,uVar7,uVar6,uVar5,*(long *)(param_1 + 0x28),0);
      *(byte *)(param_1 + 0x60) = param_2 & 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


