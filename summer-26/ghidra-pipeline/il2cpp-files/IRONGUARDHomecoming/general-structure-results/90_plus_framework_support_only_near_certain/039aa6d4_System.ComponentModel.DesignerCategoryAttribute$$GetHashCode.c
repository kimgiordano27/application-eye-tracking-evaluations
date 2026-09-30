/*
FUNCTION_NAME: System.ComponentModel.DesignerCategoryAttribute$$GetHashCode
ENTRY_POINT: 039aa6d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_ComponentModel_DesignerCategoryAttribute__GetHashCode(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 extraout_x1;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  long *plVar18;
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
  
  plVar8 = (long *)(**(code **)(param_1 + 0x138))();
  plVar18 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_039aa740;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_039aa740:
    uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (unaff_x24 != (long *)0x0) {
      lVar11 = *unaff_x24;
      uVar13 = uVar13 & 0xffffffff;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_5176) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
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
          lVar11 = *unaff_x24;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_5177) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_039aa83c;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(unaff_x24,*(long *)StringLiteral_5177,0);
LAB_039aa83c:
          plVar10 = (long *)(*(code *)*puVar9)(unaff_x24,iVar19,puVar9[1]);
          uVar17 = 0;
          while ((uVar13 & 1) != 0) {
            lVar12 = *plVar8;
            lVar11 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar11) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_039aa8a8;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_039aa8a8:
            iVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            if (iVar19 != iVar4) {
              uVar13 = 1;
              if (plVar10 != (long *)0x0) goto LAB_039aa98c;
              goto LAB_039aab24;
            }
            lVar12 = *plVar8;
            lVar11 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar11) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_039aa908;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_039aa908:
            (*(code *)*puVar9)(plVar8,puVar9[1]);
            lVar11 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *plVar18) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_039aa968;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*plVar18,0);
LAB_039aa968:
            uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            uVar17 = extraout_x1;
          }
          uVar13 = 0;
          if (plVar10 == (long *)0x0) goto LAB_039aab24;
LAB_039aa98c:
          iVar4 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
          iVar5 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          iVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          iVar7 = (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
          uVar17 = (**(code **)(*plVar10 + 0x1d8))
                             (plVar10,iVar19,uVar17,in_stack_00000030,in_stack_00000028,
                              *(undefined8 *)(*plVar10 + 0x1e0));
          in_stack_00000050 = 0;
          in_stack_00000058 = plVar10;
          thunk_FUN_01f51358(&stack0x00000058,plVar10);
          in_stack_00000050 = uVar17;
          thunk_FUN_01f51358(&stack0x00000050,uVar17);
          uStack0000000000000040 = CONCAT44(iStack000000000000003c,iVar19);
          uStack0000000000000048 = (ulong)uVar16;
          if (unaff_x29 == 0) goto LAB_039aab24;
          in_stack_00000068 = uStack0000000000000048;
          in_stack_00000060 = uStack0000000000000040;
          in_stack_00000078 = in_stack_00000058;
          in_stack_00000070 = in_stack_00000050;
          lVar11 = *(long *)(unaff_x29 + 0x10);
          lVar12 = *(long *)StringLiteral_5180;
          *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_039aab24;
          uVar1 = *(uint *)(unaff_x29 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(unaff_x29 + 0x18) = uVar1 + 1;
            lVar11 = lVar11 + (long)(int)uVar1 * 0x20;
            *(ulong *)(lVar11 + 0x28) = uStack0000000000000048;
            *(undefined8 *)(lVar11 + 0x20) = uStack0000000000000040;
            *(long **)(lVar11 + 0x38) = in_stack_00000058;
            *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
            thunk_FUN_01f51358(lVar11 + 0x30,0);
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
          plVar18 = (long *)
                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        } while (iVar19 != iVar3);
      }
      FUN_03295b30(unaff_x29,*(undefined8 *)StringLiteral_5181);
      return;
    }
  }
LAB_039aab24:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


