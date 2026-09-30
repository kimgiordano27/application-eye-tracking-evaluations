/*
FUNCTION_NAME: FUN_040e02a8
ENTRY_POINT: 040e02a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_040e02a8(undefined2 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined1 local_1f8 [4];
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8 [2];
  undefined4 local_1c0 [2];
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined2 local_64 [2];
  
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  if ((DAT_04840324 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_Drawing_DrawingUtilities_BoundsFrom__);
    thunk_FUN_01efb3a4(PTR_DAT_04589090);
    thunk_FUN_01efb3a4(PTR_DAT_04589098);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_045890a0);
    thunk_FUN_01efb3a4(PTR_DAT_045890a8);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_045890b0);
    thunk_FUN_01efb3a4(PTR_DAT_045890b8);
    thunk_FUN_01efb3a4(PTR_DAT_045890c0);
    thunk_FUN_01efb3a4(PTR_DAT_045890c8);
    thunk_FUN_01efb3a4(PTR_DAT_045890d0);
    thunk_FUN_01efb3a4(PTR_DAT_045890d8);
    thunk_FUN_01efb3a4(PTR_DAT_045890e0);
    thunk_FUN_01efb3a4(PTR_DAT_045890e8);
    thunk_FUN_01efb3a4(PTR_DAT_045890f0);
    thunk_FUN_01efb3a4(PTR_DAT_045890f8);
    thunk_FUN_01efb3a4(PTR_DAT_04589100);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04589108);
    thunk_FUN_01efb3a4(PTR_DAT_04589110);
    thunk_FUN_01efb3a4(PTR_DAT_04589118);
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04589120);
    thunk_FUN_01efb3a4(PTR_DAT_04589128);
    thunk_FUN_01efb3a4(PTR_DAT_04589130);
    thunk_FUN_01efb3a4(PTR_DAT_04589138);
    thunk_FUN_01efb3a4(PTR_DAT_04589140);
    thunk_FUN_01efb3a4(PTR_DAT_04589148);
    thunk_FUN_01efb3a4(PTR_DAT_04589150);
    thunk_FUN_01efb3a4(PTR_DAT_04589158);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter_GetValue<AnimationCurve>__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s16__);
    thunk_FUN_01efb3a4(PTR_DAT_04589160);
    thunk_FUN_01efb3a4(PTR_DAT_04589168);
    thunk_FUN_01efb3a4(PTR_DAT_04589170);
    thunk_FUN_01efb3a4(PTR_DAT_04589178);
    thunk_FUN_01efb3a4(PTR_DAT_04589180);
    thunk_FUN_01efb3a4(PTR_DAT_04589188);
    thunk_FUN_01efb3a4(PTR_DAT_04589190);
    thunk_FUN_01efb3a4(PTR_DAT_04589198);
    thunk_FUN_01efb3a4(PTR_DAT_045891a0);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ForwardRenderer_SetupLights__);
    thunk_FUN_01efb3a4(PTR_DAT_045891a8);
    thunk_FUN_01efb3a4(PTR_DAT_045891b0);
    thunk_FUN_01efb3a4(PTR_DAT_045891b8);
    thunk_FUN_01efb3a4(PTR_DAT_045891c0);
    thunk_FUN_01efb3a4(Method_System_Globalization_JapaneseCalendar__ctor__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_GZipStream_ThrowStreamClosedException__);
    thunk_FUN_01efb3a4(PTR_DAT_045891c8);
    thunk_FUN_01efb3a4(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass12_0_<DOScale>b__1__);
    DAT_04840324 = 1;
  }
  plVar6 = (long *)FUN_01f08890(*(undefined8 *)puVar2,0x56);
  puVar2 = Method_System_IO_Compression_GZipStream_ThrowStreamClosedException__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)Method_System_IO_Compression_GZipStream_ThrowStreamClosedException__ == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = thunk_FUN_01f116d0(*(long *)
                                Method_System_IO_Compression_GZipStream_ThrowStreamClosedException__
                               ,*(undefined8 *)(*plVar6 + 0x40));
    if (lVar7 == 0) goto LAB_040e1e44;
    lVar7 = *(long *)puVar2;
  }
  puVar2 = Method_System_IO_CStreamReader_Read__;
  puVar10 = (uint *)(plVar6 + 3);
  if (*puVar10 != 0) {
    plVar6[4] = lVar7;
    thunk_FUN_01f51358();
    local_64[0] = *param_1;
    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,local_64);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_040e1e44:
      uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,0);
    }
    puVar2 = Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__;
    if (1 < *puVar10) {
      plVar6[5] = lVar7;
      thunk_FUN_01f51358(plVar6 + 5,lVar7);
      lVar7 = *(long *)puVar2;
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) goto LAB_040e1e44;
        lVar7 = *(long *)puVar2;
      }
      puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      if (2 < *puVar10) {
        plVar6[6] = lVar7;
        thunk_FUN_01f51358();
        local_68 = *(undefined4 *)(param_1 + 2);
        lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_68);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_040e1e44;
        puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s16__;
        if (3 < *puVar10) {
          plVar6[7] = lVar7;
          thunk_FUN_01f51358(plVar6 + 7,lVar7);
          lVar7 = *(long *)puVar4;
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar7 == 0) goto LAB_040e1e44;
            lVar7 = *(long *)puVar4;
          }
          puVar4 = PTR_DAT_045890a0;
          if (4 < *puVar10) {
            plVar6[8] = lVar7;
            thunk_FUN_01f51358();
            local_6c[0] = *(undefined1 *)(param_1 + 4);
            lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,local_6c);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_040e1e44;
            puVar4 = PTR_DAT_045890b0;
            if (5 < *puVar10) {
              plVar6[9] = lVar7;
              thunk_FUN_01f51358(plVar6 + 9,lVar7);
              lVar7 = *(long *)puVar4;
              if (lVar7 == 0) {
                lVar7 = 0;
              }
              else {
                lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40));
                if (lVar7 == 0) goto LAB_040e1e44;
                lVar7 = *(long *)puVar4;
              }
              if (6 < *puVar10) {
                plVar6[10] = lVar7;
                thunk_FUN_01f51358();
                local_70 = *(undefined4 *)(param_1 + 6);
                lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_70);
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_040e1e44;
                puVar4 = PTR_DAT_045890d0;
                if (7 < *puVar10) {
                  plVar6[0xb] = lVar7;
                  thunk_FUN_01f51358(plVar6 + 0xb,lVar7);
                  lVar7 = *(long *)puVar4;
                  if (lVar7 == 0) {
                    lVar7 = 0;
                  }
                  else {
                    lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40));
                    if (lVar7 == 0) goto LAB_040e1e44;
                    lVar7 = *(long *)puVar4;
                  }
                  if (8 < *puVar10) {
                    plVar6[0xc] = lVar7;
                    thunk_FUN_01f51358();
                    lVar7 = *(long *)(param_1 + 8);
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar8 == 0)) goto LAB_040e1e44;
                    puVar4 = PTR_DAT_04589140;
                    if (9 < *puVar10) {
                      plVar6[0xd] = lVar7;
                      thunk_FUN_01f51358(plVar6 + 0xd,lVar7);
                      lVar7 = *(long *)puVar4;
                      if (lVar7 == 0) {
                        lVar7 = 0;
                      }
                      else {
                        lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40));
                        if (lVar7 == 0) goto LAB_040e1e44;
                        lVar7 = *(long *)puVar4;
                      }
                      if (10 < *puVar10) {
                        plVar6[0xe] = lVar7;
                        thunk_FUN_01f51358();
                        lVar7 = *(long *)(param_1 + 0xc);
                        if ((lVar7 != 0) &&
                           (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar8 == 0)) goto LAB_040e1e44;
                        puVar4 = PTR_DAT_04589190;
                        if (0xb < *puVar10) {
                          plVar6[0xf] = lVar7;
                          thunk_FUN_01f51358(plVar6 + 0xf,lVar7);
                          lVar7 = *(long *)puVar4;
                          if (lVar7 == 0) {
                            lVar7 = 0;
                          }
                          else {
                            lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40));
                            if (lVar7 == 0) goto LAB_040e1e44;
                            lVar7 = *(long *)puVar4;
                          }
                          if (0xc < *puVar10) {
                            plVar6[0x10] = lVar7;
                            thunk_FUN_01f51358();
                            lVar7 = *(long *)(param_1 + 0x10);
                            if ((lVar7 != 0) &&
                               (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar8 == 0)) goto LAB_040e1e44;
                            puVar4 = PTR_DAT_04589160;
                            if (0xd < *puVar10) {
                              plVar6[0x11] = lVar7;
                              thunk_FUN_01f51358(plVar6 + 0x11,lVar7);
                              lVar7 = *(long *)puVar4;
                              if (lVar7 == 0) {
                                lVar7 = 0;
                              }
                              else {
                                lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40));
                                if (lVar7 == 0) goto LAB_040e1e44;
                                lVar7 = *(long *)puVar4;
                              }
                              if (0xe < *puVar10) {
                                plVar6[0x12] = lVar7;
                                thunk_FUN_01f51358();
                                lVar7 = *(long *)(param_1 + 0x14);
                                if ((lVar7 != 0) &&
                                   (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)
                                                              ), lVar8 == 0)) goto LAB_040e1e44;
                                puVar4 = PTR_DAT_045890e0;
                                if (0xf < *puVar10) {
                                  plVar6[0x13] = lVar7;
                                  thunk_FUN_01f51358(plVar6 + 0x13,lVar7);
                                  lVar7 = *(long *)puVar4;
                                  if (lVar7 == 0) {
                                    lVar7 = 0;
                                  }
                                  else {
                                    lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)
                                                              );
                                    if (lVar7 == 0) goto LAB_040e1e44;
                                    lVar7 = *(long *)puVar4;
                                  }
                                  if (0x10 < *puVar10) {
                                    plVar6[0x14] = lVar7;
                                    thunk_FUN_01f51358();
                                    local_74 = *(undefined4 *)(param_1 + 0x18);
                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_74);
                                    if ((lVar7 != 0) &&
                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                          (*plVar6 + 0x40)),
                                       lVar8 == 0)) goto LAB_040e1e44;
                                    puVar4 = 
                                    Field_<PrivateImplementationDetails>_D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552
                                    ;
                                    if (0x11 < *puVar10) {
                                      plVar6[0x15] = lVar7;
                                      thunk_FUN_01f51358(plVar6 + 0x15,lVar7);
                                      lVar7 = *(long *)puVar4;
                                      if (lVar7 == 0) {
                                        lVar7 = 0;
                                      }
                                      else {
                                        lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                          (*plVar6 + 0x40));
                                        if (lVar7 == 0) goto LAB_040e1e44;
                                        lVar7 = *(long *)puVar4;
                                      }
                                      if (0x12 < *puVar10) {
                                        plVar6[0x16] = lVar7;
                                        thunk_FUN_01f51358();
                                        lVar7 = *(long *)(param_1 + 0x1c);
                                        if ((lVar7 != 0) &&
                                           (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                              (*plVar6 + 0x40)),
                                           lVar8 == 0)) goto LAB_040e1e44;
                                        puVar4 = PTR_DAT_04589120;
                                        if (0x13 < *puVar10) {
                                          plVar6[0x17] = lVar7;
                                          thunk_FUN_01f51358(plVar6 + 0x17,lVar7);
                                          lVar7 = *(long *)puVar4;
                                          if (lVar7 == 0) {
                                            lVar7 = 0;
                                          }
                                          else {
                                            lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                              (*plVar6 + 0x40));
                                            if (lVar7 == 0) goto LAB_040e1e44;
                                            lVar7 = *(long *)puVar4;
                                          }
                                          if (0x14 < *puVar10) {
                                            plVar6[0x18] = lVar7;
                                            thunk_FUN_01f51358();
                                            local_78 = *(undefined4 *)(param_1 + 0x20);
                                            lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,
                                                                       &local_78);
                                            if ((lVar7 != 0) &&
                                               (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                                  (*plVar6 + 0x40)),
                                               lVar8 == 0)) goto LAB_040e1e44;
                                            puVar4 = PTR_DAT_045890b8;
                                            if (0x15 < *puVar10) {
                                              plVar6[0x19] = lVar7;
                                              thunk_FUN_01f51358(plVar6 + 0x19,lVar7);
                                              lVar7 = *(long *)puVar4;
                                              if (lVar7 == 0) {
                                                lVar7 = 0;
                                              }
                                              else {
                                                lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                                  (*plVar6 + 0x40));
                                                if (lVar7 == 0) goto LAB_040e1e44;
                                                lVar7 = *(long *)puVar4;
                                              }
                                              puVar4 = 
                                              Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                              ;
                                              if (0x16 < *puVar10) {
                                                plVar6[0x1a] = lVar7;
                                                thunk_FUN_01f51358();
                                                local_7c[0] = *(undefined1 *)(param_1 + 0x22);
                                                lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,
                                                                           local_7c);
                                                if ((lVar7 != 0) &&
                                                   (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                                      (*plVar6 +
                                                                                      0x40)),
                                                   lVar8 == 0)) goto LAB_040e1e44;
                                                puVar3 = PTR_DAT_04589178;
                                                if (0x17 < *puVar10) {
                                                  plVar6[0x1b] = lVar7;
                                                  thunk_FUN_01f51358(plVar6 + 0x1b,lVar7);
                                                  lVar7 = *(long *)puVar3;
                                                  if (lVar7 == 0) {
                                                    lVar7 = 0;
                                                  }
                                                  else {
                                                    lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                                      (*plVar6 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_040e1e44;
                                                    lVar7 = *(long *)puVar3;
                                                  }
                                                  puVar3 = 
                                                  Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                                                  ;
                                                  if (0x18 < *puVar10) {
                                                    plVar6[0x1c] = lVar7;
                                                    thunk_FUN_01f51358();
                                                    local_80 = *(undefined4 *)(param_1 + 0x24);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_80);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_045890c0;
                                                  if (0x19 < *puVar10) {
                                                    plVar6[0x1d] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x1d,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x1a < *puVar10) {
                                                    plVar6[0x1e] = lVar7;
                                                    thunk_FUN_01f51358();
                                                    local_84 = *(undefined4 *)(param_1 + 0x26);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2
                                                                               ,&local_84);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_045891a0;
                                                  if (0x1b < *puVar10) {
                                                    plVar6[0x1f] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x1f,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x1c < *puVar10) {
                                                    plVar6[0x20] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x20);
                                                    local_88 = *(undefined4 *)(param_1 + 0x28);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2
                                                                               ,&local_88);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_045891a8;
                                                  if (0x1d < *puVar10) {
                                                    plVar6[0x21] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x21,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x1e < *puVar10) {
                                                    plVar6[0x22] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x22);
                                                    local_8c = *(undefined4 *)(param_1 + 0x2a);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2
                                                                               ,&local_8c);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_04589198;
                                                  if (0x1f < *puVar10) {
                                                    plVar6[0x23] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x23,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  puVar1 = PTR_DAT_045890a8;
                                                  if (0x20 < *puVar10) {
                                                    plVar6[0x24] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x24);
                                                    local_a0 = *(undefined8 *)(param_1 + 0x3c);
                                                    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
                                                    uStack_b0 = *(undefined8 *)(param_1 + 0x34);
                                                    uStack_b8 = *(undefined8 *)(param_1 + 0x30);
                                                    local_c0 = *(undefined8 *)(param_1 + 0x2c);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1
                                                                               ,&local_c0);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar5 = PTR_DAT_04589118;
                                                  if (0x21 < *puVar10) {
                                                    plVar6[0x25] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x25,lVar7);
                                                    lVar7 = *(long *)puVar5;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar5;
                                                  }
                                                  if (0x22 < *puVar10) {
                                                    plVar6[0x26] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x26);
                                                    local_d0 = *(undefined8 *)(param_1 + 0x50);
                                                    uStack_e8 = *(undefined8 *)(param_1 + 0x44);
                                                    local_f0 = *(undefined8 *)(param_1 + 0x40);
                                                    uStack_d8 = *(undefined8 *)(param_1 + 0x4c);
                                                    uStack_e0 = *(undefined8 *)(param_1 + 0x48);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1
                                                                               ,&local_f0);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar5 = PTR_DAT_045890e8;
                                                  if (0x23 < *puVar10) {
                                                    plVar6[0x27] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x27,lVar7);
                                                    lVar7 = *(long *)puVar5;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar5;
                                                  }
                                                  if (0x24 < *puVar10) {
                                                    plVar6[0x28] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x28);
                                                    local_100 = *(undefined8 *)(param_1 + 100);
                                                    uStack_108 = *(undefined8 *)(param_1 + 0x60);
                                                    uStack_110 = *(undefined8 *)(param_1 + 0x5c);
                                                    uStack_118 = *(undefined8 *)(param_1 + 0x58);
                                                    local_120 = *(undefined8 *)(param_1 + 0x54);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1
                                                                               ,&local_120);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar5 = PTR_DAT_04589128;
                                                  if (0x25 < *puVar10) {
                                                    plVar6[0x29] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x29,lVar7);
                                                    lVar7 = *(long *)puVar5;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar5;
                                                  }
                                                  if (0x26 < *puVar10) {
                                                    plVar6[0x2a] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x2a);
                                                    local_130 = *(undefined8 *)(param_1 + 0x78);
                                                    uStack_148 = *(undefined8 *)(param_1 + 0x6c);
                                                    local_150 = *(undefined8 *)(param_1 + 0x68);
                                                    uStack_138 = *(undefined8 *)(param_1 + 0x74);
                                                    uStack_140 = *(undefined8 *)(param_1 + 0x70);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1
                                                                               ,&local_150);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_04589158;
                                                  if (0x27 < *puVar10) {
                                                    plVar6[0x2b] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x2b,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  puVar1 = 
                                                  Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                                                  ;
                                                  if (0x28 < *puVar10) {
                                                    plVar6[0x2c] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x2c);
                                                    local_158 = *(undefined4 *)(param_1 + 0x80);
                                                    local_160 = *(undefined8 *)(param_1 + 0x7c);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1
                                                                               ,&local_160);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar5 = PTR_DAT_045890c8;
                                                  if (0x29 < *puVar10) {
                                                    plVar6[0x2d] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x2d,lVar7);
                                                    lVar7 = *(long *)puVar5;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar5;
                                                  }
                                                  if (0x2a < *puVar10) {
                                                    plVar6[0x2e] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x2e);
                                                    local_168 = *(undefined4 *)(param_1 + 0x86);
                                                    local_170 = *(undefined8 *)(param_1 + 0x82);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1
                                                                               ,&local_170);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar5 = PTR_DAT_04589170;
                                                  if (0x2b < *puVar10) {
                                                    plVar6[0x2f] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x2f,lVar7);
                                                    lVar7 = *(long *)puVar5;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar5;
                                                  }
                                                  if (0x2c < *puVar10) {
                                                    plVar6[0x30] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x30);
                                                    local_178 = *(undefined4 *)(param_1 + 0x8c);
                                                    local_180 = *(undefined8 *)(param_1 + 0x88);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1
                                                                               ,&local_180);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar5 = PTR_DAT_045891c0;
                                                  if (0x2d < *puVar10) {
                                                    plVar6[0x31] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x31,lVar7);
                                                    lVar7 = *(long *)puVar5;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar5;
                                                  }
                                                  if (0x2e < *puVar10) {
                                                    plVar6[0x32] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x32);
                                                    local_188 = *(undefined4 *)(param_1 + 0x92);
                                                    local_190 = *(undefined8 *)(param_1 + 0x8e);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1
                                                                               ,&local_190);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = 
                                                  Method_UnityEngine_Rendering_VolumeParameter_GetValue<AnimationCurve>__
                                                  ;
                                                  if (0x2f < *puVar10) {
                                                    plVar6[0x33] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x33,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x30 < *puVar10) {
                                                    plVar6[0x34] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x34);
                                                    local_194 = *(undefined4 *)(param_1 + 0x94);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_194);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_045891b0;
                                                  if (0x31 < *puVar10) {
                                                    plVar6[0x35] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x35,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x32 < *puVar10) {
                                                    plVar6[0x36] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x36);
                                                    local_198 = *(undefined4 *)(param_1 + 0x96);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_198);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_045891c8;
                                                  if (0x33 < *puVar10) {
                                                    plVar6[0x37] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x37,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x34 < *puVar10) {
                                                    plVar6[0x38] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x38);
                                                    local_19c = *(undefined4 *)(param_1 + 0x98);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_19c);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_045890d8;
                                                  if (0x35 < *puVar10) {
                                                    plVar6[0x39] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x39,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x36 < *puVar10) {
                                                    plVar6[0x3a] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x3a);
                                                    local_1a0 = *(undefined4 *)(param_1 + 0x9a);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_1a0);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_045891b8;
                                                  if (0x37 < *puVar10) {
                                                    plVar6[0x3b] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x3b,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x38 < *puVar10) {
                                                    plVar6[0x3c] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x3c);
                                                    local_1a4 = *(undefined4 *)(param_1 + 0x9c);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_1a4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_04589130;
                                                  if (0x39 < *puVar10) {
                                                    plVar6[0x3d] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x3d,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x3a < *puVar10) {
                                                    plVar6[0x3e] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x3e);
                                                    local_1a8 = *(undefined4 *)(param_1 + 0x9e);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_1a8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_04589108;
                                                  if (0x3b < *puVar10) {
                                                    plVar6[0x3f] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x3f,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x3c < *puVar10) {
                                                    plVar6[0x40] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x40);
                                                    local_1ac = *(undefined4 *)(param_1 + 0xa0);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_1ac);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_045890f8;
                                                  if (0x3d < *puVar10) {
                                                    plVar6[0x41] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x41,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x3e < *puVar10) {
                                                    plVar6[0x42] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x42);
                                                    local_1b0 = *(undefined4 *)(param_1 + 0xa2);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_1b0);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_04589148;
                                                  if (0x3f < *puVar10) {
                                                    plVar6[0x43] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x43,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x40 < *puVar10) {
                                                    plVar6[0x44] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x44);
                                                    local_1b4 = *(undefined4 *)(param_1 + 0xa4);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_1b4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = 
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass12_0_<DOScale>b__1__
                                                  ;
                                                  if (0x41 < *puVar10) {
                                                    plVar6[0x45] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x45,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x42 < *puVar10) {
                                                    plVar6[0x46] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x46);
                                                    local_1b8 = *(undefined4 *)(param_1 + 0xa6);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_1b8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar3 = 
                                                  Method_UnityEngine_Rendering_Universal_ForwardRenderer_SetupLights__
                                                  ;
                                                  if (0x43 < *puVar10) {
                                                    plVar6[0x47] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x47,lVar7);
                                                    lVar7 = *(long *)puVar3;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar3;
                                                  }
                                                  puVar3 = 
                                                  Method_Drawing_DrawingUtilities_BoundsFrom__;
                                                  if (0x44 < *puVar10) {
                                                    plVar6[0x48] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x48);
                                                    local_1c0[0] = *(undefined4 *)(param_1 + 0xa8);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,local_1c0);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_04589100;
                                                  if (0x45 < *puVar10) {
                                                    plVar6[0x49] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x49,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x46 < *puVar10) {
                                                    plVar6[0x4a] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x4a);
                                                    local_1c8[0] = *(undefined4 *)(param_1 + 0xaa);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,local_1c8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_04589138;
                                                  if (0x47 < *puVar10) {
                                                    plVar6[0x4b] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x4b,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x48 < *puVar10) {
                                                    plVar6[0x4c] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x4c);
                                                    local_1cc = *(undefined4 *)(param_1 + 0xac);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2
                                                                               ,&local_1cc);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_04589168;
                                                  if (0x49 < *puVar10) {
                                                    plVar6[0x4d] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x4d,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x4a < *puVar10) {
                                                    plVar6[0x4e] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x4e);
                                                    local_1d0 = *(undefined4 *)(param_1 + 0xae);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_1d0);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar1 = PTR_DAT_045890f0;
                                                  if (0x4b < *puVar10) {
                                                    plVar6[0x4f] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x4f,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar1;
                                                  }
                                                  if (0x4c < *puVar10) {
                                                    plVar6[0x50] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x50);
                                                    local_1d4 = *(undefined4 *)(param_1 + 0xb0);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2
                                                                               ,&local_1d4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar2 = PTR_DAT_04589110;
                                                  if (0x4d < *puVar10) {
                                                    plVar6[0x51] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x51,lVar7);
                                                    lVar7 = *(long *)puVar2;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar2;
                                                  }
                                                  if (0x4e < *puVar10) {
                                                    plVar6[0x52] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x52);
                                                    local_1d8 = *(undefined4 *)(param_1 + 0xb2);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3
                                                                               ,&local_1d8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar2 = PTR_DAT_04589188;
                                                  if (0x4f < *puVar10) {
                                                    plVar6[0x53] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x53,lVar7);
                                                    lVar7 = *(long *)puVar2;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar2;
                                                  }
                                                  puVar2 = PTR_DAT_04589098;
                                                  if (0x50 < *puVar10) {
                                                    plVar6[0x54] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x54);
                                                    local_1e0 = *(undefined4 *)(param_1 + 0xbc);
                                                    uStack_1e8 = *(undefined8 *)(param_1 + 0xb8);
                                                    local_1f0 = *(undefined8 *)(param_1 + 0xb4);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2
                                                                               ,&local_1f0);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar2 = 
                                                  Method_System_Globalization_JapaneseCalendar__ctor__
                                                  ;
                                                  if (0x51 < *puVar10) {
                                                    plVar6[0x55] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x55,lVar7);
                                                    lVar7 = *(long *)puVar2;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar2;
                                                  }
                                                  puVar2 = PTR_DAT_04589090;
                                                  if (0x52 < *puVar10) {
                                                    plVar6[0x56] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x56);
                                                    local_1f4 = *(undefined4 *)(param_1 + 0xbe);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2
                                                                               ,&local_1f4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar2 = PTR_DAT_04589180;
                                                  if (0x53 < *puVar10) {
                                                    plVar6[0x57] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x57,lVar7);
                                                    lVar7 = *(long *)puVar2;
                                                    if (lVar7 == 0) {
                                                      lVar7 = 0;
                                                    }
                                                    else {
                                                      lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_040e1e44;
                                                  lVar7 = *(long *)puVar2;
                                                  }
                                                  if (0x54 < *puVar10) {
                                                    plVar6[0x58] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x58);
                                                    local_1f8[0] = *(undefined1 *)(param_1 + 0xc0);
                                                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar4
                                                                               ,local_1f8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_040e1e44;
                                                  puVar2 = PTR_DAT_04589150;
                                                  if (0x55 < *puVar10) {
                                                    plVar6[0x59] = lVar7;
                                                    thunk_FUN_01f51358(plVar6 + 0x59,lVar7);
                                                    FUN_0340f378(*(undefined8 *)puVar2,plVar6,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


