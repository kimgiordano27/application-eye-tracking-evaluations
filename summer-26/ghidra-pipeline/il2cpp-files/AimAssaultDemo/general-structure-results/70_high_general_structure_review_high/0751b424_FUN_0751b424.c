/*
FUNCTION_NAME: FUN_0751b424
ENTRY_POINT: 0751b424
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0751b424(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x25;
  uint *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x23;
  thunk_FUN_037aeb94();
  lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
  FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d8c5f0);
  lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
  FUN_074afe28(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = *unaff_x20;
    thunk_FUN_037aeb94();
    *(undefined8 *)(lVar4 + 0x10) =
         *(undefined8 *)OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo;
    thunk_FUN_037aeb94();
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + 0x10);
      lVar8 = *unaff_x27;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar4;
          thunk_FUN_037aeb94(plVar5,lVar4);
        }
        else {
          FUN_049ceef4(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(unaff_x22 + 0x28) = lVar3;
        thunk_FUN_037aeb94((long *)(unaff_x22 + 0x28),lVar3);
        *unaff_x21 = *unaff_x21 + 1;
        lVar3 = *unaff_x19;
        if (lVar3 != 0) {
          uVar1 = *unaff_x26;
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *unaff_x26 = uVar1 + 1;
            *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            thunk_FUN_037aeb94();
          }
          else {
            FUN_049ceef4();
          }
          lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
          FUN_074afe30(lVar3,0);
          puVar2 = OVR_OpenVR_IVRApplications__GetApplicationPropertyString_TypeInfo;
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x10) =
                 *(undefined8 *)OVR_OpenVR_IVRApplications__GetApplicationProcessId_TypeInfo;
            thunk_FUN_037aeb94();
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x20));
            *(undefined4 *)(lVar3 + 0x18) = 1;
            lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
            FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d86c50);
            if (lVar4 != 0) {
              lVar8 = *unaff_x25;
              uVar6 = *(undefined8 *)OVR_OpenVR_IVRApplications__GetApplicationPropertyBool_TypeInfo
              ;
              lVar7 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                  thunk_FUN_037aeb94();
                }
                else {
                  FUN_049ceef4(lVar4,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar3 + 0x30) = lVar4;
                thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0);
                lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                FUN_074afe28(lVar7,0);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x18) =
                       *(undefined8 *)OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo;
                  thunk_FUN_037aeb94();
                  *(undefined8 *)(lVar7 + 0x10) =
                       *(undefined8 *)OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo;
                  thunk_FUN_037aeb94();
                  if (lVar4 != 0) {
                    lVar8 = *(long *)(lVar4 + 0x10);
                    lVar9 = *unaff_x27;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar5 = lVar7;
                        thunk_FUN_037aeb94(plVar5,lVar7);
                      }
                      else {
                        FUN_049ceef4(lVar4,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar3 + 0x28) = lVar4;
                      thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                      *unaff_x21 = *unaff_x21 + 1;
                      lVar4 = *unaff_x19;
                      if (lVar4 != 0) {
                        uVar1 = *unaff_x26;
                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                          *unaff_x26 = uVar1 + 1;
                          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar5 = lVar3;
                          thunk_FUN_037aeb94(plVar5,lVar3);
                        }
                        else {
                          FUN_049ceef4();
                        }
                        lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
                        FUN_074afe30(lVar3,0);
                        puVar2 = PTR_DAT_07da3690;
                        if (lVar3 != 0) {
                          *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_07d983e0;
                          thunk_FUN_037aeb94();
                          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x20));
                          *(undefined4 *)(lVar3 + 0x18) = 1;
                          lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
                          FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d86c50);
                          if (lVar4 != 0) {
                            uVar6 = *(undefined8 *)puVar2;
                            lVar7 = *(long *)(lVar4 + 0x10);
                            lVar8 = *unaff_x25;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                thunk_FUN_037aeb94();
                              }
                              else {
                                FUN_049ceef4(lVar4,uVar6,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar3 + 0x30) = lVar4;
                              thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                              lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                              FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0);
                              lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                              FUN_074afe28(lVar7,0);
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)PTR_DAT_07da3698;
                                thunk_FUN_037aeb94();
                                *(undefined8 *)(lVar7 + 0x10) =
                                     *(undefined8 *)
                                      OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo;
                                thunk_FUN_037aeb94();
                                if (lVar4 != 0) {
                                  lVar8 = *(long *)(lVar4 + 0x10);
                                  lVar9 = *unaff_x27;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar5 = lVar7;
                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                    }
                                    else {
                                      FUN_049ceef4(lVar4,lVar7,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar3 + 0x28) = lVar4;
                                    thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                    *unaff_x21 = *unaff_x21 + 1;
                                    lVar4 = *unaff_x19;
                                    if (lVar4 != 0) {
                                      uVar1 = *unaff_x26;
                                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                        *unaff_x26 = uVar1 + 1;
                                        plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar5 = lVar3;
                                        thunk_FUN_037aeb94(plVar5,lVar3);
                                      }
                                      else {
                                        FUN_049ceef4();
                                      }
                                      lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
                                      FUN_074afe30(lVar3,0);
                                      puVar2 = 
                                      OVR_OpenVR_IVRApplications__GetDefaultApplicationForMimeType_TypeInfo
                                      ;
                                      if (lVar3 != 0) {
                                        *(undefined8 *)(lVar3 + 0x10) =
                                             *(undefined8 *)PTR_DAT_07da3720;
                                        thunk_FUN_037aeb94();
                                        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                        thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x20));
                                        *(undefined4 *)(lVar3 + 0x18) = 0;
                                        lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
                                        FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d86c50);
                                        if (lVar4 != 0) {
                                          lVar8 = *unaff_x25;
                                          uVar6 = *(undefined8 *)PTR_DAT_07da3658;
                                          lVar7 = *(long *)(lVar4 + 0x10);
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(lVar4 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar6;
                                              thunk_FUN_037aeb94();
                                            }
                                            else {
                                              FUN_049ceef4(lVar4,uVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar3 + 0x30) = lVar4;
                                            thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                                            lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                        PTR_DAT_07d8c608);
                                            FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0);
                                            lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                        PTR_DAT_07d8c5b0);
                                            FUN_074afe28(lVar7,0);
                                            if (lVar7 != 0) {
                                              *(undefined8 *)(lVar7 + 0x18) =
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000363_BurstDirectCall_TypeInfo
                                              ;
                                              thunk_FUN_037aeb94();
                                              *(undefined8 *)(lVar7 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                              ;
                                              thunk_FUN_037aeb94();
                                              if (lVar4 != 0) {
                                                lVar8 = *(long *)(lVar4 + 0x10);
                                                lVar9 = *unaff_x27;
                                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar5 = lVar7;
                                                    thunk_FUN_037aeb94(plVar5,lVar7);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar4,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_037aeb94(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar3,0);
                                                    puVar2 = 
                                                  Cinemachine_CinemachineImpulseManager_ImpulseEvent_TypeInfo
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2d48;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar3 + 0x18) = 0;
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d86c48);
                                                    FUN_049ce6c0(lVar4,*(undefined8 *)
                                                                        PTR_DAT_07d86c50);
                                                    if (lVar4 != 0) {
                                                      lVar8 = *unaff_x25;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          UnityEngine_Camera_CameraCallback_TypeInfo
                                                    ;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_037aeb94(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar3,0);
                                                    puVar2 = PTR_DAT_07da36a8;
                                                    if (lVar3 != 0) {
                                                      *(undefined8 *)(lVar3 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da3608;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar3 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar3 + 0x20));
                                                      *(undefined4 *)(lVar3 + 0x18) = 2;
                                                      lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar4,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar4 != 0) {
                                                        lVar8 = *unaff_x25;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da3620;
                                                        lVar7 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar7 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da3610;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_037aeb94(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar3,0);
                                                    puVar2 = PTR_DAT_07da35c8;
                                                    if (lVar3 != 0) {
                                                      *(undefined8 *)(lVar3 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da3710;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar3 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar3 + 0x20));
                                                      *(undefined4 *)(lVar3 + 0x18) = 0;
                                                      lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar4,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar4 != 0) {
                                                        lVar8 = *unaff_x25;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da36b8;
                                                        lVar7 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar7 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35e8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_037aeb94(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar3,0);
                                                    puVar2 = 
                                                  DIVR_Gameplay_CarTraffic_SpawnedCar_TypeInfo;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2cf8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar3 + 0x18) = 0;
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d86c48);
                                                    FUN_049ce6c0(lVar4,*(undefined8 *)
                                                                        PTR_DAT_07d86c50);
                                                    if (lVar4 != 0) {
                                                      lVar8 = *unaff_x25;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_Events_PersistentCallGroup_TypeInfo;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_CameraCaptureBridge_CameraEntry_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_037aeb94(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar3,0);
                                                    puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2cf0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar3 + 0x18) = 2;
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d86c48);
                                                    FUN_049ce6c0(lVar4,*(undefined8 *)
                                                                        PTR_DAT_07d86c50);
                                                    if (lVar4 != 0) {
                                                      lVar8 = *unaff_x25;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  System_Security_Permissions_PermissionState_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035D_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_037aeb94(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar3,0);
                                                    puVar2 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d86c48);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d86c50
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_037aeb94(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar3,0);
                                                    puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035D_BurstDirectCall_TypeInfo
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2ce8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar3 + 0x18) = 0;
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d86c48);
                                                    FUN_049ce6c0(lVar4,*(undefined8 *)
                                                                        PTR_DAT_07d86c50);
                                                    if (lVar4 != 0) {
                                                      lVar8 = *unaff_x25;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Pico_Platform_Models_PermissionResult_TypeInfo;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_037aeb94(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar3,0);
                                                    puVar2 = PTR_DAT_07d8c668;
                                                    if (lVar3 != 0) {
                                                      *(undefined8 *)(lVar3 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07d8c630;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar3 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar3 + 0x20));
                                                      *(undefined4 *)(lVar3 + 0x18) = 3;
                                                      lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar4,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar4 != 0) {
                                                        lVar8 = *unaff_x25;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07d8c698;
                                                        lVar7 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar7 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07d8c6a0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_037aeb94(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar3,0);
                                                    puVar2 = PTR_DAT_07da3598;
                                                    if (lVar3 != 0) {
                                                      *(undefined8 *)(lVar3 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da35b0;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar3 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar3 + 0x20));
                                                      *(undefined4 *)(lVar3 + 0x18) = 3;
                                                      lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar4,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar4 != 0) {
                                                        lVar8 = *unaff_x25;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da3640;
                                                        lVar7 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar7 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35f0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_037aeb94(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar3,0);
                                                    puVar2 = PTR_DAT_07da3630;
                                                    if (lVar3 != 0) {
                                                      *(undefined8 *)(lVar3 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da36f8;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar3 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar3 + 0x20));
                                                      *(undefined4 *)(lVar3 + 0x18) = 4;
                                                      lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar4,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar4 != 0) {
                                                        lVar8 = *unaff_x25;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da36c8;
                                                        lVar7 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar7 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35c0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_037aeb94(plVar5,lVar3);
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


