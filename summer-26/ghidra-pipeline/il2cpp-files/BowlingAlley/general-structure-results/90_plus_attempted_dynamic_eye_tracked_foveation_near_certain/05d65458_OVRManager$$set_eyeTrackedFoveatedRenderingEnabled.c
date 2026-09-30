/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05d65458
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_eyeTrackedFoveatedRenderingEnabled(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 in_w8;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 uVar8;
  
  *(undefined4 *)(param_2 + 0x10) = in_w8;
  *(undefined8 *)(param_2 + 0x14) = param_1;
  FUN_059660a0();
  if (unaff_x20 != 0) {
                    /* try { // try from 05d65468 to 05e654bb has its CatchHandler @ 05d65468
                       catch() { ... } // from try @ 05d65468 with catch @ 05d65468
                       catch() { ... } // from try @ 05d654f0 with catch @ 05d65468
                       catch() { ... } // from try @ 05d6555c with catch @ 05d65468
                       catch() { ... } // from try @ 05d655f8 with catch @ 05d65468
                       catch() { ... } // from try @ 05d65604 with catch @ 05d65468 */
    lVar6 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    puVar4 = PTR_DAT_072b1188;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
        thunk_FUN_0333a630();
      }
      else {
                    /* try { // try from 05d654bc to 05e654bf has its CatchHandler @ 05d65524 */
                    /* try { // try from 05d654cc to 05e654d3 has its CatchHandler @ 05d6552c */
        FUN_041e2c78();
      }
      *(long *)(unaff_x19 + 0x40) = unaff_x20;
      thunk_FUN_0333a630((long *)(unaff_x19 + 0x40));
                    /* try { // try from 05d654e8 to 05e654ef has its CatchHandler @ 05d65528 */
                    /* try { // try from 05d654f0 to 05e65543 has its CatchHandler @ 05d65468 */
      *(undefined4 *)(unaff_x19 + 0x48) = 0x3d4ccccd;
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar4;
      }
      puVar3 = PTR_DAT_072b1170;
      puVar2 = PTR_DAT_072b1168;
      lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar7 == 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d654bc with catch @ 05d65524
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d654e8 with catch @ 05d65528
                        */
        if (*(int *)(lVar6 + 0xe0) == 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d654cc with catch @ 05d6552c
                        */
          thunk_FUN_032cd7c0();
          lVar6 = *(long *)puVar4;
        }
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
                    /* try { // try from 05d65544 to 05e6555b has its CatchHandler @ 05d655fc */
        lVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                    /* try { // try from 05d6555c to 05e655e7 has its CatchHandler @ 05d65468 */
        FUN_055c676c(lVar7,uVar8,*(undefined8 *)PTR_DAT_072b1180,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar5 = lVar7;
        thunk_FUN_0333a630(plVar5,lVar7);
      }
      *(long *)(unaff_x19 + 0x50) = lVar7;
      thunk_FUN_0333a630((long *)(unaff_x19 + 0x50),lVar7);
      uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_0512be90(uVar8,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x19 + 0x58) = uVar8;
      thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x58),uVar8);
      thunk_FUN_06be6094();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


