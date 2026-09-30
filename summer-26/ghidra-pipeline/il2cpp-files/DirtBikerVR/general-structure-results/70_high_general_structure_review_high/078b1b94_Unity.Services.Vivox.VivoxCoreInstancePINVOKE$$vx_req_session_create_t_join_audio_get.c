/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_create_t_join_audio_get
ENTRY_POINT: 078b1b94
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_create_t_join_audio_get(void)

{
  long lVar1;
  ulong uVar2;
  int in_w8;
  undefined4 *unaff_x19;
  long unaff_x22;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  uStack0000000000000010 = 0;
  if (in_w8 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_sessiongroup_terminate_t();
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar1 = FUN_078adc68();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 = FUN_067c4bec(lVar1,0);
    uVar2 = FUN_0666e8e0(&stack0x00000018,0);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      FUN_04416fb8(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  FUN_0666e9a8(&stack0x00000018,0);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(unaff_x22 + 0x18) != 0) {
    FUN_0587def8(*(long *)(unaff_x22 + 0x18),
                 *(undefined8 *)
                  System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo);
    *unaff_x19 = 0xfffffffe;
    FUN_0666f0cc(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


