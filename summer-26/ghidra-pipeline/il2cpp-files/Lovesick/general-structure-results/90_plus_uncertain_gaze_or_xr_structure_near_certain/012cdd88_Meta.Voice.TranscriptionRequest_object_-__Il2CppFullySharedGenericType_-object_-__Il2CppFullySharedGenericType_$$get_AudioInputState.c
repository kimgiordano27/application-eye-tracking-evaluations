/*
FUNCTION_NAME: Meta.Voice.TranscriptionRequest<object,-__Il2CppFullySharedGenericType,-object,-__Il2CppFullySharedGenericType>$$get_AudioInputState
ENTRY_POINT: 012cdd88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x012cdf24) */

void Meta_Voice_TranscriptionRequest<object,___Il2CppFullySharedGenericType,_object,___Il2CppFullySharedGenericType>__get_AudioInputState
               (void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  byte unaff_w20;
  long unaff_x22;
  long lVar4;
  undefined8 in_stack_00000008;
  byte bStack000000000000001c;
  
  puVar1 = (undefined8 *)thunk_FUN_00d32ed4();
  *puVar1 = 0;
  if ((*(byte *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  plVar2 = (long *)thunk_FUN_00d32ed4();
  if (*plVar2 != 0) {
    if (*(int *)(*(long *)PTR_DAT_033f3600 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar4 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    plVar2 = (long *)**(undefined8 **)(lVar3 + 0xb8);
    lVar3 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      FUN_00d5941c(lVar3);
    }
    puVar1 = (undefined8 *)thunk_FUN_00d32ed4();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar2 + 0x188))(plVar2,*puVar1,0,*(undefined8 *)(*plVar2 + 400));
  }
  lVar3 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  FUN_00da4f60(*(long *)(lVar3 + 0x80) + 0x160,8);
  puVar1 = (undefined8 *)thunk_FUN_00d32ed4();
  *puVar1 = 0;
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_00d56f10();
  }
  bStack000000000000001c = unaff_w20 & 1;
  (**(code **)(*(long *)(*unaff_x19 + 0x220) + 0x10))
            (*(undefined8 *)(*(long *)(*unaff_x19 + 0x220) + 8));
  return;
}


