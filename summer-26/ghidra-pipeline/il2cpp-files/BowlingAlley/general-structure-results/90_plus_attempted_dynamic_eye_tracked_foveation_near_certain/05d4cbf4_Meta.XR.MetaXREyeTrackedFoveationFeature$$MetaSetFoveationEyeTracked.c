/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaSetFoveationEyeTracked
ENTRY_POINT: 05d4cbf4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_5;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined4 Meta_XR_MetaXREyeTrackedFoveationFeature__MetaSetFoveationEyeTracked(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long *plVar7;
  undefined8 uVar8;
  
  lVar4 = *param_1;
  plVar7 = *(long **)(unaff_x26 + 0xa08);
                    /* catch() { ... } // from try @ 05d4cbf0 with catch @ 05d4cc00 */
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  lVar3 = *plVar7;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
                    /* try { // try from 05d4cc40 to 05e4cc67 has its CatchHandler @ 05d4cc7c */
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_05d4cc4c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_032937ac(param_1,lVar3,4);
LAB_05d4cc4c:
  uVar8 = (*(code *)*puVar1)(param_1,puVar1[1]);
  lVar3 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 05d4cc68 to 05e4cc73 has its CatchHandler @ 05d4c880 */
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* try { // try from 05d4cc74 to 05e4cc7b has its CatchHandler @ 05d4cc7c */
      if (*(long *)(piVar6 + -2) == *unaff_x25) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05d4cca8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d4cca8:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05d4cd08;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_032937ac(plVar2,lVar3,0);
LAB_05d4cd08:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_05d4cd68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d4cd68:
    (*(code *)*puVar1)(uVar8);
    if (*unaff_x19 != 0) {
      return *(undefined4 *)(*unaff_x19 + 0x3c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


