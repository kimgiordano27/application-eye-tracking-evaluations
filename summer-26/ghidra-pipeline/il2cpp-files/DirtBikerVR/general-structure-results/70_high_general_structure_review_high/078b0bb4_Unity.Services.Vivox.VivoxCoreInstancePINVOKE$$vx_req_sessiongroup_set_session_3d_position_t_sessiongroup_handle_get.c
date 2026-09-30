/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_sessiongroup_handle_get
ENTRY_POINT: 078b0bb4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_sessiongroup_handle_get
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_x9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  undefined4 uStack0000000000000004;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x30) <= *(int *)(in_x9 + 0x30)) {
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    thunk_FUN_03afed3c();
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
    return;
  }
  uVar2 = thunk_FUN_03af1434(PTR_DAT_08486858);
  lVar3 = FUN_03a8a804(uVar2,4);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar2 = thunk_FUN_03af1434(System_Collections_Generic_List<Property>_TypeInfo);
  FUN_0350a83c(lVar3,uVar2);
  uVar2 = thunk_FUN_03af1434(System_Collections_Generic_List<Property>_TypeInfo);
  FUN_0350a870(lVar3,0,uVar2);
  uVar2 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
  FUN_0350a83c(lVar3,uVar2);
  uVar2 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
  FUN_0350a870(lVar3,1,uVar2);
  puVar1 = PTR_DAT_08486760;
  if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uStack0000000000000004 = *(undefined4 *)(*(long *)(unaff_x20 + 0x58) + 0x30);
  uVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&stack0x00000004);
  FUN_0350a83c(lVar3,uVar2);
  FUN_0350a870(lVar3,2,uVar2);
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(*unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48));
  FUN_0350a83c(lVar3,uVar2);
  FUN_0350a870(lVar3,3,uVar2);
  uVar2 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyInfo>_TypeInfo);
  uVar2 = FUN_065ce7dc(uVar2,lVar3,0);
  thunk_FUN_03af1434(PTR_DAT_08493908);
  uVar4 = thunk_FUN_03ac74bc();
  FUN_078bbac4(uVar4,uVar2,0xc,0);
  lVar3 = *(long *)(unaff_x20 + 0xa0);
  if (lVar3 != 0) {
    uVar2 = thunk_FUN_03af1434(System_Collections_Generic_List<Purchase>_TypeInfo);
    FUN_0587ddbc(lVar3,uVar4,uVar2);
  }
  uVar2 = thunk_FUN_03af1434(System_Collections_Generic_List<QDOODOQQDQODD>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar4,uVar2);
}


