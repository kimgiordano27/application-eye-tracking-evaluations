/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 07464080
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateHMDEvents(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  long lVar4;
  long *unaff_x22;
  
  if (**(long **)(param_1 + 0xb8) == 0) {
    uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_StringLiteral_52288_092230c0);
    Unity_Networking_Transport_ConnectionDataMap<TLSLayer_TLSConnectionData>__get_Length
              (uVar2,*(undefined8 *)PTR_DAT_092230b8);
    **(undefined8 **)(*unaff_x22 + 0xb8) = uVar2;
    thunk_FUN_03d1023c(*(undefined8 *)(*unaff_x22 + 0xb8),uVar2);
    (**(code **)(*unaff_x19 + 0x368))();
  }
  if (unaff_x19[0x19] != 0) {
    lVar3 = FUN_04ec281c(unaff_x19[0x19],*(undefined8 *)PTR_DAT_092208c8);
    unaff_x19[0x27] = lVar3;
    thunk_FUN_03d1023c(unaff_x19 + 0x27);
    if (unaff_x19[0x24] == 0) {
      lVar3 = FUN_08a4d9c8();
      if (lVar3 == 0) goto LAB_074641b0;
      FUN_04f82d4c(lVar3,*(undefined8 *)PTR_DAT_092208d0);
      FUN_074641b4();
    }
    puVar1 = PTR_DAT_09222f48;
    if (unaff_x19[0x19] != 0) {
      lVar4 = unaff_x19[0x26];
      uVar2 = FUN_08a4d98c(unaff_x19[0x19],0);
      lVar3 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
      FUN_07462d14(lVar3,lVar4,uVar2);
      unaff_x19[0x28] = lVar3;
      thunk_FUN_03d1023c(unaff_x19 + 0x28,lVar3);
      FUN_073a32e4();
      return;
    }
  }
LAB_074641b0:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


