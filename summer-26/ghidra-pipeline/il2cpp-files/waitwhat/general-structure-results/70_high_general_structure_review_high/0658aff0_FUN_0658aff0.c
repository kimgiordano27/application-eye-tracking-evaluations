/*
FUNCTION_NAME: FUN_0658aff0
ENTRY_POINT: 0658aff0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0658aff0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  int local_e4;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0755751a & 1) == 0) {
    FUN_03188a78(Oculus_Platform_Request<AchievementProgressList>_TypeInfo);
    FUN_03188a78(Oculus_Platform_Request<AchievementUpdate>_TypeInfo);
    FUN_03188a78(Oculus_Platform_Request<AppDownloadProgressResult>_TypeInfo);
    FUN_03188a78(Oculus_Platform_Request<AppDownloadResult>_TypeInfo);
    FUN_03188a78(System_Collections_ObjectModel_ReadOnlyCollection<Exception>_TypeInfo);
    FUN_03188a78(System_EmptyArray<char>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1fb0);
    FUN_03188a78(Oculus_Platform_Request<ApplicationInviteList>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1440);
    FUN_03188a78(System_Collections_ObjectModel_ReadOnlyCollection<ExceptionDispatchInfo>_TypeInfo);
    FUN_03188a78(System_Func<string,_RateLimit>_TypeInfo);
    DAT_0755751a = 1;
  }
  local_84 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    if (*(long *)(param_1 + 0x38) == 0) {
      lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)
                           System_Collections_ObjectModel_ReadOnlyCollection<Exception>_TypeInfo);
      FUN_03f768bc(lVar16,0,*(undefined8 *)Oculus_Platform_Request<AppDownloadResult>_TypeInfo);
      if (lVar16 == 0) goto LAB_0658b550;
      FUN_0659eb30(lVar16,0xc,0);
      *(long *)(param_1 + 0x38) = lVar16;
    }
    else {
      FUN_0659f8e4(*(long *)(param_1 + 0x38),0);
      puVar5 = Oculus_Platform_Request<AchievementUpdate>_TypeInfo;
      lVar16 = *(long *)(param_1 + 0x38);
      if (lVar16 == 0) {
LAB_0658b550:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      *(undefined4 *)(lVar16 + 0x28) = 0;
      FUN_039be34c(*(undefined8 *)(lVar16 + 0x20),*(undefined8 *)puVar5);
    }
    puVar19 = (undefined4 *)(param_1 + 0x24);
    *puVar19 = 0;
    *(undefined1 *)(param_1 + 0x31) = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      uVar25 = 0;
      iVar1 = **(int **)(*(long *)System_EmptyArray<char>_TypeInfo + 0xb8);
      do {
        lVar16 = *(long *)(param_1 + 8);
        if (lVar16 == 0) goto LAB_0658b550;
        if (*(uint *)(lVar16 + 0x18) <= uVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        lVar16 = lVar16 + 0x20;
        lVar17 = *(long *)(lVar16 + uVar25 * 8);
        if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x20), lVar17 == 0)) goto LAB_0658b550;
        iVar2 = *(int *)(lVar17 + 0x44);
        if (iVar2 != 0) {
          uVar3 = *puVar19;
          local_e4 = FUN_0659eec8(lVar17,iVar2 + -1,0);
          puVar11 = (undefined8 *)FUN_065a055c(lVar17,local_e4,0);
          iVar7 = FUN_065a04ec(lVar17,0);
          if (0 < iVar2) {
            iVar8 = 0;
            iVar22 = 0;
            lVar24 = 0;
            iVar4 = *(int *)(lVar17 + 0x4c);
            do {
              if (iVar22 != 0) {
                local_e4 = local_e4 + -1;
                if (local_e4 < 0) {
                  local_e4 = *(int *)(lVar17 + 0x48) + -1;
                  puVar11 = (undefined8 *)FUN_065a055c(lVar17,local_e4,0);
                }
                else {
                  puVar11 = (undefined8 *)((long)puVar11 - (long)iVar7);
                }
              }
              piVar12 = (int *)FUN_065a0178(puVar11,0);
              if (piVar12 == (int *)0x0) goto LAB_0658b550;
              iVar10 = piVar12[9];
              if (*piVar12 == iVar8) {
                uVar13 = FUN_0654ea40((char)piVar12[8],0);
                if ((uVar13 & 1) != 0) goto LAB_0658b294;
                if ((iVar10 == iVar1) && ((char)piVar12[8] == '\x01')) {
                  *(undefined1 *)(lVar24 + 0x20) = 1;
                  uVar15 = *(undefined8 *)(piVar12 + 1);
                  *(undefined8 *)(lVar24 + 0xc) = 0;
                  *(undefined8 *)(lVar24 + 4) = uVar15;
                  goto LAB_0658b4d4;
                }
              }
              else {
LAB_0658b294:
                uVar13 = FUN_0654ea40((char)piVar12[8],0);
                if (((uVar13 & 1) != 0) &&
                   (((-1 < *(char *)((long)piVar12 + 0x23) || (piVar12[9] != iVar1 + -1)) &&
                    (iVar10 != iVar1)))) break;
                if (*(long *)(param_1 + 0x38) == 0) goto LAB_0658b550;
                puVar14 = (undefined8 *)FUN_0659f964(*(long *)(param_1 + 0x38),&local_84,0);
                lVar24 = FUN_065a0180(puVar14,0);
                if (*(long *)(param_1 + 0x38) == 0) goto LAB_0658b550;
                iVar8 = FUN_065a04ec(*(long *)(param_1 + 0x38),0);
                if ((puVar11 == (undefined8 *)0x0) || (puVar14 == (undefined8 *)0x0))
                goto LAB_0658b550;
                *puVar14 = *puVar11;
                lVar23 = *(long *)(param_1 + 0x38);
                if ((lVar23 == 0) ||
                   ((lVar18 = *(long *)(lVar16 + uVar25 * 8), lVar18 == 0 ||
                    (lVar18 = *(long *)(lVar18 + 0x20), lVar18 == 0)))) goto LAB_0658b550;
                puVar21 = (undefined8 *)((long)puVar14 + (long)iVar8 + -0xc);
                auVar26 = FUN_0659ed58(lVar18,0);
                local_c8 = auVar26;
                uVar15 = FUN_04884e1c(local_c8,0,*(undefined8 *)PTR_DAT_070f1fb0);
                uVar9 = FUN_039bd098(lVar23 + 0x20,lVar23 + 0x28,uVar15,10,
                                     *(undefined8 *)
                                      Oculus_Platform_Request<AchievementProgressList>_TypeInfo);
                *(undefined4 *)((long)puVar14 + 0xc) = uVar9;
                FUN_069817a8(lVar24,piVar12,0x38,0);
                FUN_069817a8(puVar21,(long)puVar11 + (long)(iVar7 - iVar4),0xc,0);
                if ((*(byte *)(piVar12 + 8) - 3 < 0xfffffffe) ||
                   ((iVar10 == iVar1 ||
                    (((*(byte *)(piVar12 + 8) == 2 && (*(char *)((long)piVar12 + 0x23) < '\0')) &&
                     (piVar12[9] == iVar1 + -1)))))) {
                  if ((iVar10 == iVar1) || (*(char *)((long)piVar12 + 0x23) < '\0')) {
                    if ((puVar21 == (undefined8 *)0x0) || (lVar24 == 0)) goto LAB_0658b550;
                    uVar15 = *puVar21;
                  }
                  else {
                    if (lVar24 == 0) goto LAB_0658b550;
                    uVar15 = 0;
                  }
                }
                else {
                  uVar15 = 0;
                  *(undefined1 *)(lVar24 + 0x20) = 5;
                }
                *(undefined8 *)(lVar24 + 0xc) = uVar15;
                FUN_04a419cc(&local_a0,*(undefined8 *)(param_1 + 0x38),local_84,puVar14,
                             *(undefined8 *)Oculus_Platform_Request<ApplicationInviteList>_TypeInfo)
                ;
                uVar6 = uStack_98;
                uVar15 = local_a0;
                uVar20 = *(undefined8 *)(lVar16 + uVar25 * 8);
                if (*(int *)(*(long *)PTR_DAT_070f1440 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                uStack_a8 = uVar6;
                uStack_b0 = uVar15;
                uStack_78 = uVar15;
                local_70 = uVar6;
                local_b8 = uVar20;
                local_80 = uVar20;
                FUN_039c2c0c(param_1 + 0x18,puVar19,uVar3,&local_80,10,
                             *(undefined8 *)
                              Oculus_Platform_Request<AppDownloadProgressResult>_TypeInfo);
                iVar8 = *piVar12;
                iVar10 = FUN_0658a83c(&local_b8);
                if (iVar10 != 5) {
LAB_0658b4d4:
                  *(undefined1 *)(param_1 + 0x31) = 1;
                }
              }
              iVar22 = iVar22 + 1;
            } while (iVar2 != iVar22);
          }
        }
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < *(int *)(param_1 + 0x28));
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}


