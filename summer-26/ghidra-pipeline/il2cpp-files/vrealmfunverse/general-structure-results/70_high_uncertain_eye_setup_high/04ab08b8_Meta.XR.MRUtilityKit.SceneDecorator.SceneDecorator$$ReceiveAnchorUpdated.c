/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$ReceiveAnchorUpdated
ENTRY_POINT: 04ab08b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__ReceiveAnchorUpdated
               (ushort *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02b76218();
  }
  puVar1 = PTR_DAT_0631ead0;
  lVar4 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    lVar4 = thunk_FUN_02b79644(lVar2);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_0404ecc0(lVar4,uVar5,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30));
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar4;
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(long *)(lVar2 + 0xb8) + 8,lVar4);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_0318023c(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x40);
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    lVar4 = thunk_FUN_02b79644(lVar2);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_040485c8(lVar4,uVar5,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 0x10) = lVar4;
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(long *)(lVar2 + 0xb8) + 0x10,lVar4);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_0317c50c(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58));
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x60);
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    lVar4 = thunk_FUN_02b79644(lVar2);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    System_Collections_Generic_SortedList_ValueList<int,_ValueTuple<object,_int>>__Insert
              (lVar4,uVar5,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70));
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 0x18) = lVar4;
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(long *)(lVar2 + 0xb8) + 0x18,lVar4);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_031804b4(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x80);
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    lVar4 = thunk_FUN_02b79644(lVar2);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_0404adb8(lVar4,uVar5,*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x90));
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 0x20) = lVar4;
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(long *)(lVar2 + 0xb8) + 0x20,lVar4);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_0317d790(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  return;
}


