/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<float>$$ToDisplayStrings
ENTRY_POINT: 04e205dc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<float>__ToDisplayStrings(code *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x28;
  undefined1 in_stack_00000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000034;
  
  uVar1 = (*param_1)();
  lVar8 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000034 = *(undefined4 *)(unaff_x21 + 8);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18),&stack0x00000034);
  lVar8 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
        puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_04e20664;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e20664:
  uVar2 = (*(code *)*puVar9)();
  lVar8 = *(long *)(unaff_x22 + 0x20);
  in_stack_00000028 = *(undefined8 *)(unaff_x21 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20),&stack0x00000028);
  lVar8 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
        puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_04e206f8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e206f8:
                    /* try { // try from 04e20700 to 04f20723 has its CatchHandler @ 04e207a0 */
  uVar3 = (*(code *)*puVar9)();
  lVar8 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000024 = *(undefined4 *)(unaff_x21 + 0x18);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),&stack0x00000024);
  lVar8 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
                    /* try { // try from 04e20784 to 04f20793 has its CatchHandler @ 04e20528 */
        puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_04e2078c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
                    /* try { // try from 04e2076c to 04f2076f has its CatchHandler @ 04e2079c */
                    /* try { // try from 04e20770 to 04f20783 has its CatchHandler @ 04e207a4 */
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e2078c:
                    /* try { // try from 04e20794 to 04f20797 has its CatchHandler @ 04e20798 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e20794 with catch @ 04e20798
                       try { // try from 04e20798 to 04f207bb has its CatchHandler @ 04e20528 */
  uVar4 = (*(code *)*puVar9)();
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e2076c with catch @ 04e2079c
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e20700 with catch @ 04e207a0
                        */
  lVar8 = *(long *)(unaff_x22 + 0x20);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e20770 with catch @ 04e207a4
                        */
  in_stack_00000018 = *(undefined8 *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
                    /* try { // try from 04e207bc to 04f207d3 has its CatchHandler @ 04e20824 */
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x30),&stack0x00000018);
  lVar8 = *unaff_x19;
                    /* try { // try from 04e207d4 to 04f20813 has its CatchHandler @ 04e20528 */
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
                    /* try { // try from 04e20814 to 04f20823 has its CatchHandler @ 04e20824 */
        puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_04e20820;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e20820:
                    /* catch() { ... } // from try @ 04e207bc with catch @ 04e20824
                       catch() { ... } // from try @ 04e20814 with catch @ 04e20824 */
                    /* try { // try from 04e20828 to 04f2082b has its CatchHandler @ 04e20834 */
                    /* try { // try from 04e2082c to 04f20837 has its CatchHandler @ 04e20528 */
  uVar5 = (*(code *)*puVar9)();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04e20828 with catch @ 04e20834
                        */
  lVar8 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000014 = *(undefined4 *)(unaff_x21 + 0x28);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38),&stack0x00000014);
  lVar8 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
        puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_04e208b4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e208b4:
  uVar6 = (*(code *)*puVar9)();
  lVar8 = *(long *)(unaff_x22 + 0x20);
  in_stack_00000010 = *(undefined1 *)(unaff_x21 + 0x2c);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40),&stack0x00000010);
  lVar8 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
        puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_04e20948;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e20948:
  uVar7 = (*(code *)*puVar9)();
  FUN_0594e734(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,0);
  return;
}


