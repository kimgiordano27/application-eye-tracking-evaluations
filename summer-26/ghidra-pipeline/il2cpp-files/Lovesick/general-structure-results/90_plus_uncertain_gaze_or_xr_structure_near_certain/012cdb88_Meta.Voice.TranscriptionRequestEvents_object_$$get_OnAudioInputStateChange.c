/*
FUNCTION_NAME: Meta.Voice.TranscriptionRequestEvents<object>$$get_OnAudioInputStateChange
ENTRY_POINT: 012cdb88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x012cdf24) */

void Meta_Voice_TranscriptionRequestEvents<object>__get_OnAudioInputStateChange(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *unaff_x19;
  byte unaff_w20;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  char cStack000000000000000c;
  undefined1 *in_stack_00000010;
  byte bStack000000000000001c;
  
  if ((param_1 & 1) == 0) {
    FUN_00d5941c();
  }
  puVar1 = (undefined8 *)thunk_FUN_00d32ed4();
  uVar5 = *puVar1;
  cStack000000000000000c = '\0';
  FUN_017d75a8(uVar5,&stack0x0000000c,0);
  lVar2 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  FUN_00da4f60(*(long *)(lVar2 + 0x80) + 0xc0,1);
  puVar3 = (undefined1 *)thunk_FUN_00d32ed4();
  *puVar3 = 1;
  lVar2 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  FUN_00da4f60(*(long *)(lVar2 + 0x80) + 0xe0,8);
  puVar1 = (undefined8 *)thunk_FUN_00d32ed4();
  *puVar1 = 0;
  puVar1 = *(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x10);
  (*(code *)puVar1[2])(*puVar1);
  if ((*(byte *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  plVar4 = (long *)thunk_FUN_00d32ed4();
  if (*plVar4 != 0) {
    if (*(int *)(*(long *)
                  Method_System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_get_Item__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar6 = *(long *)Method_System_IO_Stream_NullStream_EndWrite__;
    lVar2 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar2 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    plVar4 = (long *)**(undefined8 **)(lVar2 + 0xb8);
    lVar2 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      FUN_00d5941c(lVar2);
    }
    puVar1 = (undefined8 *)thunk_FUN_00d32ed4();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar4 + 0x188))(plVar4,*puVar1,0,*(undefined8 *)(*plVar4 + 400));
  }
  lVar2 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  FUN_00da4f60(*(long *)(lVar2 + 0x80) + 0x140,8);
  puVar1 = (undefined8 *)thunk_FUN_00d32ed4();
  *puVar1 = 0;
  if ((*(byte *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  plVar4 = (long *)thunk_FUN_00d32ed4();
  if (*plVar4 != 0) {
    if (*(int *)(*(long *)PTR_DAT_033f3600 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar6 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
    lVar2 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar2 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    plVar4 = (long *)**(undefined8 **)(lVar2 + 0xb8);
    lVar2 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      FUN_00d5941c(lVar2);
    }
    puVar1 = (undefined8 *)thunk_FUN_00d32ed4();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar4 + 0x188))(plVar4,*puVar1,0,*(undefined8 *)(*plVar4 + 400));
  }
  lVar2 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  FUN_00da4f60(*(long *)(lVar2 + 0x80) + 0x160,8);
  puVar1 = (undefined8 *)thunk_FUN_00d32ed4();
  *puVar1 = 0;
  if (cStack000000000000000c != '\0') {
    thunk_FUN_00d56f10(uVar5,0);
  }
  bStack000000000000001c = unaff_w20 & 1;
  in_stack_00000010 = &stack0x0000001c;
  (**(code **)(*(long *)(*unaff_x19 + 0x220) + 0x10))
            (*(undefined8 *)(*(long *)(*unaff_x19 + 0x220) + 8));
  return;
}


