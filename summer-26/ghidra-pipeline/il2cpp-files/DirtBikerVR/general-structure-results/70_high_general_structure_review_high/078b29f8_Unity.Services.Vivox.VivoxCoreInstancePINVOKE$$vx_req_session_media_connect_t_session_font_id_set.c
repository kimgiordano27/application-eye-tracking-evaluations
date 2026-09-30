/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_connect_t_session_font_id_set
ENTRY_POINT: 078b29f8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_connect_t_session_font_id_set
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *unaff_x19;
  undefined8 in_stack_00000058;
  
  FUN_066b5934();
  if (*(int *)(*(long *)PTR_DAT_08491378 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_067b3088(&stack0x00000028,unaff_x19 + 0x10);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0xc) + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if (lVar4 != 0) {
    in_stack_00000058 =
         FUN_058b71ec(lVar4,*(undefined8 *)
                             System_Collections_Generic_List<OccluderSubviewUpdate>_TypeInfo);
    uVar2 = FUN_0587c6c4(&stack0x00000058,
                         *(undefined8 *)System_Collections_Generic_List<OccluderContext>_TypeInfo);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000058;
      thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
      if (*(int *)(*(long *)System_Collections_Generic_List<NetworkClient>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe85f8(unaff_x19 + 2,&stack0x00000058);
    }
    else {
      uVar3 = FUN_0587c704(&stack0x00000058,
                           *(undefined8 *)System_Collections_Generic_List<ObjectId>_TypeInfo);
      puVar1 = System_Collections_Generic_List<NetworkClient>_TypeInfo;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar3,
                   *(undefined8 *)System_Collections_Generic_List<object>_TypeInfo);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


