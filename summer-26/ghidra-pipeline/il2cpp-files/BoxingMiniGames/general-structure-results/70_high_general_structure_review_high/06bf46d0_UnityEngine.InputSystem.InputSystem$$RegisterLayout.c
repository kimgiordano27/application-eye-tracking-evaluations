/*
FUNCTION_NAME: UnityEngine.InputSystem.InputSystem$$RegisterLayout
ENTRY_POINT: 06bf46d0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x06bf6cc8) */
/* WARNING: Removing unreachable block (ram,0x06bf6c24) */
/* WARNING: Removing unreachable block (ram,0x06bfa32c) */
/* WARNING: Removing unreachable block (ram,0x06bf92f8) */
/* WARNING: Removing unreachable block (ram,0x06bf50c8) */
/* WARNING: Removing unreachable block (ram,0x06bf5bec) */
/* WARNING: Removing unreachable block (ram,0x06bf5f30) */
/* WARNING: Removing unreachable block (ram,0x06bf6348) */
/* WARNING: Removing unreachable block (ram,0x06bf6358) */
/* WARNING: Removing unreachable block (ram,0x06bf6370) */
/* WARNING: Removing unreachable block (ram,0x06bf6378) */
/* WARNING: Removing unreachable block (ram,0x06bf63a0) */
/* WARNING: Removing unreachable block (ram,0x06bf6384) */
/* WARNING: Removing unreachable block (ram,0x06bf6390) */
/* WARNING: Removing unreachable block (ram,0x06bf63ac) */
/* WARNING: Removing unreachable block (ram,0x06bf63b8) */
/* WARNING: Removing unreachable block (ram,0x06bfb234) */
/* WARNING: Removing unreachable block (ram,0x06bf63c0) */
/* WARNING: Removing unreachable block (ram,0x06bfa8d4) */
/* WARNING: Removing unreachable block (ram,0x06bf9adc) */
/* WARNING: Removing unreachable block (ram,0x06bfb22c) */
/* WARNING: Removing unreachable block (ram,0x06bf6a28) */
/* WARNING: Removing unreachable block (ram,0x06bf9c5c) */
/* WARNING: Removing unreachable block (ram,0x06bf95ec) */
/* WARNING: Removing unreachable block (ram,0x06bf68e4) */
/* WARNING: Removing unreachable block (ram,0x06bfb0e8) */
/* WARNING: Removing unreachable block (ram,0x06bf6c0c) */
/* WARNING: Removing unreachable block (ram,0x06bf7280) */
/* WARNING: Removing unreachable block (ram,0x06bf9c6c) */
/* WARNING: Removing unreachable block (ram,0x06bf9c84) */
/* WARNING: Removing unreachable block (ram,0x06bf9f88) */
/* WARNING: Removing unreachable block (ram,0x06bfa5f4) */
/* WARNING: Removing unreachable block (ram,0x06bfa604) */
/* WARNING: Removing unreachable block (ram,0x06bfabb0) */
/* WARNING: Removing unreachable block (ram,0x06bfad4c) */
/* WARNING: Removing unreachable block (ram,0x06bfad5c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UnityEngine_InputSystem_InputSystem__RegisterLayout(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x22;
  long unaff_x23;
  long *plVar17;
  long *unaff_x24;
  int unaff_w25;
  uint unaff_w26;
  undefined8 uVar18;
  long *unaff_x28;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long lVar25;
  long lVar26;
  float unaff_s12;
  undefined1 auVar27 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_000001c0;
  int in_stack_00000234;
  uint in_stack_000003b0;
  uint in_stack_000003b4;
  long in_stack_000003b8;
  long in_stack_00000480;
  undefined8 *in_stack_00000488;
  long in_stack_00000490;
  long in_stack_00000498;
  long in_stack_000004a0;
  long in_stack_000004e8;
  
code_r0x06bf46d0:
  puVar7 = (undefined8 *)(param_1 + 0x138);
  do {
    (*(code *)*puVar7)(unaff_x24,puVar7[1]);
    do {
      if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00(unaff_x23);
      }
      if ((unaff_w26 & 1) != 0) {
        unaff_w25 = 0;
      }
      plVar17 = (long *)*in_stack_000000c8;
      if (plVar17 != (long *)0x0) {
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06bf474c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar17,*(long *)PTR_DAT_079f4598,0);
LAB_06bf474c:
        (*(code *)*puVar7)(plVar17,puVar7[1]);
      }
      if (in_stack_000000c0 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00();
      }
      plVar17 = (long *)*in_stack_00000058;
      if (plVar17 != (long *)0x0) {
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06bf4aac;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar17,*(long *)PTR_DAT_079f4598,0);
LAB_06bf4aac:
        (*(code *)*puVar7)(plVar17,puVar7[1]);
      }
      if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00();
      }
      if (unaff_w25 != 0) goto LAB_06bf354c;
      do {
        do {
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)
                                       System_Func<Model_Output,_Model_Output>_TypeInfo,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar15 & 1) == 0) goto LAB_06bf5144;
            plVar17 = (long *)FUN_06bfc93c();
            if (plVar17 == (long *)0x0) {
LAB_06bf4b3c:
              plVar17 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf4b3c;
              if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar17 = (long *)0x0;
              }
            }
            plVar8 = (long *)FUN_06bfc93c();
            if (plVar8 == (long *)0x0) {
LAB_06bf4b90:
              plVar8 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf4b90;
              if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar8 = (long *)0x0;
              }
            }
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar14 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar14 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar19 = FUN_06bb2960(*(long *)(lVar14 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar14 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = FUN_06bb2960(*(long *)(lVar14 + 0x38),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06c896c8(uVar19,0,in_stack_000004e8,plVar17,0);
            in_stack_00000058 = (undefined8 *)&stack0x00000358;
            in_stack_00000050 = 0;
            if (plVar8 == (long *)0x0) {
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              in_stack_000004a0 = 0;
              in_stack_00000498 = 0;
              in_stack_00000490 = 0;
              FUN_06ae4cb4(&stack0x00000480,uVar19,0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000088 = 0;
              in_stack_00000080 = 0;
              in_stack_00000098 = 0;
              in_stack_00000090 = 0;
              in_stack_000000a0 = 0;
              plVar17 = (long *)FUN_06c8aaf0(uVar20,in_stack_000004e8,&stack0x00000080,0);
            }
            else {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar17 = (long *)FUN_06c896c8(uVar19,uVar20,in_stack_000004e8,plVar8,0);
            }
            in_stack_00000488 = (undefined8 *)&stack0x00000350;
            in_stack_00000480 = 0;
            uVar9 = FUN_06bfc538();
            uVar10 = FUN_06bfc538();
            plVar8 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,
                                          10);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar14 + 0x18) == 0) {
LAB_06bf6968:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar14 = *(long *)(lVar14 + 0x20);
            if ((lVar14 != 0) &&
               (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar9,0);
            }
            if ((int)plVar8[3] == 0) goto LAB_06bf6968;
            plVar8[4] = lVar14;
            thunk_FUN_036b7ad0(plVar8 + 4,lVar14);
            lVar14 = FUN_06bb3098(uVar9,0);
            if ((lVar14 != 0) &&
               (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar9,0);
            }
            if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar8[5] = lVar14;
            thunk_FUN_036b7ad0(plVar8 + 5,lVar14);
            lVar14 = FUN_06bb3098(uVar10,0);
            if ((lVar14 != 0) &&
               (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar9,0);
            }
            if (*(uint *)(plVar8 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar8[6] = lVar14;
            thunk_FUN_036b7ad0(plVar8 + 6,lVar14);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
LAB_06bf6970:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar14 = *(long *)(lVar14 + 0x38);
            if ((lVar14 != 0) &&
               (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar9,0);
            }
            if ((*(uint *)(plVar8 + 3) & 0xfffffffc) == 0) goto LAB_06bf6970;
            plVar8[7] = lVar14;
            thunk_FUN_036b7ad0(plVar8 + 7,lVar14);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar14 + 0x18) < 5) {
LAB_06bf6978:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar14 = *(long *)(lVar14 + 0x40);
            if ((lVar14 != 0) &&
               (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar9,0);
            }
            if (*(uint *)(plVar8 + 3) < 5) goto LAB_06bf6978;
            plVar8[8] = lVar14;
            thunk_FUN_036b7ad0(plVar8 + 8,lVar14);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar14 + 0x18) < 6) {
LAB_06bf6980:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar14 = *(long *)(lVar14 + 0x48);
            if ((lVar14 != 0) &&
               (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar9,0);
            }
            if (*(uint *)(plVar8 + 3) < 6) goto LAB_06bf6980;
            plVar8[9] = lVar14;
            thunk_FUN_036b7ad0(plVar8 + 9,lVar14);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar14 + 0x18) < 7) {
UnityEngine_InputSystem_InputDevice__RequestSync:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar14 = *(long *)(lVar14 + 0x50);
            if ((lVar14 != 0) &&
               (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar9,0);
            }
            if (*(uint *)(plVar8 + 3) < 7) goto UnityEngine_InputSystem_InputDevice__RequestSync;
            plVar8[10] = lVar14;
            thunk_FUN_036b7ad0(plVar8 + 10,lVar14);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar14 + 0x18) & 0xfffffff8) == 0) {
LAB_06bf6990:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar14 = *(long *)(lVar14 + 0x58);
            if ((lVar14 != 0) &&
               (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar9,0);
            }
            if ((*(uint *)(plVar8 + 3) & 0xfffffff8) == 0) goto LAB_06bf6990;
            plVar8[0xb] = lVar14;
            thunk_FUN_036b7ad0(plVar8 + 0xb,lVar14);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar14 + 0x18) < 9) {
LAB_06bf6998:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar14 = *(long *)(lVar14 + 0x60);
            if ((lVar14 != 0) &&
               (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar9,0);
            }
            if (*(uint *)(plVar8 + 3) < 9) goto LAB_06bf6998;
            plVar8[0xc] = lVar14;
            thunk_FUN_036b7ad0(plVar8 + 0xc,lVar14);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar14 + 0x18) < 10) {
LAB_06bf69a0:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar14 = *(long *)(lVar14 + 0x68);
            if ((lVar14 != 0) &&
               (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar9,0);
            }
            if (*(uint *)(plVar8 + 3) < 10) goto LAB_06bf69a0;
            plVar8[0xd] = lVar14;
            thunk_FUN_036b7ad0(plVar8 + 0xd,lVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,plVar8,0);
            FUN_04ee7cc8();
            if (plVar17 != (long *)0x0) {
              lVar14 = *plVar17;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_06bf50b4;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar7 = (undefined8 *)FUN_0367cd30(plVar17,*(long *)PTR_DAT_079f4598,0);
LAB_06bf50b4:
              (*(code *)*puVar7)(plVar17,puVar7[1]);
            }
            plVar17 = (long *)*in_stack_00000058;
            if (plVar17 != (long *)0x0) {
              lVar14 = *plVar17;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_06bf512c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar7 = (undefined8 *)FUN_0367cd30(plVar17,*(long *)PTR_DAT_079f4598,0);
LAB_06bf512c:
              (*(code *)*puVar7)(plVar17,puVar7[1]);
            }
            if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00();
            }
            goto LAB_06bf354c;
          }
LAB_06bf5144:
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Model_Output,_Model_Output>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              fVar21 = (float)FUN_06bb2960(*(long *)(lVar14 + 0x38),0);
              if (fVar21 != 0.0) goto LAB_06bf354c;
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = FUN_06bb2960(*(long *)(lVar14 + 0x30),0);
              plVar17 = (long *)FUN_06bfc93c();
              if (plVar17 == (long *)0x0) {
LAB_06bf5210:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf5210;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18(0,plVar17);
              }
              plVar17 = (long *)FUN_06c896c8(uVar19,0,in_stack_000004e8,plVar17,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000348;
              in_stack_00000480 = 0;
              uVar9 = FUN_06bfc538();
              plVar8 = (long *)FUN_03642a4c(*(undefined8 *)
                                             System_Func<int,_int,_int,_float>_TypeInfo,10);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
LAB_06bf69a8:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(lVar14 + 0x20);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((int)plVar8[3] == 0) goto LAB_06bf69a8;
              plVar8[4] = lVar14;
              thunk_FUN_036b7ad0(plVar8 + 4,lVar14);
              lVar14 = FUN_06bb3098(uVar9,0);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar8[5] = lVar14;
              thunk_FUN_036b7ad0(plVar8 + 5,lVar14);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 3) {
LAB_06bf69b0:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar14 = *(long *)(lVar14 + 0x30);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if (*(uint *)(plVar8 + 3) < 3) goto LAB_06bf69b0;
              plVar8[6] = lVar14;
              thunk_FUN_036b7ad0(plVar8 + 6,lVar14);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
LAB_06bf69b8:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar14 = *(long *)(lVar14 + 0x38);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((*(uint *)(plVar8 + 3) & 0xfffffffc) == 0) goto LAB_06bf69b8;
              plVar8[7] = lVar14;
              thunk_FUN_036b7ad0(plVar8 + 7,lVar14);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 5) {
LAB_06bf69c0:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar14 = *(long *)(lVar14 + 0x40);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if (*(uint *)(plVar8 + 3) < 5) goto LAB_06bf69c0;
              plVar8[8] = lVar14;
              thunk_FUN_036b7ad0(plVar8 + 8,lVar14);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 6) {
LAB_06bf69c8:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar14 = *(long *)(lVar14 + 0x48);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if (*(uint *)(plVar8 + 3) < 6) goto LAB_06bf69c8;
              plVar8[9] = lVar14;
              thunk_FUN_036b7ad0(plVar8 + 9,lVar14);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 7) {
LAB_06bf69d0:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar14 = *(long *)(lVar14 + 0x50);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if (*(uint *)(plVar8 + 3) < 7) goto LAB_06bf69d0;
              plVar8[10] = lVar14;
              thunk_FUN_036b7ad0(plVar8 + 10,lVar14);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffff8) == 0) {
LAB_06bf69d8:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar14 = *(long *)(lVar14 + 0x58);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((*(uint *)(plVar8 + 3) & 0xfffffff8) == 0) goto LAB_06bf69d8;
              plVar8[0xb] = lVar14;
              thunk_FUN_036b7ad0(plVar8 + 0xb,lVar14);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 9) {
LAB_06bf69e0:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar14 = *(long *)(lVar14 + 0x60);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if (*(uint *)(plVar8 + 3) < 9) goto LAB_06bf69e0;
              plVar8[0xc] = lVar14;
              thunk_FUN_036b7ad0(plVar8 + 0xc,lVar14);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 10) {
LAB_06bf69e8:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar14 = *(long *)(lVar14 + 0x68);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if (*(uint *)(plVar8 + 3) < 10) goto LAB_06bf69e8;
              plVar8[0xd] = lVar14;
              thunk_FUN_036b7ad0(plVar8 + 0xd,lVar14);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,plVar8,0)
              ;
              FUN_04ee7cc8();
              if (plVar17 != (long *)0x0) {
                lVar14 = *plVar17;
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                      puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_06bf5654;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar7 = (undefined8 *)FUN_0367cd30(plVar17,*(long *)PTR_DAT_079f4598,0);
LAB_06bf5654:
                (*(code *)*puVar7)(plVar17,puVar7[1]);
              }
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)
                                       System_Func<Model_Output,_Model_Output>_TypeInfo,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a30a70,0);
            if ((uVar15 & 1) != 0) {
              plVar17 = (long *)FUN_06bfc93c();
              if (plVar17 == (long *)0x0) {
LAB_06bf56e0:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf56e0;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              plVar8 = (long *)FUN_06bfc93c();
              if (plVar8 == (long *)0x0) {
LAB_06bf5734:
                plVar8 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf5734;
                if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar8 = (long *)0x0;
                }
              }
              plVar12 = (long *)FUN_06bfc93c();
              if (plVar12 == (long *)0x0) {
LAB_06bf5790:
                plVar12 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_06bf5790;
                if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar12 = (long *)0x0;
                }
              }
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = plVar17[7];
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_06ae539c(&stack0x00000360,0);
              iVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              if (((iVar2 == iVar3) && ((int)plVar12[7] <= (int)plVar17[7])) &&
                 ((int)lVar14 + -1 <= (int)plVar12[7])) {
                iVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item
                                  (&stack0x00000360,1 - (int)lVar14,0);
                iVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                if (iVar2 == iVar3) {
                  uVar19 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                  in_stack_00000070 = 0;
                  in_stack_00000058 = (undefined8 *)0x0;
                  in_stack_00000050 = 0;
                  in_stack_00000068 = 0;
                  in_stack_00000060 = 0;
                  FUN_06ae4cb4(&stack0x00000050,uVar19,0);
                  in_stack_000004a0 = in_stack_00000070;
                  in_stack_00000498 = in_stack_00000068;
                  in_stack_00000490 = in_stack_00000060;
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar9 = FUN_03e16e50(in_stack_000004e8,plVar12,&stack0x00000480,
                                       *(undefined8 *)
                                        System_Collections_Generic_List<IFDStructure>_TypeInfo);
                  in_stack_00000488 = (undefined8 *)&stack0x00000340;
                  in_stack_00000480 = 0;
                  if (plVar8 != (long *)0x0) {
                    if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                    FUN_06c89dd8(in_stack_000004e8,plVar8,uVar9,0);
                  }
                  in_stack_00000058 = (undefined8 *)&stack0x00000338;
                  in_stack_00000050 = 0;
                  uVar9 = FUN_06bfc538();
                  lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,10
                                       );
                  lVar11 = *(long *)(unaff_x22 + 0x28);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar10 = *(undefined8 *)(lVar11 + 0x20);
                  FUN_03154b74(lVar14,uVar10);
                  FUN_03154bd8(lVar14,0,uVar10);
                  lVar11 = *(long *)(unaff_x22 + 0x28);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar10 = *(undefined8 *)(lVar11 + 0x28);
                  FUN_03154b74(lVar14,uVar10);
                  FUN_03154bd8(lVar14,1,uVar10);
                  uVar9 = FUN_06bb3098(uVar9,0);
                  FUN_03154b74(lVar14,uVar9);
                  FUN_03154bd8(lVar14,2,uVar9);
                  lVar11 = *(long *)(unaff_x22 + 0x28);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar9 = *(undefined8 *)(lVar11 + 0x38);
                  FUN_03154b74(lVar14,uVar9);
                  FUN_03154bd8(lVar14,3,uVar9);
                  lVar11 = *(long *)(unaff_x22 + 0x28);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(uint *)(lVar11 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar9 = *(undefined8 *)(lVar11 + 0x40);
                  FUN_03154b74(lVar14,uVar9);
                  FUN_03154bd8(lVar14,4,uVar9);
                  lVar11 = *(long *)(unaff_x22 + 0x28);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(uint *)(lVar11 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar9 = *(undefined8 *)(lVar11 + 0x48);
                  FUN_03154b74(lVar14,uVar9);
                  FUN_03154bd8(lVar14,5,uVar9);
                  lVar11 = *(long *)(unaff_x22 + 0x28);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(uint *)(lVar11 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar9 = *(undefined8 *)(lVar11 + 0x50);
                  FUN_03154b74(lVar14,uVar9);
                  FUN_03154bd8(lVar14,6,uVar9);
                  lVar11 = *(long *)(unaff_x22 + 0x28);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar9 = *(undefined8 *)(lVar11 + 0x58);
                  FUN_03154b74(lVar14,uVar9);
                  FUN_03154bd8(lVar14,7,uVar9);
                  lVar11 = *(long *)(unaff_x22 + 0x28);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(uint *)(lVar11 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar9 = *(undefined8 *)(lVar11 + 0x60);
                  FUN_03154b74(lVar14,uVar9);
                  FUN_03154bd8(lVar14,8,uVar9);
                  lVar11 = *(long *)(unaff_x22 + 0x28);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(uint *)(lVar11 + 0x18) < 10) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar9 = *(undefined8 *)(lVar11 + 0x68);
                  FUN_03154b74(lVar14,uVar9);
                  FUN_03154bd8(lVar14,9,uVar9);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,
                               *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,
                               lVar14,0);
                  FUN_04ee7cc8();
                  FUN_03154064(&stack0x00000050);
                  FUN_03154064(&stack0x00000480);
                }
              }
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)
                                       System_Func<Model_Output,_Model_Output>_TypeInfo,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              plVar17 = (long *)FUN_06bfc93c();
              if (plVar17 == (long *)0x0) {
LAB_06bf5c78:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf5c78;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              plVar8 = (long *)FUN_06bfc93c();
              if (plVar8 == (long *)0x0) {
LAB_06bf5ccc:
                plVar8 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf5ccc;
                if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar8 = (long *)0x0;
                }
              }
              plVar12 = (long *)FUN_06bfc93c();
              if (plVar12 == (long *)0x0) {
LAB_06bf5d20:
                plVar12 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_06bf5d20;
                if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar12 = (long *)0x0;
                }
              }
              plVar13 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
LAB_06bf5d74:
                plVar13 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf5d74;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar13 = (long *)0x0;
                }
              }
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar6 = plVar12[4];
              lVar11 = plVar12[3];
              lVar26 = plVar12[6];
              lVar25 = plVar12[5];
              lVar14 = plVar12[7];
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06adfe8c(&stack0x00000480,plVar17[7],0);
              uVar19 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              FUN_06adff70(&stack0x000002e0,0,uVar19,0);
              plVar12[7] = in_stack_000004a0;
              plVar12[4] = (long)in_stack_00000488;
              plVar12[3] = in_stack_00000480;
              plVar12[6] = in_stack_00000498;
              plVar12[5] = in_stack_00000490;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06c8a3b8(in_stack_000004e8,plVar12,plVar17,0);
              in_stack_000000c8 = (undefined8 *)&stack0x000002d8;
              in_stack_000000c0 = 0;
              plVar12[4] = lVar6;
              plVar12[3] = lVar11;
              plVar12[6] = lVar26;
              plVar12[5] = lVar25;
              plVar12[7] = lVar14;
              if (plVar8 == (long *)0x0) {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                plVar17 = (long *)FUN_03e16a04(in_stack_000004e8,plVar13,
                                               *(undefined8 *)
                                                System_Collections_Generic_List<IFDDirectory>_TypeInfo
                                              );
                goto LAB_06bf5f54;
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar8 = (long *)FUN_06c8a3b8(in_stack_000004e8,plVar8,plVar12,0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar17 = (long *)FUN_06c89dd8(in_stack_000004e8,plVar8,plVar13,0);
              if (plVar8 == (long *)0x0) goto LAB_06bf5f54;
              lVar14 = *plVar8;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 == 0) goto LAB_06bf5efc;
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              goto LAB_06bf5ee4;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              plVar17 = (long *)FUN_06bfc93c();
              if (plVar17 == (long *)0x0) {
LAB_06bf643c:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf643c;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              plVar8 = (long *)FUN_06bfc93c();
              if (plVar8 == (long *)0x0) {
LAB_06bf6490:
                plVar8 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf6490;
                if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar8 = (long *)0x0;
                }
              }
              plVar12 = (long *)FUN_06bfc93c();
              if (plVar12 == (long *)0x0) {
LAB_06bf64e4:
                plVar12 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_06bf64e4;
                if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar12 = (long *)0x0;
                }
              }
              plVar13 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
LAB_06bf6538:
                plVar13 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf6538;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar13 = (long *)0x0;
                }
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06c89998(in_stack_000004e8,plVar17,plVar12,0,0,0);
              in_stack_00000058 = (undefined8 *)&stack0x000002c8;
              in_stack_00000050 = 0;
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              FUN_06ae496c(&stack0x00000480,1,uVar19,0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar17 = (long *)FUN_03e16e50(in_stack_000004e8,plVar8,&stack0x00000420,
                                             *(undefined8 *)
                                              System_Collections_Generic_List<IFDStructure>_TypeInfo
                                            );
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar8 = (long *)FUN_06c89c20(in_stack_000004e8,plVar17,plVar12,plVar13,0);
              in_stack_000000c8 = (undefined8 *)&stack0x000002b8;
              in_stack_000000c0 = 0;
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,1,0);
              in_stack_000004a0 = 0;
              in_stack_00000498 = 0;
              in_stack_00000490 = 0;
              in_stack_00000488 = (undefined8 *)0x0;
              in_stack_00000480 = 0;
              FUN_06ae4cb4(&stack0x00000480,uVar19,0);
              (**(code **)(*plVar8 + 0x188))(plVar8,&stack0x00000450,*(undefined8 *)(*plVar8 + 400))
              ;
              uVar9 = FUN_06bfc538();
              uVar10 = FUN_06bfc538();
              plVar12 = (long *)FUN_03642a4c(*(undefined8 *)
                                              System_Func<int,_int,_int,_float>_TypeInfo,4);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
LAB_06bf6a54:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(lVar14 + 0x20);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)
                 ) {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((int)plVar12[3] == 0) goto LAB_06bf6a54;
              plVar12[4] = lVar14;
              thunk_FUN_036b7ad0(plVar12 + 4,lVar14);
              lVar14 = FUN_06bb3098(uVar9,0);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)
                 ) {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar12[5] = lVar14;
              thunk_FUN_036b7ad0(plVar12 + 5,lVar14);
              lVar14 = FUN_06bb3098(uVar10,0);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)
                 ) {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if (*(uint *)(plVar12 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar12[6] = lVar14;
              thunk_FUN_036b7ad0(plVar12 + 6,lVar14);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
LAB_06bf6a5c:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar14 = *(long *)(lVar14 + 0x38);
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)
                 ) {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((*(uint *)(plVar12 + 3) & 0xfffffffc) == 0) goto LAB_06bf6a5c;
              plVar12[7] = lVar14;
              thunk_FUN_036b7ad0(plVar12 + 7,lVar14);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,plVar12,0);
              FUN_04ee7cc8();
              if (plVar8 != (long *)0x0) {
                lVar14 = *plVar8;
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                      puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                      goto FUN_06bf68d0;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar7 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)PTR_DAT_079f4598,0);
FUN_06bf68d0:
                (*(code *)*puVar7)(plVar8,puVar7[1]);
              }
              if (plVar17 != (long *)0x0) {
                lVar14 = *plVar17;
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                      puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_06bf6948;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar7 = (undefined8 *)FUN_0367cd30(plVar17,*(long *)PTR_DAT_079f4598,0);
LAB_06bf6948:
                (*(code *)*puVar7)(plVar17,puVar7[1]);
              }
              plVar17 = (long *)*in_stack_00000058;
              if (plVar17 != (long *)0x0) {
                lVar14 = *plVar17;
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                      puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_06bf72e4;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar7 = (undefined8 *)FUN_0367cd30(plVar17,*(long *)PTR_DAT_079f4598,0);
LAB_06bf72e4:
                (*(code *)*puVar7)(plVar17,puVar7[1]);
              }
              if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c00();
              }
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_06bb28d4(*(long *)(lVar14 + 0x28),0);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (iVar2 == 1) {
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                iVar2 = FUN_06bb2f08(*(undefined8 *)(lVar14 + 0x40),0);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                iVar3 = FUN_06bb2f08(*(undefined8 *)(lVar14 + 0x48),0);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                iVar4 = FUN_06bb2f08(*(undefined8 *)(lVar14 + 0x40),0);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                iVar5 = FUN_06bb2f08(*(undefined8 *)(lVar14 + 0x48),0);
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar9 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,0,uVar9);
                uVar9 = FUN_06bb2ea4(1,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
                uVar9 = FUN_06bb2f90(0,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,2,uVar9);
                uVar9 = FUN_06bb2f90(0,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,3,uVar9);
                uVar9 = FUN_06bb2ea4(iVar4 * iVar2,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,4,uVar9);
                uVar9 = FUN_06bb2ea4(iVar5 + iVar4 * iVar3,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,5,uVar9);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar14,0
                            );
                FUN_04ee7cc8();
              }
              else {
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar23 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar9 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,0,uVar9);
                uVar9 = FUN_06bb2ea4(0,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
                uVar9 = FUN_06bb2f90(fVar21 * fVar23,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,2,uVar9);
                uVar9 = FUN_06bb2f90(fVar22 * fVar23 + fVar24,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,3,uVar9);
                uVar9 = FUN_06bb2ea4(0,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,4,uVar9);
                uVar9 = FUN_06bb2ea4(0,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,5,uVar9);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar14,0
                            );
                FUN_04ee7cc8();
              }
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a36348,0);
            if ((uVar15 & 1) != 0) {
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_06bb28d4(*(long *)(lVar14 + 0x28),0);
              if ((iVar2 != 0) || (fVar21 != 0.0)) goto LAB_06bf354c;
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar19 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
              plVar17 = (long *)FUN_06bfc93c();
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar17 == (long *)0x0) {
LAB_06bf7678:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf7678;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              FUN_06c896c8(uVar19,0,in_stack_000004e8,plVar17,0);
              in_stack_00000488 = (undefined8 *)&stack0x000002b0;
              in_stack_00000480 = 0;
              uVar9 = FUN_06bfc538();
              lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar10 = *(undefined8 *)(lVar11 + 0x20);
              FUN_03154b74(lVar14,uVar10);
              FUN_03154bd8(lVar14,0,uVar10);
              uVar9 = FUN_06bb3098(uVar9,0);
              FUN_03154b74(lVar14,uVar9);
              FUN_03154bd8(lVar14,1,uVar9);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar14,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36348,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_06bb28d4(*(long *)(lVar14 + 0x28),0);
              if ((iVar2 != 0) || (fVar21 != 0.0)) goto LAB_06bf354c;
              plVar17 = (long *)FUN_06bfc93c();
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar9 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar17 == (long *)0x0) {
LAB_06bf7ab0:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf7ab0;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              FUN_06c896c8(uVar9,0,in_stack_000004e8,plVar17,0);
              in_stack_00000488 = (undefined8 *)&stack0x000002a8;
              in_stack_00000480 = 0;
              uVar9 = FUN_06bfc538();
              lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar11 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar10 = *(undefined8 *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
              FUN_03154b74(lVar14,uVar10);
              FUN_03154bd8(lVar14,0,uVar10);
              uVar9 = FUN_06bb3098(uVar9,0);
              FUN_03154b74(lVar14,uVar9);
              FUN_03154bd8(lVar14,1,uVar9);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar14,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a30a70,0);
            if ((uVar15 & 1) != 0) {
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_06bb28d4(*(long *)(lVar14 + 0x28),0);
              if ((iVar2 != 0) || (fVar21 != unaff_s12)) goto LAB_06bf354c;
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar19 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
              plVar17 = (long *)FUN_06bfc93c();
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar17 == (long *)0x0) {
LAB_06bf7cd0:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf7cd0;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,uVar19,in_stack_000004e8,plVar17,0);
              in_stack_00000488 = (undefined8 *)&stack0x000002a0;
              in_stack_00000480 = 0;
              uVar9 = FUN_06bfc538();
              lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar10 = *(undefined8 *)(lVar11 + 0x20);
              FUN_03154b74(lVar14,uVar10);
              FUN_03154bd8(lVar14,0,uVar10);
              uVar9 = FUN_06bb3098(uVar9,0);
              FUN_03154b74(lVar14,uVar9);
              FUN_03154bd8(lVar14,1,uVar9);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar14,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_06bb28d4(*(long *)(lVar14 + 0x28),0);
              if ((iVar2 != 0) || (fVar21 != unaff_s12)) goto LAB_06bf354c;
              plVar17 = (long *)FUN_06bfc93c();
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar19 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar17 == (long *)0x0) {
LAB_06bf7f04:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf7f04;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,uVar19,in_stack_000004e8,plVar17,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000298;
              in_stack_00000480 = 0;
              uVar9 = FUN_06bfc538();
              lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar11 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar10 = *(undefined8 *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
              FUN_03154b74(lVar14,uVar10);
              FUN_03154bd8(lVar14,0,uVar10);
              uVar9 = FUN_06bb3098(uVar9,0);
              FUN_03154b74(lVar14,uVar9);
              FUN_03154bd8(lVar14,1,uVar9);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar14,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a36770,0);
            if ((uVar15 & 1) != 0) {
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_06bb28d4(*(long *)(lVar14 + 0x28),0);
              if ((iVar2 != 0) || (fVar21 != unaff_s12)) goto LAB_06bf354c;
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
              plVar17 = (long *)FUN_06bfc93c();
              if (in_stack_000003b4 == 0) {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar17 == (long *)0x0) {
LAB_06bf812c:
                  plVar17 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf812c;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar17 = (long *)0x0;
                  }
                }
                FUN_06c896c8(0x3f800000,-fVar21,in_stack_000004e8,plVar17,0);
                in_stack_00000488 = (undefined8 *)&stack0x00000290;
                in_stack_00000480 = 0;
                uVar9 = FUN_06bfc538();
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar10 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar10);
                FUN_03154bd8(lVar14,0,uVar10);
                uVar9 = FUN_06bb3098(uVar9,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar14,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
                goto LAB_06bf354c;
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar17 == (long *)0x0) {
LAB_06bf8270:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf8270;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,-fVar21,in_stack_000004e8,plVar17,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000288;
              in_stack_00000480 = 0;
              uVar9 = FUN_06bfc538();
              lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              uVar9 = FUN_06bb3098(uVar9,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_03154b74(lVar14,uVar9);
              FUN_03154bd8(lVar14,0,uVar9);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar9 = *(undefined8 *)(lVar11 + 0x20);
              FUN_03154b74(lVar14,uVar9);
              FUN_03154bd8(lVar14,1,uVar9);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar14,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36770,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_06bb28d4(*(long *)(lVar14 + 0x28),0);
              if ((iVar2 != 0) || (fVar21 != unaff_s12)) goto LAB_06bf354c;
              plVar17 = (long *)FUN_06bfc93c();
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
              if (in_stack_000003b0 == 0) {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar17 == (long *)0x0) {
LAB_06bf84a8:
                  plVar17 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf84a8;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar17 = (long *)0x0;
                  }
                }
                FUN_06c896c8(0x3f800000,-fVar21,in_stack_000004e8,plVar17,0);
                in_stack_00000488 = (undefined8 *)&stack0x00000280;
                in_stack_00000480 = 0;
                uVar9 = FUN_06bfc538();
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar10 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar10);
                FUN_03154bd8(lVar14,0,uVar10);
                uVar9 = FUN_06bb3098(uVar9,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar14,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
                goto LAB_06bf354c;
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar17 == (long *)0x0) {
LAB_06bf85ec:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf85ec;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,fVar21,in_stack_000004e8,plVar17,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000278;
              in_stack_00000480 = 0;
              uVar9 = FUN_06bfc538();
              lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              uVar9 = FUN_06bb3098(uVar9,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_03154b74(lVar14,uVar9);
              FUN_03154bd8(lVar14,0,uVar9);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar9 = *(undefined8 *)(lVar11 + 0x28);
              FUN_03154b74(lVar14,uVar9);
              FUN_03154bd8(lVar14,1,uVar9);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar14,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_06bb28d4(*(long *)(lVar14 + 0x28),0);
              if ((iVar2 != 0) || (fVar21 != unaff_s12)) goto LAB_06bf354c;
              plVar17 = (long *)FUN_06bfc93c();
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar19 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar17 == (long *)0x0) {
LAB_06bf8824:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf8824;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,uVar19,in_stack_000004e8,plVar17,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000270;
              in_stack_00000480 = 0;
              uVar9 = FUN_06bfc538();
              lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar11 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar10 = *(undefined8 *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
              FUN_03154b74(lVar14,uVar10);
              FUN_03154bd8(lVar14,0,uVar10);
              uVar9 = FUN_06bb3098(uVar9,0);
              FUN_03154b74(lVar14,uVar9);
              FUN_03154bd8(lVar14,1,uVar9);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar14,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a35338,0);
            if ((uVar15 & 1) != 0) {
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_06bb28d4(*(long *)(lVar14 + 0x28),0);
              if ((iVar2 != 0) || (fVar21 != 0.0)) goto LAB_06bf354c;
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
              plVar17 = (long *)FUN_06bfc93c();
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar17 == (long *)0x0) {
LAB_06bf8a44:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf8a44;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              FUN_06c896c8(unaff_s12 / fVar21,0,in_stack_000004e8,plVar17,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000268;
              in_stack_00000480 = 0;
              uVar9 = FUN_06bfc538();
              uVar10 = *(undefined8 *)PTR_DAT_07a35338;
              if (in_stack_000003b4 == 0) {
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar18 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar18);
                FUN_03154bd8(lVar14,0,uVar18);
                uVar9 = FUN_06bb3098(uVar9,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
              }
              else {
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                uVar9 = FUN_06bb3098(uVar9,0);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,0,uVar9);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar9 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
              }
              FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar10,lVar14,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a35338,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_06bb28d4(*(long *)(lVar14 + 0x28),0);
              if ((iVar2 != 0) || (fVar21 != 0.0)) goto LAB_06bf354c;
              plVar17 = (long *)FUN_06bfc93c();
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
              if (in_stack_000003b0 == 0) {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar17 == (long *)0x0) {
LAB_06bf8cf4:
                  plVar17 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf8cf4;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar17 = (long *)0x0;
                  }
                }
                FUN_06c896c8(unaff_s12 / fVar21,0,in_stack_000004e8,plVar17,0);
                in_stack_00000488 = (undefined8 *)&stack0x00000260;
                in_stack_00000480 = 0;
                uVar9 = FUN_06bfc538();
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar10 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar10);
                FUN_03154bd8(lVar14,0,uVar10);
                uVar9 = FUN_06bb3098(uVar9,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar14,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
                goto LAB_06bf354c;
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar17 == (long *)0x0) {
LAB_06bf8e38:
                plVar17 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf8e38;
                if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar17 = (long *)0x0;
                }
              }
              FUN_06c896c8(fVar21,0,in_stack_000004e8,plVar17,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000258;
              in_stack_00000480 = 0;
              uVar9 = FUN_06bfc538();
              lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              uVar9 = FUN_06bb3098(uVar9,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_03154b74(lVar14,uVar9);
              FUN_03154bd8(lVar14,0,uVar9);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar9 = *(undefined8 *)(lVar11 + 0x28);
              FUN_03154b74(lVar14,uVar9);
              FUN_03154bd8(lVar14,1,uVar9);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar14,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
          if ((uVar15 & 1) == 0) {
LAB_06bf95fc:
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                        *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                          *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
              if ((uVar15 & 1) != 0) {
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                lVar14 = FUN_06bb3114(*(undefined8 *)(lVar14 + 0x20),0);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(long *)(lVar14 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                memmove(&stack0x00000160,(void *)(*(long *)(lVar14 + 0x78) + 0x14),0x68);
                bVar1 = FUN_06cada30(&stack0x00000160,0);
                if ((bVar1 & in_stack_000001c0._4_4_ == 2) == 0) goto LAB_06bf354c;
                plVar17 = (long *)FUN_06bfc93c();
                if (plVar17 == (long *)0x0) {
LAB_06bf96cc:
                  plVar17 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf96cc;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar17 = (long *)0x0;
                  }
                }
                plVar8 = (long *)FUN_06bfc93c();
                if (plVar8 == (long *)0x0) {
LAB_06bf9720:
                  plVar8 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf9720;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar8 = (long *)0x0;
                  }
                }
                plVar12 = (long *)FUN_06bfc93c();
                if (plVar12 == (long *)0x0) {
UnityEngine_InputSystem_InputSystem__PerformDefaultPluginInitialization:
                  plVar12 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar12 + 0x130) < bVar1)
                  goto UnityEngine_InputSystem_InputSystem__PerformDefaultPluginInitialization;
                  if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar12 = (long *)0x0;
                  }
                }
                plVar13 = (long *)FUN_06bfc93c();
                if (plVar13 == (long *)0x0) {
LAB_06bf97c8:
                  plVar13 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf97c8;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar13 = (long *)0x0;
                  }
                }
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar19 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                in_stack_00000070 = 0;
                in_stack_00000058 = (undefined8 *)0x0;
                in_stack_00000050 = 0;
                in_stack_00000068 = 0;
                in_stack_00000060 = 0;
                FUN_06ae496c(&stack0x00000050,uVar19,1,0);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                auVar27 = FUN_03e16e50(in_stack_000004e8,plVar17,&stack0x00000480,
                                       *(undefined8 *)
                                        System_Collections_Generic_List<IFDStructure>_TypeInfo);
                in_stack_00000158 = auVar27._0_8_;
                in_stack_00000058 = &stack0x00000158;
                in_stack_00000050 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18(0,auVar27._8_8_,in_stack_00000158);
                }
                in_stack_00000150 = FUN_06c8a3b8(in_stack_000004e8,plVar12,in_stack_00000158,0);
                in_stack_000000c8 = &stack0x00000150;
                in_stack_000000c0 = 0;
                uVar19 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                in_stack_000004a0 = 0;
                in_stack_00000498 = 0;
                in_stack_00000490 = 0;
                FUN_06ae496c(&stack0x00000480,1,uVar19,0);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                in_stack_00000148 =
                     FUN_03e16e50(in_stack_000004e8,plVar8,&stack0x000004b0,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<IFDStructure>_TypeInfo);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                auVar27 = FUN_06c89998(in_stack_000004e8,in_stack_00000148,plVar12,0,0,0);
                in_stack_00000140 = auVar27._0_8_;
                in_stack_00000488 = &stack0x00000140;
                in_stack_00000480 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18(0,auVar27._8_8_,in_stack_00000140);
                }
                in_stack_00000138 = FUN_06c89dd8(in_stack_000004e8,plVar13,in_stack_00000140,0);
                in_stack_000000b8 = &stack0x00000138;
                in_stack_000000b0 = 0;
                uVar9 = FUN_06bfc538();
                uVar10 = FUN_06bfc538();
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar18 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar18);
                FUN_03154bd8(lVar14,0,uVar18);
                uVar9 = FUN_06bb3098(uVar9,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
                uVar9 = FUN_06bb3098(uVar10,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,2,uVar9);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar11 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar9 = *(undefined8 *)(lVar11 + 0x38);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,3,uVar9);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar14,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x000000b0);
                FUN_03154064(&stack0x00000480);
                FUN_03154064(&stack0x000004b0);
                FUN_03154064(&stack0x000000c0);
                FUN_03154064(&stack0x00000050);
                goto LAB_06bf354c;
              }
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                        *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                          *(undefined8 *)
                                           System_Func<Type,_SerializationEvents>_TypeInfo,0);
              if ((uVar15 & 1) != 0) {
                plVar17 = (long *)FUN_06bfc93c();
                if (plVar17 == (long *)0x0) {
LAB_06bf9d14:
                  plVar17 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf9d14;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar17 = (long *)0x0;
                  }
                }
                plVar8 = (long *)FUN_06bfc93c();
                if (plVar8 == (long *)0x0) {
LAB_06bf9d68:
                  plVar8 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf9d68;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar8 = (long *)0x0;
                  }
                }
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar19 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar20 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                in_stack_00000130 = FUN_06c896c8(uVar19,0,in_stack_000004e8,plVar17,0);
                in_stack_00000488 = &stack0x00000130;
                in_stack_00000480 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                in_stack_00000128 = FUN_06c896c8(uVar19,uVar20,in_stack_000004e8,plVar8,0);
                in_stack_00000058 = &stack0x00000128;
                in_stack_00000050 = 0;
                uVar9 = FUN_06bfc538();
                uVar10 = FUN_06bfc538();
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar18 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar18);
                FUN_03154bd8(lVar14,0,uVar18);
                uVar9 = FUN_06bb3098(uVar9,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
                uVar9 = FUN_06bb3098(uVar10,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,2,uVar9);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar9 = *(undefined8 *)(lVar11 + 0x38);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,3,uVar9);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar14,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000050);
                FUN_03154064(&stack0x00000480);
                goto LAB_06bf354c;
              }
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                          *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
              if ((uVar15 & 1) != 0) {
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar19 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar20 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
                plVar17 = (long *)FUN_06bfc93c();
                if (plVar17 == (long *)0x0) {
LAB_06bfa058:
                  plVar17 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bfa058;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar17 = (long *)0x0;
                  }
                }
                plVar8 = (long *)FUN_06bfc93c();
                if (plVar8 == (long *)0x0) {
LAB_06bfa0ac:
                  plVar8 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bfa0ac;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar8 = (long *)0x0;
                  }
                }
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                in_stack_00000120 = FUN_06c896c8(uVar19,0,in_stack_000004e8,plVar17,0);
                in_stack_00000058 = &stack0x00000120;
                in_stack_00000050 = 0;
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar19 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                in_stack_000004a0 = 0;
                in_stack_00000498 = 0;
                in_stack_00000490 = 0;
                FUN_06ae496c(&stack0x00000480,1,uVar19,0);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                in_stack_00000028 = 0;
                in_stack_00000020 = 0;
                in_stack_00000038 = 0;
                in_stack_00000030 = 0;
                in_stack_00000040 = 0;
                in_stack_00000118 = FUN_06c8aaf0(uVar20,in_stack_000004e8,&stack0x00000020,0);
                in_stack_00000488 = &stack0x00000118;
                in_stack_00000480 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                auVar27 = FUN_06c89998(in_stack_000004e8,in_stack_00000118,plVar17,0,0,0);
                in_stack_00000110 = auVar27._0_8_;
                in_stack_000000c8 = &stack0x00000110;
                in_stack_000000c0 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18(0,auVar27._8_8_,in_stack_00000110);
                }
                in_stack_00000108 = FUN_06c89dd8(in_stack_000004e8,plVar8,in_stack_00000110,0);
                in_stack_000000b8 = &stack0x00000108;
                in_stack_000000b0 = 0;
                uVar9 = FUN_06bfc538();
                uVar10 = FUN_06bfc538();
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar18 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar18);
                FUN_03154bd8(lVar14,0,uVar18);
                uVar9 = FUN_06bb3098(uVar9,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
                uVar9 = FUN_06bb3098(uVar10,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,2,uVar9);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar11 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar9 = *(undefined8 *)(lVar11 + 0x38);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,3,uVar9);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar14,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x000000b0);
                FUN_03154064(&stack0x000000c0);
                FUN_03154064(&stack0x00000480);
                FUN_03154064(&stack0x00000050);
                goto LAB_06bf354c;
              }
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                        *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                          *(undefined8 *)
                                           System_Func<Type,_SerializationEvents>_TypeInfo,0);
              if ((uVar15 & 1) != 0) {
                plVar17 = (long *)FUN_06bfc93c();
                if (plVar17 == (long *)0x0) {
LAB_06bfa694:
                  plVar17 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bfa694;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar17 = (long *)0x0;
                  }
                }
                plVar8 = (long *)FUN_06bfc93c();
                if (plVar8 == (long *)0x0) {
LAB_06bfa6e8:
                  plVar8 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bfa6e8;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar8 = (long *)0x0;
                  }
                }
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar19 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar20 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                in_stack_00000100 = FUN_06c896c8(uVar19,0,in_stack_000004e8,plVar17,0);
                in_stack_00000488 = &stack0x00000100;
                in_stack_00000480 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                in_stack_000000f8 = FUN_06c896c8(uVar19,uVar20,in_stack_000004e8,plVar8,0);
                in_stack_00000058 = &stack0x000000f8;
                in_stack_00000050 = 0;
                uVar9 = FUN_06bfc538();
                uVar10 = FUN_06bfc538();
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar18 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar18);
                FUN_03154bd8(lVar14,0,uVar18);
                uVar9 = FUN_06bb3098(uVar9,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
                uVar9 = FUN_06bb3098(uVar10,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,2,uVar9);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,lVar14,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000050);
                FUN_03154064(&stack0x00000480);
                goto LAB_06bf354c;
              }
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                          *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0
                                         );
              if ((uVar15 & 1) != 0) {
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar19 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x30),0);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar20 = FUN_06bb2ffc(*(undefined8 *)(lVar14 + 0x38),0);
                plVar17 = (long *)FUN_06bfc93c();
                if (plVar17 == (long *)0x0) {
LAB_06bfa9a4:
                  plVar17 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bfa9a4;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar17 = (long *)0x0;
                  }
                }
                plVar8 = (long *)FUN_06bfc93c();
                if (plVar8 == (long *)0x0) {
LAB_06bfa9f8:
                  plVar8 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bfa9f8;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar8 = (long *)0x0;
                  }
                }
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                in_stack_000000f0 = FUN_06c896c8(uVar19,0,in_stack_000004e8,plVar17,0);
                in_stack_00000488 = &stack0x000000f0;
                in_stack_00000480 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                auVar27 = FUN_06c896c8(uVar20,0,in_stack_000004e8,plVar17,0);
                in_stack_000000e8 = auVar27._0_8_;
                in_stack_00000058 = &stack0x000000e8;
                in_stack_00000050 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18(0,auVar27._8_8_,in_stack_000000e8);
                }
                in_stack_000000e0 = FUN_06c89dd8(in_stack_000004e8,plVar8,in_stack_000000e8,0);
                in_stack_000000c8 = &stack0x000000e0;
                in_stack_000000c0 = 0;
                uVar9 = FUN_06bfc538();
                uVar10 = FUN_06bfc538();
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar18 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar18);
                FUN_03154bd8(lVar14,0,uVar18);
                uVar9 = FUN_06bb3098(uVar9,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
                uVar9 = FUN_06bb3098(uVar10,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,2,uVar9);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,lVar14,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x000000c0);
                FUN_03154064(&stack0x00000050);
                FUN_03154064(&stack0x00000480);
              }
            }
          }
          else {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
            if ((uVar15 & 1) == 0) goto LAB_06bf95fc;
            if (*(long *)(unaff_x22 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            memmove(&stack0x000001d0,(void *)(*(long *)(unaff_x22 + 0x78) + 0x14),0x68);
            uVar15 = FUN_06cada30(&stack0x000001d0,0);
            if ((uVar15 & 1) != 0) {
              if (*(long *)(unaff_x22 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              memmove(&stack0x000001d0,(void *)(*(long *)(unaff_x22 + 0x78) + 0x14),0x68);
              if (in_stack_00000234 == 2) {
                plVar17 = (long *)FUN_06bfc93c();
                if (plVar17 == (long *)0x0) {
LAB_06bf9018:
                  plVar17 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf9018;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar17 = (long *)0x0;
                  }
                }
                plVar8 = (long *)FUN_06bfc93c();
                if (plVar8 == (long *)0x0) {
LAB_06bf906c:
                  plVar8 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf906c;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar8 = (long *)0x0;
                  }
                }
                plVar12 = (long *)FUN_06bfc93c();
                if (plVar12 == (long *)0x0) {
LAB_06bf90c0:
                  plVar12 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_06bf90c0;
                  if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar12 = (long *)0x0;
                  }
                }
                plVar13 = (long *)FUN_06bfc93c();
                if (plVar13 == (long *)0x0) {
UnityEngine_InputSystem_InputSystem__get_remoting:
                  plVar13 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1)
                  goto UnityEngine_InputSystem_InputSystem__get_remoting;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar13 = (long *)0x0;
                  }
                }
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_06c8a3b8(in_stack_000004e8,plVar17,plVar12,0);
                in_stack_00000488 = (undefined8 *)&stack0x00000250;
                in_stack_00000480 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar9 = FUN_06c8a3b8(in_stack_000004e8,plVar8,plVar12,0);
                in_stack_00000058 = (undefined8 *)&stack0x00000248;
                in_stack_00000050 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_06c89dd8(in_stack_000004e8,uVar9,plVar13,0);
                in_stack_000000c8 = (undefined8 *)&stack0x00000240;
                in_stack_000000c0 = 0;
                uVar9 = FUN_06bfc538();
                uVar10 = FUN_06bfc538();
                lVar14 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar18 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar14,uVar18);
                FUN_03154bd8(lVar14,0,uVar18);
                uVar9 = FUN_06bb3098(uVar9,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,1,uVar9);
                uVar9 = FUN_06bb3098(uVar10,0);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,2,uVar9);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar9 = *(undefined8 *)(lVar11 + 0x38);
                FUN_03154b74(lVar14,uVar9);
                FUN_03154bd8(lVar14,3,uVar9);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar14,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x000000c0);
                FUN_03154064(&stack0x00000050);
                FUN_03154064(&stack0x00000480);
              }
            }
          }
LAB_06bf354c:
          do {
            do {
              do {
                do {
                  do {
                    uVar15 = FUN_04ee7c30();
                    if ((uVar15 & 1) == 0) {
                      FUN_06bfbedc();
                      return;
                    }
                    if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                  } while (*(char *)(in_stack_000003b8 + 0x10) != '\0');
                  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                  }
                  uVar15 = FUN_06bfbf98(in_stack_000003b8,&stack0x000003b4);
                } while ((uVar15 & 1) == 0);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b4) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                unaff_x22 = FUN_06bb3114(*(undefined8 *)
                                          (lVar14 + (long)(int)in_stack_000003b4 * 8 + 0x20),0);
                if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                uVar15 = FUN_06bfbf98(unaff_x22,&stack0x000003b0);
              } while ((uVar15 & 1) == 0);
              if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(long *)(unaff_x22 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar2 = FUN_053a3a50(*(long *)(unaff_x22 + 0x58),
                                   *(undefined8 *)
                                    System_Collections_Generic_KeyValuePair<string,_string>_TypeInfo
                                  );
            } while (iVar2 != 1);
            if (*(int *)(*unaff_x28 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar15 = FUN_06bfc160(unaff_x22);
          } while ((uVar15 & 1) != 0);
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a36770,0);
            if ((uVar15 & 1) != 0) {
              plVar8 = (long *)FUN_06bfc93c();
              plVar17 = (long *)FUN_06bfc93c();
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((int)plVar8[9] == 0) {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)PTR_DAT_07a33940;
                if (plVar17 == (long *)0x0) {
                  uVar15 = (ulong)*(byte *)(lVar14 + 0x130);
LAB_06bf3774:
                  plVar17 = (long *)0x0;
                }
                else {
                  uVar15 = (ulong)*(byte *)(lVar14 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar14 + 0x130)) goto LAB_06bf3774;
                  if (*(long *)(*(long *)(*plVar17 + 200) + uVar15 * 8 + -8) != lVar14) {
                    plVar17 = (long *)0x0;
                  }
                }
                if ((uint)*(byte *)(*plVar8 + 0x130) < (uint)uVar15) {
                  plVar8 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar8 + 200) + uVar15 * 8 + -8) != lVar14) {
                  plVar8 = (long *)0x0;
                }
                plVar17 = (long *)FUN_06c8a0c8(in_stack_000004e8,plVar17,plVar8,0);
              }
              else {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
                if (plVar17 == (long *)0x0) {
                  uVar15 = (ulong)*(byte *)(lVar14 + 0x130);
LAB_06bf3734:
                  plVar17 = (long *)0x0;
                }
                else {
                  uVar15 = (ulong)*(byte *)(lVar14 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar14 + 0x130)) goto LAB_06bf3734;
                  if (*(long *)(*(long *)(*plVar17 + 200) + uVar15 * 8 + -8) != lVar14) {
                    plVar17 = (long *)0x0;
                  }
                }
                if ((uint)*(byte *)(*plVar8 + 0x130) < (uint)uVar15) {
                  plVar8 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar8 + 200) + uVar15 * 8 + -8) != lVar14) {
                  plVar8 = (long *)0x0;
                }
                plVar17 = (long *)FUN_06c8a240(in_stack_000004e8,plVar17,plVar8,0);
              }
              in_stack_00000488 = (undefined8 *)&stack0x000003a8;
              in_stack_00000480 = 0;
              uVar9 = FUN_06bfc538();
              uVar10 = *(undefined8 *)PTR_DAT_07a36770;
              if (in_stack_000003b4 == 1) {
                plVar8 = (long *)FUN_03642a4c(*(undefined8 *)
                                               System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar14 = FUN_06bb3098(uVar9,0);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((lVar14 != 0) &&
                   (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0
                   )) {
                  uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar9,0);
                }
                if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar8[4] = lVar14;
                thunk_FUN_036b7ad0(plVar8 + 4,lVar14);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
LAB_06bf4858:
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                lVar14 = *(long *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
                if ((lVar14 != 0) &&
                   (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0
                   )) {
                  uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar9,0);
                }
                if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_06bf4858;
                plVar8[5] = lVar14;
                thunk_FUN_036b7ad0(plVar8 + 5,lVar14);
              }
              else {
                plVar8 = (long *)FUN_03642a4c(*(undefined8 *)
                                               System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
LAB_06bf4850:
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
                if ((lVar14 != 0) &&
                   (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0
                   )) {
                  uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar9,0);
                }
                if ((int)plVar8[3] == 0) goto LAB_06bf4850;
                plVar8[4] = lVar14;
                thunk_FUN_036b7ad0(plVar8 + 4,lVar14);
                lVar14 = FUN_06bb3098(uVar9,0);
                if ((lVar14 != 0) &&
                   (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0
                   )) {
                  uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar9,0);
                }
                if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar8[5] = lVar14;
                thunk_FUN_036b7ad0(plVar8 + 5,lVar14);
              }
              FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar10,plVar8,0);
              FUN_04ee7cc8();
              if (plVar17 != (long *)0x0) {
                lVar14 = *plVar17;
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                      puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_06bf39d4;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar7 = (undefined8 *)FUN_0367cd30(plVar17,*(long *)PTR_DAT_079f4598,0);
LAB_06bf39d4:
                (*(code *)*puVar7)(plVar17,puVar7[1]);
              }
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36770,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a30a70,0);
            if ((uVar15 & 1) == 0) goto LAB_06bf3ad4;
            plVar17 = (long *)FUN_06bfc93c();
            plVar8 = (long *)FUN_06bfc93c();
            if (plVar17 == (long *)0x0) {
LAB_06bf3a98:
              if (in_stack_000003b0 == 0) {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)PTR_DAT_07a33940;
                if (plVar8 == (long *)0x0) {
LAB_06bf3d50:
                  plVar8 = (long *)0x0;
                  if (plVar17 == (long *)0x0) goto LAB_06bf448c;
LAB_06bf4478:
                  if (*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar14 + 0x130)) goto LAB_06bf448c;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 +
                               -8) != lVar14) {
                    plVar17 = (long *)0x0;
                  }
                }
                else {
                  if (*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar14 + 0x130)) goto LAB_06bf3d50;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8
                               ) != lVar14) {
                    plVar8 = (long *)0x0;
                  }
                  if (plVar17 != (long *)0x0) goto LAB_06bf4478;
LAB_06bf448c:
                  plVar17 = (long *)0x0;
                }
                lVar14 = FUN_06c8a0c8(in_stack_000004e8,plVar8,plVar17,0);
              }
              else {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)PTR_DAT_07a33940;
                if (plVar17 == (long *)0x0) {
LAB_06bf3ac8:
                  plVar17 = (long *)0x0;
                  if (plVar8 == (long *)0x0)
                  goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
LAB_06bf3f1c:
                  if (*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar14 + 0x130))
                  goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8
                               ) != lVar14) {
                    plVar8 = (long *)0x0;
                  }
                }
                else {
                  if (*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar14 + 0x130)) goto LAB_06bf3ac8;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 +
                               -8) != lVar14) {
                    plVar17 = (long *)0x0;
                  }
                  if (plVar8 != (long *)0x0) goto LAB_06bf3f1c;
UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson:
                  plVar8 = (long *)0x0;
                }
                lVar14 = FUN_06c89dd8(in_stack_000004e8,plVar17,plVar8,0);
              }
            }
            else {
              lVar14 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
              bVar1 = *(byte *)(lVar14 + 0x130);
              uVar15 = (ulong)bVar1;
              if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar17 + 200) + uVar15 * 8 + -8) != lVar14))
              goto LAB_06bf3a98;
              if (in_stack_000003b0 == 0) {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((plVar8 == (long *)0x0) || (*(byte *)(*plVar8 + 0x130) < bVar1)) {
                  plVar8 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar8 + 200) + uVar15 * 8 + -8) != lVar14) {
                  plVar8 = (long *)0x0;
                }
                lVar14 = FUN_06c8a240(in_stack_000004e8,plVar8,plVar17,0);
              }
              else {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((plVar8 == (long *)0x0) || (*(byte *)(*plVar8 + 0x130) < bVar1)) {
                  plVar8 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar8 + 200) + uVar15 * 8 + -8) != lVar14) {
                  plVar8 = (long *)0x0;
                }
                lVar14 = FUN_06c89f50(in_stack_000004e8,plVar17,plVar8,0);
              }
            }
            uVar9 = FUN_06bfc538();
            if (in_stack_000003b0 == 0) {
              plVar17 = (long *)FUN_03642a4c(*(undefined8 *)
                                              System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
LAB_06bfb104:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar11 = *(long *)(lVar11 + 0x20);
              if ((lVar11 != 0) &&
                 (lVar6 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar17 + 0x40)), lVar6 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((int)plVar17[3] == 0) goto LAB_06bfb104;
              plVar17[4] = lVar11;
              thunk_FUN_036b7ad0(plVar17 + 4,lVar11);
              lVar11 = FUN_06bb3098(uVar9,0);
              if ((lVar11 != 0) &&
                 (lVar6 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar17 + 0x40)), lVar6 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((*(uint *)(plVar17 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar17[5] = lVar11;
              thunk_FUN_036b7ad0(plVar17 + 5,lVar11);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar17,0);
              FUN_04ee7cc8();
            }
            else {
              plVar17 = (long *)FUN_03642a4c(*(undefined8 *)
                                              System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = FUN_06bb3098(uVar9,0);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((lVar11 != 0) &&
                 (lVar6 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar17 + 0x40)), lVar6 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((int)plVar17[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar17[4] = lVar11;
              thunk_FUN_036b7ad0(plVar17 + 4,lVar11);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar11 + 0x18) <= in_stack_000003b0) {
LAB_06bfb0e0:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar11 = *(long *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
              if ((lVar11 != 0) &&
                 (lVar6 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar17 + 0x40)), lVar6 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((*(uint *)(plVar17 + 3) & 0xfffffffe) == 0) goto LAB_06bfb0e0;
              plVar17[5] = lVar11;
              thunk_FUN_036b7ad0(plVar17 + 5,lVar11);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,plVar17,0);
              FUN_04ee7cc8();
            }
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06ae5f08(lVar14,0);
            goto LAB_06bf354c;
          }
LAB_06bf3ad4:
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a30a70,0);
            if ((uVar15 & 1) != 0) {
              plVar17 = (long *)FUN_06bfc93c();
              plVar8 = (long *)FUN_06bfc93c();
              if (plVar17 == (long *)0x0) {
                if (in_stack_000004e8 == 0) {
LAB_06bfb11c:
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)PTR_DAT_07a33940;
LAB_06bf3d70:
                plVar17 = (long *)0x0;
                if (plVar8 == (long *)0x0) {
LAB_06bf3d8c:
                  plVar8 = (long *)0x0;
                }
                else {
LAB_06bf3d78:
                  if (*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar14 + 0x130)) goto LAB_06bf3d8c;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8
                               ) != lVar14) {
                    plVar8 = (long *)0x0;
                  }
                }
                lVar14 = FUN_06c89dd8(in_stack_000004e8,plVar17,plVar8,0);
              }
              else {
                lVar11 = *plVar17;
                lVar14 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
                bVar1 = *(byte *)(lVar14 + 0x130);
                if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) {
                  if (in_stack_000004e8 == 0) goto LAB_06bfb11c;
                  lVar14 = *(long *)PTR_DAT_07a33940;
                  if (*(byte *)(lVar11 + 0x130) < *(byte *)(lVar14 + 0x130)) goto LAB_06bf3d70;
                  if (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8)
                      != lVar14) {
                    plVar17 = (long *)0x0;
                  }
                  if (plVar8 != (long *)0x0) goto LAB_06bf3d78;
                  goto LAB_06bf3d8c;
                }
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((plVar8 == (long *)0x0) || (*(byte *)(*plVar8 + 0x130) < bVar1)) {
                  plVar8 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
                  plVar8 = (long *)0x0;
                }
                lVar14 = FUN_06c89f50(in_stack_000004e8,plVar17,plVar8,0);
              }
              uVar9 = FUN_06bfc538();
              plVar17 = (long *)FUN_03642a4c(*(undefined8 *)
                                              System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (in_stack_000003b0 < *(uint *)(lVar11 + 0x18)) {
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar11 = *(long *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
                if ((lVar11 != 0) &&
                   (lVar6 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar17 + 0x40)), lVar6 == 0)
                   ) {
                  uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar9,0);
                }
                if ((int)plVar17[3] != 0) {
                  plVar17[4] = lVar11;
                  thunk_FUN_036b7ad0(plVar17 + 4,lVar11);
                  lVar11 = FUN_06bb3098(uVar9,0);
                  if ((lVar11 != 0) &&
                     (lVar6 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar6 == 0)) {
                    uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar9,0);
                  }
                  if ((*(uint *)(plVar17 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  plVar17[5] = lVar11;
                  thunk_FUN_036b7ad0(plVar17 + 5,lVar11);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar17,0
                              );
                  FUN_04ee7cc8();
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_06ae5f08(lVar14,0);
                  goto LAB_06bf354c;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36348,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a36348,0);
            if ((uVar15 & 1) == 0) goto LAB_06bf3ca8;
            plVar17 = (long *)FUN_06bfc93c();
            plVar8 = (long *)FUN_06bfc93c();
            if (plVar17 == (long *)0x0) {
              if (in_stack_000004e8 == 0) {
LAB_06bfb148:
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)PTR_DAT_07a33940;
LAB_06bf3da8:
              plVar17 = (long *)0x0;
LAB_06bf3dac:
              if (plVar8 == (long *)0x0) {
LAB_06bf3dc4:
                plVar8 = (long *)0x0;
              }
              else {
                if (*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar14 + 0x130)) goto LAB_06bf3dc4;
                if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8)
                    != lVar14) {
                  plVar8 = (long *)0x0;
                }
              }
              lVar14 = FUN_06c8a3b8(in_stack_000004e8,plVar17,plVar8,0);
            }
            else {
              lVar11 = *plVar17;
              lVar14 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
              bVar1 = *(byte *)(lVar14 + 0x130);
              if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) {
                if (in_stack_000004e8 == 0) goto LAB_06bfb148;
                lVar14 = *(long *)PTR_DAT_07a33940;
                if (*(byte *)(lVar11 + 0x130) < *(byte *)(lVar14 + 0x130)) goto LAB_06bf3da8;
                if (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8)
                    != lVar14) {
                  plVar17 = (long *)0x0;
                }
                goto LAB_06bf3dac;
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((plVar8 == (long *)0x0) || (*(byte *)(*plVar8 + 0x130) < bVar1)) {
                plVar8 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
                plVar8 = (long *)0x0;
              }
              lVar14 = FUN_06c8a530(in_stack_000004e8,plVar17,plVar8,0);
            }
            uVar9 = FUN_06bfc538();
            plVar17 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo
                                           ,2);
            lVar11 = *(long *)(unaff_x22 + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (in_stack_000003b0 < *(uint *)(lVar11 + 0x18)) {
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar11 = *(long *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
              if ((lVar11 != 0) &&
                 (lVar6 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar17 + 0x40)), lVar6 == 0))
              {
                uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar9,0);
              }
              if ((int)plVar17[3] != 0) {
                plVar17[4] = lVar11;
                thunk_FUN_036b7ad0(plVar17 + 4,lVar11);
                lVar11 = FUN_06bb3098(uVar9,0);
                if ((lVar11 != 0) &&
                   (lVar6 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar17 + 0x40)), lVar6 == 0)
                   ) {
                  uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar9,0);
                }
                if ((*(uint *)(plVar17 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar17[5] = lVar11;
                thunk_FUN_036b7ad0(plVar17 + 5,lVar11);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,plVar17,0);
                FUN_04ee7cc8();
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_06ae5f08(lVar14,0);
                goto LAB_06bf354c;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
LAB_06bf3ca8:
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
        } while ((uVar15 & 1) == 0);
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                    *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
      } while ((uVar15 & 1) == 0);
      plVar17 = (long *)FUN_06bfc93c();
      if (plVar17 == (long *)0x0) {
LAB_06bf3d20:
        plVar17 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
        if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_06bf3d20;
        if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_07a33940) {
          plVar17 = (long *)0x0;
        }
      }
      plVar8 = (long *)FUN_06bfc93c();
      if (plVar8 == (long *)0x0) {
LAB_06bf40e0:
        plVar8 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
        if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf40e0;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07a33940
           ) {
          plVar8 = (long *)0x0;
        }
      }
      plVar12 = (long *)FUN_06bfc93c();
      if (plVar12 == (long *)0x0) {
UnityEngine_InputSystem_InputInteractionContext__get_control:
        plVar12 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
        if (*(byte *)(*plVar12 + 0x130) < bVar1)
        goto UnityEngine_InputSystem_InputInteractionContext__get_control;
        if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_07a33940) {
          plVar12 = (long *)0x0;
        }
      }
      plVar13 = (long *)FUN_06bfc93c();
      if (plVar13 == (long *)0x0) {
LAB_06bf4188:
        plVar13 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
        if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf4188;
        if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_07a33940) {
          plVar13 = (long *)0x0;
        }
      }
      if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_06c8a3b8(in_stack_000004e8,plVar17,plVar12,0);
      in_stack_00000058 = (undefined8 *)&stack0x000003a0;
      in_stack_00000050 = 0;
      if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = FUN_06c8a3b8(in_stack_000004e8,plVar8,plVar12,0);
      in_stack_000000c8 = (undefined8 *)&stack0x00000398;
      in_stack_000000c0 = 0;
      if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      unaff_x24 = (long *)FUN_06c89dd8(in_stack_000004e8,uVar9,plVar13,0);
      in_stack_000000b8 = (undefined8 *)&stack0x00000390;
      in_stack_000000b0 = 0;
      if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar19 = FUN_06ae539c(&stack0x00000360,0);
      in_stack_000004a0 = 0;
      in_stack_00000498 = 0;
      in_stack_00000490 = 0;
      in_stack_00000488 = (undefined8 *)0x0;
      in_stack_00000480 = 0;
      FUN_06ae4cb4(&stack0x00000480,uVar19,0);
      (**(code **)(*unaff_x24 + 0x188))
                (unaff_x24,&stack0x000003c0,*(undefined8 *)(*unaff_x24 + 400));
      uVar9 = FUN_06bfc538();
      uVar10 = FUN_06bfc538();
      plVar17 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
      lVar14 = *(long *)(unaff_x22 + 0x28);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(int *)(lVar14 + 0x18) == 0) {
LAB_06bf4860:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar14 = *(long *)(lVar14 + 0x20);
      if ((lVar14 != 0) &&
         (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0)) {
        uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar9,0);
      }
      if ((int)plVar17[3] == 0) goto LAB_06bf4860;
      plVar17[4] = lVar14;
      thunk_FUN_036b7ad0(plVar17 + 4,lVar14);
      lVar14 = FUN_06bb3098(uVar9,0);
      if ((lVar14 != 0) &&
         (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0)) {
        uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar9,0);
      }
      if ((*(uint *)(plVar17 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar17[5] = lVar14;
      thunk_FUN_036b7ad0(plVar17 + 5,lVar14);
      lVar14 = FUN_06bb3098(uVar10,0);
      if ((lVar14 != 0) &&
         (lVar11 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0)) {
        uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar9,0);
      }
      if (*(uint *)(plVar17 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar17[6] = lVar14;
      thunk_FUN_036b7ad0(plVar17 + 6,lVar14);
      FUN_06bfc890(unaff_x22,in_stack_000003b8,
                   *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,plVar17,0);
      FUN_04ee7cc8();
      unaff_x23 = 0;
      unaff_w26 = 0;
      unaff_w25 = 2;
    } while (unaff_x24 == (long *)0x0);
    param_1 = *unaff_x24;
    uVar15 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
          param_1 = param_1 + (long)*piVar16 * 0x10;
          goto code_r0x06bf46d0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(unaff_x24,*(long *)PTR_DAT_079f4598,0);
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_06bf5ee4:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_06bf5f18;
    }
  }
LAB_06bf5efc:
  puVar7 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)PTR_DAT_079f4598,0);
LAB_06bf5f18:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_06bf5f54:
  if (plVar17 != (long *)0x0) {
    uVar19 = FUN_06ae539c(&stack0x00000360,0);
    in_stack_00000070 = 0;
    in_stack_00000058 = (undefined8 *)0x0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_06ae4cb4(&stack0x00000050,uVar19,0);
    (**(code **)(*plVar17 + 0x188))(plVar17,&stack0x000003f0,*(undefined8 *)(*plVar17 + 400));
    FUN_06bfc538();
    FUN_06bfc538();
    FUN_0753c580(&System_Func<UniqueIdentifier_Decorator>_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


