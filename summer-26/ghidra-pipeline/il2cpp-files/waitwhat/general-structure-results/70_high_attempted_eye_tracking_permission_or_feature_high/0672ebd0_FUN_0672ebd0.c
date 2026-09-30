/*
FUNCTION_NAME: FUN_0672ebd0
ENTRY_POINT: 0672ebd0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_0672ebd0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [16],
                 long *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long *plVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  int local_804;
  long local_800;
  long lStack_7f8;
  long local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined1 *puStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  void *local_7c0;
  ulong uStack_7b8;
  long local_7b0;
  undefined8 uStack_7a8;
  undefined1 local_79c [4];
  long local_798;
  undefined8 uStack_790;
  undefined1 auStack_6cc [252];
  undefined1 auStack_5d0 [456];
  undefined1 auStack_408 [456];
  undefined1 auStack_240 [456];
  long local_78;
  
  puVar6 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_RecordPreview_TypeInfo;
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if ((DAT_075583f8 & 1) == 0) {
    FUN_03188a78(Fusion_Photon_Realtime_Player_TypeInfo);
    FUN_03188a78(OVREyeGaze_TypeInfo);
    FUN_03188a78(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_RecordStream_TypeInfo);
    FUN_03188a78(UnityEngine_Profiling_Recorder_TypeInfo);
    FUN_03188a78(UnityEngine_Rect_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_RectField_TypeInfo);
    FUN_03188a78(UnityEngine_RectInt_TypeInfo);
    FUN_03188a78(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_RecordPreview_TypeInfo);
    FUN_03188a78(OVRGLTFAnimatinonNode_TypeInfo);
    DAT_075583f8 = 1;
  }
  local_79c[0] = 0;
  local_7b0 = 0;
  uStack_7a8 = 0;
  local_7c0 = (void *)0x0;
  uStack_7b8 = 0;
  memset(auStack_240,0,0x1c8);
  local_7d0 = 0;
  uStack_7c8 = 0;
  memset(auStack_408,0,0x1c8);
  memset(auStack_5d0,0,0x1c8);
  lVar11 = *(long *)puVar6;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar11 = *(long *)puVar6;
  }
  FUN_065e0fa8(local_79c,**(undefined8 **)(lVar11 + 0xb8),0);
  local_7e0 = 0;
  puStack_7d8 = local_79c;
  FUN_06a0c3e4(param_3,0);
  local_798 = 0;
  uStack_790 = 0;
  FUN_045bb508(&local_798,(int)extraout_x1 * 6,2,1,*(undefined8 *)UnityEngine_Rect_TypeInfo);
  local_7f0 = 0;
  uStack_7e8 = 0;
  uStack_7a8 = uStack_790;
  local_7b0 = local_798;
  FUN_04599b60(&local_7f0,extraout_x1 & 0xffffffff,2,1,*(undefined8 *)UnityEngine_RectInt_TypeInfo);
  uVar7 = uStack_7e8;
  lVar11 = local_7f0;
  local_800 = 0;
  lStack_7f8 = 0;
  FUN_045c84c8(&local_800,extraout_x1 & 0xffffffff,2,1,
               *(undefined8 *)UnityEngine_UIElements_RectField_TypeInfo);
  param_5[1] = lStack_7f8;
  *param_5 = local_800;
  if ((int)extraout_x1 < 1) {
    iVar19 = 0;
  }
  else {
    uVar18 = 0;
    iVar19 = 0;
    local_804 = 0;
    do {
      auVar22 = FUN_06a0c3e4(param_3,0);
      uVar12 = FUN_03b26540(auVar22._0_8_,auVar22._8_8_,uVar18 & 0xffffffff,
                            *(undefined8 *)OVREyeGaze_TypeInfo);
      uVar8 = FUN_06a153f8(uVar12,0);
      local_7c0 = (void *)0x0;
      uStack_7b8 = 0;
      if (uVar8 == 0) {
        if (param_1 == 0) {
          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_0672f45c;
        }
        if ((*(char *)(param_1 + 0x30) == '\0') ||
           (uVar13 = FUN_066f16d0(param_2,uVar18 & 0xffffffff,0), (uVar13 & 1) == 0))
        goto LAB_0672f264;
        FUN_045ba2ec(&local_7c0,1,2,1,*(undefined8 *)UnityEngine_Profiling_Recorder_TypeInfo);
        memset(auStack_5d0,0,0x1c8);
        if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar10 = FUN_0672f77c(param_3);
        uVar10 = uVar10 & 1;
        memmove(local_7c0,auStack_5d0,0x1c8);
        memcpy(&local_798,auStack_5d0,0x1c8);
        memcpy((void *)(local_7b0 + (long)local_804 * 0xfc),auStack_6cc,0xfc);
LAB_0672f1c4:
        plVar15 = (long *)(*param_5 + uVar18 * 0x18);
        plVar15[1] = uStack_7b8;
        *plVar15 = (long)local_7c0;
        *(uint *)(plVar15 + 2) = uVar10;
        *(undefined4 *)((long)plVar15 + 0x14) = 0;
        local_798 = 0;
        FUN_069d9e50(&local_798,local_804,uStack_7b8 & 0xffffffff,0);
        lVar14 = local_798;
        if (*(int *)(*(long *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_RecordPreview_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        if (uVar8 < 3) {
          uVar20 = *(undefined4 *)(&DAT_013ee84c + (ulong)uVar8 * 4);
        }
        else {
          uVar20 = 0;
        }
        plVar15 = (long *)(lVar11 + uVar18 * 0x10);
        *plVar15 = lVar14;
        *(undefined4 *)(plVar15 + 1) = uVar20;
        *(undefined4 *)((long)plVar15 + 0xc) = 0;
        local_804 = (int)uStack_7b8 + local_804;
        iVar19 = (int)uStack_7b8 + iVar19;
      }
      else if (uVar8 == 1) {
        if (param_1 == 0) {
          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_0672f45c;
        }
        if (*(char *)(param_1 + 0x10) != '\0') {
          uVar3 = *(uint *)(param_1 + 0x1c);
          uVar2 = *(undefined4 *)(param_1 + 0x5c);
          uVar20 = *(undefined4 *)(param_1 + 0x60);
          uVar1 = *(undefined4 *)(param_1 + 100);
          FUN_045ba2ec(&local_7c0,uVar3,2,1,*(undefined8 *)UnityEngine_Profiling_Recorder_TypeInfo);
          if (0 < (int)uVar3) {
            lVar14 = 0;
            uVar16 = 0;
            uVar10 = 0;
            do {
              memset(auStack_240,0,0x1c8);
              lVar17 = FUN_06a1536c(uVar12,0);
              if (lVar17 == 0) {
                if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                  FUN_03188cd8();
                }
                goto LAB_0672f45c;
              }
              uVar21 = FUN_069a9100(lVar17,0);
              if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar13 = FUN_0672f464(uVar21,param_3,param_1,uVar18 & 0xffffffff,uVar16,uVar20,uVar1,
                                    uVar2,&local_7d0,auStack_240);
              uVar4 = 1 << (ulong)(uVar16 & 0x1f);
              if ((uVar13 & 1) == 0) {
                uVar4 = 0;
              }
              uVar10 = uVar4 | uVar10;
              memmove((void *)((long)local_7c0 + lVar14),auStack_240,0x1c8);
              memcpy(&local_798,auStack_240,0x1c8);
              memcpy((void *)(local_7b0 + (long)(int)(local_804 + uVar16) * 0xfc),auStack_6cc,0xfc);
              lVar14 = lVar14 + 0x1c8;
              uVar16 = uVar16 + 1;
            } while ((ulong)uVar3 * 0x1c8 - lVar14 != 0);
            goto LAB_0672f1c4;
          }
          goto LAB_0672f1c0;
        }
      }
      else {
        if (uVar8 != 2) {
LAB_0672f1c0:
          uVar10 = 0;
          goto LAB_0672f1c4;
        }
        if (param_1 == 0) {
          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_0672f45c;
        }
        if ((*(char *)(param_1 + 0x30) != '\0') &&
           (uVar13 = FUN_066f16d0(param_2,uVar18 & 0xffffffff,0), (uVar13 & 1) != 0)) {
          if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_066f1708(param_2,uVar18 & 0xffffffff,0,0);
          lVar14 = FUN_06a1536c(uVar12,0);
          if (lVar14 != 0) {
            iVar9 = FUN_069a958c(lVar14,0);
            if (*(int *)(*(long *)Fusion_Photon_Realtime_Player_TypeInfo + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar20 = FUN_067643d4(extraout_x1_00 >> 0x10 & 0xffff,iVar9 == 2,0);
            FUN_045ba2ec(&local_7c0,6,2,1,*(undefined8 *)UnityEngine_Profiling_Recorder_TypeInfo);
            lVar17 = 0;
            lVar14 = 0;
            uVar10 = 0;
            do {
              memset(auStack_408,0,0x1c8);
              if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar13 = FUN_0672f644(uVar20,param_3);
              uVar3 = 1 << (ulong)((uint)lVar14 & 0x1f);
              if ((uVar13 & 1) == 0) {
                uVar3 = 0;
              }
              uVar10 = uVar3 | uVar10;
              memmove((void *)((long)local_7c0 + lVar17),auStack_408,0x1c8);
              memcpy(&local_798,auStack_408,0x1c8);
              memcpy((void *)(local_7b0 + (long)(int)(local_804 + (uint)lVar14) * 0xfc),auStack_6cc,
                     0xfc);
              lVar14 = lVar14 + 1;
              lVar17 = lVar17 + 0x1c8;
            } while (lVar14 != 6);
            goto LAB_0672f1c4;
          }
          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_0672f45c;
        }
      }
LAB_0672f264:
      uVar18 = uVar18 + 1;
    } while (uVar18 != (extraout_x1 & 0xffffffff));
  }
  puVar6 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_RecordStream_TypeInfo;
  *(undefined8 *)(*param_4 + 8) = 0;
  *(undefined8 *)*param_4 = 0;
  *(undefined8 *)(param_4[1] + 8) = 0;
  *(undefined8 *)param_4[1] = 0;
  auVar22 = FUN_045bc574(&local_7b0,0,iVar19,*(undefined8 *)puVar6);
  *param_4 = auVar22;
  *(long *)param_4[1] = lVar11;
  *(undefined8 *)(param_4[1] + 8) = uVar7;
  FUN_065e0fb4(local_79c,0);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
LAB_0672f45c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


