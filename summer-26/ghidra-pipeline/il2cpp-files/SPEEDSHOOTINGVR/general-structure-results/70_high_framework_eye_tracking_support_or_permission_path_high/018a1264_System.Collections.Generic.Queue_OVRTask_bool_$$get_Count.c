/*
FUNCTION_NAME: System.Collections.Generic.Queue<OVRTask<bool>>$$get_Count
ENTRY_POINT: 018a1264
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 76
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_Queue<OVRTask<bool>>__get_Count(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 == 0) {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    FUN_018a14ac();
    return;
  }
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  puVar2 = PTR_DAT_0234bbd8;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    lVar3 = thunk_FUN_010400dc();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar4 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x20 + 0x20);
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    FUN_0136af70(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50));
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    *(long *)(*(long *)(lVar4 + 0xb8) + 0x10) = lVar3;
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    thunk_FUN_0106e12c(*(long *)(lVar4 + 0xb8) + 0x10,lVar3);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(lVar6,lVar3);
  return;
}


