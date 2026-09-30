/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Start
ENTRY_POINT: 04ab4dc0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Start(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x22;
  
  thunk_FUN_02bb0e9c(param_1 + 8);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_03182744();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02b76218();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02b76218();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x40);
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    lVar1 = thunk_FUN_02b79644(lVar2);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_040506c8(lVar1,uVar4,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 0x10) = lVar1;
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(long *)(lVar2 + 0xb8) + 0x10,lVar1);
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_03182c34(lVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58));
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02b76218();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02b76218();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x60);
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    lVar1 = thunk_FUN_02b79644(lVar2);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_040502f4(lVar1,uVar4,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70));
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 0x18) = lVar1;
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(long *)(lVar2 + 0xb8) + 0x18,lVar1);
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_03182608(lVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02b76218();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02b76218();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x80);
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    lVar1 = thunk_FUN_02b79644(lVar2);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_0404b6f8(lVar1,uVar4,*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x90));
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 0x20) = lVar1;
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(long *)(lVar2 + 0xb8) + 0x20,lVar1);
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_0317e850(lVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  return;
}


