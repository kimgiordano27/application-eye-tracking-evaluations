/*
FUNCTION_NAME: FUN_0232e4e4
ENTRY_POINT: 0232e4e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_5;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior
*/


undefined8 FUN_0232e4e4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_03fee88d & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    DAT_03fee88d = 1;
  }
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar8 = (long *)param_1[5];
    if (plVar8 == (long *)0x0)
    goto UnityEngine_UIElements_BaseSlider<float>__UpdateDragElementPosition;
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ae9e74(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
                    /* try { // try from 0232e5a0 to 0242e5a3 has its CatchHandler @ 0232e5d8 */
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0232e5a4;
        }
                    /* try { // try from 0232e57c to 0242e583 has its CatchHandler @ 0232e5dc */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar8,lVar4,0);
LAB_0232e5a4:
                    /* try { // try from 0232e5a4 to 0242e5cb has its CatchHandler @ 0232e4a8 */
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    param_1[8] = lVar4;
    thunk_FUN_01b4f09c(param_1 + 8,lVar4);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
                    /* try { // try from 0232e5cc to 0242e5cf has its CatchHandler @ 0232e5d4 */
    plVar8 = (long *)param_1[8];
                    /* try { // try from 0232e5d0 to 0242e5f3 has its CatchHandler @ 0232e4a8 */
    if (plVar8 == (long *)0x0)
    goto UnityEngine_UIElements_BaseSlider<float>__UpdateDragElementPosition;
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 0232e5cc with catch @ 0232e5d4
                        */
    lVar4 = *plVar8;
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 0232e5a0 with catch @ 0232e5d8
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 0232e57c with catch @ 0232e5dc
                        */
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 0232e5f4 to 0242e5f7 has its CatchHandler @ 0232e618 */
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    /* catch() { ... } // from try @ 0232e5f4 with catch @ 0232e618 */
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0232e620;
        }
                    /* try { // try from 0232e5f8 to 0242e61f has its CatchHandler @ 0232e4a8 */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar1,0);
LAB_0232e620:
                    /* try { // try from 0232e620 to 0242e627 has its CatchHandler @ 0232e63c */
                    /* try { // try from 0232e628 to 0242e633 has its CatchHandler @ 0232e4a8 */
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto UnityEngine_UIElements_BaseSlider<float>__UpdateDragElementPosition;
    }
    plVar8 = (long *)param_1[8];
                    /* try { // try from 0232e634 to 0242e63b has its CatchHandler @ 0232e63c */
    if (plVar8 == (long *)0x0)
    goto UnityEngine_UIElements_BaseSlider<float>__UpdateDragElementPosition;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0232e620 with catch @ 0232e63c
                       catch(type#2 @ 00000000) { ... } // from try @ 0232e634 with catch @ 0232e63c
                        */
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ae9e74(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0232e6a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar8,lVar4,0);
LAB_0232e6a0:
    uVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    lVar4 = param_1[6];
  } while ((lVar4 != 0) &&
          (uVar6 = (**(code **)(lVar4 + 0x18))
                             (*(undefined8 *)(lVar4 + 0x40),uVar2,*(undefined8 *)(lVar4 + 0x28)),
          (uVar6 & 1) == 0));
  lVar4 = param_1[7];
  if (lVar4 != 0) {
    auVar9 = (**(code **)(lVar4 + 0x18))
                       (*(undefined8 *)(lVar4 + 0x40),uVar2,*(undefined8 *)(lVar4 + 0x28));
    *(undefined1 (*) [16])(param_1 + 3) = auVar9;
    return 1;
  }
UnityEngine_UIElements_BaseSlider<float>__UpdateDragElementPosition:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


