/*
FUNCTION_NAME: FUN_01bfa968
ENTRY_POINT: 01bfa968
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_21;telemetry_or_network_hits_15
*/


void FUN_01bfa968(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined8 local_110;
  uint local_108;
  ulong local_100;
  uint local_f8;
  undefined8 local_f0;
  uint local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar1 = Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__0__;
  if ((DAT_03fed339 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__4__);
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__5__);
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__0__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakQueuedAsync>d__75_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakQueuedAsync>d__99_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<WaitForCompletion>d__54_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<WaitForPlaybackComplete>d__108_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    thunk_FUN_01ad9084(
                      Method_Meta_Voice_Samples_TTSVoices_TTSSpeakerInput_<SpeakAsync>d__18_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_Voice_Samples_TTSVoices_TTSSpeakerVoiceSelect_<>c_<RefreshDropdown>b__5_0__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__1__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass33_0_<RequestDownloadFromWeb>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass46_0_<GetVoiceSettingsFields>b__0__
                      );
    thunk_FUN_01ad9084(Method_System_Threading_Tasks_Task_<>c_<_cctor>b__271_0__);
    DAT_03fed339 = 1;
  }
  local_98 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  lVar5 = FUN_01e8a9f8(param_4,*(undefined8 *)puVar1);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar6 = FUN_03923030(lVar5,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01bfae28 with catch @ 01bfb044 */
      FUN_01b48178();
    }
    FUN_02c7b318(&local_e0,*(long *)(param_4 + 0x30),
                 *(undefined8 *)
                  Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<WaitForPlaybackComplete>d__108_System_Collections_IEnumerator_Reset__
                );
    puVar4 = 
    Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakQueuedAsync>d__99_System_Collections_IEnumerator_Reset__
    ;
    puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    puVar2 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
    uStack_78 = uStack_c8;
    local_80 = uStack_d0;
    while (uVar6 = FUN_027593a0(&local_90,*(undefined8 *)puVar4), uVar11 = uStack_78,
          uVar10 = local_80, (uVar6 & 1) != 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar6 = FUN_03284548(lVar5,local_80,0);
      if ((uVar6 & 1) != 0) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(puVar3);
          DAT_03fed257 = '\x01';
        }
        local_a0 = **(ulong **)(*(long *)puVar3 + 0xb8);
        local_98 = (uint)(*(ulong **)(*(long *)puVar3 + 0xb8))[1];
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(puVar1);
          DAT_03fed256 = '\x01';
          cVar13 = DAT_03fed257;
        }
        else {
          cVar13 = '\x01';
        }
        puVar14 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        uStack_a8 = puVar14[1];
        local_b0 = *puVar14;
        if (cVar13 == '\0') {
          thunk_FUN_01ad9084(puVar3);
          DAT_03fed257 = '\x01';
        }
        local_c0 = **(ulong **)(*(long *)puVar3 + 0xb8);
        local_b8 = (uint)(*(ulong **)(*(long *)puVar3 + 0xb8))[1];
        uVar6 = (ulong)local_b8;
        if ((int)uVar11 == 0) {
          lVar7 = FUN_01e8a9f8(param_4,*(undefined8 *)
                                        Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__5__
                              );
          uVar15 = (undefined4)uVar6;
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_03923030(lVar7,0);
          uVar17 = (uint)param_3;
          if ((uVar6 & 1) == 0) {
            uVar10 = FUN_02ee6c30(*(undefined8 *)
                                   Method_System_Threading_Tasks_Task_<>c_<_cctor>b__271_0__,uVar10,
                                  *(undefined8 *)
                                   Method_Meta_Voice_Samples_TTSVoices_TTSSpeakerInput_<SpeakAsync>d__18_System_Collections_IEnumerator_Reset__
                                  ,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f336c(uVar10,0);
          }
          else {
            lVar9 = FUN_0391c27c(param_4,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            local_e0 = FUN_03928d34(lVar9,0);
            uStack_dc = uVar15;
            uStack_d8 = uVar17;
            uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_e0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar16 = FUN_03283608(lVar7,0);
            local_f0 = CONCAT44(uVar15,uVar16);
            local_e8 = uVar17;
            uVar11 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_f0);
            uVar10 = FUN_02ee7120(*(undefined8 *)
                                   Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__1__
                                  ,uVar10,uVar11,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f2acc(uVar10,0);
            uVar10 = FUN_0391c27c(param_4,0);
            uVar11 = FUN_03283608(lVar7,0);
            FUN_01bfb174(uVar11,uVar10,&local_a0,&local_b0,&local_c0);
            local_100 = local_a0;
            local_f8 = local_98;
            uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_100);
            local_110 = local_c0;
            local_108 = local_b8;
            uVar11 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_110);
            uVar10 = FUN_02ee7120(*(undefined8 *)
                                   Method_Meta_Voice_Samples_TTSVoices_TTSSpeakerVoiceSelect_<>c_<RefreshDropdown>b__5_0__
                                  ,uVar10,uVar11,0);
            FUN_038f2acc(uVar10,0);
            param_3 = (ulong)local_98;
            FUN_01bfa53c(local_a0 & 0xffffffff,local_a0._4_4_,param_3,(undefined4)local_b0,
                         local_b0._4_4_,(undefined4)uStack_a8,uStack_a8._4_4_,param_4,
                         *(undefined8 *)(param_4 + 0x20));
          }
        }
        else if ((int)uVar11 == 1) {
          lVar7 = FUN_01e8a9f8(param_4,*(undefined8 *)
                                        Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__4__
                              );
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar8 = FUN_03923030(lVar7,0);
          uVar17 = (uint)param_3;
          if ((uVar8 & 1) == 0) {
            uVar10 = FUN_02ee6c30(*(undefined8 *)
                                   Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
                                  ,uVar10,*(undefined8 *)
                                           Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass46_0_<GetVoiceSettingsFields>b__0__
                                  ,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f336c(uVar10,0);
          }
          else {
            lVar9 = FUN_0391c27c(param_4,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            local_e0 = FUN_03928d34(lVar9,0);
            uStack_dc = (undefined4)uVar6;
            uStack_d8 = uVar17;
            uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_e0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar15 = FUN_0327f108(lVar7,0);
            local_110 = CONCAT44((int)uVar6,uVar15);
            uVar11 = thunk_FUN_01afa70c(*(undefined8 *)
                                         Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                        ,&local_110);
            uVar10 = FUN_02ee7120(*(undefined8 *)
                                   Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__0__
                                  ,uVar10,uVar11,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f2acc(uVar10,0);
            uVar10 = FUN_0391c27c(param_4,0);
            uVar11 = FUN_0327f108(lVar7,0);
            uVar8 = uVar6;
            lVar7 = FUN_0391c27c(param_4,0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar12 = FUN_03928d34(lVar7,0);
            FUN_01bfb29c(uVar11,uVar6,uVar8,uVar12,uVar10,&local_a0,&local_b0,&local_c0);
            local_f0 = local_a0;
            local_e8 = local_98;
            uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_f0);
            local_100 = local_c0;
            local_f8 = local_b8;
            uVar11 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_100);
            uVar10 = FUN_02ee7120(*(undefined8 *)
                                   Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass33_0_<RequestDownloadFromWeb>b__0__
                                  ,uVar10,uVar11,0);
            FUN_038f2acc(uVar10,0);
            param_3 = (ulong)local_98;
            FUN_01bfa53c(local_a0 & 0xffffffff,local_a0._4_4_,param_3,(undefined4)local_b0,
                         local_b0._4_4_,(undefined4)uStack_a8,uStack_a8._4_4_,param_4,
                         *(undefined8 *)(param_4 + 0x28));
          }
        }
      }
    }
    FUN_0275939c(&local_90,
                 *(undefined8 *)
                  Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakQueuedAsync>d__75_System_Collections_IEnumerator_Reset__
                );
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03923a90(param_4,0);
  }
  return;
}


