/*
FUNCTION_NAME: FUN_058a43e4
ENTRY_POINT: 058a43e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_058a43e4(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  char cVar15;
  byte bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char cVar19;
  undefined4 *puVar20;
  ulong unaff_x22;
  int iVar21;
  long *plVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  ulong local_198;
  ulong local_188;
  ulong local_178;
  undefined1 auStack_154 [192];
  int local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_64 [4];
  
  puVar7 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Create__;
  if ((DAT_066d31ab & 1) == 0) {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Create__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
                );
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d31ab = 1;
  }
  local_64[0] = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  memset(auStack_154,0,0xc4);
  uVar10 = FUN_032b1148(0,*(undefined8 *)puVar7);
  FUN_05814cc8(local_64,uVar10,0);
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_03ab2128(*(long *)(param_1 + 0x30) + 0x18,*(undefined4 *)(param_2 + 0x298),
               *(undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_03ab2128(*(long *)(param_1 + 0x30) + 0x18,*(undefined4 *)(param_2 + 0x29c),
               *(undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
  plVar22 = (long *)
            Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  if (*(int *)(*(long *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (0 < *(int *)(param_2 + 400)) {
    iVar21 = 0;
    while( true ) {
      memcpy(auStack_154,(void *)(param_2 + 0xd0),0xc4);
      if (*(int *)(*plVar22 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (local_94 <= iVar21) break;
      memcpy(auStack_154,(void *)(param_2 + 0xd0),0xc4);
      if (*(int *)(*plVar22 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar11 = (undefined8 *)
                FUN_0499dea4(auStack_154,iVar21,
                             *(undefined8 *)
                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                            );
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar2 = *(uint *)(puVar11 + 1);
      uVar4 = *(uint *)((long)puVar11 + 0xc);
      uVar3 = *(undefined4 *)(puVar11 + 2);
      uVar5 = *(undefined4 *)((long)puVar11 + 0x14);
      uVar10 = *puVar11;
      local_178 = local_178 & 0xffffffff00000000 | (ulong)uVar2;
      pcVar12 = (char *)FUN_058ab2a4(*(long *)(param_1 + 0x30),uVar10,local_178,0);
      cVar15 = *pcVar12;
      iVar6 = *(int *)(pcVar12 + 8);
      iVar1 = *(int *)(param_2 + 0x29c) + 1;
      if (((uVar4 & 6) == 2) || ((*(uint *)((long)puVar11 + 0xc) & 1) != 0)) {
        if (*(int *)(param_2 + 0x298) <= *(int *)(pcVar12 + 0x10)) {
          if (cVar15 == '\0') {
            cVar19 = '\x01';
          }
          else {
            cVar19 = pcVar12[0x2c];
          }
          goto LAB_058a4658;
        }
        cVar19 = '\0';
        uVar17 = 0;
        if (iVar6 < iVar1) {
          uVar17 = 3;
        }
      }
      else {
        cVar19 = '\x02';
LAB_058a4658:
        uVar17 = 3;
      }
      if ((*(uint *)((long)puVar11 + 0xc) >> 1 & 1) != 0) {
        if (*(int *)(param_2 + 0x2b8) < 2) {
          uVar17 = 0;
          if (iVar6 < iVar1) {
            uVar17 = 3;
          }
          if ((cVar15 != '\0') && (iVar6 < iVar1)) {
            cVar15 = pcVar12[0x2d];
LAB_058a4704:
            uVar17 = 0;
            if (cVar15 != '\0') {
              uVar17 = 3;
            }
          }
        }
        else {
          iVar1 = *(int *)(pcVar12 + 0x28);
          if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          bVar8 = iVar1 == *(int *)((long)puVar11 + 4);
          if (iVar6 < *(int *)(param_2 + 0x2a0) + *(int *)(param_2 + 0x298)) {
            if (cVar15 != '\0' && bVar8) {
              cVar15 = pcVar12[0x2d];
              if (pcVar12[0x2e] != '\0') goto LAB_058a4704;
              if (cVar15 == '\0') {
                uVar17 = 2;
              }
              else {
                if (*(char *)(param_2 + 0x2c0) != '\0') {
                  if (*(int *)(*(long *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                              + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (*(int *)(param_2 + 0x294) == 0) goto LAB_058a46bc;
                }
                uVar17 = 1;
              }
            }
            else {
LAB_058a46bc:
              uVar17 = 3;
            }
          }
          else {
            if (cVar15 != '\0' && bVar8) {
              bVar8 = pcVar12[0x2d] == '\0';
              bVar16 = pcVar12[0x2e] ^ 1;
            }
            else {
              bVar8 = false;
              bVar16 = 0;
            }
            bVar9 = bVar16 != 0;
            if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            local_198 = local_198 & 0xffffffff00000000 | (ulong)*(uint *)(puVar11 + 1);
            auVar24 = FUN_058abf08(*(long *)(param_1 + 0x30),*puVar11,local_198,0);
            puVar20 = auVar24._0_8_;
            if (0 < auVar24._8_4_) {
              uVar23 = auVar24._8_8_ & 0xffffffff;
              do {
                if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                lVar13 = FUN_03ab2128(*(long *)(param_1 + 0x30) + 0x18,*puVar20,
                                      *(undefined8 *)
                                       Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__
                                     );
                unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)*(uint *)(puVar11 + 1);
                uVar14 = FUN_058abd20(lVar13,*puVar11,unaff_x22,*(undefined8 *)(param_1 + 0x30),0);
                if (*(int *)(lVar13 + 4) == 1) {
                  uVar18 = 0;
                  bVar9 = pcVar12[0x2e] == '\0';
                  uVar17 = 1;
                  if (bVar9) {
                    uVar17 = 2;
                  }
                  goto LAB_058a4824;
                }
                if ((uVar14 & 1) == 0) {
                  bVar9 = (bool)(pcVar12[0x2e] == '\0' | bVar9);
                  bVar8 = (bool)(pcVar12[0x2e] != '\0' | bVar8);
                }
                else {
                  bVar8 = true;
                }
                uVar23 = uVar23 - 1;
                puVar20 = puVar20 + 2;
              } while (uVar23 != 0);
            }
            uVar18 = 0;
            if (!bVar8) {
              uVar18 = 3;
            }
            uVar17 = 1;
            if ((bool)(bVar8 & bVar9)) {
              uVar17 = 2;
            }
LAB_058a4824:
            plVar22 = (long *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
            ;
            if (!bVar9) {
              uVar17 = uVar18;
            }
          }
        }
      }
      local_188 = local_188 & 0xffffffff00000000 | (ulong)uVar2;
      FUN_058ac08c(&local_90,uVar10,local_188,cVar19,uVar17,pcVar12[0x14],uVar3,uVar5,0);
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_0499dac0(param_2 + 0x194,&local_90,
                   *(undefined8 *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                  );
      iVar21 = iVar21 + 1;
    }
  }
  FUN_05814cd4(local_64,0);
  return;
}


