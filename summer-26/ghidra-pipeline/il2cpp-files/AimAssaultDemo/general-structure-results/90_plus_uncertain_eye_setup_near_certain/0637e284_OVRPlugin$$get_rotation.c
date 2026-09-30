/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 0637e284
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
  puVar6 = PTR_DAT_07db5938;
  puVar5 = PTR_DAT_07db5468;
  puVar4 = PTR_DAT_07db2388;
  puVar3 = PTR_DAT_07db2380;
  puVar2 = PTR_DAT_07d9b718;
                    /* try { // try from 0637e288 to 0647e28b has its CatchHandler @ 0637e2f0 */
                    /* try { // try from 0637e29c to 0647e2a7 has its CatchHandler @ 0637e320 */
                    /* try { // try from 0637e2a8 to 0647e2c3 has its CatchHandler @ 0637df90 */
  lVar9 = thunk_FUN_037788cc(*param_1);
  FUN_0498f38c(lVar9,*(undefined8 *)puVar4);
                    /* try { // try from 0637e2c4 to 0647e2c7 has its CatchHandler @ 0637e2fc */
                    /* try { // try from 0637e2c8 to 0647e2e7 has its CatchHandler @ 0637df90 */
  plVar17 = (long *)0x0;
  do {
    plVar16 = unaff_x19;
    uVar7 = (**(code **)(*plVar16 + 0x228))(plVar16,*(undefined8 *)(*plVar16 + 0x230));
                    /* try { // try from 0637e2e8 to 0647e30b has its CatchHandler @ 0637e320 */
    if ((uVar7 & 0xfffffffe) == 2) {
                    /* catch() { ... } // from try @ 0637e288 with catch @ 0637e2f0 */
      if (plVar17 != (long *)0x0) {
        uVar18 = *(undefined8 *)puVar6;
                    /* catch() { ... } // from try @ 0637e2c4 with catch @ 0637e2fc */
        lVar10 = thunk_FUN_037787d0(plVar16,uVar18);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar16,uVar18);
        }
        lVar10 = *(long *)puVar6;
                    /* try { // try from 0637e30c to 0647e317 has its CatchHandler @ 0637df90 */
        plVar11 = (long *)thunk_FUN_037787d0(plVar16,lVar10);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar16,lVar10);
        }
        lVar13 = *plVar11;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar10) {
              puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_0637e3d8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar12 = (undefined8 *)FUN_0377596c(plVar11,lVar10,2);
LAB_0637e3d8:
        uVar8 = (*(code *)*puVar12)(plVar11,plVar17,puVar12[1]);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)puVar2);
        }
        FUN_062d74e8(&stack0x00000058,2,0);
        uStack000000000000005c = uVar8;
LAB_0637e414:
        in_stack_00000040 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
        in_stack_00000048 = in_stack_00000060;
        in_stack_00000050 = in_stack_00000068;
        if (lVar9 == 0) {
LAB_0637e544:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar13 = *(long *)puVar3;
        in_stack_00000078 = in_stack_00000060;
        in_stack_00000080 = in_stack_00000068;
        lVar10 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        in_stack_00000070 = in_stack_00000040;
        if (lVar10 == 0) goto LAB_0637e544;
        uVar7 = *(uint *)(lVar9 + 0x18);
        if (uVar7 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar7 + 1;
          lVar10 = lVar10 + (long)(int)uVar7 * 0x18;
          *(undefined8 *)(lVar10 + 0x30) = in_stack_00000068;
          *(long *)(lVar10 + 0x28) = in_stack_00000060;
          *(undefined8 *)(lVar10 + 0x20) = in_stack_00000040;
          thunk_FUN_037aeb94(lVar10 + 0x28,0);
        }
        else {
          in_stack_00000028 = in_stack_00000060;
          in_stack_00000030 = in_stack_00000068;
          in_stack_00000020 = in_stack_00000040;
          FUN_0498fcac(lVar9,&stack0x00000020,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    else if (uVar7 == 4) {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar16);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062d74e8(&stack0x00000058,1,0);
      in_stack_00000060 = plVar16[0xc];
      thunk_FUN_037aeb94(&stack0x00000060);
      goto LAB_0637e414;
    }
    unaff_x19 = (long *)plVar16[2];
    plVar17 = plVar16;
    if ((long *)plVar16[2] == (long *)0x0) {
      FUN_03f0af5c(lVar9,*(undefined8 *)PTR_DAT_07db5fa0);
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062d782c(lVar9);
      return;
    }
  } while( true );
}


