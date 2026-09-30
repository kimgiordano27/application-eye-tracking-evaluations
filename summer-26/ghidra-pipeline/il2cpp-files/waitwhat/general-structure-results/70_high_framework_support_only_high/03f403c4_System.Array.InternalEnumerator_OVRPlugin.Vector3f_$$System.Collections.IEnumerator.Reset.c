/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03f403c4
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


void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
  uVar5 = **(undefined8 **)(param_1 + 0xb8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
  }
  uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar2);
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  FUN_04c80bac(uVar1,uVar5,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30));
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  lVar2 = *(long *)(lVar3 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar1;
  if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_03a3736c(uVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar3 = *(long *)(lVar3 + 0x40);
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4(lVar3);
    }
    lVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar3);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_04c85f2c(lVar2,uVar5,*(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x50));
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x10) = lVar2;
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_03a39ea0(lVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar3 = *(long *)(lVar3 + 0x60);
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4(lVar3);
    }
    lVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar3);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_04c80afc(lVar2,uVar5,*(undefined8 *)(lVar3 + 0x68),*(undefined8 *)(lVar3 + 0x70));
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x18) = lVar2;
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_03a37230(lVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar3 = *(long *)(lVar3 + 0x80);
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4(lVar3);
    }
    lVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar3);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_04c848fc(lVar2,uVar5,*(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar3 + 0x90));
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x20) = lVar2;
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_03a385f0(lVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  return;
}


