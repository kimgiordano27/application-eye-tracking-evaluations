/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_speaker_position_get
ENTRY_POINT: 078b0ccc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_speaker_position_get
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x21;
  undefined4 uStack0000000000000004;
  
  FUN_0350a83c();
  thunk_FUN_03af1434(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
  FUN_0350a870();
  puVar1 = PTR_DAT_08486760;
  if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uStack0000000000000004 = *(undefined4 *)(*(long *)(unaff_x20 + 0x58) + 0x30);
  thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&stack0x00000004);
  FUN_0350a83c();
  FUN_0350a870();
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(*unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48));
  FUN_0350a83c();
  FUN_0350a870();
  thunk_FUN_03af1434(System_Collections_Generic_List<PropertyInfo>_TypeInfo);
  uVar2 = FUN_065ce7dc();
  thunk_FUN_03af1434(PTR_DAT_08493908);
  uVar3 = thunk_FUN_03ac74bc();
  FUN_078bbac4(uVar3,uVar2,0xc,0);
  lVar4 = *(long *)(unaff_x20 + 0xa0);
  if (lVar4 != 0) {
    uVar2 = thunk_FUN_03af1434(System_Collections_Generic_List<Purchase>_TypeInfo);
    FUN_0587ddbc(lVar4,uVar3,uVar2);
  }
  uVar2 = thunk_FUN_03af1434(System_Collections_Generic_List<QDOODOQQDQODD>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3,uVar2);
}


