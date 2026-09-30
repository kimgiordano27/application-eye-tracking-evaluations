/*
FUNCTION_NAME: FUN_033f8ebc
ENTRY_POINT: 033f8ebc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_033f8ebc(undefined8 param_1,long param_2,int param_3,int param_4,long param_5,
                 undefined4 param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 local_a0 [4];
  byte *local_90;
  byte *local_88;
  undefined1 *local_80;
  int local_74;
  long local_70;
  long local_68;
  
  if ((DAT_04832644 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      );
    DAT_04832644 = 1;
  }
  lVar10 = 0;
  local_a0[0] = 0;
  do {
    *(undefined1 *)((long)local_a0 + lVar10) = 0;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  if (param_3 < param_4) {
    if (param_2 == 0) {
LAB_033f922c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    local_80 = (undefined1 *)((ulong)local_a0 | 1);
    local_88 = (byte *)((ulong)local_a0 | 2);
    local_90 = (byte *)((ulong)local_a0 | 3);
    uVar12 = 0xffffffff;
    local_74 = param_4;
    local_70 = param_2;
    local_68 = param_5;
    do {
      uVar3 = FUN_03409f80(param_2,param_3,0);
      iVar4 = FUN_033f87b0(param_1,uVar3);
      if (iVar4 == 0) {
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_033f8ae0(uVar3,param_6);
        if ((uVar7 & 1) == 0) {
          uVar6 = FUN_033f86cc(param_1,uVar3,param_6);
          lVar10 = FUN_033f823c(param_1,param_2,param_3,param_4);
          if (lVar10 == 0) {
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar7 = FUN_033f6274(uVar6);
            if ((uVar7 & 1) == 0) {
              uVar12 = uVar6;
            }
            FUN_033f92d4(param_1,uVar6,0,param_5,param_6);
            param_2 = local_70;
            param_4 = local_74;
          }
          else {
            lVar8 = *(long *)(lVar10 + 0x20);
            if (lVar8 == 0) {
              lVar8 = *(long *)(lVar10 + 0x28);
              if (lVar8 == 0) goto LAB_033f922c;
              uVar7 = 0;
              while ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x18)) {
                if (*(uint *)(lVar8 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined1 *)((long)local_a0 + uVar7) = *(undefined1 *)(lVar8 + uVar7 + 0x20);
                lVar8 = *(long *)(lVar10 + 0x28);
                uVar7 = uVar7 + 1;
                if (lVar8 == 0) goto LAB_033f922c;
              }
              uVar2 = (undefined1)local_a0[0];
              uVar11 = (uint)*local_88;
              uVar1 = *local_80;
              if (*local_88 == 1) {
                uVar11 = FUN_033f8094(param_1,uVar6,0);
              }
              uVar9 = (uint)*local_90;
              if (*local_90 == 1) {
                if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar9 = FUN_033f60b8(uVar6);
              }
              param_5 = local_68;
              if (local_68 == 0) goto LAB_033f922c;
              FUN_033f966c(local_68,uVar2,uVar1,uVar11,uVar9);
              uVar12 = 0xffffffff;
            }
            else {
              FUN_033f8ebc(param_1,lVar8,0,*(undefined4 *)(lVar8 + 0x10),param_5,param_6);
            }
            if (*(long *)(lVar10 + 0x18) == 0) goto LAB_033f922c;
            param_3 = param_3 + *(int *)(*(long *)(lVar10 + 0x18) + 0x18) + -1;
            param_2 = local_70;
            param_4 = local_74;
          }
        }
      }
      else {
        iVar5 = FUN_033f88d0(param_1,uVar12,iVar4,param_6);
        param_5 = local_68;
        if (iVar5 < 0) {
          uVar2 = (undefined1)local_a0[0];
          uVar11 = (uint)*local_88;
          uVar1 = *local_80;
          if (*local_88 == 1) {
            uVar11 = FUN_033f8094(param_1,iVar5,iVar4);
          }
          uVar9 = (uint)*local_90;
          if (*local_90 == 1) {
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_033f60b8(iVar5);
          }
          param_5 = local_68;
          if (local_68 == 0) goto LAB_033f922c;
          FUN_033f966c(local_68,uVar2,uVar1,uVar11,uVar9);
          param_2 = local_70;
          param_4 = local_74;
        }
        else {
          FUN_033f92d4(param_1,iVar5,iVar4,local_68,param_6);
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return;
}


