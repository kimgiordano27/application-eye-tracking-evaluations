/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_archive_query_t_time_start_get
ENTRY_POINT: 078bfa1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_time_start_get
               (void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 unaff_x22;
  long lVar5;
  undefined8 uVar6;
  long in_stack_00000008;
  
  puVar4 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar4 = unaff_x22;
  thunk_FUN_03afed3c(puVar4);
  *(long *)(unaff_x20 + 0x18) = unaff_x19;
  thunk_FUN_03afed3c();
  if ((*(char *)(unaff_x19 + 0x29) != '\0') && (*(char *)(unaff_x19 + 0x2b) != '\0')) {
    lVar3 = *(long *)(unaff_x19 + 0x40);
    if (lVar3 == 0) {
LAB_078bfbb8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *(long *)(lVar3 + 0x18);
    if ((lVar5 == 0) || (*(long *)(lVar3 + 0x10) == 0)) {
      thunk_FUN_03af1434(PTR_DAT_08493908);
      uVar1 = thunk_FUN_03ac74bc();
      uVar6 = thunk_FUN_03af1434(
                                System_Collections_Generic_List<LocalVariables_VariableScope>_TypeInfo
                                );
      FUN_078bbac4(uVar1,uVar6,0x22);
      uVar6 = thunk_FUN_03af1434(
                                System_Collections_Generic_List<MatcherValidationErrorException_ValidationError>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar1,uVar6);
    }
    uVar1 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_List<HVRPooledEmitter_HVRPooledObjectTracker>_TypeInfo
                              );
    FUN_04962b78();
    lVar3 = FUN_044c97ac(lVar5,uVar1,
                         *(undefined8 *)
                          System_Collections_Generic_List<HVRInputActions_IUIActions>_TypeInfo);
    if (lVar3 != 0) {
      if ((*(long *)(unaff_x19 + 0x40) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18), lVar5 == 0)) goto LAB_078bfbb8;
      uVar2 = FUN_04de9ad0(lVar5,lVar3,
                           *(undefined8 *)
                            System_Collections_Generic_List<LckTelemetry_TelemetryData>_TypeInfo);
      if ((uVar2 & 1) != 0) {
        uVar6 = *puVar4;
        uVar1 = FUN_078df698(*(undefined8 *)(unaff_x19 + 0x40),0);
        uVar2 = FUN_078bfd98(uVar1,uVar6,uVar1,&stack0x00000008);
        if ((uVar2 & 1) != 0) {
          if ((in_stack_00000008 == 0) || (*(long *)(in_stack_00000008 + 0x20) == 0))
          goto LAB_078bfbb8;
          FUN_04de9ad0(*(long *)(in_stack_00000008 + 0x20),*puVar4,*(undefined8 *)PTR_DAT_084d84a8);
        }
      }
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_078bfc40();
    }
    uVar2 = FUN_078be388();
    if ((((uVar2 & 1) != 0) && (*(char *)(unaff_x19 + 0x2a) == '\0')) &&
       (*(char *)(unaff_x19 + 0x2c) != '\0')) {
      lVar3 = *(long *)(unaff_x19 + 0x50);
      uVar1 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488640);
      FUN_066b5934();
      if (lVar3 == 0) goto LAB_078bfbb8;
      FUN_03a53f6c(0,0,*(undefined8 *)PTR_DAT_08494c40,lVar3,uVar1);
    }
  }
  return;
}


