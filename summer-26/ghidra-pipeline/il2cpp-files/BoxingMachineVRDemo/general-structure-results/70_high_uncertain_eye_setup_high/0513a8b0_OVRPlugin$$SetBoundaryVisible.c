/*
FUNCTION_NAME: OVRPlugin$$SetBoundaryVisible
ENTRY_POINT: 0513a8b0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetBoundaryVisible(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar9;
  long *unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
code_r0x0513a8b0:
  puVar5 = (undefined8 *)(param_1 + 0x138);
LAB_0513a8b4:
  uVar4 = (*(code *)*puVar5)(unaff_x23,unaff_x22,puVar5[1]);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                    /* try { // try from 0513a8d8 to 0523a8e7 has its CatchHandler @ 0513a8ec */
    thunk_FUN_02dbd7b4(*unaff_x25);
  }
  FUN_050939c4(&stack0x00000058,2,0);
                    /* catch() { ... } // from try @ 0513a6bc with catch @ 0513a8ec
                       catch() { ... } // from try @ 0513a878 with catch @ 0513a8ec
                       catch() { ... } // from try @ 0513a8d8 with catch @ 0513a8ec */
  uStack000000000000005c = uVar4;
  while( true ) {
                    /* try { // try from 0513a8f0 to 0523a8f3 has its CatchHandler @ 0513a968 */
    uVar2 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
                    /* try { // try from 0513a8f4 to 0523a917 has its CatchHandler @ 0513a328 */
                    /* catch() { ... } // from try @ 0513a84c with catch @ 0513a8fc */
                    /* catch() { ... } // from try @ 0513a850 with catch @ 0513a900 */
    if (unaff_x20 == 0) break;
    in_stack_00000078 = in_stack_00000060;
    in_stack_00000080 = in_stack_00000068;
                    /* try { // try from 0513a918 to 0523a92f has its CatchHandler @ 0513a95c */
    lVar6 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    in_stack_00000070 = uVar2;
    if (lVar6 == 0) break;
    uVar3 = *(uint *)(unaff_x20 + 0x18);
                    /* try { // try from 0513a930 to 0523a94b has its CatchHandler @ 0513a328 */
    if (uVar3 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
                    /* try { // try from 0513a94c to 0523a95b has its CatchHandler @ 0513a95c */
      lVar6 = lVar6 + (int)uVar3 * unaff_x27;
                    /* catch() { ... } // from try @ 0513a918 with catch @ 0513a95c
                       catch() { ... } // from try @ 0513a94c with catch @ 0513a95c */
      *(undefined8 *)(lVar6 + 0x30) = in_stack_00000068;
                    /* try { // try from 0513a960 to 0523a963 has its CatchHandler @ 0513a968 */
      *(long *)(lVar6 + 0x28) = in_stack_00000060;
      *(undefined8 *)(lVar6 + 0x20) = uVar2;
      thunk_FUN_02dd37b4(lVar6 + 0x28,0);
                    /* catch() { ... } // from try @ 0513a8f0 with catch @ 0513a968
                       catch() { ... } // from try @ 0513a960 with catch @ 0513a968 */
    }
    else {
      FUN_03a78fd4();
    }
    do {
      while( true ) {
        unaff_x22 = unaff_x19;
        unaff_x19 = (long *)unaff_x22[2];
        if (unaff_x19 == (long *)0x0) {
          FUN_03358a54();
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05093d08();
          return;
        }
        uVar3 = (**(code **)(*unaff_x19 + 0x228))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x230));
        if ((uVar3 & 0xfffffffe) != 2) break;
        if (unaff_x22 != (long *)0x0) {
          lVar9 = *unaff_x26;
          lVar6 = thunk_FUN_02d9d438(unaff_x19,lVar9);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(unaff_x19,lVar9);
          }
          lVar6 = *unaff_x26;
          unaff_x23 = (long *)thunk_FUN_02d9d438(unaff_x19,lVar6);
          if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(unaff_x19,lVar6);
          }
          param_1 = *unaff_x23;
          uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
          if (uVar7 == 0) goto LAB_0513a828;
          piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
          goto LAB_0513a810;
        }
      }
    } while (uVar3 != 4);
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(unaff_x19);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_050939c4(&stack0x00000058,1,0);
    in_stack_00000060 = unaff_x19[0xc];
    thunk_FUN_02dd37b4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0513a810:
    if (*(long *)(piVar8 + -2) == lVar6) {
      param_1 = param_1 + (long)(*piVar8 + 2) * 0x10;
      goto code_r0x0513a8b0;
    }
  }
LAB_0513a828:
  puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,lVar6,2);
  goto LAB_0513a8b4;
}


