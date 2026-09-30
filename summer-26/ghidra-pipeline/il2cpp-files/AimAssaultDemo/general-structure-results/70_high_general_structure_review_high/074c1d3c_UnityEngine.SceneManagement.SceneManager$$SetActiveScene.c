/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$SetActiveScene
ENTRY_POINT: 074c1d3c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void UnityEngine_SceneManagement_SceneManager__SetActiveScene(undefined8 *param_1)

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
  int in_w10;
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
  
  uVar5 = *param_1;
  lVar6 = *(long *)(unaff_x22 + 0x10);
  *(int *)(unaff_x22 + 0x1c) = in_w10 + 1;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4();
    }
    *(long *)(unaff_x21 + 0x30) = unaff_x22;
    thunk_FUN_037aeb94();
    lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
    FUN_049ce6c0(lVar6,*(undefined8 *)PTR_DAT_07d8c5f0);
    lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
    FUN_062855bc(lVar3,0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)UnityEngine_Canvas_WillRenderCanvases_TypeInfo;
      thunk_FUN_037aeb94();
      *(undefined8 *)(lVar3 + 0x10) =
           *(undefined8 *)Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo;
      thunk_FUN_037aeb94();
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *(long *)PTR_DAT_07d8c5d0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar4 = lVar3;
            thunk_FUN_037aeb94(plVar4,lVar3);
          }
          else {
            FUN_049ceef4(lVar6,lVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(unaff_x21 + 0x28) = lVar6;
          thunk_FUN_037aeb94((long *)(unaff_x21 + 0x28),lVar6);
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
            puVar2 = FFmpegOut_CameraCapture_<Start>d__29_TypeInfo;
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x10) =
                   *(undefined8 *)Cinemachine_Utility_CinemachineDebug_OnGUIDelegate_TypeInfo;
              thunk_FUN_037aeb94();
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
              thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x20));
              *(undefined4 *)(lVar6 + 0x18) = 0;
              lVar3 = thunk_FUN_037788cc(*unaff_x26);
              FUN_049ce6c0(lVar3,*unaff_x19);
              if (lVar3 != 0) {
                lVar8 = *unaff_x28;
                uVar5 = *(undefined8 *)OVR_OpenVR_CVRSystem__GetControllerStatePacked_TypeInfo;
                lVar7 = *(long *)(lVar3 + 0x10);
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                    thunk_FUN_037aeb94();
                  }
                  else {
                    FUN_049ceef4(lVar3,uVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(lVar6 + 0x30) = lVar3;
                  thunk_FUN_037aeb94((long *)(lVar6 + 0x30),lVar3);
                  lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                  FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d8c5f0);
                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                  FUN_062855bc(lVar7,0);
                  if (lVar7 != 0) {
                    *(undefined8 *)(lVar7 + 0x18) =
                         *(undefined8 *)
                          Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo;
                    thunk_FUN_037aeb94();
                    *(undefined8 *)(lVar7 + 0x10) =
                         *(undefined8 *)Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo;
                    thunk_FUN_037aeb94();
                    if (lVar3 != 0) {
                      lVar8 = *(long *)(lVar3 + 0x10);
                      lVar9 = *(long *)PTR_DAT_07d8c5d0;
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar4 = lVar7;
                          thunk_FUN_037aeb94(plVar4,lVar7);
                        }
                        else {
                          FUN_049ceef4(lVar3,lVar7,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar6 + 0x28) = lVar3;
                        thunk_FUN_037aeb94((long *)(lVar6 + 0x28),lVar3);
                        *unaff_x20 = *unaff_x20 + 1;
                        lVar3 = *unaff_x25;
                        if (lVar3 != 0) {
                          uVar1 = *unaff_x29;
                          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                            *unaff_x29 = uVar1 + 1;
                            plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar4 = lVar6;
                            thunk_FUN_037aeb94(plVar4,lVar6);
                          }
                          else {
                            FUN_049ceef4();
                          }
                          lVar6 = thunk_FUN_037788cc(*unaff_x24);
                          FUN_062855bc(lVar6,0);
                          puVar2 = OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo;
                          if (lVar6 != 0) {
                            *(undefined8 *)(lVar6 + 0x10) =
                                 *(undefined8 *)
                                  Cinemachine_CinemachineBrain_VcamActivatedEvent_TypeInfo;
                            thunk_FUN_037aeb94();
                            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                            thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x20));
                            *(undefined4 *)(lVar6 + 0x18) = 0;
                            lVar3 = thunk_FUN_037788cc(*unaff_x26);
                            FUN_049ce6c0(lVar3,*unaff_x19);
                            if (lVar3 != 0) {
                              lVar8 = *unaff_x28;
                              uVar5 = *(undefined8 *)
                                       System_IO_ChunkedMemoryStream_MemoryChunk_TypeInfo;
                              lVar7 = *(long *)(lVar3 + 0x10);
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar7 != 0) {
                                uVar1 = *(uint *)(lVar3 + 0x18);
                                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                  thunk_FUN_037aeb94();
                                }
                                else {
                                  FUN_049ceef4(lVar3,uVar5,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                }
                                *(long *)(lVar6 + 0x30) = lVar3;
                                thunk_FUN_037aeb94((long *)(lVar6 + 0x30),lVar3);
                                lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                                FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d8c5f0);
                                lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                                FUN_062855bc(lVar7,0);
                                if (lVar7 != 0) {
                                  *(undefined8 *)(lVar7 + 0x18) =
                                       *(undefined8 *)
                                        System_Text_RegularExpressions_CaptureCollection_Enumerator_TypeInfo
                                  ;
                                  thunk_FUN_037aeb94();
                                  *(undefined8 *)(lVar7 + 0x10) =
                                       *(undefined8 *)
                                        Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo;
                                  thunk_FUN_037aeb94();
                                  if (lVar3 != 0) {
                                    lVar8 = *(long *)(lVar3 + 0x10);
                                    lVar9 = *(long *)PTR_DAT_07d8c5d0;
                                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                    if (lVar8 != 0) {
                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar4 = lVar7;
                                        thunk_FUN_037aeb94(plVar4,lVar7);
                                      }
                                      else {
                                        FUN_049ceef4(lVar3,lVar7,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar6 + 0x28) = lVar3;
                                      thunk_FUN_037aeb94((long *)(lVar6 + 0x28),lVar3);
                                      *unaff_x20 = *unaff_x20 + 1;
                                      lVar3 = *unaff_x25;
                                      if (lVar3 != 0) {
                                        uVar1 = *unaff_x29;
                                        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                          *unaff_x29 = uVar1 + 1;
                                          plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar4 = lVar6;
                                          thunk_FUN_037aeb94(plVar4,lVar6);
                                        }
                                        else {
                                          FUN_049ceef4();
                                        }
                                        *(undefined8 *)(in_stack_00000008 + 0x28) = unaff_x27;
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


