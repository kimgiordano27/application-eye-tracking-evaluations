/*
FUNCTION_NAME: FUN_01e91dbc
ENTRY_POINT: 01e91dbc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_01e91dbc(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_0234c2e8;
  if ((DAT_0247e308 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235f578);
    FUN_00fdc2e4(PTR_DAT_0235f580);
    FUN_00fdc2e4(PTR_DAT_0234ba20);
    FUN_00fdc2e4(PTR_DAT_0235f570);
    FUN_00fdc2e4(PTR_DAT_0234c2e8);
    FUN_00fdc2e4(PTR_DAT_0235f588);
    FUN_00fdc2e4(PTR_DAT_0235f590);
    DAT_0247e308 = 1;
  }
  *param_2 = 0;
  puVar2 = PTR_DAT_0235f570;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar3 = FUN_01e79184();
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar5);
    lVar5 = *(long *)puVar2;
  }
  uVar4 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                    (uVar3,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar4 & 1) == 0) {
    return 0xfffffc13;
  }
  if (*(int *)(param_1 + 0x18) == 2) {
    if ((*(long *)(param_1 + 0x30) == 0) || (*(int *)(*(long *)(param_1 + 0x30) + 0x18) < 0x11))
    goto LAB_01e91ef8;
    local_24 = 0x10;
    uVar3 = FUN_01d47d28(&local_24,0);
    puVar6 = (undefined8 *)PTR_DAT_0235f588;
  }
  else {
    if (((*(int *)(param_1 + 0x18) != 1) || (*(long *)(param_1 + 0x20) == 0)) ||
       (*(int *)(*(long *)(param_1 + 0x20) + 0x18) < 0x401)) {
LAB_01e91ef8:
      lVar5 = *(long *)(param_1 + 0x20);
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) != 0x400)) {
        FUN_0116588c((long *)(param_1 + 0x20),0x400,*(undefined8 *)PTR_DAT_0235f578);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) != 0x10)) {
        FUN_01165d1c((long *)(param_1 + 0x30),0x10,*(undefined8 *)PTR_DAT_0235f580);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar3 = FUN_01eba22c(param_1,param_2,0);
      return uVar3;
    }
    local_24 = 0x400;
    uVar3 = FUN_01d47d28(&local_24,0);
    puVar6 = (undefined8 *)PTR_DAT_0235f590;
  }
  uVar3 = FUN_01c45a74(*puVar6,uVar3,0);
  if (*(int *)(*(long *)PTR_DAT_0234ba20 + 0xe0) == 0) {
    thunk_FUN_01022c14(*(long *)PTR_DAT_0234ba20);
  }
  FUN_01fd09b0(uVar3,0);
  return 0xfffffc17;
}


