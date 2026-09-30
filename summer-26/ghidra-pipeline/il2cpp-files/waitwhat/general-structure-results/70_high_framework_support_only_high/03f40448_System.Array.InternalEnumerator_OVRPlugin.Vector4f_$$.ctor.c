/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 03f40448
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4f>___ctor(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_031c09d4();
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_03a3736c();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x40);
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4(lVar2);
    }
    lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar2);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_04c85f2c(lVar1,uVar4,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 0x10) = lVar1;
    if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_03a39ea0(lVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58));
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x60);
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4(lVar2);
    }
    lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar2);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_04c80afc(lVar1,uVar4,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70));
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 0x18) = lVar1;
    if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_03a37230(lVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x80);
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4(lVar2);
    }
    lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar2);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_04c848fc(lVar1,uVar4,*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x90));
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 0x20) = lVar1;
    if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_03a385f0(lVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  return;
}


