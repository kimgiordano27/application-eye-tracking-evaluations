/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 06045da4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 99
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze___ctor(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                      uint param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  if ((DAT_07ee050d & 1) == 0) {
    FUN_03642964(PTR_DAT_07a21f98);
    FUN_03642964(PTR_DAT_07a21030);
    DAT_07ee050d = 1;
  }
  lVar4 = *(long *)(param_4 + 0x1a0);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_5) {
LAB_06046020:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)param_5 * 8 + 0x20);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x10) != '\0') {
        return;
      }
      if (*(long *)(param_4 + 0x1a8) != 0) {
        FUN_0604621c(*(long *)(param_4 + 0x1a8),param_5,*(undefined8 *)(param_4 + 0x1b0));
        lVar6 = *(long *)(param_4 + 0x1a8);
        if (lVar6 != 0) {
          FUN_06048590(lVar6,param_5,0);
          uVar2 = FUN_060488bc(param_1,param_2,param_3,lVar6,param_6,0,0);
          if ((uVar2 & 1) != 0) {
            return;
          }
          if (*(long *)(param_4 + 0x1a8) != 0) {
            uVar2 = OVRUnityHumanoidSkeletonRetargeter__get_SourceSkeletonData
                              (param_1,param_2,param_3,*(long *)(param_4 + 0x1a8),param_5,
                               *(undefined8 *)(param_4 + 0x1b0),*(undefined8 *)(param_4 + 0x1b8),
                               param_6);
            if ((uVar2 & 1) == 0) {
              return;
            }
            *(undefined4 *)(lVar4 + 0x2c) = 0;
            *(undefined2 *)(lVar4 + 0x10) = 0x101;
            if (*(long *)(param_4 + 0x1a8) != 0) {
              FUN_060466e4(*(long *)(param_4 + 0x1a8),*(undefined8 *)(lVar4 + 0x18),
                           *(undefined8 *)(lVar4 + 0x20),1);
              if (*(long *)(lVar4 + 0x18) != 0) {
                lVar6 = FUN_03642a4c(*(undefined8 *)PTR_DAT_07a21030,
                                     *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x18));
                lVar5 = *(long *)(lVar4 + 0x18);
                if (lVar5 != 0) {
                  uVar2 = 0;
                  lVar7 = 0x20;
                  while ((long)uVar2 < (long)(int)*(uint *)(lVar5 + 0x18)) {
                    if (*(long *)(param_4 + 0x1a8) == 0) goto LAB_06046000;
                    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_06046020;
                    lVar3 = *(long *)(*(long *)(param_4 + 0x1a8) + 0x10);
                    if ((lVar3 == 0) ||
                       (FUN_060f7ab8(&stack0x00000020 + 4,lVar3,
                                     *(undefined4 *)(lVar5 + uVar2 * 4 + 0x20),0), lVar6 == 0))
                    goto LAB_06046000;
                    if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_06046020;
                    puVar1 = (undefined8 *)(lVar6 + lVar7);
                    lVar7 = lVar7 + 0x1c;
                    uVar2 = uVar2 + 1;
                    *(undefined4 *)(puVar1 + 3) = uStack000000000000003c;
                    puVar1[2] = CONCAT44(uStack0000000000000038,uStack0000000000000034);
                    puVar1[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
                    *puVar1 = in_stack_00000020._4_8_;
                    lVar5 = *(long *)(lVar4 + 0x18);
                    if (lVar5 == 0) goto LAB_06046000;
                  }
                  if (*(int *)(*(long *)PTR_DAT_07a21f98 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                  }
                  uVar8 = FUN_0607d6f8(lVar6,0);
                  lVar6 = *(long *)(lVar4 + 0x18);
                  *(undefined4 *)(lVar4 + 0x28) = uVar8;
                  if (lVar6 != 0) {
                    uVar2 = 0;
                    goto LAB_06045f8c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_06046000;
  while( true ) {
    lVar7 = *(long *)(param_4 + 0x1b0);
    uVar8 = *(undefined4 *)(lVar6 + uVar2 * 4 + 0x20);
    FUN_060f7948(&stack0x00000020 + 4,lVar5,uVar8,0);
    if (lVar7 == 0) break;
    FUN_060f7988(lVar7,uVar8);
    lVar6 = *(long *)(lVar4 + 0x18);
    uVar2 = uVar2 + 1;
    if (lVar6 == 0) break;
LAB_06045f8c:
    if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar2) {
      return;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_06046020;
    if ((*(long *)(param_4 + 0x1a8) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_4 + 0x1a8) + 0x10), lVar5 == 0)) break;
  }
LAB_06046000:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


