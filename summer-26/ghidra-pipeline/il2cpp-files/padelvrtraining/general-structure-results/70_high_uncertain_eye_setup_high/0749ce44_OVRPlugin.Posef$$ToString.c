/*
FUNCTION_NAME: OVRPlugin.Posef$$ToString
ENTRY_POINT: 0749ce44
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef__ToString(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_x9;
  long in_x10;
  uint in_w11;
  undefined4 in_w12;
  long unaff_x19;
  uint *unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *unaff_x24;
  
  *unaff_x20 = in_w11;
  *(undefined4 *)(in_x10 + 0x20) = in_w12;
  *unaff_x24 = *unaff_x24 + 1;
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_059d3744();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_0749d0c0;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 2;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_059d3744();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_0749d0c0;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 3;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_059d3744();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_0749d0c0;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 4;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_059d3744();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) {
LAB_0749d0c0:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  puVar2 = PTR_DAT_09223c70;
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 5;
  }
  else {
    FUN_059d3744();
  }
  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
  thunk_FUN_03d1023c();
  uVar3 = FUN_03d2d394(*unaff_x22,5);
  FUN_0708f30c(uVar3,*(undefined8 *)puVar2,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar4 = uVar3;
  thunk_FUN_03d1023c(puVar4,uVar3);
  return;
}


