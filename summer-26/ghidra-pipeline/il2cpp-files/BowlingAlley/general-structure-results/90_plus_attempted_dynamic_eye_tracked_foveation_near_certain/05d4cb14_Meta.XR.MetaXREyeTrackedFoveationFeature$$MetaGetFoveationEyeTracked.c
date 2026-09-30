/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetFoveationEyeTracked
ENTRY_POINT: 05d4cb14
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_7;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined4 Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 uVar8;
  
  (*param_1)();
  FUN_05d4f738();
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05d4cb78;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_032937ac();
LAB_05d4cb78:
  (*(code *)*puVar3)();
  puVar1 = PTR_DAT_072ad988;
  if (unaff_x21 != (long *)0x0) {
                    /* try { // try from 05d4cb8c to 05e4cb93 has its CatchHandler @ 05d4cbd8 */
    lVar5 = *unaff_x21;
                    /* try { // try from 05d4cb94 to 05e4cb9b has its CatchHandler @ 05d4cbd0 */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 05d4cb9c to 05e4cb9f has its CatchHandler @ 05d4cbc8 */
                    /* try { // try from 05d4cba0 to 05e4cba3 has its CatchHandler @ 05d4cbbc */
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_072ad988) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05d4cbe0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac();
LAB_05d4cbe0:
    plVar4 = (long *)(*(code *)*puVar3)();
    puVar2 = PTR_DAT_072ada08;
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_072ada08) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_05d4cc4c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_032937ac(plVar4,*(long *)PTR_DAT_072ada08,4);
LAB_05d4cc4c:
      uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      lVar5 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05d4cca8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_032937ac();
LAB_05d4cca8:
      plVar4 = (long *)(*(code *)*puVar3)();
      if (plVar4 != (long *)0x0) {
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_05d4cd08;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_032937ac(plVar4,*(long *)puVar2,0);
LAB_05d4cd08:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
              goto LAB_05d4cd68;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_032937ac();
LAB_05d4cd68:
        (*(code *)*puVar3)(uVar8);
        if (*unaff_x19 != 0) {
          return *(undefined4 *)(*unaff_x19 + 0x3c);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


