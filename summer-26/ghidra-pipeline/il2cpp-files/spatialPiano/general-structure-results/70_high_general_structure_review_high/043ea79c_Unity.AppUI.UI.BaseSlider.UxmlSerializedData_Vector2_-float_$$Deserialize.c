/*
FUNCTION_NAME: Unity.AppUI.UI.BaseSlider.UxmlSerializedData<Vector2,-float>$$Deserialize
ENTRY_POINT: 043ea79c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_AppUI_UI_BaseSlider_UxmlSerializedData<Vector2,_float>__Deserialize
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  
  do {
    in_x9 = in_x9 + -1;
    piVar9 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02f421d0();
      goto LAB_043ea7c4;
    }
    plVar10 = (long *)(in_x10 + 2);
    in_x10 = piVar9;
  } while (*plVar10 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
LAB_043ea7c4:
                    /* catch(type#1 @ 06402238) { ... } // from try @ 043ea668 with catch @ 043ea7cc
                        */
  iVar1 = (*(code *)*puVar2)();
                    /* catch(type#1 @ 06402238) { ... } // from try @ 043ea650 with catch @ 043ea7d0
                        */
  if (iVar1 == 1) {
    plVar10 = *(long **)(unaff_x20 + 0x20);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
                    /* try { // try from 043ea7e8 to 044ea7ff has its CatchHandler @ 043ea848 */
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
                    /* try { // try from 043ea800 to 044ea837 has its CatchHandler @ 043ea5d0 */
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_043ea870;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 043ea838 to 044ea847 has its CatchHandler @ 043ea848 */
    puVar2 = (undefined8 *)FUN_02f421d0(plVar10,lVar5,0);
LAB_043ea870:
    UNRECOVERED_JUMPTABLE = (code *)*puVar2;
    uVar6 = puVar2[1];
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x18);
    if (lVar5 == 0) {
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
      FUN_02a7d698(*(undefined8 *)(PTR_DAT_067c9338 + 0xe0));
      plVar10 = (long *)FUN_050e4454(uVar6,0);
      FUN_02a7da48();
      uVar6 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      uVar3 = thunk_FUN_02f6ef30(PTR_DAT_067cd370);
      uVar4 = thunk_FUN_02f6ef30(PTR_DAT_067cd378);
      uVar6 = FUN_04f6f6b4(uVar3,uVar6,uVar4,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
      uVar3 = thunk_FUN_02f45270();
      FUN_050d5404(uVar3,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar3);
    }
                    /* catch() { ... } // from try @ 043ea7e8 with catch @ 043ea848
                       catch() { ... } // from try @ 043ea838 with catch @ 043ea848 */
    plVar10 = *(long **)(lVar5 + 0x40);
                    /* try { // try from 043ea84c to 044ea84f has its CatchHandler @ 043ea858 */
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
                    /* try { // try from 043ea850 to 044ea85b has its CatchHandler @ 043ea5d0 */
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x18);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 043ea84c with catch @ 043ea858
                        */
                    /* WARNING: Could not recover jumptable at 0x043ea860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar10,uVar6);
  return;
}


