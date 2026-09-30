/*
FUNCTION_NAME: Unity.XR.CoreUtils.UndoBlock$$Dispose
ENTRY_POINT: 0672eecc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void Unity_XR_CoreUtils_UndoBlock__Dispose
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong extraout_x1;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong unaff_x25;
  uint unaff_w27;
  undefined4 uVar13;
  undefined4 unaff_s8;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 (*in_stack_00000038) [16];
  long in_stack_00000040;
  long *in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  void *in_stack_000000b0;
  int iStack00000000000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000d8;
  long in_stack_000007f8;
  
code_r0x0672eecc:
  FUN_045ba2ec(param_1,param_2,param_3,1,param_5);
  lVar12 = 0;
  lVar10 = 0;
  uVar6 = 0;
  do {
    memset(&stack0x00000468,0,0x1c8);
    if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar8 = FUN_0672f644(unaff_s8);
    uVar2 = 1 << (ulong)((uint)lVar10 & 0x1f);
    if ((uVar8 & 1) == 0) {
      uVar2 = 0;
    }
    uVar6 = uVar2 | uVar6;
    memmove((void *)((long)in_stack_000000b0 + lVar12),&stack0x00000468,0x1c8);
    memcpy(&stack0x000000d8,&stack0x00000468,0x1c8);
    memcpy((void *)(in_stack_000000c0 + (long)(int)(in_stack_00000068._4_4_ + (uint)lVar10) * 0xfc),
           &stack0x000001a4,0xfc);
    lVar10 = lVar10 + 1;
    lVar12 = lVar12 + 0x1c8;
  } while (lVar10 != 6);
LAB_0672f1c4:
  do {
    plVar9 = (long *)(*in_stack_00000048 + unaff_x25 * 0x18);
    plVar9[1] = _iStack00000000000000b8;
    *plVar9 = (long)in_stack_000000b0;
    *(uint *)(plVar9 + 2) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x14) = 0;
    in_stack_000000d8 = 0;
    FUN_069d9e50(&stack0x000000d8,in_stack_00000068._4_4_,_iStack00000000000000b8 & 0xffffffff,0);
    uVar7 = in_stack_000000d8;
    if (*(int *)(*(long *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_RecordPreview_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    if (unaff_w27 < 3) {
      uVar13 = *(undefined4 *)(&DAT_013ee84c + (ulong)unaff_w27 * 4);
    }
    else {
      uVar13 = 0;
    }
    puVar1 = (undefined8 *)(in_stack_00000040 + unaff_x25 * 0x10);
    *puVar1 = uVar7;
    *(undefined4 *)(puVar1 + 1) = uVar13;
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
    in_stack_00000068._4_4_ = iStack00000000000000b8 + in_stack_00000068._4_4_;
    in_stack_00000058._4_4_ = iStack00000000000000b8 + in_stack_00000058._4_4_;
    do {
      while( true ) {
        while( true ) {
          puVar4 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_RecordStream_TypeInfo;
          unaff_x25 = unaff_x25 + 1;
          if (unaff_x25 == in_stack_00000050) {
            *(undefined8 *)(*in_stack_00000038 + 8) = 0;
            *(undefined8 *)*in_stack_00000038 = 0;
            *(undefined8 *)(in_stack_00000038[1] + 8) = 0;
            *(undefined8 *)in_stack_00000038[1] = 0;
            auVar14 = FUN_045bc574(&stack0x000000c0,0,in_stack_00000058._4_4_,*(undefined8 *)puVar4)
            ;
            *in_stack_00000038 = auVar14;
            *(long *)in_stack_00000038[1] = in_stack_00000040;
            *(undefined8 *)(in_stack_00000038[1] + 8) = in_stack_00000020;
            FUN_065e0fb4(&stack0x000000d4,0);
            if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
              return;
            }
            goto LAB_0672f45c;
          }
          auVar14 = FUN_06a0c3e4();
          uVar7 = FUN_03b26540(auVar14._0_8_,auVar14._8_8_,unaff_x25 & 0xffffffff,
                               *(undefined8 *)OVREyeGaze_TypeInfo);
          unaff_w27 = FUN_06a153f8(uVar7,0);
          in_stack_000000b0 = (void *)0x0;
          _iStack00000000000000b8 = 0;
          if (unaff_w27 != 0) break;
          if (in_stack_00000060 == 0) {
            if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_0672f45c;
          }
          if ((*(char *)(in_stack_00000060 + 0x30) != '\0') &&
             (uVar8 = FUN_066f16d0(in_stack_00000030,unaff_x25 & 0xffffffff,0), (uVar8 & 1) != 0)) {
            FUN_045ba2ec(&stack0x000000b0,1,2,1,
                         *(undefined8 *)UnityEngine_Profiling_Recorder_TypeInfo);
            memset(&stack0x000002a0,0,0x1c8);
            if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar6 = FUN_0672f77c();
            uVar6 = uVar6 & 1;
            memmove(in_stack_000000b0,&stack0x000002a0,0x1c8);
            memcpy(&stack0x000000d8,&stack0x000002a0,0x1c8);
            memcpy((void *)(in_stack_000000c0 + (long)in_stack_00000068._4_4_ * 0xfc),
                   &stack0x000001a4,0xfc);
            goto LAB_0672f1c4;
          }
        }
        if (unaff_w27 == 1) break;
        if (unaff_w27 != 2) goto LAB_0672f1c0;
        if (in_stack_00000060 == 0) {
          if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_0672f45c;
        }
        if ((*(char *)(in_stack_00000060 + 0x30) != '\0') &&
           (uVar8 = FUN_066f16d0(in_stack_00000030,unaff_x25 & 0xffffffff,0), (uVar8 & 1) != 0)) {
          if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_066f1708(in_stack_00000030,unaff_x25 & 0xffffffff,0,0);
          lVar10 = FUN_06a1536c(uVar7,0);
          if (lVar10 == 0) {
            if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_0672f45c;
          }
          iVar5 = FUN_069a958c(lVar10,0);
          if (*(int *)(*(long *)Fusion_Photon_Realtime_Player_TypeInfo + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          unaff_s8 = FUN_067643d4(extraout_x1 >> 0x10 & 0xffff,iVar5 == 2,0);
          param_5 = *(undefined8 *)UnityEngine_Profiling_Recorder_TypeInfo;
          param_1 = &stack0x000000b0;
          param_2 = 6;
          param_3 = 2;
          goto code_r0x0672eecc;
        }
      }
      if (in_stack_00000060 == 0) {
        if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_0672f45c;
      }
    } while (*(char *)(in_stack_00000060 + 0x10) == '\0');
    uVar2 = *(uint *)(in_stack_00000060 + 0x1c);
    FUN_045ba2ec(&stack0x000000b0,uVar2,2,1,*(undefined8 *)UnityEngine_Profiling_Recorder_TypeInfo);
    if ((int)uVar2 < 1) {
LAB_0672f1c0:
      uVar6 = 0;
    }
    else {
      lVar10 = 0;
      uVar11 = 0;
      uVar6 = 0;
      do {
        memset(&stack0x00000630,0,0x1c8);
        lVar12 = FUN_06a1536c(uVar7,0);
        if (lVar12 == 0) {
          if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
LAB_0672f45c:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar13 = FUN_069a9100(lVar12,0);
        if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar8 = FUN_0672f464(uVar13);
        uVar3 = 1 << (ulong)(uVar11 & 0x1f);
        if ((uVar8 & 1) == 0) {
          uVar3 = 0;
        }
        uVar6 = uVar3 | uVar6;
        memmove((void *)((long)in_stack_000000b0 + lVar10),&stack0x00000630,0x1c8);
        memcpy(&stack0x000000d8,&stack0x00000630,0x1c8);
        memcpy((void *)(in_stack_000000c0 + (long)(int)(in_stack_00000068._4_4_ + uVar11) * 0xfc),
               &stack0x000001a4,0xfc);
        lVar10 = lVar10 + 0x1c8;
        uVar11 = uVar11 + 1;
      } while ((ulong)uVar2 * 0x1c8 - lVar10 != 0);
    }
  } while( true );
}


