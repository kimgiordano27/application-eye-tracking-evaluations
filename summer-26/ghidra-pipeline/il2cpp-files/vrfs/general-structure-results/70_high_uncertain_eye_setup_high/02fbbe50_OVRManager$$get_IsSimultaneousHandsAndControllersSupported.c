/*
FUNCTION_NAME: OVRManager$$get_IsSimultaneousHandsAndControllersSupported
ENTRY_POINT: 02fbbe50
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_IsSimultaneousHandsAndControllersSupported(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  long *unaff_x25;
  
  FUN_02cacddc();
  if (*(long *)(unaff_x21 + 0x30) == 0) {
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10) + 8))();
  }
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x110);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_031c8668(uVar3,0);
  FUN_02cab664();
  FUN_02cacddc();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8) + 8))();
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x118);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_015c2790(lVar2);
    }
    FUN_0160edfc(lVar2,uVar1);
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120) + 8))();
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_031c8668(uVar3,0);
    FUN_02cab664();
    return;
  }
  return;
}


