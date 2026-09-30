/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Sse4_1$$insert_ps
ENTRY_POINT: 039f0260
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x039f06a4) */

long Unity_Burst_Intrinsics_X86_Sse4_1__insert_ps(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  int iVar11;
  int iVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  char cStack0000000000000048;
  
  thunk_FUN_01efb3a4(StringLiteral_6269);
  thunk_FUN_01efb3a4(StringLiteral_6177);
  thunk_FUN_01efb3a4(StringLiteral_6270);
  thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
  *(undefined1 *)(unaff_x22 + 0xa0e) = 1;
  puVar8 = (undefined8 *)StringLiteral_6270;
  puVar1 = StringLiteral_6054;
  bVar3 = (unaff_x20 & 1) == 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_w21 == 0) {
    lVar6 = 0x30;
    if (bVar3) {
      lVar6 = 0x48;
    }
    lVar6 = FUN_039f07e8(*(undefined8 *)(unaff_x19 + lVar6));
    if (lVar6 != 0) {
      return lVar6;
    }
    if ((unaff_x20 & 1) == 0) {
      puVar8 = (undefined8 *)puVar1;
    }
    uVar13 = *puVar8;
switchD_039f02e4_caseD_1:
    uVar15 = 1;
    goto LAB_039f034c;
  }
  if (bVar3) {
    puVar8 = (undefined8 *)StringLiteral_6054;
  }
  uVar13 = *puVar8;
  _cStack0000000000000048 = 0;
  switch(unaff_w21) {
  case 1:
    goto switchD_039f02e4_caseD_1;
  case 2:
    FUN_0332f40c(&stack0x00000048,0,*(undefined8 *)StringLiteral_6266);
    uVar15 = *(undefined8 *)StringLiteral_6269;
    goto LAB_039f0358;
  case 3:
  case 4:
    uVar15 = 2;
    break;
  case 5:
    uVar15 = 6;
    break;
  default:
    goto switchD_039f02e4_default;
  }
LAB_039f034c:
  _cStack0000000000000048 = 0;
  FUN_0332f40c(&stack0x00000048,uVar15,*(undefined8 *)StringLiteral_6266);
switchD_039f02e4_default:
  uVar15 = 0;
LAB_039f0358:
  if (cStack0000000000000048 == '\0') {
LAB_039f0424:
    plVar7 = (long *)StringLiteral_6127;
    if (((unaff_w21 == 1) || (plVar7 = (long *)StringLiteral_6177, unaff_w21 == 3)) &&
       (lVar6 = *plVar7, lVar6 != 0)) {
      lVar9 = 0x30;
      if ((unaff_x20 & 1) == 0) {
        lVar9 = 0x48;
      }
      plVar7 = (long *)FUN_039f0e00(*(undefined8 *)(unaff_x19 + lVar9));
      if (plVar7 == (long *)0x0) goto LAB_039f069c;
      lVar9 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_6263) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_039f04ec;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)StringLiteral_6263,0);
LAB_039f04ec:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar2 = StringLiteral_6264;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar9 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_039f055c;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_039f055c:
        uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar5 & 1) == 0) {
          lVar9 = 0;
          iVar12 = 0x14;
          iVar11 = 0x14;
          goto joined_r0x039f05f4;
        }
        lVar9 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_039f05b8;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_039f05b8:
        auVar16 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        lVar9 = auVar16._8_8_;
        uVar5 = thunk_FUN_0340e318(auVar16._0_8_,lVar6,0);
      } while ((uVar5 & 1) == 0);
      iVar12 = 0x10;
      iVar11 = 0x10;
joined_r0x039f05f4:
      if (plVar7 != (long *)0x0) {
        lVar6 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_039f064c;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_039f064c:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
        iVar11 = iVar12;
      }
      if ((iVar11 != 0x14) && (iVar11 != 0)) {
        return lVar9;
      }
    }
    lVar6 = *(long *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
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
        uVar5 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar1);
        lVar6 = in_stack_00000030;
        if ((uVar5 & 1) == 0) {
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
        uVar5 = thunk_FUN_0340e318(*(undefined8 *)(*(long *)(in_stack_00000030 + 0x10) + 0x10),
                                   uVar13,0);
      } while ((uVar5 & 1) == 0);
      uVar14 = *(undefined8 *)(lVar6 + 0x18);
      uVar4 = FUN_0332f424(&stack0x00000048,*(undefined8 *)puVar2);
      lVar6 = FUN_039f0c40(uVar14,uVar4,uVar15);
    } while (lVar6 == 0);
    FUN_02c7ab68(&stack0x00000020,*(undefined8 *)StringLiteral_6260);
  }
  return lVar6;
}


