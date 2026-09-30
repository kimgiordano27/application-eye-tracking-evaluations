/*
FUNCTION_NAME: d1$$a
ENTRY_POINT: 01bfac1c
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


void d1__a(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  long unaff_x29;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
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
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    thunk_FUN_01ac7298();
    do {
      uVar1 = FUN_03923030(unaff_x24,0);
      uVar10 = (uint)param_3;
      if ((uVar1 & 1) == 0) {
                    /* try { // try from 01bfaf48 to 01cfaf73 has its CatchHandler @ 01bfb050 */
        uVar3 = FUN_02ee6c30(*(undefined8 *)
                              Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
                             ,unaff_x23,
                             *(undefined8 *)
                              Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass46_0_<GetVoiceSettingsFields>b__0__
                             ,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
                    /* try { // try from 01bfaf78 to 01cfaf83 has its CatchHandler @ 01bfb02c */
        FUN_038f336c(uVar3,0);
      }
      else {
        lVar2 = FUN_0391c27c();
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01bfaea4 with catch @ 01bfb040 */
          FUN_01b48178();
        }
        uStack0000000000000050 = FUN_03928d34(lVar2,0);
        uStack0000000000000054 = (undefined4)param_2;
        in_stack_00000058 = uVar10;
        uVar3 = thunk_FUN_01afa70c(*unaff_x21,&stack0x00000050);
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar8 = FUN_0327f108(unaff_x24,0);
        in_stack_00000020 = CONCAT44((int)param_2,uVar8);
        uVar4 = thunk_FUN_01afa70c(*(undefined8 *)
                                    Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                   ,&stack0x00000020);
        uVar3 = FUN_02ee7120(*(undefined8 *)
                              Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__0__
                             ,uVar3,uVar4,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2acc(uVar3,0);
        uVar3 = FUN_0391c27c();
        uVar4 = FUN_0327f108(unaff_x24,0);
        uVar1 = param_2;
        lVar2 = FUN_0391c27c();
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01bfaecc with catch @ 01bfb030 */
          FUN_01b48178();
        }
        uVar5 = FUN_03928d34(lVar2,0);
        FUN_01bfb29c(uVar4,param_2,uVar1,uVar5,uVar3,&stack0x00000090,&stack0x00000080,
                     &stack0x00000070);
        in_stack_00000040 = in_stack_00000090;
        in_stack_00000048 = in_stack_00000098;
        uVar3 = thunk_FUN_01afa70c(*unaff_x21,&stack0x00000040);
        in_stack_00000030 = in_stack_00000070;
        in_stack_00000038 = in_stack_00000078;
        uVar4 = thunk_FUN_01afa70c(*unaff_x21,&stack0x00000030);
        uVar3 = FUN_02ee7120(*(undefined8 *)
                              Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass33_0_<RequestDownloadFromWeb>b__0__
                             ,uVar3,uVar4,0);
        FUN_038f2acc(uVar3,0);
        param_3 = (ulong)in_stack_00000098;
                    /* try { // try from 01bfad98 to 01cfadcb has its CatchHandler @ 01bfad98
                       catch() { ... } // from try @ 01bfad98 with catch @ 01bfad98
                       catch() { ... } // from try @ 01bfb014 with catch @ 01bfad98 */
        FUN_01bfa53c(in_stack_00000090 & 0xffffffff,in_stack_00000090._4_4_,param_3,
                     uStack0000000000000080,uStack0000000000000084,uStack0000000000000088,
                     uStack000000000000008c);
      }
      do {
        while( true ) {
          do {
            uVar1 = FUN_027593a0(&stack0x000000a0,*unaff_x26);
            uVar3 = in_stack_000000b8;
            unaff_x23 = in_stack_000000b0;
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
                    /* catch() { ... } // from try @ 01bfaf78 with catch @ 01bfb02c */
              FUN_01b48178();
            }
            uVar1 = FUN_03284548();
          } while ((uVar1 & 1) == 0);
          if (*(char *)(unaff_x27 + 599) == '\0') {
            thunk_FUN_01ad9084();
            *(undefined1 *)(unaff_x27 + 599) = unaff_w28;
          }
          in_stack_00000090 = **(ulong **)(*unaff_x21 + 0xb8);
          in_stack_00000098 = (uint)(*(ulong **)(*unaff_x21 + 0xb8))[1];
          if (*(char *)(unaff_x29 + 0x256) == '\0') {
            thunk_FUN_01ad9084();
            cVar7 = *(char *)(unaff_x27 + 599);
            *(undefined1 *)(unaff_x29 + 0x256) = unaff_w28;
          }
          else {
            cVar7 = '\x01';
          }
          _uStack0000000000000088 = (*(undefined8 **)(*unaff_x22 + 0xb8))[1];
          _uStack0000000000000080 = **(undefined8 **)(*unaff_x22 + 0xb8);
          if (cVar7 == '\0') {
            thunk_FUN_01ad9084();
            *(undefined1 *)(unaff_x27 + 599) = unaff_w28;
          }
          in_stack_00000070 = **(ulong **)(*unaff_x21 + 0xb8);
          in_stack_00000078 = (uint)(*(ulong **)(*unaff_x21 + 0xb8))[1];
          param_2 = (ulong)in_stack_00000078;
          if ((int)uVar3 != 0) break;
          lVar2 = FUN_01e8a9f8();
          uVar8 = (undefined4)param_2;
                    /* try { // try from 01bfadcc to 01cfadd7 has its CatchHandler @ 01bfb090 */
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar1 = FUN_03923030(lVar2,0);
          uVar10 = (uint)param_3;
                    /* try { // try from 01bfadec to 01cfadf7 has its CatchHandler @ 01bfb078 */
          if ((uVar1 & 1) == 0) {
                    /* try { // try from 01bfafa0 to 01cfafa7 has its CatchHandler @ 01bfb014 */
            uVar3 = FUN_02ee6c30(*(undefined8 *)
                                  Method_System_Threading_Tasks_Task_<>c_<_cctor>b__271_0__,
                                 unaff_x23,
                                 *(undefined8 *)
                                  Method_Meta_Voice_Samples_TTSVoices_TTSSpeakerInput_<SpeakAsync>d__18_System_Collections_IEnumerator_Reset__
                                 ,0);
                    /* try { // try from 01bfafb8 to 01cfb013 has its CatchHandler @ 01bfb050 */
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f336c(uVar3,0);
          }
          else {
            lVar6 = FUN_0391c27c();
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uStack0000000000000050 = FUN_03928d34(lVar6,0);
                    /* try { // try from 01bfae10 to 01cfae1f has its CatchHandler @ 01bfb048 */
            uStack0000000000000054 = uVar8;
            in_stack_00000058 = uVar10;
            uVar3 = thunk_FUN_01afa70c(*unaff_x21,&stack0x00000050);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
                    /* try { // try from 01bfae28 to 01cfae2f has its CatchHandler @ 01bfb044 */
            uVar9 = FUN_03283608(lVar2,0);
            in_stack_00000040 = CONCAT44(uVar8,uVar9);
            in_stack_00000048 = uVar10;
                    /* try { // try from 01bfae40 to 01cfae4b has its CatchHandler @ 01bfb068 */
            uVar4 = thunk_FUN_01afa70c(*unaff_x21,&stack0x00000040);
            uVar3 = FUN_02ee7120(*(undefined8 *)
                                  Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__1__
                                 ,uVar3,uVar4,0);
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f2acc(uVar3,0);
            uVar3 = FUN_0391c27c();
                    /* try { // try from 01bfae90 to 01cfae9f has its CatchHandler @ 01bfb04c */
            uVar4 = FUN_03283608(lVar2,0);
                    /* try { // try from 01bfaea4 to 01cfaeaf has its CatchHandler @ 01bfb040 */
            FUN_01bfb174(uVar4,uVar3,&stack0x00000090,&stack0x00000080,&stack0x00000070);
            in_stack_00000030 = in_stack_00000090;
            in_stack_00000038 = in_stack_00000098;
            uVar3 = thunk_FUN_01afa70c(*unaff_x21,&stack0x00000030);
                    /* try { // try from 01bfaecc to 01cfaed3 has its CatchHandler @ 01bfb030 */
            in_stack_00000020 = in_stack_00000070;
            in_stack_00000028 = in_stack_00000078;
                    /* try { // try from 01bfaee4 to 01cfaf3f has its CatchHandler @ 01bfb04c */
            uVar4 = thunk_FUN_01afa70c(*unaff_x21,&stack0x00000020);
            uVar3 = FUN_02ee7120(*(undefined8 *)
                                  Method_Meta_Voice_Samples_TTSVoices_TTSSpeakerVoiceSelect_<>c_<RefreshDropdown>b__5_0__
                                 ,uVar3,uVar4,0);
            FUN_038f2acc(uVar3,0);
            param_3 = (ulong)in_stack_00000098;
            FUN_01bfa53c(in_stack_00000090 & 0xffffffff,in_stack_00000090._4_4_,param_3,
                         uStack0000000000000080,uStack0000000000000084,uStack0000000000000088,
                         uStack000000000000008c);
          }
        }
      } while ((int)uVar3 != 1);
      unaff_x24 = FUN_01e8a9f8();
    } while (*(int *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ + 0xe0
                     ) != 0);
  } while( true );
}


