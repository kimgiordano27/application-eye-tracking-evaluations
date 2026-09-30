/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05d4cba4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 156
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined4
Meta_XR_MetaXREyeTrackedFoveationFeature__set_eyeTrackedFoveatedRenderingEnabled
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 uVar7;
  
                    /* try { // try from 05d4cba4 to 05e4cbab has its CatchHandler @ 05d4c880 */
  piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
                    /* try { // try from 05d4cbac to 05e4cbaf has its CatchHandler @ 05d4cbb4 */
                    /* try { // try from 05d4cbb0 to 05e4cbb3 has its CatchHandler @ 05d4cbc4 */
                    /* catch() { ... } // from try @ 05d4cbac with catch @ 05d4cbb4
                       try { // try from 05d4cbb4 to 05e4cbef has its CatchHandler @ 05d4c880 */
    if (*(long *)(piVar6 + -2) == param_3) {
                    /* catch() { ... } // from try @ 05d4c9b4 with catch @ 05d4cbd4 */
                    /* catch() { ... } // from try @ 05d4cb8c with catch @ 05d4cbd8 */
      puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_05d4cbe0;
    }
                    /* catch() { ... } // from try @ 05d4cac0 with catch @ 05d4cbb8 */
    in_x9 = in_x9 + -1;
                    /* catch() { ... } // from try @ 05d4c93c with catch @ 05d4cbbc
                       catch() { ... } // from try @ 05d4cba0 with catch @ 05d4cbbc */
    piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 05d4caf0 with catch @ 05d4cbc0 */
  } while (in_x9 != 0);
                    /* catch() { ... } // from try @ 05d4ca74 with catch @ 05d4cbc4
                       catch() { ... } // from try @ 05d4cbb0 with catch @ 05d4cbc4 */
                    /* catch() { ... } // from try @ 05d4cb9c with catch @ 05d4cbc8 */
                    /* catch() { ... } // from try @ 05d4ca00 with catch @ 05d4cbcc */
  puVar2 = (undefined8 *)FUN_032937ac();
                    /* catch() { ... } // from try @ 05d4cb94 with catch @ 05d4cbd0 */
LAB_05d4cbe0:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_072ada08;
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 05d4cbf0 to 05e4cbf3 has its CatchHandler @ 05d4cc00 */
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_072ada08) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_05d4cc4c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac(plVar3,*(long *)PTR_DAT_072ada08,4);
LAB_05d4cc4c:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05d4cca8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d4cca8:
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 != (long *)0x0) {
      lVar4 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_05d4cd08;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_032937ac(plVar3,*(long *)puVar1,0);
LAB_05d4cd08:
      (*(code *)*puVar2)(plVar3,puVar2[1]);
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_05d4cd68;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d4cd68:
      (*(code *)*puVar2)(uVar7);
      if (*unaff_x19 != 0) {
        return *(undefined4 *)(*unaff_x19 + 0x3c);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


