/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$MoveCursorToPosition_Internal
ENTRY_POINT: 0751ad70
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_TextSelectingUtilities__MoveCursorToPosition_Internal
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 in_w9;
  long lVar9;
  long lVar10;
  long in_x10;
  long *unaff_x19;
  int *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  uint *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined4 *)(unaff_x23 + 0x18) = in_w9;
  *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
  thunk_FUN_037aeb94();
  *(long *)(unaff_x22 + 0x30) = unaff_x23;
  thunk_FUN_037aeb94();
  lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0);
  lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
  FUN_074afe28(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)PTR_DAT_07da3668;
    thunk_FUN_037aeb94();
    *(undefined8 *)(lVar5 + 0x10) =
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
          plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar5;
          thunk_FUN_037aeb94(plVar6,lVar5);
        }
        else {
          FUN_049ceef4(lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(unaff_x22 + 0x28) = lVar4;
        thunk_FUN_037aeb94((long *)(unaff_x22 + 0x28),lVar4);
        *unaff_x21 = *unaff_x21 + 1;
        lVar4 = *unaff_x19;
        if (lVar4 != 0) {
          uVar1 = *unaff_x26;
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *unaff_x26 = uVar1 + 1;
            *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            thunk_FUN_037aeb94();
          }
          else {
            FUN_049ceef4();
          }
          lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
          FUN_074afe30(lVar4,0);
          puVar2 = Cinemachine_CinemachineClearShot_Pair_TypeInfo;
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_07de2d50;
            thunk_FUN_037aeb94();
            *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20));
            *(undefined4 *)(lVar4 + 0x18) = 0;
            lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
            FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d86c50);
            if (lVar5 != 0) {
              lVar9 = *unaff_x25;
              uVar7 = *(undefined8 *)System_Security_PermissionSet_TypeInfo;
              lVar8 = *(long *)(lVar5 + 0x10);
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                  thunk_FUN_037aeb94();
                }
                else {
                  FUN_049ceef4(lVar5,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar4 + 0x30) = lVar5;
                thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0);
                lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                FUN_074afe28(lVar8,0);
                if (lVar8 != 0) {
                  *(undefined8 *)(lVar8 + 0x18) =
                       *(undefined8 *)Cinemachine_CinemachineClearShot_<>c_TypeInfo;
                  thunk_FUN_037aeb94();
                  *(undefined8 *)(lVar8 + 0x10) =
                       *(undefined8 *)OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo;
                  thunk_FUN_037aeb94();
                  if (lVar5 != 0) {
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar10 = *unaff_x27;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar6 = lVar8;
                        thunk_FUN_037aeb94(plVar6,lVar8);
                      }
                      else {
                        FUN_049ceef4(lVar5,lVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar4 + 0x28) = lVar5;
                      thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                      *unaff_x21 = *unaff_x21 + 1;
                      lVar5 = *unaff_x19;
                      if (lVar5 != 0) {
                        uVar1 = *unaff_x26;
                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                          *unaff_x26 = uVar1 + 1;
                          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar6 = lVar4;
                          thunk_FUN_037aeb94(plVar6,lVar4);
                        }
                        else {
                          FUN_049ceef4();
                        }
                        lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
                        FUN_074afe30(lVar4,0);
                        puVar2 = PTR_DAT_07da3680;
                        if (lVar4 != 0) {
                          *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_07da35d8;
                          thunk_FUN_037aeb94();
                          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20));
                          *(undefined4 *)(lVar4 + 0x18) = 1;
                          lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
                          FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d86c50);
                          if (lVar5 != 0) {
                            uVar7 = *(undefined8 *)puVar2;
                            lVar8 = *(long *)(lVar5 + 0x10);
                            lVar9 = *unaff_x25;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                thunk_FUN_037aeb94();
                              }
                              else {
                                FUN_049ceef4(lVar5,uVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar4 + 0x30) = lVar5;
                              thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                              lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                              FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0);
                              lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                              FUN_074afe28(lVar8,0);
                              puVar2 = PTR_DAT_07da35b8;
                              if (lVar8 != 0) {
                                *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)PTR_DAT_07da35b8;
                                thunk_FUN_037aeb94();
                                *(undefined8 *)(lVar8 + 0x10) =
                                     *(undefined8 *)
                                      OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo;
                                thunk_FUN_037aeb94();
                                if (lVar5 != 0) {
                                  lVar9 = *(long *)(lVar5 + 0x10);
                                  lVar10 = *unaff_x27;
                                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                  if (lVar9 != 0) {
                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                      plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar6 = lVar8;
                                      thunk_FUN_037aeb94(plVar6,lVar8);
                                    }
                                    else {
                                      FUN_049ceef4(lVar5,lVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar4 + 0x28) = lVar5;
                                    thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                    *unaff_x21 = *unaff_x21 + 1;
                                    lVar5 = *unaff_x19;
                                    if (lVar5 != 0) {
                                      uVar1 = *unaff_x26;
                                      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                        *unaff_x26 = uVar1 + 1;
                                        plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar6 = lVar4;
                                        thunk_FUN_037aeb94(plVar6,lVar4);
                                      }
                                      else {
                                        FUN_049ceef4();
                                      }
                                      lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
                                      FUN_074afe30(lVar4,0);
                                      puVar3 = PTR_DAT_07da3650;
                                      if (lVar4 != 0) {
                                        *(undefined8 *)(lVar4 + 0x10) =
                                             *(undefined8 *)PTR_DAT_07da3740;
                                        thunk_FUN_037aeb94();
                                        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
                                        thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20));
                                        *(undefined4 *)(lVar4 + 0x18) = 0;
                                        lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
                                        FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d86c50);
                                        if (lVar5 != 0) {
                                          lVar9 = *unaff_x25;
                                          uVar7 = *(undefined8 *)PTR_DAT_07da3678;
                                          lVar8 = *(long *)(lVar5 + 0x10);
                                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar7;
                                              thunk_FUN_037aeb94();
                                            }
                                            else {
                                              FUN_049ceef4(lVar5,uVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar4 + 0x30) = lVar5;
                                            thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                            lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                        PTR_DAT_07d8c608);
                                            FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0);
                                            lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                        PTR_DAT_07d8c5b0);
                                            FUN_074afe28(lVar8,0);
                                            if (lVar8 != 0) {
                                              *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar2;
                                              thunk_FUN_037aeb94();
                                              *(undefined8 *)(lVar8 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                              ;
                                              thunk_FUN_037aeb94();
                                              if (lVar5 != 0) {
                                                lVar9 = *(long *)(lVar5 + 0x10);
                                                lVar10 = *unaff_x27;
                                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                                if (lVar9 != 0) {
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar6 = lVar8;
                                                    thunk_FUN_037aeb94(plVar6,lVar8);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar5,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationPropertyString_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetApplicationProcessId_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d86c48);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d86c50
                                                              );
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVRApplications__GetApplicationPropertyBool_TypeInfo
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = PTR_DAT_07da3690;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07d983e0;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      *(undefined4 *)(lVar4 + 0x18) = 1;
                                                      lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar5 != 0) {
                                                        uVar7 = *(undefined8 *)puVar2;
                                                        lVar8 = *(long *)(lVar5 + 0x10);
                                                        lVar9 = *unaff_x25;
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar7;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar5,uVar7,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da3698;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = 
                                                  OVR_OpenVR_IVRApplications__GetDefaultApplicationForMimeType_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07da3720;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d86c48);
                                                    FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                        PTR_DAT_07d86c50);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x25;
                                                      uVar7 = *(undefined8 *)PTR_DAT_07da3658;
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar7;
                                                          thunk_FUN_037aeb94();
                                                        }
                                                        else {
                                                          FUN_049ceef4(lVar5,uVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar4 + 0x30) = lVar5;
                                                        thunk_FUN_037aeb94((long *)(lVar4 + 0x30),
                                                                           lVar5);
                                                        lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                    PTR_DAT_07d8c608
                                                                                  );
                                                        FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                            PTR_DAT_07d8c5f0);
                                                        lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                    PTR_DAT_07d8c5b0
                                                                                  );
                                                        FUN_074afe28(lVar8,0);
                                                        if (lVar8 != 0) {
                                                          *(undefined8 *)(lVar8 + 0x18) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000363_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = 
                                                  Cinemachine_CinemachineImpulseManager_ImpulseEvent_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2d48;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d86c48);
                                                    FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                        PTR_DAT_07d86c50);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x25;
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          UnityEngine_Camera_CameraCallback_TypeInfo
                                                    ;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = PTR_DAT_07da36a8;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da3608;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      *(undefined4 *)(lVar4 + 0x18) = 2;
                                                      lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar5 != 0) {
                                                        lVar9 = *unaff_x25;
                                                        uVar7 = *(undefined8 *)PTR_DAT_07da3620;
                                                        lVar8 = *(long *)(lVar5 + 0x10);
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar7;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar5,uVar7,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da3610;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = PTR_DAT_07da35c8;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da3710;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      *(undefined4 *)(lVar4 + 0x18) = 0;
                                                      lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar5 != 0) {
                                                        lVar9 = *unaff_x25;
                                                        uVar7 = *(undefined8 *)PTR_DAT_07da36b8;
                                                        lVar8 = *(long *)(lVar5 + 0x10);
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar7;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar5,uVar7,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35e8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = 
                                                  DIVR_Gameplay_CarTraffic_SpawnedCar_TypeInfo;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2cf8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d86c48);
                                                    FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                        PTR_DAT_07d86c50);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x25;
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_Events_PersistentCallGroup_TypeInfo;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_CameraCaptureBridge_CameraEntry_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2cf0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 2;
                                                    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d86c48);
                                                    FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                        PTR_DAT_07d86c50);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x25;
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  System_Security_Permissions_PermissionState_TypeInfo
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035D_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d86c48);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d86c50
                                                              );
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035D_BurstDirectCall_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2ce8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d86c48);
                                                    FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                        PTR_DAT_07d86c50);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x25;
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Pico_Platform_Models_PermissionResult_TypeInfo;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = PTR_DAT_07d8c668;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07d8c630;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      *(undefined4 *)(lVar4 + 0x18) = 3;
                                                      lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar5 != 0) {
                                                        lVar9 = *unaff_x25;
                                                        uVar7 = *(undefined8 *)PTR_DAT_07d8c698;
                                                        lVar8 = *(long *)(lVar5 + 0x10);
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar7;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar5,uVar7,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07d8c6a0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = PTR_DAT_07da3598;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da35b0;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      *(undefined4 *)(lVar4 + 0x18) = 3;
                                                      lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar5 != 0) {
                                                        lVar9 = *unaff_x25;
                                                        uVar7 = *(undefined8 *)PTR_DAT_07da3640;
                                                        lVar8 = *(long *)(lVar5 + 0x10);
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar7;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar5,uVar7,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35f0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_074afe30(lVar4,0);
                                                    puVar2 = PTR_DAT_07da3630;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da36f8;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      *(undefined4 *)(lVar4 + 0x18) = 4;
                                                      lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar5,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar5 != 0) {
                                                        lVar9 = *unaff_x25;
                                                        uVar7 = *(undefined8 *)PTR_DAT_07da36c8;
                                                        lVar8 = *(long *)(lVar5 + 0x10);
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar7;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar5,uVar7,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35c0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_037aeb94(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar4 + 0x28),lVar5);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar5 = *unaff_x19;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_037aeb94(plVar6,lVar4);
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


