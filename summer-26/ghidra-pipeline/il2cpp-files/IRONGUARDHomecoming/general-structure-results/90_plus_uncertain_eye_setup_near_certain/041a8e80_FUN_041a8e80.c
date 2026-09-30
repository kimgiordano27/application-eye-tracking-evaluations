/*
FUNCTION_NAME: FUN_041a8e80
ENTRY_POINT: 041a8e80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x041a971c) */

void FUN_041a8e80(float param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  float local_84;
  
  if ((DAT_04840d19 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458e610);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EnsureThat_IsNotNull<object>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EnsureThat_IsNotNull<ParameterInfo>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EnsureThat_IsNotNull<PropertyInfo>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0458e618);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EnsureThat_IsNotNull<Scene>__);
    thunk_FUN_01efb3a4(PTR_DAT_0458e620);
    thunk_FUN_01efb3a4(PTR_DAT_0458e5d0);
    thunk_FUN_01efb3a4(PTR_DAT_0458e5c8);
    thunk_FUN_01efb3a4(PTR_DAT_0458e5c0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458e628);
    thunk_FUN_01efb3a4(PTR_DAT_0458e630);
    thunk_FUN_01efb3a4(PTR_DAT_0458e638);
    DAT_04840d19 = 1;
  }
  puVar3 = PTR_DAT_0458e5d0;
  puVar2 = PTR_DAT_0458e5c0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_84 = 0.0;
  if (*(char *)(param_2 + 0x38) != '\0') {
    FUN_041a98d8(param_2);
  }
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_030f2380(lVar8,*(undefined8 *)puVar3);
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_030f2380(lVar9,*(undefined8 *)puVar3);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar10 = (long *)FUN_041a9ce0();
    puVar7 = PTR_DAT_0458e618;
    puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar24 = 0.0;
    fVar25 = 0.0;
LAB_041a9030:
    do {
      lVar13 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_041a907c;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_041a907c:
      uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_041a932c;
        lVar13 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 == 0) goto LAB_041a9304;
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_041a92ec;
      }
      lVar13 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_041a90d8;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_041a90d8:
      lVar13 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    } while (*(char *)(lVar13 + 0x40) == '\0');
    fVar22 = *(float *)(lVar13 + 0x5c);
    lVar14 = *(long *)(param_2 + 0x20);
    if ((uint)ABS(fVar22) < 0x7f800001) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((*(int *)(lVar14 + 0x2c) == 1) && (*(char *)(lVar13 + 0x60) != '\0')) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *(long *)(lVar9 + 0x10);
        lVar16 = *(long *)puVar7;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *plVar12 = lVar13;
          thunk_FUN_01f51358(plVar12,lVar13);
        }
        else {
          FUN_030f2bb4(lVar9,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        fVar21 = (float)FUN_041a9d80(param_2,lVar13);
        fVar22 = *(float *)(lVar13 + 0x5c);
        fVar25 = fVar25 + fVar21;
      }
      fVar20 = *(float *)(lVar13 + 0x4c);
      fVar21 = *(float *)(lVar13 + 0x54);
      if ((fVar22 < fVar20) || (fVar21 < fVar22)) {
        fVar23 = *(float *)(lVar13 + 0x44);
        if (fVar23 <= fVar21) {
          fVar21 = fVar23;
        }
        if (fVar23 < fVar20) {
          fVar21 = fVar20;
        }
        if (fVar22 != fVar21) {
          lVar14 = *(long *)(lVar13 + 0xb8);
          *(float *)(lVar13 + 0x5c) = fVar21;
          if (lVar14 != 0) {
            (**(code **)(lVar14 + 0x18))
                      (*(undefined8 *)(lVar14 + 0x40),lVar13,*(undefined8 *)(lVar14 + 0x28));
          }
        }
      }
    }
    else {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((*(int *)(lVar14 + 0x2c) == 1) && (*(char *)(lVar13 + 0x60) != '\0')) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *(long *)(lVar8 + 0x10);
        lVar16 = *(long *)puVar7;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *plVar12 = lVar13;
          thunk_FUN_01f51358(plVar12,lVar13);
        }
        else {
          FUN_030f2bb4(lVar8,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_041a9030;
      }
      fVar20 = *(float *)(lVar13 + 0x44);
      fVar21 = *(float *)(lVar13 + 0x54);
      if (fVar20 <= *(float *)(lVar13 + 0x54)) {
        fVar21 = fVar20;
      }
      if (fVar20 < *(float *)(lVar13 + 0x4c)) {
        fVar21 = *(float *)(lVar13 + 0x4c);
      }
      if (fVar22 != fVar21) {
        lVar14 = *(long *)(lVar13 + 0xb8);
        *(float *)(lVar13 + 0x5c) = fVar21;
        if (lVar14 != 0) {
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),lVar13,*(undefined8 *)(lVar14 + 0x28));
        }
      }
    }
    if (*(char *)(lVar13 + 0x60) == '\0') {
      fVar24 = fVar24 + *(float *)(lVar13 + 0x5c);
    }
    goto LAB_041a9030;
  }
  goto LAB_041a9714;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_041a92ec:
    if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_041a9320;
    }
  }
LAB_041a9304:
  puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_041a9320:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_041a932c:
  puVar2 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (lVar8 != 0) {
    if (0 < *(int *)(lVar8 + 0x18)) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar24 = (float)FUN_0356bcb4(0,param_1 - fVar24,0);
      puVar3 = PTR_DAT_0458e638;
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_041a9714;
      iVar19 = *(int *)(*(long *)(param_2 + 0x10) + 0x18);
      lVar13 = *(long *)PTR_DAT_0458e638;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar13 = *(long *)puVar3;
      }
      puVar7 = PTR_DAT_0458e620;
      puVar4 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<Scene>__;
      lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
      if (lVar14 == 0) {
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar13 = *(long *)puVar3;
        }
        uVar18 = **(undefined8 **)(lVar13 + 0xb8);
        lVar14 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e610);
        FUN_02a487e4(lVar14,uVar18,*(undefined8 *)PTR_DAT_0458e628,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar10 = lVar14;
        thunk_FUN_01f51358(plVar10,lVar14);
      }
      puVar6 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<ParameterInfo>__;
      puVar5 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<object>__;
      FUN_030f459c(lVar8,lVar14,*(undefined8 *)puVar7);
      FUN_030f35d0(&local_e8,lVar8,*(undefined8 *)puVar4);
      uStack_a8 = uStack_e0;
      local_b0 = local_e8;
      local_a0 = local_d8;
      while (uVar15 = FUN_02c7ab6c(&local_b0,*(undefined8 *)puVar6), lVar8 = local_a0,
            (uVar15 & 1) != 0) {
        if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar21 = fVar24 / (float)iVar19;
        fVar22 = *(float *)(local_a0 + 0x54);
        if (fVar21 <= *(float *)(local_a0 + 0x54)) {
          fVar22 = fVar21;
        }
        if (fVar21 < *(float *)(local_a0 + 0x4c)) {
          fVar22 = *(float *)(local_a0 + 0x4c);
        }
        fVar21 = *(float *)(local_a0 + 0x5c);
        if (*(float *)(local_a0 + 0x5c) != fVar22) {
          lVar13 = *(long *)(local_a0 + 0xb8);
          *(float *)(local_a0 + 0x5c) = fVar22;
          fVar21 = fVar22;
          if (lVar13 != 0) {
            (**(code **)(lVar13 + 0x18))
                      (*(undefined8 *)(lVar13 + 0x40),local_a0,*(undefined8 *)(lVar13 + 0x28));
            fVar21 = *(float *)(lVar8 + 0x5c);
          }
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar24 = (float)FUN_0356bcb4(0,fVar24 - fVar21,0);
        iVar19 = iVar19 + -1;
      }
      FUN_02c7ab68(&local_b0,*(undefined8 *)puVar5);
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar8 = *(long *)puVar3;
      }
      lVar13 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar13 == 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar8 = *(long *)puVar3;
        }
        uVar18 = **(undefined8 **)(lVar8 + 0xb8);
        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e610);
        FUN_02a487e4(lVar13,uVar18,*(undefined8 *)PTR_DAT_0458e630,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        *plVar10 = lVar13;
        thunk_FUN_01f51358(plVar10,lVar13);
      }
      if (lVar9 == 0) goto LAB_041a9714;
      FUN_030f459c(lVar9,lVar13,*(undefined8 *)puVar7);
      FUN_030f35d0(&local_e8,lVar9,*(undefined8 *)puVar4);
      uStack_c8 = uStack_e0;
      local_d0 = local_e8;
      local_c0 = local_d8;
      while (uVar15 = FUN_02c7ab6c(&local_d0,*(undefined8 *)puVar6), lVar8 = local_c0,
            (uVar15 & 1) != 0) {
        fVar22 = (float)FUN_041a9d80(param_2,local_c0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar20 = fVar24 * (fVar22 / fVar25);
        fVar21 = *(float *)(lVar8 + 0x54);
        if (fVar20 <= *(float *)(lVar8 + 0x54)) {
          fVar21 = fVar20;
        }
        if (fVar20 < *(float *)(lVar8 + 0x4c)) {
          fVar21 = *(float *)(lVar8 + 0x4c);
        }
        fVar20 = *(float *)(lVar8 + 0x5c);
        if (*(float *)(lVar8 + 0x5c) != fVar21) {
          lVar9 = *(long *)(lVar8 + 0xb8);
          *(float *)(lVar8 + 0x5c) = fVar21;
          fVar20 = fVar21;
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),lVar8,*(undefined8 *)(lVar9 + 0x28));
            fVar20 = *(float *)(lVar8 + 0x5c);
          }
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar24 = (float)FUN_0356bcb4(0,fVar24 - fVar20,0);
        fVar25 = fVar25 - fVar22;
      }
      FUN_02c7ab68(&local_d0,*(undefined8 *)puVar5);
    }
    uVar15 = FUN_041a8410(param_2);
    if ((uVar15 & 1) != 0) {
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_041a9714;
      if (*(int *)(*(long *)(param_2 + 0x20) + 0x2c) == 0) {
        if (0x7f800000 < (uint)ABS(*(float *)(param_2 + 0x3c))) goto LAB_041a96c8;
        local_84 = *(float *)(param_2 + 0x3c) - param_1;
      }
      else {
        local_84 = (float)FUN_041a80e0(param_2);
        fVar24 = *(float *)(param_2 + 0x30);
        if (param_1 <= *(float *)(param_2 + 0x30)) {
          fVar24 = param_1;
        }
        if (param_1 < *(float *)(param_2 + 0x34)) {
          fVar24 = *(float *)(param_2 + 0x34);
        }
        local_84 = local_84 - fVar24;
      }
      if (local_84 != 0.0) {
        FUN_041a9e20(param_2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                     &local_84,0);
      }
    }
LAB_041a96c8:
    *(float *)(param_2 + 0x3c) = param_1;
    *(undefined1 *)(param_2 + 0x38) = 0;
    return;
  }
LAB_041a9714:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


