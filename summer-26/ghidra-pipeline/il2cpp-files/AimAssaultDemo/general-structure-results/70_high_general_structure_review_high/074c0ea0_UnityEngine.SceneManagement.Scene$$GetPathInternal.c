/*
FUNCTION_NAME: UnityEngine.SceneManagement.Scene$$GetPathInternal
ENTRY_POINT: 074c0ea0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void UnityEngine_SceneManagement_Scene__GetPathInternal(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  long in_stack_00000008;
  
  FUN_062855bc(param_1,0);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x18) =
         *(undefined8 *)UnityEngine_Rendering_CameraCaptureBridge_CameraEntry_TypeInfo;
    thunk_FUN_037aeb94();
    *(undefined8 *)(param_1 + 0x10) =
         *(undefined8 *)Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo;
    thunk_FUN_037aeb94();
    if (unaff_x22 != 0) {
      lVar6 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          plVar3 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar3 = param_1;
          thunk_FUN_037aeb94(plVar3,param_1);
        }
        else {
          FUN_049ceef4();
        }
        *(long *)(unaff_x21 + 0x28) = unaff_x22;
        thunk_FUN_037aeb94();
        *unaff_x20 = *unaff_x20 + 1;
        lVar6 = *unaff_x25;
        if (lVar6 != 0) {
          uVar1 = *unaff_x29;
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *unaff_x29 = uVar1 + 1;
            *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
            thunk_FUN_037aeb94();
          }
          else {
            FUN_049ceef4();
          }
          lVar6 = thunk_FUN_037788cc(*unaff_x24);
          FUN_062855bc(lVar6,0);
          puVar2 = UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_TypeInfo;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x10) =
                 *(undefined8 *)
                  Mono_Net_Security_ChainValidationHelper_<>c__DisplayClass11_0_TypeInfo;
            thunk_FUN_037aeb94();
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x20));
            *(undefined4 *)(lVar6 + 0x18) = 0;
            lVar4 = thunk_FUN_037788cc(*unaff_x26);
            FUN_049ce6c0(lVar4,*unaff_x19);
            if (lVar4 != 0) {
              lVar8 = *unaff_x28;
              uVar5 = *(undefined8 *)Oculus_Platform_Callback_RequestCallback_TypeInfo;
              lVar7 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                  thunk_FUN_037aeb94();
                }
                else {
                  FUN_049ceef4(lVar4,uVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar6 + 0x30) = lVar4;
                thunk_FUN_037aeb94((long *)(lVar6 + 0x30),lVar4);
                lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0);
                lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                FUN_062855bc(lVar7,0);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x18) =
                       *(undefined8 *)System_Threading_CancellationToken_<>c_TypeInfo;
                  thunk_FUN_037aeb94();
                  *(undefined8 *)(lVar7 + 0x10) =
                       *(undefined8 *)Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo;
                  thunk_FUN_037aeb94();
                  if (lVar4 != 0) {
                    lVar8 = *(long *)(lVar4 + 0x10);
                    lVar9 = *(long *)PTR_DAT_07d8c5d0;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        plVar3 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar3 = lVar7;
                        thunk_FUN_037aeb94(plVar3,lVar7);
                      }
                      else {
                        FUN_049ceef4(lVar4,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar6 + 0x28) = lVar4;
                      thunk_FUN_037aeb94((long *)(lVar6 + 0x28),lVar4);
                      *unaff_x20 = *unaff_x20 + 1;
                      lVar4 = *unaff_x25;
                      if (lVar4 != 0) {
                        uVar1 = *unaff_x29;
                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                          *unaff_x29 = uVar1 + 1;
                          plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar3 = lVar6;
                          thunk_FUN_037aeb94(plVar3,lVar6);
                        }
                        else {
                          FUN_049ceef4();
                        }
                        lVar6 = thunk_FUN_037788cc(*unaff_x24);
                        FUN_062855bc(lVar6,0);
                        puVar2 = PTR_DAT_07d8c668;
                        if (lVar6 != 0) {
                          *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_07d8c630;
                          thunk_FUN_037aeb94();
                          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x20));
                          *(undefined4 *)(lVar6 + 0x18) = 3;
                          lVar4 = thunk_FUN_037788cc(*unaff_x26);
                          FUN_049ce6c0(lVar4,*unaff_x19);
                          if (lVar4 != 0) {
                            lVar8 = *unaff_x28;
                            uVar5 = *(undefined8 *)PTR_DAT_07d8c698;
                            lVar7 = *(long *)(lVar4 + 0x10);
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                thunk_FUN_037aeb94();
                              }
                              else {
                                FUN_049ceef4(lVar4,uVar5,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar6 + 0x30) = lVar4;
                              thunk_FUN_037aeb94((long *)(lVar6 + 0x30),lVar4);
                              lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                              FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0);
                              lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                              FUN_062855bc(lVar7,0);
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)PTR_DAT_07d8c6a0;
                                thunk_FUN_037aeb94();
                                *(undefined8 *)(lVar7 + 0x10) =
                                     *(undefined8 *)
                                      Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo;
                                thunk_FUN_037aeb94();
                                if (lVar4 != 0) {
                                  lVar8 = *(long *)(lVar4 + 0x10);
                                  lVar9 = *(long *)PTR_DAT_07d8c5d0;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      plVar3 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar3 = lVar7;
                                      thunk_FUN_037aeb94(plVar3,lVar7);
                                    }
                                    else {
                                      FUN_049ceef4(lVar4,lVar7,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar6 + 0x28) = lVar4;
                                    thunk_FUN_037aeb94((long *)(lVar6 + 0x28),lVar4);
                                    *unaff_x20 = *unaff_x20 + 1;
                                    lVar4 = *unaff_x25;
                                    if (lVar4 != 0) {
                                      uVar1 = *unaff_x29;
                                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                        *unaff_x29 = uVar1 + 1;
                                        plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar3 = lVar6;
                                        thunk_FUN_037aeb94(plVar3,lVar6);
                                      }
                                      else {
                                        FUN_049ceef4();
                                      }
                                      lVar6 = thunk_FUN_037788cc(*unaff_x24);
                                      FUN_062855bc(lVar6,0);
                                      puVar2 = PTR_DAT_07da3598;
                                      if (lVar6 != 0) {
                                        *(undefined8 *)(lVar6 + 0x10) =
                                             *(undefined8 *)PTR_DAT_07da35b0;
                                        thunk_FUN_037aeb94();
                                        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                        thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x20));
                                        *(undefined4 *)(lVar6 + 0x18) = 3;
                                        lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                        FUN_049ce6c0(lVar4,*unaff_x19);
                                        if (lVar4 != 0) {
                                          lVar8 = *unaff_x28;
                                          uVar5 = *(undefined8 *)PTR_DAT_07da3640;
                                          lVar7 = *(long *)(lVar4 + 0x10);
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(lVar4 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar5;
                                              thunk_FUN_037aeb94();
                                            }
                                            else {
                                              FUN_049ceef4(lVar4,uVar5,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar6 + 0x30) = lVar4;
                                            thunk_FUN_037aeb94((long *)(lVar6 + 0x30),lVar4);
                                            lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                        PTR_DAT_07d8c608);
                                            FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0);
                                            lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                        PTR_DAT_07d8c5b0);
                                            FUN_062855bc(lVar7,0);
                                            if (lVar7 != 0) {
                                              *(undefined8 *)(lVar7 + 0x18) =
                                                   *(undefined8 *)PTR_DAT_07da35f0;
                                              thunk_FUN_037aeb94();
                                              *(undefined8 *)(lVar7 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                              ;
                                              thunk_FUN_037aeb94();
                                              if (lVar4 != 0) {
                                                lVar8 = *(long *)(lVar4 + 0x10);
                                                lVar9 = *(long *)PTR_DAT_07d8c5d0;
                                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    plVar3 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar3 = lVar7;
                                                    thunk_FUN_037aeb94(plVar3,lVar7);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar4,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar3 = lVar6;
                                                      thunk_FUN_037aeb94(plVar3,lVar6);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar6 = thunk_FUN_037788cc(*unaff_x24);
                                                    FUN_062855bc(lVar6,0);
                                                    puVar2 = PTR_DAT_07da3630;
                                                    if (lVar6 != 0) {
                                                      *(undefined8 *)(lVar6 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da36f8;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar6 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar6 + 0x20));
                                                      *(undefined4 *)(lVar6 + 0x18) = 4;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                      FUN_049ce6c0(lVar4,*unaff_x19);
                                                      if (lVar4 != 0) {
                                                        lVar8 = *unaff_x28;
                                                        uVar5 = *(undefined8 *)PTR_DAT_07da36c8;
                                                        lVar7 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar7 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar5;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar5,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35c0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar3 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar3 = lVar7;
                                                        thunk_FUN_037aeb94(plVar3,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar3 = lVar6;
                                                      thunk_FUN_037aeb94(plVar3,lVar6);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar6 = thunk_FUN_037788cc(*unaff_x24);
                                                    FUN_062855bc(lVar6,0);
                                                    puVar2 = 
                                                  System_Threading_CancellationTokenSource_Linked1CancellationTokenSource_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_CVRSystem__GetControllerStateWithPosePacked_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x28;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_CapturePass_<>c_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineCore_AxisInputDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar3 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar3 = lVar7;
                                                        thunk_FUN_037aeb94(plVar3,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar3 = lVar6;
                                                      thunk_FUN_037aeb94(plVar3,lVar6);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar6 = thunk_FUN_037788cc(*unaff_x24);
                                                    FUN_062855bc(lVar6,0);
                                                    puVar2 = 
                                                  Cinemachine_CinemachineImpulseDefinition_SignalSource_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Internal_Cryptography_Pal_CertificateData_<ReadReverseRdns>d__21_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x28;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Cinemachine_CinemachineCore_UpdateStatus_TypeInfo;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Threading_CancellationTokenSource_Linked2CancellationTokenSource_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar3 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar3 = lVar7;
                                                        thunk_FUN_037aeb94(plVar3,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar3 = lVar6;
                                                      thunk_FUN_037aeb94(plVar3,lVar6);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar6 = thunk_FUN_037788cc(*unaff_x24);
                                                    FUN_062855bc(lVar6,0);
                                                    puVar2 = 
                                                  System_Threading_CancellationCallbackInfo_WithSyncContext_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineImpulseDefinition_LegacySignalSource_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x28;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Cinemachine_CinemachineBrain_BrainFrame_TypeInfo;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Canvas_WillRenderCanvases_TypeInfo;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar3 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar3 = lVar7;
                                                        thunk_FUN_037aeb94(plVar3,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar3 = lVar6;
                                                      thunk_FUN_037aeb94(plVar3,lVar6);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar6 = thunk_FUN_037788cc(*unaff_x24);
                                                    FUN_062855bc(lVar6,0);
                                                    puVar2 = 
                                                  FFmpegOut_CameraCapture_<Start>d__29_TypeInfo;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_Utility_CinemachineDebug_OnGUIDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x28;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_CVRSystem__GetControllerStatePacked_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar3 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar3 = lVar7;
                                                        thunk_FUN_037aeb94(plVar3,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar3 = lVar6;
                                                      thunk_FUN_037aeb94(plVar3,lVar6);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar6 = thunk_FUN_037788cc(*unaff_x24);
                                                    FUN_062855bc(lVar6,0);
                                                    puVar2 = 
                                                  OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineBrain_VcamActivatedEvent_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x28;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  System_IO_ChunkedMemoryStream_MemoryChunk_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Text_RegularExpressions_CaptureCollection_Enumerator_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar3 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar3 = lVar7;
                                                        thunk_FUN_037aeb94(plVar3,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar6 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar3 = lVar6;
                                                      thunk_FUN_037aeb94(plVar3,lVar6);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    *(undefined8 *)(in_stack_00000008 + 0x28) =
                                                         unaff_x27;
                                                    uVar5 = thunk_FUN_037aeb94();
                                                    FUN_074afbf4(uVar5,in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


