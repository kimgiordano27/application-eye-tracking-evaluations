/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Sse4_1$$max_epi32
ENTRY_POINT: 039f04c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x039f06a4) */

long Unity_Burst_Intrinsics_X86_Sse4_1__max_epi32
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  char in_stack_00000048;
  
  FUN_0332f40c(param_2,param_3,*param_1);
  uVar13 = *(undefined8 *)StringLiteral_6269;
  if (in_stack_00000048 == '\0') {
LAB_039f0424:
    plVar6 = (long *)StringLiteral_6127;
    if (((unaff_w21 == 1) || (plVar6 = (long *)StringLiteral_6177, unaff_w21 == 3)) &&
       (lVar5 = *plVar6, lVar5 != 0)) {
      lVar8 = 0x30;
      if ((unaff_x20 & 1) == 0) {
        lVar8 = 0x48;
      }
      plVar6 = (long *)FUN_039f0e00(*(undefined8 *)(unaff_x19 + lVar8));
      if (plVar6 == (long *)0x0) goto LAB_039f069c;
      lVar8 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_6263) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_039f04ec;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)StringLiteral_6263,0);
LAB_039f04ec:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar2 = StringLiteral_6264;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar8 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_039f055c;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_039f055c:
        uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar4 & 1) == 0) {
          lVar8 = 0;
          iVar11 = 0x14;
          iVar10 = 0x14;
          goto joined_r0x039f05f4;
        }
        lVar8 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_039f05b8;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_039f05b8:
        auVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        lVar8 = auVar14._8_8_;
        uVar4 = thunk_FUN_0340e318(auVar14._0_8_,lVar5,0);
      } while ((uVar4 & 1) == 0);
      iVar11 = 0x10;
      iVar10 = 0x10;
joined_r0x039f05f4:
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_039f064c;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_039f064c:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
        iVar10 = iVar11;
      }
      if ((iVar10 != 0x14) && (iVar10 != 0)) {
        return lVar8;
      }
    }
    lVar5 = *(long *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
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
        lVar5 = in_stack_00000030;
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
        uVar4 = thunk_FUN_0340e318(*(undefined8 *)(*(long *)(in_stack_00000030 + 0x10) + 0x10));
      } while ((uVar4 & 1) == 0);
      uVar12 = *(undefined8 *)(lVar5 + 0x18);
      uVar3 = FUN_0332f424(&stack0x00000048,*(undefined8 *)puVar2);
      lVar5 = FUN_039f0c40(uVar12,uVar3,uVar13);
    } while (lVar5 == 0);
    FUN_02c7ab68(&stack0x00000020,*(undefined8 *)StringLiteral_6260);
  }
  return lVar5;
}


