/*
FUNCTION_NAME: FUN_05d52938
ENTRY_POINT: 05d52938
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_4
*/


int FUN_05d52938(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_06bc38f9 & 1) == 0) {
    FUN_02f08768(Method_OVRExtensions_ToNonAlloc<Guid>__);
    FUN_02f08768(Method_OVRExtensions_ToNonAlloc<OVRAnchor>__);
    FUN_02f08768(Method_OVRExtensions_ToNonAlloc<OVRSpaceUser>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    FUN_02f08768(Method_OVRExtensions_ToNonAlloc<OVRSpatialAnchor>__);
    FUN_02f08768(Method_OVRExtensions_ToNonAlloc<Type>__);
    FUN_02f08768(Method_OVRExtensions_ToNonAlloc<OVRAnchor_TrackableType>__);
    FUN_02f08768(PTR_DAT_067cc9f8);
    FUN_02f08768(Method_OVRExtensions_ToSpaceStorageLocation__);
    FUN_02f08768(Method_OVRExternalComposition_DisplayRefreshRateChanged__);
    FUN_02f08768(Method_OVREyeGaze_OnPermissionGranted__);
    FUN_02f08768(Method_OVRFaceExpressions_CheckValidity__);
    FUN_02f08768(Method_OVRFaceExpressions_CheckVisemesValidity__);
    FUN_02f08768(UnityEngine_Events_UnityAction<MRUKRoom>_TypeInfo);
    FUN_02f08768(PTR_DAT_067cf740);
    FUN_02f08768(PTR_DAT_067cc4f8);
    FUN_02f08768(PTR_DAT_067cc450);
    FUN_02f08768(Method_Oculus_Interaction_Input_Visuals_OVRControllerVisual_HandleUpdated__);
    FUN_02f08768(Method_OVRCustomFaceExtensions_AutoMapBlendshapes__);
    DAT_06bc38f9 = 1;
  }
  local_64 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar4 = FUN_0491e214(*(long *)(param_1 + 0x58),param_2,&local_64,
                         *(undefined8 *)Method_OVRExtensions_ToNonAlloc<OVRAnchor_TrackableType>__);
    if ((uVar4 & 1) != 0) {
      return local_64;
    }
    lVar5 = thunk_FUN_02f45270(*(undefined8 *)UnityEngine_Events_UnityAction<MRUKRoom>_TypeInfo);
    FUN_060ba0e0(lVar5,0);
    puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    lVar6 = *(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar3;
    }
    uVar7 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cf740,**(undefined4 **)(lVar6 + 0xb8));
    if (lVar5 != 0) {
      FUN_060ba678(lVar5,*(undefined8 *)Method_OVRCustomFaceExtensions_AutoMapBlendshapes__,uVar7,0)
      ;
      uVar7 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cc450,**(undefined4 **)(*(long *)puVar3 + 0xb8)
                          );
      FUN_060ba5d8(lVar5,*(undefined8 *)
                          Method_Oculus_Interaction_Input_Visuals_OVRControllerVisual_HandleUpdated__
                   ,uVar7,0);
      lVar10 = *(long *)(param_1 + 0x10);
      lVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRExtensions_ToNonAlloc<OVRSpatialAnchor>__)
      ;
      FUN_05116b38(lVar6,0);
      if ((lVar6 != 0) && (*(undefined8 *)(lVar6 + 0x28) = param_2, lVar10 != 0)) {
        lVar8 = *(long *)(lVar10 + 0x10);
        lVar9 = *(long *)Method_OVRFaceExpressions_CheckVisemesValidity__;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
          }
          else {
            FUN_03abf904(lVar10,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = *(long *)(param_1 + 0x18);
          lVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRExtensions_ToNonAlloc<Guid>__);
          FUN_05116b38(lVar6,0);
          if ((lVar6 != 0) && (*(long *)(lVar6 + 0x28) = lVar5, lVar10 != 0)) {
            lVar5 = *(long *)(lVar10 + 0x10);
            lVar8 = *(long *)Method_OVREyeGaze_OnPermissionGranted__;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
              }
              else {
                FUN_03abf904(lVar10,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              lVar5 = *(long *)(param_1 + 0x20);
              uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRExtensions_ToNonAlloc<OVRAnchor>__
                                        );
              FUN_05116b38(uVar7,0);
              if (lVar5 != 0) {
                lVar6 = *(long *)(lVar5 + 0x10);
                lVar10 = *(long *)Method_OVRExternalComposition_DisplayRefreshRateChanged__;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar6 != 0) {
                  uVar2 = *(uint *)(lVar5 + 0x18);
                  if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
                  }
                  else {
                    FUN_03abf904(lVar5,uVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar6 = *(long *)(param_1 + 0x28);
                  lVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                              Method_OVRExtensions_ToNonAlloc<OVRSpaceUser>__);
                  FUN_05116b38(lVar5,0);
                  local_78 = 0;
                  uStack_70 = 0;
                  FUN_03d1851c(&local_78,1,4,1,*(undefined8 *)PTR_DAT_067cc4f8);
                  if (lVar5 != 0) {
                    *(undefined8 *)(lVar5 + 0x70) = uStack_70;
                    *(undefined8 *)(lVar5 + 0x68) = local_78;
                    if (lVar6 != 0) {
                      lVar10 = *(long *)(lVar6 + 0x10);
                      lVar8 = *(long *)Method_OVRFaceExpressions_CheckValidity__;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                      if (lVar10 != 0) {
                        uVar2 = *(uint *)(lVar6 + 0x18);
                        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                          *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                        }
                        else {
                          FUN_03abf904(lVar6,lVar5,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar5 = *(long *)(param_1 + 0x60);
                        if (lVar5 != 0) {
                          lVar6 = *(long *)(lVar5 + 0x10);
                          lVar10 = *(long *)Method_OVRExtensions_ToSpaceStorageLocation__;
                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                          if (lVar6 != 0) {
                            uVar2 = *(uint *)(lVar5 + 0x18);
                            if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                              lVar6 = lVar6 + (long)(int)uVar2 * 0x28;
                              *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                              *(undefined8 *)(lVar6 + 0x40) = 0;
                              *(undefined8 *)(lVar6 + 0x28) = 0;
                              *(undefined8 *)(lVar6 + 0x20) = 0;
                              *(undefined8 *)(lVar6 + 0x38) = 0;
                              *(undefined8 *)(lVar6 + 0x30) = 0;
                            }
                            else {
                              local_40 = 0;
                              uStack_58 = 0;
                              local_60 = 0;
                              uStack_48 = 0;
                              uStack_50 = 0;
                              FUN_03baee88(lVar5,&local_60,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar5 = *(long *)(param_1 + 0x68);
                            if (lVar5 != 0) {
                              lVar6 = *(long *)(lVar5 + 0x10);
                              lVar10 = *(long *)PTR_DAT_067cc9f8;
                              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                              if (lVar6 != 0) {
                                uVar2 = *(uint *)(lVar5 + 0x18);
                                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                  *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                  *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_03a6c18c(lVar5,0,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                        + 0x70));
                                }
                                if (*(long *)(param_1 + 0x58) != 0) {
                                  FUN_0491c778(*(long *)(param_1 + 0x58),param_2,
                                               *(undefined4 *)(param_1 + 0x30),
                                               *(undefined8 *)
                                                Method_OVRExtensions_ToNonAlloc<Type>__);
                                  iVar1 = *(int *)(param_1 + 0x30);
                                  *(int *)(param_1 + 0x30) = iVar1 + 1;
                                  return iVar1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


