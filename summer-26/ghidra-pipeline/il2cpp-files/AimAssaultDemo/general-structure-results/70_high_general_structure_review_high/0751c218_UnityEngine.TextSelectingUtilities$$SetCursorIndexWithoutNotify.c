/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$SetCursorIndexWithoutNotify
ENTRY_POINT: 0751c218
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_TextSelectingUtilities__SetCursorIndexWithoutNotify
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  int *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x25;
  uint *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  FUN_049ceef4(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x23;
  thunk_FUN_037aeb94();
  *unaff_x21 = *unaff_x21 + 1;
  lVar7 = *unaff_x19;
  if (lVar7 != 0) {
    uVar1 = *unaff_x26;
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *unaff_x26 = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4();
    }
    lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
    FUN_074afe30(lVar7,0);
    puVar2 = DIVR_Gameplay_CarTraffic_SpawnedCar_TypeInfo;
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)PTR_DAT_07de2cf8;
      thunk_FUN_037aeb94();
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
      thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x20));
      *(undefined4 *)(lVar7 + 0x18) = 0;
      lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
      FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d86c50);
      if (lVar3 != 0) {
        lVar8 = *unaff_x25;
        uVar5 = *(undefined8 *)UnityEngine_Events_PersistentCallGroup_TypeInfo;
        lVar6 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
            thunk_FUN_037aeb94();
          }
          else {
            FUN_049ceef4(lVar3,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar7 + 0x30) = lVar3;
          thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar3);
          lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
          FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d8c5f0);
          lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
          FUN_074afe28(lVar6,0);
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x18) =
                 *(undefined8 *)UnityEngine_Rendering_CameraCaptureBridge_CameraEntry_TypeInfo;
            thunk_FUN_037aeb94();
            *(undefined8 *)(lVar6 + 0x10) =
                 *(undefined8 *)OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo;
            thunk_FUN_037aeb94();
            if (lVar3 != 0) {
              lVar8 = *(long *)(lVar3 + 0x10);
              lVar9 = *unaff_x27;
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar3 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                  plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar4 = lVar6;
                  thunk_FUN_037aeb94(plVar4,lVar6);
                }
                else {
                  FUN_049ceef4(lVar3,lVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar7 + 0x28) = lVar3;
                thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar3);
                *unaff_x21 = *unaff_x21 + 1;
                lVar3 = *unaff_x19;
                if (lVar3 != 0) {
                  uVar1 = *unaff_x26;
                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    *unaff_x26 = uVar1 + 1;
                    plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar4 = lVar7;
                    thunk_FUN_037aeb94(plVar4,lVar7);
                  }
                  else {
                    FUN_049ceef4();
                  }
                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
                  FUN_074afe30(lVar7,0);
                  puVar2 = 
                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
                  ;
                  if (lVar7 != 0) {
                    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)PTR_DAT_07de2cf0;
                    thunk_FUN_037aeb94();
                    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
                    thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x20));
                    *(undefined4 *)(lVar7 + 0x18) = 2;
                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
                    FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d86c50);
                    if (lVar3 != 0) {
                      lVar8 = *unaff_x25;
                      uVar5 = *(undefined8 *)System_Security_Permissions_PermissionState_TypeInfo;
                      lVar6 = *(long *)(lVar3 + 0x10);
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar6 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                          thunk_FUN_037aeb94();
                        }
                        else {
                          FUN_049ceef4(lVar3,uVar5,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar7 + 0x30) = lVar3;
                        thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar3);
                        lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                        FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d8c5f0);
                        lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                        FUN_074afe28(lVar6,0);
                        if (lVar6 != 0) {
                          *(undefined8 *)(lVar6 + 0x18) =
                               *(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035D_PostfixBurstDelegate_TypeInfo
                          ;
                          thunk_FUN_037aeb94();
                          *(undefined8 *)(lVar6 + 0x10) =
                               *(undefined8 *)
                                OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo;
                          thunk_FUN_037aeb94();
                          if (lVar3 != 0) {
                            lVar8 = *(long *)(lVar3 + 0x10);
                            lVar9 = *unaff_x27;
                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar3 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar4 = lVar6;
                                thunk_FUN_037aeb94(plVar4,lVar6);
                              }
                              else {
                                FUN_049ceef4(lVar3,lVar6,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar7 + 0x28) = lVar3;
                              thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar3);
                              *unaff_x21 = *unaff_x21 + 1;
                              lVar3 = *unaff_x19;
                              if (lVar3 != 0) {
                                uVar1 = *unaff_x26;
                                if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                  *unaff_x26 = uVar1 + 1;
                                  plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar4 = lVar7;
                                  thunk_FUN_037aeb94(plVar4,lVar7);
                                }
                                else {
                                  FUN_049ceef4();
                                }
                                lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
                                FUN_074afe30(lVar7,0);
                                puVar2 = 
                                OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo
                                ;
                                if (lVar7 != 0) {
                                  *(undefined8 *)(lVar7 + 0x10) =
                                       *(undefined8 *)
                                        OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo
                                  ;
                                  thunk_FUN_037aeb94();
                                  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
                                  thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x20));
                                  *(undefined4 *)(lVar7 + 0x18) = 1;
                                  lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
                                  FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d86c50);
                                  if (lVar3 != 0) {
                                    lVar8 = *unaff_x25;
                                    uVar5 = *(undefined8 *)
                                             OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo
                                    ;
                                    lVar6 = *(long *)(lVar3 + 0x10);
                                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                    if (lVar6 != 0) {
                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                        ;
                                        thunk_FUN_037aeb94();
                                      }
                                      else {
                                        FUN_049ceef4(lVar3,uVar5,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar7 + 0x30) = lVar3;
                                      thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar3);
                                      lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                                      FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d8c5f0);
                                      lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                                      FUN_074afe28(lVar6,0);
                                      if (lVar6 != 0) {
                                        *(undefined8 *)(lVar6 + 0x18) =
                                             *(undefined8 *)
                                              OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo
                                        ;
                                        thunk_FUN_037aeb94();
                                        *(undefined8 *)(lVar6 + 0x10) =
                                             *(undefined8 *)
                                              OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                        ;
                                        thunk_FUN_037aeb94();
                                        if (lVar3 != 0) {
                                          lVar8 = *(long *)(lVar3 + 0x10);
                                          lVar9 = *unaff_x27;
                                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar3 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                              plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar4 = lVar6;
                                              thunk_FUN_037aeb94(plVar4,lVar6);
                                            }
                                            else {
                                              FUN_049ceef4(lVar3,lVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar7 + 0x28) = lVar3;
                                            thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar3);
                                            *unaff_x21 = *unaff_x21 + 1;
                                            lVar3 = *unaff_x19;
                                            if (lVar3 != 0) {
                                              uVar1 = *unaff_x26;
                                              if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                *unaff_x26 = uVar1 + 1;
                                                plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar4 = lVar7;
                                                thunk_FUN_037aeb94(plVar4,lVar7);
                                              }
                                              else {
                                                FUN_049ceef4();
                                              }
                                              lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                          PTR_DAT_07d8c5b8);
                                              FUN_074afe30(lVar7,0);
                                              puVar2 = 
                                              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035D_BurstDirectCall_TypeInfo
                                              ;
                                              if (lVar7 != 0) {
                                                *(undefined8 *)(lVar7 + 0x10) =
                                                     *(undefined8 *)PTR_DAT_07de2ce8;
                                                thunk_FUN_037aeb94();
                                                *(undefined8 *)(lVar7 + 0x20) =
                                                     *(undefined8 *)puVar2;
                                                thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x20));
                                                *(undefined4 *)(lVar7 + 0x18) = 0;
                                                lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                            PTR_DAT_07d86c48);
                                                FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d86c50);
                                                if (lVar3 != 0) {
                                                  lVar8 = *unaff_x25;
                                                  uVar5 = *(undefined8 *)
                                                                                                                      
                                                  Pico_Platform_Models_PermissionResult_TypeInfo;
                                                  lVar6 = *(long *)(lVar3 + 0x10);
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar3;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar4 = lVar6;
                                                        thunk_FUN_037aeb94(plVar4,lVar6);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar3,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar3;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar3);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar3 = *unaff_x19;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_037aeb94(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar7,0);
                                                    puVar2 = PTR_DAT_07d8c668;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07d8c630;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 3;
                                                      lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar3,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar3 != 0) {
                                                        lVar8 = *unaff_x25;
                                                        uVar5 = *(undefined8 *)PTR_DAT_07d8c698;
                                                        lVar6 = *(long *)(lVar3 + 0x10);
                                                        *(int *)(lVar3 + 0x1c) =
                                                             *(int *)(lVar3 + 0x1c) + 1;
                                                        if (lVar6 != 0) {
                                                          uVar1 = *(uint *)(lVar3 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar5;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar3,uVar5,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar3;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07d8c6a0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar4 = lVar6;
                                                        thunk_FUN_037aeb94(plVar4,lVar6);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar3,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar3;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar3);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar3 = *unaff_x19;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_037aeb94(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar7,0);
                                                    puVar2 = PTR_DAT_07da3598;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da35b0;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 3;
                                                      lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar3,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar3 != 0) {
                                                        lVar8 = *unaff_x25;
                                                        uVar5 = *(undefined8 *)PTR_DAT_07da3640;
                                                        lVar6 = *(long *)(lVar3 + 0x10);
                                                        *(int *)(lVar3 + 0x1c) =
                                                             *(int *)(lVar3 + 0x1c) + 1;
                                                        if (lVar6 != 0) {
                                                          uVar1 = *(uint *)(lVar3 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar5;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar3,uVar5,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar3;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35f0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar4 = lVar6;
                                                        thunk_FUN_037aeb94(plVar4,lVar6);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar3,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar3;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar3);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar3 = *unaff_x19;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_037aeb94(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar7,0);
                                                    puVar2 = PTR_DAT_07da3630;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da36f8;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 4;
                                                      lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar3,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar3 != 0) {
                                                        lVar8 = *unaff_x25;
                                                        uVar5 = *(undefined8 *)PTR_DAT_07da36c8;
                                                        lVar6 = *(long *)(lVar3 + 0x10);
                                                        *(int *)(lVar3 + 0x1c) =
                                                             *(int *)(lVar3 + 0x1c) + 1;
                                                        if (lVar6 != 0) {
                                                          uVar1 = *(uint *)(lVar3 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar5;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar3,uVar5,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar3;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35c0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar4 = lVar6;
                                                        thunk_FUN_037aeb94(plVar4,lVar6);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar3,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar3;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar3);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar3 = *unaff_x19;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_037aeb94(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    *(undefined8 *)(in_stack_00000000 + 0x28) =
                                                         unaff_x29;
                                                    thunk_FUN_037aeb94();
                                                    FUN_074afbf4(in_stack_00000008,in_stack_00000000
                                                                 ,0);
                                                    return;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


