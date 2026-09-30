/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RunTimeUtils$$GetInterfaceComponent<object>
ENTRY_POINT: 040b9ecc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x040ba8e8) */

int Meta_XR_BuildingBlocks_RunTimeUtils__GetInterfaceComponent<object>
              (undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  long unaff_x20;
  int iVar13;
  long *plVar14;
  undefined *puVar15;
  int unaff_w24;
  long lVar16;
  long unaff_x27;
  int unaff_w28;
  undefined8 unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 *in_stack_00000088;
  
  do {
    uVar12 = *param_1;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar12,0);
    uVar5 = FUN_06de9144();
    puVar15 = PTR_DAT_07d86548;
    plVar6 = (long *)PTR_DAT_07d97118;
    if ((uVar5 & 1) != 0) {
      if (unaff_w24 == 4) {
        iVar3 = in_stack_00000018._4_4_;
        iVar4 = *(int *)(unaff_x27 + 0x90);
      }
      else {
        if (*(long *)(unaff_x27 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar5 = FUN_05be0c0c(*(long *)(unaff_x27 + 0x98),unaff_x29,(long)&stack0x00000078 + 4,
                             *(undefined8 *)PTR_DAT_07d97210);
        lVar9 = *in_stack_00000020;
        iVar3 = in_stack_00000078._4_4_;
        if ((uVar5 & 1) == 0) {
          iVar3 = in_stack_00000018._4_4_;
        }
        if (*(int *)(*(long *)PTR_DAT_07d88d18 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)PTR_DAT_07d88d18);
        }
        puVar15 = PTR_DAT_07d86548;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        iVar4 = iVar3;
        if (iVar3 <= *(int *)(lVar9 + 8)) {
          in_stack_00000030 = unaff_x29;
          uVar12 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x70),&stack0x00000030);
          plVar6 = (long *)PTR_DAT_07d97118;
          uVar7 = **(undefined8 **)(unaff_x20 + 0x38);
          if (*(int *)(*(long *)(puVar15 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          plVar14 = (long *)FUN_062519f8(uVar7,0);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar7 = (**(code **)(*plVar14 + 0x2e8))(plVar14,*(undefined8 *)(*plVar14 + 0x2f0));
          uVar12 = FUN_060c1fd4(*(undefined8 *)PTR_DAT_07d97248,uVar12,uVar7,0);
          if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_0755de80(uVar12,0);
          in_stack_00000018._4_4_ = iVar3;
          goto LAB_040ba614;
        }
      }
      lVar9 = *(long *)(unaff_x27 + 0x60);
      if (lVar9 == 0) {
LAB_040ba860:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar13 = 0;
      while (iVar13 < *(int *)(lVar9 + 0x18)) {
        plVar6 = (long *)FUN_049cec24(lVar9,iVar13,*(undefined8 *)PTR_DAT_07d97198);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar9 = *plVar6;
        lVar16 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)(lVar16 + 0x20)) {
              lVar9 = lVar9 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                      0x138;
              goto LAB_040ba00c;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        lVar9 = FUN_0377596c(plVar6);
LAB_040ba00c:
        lVar9 = thunk_FUN_0375ad08(*(undefined8 *)(lVar9 + 8),lVar16);
        (**(code **)(lVar9 + 8))(plVar6,unaff_x29);
        lVar9 = *(long *)(unaff_x27 + 0x60);
        iVar13 = iVar13 + 1;
        if (lVar9 == 0) goto LAB_040ba860;
      }
      if (*(long *)(unaff_x27 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar9 = FUN_05bd4d7c(*(long *)(unaff_x27 + 0x38),unaff_x29,*(undefined8 *)PTR_DAT_07d97220);
      in_stack_00000080 = lVar9;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_07d97240 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      lVar16 = in_stack_00000080;
      if (*(int *)(lVar9 + 8) == 0) {
        in_stack_00000038 = 0;
        in_stack_00000030 = 0;
        in_stack_00000048 = 0;
        in_stack_00000040 = 0;
        FUN_06de9c6c(&stack0x00000030,unaff_w24,iVar4,3,iVar3,0);
        in_stack_00000058 = in_stack_00000038;
        in_stack_00000050 = in_stack_00000030;
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        FUN_04dc6610(&stack0x00000080,&stack0x00000050,*(undefined8 *)PTR_DAT_07d97230);
        lVar9 = FUN_04dc63d8(&stack0x00000080,0,*(undefined8 *)PTR_DAT_07d97238);
        if (*(int *)(*(long *)PTR_DAT_07d88d18 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (DAT_0825589e == '\0') {
          FUN_0373b518(PTR_DAT_07d863e8);
          DAT_0825589e = '\x01';
        }
        if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar2 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x10);
        if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        iVar4 = FUN_06243eac(0x10,uVar2,0);
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
LAB_040ba314:
        iVar13 = *(int *)(lVar9 + 8);
        if ((iVar4 < iVar13) && (*(int *)(lVar9 + 0xc) < iVar13)) {
          *(int *)(lVar9 + 0xc) = iVar13;
        }
        *(int *)(lVar9 + 8) = iVar4;
      }
      else {
        if ((*(byte *)(*(long *)(*(long *)PTR_DAT_07d97240 + 0x20) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        lVar9 = FUN_04dc63d8(&stack0x00000080,*(int *)(lVar16 + 8) + -1,
                             *(undefined8 *)PTR_DAT_07d97238);
        if (*(int *)(lVar9 + 0x18) != unaff_w24) {
LAB_040ba13c:
          in_stack_00000038 = 0;
          in_stack_00000030 = 0;
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          FUN_06de9c6c(&stack0x00000030,unaff_w24,iVar4,3,iVar3,0);
          in_stack_00000058 = in_stack_00000038;
          in_stack_00000050 = in_stack_00000030;
          in_stack_00000068 = in_stack_00000048;
          in_stack_00000060 = in_stack_00000040;
          FUN_04dc6610(&stack0x00000080,&stack0x00000050,*(undefined8 *)PTR_DAT_07d97230);
          lVar9 = in_stack_00000080;
          if ((*(byte *)(*(long *)(*(long *)PTR_DAT_07d97240 + 0x20) + 0x135) & 1) == 0) {
            FUN_03775678();
          }
          lVar9 = FUN_04dc63d8(&stack0x00000080,*(int *)(lVar9 + 8) + -1,
                               *(undefined8 *)PTR_DAT_07d97238);
          if (*(int *)(*(long *)PTR_DAT_07d88d18 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if (DAT_0825589e == '\0') {
            FUN_0373b518(PTR_DAT_07d863e8);
            DAT_0825589e = '\x01';
          }
          if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar2 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x10);
          if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          iVar4 = FUN_06243eac(0x10,uVar2,0);
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          goto LAB_040ba314;
        }
        if (*(int *)(*(long *)PTR_DAT_07d88d18 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar16 = *in_stack_00000020;
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        iVar13 = *(int *)(lVar16 + 8);
        if (*(int *)(lVar16 + 8) <= *(int *)(lVar16 + 0xc)) {
          iVar13 = *(int *)(lVar16 + 0xc);
        }
        iVar1 = *(int *)(in_stack_00000088 + 1);
        if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
          iVar1 = *(int *)((long)in_stack_00000088 + 0xc);
        }
        if (*(int *)(lVar9 + 0x14) - *(int *)(lVar9 + 8) < iVar1 + iVar13) goto LAB_040ba13c;
      }
      lVar9 = in_stack_00000080;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_07d97240 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      lVar9 = FUN_04dc63d8(&stack0x00000080,*(int *)(lVar9 + 8) + -1,*(undefined8 *)PTR_DAT_07d97238
                          );
      lVar16 = *in_stack_00000020;
      if (*(int *)(*(long *)PTR_DAT_07d88d18 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar4 = *(int *)(lVar16 + 8);
      if (*(int *)(lVar16 + 8) <= *(int *)(lVar16 + 0xc)) {
        iVar4 = *(int *)(lVar16 + 0xc);
      }
      iVar13 = *(int *)(in_stack_00000088 + 1);
      if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
        iVar13 = *(int *)((long)in_stack_00000088 + 0xc);
      }
      if (DAT_082558a5 == '\0') {
        FUN_0373b518(PTR_DAT_07d88d18);
        DAT_082558a5 = '\x01';
      }
      plVar14 = (long *)(lVar9 + 0x10);
      lVar16 = *plVar14;
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar1 = *(int *)(lVar16 + 8) + iVar13 + iVar4;
      in_stack_00000018._4_4_ = iVar3;
      if (*(int *)(lVar16 + 0x10) < iVar1) {
        if ((*(int *)(lVar16 + 0x14) < iVar1) ||
           (*(int *)(lVar16 + 0x14) <= *(int *)(lVar16 + 0x10))) {
          lVar9 = *in_stack_00000020;
          if (*(int *)(*(long *)PTR_DAT_07d88d18 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          plVar6 = (long *)PTR_DAT_07d97118;
          puVar15 = PTR_DAT_07d86548;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          iVar3 = *(int *)(lVar9 + 8);
          if (*(int *)(lVar9 + 8) <= *(int *)(lVar9 + 0xc)) {
            iVar3 = *(int *)(lVar9 + 0xc);
          }
          iVar4 = *(int *)(in_stack_00000088 + 1);
          if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
            iVar4 = *(int *)((long)in_stack_00000088 + 0xc);
          }
          in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar4 + iVar3);
          uVar12 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&stack0x00000030);
          if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uStack000000000000002c = *(undefined4 *)(*plVar14 + 8);
          uVar7 = thunk_FUN_037784fc(*(undefined8 *)(puVar15 + 0x48),(long)&stack0x00000028 + 4);
          if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uStack0000000000000028 = *(undefined4 *)(*plVar14 + 0x10);
          uVar8 = thunk_FUN_037784fc(*(undefined8 *)(puVar15 + 0x48),&stack0x00000028);
          uVar12 = FUN_060c2018(*(undefined8 *)PTR_DAT_07d97250,uVar12,uVar7,uVar8,0);
          if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_0755de80(uVar12,0);
          goto LAB_040ba614;
        }
        if (*(int *)(*(long *)PTR_DAT_07d88d18 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_06e129a0(plVar14,iVar13 + iVar4,0);
      }
      if (*(int *)(*(long *)PTR_DAT_07d88d18 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar6 = (long *)*plVar14;
      iVar3 = *(int *)(in_stack_00000088 + 1);
      if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
        iVar3 = *(int *)((long)in_stack_00000088 + 0xc);
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_0754e55c((long)(int)plVar6[1] + *plVar6,*in_stack_00000088,(long)iVar3,0);
      plVar6 = (long *)*plVar14;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar3 = (int)plVar6[1] + iVar3;
      *(int *)(plVar6 + 1) = iVar3;
      puVar10 = (undefined8 *)*in_stack_00000020;
      if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar4 = *(int *)(puVar10 + 1);
      if (*(int *)(puVar10 + 1) <= *(int *)((long)puVar10 + 0xc)) {
        iVar4 = *(int *)((long)puVar10 + 0xc);
      }
      FUN_0754e55c(*plVar6 + (long)iVar3,*puVar10,(long)iVar4,0);
      lVar16 = *plVar14;
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + iVar4;
      *(short *)(lVar9 + 2) = *(short *)(lVar9 + 2) + 1;
      lVar9 = *(long *)(unaff_x27 + 0x60);
      if (lVar9 == 0) {
LAB_040ba868:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar3 = 0;
      while (puVar15 = PTR_DAT_07d86548, plVar6 = (long *)PTR_DAT_07d97118,
            iVar3 < *(int *)(lVar9 + 0x18)) {
        plVar6 = (long *)FUN_049cec24(lVar9,iVar3,*(undefined8 *)PTR_DAT_07d97198);
        lVar9 = *in_stack_00000020;
        if (*(int *)(*(long *)PTR_DAT_07d88d18 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar9 = *plVar6;
        lVar16 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)(lVar16 + 0x20)) {
              lVar9 = lVar9 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                      0x138;
              goto LAB_040ba5c4;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        lVar9 = FUN_0377596c(plVar6);
LAB_040ba5c4:
        lVar9 = thunk_FUN_0375ad08(*(undefined8 *)(lVar9 + 8),lVar16);
        (**(code **)(lVar9 + 8))(plVar6,unaff_x29);
        lVar9 = *(long *)(unaff_x27 + 0x60);
        iVar3 = iVar3 + 1;
        if (lVar9 == 0) goto LAB_040ba868;
      }
    }
LAB_040ba614:
    do {
      do {
        plVar14 = (long *)*in_stack_00000010;
        unaff_w28 = unaff_w28 + 1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar9 = *plVar14;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *plVar6) {
              puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_040b9c88;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar10 = (undefined8 *)FUN_0377596c(plVar14,*plVar6,0);
LAB_040b9c88:
        iVar3 = (*(code *)*puVar10)(plVar14,puVar10[1]);
        if (iVar3 <= unaff_w28) {
          lVar9 = *in_stack_00000020;
          if (*(int *)(*(long *)PTR_DAT_07d88d18 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if (lVar9 != 0) {
            if (in_stack_00000088 != (undefined8 *)0x0) {
              iVar3 = *(int *)(lVar9 + 8);
              if (*(int *)(lVar9 + 8) <= *(int *)(lVar9 + 0xc)) {
                iVar3 = *(int *)(lVar9 + 0xc);
              }
              iVar4 = *(int *)(in_stack_00000088 + 1);
              if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
                iVar4 = *(int *)((long)in_stack_00000088 + 0xc);
              }
              if (*(int *)(*(long *)PTR_DAT_07d88d18 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_06e1a440(&stack0x00000088,0);
              return iVar4 + iVar3;
            }
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar14 = (long *)*in_stack_00000010;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar9 = *plVar14;
        lVar16 = *(long *)(unaff_x27 + 0x40);
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d97120) {
              puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_040b9cfc;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar10 = (undefined8 *)FUN_0377596c(plVar14,*(long *)PTR_DAT_07d97120,0);
LAB_040b9cfc:
        uVar12 = (*(code *)*puVar10)(plVar14,unaff_w28,puVar10[1]);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4(uVar12,uVar12);
        }
        uVar5 = FUN_045c8900(lVar16,uVar12,*(undefined8 *)PTR_DAT_07d97228);
      } while ((uVar5 & 1) != 0);
      uVar12 = **(undefined8 **)(unaff_x20 + 0x38);
      if (*(int *)(*(long *)(puVar15 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar12 = FUN_062519f8(uVar12,0);
      lVar9 = *(long *)PTR_DAT_07d971a0;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar9 = *(long *)PTR_DAT_07d971a0;
      }
      uVar5 = FUN_0625b9c4(uVar12,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8),0);
      if ((uVar5 & 1) == 0) break;
      uVar12 = **(undefined8 **)(unaff_x20 + 0x38);
      if (*(int *)(*(long *)(puVar15 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062519f8(uVar12,0);
      plVar14 = (long *)*in_stack_00000010;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar9 = *plVar14;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d97120) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_040b9e14;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar10 = (undefined8 *)FUN_0377596c(plVar14,*(long *)PTR_DAT_07d97120,0);
LAB_040b9e14:
      (*(code *)*puVar10)(plVar14,unaff_w28,puVar10[1]);
      iVar3 = FUN_040b0c04();
    } while ((iVar3 < 0) || (iVar3 != in_stack_00000008._4_4_));
    plVar6 = (long *)*in_stack_00000010;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar9 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d97120) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_040b9ea8;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07d97120,0);
LAB_040b9ea8:
    unaff_x29 = (*(code *)*puVar10)(plVar6,unaff_w28,puVar10[1]);
    param_2 = *(long *)(PTR_DAT_07d86548 + 0xe0);
    param_1 = *(undefined8 **)(unaff_x20 + 0x38);
  } while( true );
}


