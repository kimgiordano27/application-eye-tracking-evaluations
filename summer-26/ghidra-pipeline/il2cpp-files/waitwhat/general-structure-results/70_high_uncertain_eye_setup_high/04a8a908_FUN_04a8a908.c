/*
FUNCTION_NAME: FUN_04a8a908
ENTRY_POINT: 04a8a908
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_04a8a908(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_28;
  
  if ((DAT_075493e8 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f4d40);
    FUN_03188a78(PTR_DAT_070f4d48);
    DAT_075493e8 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  local_28 = 0;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    lVar4 = *(long *)(param_1 + 0x20);
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4(lVar4);
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    lVar5 = *(long *)(param_1 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar4 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
      uVar1 = *(ushort *)(*(long *)(param_1 + 0x20) + 0x135);
      lVar4 = *(long *)(param_1 + 0x20);
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_031c09d4(lVar4);
    }
    FUN_0570ec28(lVar3,uVar6,uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20));
    lVar4 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    lVar5 = *(long *)(param_1 + 0x20);
    *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar3;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  puVar2 = PTR_DAT_070f4d48;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4(lVar4);
  }
  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length
            (uVar6,lVar3,0,0,0,1,10,10000,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30));
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *(long *)puVar2;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  lVar3 = **(long **)(lVar3 + 0xb8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4(lVar4);
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  if ((*(ushort *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4(*(long *)(param_1 + 0x20));
  }
  FUN_06656e28(uVar7,0);
  local_28 = uVar7;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_05345264(lVar3,&local_28,*(undefined8 *)PTR_DAT_070f4d40);
  return uVar6;
}


