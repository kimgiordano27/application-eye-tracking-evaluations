/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 0909c0f4
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


long * OVRPlugin__GetNodePositionValid(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  FUN_04947ee4(PTR_DAT_0ac76670);
  FUN_04947ee4(PTR_DAT_0ac76690);
  *(undefined1 *)(unaff_x22 + 0x23f) = 1;
  plVar6 = *(long **)(unaff_x20 + 0x120);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
                    /* try { // try from 0909c124 to 0919c12b has its CatchHandler @ 0909c2c8 */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
                    /* try { // try from 0909c134 to 0919c14b has its CatchHandler @ 0909c2d8 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac76670) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0909c170;
        }
        uVar4 = uVar4 - 1;
                    /* try { // try from 0909c14c to 0919c2a7 has its CatchHandler @ 0909bf08 */
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac76670,0);
LAB_0909c170:
    plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
    puVar1 = PTR_DAT_0ac76690;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar7 = *unaff_x21;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x21 + 0x14);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uStack0000000000000028 = (undefined4)unaff_x21[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x21 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac76690) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_0909c1ec;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac76690,4);
LAB_0909c1ec:
      in_stack_00000048 = uStack0000000000000028;
      uStack0000000000000054 = uStack0000000000000034;
      uStack000000000000004c = uStack000000000000002c;
      in_stack_00000050 = uStack0000000000000030;
      in_stack_00000040 = uVar7;
      (*(code *)*puVar2)(plVar6,&stack0x00000040,puVar2[1]);
      lVar3 = *plVar6;
      uVar7 = *unaff_x19;
      uStack0000000000000014 = *(undefined8 *)((long)unaff_x19 + 0x14);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uStack0000000000000008 = (undefined4)unaff_x19[1];
      uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x19 + 0xc);
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x19 + 0xc) >> 0x20);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_0909c270;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar1,2);
LAB_0909c270:
      in_stack_00000048 = uStack0000000000000008;
      uStack0000000000000054 = uStack0000000000000014;
      uStack000000000000004c = uStack000000000000000c;
      in_stack_00000050 = uStack0000000000000010;
      in_stack_00000040 = uVar7;
      (*(code *)*puVar2)(plVar6,&stack0x00000040,puVar2[1]);
      return plVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0909c2ac to 0919c2af has its CatchHandler @ 0909c2c4 */
  FUN_0494818c();
}


