/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryVisible
ENTRY_POINT: 0513a7f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryVisible(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar10;
  long unaff_x24;
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
  
code_r0x0513a7f0:
  plVar5 = (long *)thunk_FUN_02d9d438(param_1,param_2);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88(unaff_x19,unaff_x24);
  }
  lVar7 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == unaff_x24) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_0513a8b4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,unaff_x24,2);
LAB_0513a8b4:
  uVar4 = (*(code *)*puVar6)(plVar5,unaff_x22,puVar6[1]);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x25);
  }
  FUN_050939c4(&stack0x00000058,2,0);
  param_1 = unaff_x19;
  uStack000000000000005c = uVar4;
  while( true ) {
    uVar2 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    if (unaff_x20 == 0) break;
    in_stack_00000078 = in_stack_00000060;
    in_stack_00000080 = in_stack_00000068;
    lVar7 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    in_stack_00000070 = uVar2;
    if (lVar7 == 0) break;
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      lVar7 = lVar7 + (int)uVar3 * unaff_x27;
      *(undefined8 *)(lVar7 + 0x30) = in_stack_00000068;
      *(long *)(lVar7 + 0x28) = in_stack_00000060;
      *(undefined8 *)(lVar7 + 0x20) = uVar2;
      thunk_FUN_02dd37b4(lVar7 + 0x28,0);
    }
    else {
      FUN_03a78fd4();
    }
    do {
      while( true ) {
        unaff_x22 = param_1;
        param_1 = (long *)unaff_x22[2];
        if (param_1 == (long *)0x0) {
          FUN_03358a54();
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05093d08();
          return;
        }
        uVar3 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
        if ((uVar3 & 0xfffffffe) != 2) break;
        if (unaff_x22 != (long *)0x0) {
          lVar10 = *unaff_x26;
          lVar7 = thunk_FUN_02d9d438(param_1,lVar10);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(param_1,lVar10);
          }
          param_2 = *unaff_x26;
          unaff_x19 = param_1;
          unaff_x24 = param_2;
          goto code_r0x0513a7f0;
        }
      }
    } while (uVar3 != 4);
                    /* try { // try from 0513a84c to 0523a84f has its CatchHandler @ 0513a8fc */
                    /* try { // try from 0513a850 to 0523a86b has its CatchHandler @ 0513a900 */
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
                    /* try { // try from 0513a86c to 0523a877 has its CatchHandler @ 0513a328 */
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(param_1);
    }
                    /* try { // try from 0513a878 to 0523a88f has its CatchHandler @ 0513a8ec */
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_050939c4(&stack0x00000058,1,0);
                    /* try { // try from 0513a890 to 0523a8d7 has its CatchHandler @ 0513a328 */
    in_stack_00000060 = param_1[0xc];
    thunk_FUN_02dd37b4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


