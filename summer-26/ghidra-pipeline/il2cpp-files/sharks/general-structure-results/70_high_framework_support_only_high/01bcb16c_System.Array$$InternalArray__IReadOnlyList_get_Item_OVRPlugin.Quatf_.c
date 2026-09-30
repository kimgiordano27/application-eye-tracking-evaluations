/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Quatf>
ENTRY_POINT: 01bcb16c
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Quatf>
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    FUN_017fc350(PTR_DAT_037f97b0);
    FUN_017fc350(PTR_DAT_037f97b8);
    FUN_017fc350(PTR_DAT_037f2c78);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
      FUN_0185db00();
    }
  }
  puVar1 = PTR_DAT_037f97b8;
  lVar2 = *(long *)PTR_DAT_037f97b8;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  uVar4 = **(undefined8 **)(unaff_x20 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar4 = FUN_02bddb5c(uVar4,0);
  uVar3 = FUN_02bddb5c(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8),0);
  if (lVar2 != 0) {
    FUN_02200638(lVar2,uVar4,uVar3,*(undefined8 *)PTR_DAT_037f97b0);
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    **(undefined8 **)(lVar2 + 0xb8) = param_2;
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    thunk_FUN_0188fd20(*(undefined8 *)(lVar2 + 0xb8),param_2);
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = unaff_x21;
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    thunk_FUN_0188fd20(*(long *)(lVar2 + 0xb8) + 8);
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10) = unaff_x19;
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    thunk_FUN_0188fd20(*(long *)(lVar2 + 0xb8) + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


