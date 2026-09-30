/*
FUNCTION_NAME: Oculus.Voice.AppVoiceExperience$$OnAudioDurationTrackerFinished
ENTRY_POINT: 041a8fd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041a971c) */

void Oculus_Voice_AppVoiceExperience__OnAudioDurationTrackerFinished(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_s8;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  float fStack000000000000006c;
  
  FUN_030f2380();
  lVar8 = thunk_FUN_01f117cc(*unaff_x22);
  FUN_030f2380(lVar8,*unaff_x20);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    plVar9 = (long *)FUN_041a9ce0();
    puVar7 = PTR_DAT_0458e618;
    puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar23 = 0.0;
    fVar24 = 0.0;
LAB_041a9030:
    do {
      lVar12 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_041a907c;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_041a907c:
      uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_041a932c;
        lVar12 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 == 0) goto LAB_041a9304;
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_041a92ec;
      }
      lVar12 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_041a90d8;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_041a90d8:
      lVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    } while (*(char *)(lVar12 + 0x40) == '\0');
    fVar21 = *(float *)(lVar12 + 0x5c);
    lVar13 = *(long *)(unaff_x19 + 0x20);
    if ((uint)ABS(fVar21) < 0x7f800001) {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((*(int *)(lVar13 + 0x2c) == 1) && (*(char *)(lVar12 + 0x60) != '\0')) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(lVar8 + 0x10);
        lVar15 = *(long *)puVar7;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *plVar11 = lVar12;
          thunk_FUN_01f51358(plVar11,lVar12);
        }
        else {
          FUN_030f2bb4(lVar8,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        fVar20 = (float)FUN_041a9d80();
        fVar21 = *(float *)(lVar12 + 0x5c);
        fVar24 = fVar24 + fVar20;
      }
      fVar19 = *(float *)(lVar12 + 0x4c);
      fVar20 = *(float *)(lVar12 + 0x54);
      if ((fVar21 < fVar19) || (fVar20 < fVar21)) {
        fVar22 = *(float *)(lVar12 + 0x44);
        if (fVar22 <= fVar20) {
          fVar20 = fVar22;
        }
        if (fVar22 < fVar19) {
          fVar20 = fVar19;
        }
        if (fVar21 != fVar20) {
          lVar13 = *(long *)(lVar12 + 0xb8);
          *(float *)(lVar12 + 0x5c) = fVar20;
          if (lVar13 != 0) {
            (**(code **)(lVar13 + 0x18))
                      (*(undefined8 *)(lVar13 + 0x40),lVar12,*(undefined8 *)(lVar13 + 0x28));
          }
        }
      }
    }
    else {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((*(int *)(lVar13 + 0x2c) == 1) && (*(char *)(lVar12 + 0x60) != '\0')) {
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(param_1 + 0x10);
        lVar15 = *(long *)puVar7;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(param_1 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(param_1 + 0x18) = uVar1 + 1;
          plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *plVar11 = lVar12;
          thunk_FUN_01f51358(plVar11,lVar12);
        }
        else {
          FUN_030f2bb4(param_1,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_041a9030;
      }
      fVar19 = *(float *)(lVar12 + 0x44);
      fVar20 = *(float *)(lVar12 + 0x54);
      if (fVar19 <= *(float *)(lVar12 + 0x54)) {
        fVar20 = fVar19;
      }
      if (fVar19 < *(float *)(lVar12 + 0x4c)) {
        fVar20 = *(float *)(lVar12 + 0x4c);
      }
      if (fVar21 != fVar20) {
        lVar13 = *(long *)(lVar12 + 0xb8);
        *(float *)(lVar12 + 0x5c) = fVar20;
        if (lVar13 != 0) {
          (**(code **)(lVar13 + 0x18))
                    (*(undefined8 *)(lVar13 + 0x40),lVar12,*(undefined8 *)(lVar13 + 0x28));
        }
      }
    }
    if (*(char *)(lVar12 + 0x60) == '\0') {
      fVar23 = fVar23 + *(float *)(lVar12 + 0x5c);
    }
    goto LAB_041a9030;
  }
  goto LAB_041a9714;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_041a92ec:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_041a9320;
    }
  }
LAB_041a9304:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_041a9320:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_041a932c:
  puVar2 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x18)) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar23 = (float)FUN_0356bcb4(0,unaff_s8 - fVar23,0);
      puVar3 = PTR_DAT_0458e638;
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_041a9714;
      iVar18 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      lVar12 = *(long *)PTR_DAT_0458e638;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar12 = *(long *)puVar3;
      }
      puVar7 = PTR_DAT_0458e620;
      puVar4 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<Scene>__;
      lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      if (lVar13 == 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar12 = *(long *)puVar3;
        }
        uVar17 = **(undefined8 **)(lVar12 + 0xb8);
        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e610);
        FUN_02a487e4(lVar13,uVar17,*(undefined8 *)PTR_DAT_0458e628,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar9 = lVar13;
        thunk_FUN_01f51358(plVar9,lVar13);
      }
      puVar6 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<ParameterInfo>__;
      puVar5 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<object>__;
      FUN_030f459c(param_1,lVar13,*(undefined8 *)puVar7);
      FUN_030f35d0(&stack0x00000008,param_1,*(undefined8 *)puVar4);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000050 = in_stack_00000018;
      while (uVar14 = FUN_02c7ab6c(&stack0x00000040,*(undefined8 *)puVar6),
            lVar12 = in_stack_00000050, (uVar14 & 1) != 0) {
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar20 = fVar23 / (float)iVar18;
        fVar21 = *(float *)(in_stack_00000050 + 0x54);
        if (fVar20 <= *(float *)(in_stack_00000050 + 0x54)) {
          fVar21 = fVar20;
        }
        if (fVar20 < *(float *)(in_stack_00000050 + 0x4c)) {
          fVar21 = *(float *)(in_stack_00000050 + 0x4c);
        }
        fVar20 = *(float *)(in_stack_00000050 + 0x5c);
        if (*(float *)(in_stack_00000050 + 0x5c) != fVar21) {
          lVar13 = *(long *)(in_stack_00000050 + 0xb8);
          *(float *)(in_stack_00000050 + 0x5c) = fVar21;
          fVar20 = fVar21;
          if (lVar13 != 0) {
            (**(code **)(lVar13 + 0x18))
                      (*(undefined8 *)(lVar13 + 0x40),in_stack_00000050,
                       *(undefined8 *)(lVar13 + 0x28));
            fVar20 = *(float *)(lVar12 + 0x5c);
          }
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar23 = (float)FUN_0356bcb4(0,fVar23 - fVar20,0);
        iVar18 = iVar18 + -1;
      }
      FUN_02c7ab68(&stack0x00000040,*(undefined8 *)puVar5);
      lVar12 = *(long *)puVar3;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar12 = *(long *)puVar3;
      }
      lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
      if (lVar13 == 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar12 = *(long *)puVar3;
        }
        uVar17 = **(undefined8 **)(lVar12 + 0xb8);
        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e610);
        FUN_02a487e4(lVar13,uVar17,*(undefined8 *)PTR_DAT_0458e630,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        *plVar9 = lVar13;
        thunk_FUN_01f51358(plVar9,lVar13);
      }
      if (lVar8 == 0) goto LAB_041a9714;
      FUN_030f459c(lVar8,lVar13,*(undefined8 *)puVar7);
      FUN_030f35d0(&stack0x00000008,lVar8,*(undefined8 *)puVar4);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar14 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar6),
            lVar8 = in_stack_00000030, (uVar14 & 1) != 0) {
        fVar21 = (float)FUN_041a9d80();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar19 = fVar23 * (fVar21 / fVar24);
        fVar20 = *(float *)(lVar8 + 0x54);
        if (fVar19 <= *(float *)(lVar8 + 0x54)) {
          fVar20 = fVar19;
        }
        if (fVar19 < *(float *)(lVar8 + 0x4c)) {
          fVar20 = *(float *)(lVar8 + 0x4c);
        }
        fVar19 = *(float *)(lVar8 + 0x5c);
        if (*(float *)(lVar8 + 0x5c) != fVar20) {
          lVar12 = *(long *)(lVar8 + 0xb8);
          *(float *)(lVar8 + 0x5c) = fVar20;
          fVar19 = fVar20;
          if (lVar12 != 0) {
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),lVar8,*(undefined8 *)(lVar12 + 0x28));
            fVar19 = *(float *)(lVar8 + 0x5c);
          }
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar23 = (float)FUN_0356bcb4(0,fVar23 - fVar19,0);
        fVar24 = fVar24 - fVar21;
      }
      FUN_02c7ab68(&stack0x00000020,*(undefined8 *)puVar5);
    }
    uVar14 = FUN_041a8410();
    if ((uVar14 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_041a9714;
      if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x2c) == 0) {
        if (0x7f800000 < (uint)ABS(*(float *)(unaff_x19 + 0x3c))) goto LAB_041a96c8;
        fStack000000000000006c = *(float *)(unaff_x19 + 0x3c) - unaff_s8;
      }
      else {
        fStack000000000000006c = (float)FUN_041a80e0();
        fVar23 = *(float *)(unaff_x19 + 0x30);
        if (unaff_s8 <= *(float *)(unaff_x19 + 0x30)) {
          fVar23 = unaff_s8;
        }
        if (unaff_s8 < *(float *)(unaff_x19 + 0x34)) {
          fVar23 = *(float *)(unaff_x19 + 0x34);
        }
        fStack000000000000006c = fStack000000000000006c - fVar23;
      }
      if (fStack000000000000006c != 0.0) {
        FUN_041a9e20();
      }
    }
LAB_041a96c8:
    *(float *)(unaff_x19 + 0x3c) = unaff_s8;
    *(undefined1 *)(unaff_x19 + 0x38) = 0;
    return;
  }
LAB_041a9714:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


