/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 03c6e224
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c6e4a0) */
/* WARNING: Removing unreachable block (ram,0x03c6e3e8) */
/* WARNING: Removing unreachable block (ram,0x03c6e458) */
/* WARNING: Removing unreachable block (ram,0x03c6e4ac) */
/* WARNING: Removing unreachable block (ram,0x03c6e450) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(ulong param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  char cStack000000000000008c;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06761fe8);
                    /* try { // try from 03c6e238 to 03d6e247 has its CatchHandler @ 03c6e248 */
    FUN_02d6084c(PTR_DAT_06761ff8);
                    /* catch() { ... } // from try @ 03c6e1c4 with catch @ 03c6e248
                       catch() { ... } // from try @ 03c6e238 with catch @ 03c6e248 */
                    /* try { // try from 03c6e24c to 03d6e24f has its CatchHandler @ 03c6e258 */
    FUN_02d6084c(PTR_DAT_06762010);
                    /* try { // try from 03c6e250 to 03d6e25b has its CatchHandler @ 03c6e06c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03c6e24c with catch @ 03c6e258
                        */
    FUN_02d6084c(PTR_DAT_0675eb90);
    FUN_02d6084c(PTR_DAT_06762028);
    FUN_02d6084c(PTR_DAT_0675eb88);
    FUN_02d6084c(PTR_DAT_0675eb80);
    *(undefined1 *)(unaff_x19 + 0xc2c) = 1;
  }
  in_stack_00000070 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  _uStack0000000000000060 = 0;
  in_stack_00000040 = 0;
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  cStack000000000000008c = '\0';
  FUN_0506ac34(uVar12,&stack0x0000008c,0);
  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eb80);
  FUN_03a37a7c(lVar7,*(undefined8 *)PTR_DAT_0675eb88);
  if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_047cb23c(&stack0x00000008,*(long *)(param_2 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70));
  puVar5 = PTR_DAT_06762028;
  puVar4 = PTR_DAT_06761ff8;
  puVar3 = PTR_DAT_06761fe8;
  puVar2 = PTR_DAT_0675eb90;
  in_stack_00000058 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000008;
  in_stack_00000068 = in_stack_00000020;
  _uStack0000000000000060 = in_stack_00000018;
  in_stack_00000070 = in_stack_00000028;
  while( true ) {
    do {
      uVar8 = FUN_04b1b3f8(&stack0x00000050,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xb8));
      uVar9 = _uStack0000000000000060;
      if ((uVar8 & 1) == 0) {
        FUN_04b1b51c(&stack0x00000050,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xc0));
        if (lVar7 != 0) {
          FUN_03a38cc8(&stack0x00000008,lVar7,*(undefined8 *)puVar5);
          in_stack_00000038 = in_stack_00000010;
          in_stack_00000030 = in_stack_00000008;
          in_stack_00000040 = in_stack_00000018;
          while (uVar9 = FUN_04a68d14(&stack0x00000030,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
            FUN_03c6e110(param_2,in_stack_00000040 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 200));
          }
          FUN_04a68d10(&stack0x00000030,*(undefined8 *)puVar3);
          if (cStack000000000000008c != '\0') {
            thunk_FUN_02d6ec70(uVar12,0);
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar6 = uStack0000000000000060;
      uVar8 = FUN_050571a0();
    } while ((uVar8 & 1) == 0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar10 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)puVar2;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar10 == 0) break;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
    }
    else {
      FUN_03a382d0(lVar7,uVar9 & 0xffffffff,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


