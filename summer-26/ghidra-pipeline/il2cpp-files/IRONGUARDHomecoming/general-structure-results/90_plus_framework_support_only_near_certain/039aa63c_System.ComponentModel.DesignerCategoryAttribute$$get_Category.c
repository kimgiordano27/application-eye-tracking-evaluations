/*
FUNCTION_NAME: System.ComponentModel.DesignerCategoryAttribute$$get_Category
ENTRY_POINT: 039aa63c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_ComponentModel_DesignerCategoryAttribute__get_Category(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 extraout_x1;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  long unaff_x19;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x24;
  int iVar19;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  int iStack000000000000003c;
  undefined8 uStack0000000000000040;
  ulong uStack0000000000000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000088;
  undefined8 in_stack_00000090;
  long *in_stack_00000098;
  
  FUN_01ecafa0();
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44();
  }
  plVar17 = (long *)**(undefined8 **)(lVar8 + 0xb8);
  if (plVar17 != (long *)0x0) {
    lVar8 = *plVar17;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_5174) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_039aa6d8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)StringLiteral_5174,0);
LAB_039aa6d8:
    plVar10 = (long *)(*(code *)*puVar9)(plVar17,puVar9[1]);
    plVar17 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_039aa740;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_039aa740:
      uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if (unaff_x24 != (long *)0x0) {
        lVar8 = *unaff_x24;
        uVar13 = uVar13 & 0xffffffff;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_5176) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_039aa7a8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238();
LAB_039aa7a8:
        iVar3 = (*(code *)*puVar9)();
        puVar2 = StringLiteral_5175;
        if (iVar3 < 1) {
          if (unaff_x29 == 0) goto LAB_039aab24;
        }
        else {
          iStack000000000000003c = 0;
          uVar16 = 0;
          iVar19 = 0;
          do {
            lVar8 = *unaff_x24;
            uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_5177) {
                  puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_039aa83c;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(unaff_x24,*(long *)StringLiteral_5177,0);
LAB_039aa83c:
            plVar11 = (long *)(*(code *)*puVar9)(unaff_x24,iVar19,puVar9[1]);
            uVar18 = 0;
            while ((uVar13 & 1) != 0) {
              lVar12 = *plVar10;
              lVar8 = *(long *)puVar2;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar8) {
                    puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_039aa8a8;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar8,0);
LAB_039aa8a8:
              iVar4 = (*(code *)*puVar9)(plVar10,puVar9[1]);
              if (iVar19 != iVar4) {
                uVar13 = 1;
                if (plVar11 != (long *)0x0) goto LAB_039aa98c;
                goto LAB_039aab24;
              }
              lVar12 = *plVar10;
              lVar8 = *(long *)puVar2;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar8) {
                    puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_039aa908;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar8,0);
LAB_039aa908:
              (*(code *)*puVar9)(plVar10,puVar9[1]);
              lVar8 = *plVar10;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *plVar17) {
                    puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_039aa968;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*plVar17,0);
LAB_039aa968:
              uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
              uVar18 = extraout_x1;
            }
            uVar13 = 0;
            if (plVar11 == (long *)0x0) goto LAB_039aab24;
LAB_039aa98c:
            iVar4 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
            iVar5 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
            iVar6 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
            iVar7 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
            uVar18 = (**(code **)(*plVar11 + 0x1d8))
                               (plVar11,iVar19,uVar18,in_stack_00000030,in_stack_00000028,
                                *(undefined8 *)(*plVar11 + 0x1e0));
            in_stack_00000050 = 0;
            in_stack_00000058 = plVar11;
            thunk_FUN_01f51358(&stack0x00000058,plVar11);
            in_stack_00000050 = uVar18;
            thunk_FUN_01f51358(&stack0x00000050,uVar18);
            uStack0000000000000040 = CONCAT44(iStack000000000000003c,iVar19);
            uStack0000000000000048 = (ulong)uVar16;
            if (unaff_x29 == 0) goto LAB_039aab24;
            in_stack_00000068 = uStack0000000000000048;
            in_stack_00000060 = uStack0000000000000040;
            in_stack_00000078 = in_stack_00000058;
            in_stack_00000070 = in_stack_00000050;
            lVar8 = *(long *)(unaff_x29 + 0x10);
            lVar12 = *(long *)StringLiteral_5180;
            *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_039aab24;
            uVar1 = *(uint *)(unaff_x29 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(unaff_x29 + 0x18) = uVar1 + 1;
              lVar8 = lVar8 + (long)(int)uVar1 * 0x20;
              *(ulong *)(lVar8 + 0x28) = uStack0000000000000048;
              *(undefined8 *)(lVar8 + 0x20) = uStack0000000000000040;
              *(long **)(lVar8 + 0x38) = in_stack_00000058;
              *(undefined8 *)(lVar8 + 0x30) = in_stack_00000050;
              thunk_FUN_01f51358(lVar8 + 0x30,0);
            }
            else {
              in_stack_00000088 = uStack0000000000000048;
              in_stack_00000080 = uStack0000000000000040;
              in_stack_00000098 = in_stack_00000058;
              in_stack_00000090 = in_stack_00000050;
              FUN_03293e00(unaff_x29,&stack0x00000080,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            iVar19 = iVar19 + 1;
            uVar16 = (iVar6 + uVar16) - iVar7;
            iStack000000000000003c = (iVar4 + iStack000000000000003c) - iVar5;
            plVar17 = (long *)
                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          } while (iVar19 != iVar3);
        }
        FUN_03295b30(unaff_x29,*(undefined8 *)StringLiteral_5181);
        return;
      }
    }
  }
LAB_039aab24:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


