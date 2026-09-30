/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent.CallbackProvider$$.ctor
ENTRY_POINT: 04aaec78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_CallbackProvider___ctor(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  if (unaff_x20 == 0) {
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
    lVar2 = *(long *)(lVar2 + 0x18);
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    unaff_x20 = thunk_FUN_02b79644(lVar2);
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_04046590(unaff_x20,uVar4,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02b76218();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar1 + 0xb8) + 8) = unaff_x20;
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(long *)(lVar1 + 0xb8) + 8,unaff_x20);
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_0317bee0(unaff_x20,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
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
    FUN_0404c348(lVar1,uVar4,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
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
  FUN_0317ed40(lVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58));
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
    FUN_040464cc(lVar1,uVar4,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70));
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
  FUN_0317bda4(lVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
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
    FUN_0404a9d4(lVar1,uVar4,*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x90));
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
  FUN_0317d164(lVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  return;
}


