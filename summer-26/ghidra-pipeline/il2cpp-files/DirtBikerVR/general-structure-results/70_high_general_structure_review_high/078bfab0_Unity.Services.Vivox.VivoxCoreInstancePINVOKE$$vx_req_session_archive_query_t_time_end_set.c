/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_archive_query_t_time_end_set
ENTRY_POINT: 078bfab0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_time_end_set
               (undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar4;
  long in_stack_00000008;
  
  if ((*(long *)(unaff_x19 + 0x40) != 0) &&
     (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18), lVar1 != 0)) {
    uVar2 = FUN_04de9ad0(lVar1,param_1,
                         *(undefined8 *)
                          System_Collections_Generic_List<LckTelemetry_TelemetryData>_TypeInfo);
    if ((uVar2 & 1) != 0) {
      uVar4 = *unaff_x21;
      uVar3 = FUN_078df698(*(undefined8 *)(unaff_x19 + 0x40),0);
      uVar2 = FUN_078bfd98(uVar3,uVar4,uVar3,&stack0x00000008);
      if ((uVar2 & 1) != 0) {
        if ((in_stack_00000008 == 0) || (*(long *)(in_stack_00000008 + 0x20) == 0))
        goto LAB_078bfbb8;
        FUN_04de9ad0(*(long *)(in_stack_00000008 + 0x20),*unaff_x21,*(undefined8 *)PTR_DAT_084d84a8)
        ;
      }
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_078bfc40();
    }
    uVar2 = FUN_078be388();
    if ((((uVar2 & 1) != 0) && (*(char *)(unaff_x19 + 0x2a) == '\0')) &&
       (*(char *)(unaff_x19 + 0x2c) != '\0')) {
      lVar1 = *(long *)(unaff_x19 + 0x50);
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488640);
      FUN_066b5934();
      if (lVar1 == 0) goto LAB_078bfbb8;
      FUN_03a53f6c(0,0,*(undefined8 *)PTR_DAT_08494c40,lVar1,uVar3);
    }
    return;
  }
LAB_078bfbb8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


