/*
FUNCTION_NAME: OVRTelemetry.MarkerPoint$$Dispose
ENTRY_POINT: 07702c54
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void OVRTelemetry_MarkerPoint__Dispose(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  puVar5 = PTR_DAT_08faebf0;
  puVar4 = PTR_DAT_08faebe8;
                    /* try { // try from 07702c78 to 07802c9b has its CatchHandler @ 07702de8 */
  if ((DAT_09548468 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08faea60);
    FUN_0403162c(PTR_DAT_08faea68);
                    /* try { // try from 07702c9c to 07802d47 has its CatchHandler @ 077022e4 */
    FUN_0403162c(PTR_DAT_08faea70);
    FUN_0403162c(PTR_DAT_08faebf8);
    FUN_0403162c(PTR_DAT_08faea78);
    FUN_0403162c(PTR_DAT_08faebf0);
    FUN_0403162c(PTR_DAT_08faebe8);
    DAT_09548468 = 1;
  }
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  lVar7 = thunk_FUN_0406deb8(*(undefined8 *)puVar4);
  FUN_058f0920(lVar7,*(undefined8 *)puVar5);
  puVar6 = PTR_DAT_08faebf8;
  puVar5 = PTR_DAT_08faea68;
  puVar4 = PTR_DAT_08faea60;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x130) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_057d5e44(&stack0x00000048,*(long *)(param_2 + 0x130),*(undefined8 *)PTR_DAT_08faea78);
  while( true ) {
    uVar8 = FUN_072066f4(&stack0x00000048,*(undefined8 *)puVar5);
    if ((uVar8 & 1) == 0) {
      FUN_072066f0(&stack0x00000048,*(undefined8 *)puVar4);
      uVar12 = *(undefined4 *)(param_2 + 0xdc);
      uVar1 = *(undefined4 *)(param_2 + 0xe4);
      uVar2 = *(undefined4 *)(param_2 + 0x128);
      *param_1 = lVar7;
      *(undefined4 *)(param_1 + 2) = uVar12;
      uVar14 = *(undefined8 *)(param_2 + 0xf0);
      uVar13 = *(undefined8 *)(param_2 + 0xe8);
      *(undefined4 *)(param_1 + 1) = uVar1;
      *(undefined4 *)((long)param_1 + 0xc) = uVar2;
      uVar10 = *(undefined8 *)(param_2 + 0xf8);
      *(undefined8 *)((long)param_1 + 0x1c) = uVar14;
      *(undefined8 *)((long)param_1 + 0x14) = uVar13;
      uVar14 = *(undefined8 *)(param_2 + 0x108);
      uVar13 = *(undefined8 *)(param_2 + 0x100);
      *(undefined8 *)((long)param_1 + 0x24) = uVar10;
      uVar10 = *(undefined8 *)(param_2 + 0x110);
      *(undefined8 *)((long)param_1 + 0x34) = uVar14;
      *(undefined8 *)((long)param_1 + 0x2c) = uVar13;
      *(undefined8 *)((long)param_1 + 0x3c) = uVar10;
      *(undefined4 *)((long)param_1 + 0x44) = 0;
      return;
    }
    FUN_07702948(&stack0x00000060,in_stack_00000058);
    if (lVar7 == 0) break;
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)puVar6;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar3 = *(uint *)(lVar7 + 0x18);
    if (uVar3 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (long)(int)uVar3 * 0x30;
      *(uint *)(lVar7 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar9 + 0x28) = in_stack_00000068;
      *(undefined8 *)(lVar9 + 0x20) = in_stack_00000060;
      *(undefined8 *)(lVar9 + 0x38) = in_stack_00000078;
      *(undefined8 *)(lVar9 + 0x30) = in_stack_00000070;
      *(undefined8 *)(lVar9 + 0x48) = in_stack_00000088;
      *(undefined8 *)(lVar9 + 0x40) = in_stack_00000080;
    }
    else {
      FUN_058f11cc(lVar7,&stack0x00000060,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


