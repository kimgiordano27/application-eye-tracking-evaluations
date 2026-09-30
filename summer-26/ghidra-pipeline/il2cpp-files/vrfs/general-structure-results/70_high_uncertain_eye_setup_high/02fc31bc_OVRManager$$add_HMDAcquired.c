/*
FUNCTION_NAME: OVRManager$$add_HMDAcquired
ENTRY_POINT: 02fc31bc
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDAcquired(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_06dc26f0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(4,0);
  }
  FUN_02cacddc();
  if (*(long *)(unaff_x21 + 0x30) == 0) {
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10) + 8))();
  }
                    /* try { // try from 02fc3210 to 030c3237 has its CatchHandler @ 02fc3c34 */
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x110);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_031c8668(uVar4,0);
  FUN_02cab664();
                    /* try { // try from 02fc3270 to 030c3297 has its CatchHandler @ 02fc3c2c */
  FUN_02cacddc();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    uVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8) + 8))();
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x118);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_015c2790(lVar3);
    }
    FUN_0160edfc(lVar3,uVar2);
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120) + 8))();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_031c8668(uVar4,0);
    FUN_02cab664();
    return;
  }
  return;
}


