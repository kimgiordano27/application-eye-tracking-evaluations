/*
FUNCTION_NAME: OVRManager$$LateUpdate
ENTRY_POINT: 07c64504
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__LateUpdate(long *param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x21;
  long *unaff_x22;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float fVar10;
  float unaff_s14;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined8 uStack0000000000000084;
  float fStack00000000000000dc;
  
  fVar7 = unaff_s8 * unaff_s8 + param_2 + param_3;
  fVar9 = unaff_s14 - unaff_s12;
  fVar10 = unaff_s10 - unaff_s13;
  param_4 = param_5 - param_4;
  if (**(float **)(*param_1 + 0xb8) <= fVar7) {
    fVar8 = param_4 * unaff_s8 + fVar9 * unaff_s9 + fVar10 * unaff_s11;
    fVar9 = fVar9 - (unaff_s9 * fVar8) / fVar7;
    fVar10 = fVar10 - (unaff_s11 * fVar8) / fVar7;
    param_4 = param_4 - (unaff_s8 * fVar8) / fVar7;
  }
  fStack00000000000000dc = param_5;
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar7 = SQRT(param_4 * param_4 + fVar9 * fVar9 + fVar10 * fVar10);
  if (fVar7 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar9 = *pfVar2;
    fVar10 = pfVar2[1];
    param_4 = pfVar2[2];
  }
  else {
    fVar9 = fVar9 / fVar7;
    fVar10 = fVar10 / fVar7;
    param_4 = param_4 / fVar7;
  }
  if (*(char *)(unaff_x20 + 0xf40) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    *(undefined1 *)(unaff_x20 + 0xf40) = 1;
  }
  lVar3 = *(long *)(*unaff_x21 + 0xb8);
  FUN_09516bac(fVar9,fVar10,param_4,*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
               *(undefined4 *)(lVar3 + 0x20),0);
  plVar6 = *(long **)(unaff_x19 + 0x138);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  FUN_09537b20(&stack0x00000050,0);
  uStack0000000000000084 = CONCAT44(in_stack_00000068,uStack0000000000000064);
  in_stack_00000078 = in_stack_00000058;
  in_stack_00000070 = in_stack_00000050;
  uStack000000000000007c = uStack000000000000005c;
  in_stack_00000080 = in_stack_00000060;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09f4d938) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_07c646fc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac(plVar6,*(long *)PTR_DAT_09f4d938,2);
LAB_07c646fc:
                    /* try { // try from 07c646fc to 07d6481f has its CatchHandler @ 07c646fc
                       catch() { ... } // from try @ 07c646fc with catch @ 07c646fc
                       catch() { ... } // from try @ 07c648b8 with catch @ 07c646fc
                       catch() { ... } // from try @ 07c6493c with catch @ 07c646fc
                       catch() { ... } // from try @ 07c64944 with catch @ 07c646fc
                       catch() { ... } // from try @ 07c649e4 with catch @ 07c646fc */
  (*(code *)*puVar1)(&stack0x00000010,plVar6,&stack0x00000070,puVar1[1]);
  *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000024;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
  return;
}


