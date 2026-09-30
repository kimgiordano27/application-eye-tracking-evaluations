/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfValues
ENTRY_POINT: 04e20e3c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfValues(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  long *unaff_x29;
  undefined1 in_stack_00000010;
  undefined4 uStack0000000000000014;
  
                    /* try { // try from 04e20e3c to 04f20e4b has its CatchHandler @ 04e20be0 */
  thunk_FUN_031c39fc(*(undefined8 *)(param_1 + 0x30));
  lVar6 = *unaff_x19;
                    /* try { // try from 04e20e4c to 04f20e4f has its CatchHandler @ 04e20e50 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e20e4c with catch @ 04e20e50
                       try { // try from 04e20e50 to 04f20e73 has its CatchHandler @ 04e20be0 */
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e20e24 with catch @ 04e20e54
                        */
  if (uVar7 != 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e20db8 with catch @ 04e20e58
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e20e28 with catch @ 04e20e5c
                        */
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x29) {
                    /* try { // try from 04e20e8c to 04f20ecb has its CatchHandler @ 04e20be0 */
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04e20e98;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
                    /* try { // try from 04e20e74 to 04f20e8b has its CatchHandler @ 04e20edc */
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_04e20e98:
  uVar1 = (*(code *)*puVar5)();
  lVar6 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000014 = *(undefined4 *)(unaff_x21 + 0x28);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
                    /* try { // try from 04e20ecc to 04f20edb has its CatchHandler @ 04e20edc */
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38),&stack0x00000014);
  lVar6 = *unaff_x19;
                    /* catch() { ... } // from try @ 04e20e74 with catch @ 04e20edc
                       catch() { ... } // from try @ 04e20ecc with catch @ 04e20edc */
                    /* try { // try from 04e20ee0 to 04f20ee3 has its CatchHandler @ 04e20eec */
                    /* try { // try from 04e20ee4 to 04f20eef has its CatchHandler @ 04e20be0 */
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x29) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04e20f2c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_04e20f2c:
  uVar2 = (*(code *)*puVar5)();
  lVar6 = *(long *)(unaff_x22 + 0x20);
  in_stack_00000010 = *(undefined1 *)(unaff_x21 + 0x2c);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40),&stack0x00000010);
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x29) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04e20fc0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_04e20fc0:
  uVar3 = (*(code *)*puVar5)();
  lVar6 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070f5978) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04e2099c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_04e2099c:
  uVar4 = (*(code *)*puVar5)();
  FUN_0594e7e4(unaff_w23,unaff_w24,unaff_w25,unaff_w26,uVar1,uVar2,uVar3,uVar4);
  return;
}


