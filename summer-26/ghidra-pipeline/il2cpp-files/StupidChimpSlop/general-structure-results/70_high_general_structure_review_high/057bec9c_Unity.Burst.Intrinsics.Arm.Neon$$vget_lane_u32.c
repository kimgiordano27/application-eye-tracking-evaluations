/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vget_lane_u32
ENTRY_POINT: 057bec9c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x057bf054) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long Unity_Burst_Intrinsics_Arm_Neon__vget_lane_u32(long *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x21;
  long *plVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  char cStack000000000000001c;
  undefined8 in_stack_00000028;
  
  plVar9 = *(long **)(unaff_x21 + 0x498);
  if ((*(byte *)(unaff_x22 + 0x485) & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06661498);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                );
    *(undefined1 *)(unaff_x22 + 0x485) = 1;
  }
  lVar4 = *plVar9;
  in_stack_00000028 = 0;
  cStack000000000000001c = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar4 = *plVar9;
  }
  cStack000000000000001c = '\0';
  in_stack_00000028 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  FUN_05065dd8(in_stack_00000028,&stack0x0000001c,0);
  plVar9 = param_1 + 3;
  if (*plVar9 == 0) {
    lVar4 = FUN_02d4dd2c(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                         ,5);
    *plVar9 = lVar4;
    thunk_FUN_02dc1ef0(plVar9);
  }
  puVar3 = PTR_DAT_066462a0;
  lVar4 = 0;
  uVar13 = 0;
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    uVar10 = *(undefined8 *)(lVar7 + lVar4 + 0x20);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar5 = FUN_0501afe8(uVar10);
    lVar7 = *plVar9;
    if ((uVar5 & 1) != 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(uint *)(lVar7 + 0x18) <= (uint)uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      uVar2 = *(uint *)(lVar7 + lVar4 + 0x28);
      if (uVar2 == 0xffffffff) {
        lVar4 = FUN_057bf164();
      }
      else {
        lVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        lVar4 = *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      }
      goto LAB_057befe8;
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    uVar10 = *(undefined8 *)(lVar7 + lVar4 + 0x20);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar5 = FUN_0501afe8(uVar10,0,0);
    lVar4 = lVar4 + 0x10;
    bVar1 = uVar13 < 4;
    uVar13 = uVar13 + 1;
  } while ((uVar5 & 1) == 0 && bVar1);
  uVar2 = *(uint *)(param_1 + 4);
  lVar7 = (long)(int)uVar2;
  lVar4 = param_1[3];
  iVar12 = 0;
  if ((int)(uVar2 + 1) < 5) {
    iVar12 = uVar2 + 1;
  }
  *(int *)(param_1 + 4) = iVar12;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  *(long **)(lVar4 + lVar7 * 0x10 + 0x20) = unaff_x19;
  thunk_FUN_02dc1ef0();
  lVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar13 = *(ulong *)(lVar4 + 0x18);
  iVar12 = (int)uVar13;
  if (0 < iVar12) {
    lVar11 = 0;
    do {
      lVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(uint *)(lVar4 + 0x18) <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      lVar4 = *(long *)(lVar4 + lVar11 * 8 + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar10 = thunk_FUN_02d5dae8(lVar4,0);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar5 = FUN_0501afe8(uVar10);
      if ((uVar5 & 1) != 0) {
        lVar8 = *plVar9;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        *(uint *)(lVar8 + lVar7 * 0x10 + 0x28) = (uint)lVar11;
        goto LAB_057befe8;
      }
      lVar11 = lVar11 + 1;
    } while (iVar12 != (int)lVar11);
    if (0 < iVar12) {
      uVar5 = 0;
      do {
        lVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar4 = *(long *)(lVar4 + uVar5 * 8 + 0x20);
        uVar6 = (**(code **)(*unaff_x19 + 0x898))();
        if ((uVar6 & 1) != 0) {
          lVar11 = *plVar9;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          *(int *)(lVar11 + lVar7 * 0x10 + 0x28) = (int)uVar5;
          goto LAB_057befe8;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar13 & 0xffffffff) != uVar5);
    }
  }
  lVar4 = *plVar9;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  *(undefined4 *)(lVar4 + lVar7 * 0x10 + 0x28) = 0xffffffff;
  lVar4 = FUN_057bf164();
LAB_057befe8:
  if (cStack000000000000001c != '\0') {
    RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(in_stack_00000028,0);
  }
  return lVar4;
}


