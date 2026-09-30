/*
FUNCTION_NAME: FUN_07d889a8
ENTRY_POINT: 07d889a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_10;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_07d889a8(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_1c8 [4];
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_08486858;
  if ((DAT_08999c0c & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08491390);
    FUN_03a8a718(UnityEngine_Rendering_DebugUI_IContainer_TypeInfo);
    FUN_03a8a718(HurricaneVR_Framework_Core_Grabbers_HVRHandGrabber_<MoveGrab>d__334_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486858);
    FUN_03a8a718(HurricaneVR_Framework_Core_Grabbers_HVRHandGrabber_<SwapGrabPoint>d__377_TypeInfo);
    FUN_03a8a718(HurricaneVR_Framework_Core_HVRHandPhysics_<>c_TypeInfo);
    FUN_03a8a718(PTR_DAT_084868a0);
    FUN_03a8a718(HurricaneVR_Framework_Components_HVRHandPoseRecorder_<RemoveClone>d__19_TypeInfo);
    FUN_03a8a718(HVRInputActions_IHMDActions_TypeInfo);
    FUN_03a8a718(PTR_DAT_084cdbe0);
    FUN_03a8a718(HVRInputActions_ILeftHandActions_TypeInfo);
    FUN_03a8a718(HVRInputActions_IRightHandActions_TypeInfo);
    FUN_03a8a718(HVRInputActions_IUIActions_TypeInfo);
    FUN_03a8a718(HurricaneVR_Framework_ControllerInput_HVRInputManager_<>c_TypeInfo);
    FUN_03a8a718(
                HurricaneVR_Framework_ControllerInput_HVRInputManager_<UpdateTrackingOrigin>d__153_TypeInfo
                );
    FUN_03a8a718(HurricaneVR_Framework_Core_Player_HVRJointHand_<StopHandsRoutine>d__38_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486d40);
    FUN_03a8a718(
                HurricaneVR_Framework_Weapons_Guns_HVRMagazineSocket_<EjectAnimationRoutine>d__10_TypeInfo
                );
    FUN_03a8a718(
                HurricaneVR_Framework_Weapons_Guns_HVRMagazineSocket_<LoadAnimationRoutine>d__9_TypeInfo
                );
    FUN_03a8a718(HurricaneVR_Framework_Core_Utils_HVRObjectCollisionDisabler_<>c_TypeInfo);
    FUN_03a8a718(PTR_DAT_084baf80);
    FUN_03a8a718(
                HurricaneVR_Framework_Core_Utils_HVRObjectCollisionDisabler_<>c__DisplayClass3_0_TypeInfo
                );
    FUN_03a8a718(HurricaneVR_Framework_Weapons_Bow_HVRPhysicsBow_<>c__DisplayClass19_0_TypeInfo);
    FUN_03a8a718(HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68_TypeInfo);
    FUN_03a8a718(
                HurricaneVR_Framework_Core_Player_HVRPlayerController_<CorrectCamera>d__118_TypeInfo
                );
    FUN_03a8a718(
                HurricaneVR_Framework_Core_Player_HVRPlayerController_<CrouchRoutine>d__146_TypeInfo
                );
    FUN_03a8a718(HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo
                );
    FUN_03a8a718(HurricaneVR_Framework_Core_Player_HVRScreenFade_<FadeRoutine>d__16_TypeInfo);
    FUN_03a8a718(PTR_DAT_0849b6e8);
    FUN_03a8a718(PTR_DAT_084aa560);
    FUN_03a8a718(HurricaneVR_Framework_Weapons_HVRShotgunAmmoSocket_<Drop>d__5_TypeInfo);
    FUN_03a8a718(HurricaneVR_Framework_Weapons_HVRShotgunAmmoSocket_<DropAndDestroy>d__4_TypeInfo);
    FUN_03a8a718(HurricaneVR_Framework_Core_Grabbers_HVRSocket_<>c__DisplayClass73_0_TypeInfo);
    FUN_03a8a718(HurricaneVR_Framework_Core_Grabbers_HVRSocket_<GrabTimeoutRoutine>d__103_TypeInfo);
    FUN_03a8a718(HurricaneVR_Framework_Core_Grabbers_HVRSocket_<SetPositionNextFrame>d__94_TypeInfo)
    ;
    FUN_03a8a718(HurricaneVR_Framework_Core_Grabbers_HVRSocket_<TryGrabGrabbable>d__77_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_Universal_DecalEntityManager_<>c_TypeInfo);
    FUN_03a8a718(HurricaneVR_Framework_Core_Grabbers_HVRSocket_<WaitForUpdate>d__67_TypeInfo);
    FUN_03a8a718(PTR_DAT_084906f8);
    FUN_03a8a718(HurricaneVR_Framework_Core_Bags_HVRSocketBag_<>c_TypeInfo);
    FUN_03a8a718(HurricaneVR_Framework_Core_Sockets_HVRSocketContainer_<>c__DisplayClass5_0_TypeInfo
                );
    FUN_03a8a718(
                HurricaneVR_Framework_Core_Grabbers_HVRSocketContainerGrabber_<TryGrabGrabbable>d__12_TypeInfo
                );
    FUN_03a8a718(
                HurricaneVR_Framework_Core_Sockets_HVRSocketHoverScale_<ScaleHoverTarget>d__10_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_084a6378);
    FUN_03a8a718(HurricaneVR_Framework_Core_Sockets_HVRSocketable_<>c_TypeInfo);
    FUN_03a8a718(HurricaneVR_Framework_Core_Sockets_HVRSocketableTags_<GetNames>d__13_TypeInfo);
    FUN_03a8a718(PTR_DAT_084abb08);
    DAT_08999c0c = 1;
  }
  plVar4 = (long *)FUN_03a8a804(*(undefined8 *)puVar1,0x4e);
  puVar1 = HurricaneVR_Framework_Core_Sockets_HVRSocketable_<>c_TypeInfo;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if ((*(long *)HurricaneVR_Framework_Core_Sockets_HVRSocketable_<>c_TypeInfo != 0) &&
     (lVar5 = thunk_FUN_03ac73c0(*(long *)
                                  HurricaneVR_Framework_Core_Sockets_HVRSocketable_<>c_TypeInfo,
                                 *(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_07d8a14c:
    uVar7 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = *(long *)puVar1;
    thunk_FUN_03afed3c();
    puVar1 = PTR_DAT_08486760;
    local_54 = *param_1;
    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x50),&local_54);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_07d8a14c;
    puVar3 = PTR_DAT_08486d40;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar5;
      thunk_FUN_03afed3c(plVar4 + 5,lVar5);
      lVar5 = *(long *)puVar3;
      if ((lVar5 != 0) &&
         (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_07d8a14c;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = *(long *)puVar3;
        thunk_FUN_03afed3c();
        local_58 = param_1[1];
        lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&local_58);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_07d8a14c;
        puVar3 = PTR_DAT_084aa560;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
          plVar4[7] = lVar5;
          thunk_FUN_03afed3c(plVar4 + 7,lVar5);
          lVar5 = *(long *)puVar3;
          if ((lVar5 != 0) &&
             (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_07d8a14c;
          puVar2 = HurricaneVR_Framework_Core_Grabbers_HVRHandGrabber_<SwapGrabPoint>d__377_TypeInfo
          ;
          if (4 < *(uint *)(plVar4 + 3)) {
            plVar4[8] = *(long *)puVar3;
            thunk_FUN_03afed3c();
            local_5c[0] = *(undefined1 *)(param_1 + 2);
            lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2,local_5c);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_07d8a14c;
            puVar3 = 
            HurricaneVR_Framework_Components_HVRHandPoseRecorder_<RemoveClone>d__19_TypeInfo;
            if (5 < *(uint *)(plVar4 + 3)) {
              plVar4[9] = lVar5;
              thunk_FUN_03afed3c(plVar4 + 9,lVar5);
              lVar5 = *(long *)puVar3;
              if ((lVar5 != 0) &&
                 (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
              goto LAB_07d8a14c;
              if (6 < *(uint *)(plVar4 + 3)) {
                plVar4[10] = *(long *)puVar3;
                thunk_FUN_03afed3c();
                local_60 = param_1[3];
                lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&local_60);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                goto LAB_07d8a14c;
                puVar3 = HVRInputActions_IRightHandActions_TypeInfo;
                if ((*(uint *)(plVar4 + 3) & 0xfffffff8) != 0) {
                  plVar4[0xb] = lVar5;
                  thunk_FUN_03afed3c(plVar4 + 0xb,lVar5);
                  lVar5 = *(long *)puVar3;
                  if ((lVar5 != 0) &&
                     (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)
                     ) goto LAB_07d8a14c;
                  if (8 < *(uint *)(plVar4 + 3)) {
                    plVar4[0xc] = *(long *)puVar3;
                    thunk_FUN_03afed3c();
                    lVar5 = *(long *)(param_1 + 4);
                    if ((lVar5 != 0) &&
                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar6 == 0)) goto LAB_07d8a14c;
                    puVar3 = 
                    HurricaneVR_Framework_Core_Player_HVRPlayerController_<CorrectCamera>d__118_TypeInfo
                    ;
                    if (9 < *(uint *)(plVar4 + 3)) {
                      plVar4[0xd] = lVar5;
                      thunk_FUN_03afed3c(plVar4 + 0xd,lVar5);
                      lVar5 = *(long *)puVar3;
                      if ((lVar5 != 0) &&
                         (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar5 == 0)) goto LAB_07d8a14c;
                      if (10 < *(uint *)(plVar4 + 3)) {
                        plVar4[0xe] = *(long *)puVar3;
                        thunk_FUN_03afed3c();
                        lVar5 = *(long *)(param_1 + 6);
                        if ((lVar5 != 0) &&
                           (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                           lVar6 == 0)) goto LAB_07d8a14c;
                        puVar3 = UnityEngine_Rendering_Universal_DecalEntityManager_<>c_TypeInfo;
                        if (0xb < *(uint *)(plVar4 + 3)) {
                          plVar4[0xf] = lVar5;
                          thunk_FUN_03afed3c(plVar4 + 0xf,lVar5);
                          lVar5 = *(long *)puVar3;
                          if ((lVar5 != 0) &&
                             (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                             lVar5 == 0)) goto LAB_07d8a14c;
                          if (0xc < *(uint *)(plVar4 + 3)) {
                            plVar4[0x10] = *(long *)puVar3;
                            thunk_FUN_03afed3c();
                            lVar5 = *(long *)(param_1 + 8);
                            if ((lVar5 != 0) &&
                               (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                               lVar6 == 0)) goto LAB_07d8a14c;
                            puVar3 = 
                            HurricaneVR_Framework_Weapons_HVRShotgunAmmoSocket_<Drop>d__5_TypeInfo;
                            if (0xd < *(uint *)(plVar4 + 3)) {
                              plVar4[0x11] = lVar5;
                              thunk_FUN_03afed3c(plVar4 + 0x11,lVar5);
                              lVar5 = *(long *)puVar3;
                              if ((lVar5 != 0) &&
                                 (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                                 lVar5 == 0)) goto LAB_07d8a14c;
                              if (0xe < *(uint *)(plVar4 + 3)) {
                                plVar4[0x12] = *(long *)puVar3;
                                thunk_FUN_03afed3c();
                                lVar5 = *(long *)(param_1 + 10);
                                if ((lVar5 != 0) &&
                                   (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)
                                                              ), lVar6 == 0)) goto LAB_07d8a14c;
                                puVar3 = PTR_DAT_084baf80;
                                if ((*(uint *)(plVar4 + 3) & 0xfffffff0) != 0) {
                                  plVar4[0x13] = lVar5;
                                  thunk_FUN_03afed3c(plVar4 + 0x13,lVar5);
                                  lVar5 = *(long *)puVar3;
                                  if ((lVar5 != 0) &&
                                     (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)
                                                                        (*plVar4 + 0x40)),
                                     lVar5 == 0)) goto LAB_07d8a14c;
                                  if (0x10 < *(uint *)(plVar4 + 3)) {
                                    plVar4[0x14] = *(long *)puVar3;
                                    thunk_FUN_03afed3c();
                                    lVar5 = *(long *)(param_1 + 0xc);
                                    if ((lVar5 != 0) &&
                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)
                                                                          (*plVar4 + 0x40)),
                                       lVar6 == 0)) goto LAB_07d8a14c;
                                    puVar3 = 
                                    HurricaneVR_Framework_Core_Utils_HVRObjectCollisionDisabler_<>c__DisplayClass3_0_TypeInfo
                                    ;
                                    if (0x11 < *(uint *)(plVar4 + 3)) {
                                      plVar4[0x15] = lVar5;
                                      thunk_FUN_03afed3c(plVar4 + 0x15,lVar5);
                                      lVar5 = *(long *)puVar3;
                                      if ((lVar5 != 0) &&
                                         (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)
                                                                            (*plVar4 + 0x40)),
                                         lVar5 == 0)) goto LAB_07d8a14c;
                                      if (0x12 < *(uint *)(plVar4 + 3)) {
                                        plVar4[0x16] = *(long *)puVar3;
                                        thunk_FUN_03afed3c();
                                        local_64 = param_1[0xe];
                                        lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),
                                                                   &local_64);
                                        if ((lVar5 != 0) &&
                                           (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)
                                                                              (*plVar4 + 0x40)),
                                           lVar6 == 0)) goto LAB_07d8a14c;
                                        puVar3 = HVRInputActions_IHMDActions_TypeInfo;
                                        if (0x13 < *(uint *)(plVar4 + 3)) {
                                          plVar4[0x17] = lVar5;
                                          thunk_FUN_03afed3c(plVar4 + 0x17,lVar5);
                                          lVar5 = *(long *)puVar3;
                                          if ((lVar5 != 0) &&
                                             (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)
                                                                                (*plVar4 + 0x40)),
                                             lVar5 == 0)) goto LAB_07d8a14c;
                                          if (0x14 < *(uint *)(plVar4 + 3)) {
                                            plVar4[0x18] = *(long *)puVar3;
                                            thunk_FUN_03afed3c();
                                            local_68[0] = *(undefined1 *)(param_1 + 0xf);
                                            lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                        (puVar1 + 0x28),local_68);
                                            if ((lVar5 != 0) &&
                                               (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)
                                                                                  (*plVar4 + 0x40)),
                                               lVar6 == 0)) goto LAB_07d8a14c;
                                            puVar3 = 
                                            HurricaneVR_Framework_Core_Grabbers_HVRSocket_<GrabTimeoutRoutine>d__103_TypeInfo
                                            ;
                                            if (0x15 < *(uint *)(plVar4 + 3)) {
                                              plVar4[0x19] = lVar5;
                                              thunk_FUN_03afed3c(plVar4 + 0x19,lVar5);
                                              lVar5 = *(long *)puVar3;
                                              if ((lVar5 != 0) &&
                                                 (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)
                                                                                    (*plVar4 + 0x40)
                                                                            ), lVar5 == 0))
                                              goto LAB_07d8a14c;
                                              if (0x16 < *(uint *)(plVar4 + 3)) {
                                                plVar4[0x1a] = *(long *)puVar3;
                                                thunk_FUN_03afed3c();
                                                local_6c = param_1[0x10];
                                                lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                            (puVar1 + 0x78),
                                                                           &local_6c);
                                                if ((lVar5 != 0) &&
                                                   (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)
                                                                                      (*plVar4 +
                                                                                      0x40)),
                                                   lVar6 == 0)) goto LAB_07d8a14c;
                                                puVar3 = PTR_DAT_084cdbe0;
                                                if (0x17 < *(uint *)(plVar4 + 3)) {
                                                  plVar4[0x1b] = lVar5;
                                                  thunk_FUN_03afed3c(plVar4 + 0x1b,lVar5);
                                                  lVar5 = *(long *)puVar3;
                                                  if ((lVar5 != 0) &&
                                                     (lVar5 = thunk_FUN_03ac73c0(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40)), lVar5 == 0)) goto LAB_07d8a14c;
                                                  if (0x18 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x1c] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c();
                                                    local_70 = param_1[0x11];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x48),
                                                                               &local_70);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Bags_HVRSocketBag_<>c_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x1d] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x1d,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x1a < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x1e] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c();
                                                    local_74 = param_1[0x12];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x48),
                                                                               &local_74);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Grabbers_HVRSocket_<WaitForUpdate>d__67_TypeInfo
                                                  ;
                                                  if (0x1b < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x1f] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x1f,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar2 = 
                                                  HurricaneVR_Framework_Core_HVRHandPhysics_<>c_TypeInfo
                                                  ;
                                                  if (0x1c < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x20] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x20);
                                                    uStack_98 = *(undefined8 *)(param_1 + 0x15);
                                                    local_a0 = *(undefined8 *)(param_1 + 0x13);
                                                    uStack_88 = *(undefined8 *)(param_1 + 0x19);
                                                    uStack_90 = *(undefined8 *)(param_1 + 0x17);
                                                    local_80 = *(undefined8 *)(param_1 + 0x1b);
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_a0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Utils_HVRObjectCollisionDisabler_<>c_TypeInfo
                                                  ;
                                                  if (0x1d < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x21] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x21,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x1e < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x22] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x22);
                                                    uStack_c8 = *(undefined8 *)(param_1 + 0x1f);
                                                    local_d0 = *(undefined8 *)(param_1 + 0x1d);
                                                    uStack_b8 = *(undefined8 *)(param_1 + 0x23);
                                                    uStack_c0 = *(undefined8 *)(param_1 + 0x21);
                                                    local_b0 = *(undefined8 *)(param_1 + 0x25);
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_d0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_ControllerInput_HVRInputManager_<>c_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar4 + 3) & 0xffffffe0) != 0) {
                                                    plVar4[0x23] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x23,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x20 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x24] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x24);
                                                    uStack_f8 = *(undefined8 *)(param_1 + 0x29);
                                                    local_100 = *(undefined8 *)(param_1 + 0x27);
                                                    uStack_e8 = *(undefined8 *)(param_1 + 0x2d);
                                                    uStack_f0 = *(undefined8 *)(param_1 + 0x2b);
                                                    local_e0 = *(undefined8 *)(param_1 + 0x2f);
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_100);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Weapons_Bow_HVRPhysicsBow_<>c__DisplayClass19_0_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x25] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x25,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x22 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x26] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x26);
                                                    uStack_128 = *(undefined8 *)(param_1 + 0x33);
                                                    local_130 = *(undefined8 *)(param_1 + 0x31);
                                                    uStack_118 = *(undefined8 *)(param_1 + 0x37);
                                                    uStack_120 = *(undefined8 *)(param_1 + 0x35);
                                                    local_110 = *(undefined8 *)(param_1 + 0x39);
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_130);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Player_HVRScreenFade_<FadeRoutine>d__16_TypeInfo
                                                  ;
                                                  if (0x23 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x27] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x27,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar2 = PTR_DAT_084868a0;
                                                  if (0x24 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x28] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x28);
                                                    local_140 = *(undefined8 *)(param_1 + 0x3b);
                                                    local_138 = param_1[0x3d];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_140);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = HVRInputActions_ILeftHandActions_TypeInfo
                                                  ;
                                                  if (0x25 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x29] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x29,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x26 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x2a] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x2a);
                                                    local_150 = *(undefined8 *)(param_1 + 0x3e);
                                                    local_148 = param_1[0x40];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_150);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Grabbers_HVRSocket_<>c__DisplayClass73_0_TypeInfo
                                                  ;
                                                  if (0x27 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x2b] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x2b,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x28 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x2c] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x2c);
                                                    local_158 = param_1[0x43];
                                                    local_160 = *(undefined8 *)(param_1 + 0x41);
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_160);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Sockets_HVRSocketHoverScale_<ScaleHoverTarget>d__10_TypeInfo
                                                  ;
                                                  if (0x29 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x2d] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x2d,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x2a < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x2e] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x2e);
                                                    local_170 = *(undefined8 *)(param_1 + 0x44);
                                                    local_168 = param_1[0x46];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_170);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = PTR_DAT_0849b6e8;
                                                  if (0x2b < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x2f] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x2f,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x2c < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x30] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x30);
                                                    local_174 = param_1[0x47];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x78),
                                                                               &local_174);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Sockets_HVRSocketContainer_<>c__DisplayClass5_0_TypeInfo
                                                  ;
                                                  if (0x2d < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x31] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x31,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x2e < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x32] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x32);
                                                    local_178 = param_1[0x48];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x78),
                                                                               &local_178);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Sockets_HVRSocketableTags_<GetNames>d__13_TypeInfo
                                                  ;
                                                  if (0x2f < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x33] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x33,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x30 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x34] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x34);
                                                    local_17c = param_1[0x49];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x78),
                                                                               &local_17c);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = HVRInputActions_IUIActions_TypeInfo;
                                                  if (0x31 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x35] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x35,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x32 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x36] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x36);
                                                    local_180 = param_1[0x4a];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x78),
                                                                               &local_180);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Grabbers_HVRSocketContainerGrabber_<TryGrabGrabbable>d__12_TypeInfo
                                                  ;
                                                  if (0x33 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x37] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x37,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x34 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x38] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x38);
                                                    local_184 = param_1[0x4b];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x78),
                                                                               &local_184);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68_TypeInfo
                                                  ;
                                                  if (0x35 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x39] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x39,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x36 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x3a] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x3a);
                                                    local_188 = param_1[0x4c];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x78),
                                                                               &local_188);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Weapons_Guns_HVRMagazineSocket_<EjectAnimationRoutine>d__10_TypeInfo
                                                  ;
                                                  if (0x37 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x3b] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x3b,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x38 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x3c] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x3c);
                                                    local_18c = param_1[0x4d];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x78),
                                                                               &local_18c);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_ControllerInput_HVRInputManager_<UpdateTrackingOrigin>d__153_TypeInfo
                                                  ;
                                                  if (0x39 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x3d] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x3d,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x3a < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x3e] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x3e);
                                                    local_190 = param_1[0x4e];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x78),
                                                                               &local_190);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Player_HVRPlayerController_<CrouchRoutine>d__146_TypeInfo
                                                  ;
                                                  if (0x3b < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x3f] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x3f,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x3c < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x40] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x40);
                                                    local_194 = param_1[0x4f];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x78),
                                                                               &local_194);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = PTR_DAT_084abb08;
                                                  if (0x3d < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x41] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x41,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x3e < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x42] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x42);
                                                    local_198 = param_1[0x50];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x78),
                                                                               &local_198);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = PTR_DAT_084906f8;
                                                  if ((*(uint *)(plVar4 + 3) & 0xffffffc0) != 0) {
                                                    plVar4[0x43] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x43,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar2 = PTR_DAT_08491390;
                                                  if (0x40 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x44] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x44);
                                                    local_19c = param_1[0x51];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_19c);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Player_HVRJointHand_<StopHandsRoutine>d__38_TypeInfo
                                                  ;
                                                  if (0x41 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x45] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x45,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x42 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x46] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x46);
                                                    local_1a0 = param_1[0x52];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_1a0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Weapons_HVRShotgunAmmoSocket_<DropAndDestroy>d__4_TypeInfo
                                                  ;
                                                  if (0x43 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x47] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x47,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x44 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x48] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x48);
                                                    local_1a4 = param_1[0x54];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_1a4);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Weapons_Guns_HVRMagazineSocket_<LoadAnimationRoutine>d__9_TypeInfo
                                                  ;
                                                  if (0x45 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x49] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x49,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x46 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x4a] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x4a);
                                                    local_1a8 = param_1[0x56];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_1a8);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Grabbers_HVRSocket_<TryGrabGrabbable>d__77_TypeInfo
                                                  ;
                                                  if (0x47 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x4b] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x4b,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar2 = 
                                                  HurricaneVR_Framework_Core_Grabbers_HVRHandGrabber_<MoveGrab>d__334_TypeInfo
                                                  ;
                                                  if (0x48 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x4c] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x4c);
                                                    uStack_1b8 = *(undefined8 *)(param_1 + 0x59);
                                                    local_1c0 = *(undefined8 *)(param_1 + 0x57);
                                                    local_1b0 = param_1[0x5b];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_1c0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = PTR_DAT_084a6378;
                                                  if (0x49 < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x4d] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x4d,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar2 = 
                                                  UnityEngine_Rendering_DebugUI_IContainer_TypeInfo;
                                                  if (0x4a < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x4e] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x4e);
                                                    local_1c4 = param_1[0x5c];
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2
                                                                               ,&local_1c4);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar3 = 
                                                  HurricaneVR_Framework_Core_Grabbers_HVRSocket_<SetPositionNextFrame>d__94_TypeInfo
                                                  ;
                                                  if (0x4b < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x4f] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x4f,lVar5);
                                                    lVar5 = *(long *)puVar3;
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                                                  goto LAB_07d8a14c;
                                                  if (0x4c < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x50] = *(long *)puVar3;
                                                    thunk_FUN_03afed3c(plVar4 + 0x50);
                                                    local_1c8[0] = *(undefined1 *)(param_1 + 0x5d);
                                                    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                                                                (puVar1 + 0x28),
                                                                               local_1c8);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_03ac73c0(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_07d8a14c;
                                                  puVar1 = 
                                                  HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo
                                                  ;
                                                  if (0x4d < *(uint *)(plVar4 + 3)) {
                                                    plVar4[0x51] = lVar5;
                                                    thunk_FUN_03afed3c(plVar4 + 0x51,lVar5);
                                                    FUN_065ce7dc(*(undefined8 *)puVar1,plVar4,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


