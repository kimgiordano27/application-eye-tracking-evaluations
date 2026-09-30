/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeStringArray
ENTRY_POINT: 02e4d458
PROGRAM: vrfs-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__SerializeStringArray
               (ulong param_1,float param_2,undefined8 param_3,undefined8 *param_4,
               undefined4 param_5,long param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long *unaff_x19;
  undefined8 uVar18;
  int iVar19;
  long unaff_x23;
  long unaff_x25;
  ulong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ulong uVar23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000dc;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d8a890);
    thunk_FUN_0159f088(PTR_DAT_06e21e50);
    thunk_FUN_0159f088(PTR_DAT_06e46208);
    thunk_FUN_0159f088(PTR_DAT_06e52d88);
    thunk_FUN_0159f088(PTR_DAT_06e2a808);
    thunk_FUN_0159f088(PTR_DAT_06dc9e60);
    thunk_FUN_0159f088(PTR_DAT_06dcf6a8);
    thunk_FUN_0159f088(PTR_DAT_06e2ac78);
    thunk_FUN_0159f088(PTR_DAT_06dd35a8);
    *(undefined1 *)(unaff_x23 + 0x9cf) = 1;
  }
  puVar3 = PTR_DAT_06dd35a8;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  fStack00000000000000dc = 0.0;
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  plVar8 = (long *)FUN_036684c8(param_3,0);
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar13);
    lVar13 = *(long *)puVar3;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar13 != 0) {
    iVar19 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (0 < iVar19) {
      FUN_031dd574(*(undefined8 *)(lVar13 + 0x10),0,iVar19,0);
    }
    puVar5 = PTR_DAT_06e46208;
    puVar4 = PTR_DAT_06e2a808;
    puVar2 = PTR_DAT_06e21e50;
    if (plVar8 != (long *)0x0) {
      iVar19 = 0;
      do {
        lVar13 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_02e4d5d4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_015c2a80(plVar8,*(long *)puVar2,0);
LAB_02e4d5d4:
        iVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (iVar7 <= iVar19) {
          lVar13 = *(long *)puVar3;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar13 = *(long *)puVar3;
          }
          puVar2 = PTR_DAT_06dcf6a8;
          uVar11 = (*(undefined8 **)(lVar13 + 0xb8))[2];
          uVar18 = **(undefined8 **)(lVar13 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_06e2ac78 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_022d0a78(uVar11,uVar18,*(undefined8 *)puVar2);
          if (unaff_x25 != 0) {
            FUN_029ebd40(unaff_x25,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),
                         *(undefined8 *)PTR_DAT_06e52d88);
            return;
          }
          break;
        }
        lVar13 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_02e4d634;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_015c2a80(plVar8,*(long *)puVar5,0);
LAB_02e4d634:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,iVar19,puVar9[1]);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_016466fc(*(long *)puVar3);
        }
        uVar15 = FUN_02e4d8e8(plVar10,param_5);
        if ((uVar15 & 1) != 0) {
          if (plVar10 == (long *)0x0) break;
          uVar21 = *(undefined4 *)((long)plVar10 + 0x34);
          lVar13 = plVar10[7];
          uVar22 = *(undefined4 *)((long)plVar10 + 0x3c);
          lVar14 = plVar10[8];
          uVar11 = FUN_036636fc(plVar10,0);
          in_stack_000000b0 = param_4[2];
          in_stack_000000a8 = param_4[1];
          in_stack_000000a0 = *param_4;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar3);
          }
          in_stack_00000048 = in_stack_000000a8;
          in_stack_00000040 = in_stack_000000a0;
          in_stack_00000050 = in_stack_000000b0;
          uVar15 = FUN_02e4dad4(uVar21,(int)lVar13,uVar22,(int)lVar14,uVar11,&stack0x00000040,
                                &stack0x00000060,&stack0x000000dc);
          fVar6 = fStack00000000000000dc;
          uVar21 = in_stack_00000068;
          if ((fStack00000000000000dc <= param_2) && ((uVar15 & 1) != 0)) {
            if (param_6 == 0) break;
            uVar15 = in_stack_00000060 >> 0x20;
            uVar23 = in_stack_00000060 & 0xffffffff;
            uVar20 = uVar15;
            uVar11 = FUN_051d7cf8(uVar23,uVar15,in_stack_00000068,param_6,0);
            uVar12 = (**(code **)(*plVar10 + 0x418))
                               (plVar10,param_6,*(undefined8 *)(*plVar10 + 0x420));
            if ((uVar12 & 1) != 0) {
              lVar13 = *(long *)puVar3;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar13 = *(long *)puVar3;
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
              uVar22 = FUN_051d71b8(param_6,0);
              in_stack_00000018 = 0;
              in_stack_00000010 = 0;
              in_stack_00000028 = 0;
              in_stack_00000020 = 0;
              in_stack_00000030 = 0;
              FUN_02c869d0(uVar23,uVar15,uVar21,uVar11,uVar20,fVar6,&stack0x00000010,plVar10,uVar22,
                           0);
              if (lVar13 == 0) break;
              lVar17 = *(long *)puVar4;
              in_stack_00000078 = in_stack_00000018;
              in_stack_00000070 = in_stack_00000010;
              in_stack_00000088 = in_stack_00000028;
              in_stack_00000080 = in_stack_00000020;
              in_stack_00000090 = in_stack_00000030;
              lVar14 = *(long *)(lVar13 + 0x10);
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar14 == 0) break;
              uVar1 = *(uint *)(lVar13 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                lVar14 = lVar14 + (long)(int)uVar1 * 0x28;
                *(undefined8 *)(lVar14 + 0x40) = in_stack_00000030;
                *(undefined8 *)(lVar14 + 0x28) = in_stack_00000018;
                *(undefined8 *)(lVar14 + 0x20) = in_stack_00000010;
                *(undefined8 *)(lVar14 + 0x38) = in_stack_00000028;
                *(undefined8 *)(lVar14 + 0x30) = in_stack_00000020;
                thunk_FUN_01656ef8(lVar14 + 0x20,0);
              }
              else {
                lVar14 = *(long *)(*(long *)(lVar17 + 0x20) + 0xc0);
                in_stack_000000a8 = in_stack_00000018;
                in_stack_000000a0 = in_stack_00000010;
                in_stack_000000b8 = in_stack_00000028;
                in_stack_000000b0 = in_stack_00000020;
                in_stack_000000c0 = in_stack_00000030;
                (**(code **)(*(long *)(lVar14 + 0x58) + 8))
                          (lVar13,&stack0x000000a0,*(undefined8 *)(lVar14 + 0x58));
              }
            }
          }
        }
        iVar19 = iVar19 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


