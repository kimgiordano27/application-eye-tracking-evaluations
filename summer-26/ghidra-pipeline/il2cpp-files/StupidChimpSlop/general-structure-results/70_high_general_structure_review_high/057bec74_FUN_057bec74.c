/*
FUNCTION_NAME: FUN_057bec74
ENTRY_POINT: 057bec74
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

long FUN_057bec74(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  char local_64 [4];
  
  puVar3 = PTR_DAT_06661498;
  if ((DAT_06a55485 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06661498);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                );
    DAT_06a55485 = 1;
  }
  lVar4 = *(long *)puVar3;
  local_64[0] = '\0';
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar4 = *(long *)puVar3;
  }
  local_64[0] = '\0';
  uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  FUN_05065dd8(uVar5,local_64,0);
  plVar11 = param_1 + 3;
  if (*plVar11 == 0) {
    lVar4 = FUN_02d4dd2c(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                         ,5);
    *plVar11 = lVar4;
    thunk_FUN_02dc1ef0(plVar11);
  }
  puVar3 = PTR_DAT_066462a0;
  lVar4 = 0;
  uVar8 = 0;
  do {
    lVar9 = *plVar11;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    uVar12 = *(undefined8 *)(lVar9 + lVar4 + 0x20);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar6 = FUN_0501afe8(uVar12,param_2,0);
    lVar9 = *plVar11;
    if ((uVar6 & 1) != 0) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(uint *)(lVar9 + 0x18) <= (uint)uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      uVar2 = *(uint *)(lVar9 + lVar4 + 0x28);
      if (uVar2 == 0xffffffff) {
        lVar4 = FUN_057bf164(uVar6,param_2);
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
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    uVar12 = *(undefined8 *)(lVar9 + lVar4 + 0x20);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar6 = FUN_0501afe8(uVar12,0,0);
    lVar4 = lVar4 + 0x10;
    bVar1 = uVar8 < 4;
    uVar8 = uVar8 + 1;
  } while ((uVar6 & 1) == 0 && bVar1);
  uVar2 = *(uint *)(param_1 + 4);
  lVar9 = (long)(int)uVar2;
  lVar4 = param_1[3];
  iVar15 = 0;
  if ((int)(uVar2 + 1) < 5) {
    iVar15 = uVar2 + 1;
  }
  *(int *)(param_1 + 4) = iVar15;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  plVar7 = (long *)(lVar4 + lVar9 * 0x10 + 0x20);
  *plVar7 = (long)param_2;
  thunk_FUN_02dc1ef0(plVar7,param_2);
  uVar8 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar6 = *(ulong *)(uVar8 + 0x18);
  iVar15 = (int)uVar6;
  if (0 < iVar15) {
    lVar14 = 0;
    do {
      lVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(uint *)(lVar4 + 0x18) <= (uint)lVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      lVar4 = *(long *)(lVar4 + lVar14 * 8 + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar12 = thunk_FUN_02d5dae8(lVar4,0);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar8 = FUN_0501afe8(uVar12,param_2,0);
      if ((uVar8 & 1) != 0) {
        lVar10 = *plVar11;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        *(uint *)(lVar10 + lVar9 * 0x10 + 0x28) = (uint)lVar14;
        goto LAB_057befe8;
      }
      lVar14 = lVar14 + 1;
    } while (iVar15 != (int)lVar14);
    if (0 < iVar15) {
      uVar13 = 0;
      do {
        lVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar4 = *(long *)(lVar4 + uVar13 * 8 + 0x20);
        uVar8 = (**(code **)(*param_2 + 0x898))(param_2,lVar4,*(undefined8 *)(*param_2 + 0x8a0));
        if ((uVar8 & 1) != 0) {
          lVar14 = *plVar11;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          *(int *)(lVar14 + lVar9 * 0x10 + 0x28) = (int)uVar13;
          goto LAB_057befe8;
        }
        uVar13 = uVar13 + 1;
      } while ((uVar6 & 0xffffffff) != uVar13);
    }
  }
  lVar4 = *plVar11;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  *(undefined4 *)(lVar4 + lVar9 * 0x10 + 0x28) = 0xffffffff;
  lVar4 = FUN_057bf164(uVar8,param_2);
LAB_057befe8:
  if (local_64[0] != '\0') {
    RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(uVar5,0);
  }
  return lVar4;
}


