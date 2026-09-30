/*
FUNCTION_NAME: d1$$l
ENTRY_POINT: 01bfab18
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_7
*/


void d1__l(undefined8 param_1,undefined1 param_2 [16],ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  long unaff_x22;
  long *plVar11;
  long unaff_x25;
  long *plVar12;
  undefined8 *unaff_x26;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong in_stack_00000020;
  uint in_stack_00000028;
  ulong in_stack_00000030;
  uint in_stack_00000038;
  ulong in_stack_00000040;
  uint in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  uint in_stack_00000058;
  ulong in_stack_00000070;
  uint in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  ulong in_stack_00000090;
  uint in_stack_00000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  
  uStack00000000000000b8 = param_2._8_8_;
  uStack00000000000000b0 = param_2._0_8_;
  plVar10 = *(long **)(unaff_x21 + 0x110);
  plVar11 = *(long **)(unaff_x22 + 0xd00);
  plVar12 = *(long **)(unaff_x25 + 0xf00);
  uStack00000000000000a0 = param_1;
  while( true ) {
    while( true ) {
      do {
        while( true ) {
          do {
            uVar1 = FUN_027593a0(&stack0x000000a0,*unaff_x26);
            uVar6 = uStack00000000000000b8;
            uVar5 = uStack00000000000000b0;
            if ((uVar1 & 1) == 0) {
              FUN_0275939c(&stack0x000000a0,
                           *(undefined8 *)
                            Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakQueuedAsync>d__75_System_Collections_IEnumerator_Reset__
                          );
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_03923a90();
              return;
            }
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar1 = FUN_03284548();
          } while ((uVar1 & 1) == 0);
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(plVar10);
            DAT_03fed257 = '\x01';
          }
          in_stack_00000090 = **(ulong **)(*plVar10 + 0xb8);
          in_stack_00000098 = (uint)(*(ulong **)(*plVar10 + 0xb8))[1];
          if (DAT_03fed256 == '\0') {
            thunk_FUN_01ad9084(plVar11);
            DAT_03fed256 = '\x01';
            cVar8 = DAT_03fed257;
          }
          else {
            cVar8 = '\x01';
          }
          puVar9 = *(undefined8 **)(*plVar11 + 0xb8);
          _uStack0000000000000088 = puVar9[1];
          _uStack0000000000000080 = *puVar9;
          if (cVar8 == '\0') {
            thunk_FUN_01ad9084(plVar10);
            DAT_03fed257 = '\x01';
          }
          in_stack_00000070 = **(ulong **)(*plVar10 + 0xb8);
          in_stack_00000078 = (uint)(*(ulong **)(*plVar10 + 0xb8))[1];
          uVar1 = (ulong)in_stack_00000078;
          if ((int)uVar6 != 0) break;
          lVar2 = FUN_01e8a9f8();
          uVar13 = (undefined4)uVar1;
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar1 = FUN_03923030(lVar2,0);
          uVar15 = (uint)param_3;
          if ((uVar1 & 1) == 0) {
            uVar5 = FUN_02ee6c30(*(undefined8 *)
                                  Method_System_Threading_Tasks_Task_<>c_<_cctor>b__271_0__,uVar5,
                                 *(undefined8 *)
                                  Method_Meta_Voice_Samples_TTSVoices_TTSSpeakerInput_<SpeakAsync>d__18_System_Collections_IEnumerator_Reset__
                                 ,0);
            if (*(int *)(*plVar12 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f336c(uVar5,0);
          }
          else {
            lVar4 = FUN_0391c27c();
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uStack0000000000000050 = FUN_03928d34(lVar4,0);
            uStack0000000000000054 = uVar13;
            in_stack_00000058 = uVar15;
            uVar5 = thunk_FUN_01afa70c(*plVar10,&stack0x00000050);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar14 = FUN_03283608(lVar2,0);
            in_stack_00000040 = CONCAT44(uVar13,uVar14);
            in_stack_00000048 = uVar15;
            uVar6 = thunk_FUN_01afa70c(*plVar10,&stack0x00000040);
            uVar5 = FUN_02ee7120(*(undefined8 *)
                                  Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__1__
                                 ,uVar5,uVar6,0);
            if (*(int *)(*plVar12 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f2acc(uVar5,0);
            uVar5 = FUN_0391c27c();
            uVar6 = FUN_03283608(lVar2,0);
            FUN_01bfb174(uVar6,uVar5,&stack0x00000090,&stack0x00000080,&stack0x00000070);
            in_stack_00000030 = in_stack_00000090;
            in_stack_00000038 = in_stack_00000098;
            uVar5 = thunk_FUN_01afa70c(*plVar10,&stack0x00000030);
            in_stack_00000020 = in_stack_00000070;
            in_stack_00000028 = in_stack_00000078;
            uVar6 = thunk_FUN_01afa70c(*plVar10,&stack0x00000020);
            uVar5 = FUN_02ee7120(*(undefined8 *)
                                  Method_Meta_Voice_Samples_TTSVoices_TTSSpeakerVoiceSelect_<>c_<RefreshDropdown>b__5_0__
                                 ,uVar5,uVar6,0);
            FUN_038f2acc(uVar5,0);
            param_3 = (ulong)in_stack_00000098;
            FUN_01bfa53c(in_stack_00000090 & 0xffffffff,in_stack_00000090._4_4_,param_3,
                         uStack0000000000000080,uStack0000000000000084,uStack0000000000000088,
                         uStack000000000000008c);
          }
        }
      } while ((int)uVar6 != 1);
      lVar2 = FUN_01e8a9f8();
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(lVar2,0);
      uVar15 = (uint)param_3;
      if ((uVar3 & 1) != 0) break;
      uVar5 = FUN_02ee6c30(*(undefined8 *)
                            Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
                           ,uVar5,*(undefined8 *)
                                   Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass46_0_<GetVoiceSettingsFields>b__0__
                           ,0);
      if (*(int *)(*plVar12 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f336c(uVar5,0);
    }
    lVar4 = FUN_0391c27c();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uStack0000000000000050 = FUN_03928d34(lVar4,0);
    uStack0000000000000054 = (undefined4)uVar1;
    in_stack_00000058 = uVar15;
    uVar5 = thunk_FUN_01afa70c(*plVar10,&stack0x00000050);
    if (lVar2 == 0) break;
    uVar13 = FUN_0327f108(lVar2,0);
    in_stack_00000020 = CONCAT44((int)uVar1,uVar13);
    uVar6 = thunk_FUN_01afa70c(*(undefined8 *)
                                Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__,
                               &stack0x00000020);
    uVar5 = FUN_02ee7120(*(undefined8 *)
                          Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__0__
                         ,uVar5,uVar6,0);
    if (*(int *)(*plVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2acc(uVar5,0);
    uVar5 = FUN_0391c27c();
    uVar6 = FUN_0327f108(lVar2,0);
    uVar3 = uVar1;
    lVar2 = FUN_0391c27c();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar7 = FUN_03928d34(lVar2,0);
    FUN_01bfb29c(uVar6,uVar1,uVar3,uVar7,uVar5,&stack0x00000090,&stack0x00000080,&stack0x00000070);
    in_stack_00000040 = in_stack_00000090;
    in_stack_00000048 = in_stack_00000098;
    uVar5 = thunk_FUN_01afa70c(*plVar10,&stack0x00000040);
    in_stack_00000030 = in_stack_00000070;
    in_stack_00000038 = in_stack_00000078;
    uVar6 = thunk_FUN_01afa70c(*plVar10,&stack0x00000030);
    uVar5 = FUN_02ee7120(*(undefined8 *)
                          Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass33_0_<RequestDownloadFromWeb>b__0__
                         ,uVar5,uVar6,0);
    FUN_038f2acc(uVar5,0);
    param_3 = (ulong)in_stack_00000098;
    FUN_01bfa53c(in_stack_00000090 & 0xffffffff,in_stack_00000090._4_4_,param_3,
                 uStack0000000000000080,uStack0000000000000084,uStack0000000000000088,
                 uStack000000000000008c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


