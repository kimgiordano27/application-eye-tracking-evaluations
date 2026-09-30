/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ResetBuffer
ENTRY_POINT: 04e21ab4
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ResetBuffer(ushort *param_1,long param_2)

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
  long *unaff_x27;
  undefined1 uStack0000000000000024;
  undefined4 uStack0000000000000034;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x30),&stack0x00000028);
                    /* try { // try from 04e21ad4 to 04f21af7 has its CatchHandler @ 04e21b74 */
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04e21b28;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_04e21b28:
  uVar1 = (*(code *)*puVar5)();
  lVar6 = *(long *)(unaff_x22 + 0x20);
                    /* try { // try from 04e21b40 to 04f21b43 has its CatchHandler @ 04e21b70 */
  uStack0000000000000034 = *(undefined4 *)(unaff_x21 + 0x28);
                    /* try { // try from 04e21b44 to 04f21b57 has its CatchHandler @ 04e21b78 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
                    /* try { // try from 04e21b58 to 04f21b67 has its CatchHandler @ 04e21900 */
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38),&stack0x00000034);
                    /* try { // try from 04e21b68 to 04f21b6b has its CatchHandler @ 04e21b6c */
  lVar6 = *unaff_x19;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e21b68 with catch @ 04e21b6c
                       try { // try from 04e21b6c to 04f21b8f has its CatchHandler @ 04e21900 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e21b40 with catch @ 04e21b70
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e21ad4 with catch @ 04e21b74
                        */
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e21b44 with catch @ 04e21b78
                        */
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04e21bbc;
      }
                    /* try { // try from 04e21b90 to 04f21ba7 has its CatchHandler @ 04e21bf8 */
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
                    /* try { // try from 04e21ba8 to 04f21be7 has its CatchHandler @ 04e21900 */
LAB_04e21bbc:
  uVar2 = (*(code *)*puVar5)();
  lVar6 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000024 = *(undefined1 *)(unaff_x21 + 0x2c);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 04e21be8 to 04f21bf7 has its CatchHandler @ 04e21bf8 */
    lVar6 = FUN_031c09d4();
  }
                    /* catch() { ... } // from try @ 04e21b90 with catch @ 04e21bf8
                       catch() { ... } // from try @ 04e21be8 with catch @ 04e21bf8 */
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40),&stack0x00000024);
                    /* try { // try from 04e21bfc to 04f21bff has its CatchHandler @ 04e21c08 */
  lVar6 = *unaff_x19;
                    /* try { // try from 04e21c00 to 04f21c0b has its CatchHandler @ 04e21900 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04e21bfc with catch @ 04e21c08
                        */
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04e21c50;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_04e21c50:
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
  FUN_0594e68c(unaff_w23,unaff_w24,uVar1,uVar2,uVar3,uVar4,0);
  return;
}


