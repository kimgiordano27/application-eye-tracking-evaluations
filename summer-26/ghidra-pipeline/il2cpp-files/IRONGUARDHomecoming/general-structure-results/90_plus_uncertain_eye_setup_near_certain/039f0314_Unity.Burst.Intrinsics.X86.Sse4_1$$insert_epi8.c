/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Sse4_1$$insert_epi8
ENTRY_POINT: 039f0314
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x039f06a4) */

long Unity_Burst_Intrinsics_X86_Sse4_1__insert_epi8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 *unaff_x22;
  undefined8 uVar12;
  long unaff_x23;
  undefined8 uVar13;
  undefined8 *unaff_x24;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  char cStack0000000000000048;
  
  if (param_1 == 0) {
    if ((unaff_x20 & 1) == 0) {
      unaff_x22 = unaff_x24;
    }
    uVar12 = *unaff_x22;
    _cStack0000000000000048 = 0;
    FUN_0332f40c(&stack0x00000048,1,*(undefined8 *)StringLiteral_6266);
    if (cStack0000000000000048 == '\0') {
LAB_039f0424:
      plVar5 = (long *)StringLiteral_6127;
      if (((unaff_w21 == 1) || (plVar5 = (long *)StringLiteral_6177, unaff_w21 == 3)) &&
         (lVar11 = *plVar5, lVar11 != 0)) {
        lVar7 = 0x30;
        if ((unaff_x20 & 1) == 0) {
          lVar7 = 0x48;
        }
        plVar5 = (long *)FUN_039f0e00(*(undefined8 *)(unaff_x19 + lVar7));
        if (plVar5 == (long *)0x0) goto LAB_039f069c;
        lVar7 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_6263) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_039f04ec;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)StringLiteral_6263,0);
LAB_039f04ec:
        plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        puVar2 = StringLiteral_6264;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar7 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_039f055c;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_039f055c:
          uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar4 & 1) == 0) {
            lVar7 = 0;
            iVar10 = 0x14;
            iVar9 = 0x14;
            goto joined_r0x039f05f4;
          }
          lVar7 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_039f05b8;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_039f05b8:
          auVar14 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          lVar7 = auVar14._8_8_;
          uVar4 = thunk_FUN_0340e318(auVar14._0_8_,lVar11,0);
        } while ((uVar4 & 1) == 0);
        iVar10 = 0x10;
        iVar9 = 0x10;
joined_r0x039f05f4:
        if (plVar5 != (long *)0x0) {
          lVar11 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar6 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_039f064c;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01ecb238(plVar5,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_039f064c:
          (*(code *)*puVar6)(plVar5,puVar6[1]);
          iVar9 = iVar10;
        }
        if ((iVar9 != 0x14) && (iVar9 != 0)) {
          return lVar7;
        }
      }
      unaff_x23 = *(long *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
    }
    else {
      if (*(long *)(unaff_x19 + 0x78) == 0) {
LAB_039f069c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_030f35d0(&stack0x00000008,*(long *)(unaff_x19 + 0x78),*(undefined8 *)StringLiteral_6265);
      puVar2 = StringLiteral_6268;
      puVar1 = StringLiteral_6261;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        do {
          uVar4 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar1);
          lVar11 = in_stack_00000030;
          if ((uVar4 & 1) == 0) {
            FUN_02c7ab68(&stack0x00000020,*(undefined8 *)StringLiteral_6260);
            goto LAB_039f0424;
          }
          if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(in_stack_00000030 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = thunk_FUN_0340e318(*(undefined8 *)(*(long *)(in_stack_00000030 + 0x10) + 0x10),
                                     uVar12,0);
        } while ((uVar4 & 1) == 0);
        uVar13 = *(undefined8 *)(lVar11 + 0x18);
        uVar3 = FUN_0332f424(&stack0x00000048,*(undefined8 *)puVar2);
        unaff_x23 = FUN_039f0c40(uVar13,uVar3,0);
      } while (unaff_x23 == 0);
      FUN_02c7ab68(&stack0x00000020,*(undefined8 *)StringLiteral_6260);
    }
  }
  return unaff_x23;
}


