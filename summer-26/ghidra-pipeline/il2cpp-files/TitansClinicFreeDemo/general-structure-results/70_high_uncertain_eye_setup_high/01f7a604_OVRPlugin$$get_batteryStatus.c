/*
FUNCTION_NAME: OVRPlugin$$get_batteryStatus
ENTRY_POINT: 01f7a604
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin__get_batteryStatus(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 *unaff_x19;
  int iVar6;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  undefined1 auVar7 [16];
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba7e8);
    *(undefined1 *)(unaff_x25 + 0xddf) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar1 = FUN_01f75da8();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  auVar7 = FUN_01f6ad8c();
  uVar4 = auVar7._8_8_;
  uVar2 = auVar7._0_8_;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x70);
  if (DAT_0293bfb6 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027b5200);
    DAT_0293bfb6 = '\x01';
    if (uVar1 == 0) goto OVRPlugin__GetEyeTextureSize;
LAB_01f7a67c:
    uVar3 = System_Int32__TryParse(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_01f7a67c;
OVRPlugin__GetEyeTextureSize:
    uVar3 = 0;
  }
  if (DAT_0293dbb0 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be8a0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293dbb0 = '\x01';
  }
  iVar6 = auVar7._8_4_;
  if ((iVar6 == (int)uVar1) &&
     ((iVar6 == 0 ||
      (uVar1 = FUN_01f36130(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_027be8a0),
      (uVar1 & 1) != 0)))) {
    uVar5 = 0x7f800000;
    goto LAB_01f7a858;
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x78);
  if (DAT_0293bfb6 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027b5200);
    DAT_0293bfb6 = '\x01';
    if (uVar1 == 0) goto LAB_01f7a754;
LAB_01f7a724:
    uVar3 = System_Int32__TryParse(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_01f7a724;
LAB_01f7a754:
    uVar3 = 0;
  }
  if (DAT_0293dbb0 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be8a0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293dbb0 = '\x01';
  }
  if ((iVar6 == (int)uVar1) &&
     ((iVar6 == 0 ||
      (uVar1 = FUN_01f36130(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_027be8a0),
      (uVar1 & 1) != 0)))) {
    uVar5 = 0xff800000;
    goto LAB_01f7a858;
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x68);
  if (DAT_0293bfb6 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027b5200);
    DAT_0293bfb6 = '\x01';
    if (uVar1 == 0) goto LAB_01f7a7f8;
LAB_01f7a7c8:
    uVar3 = System_Int32__TryParse(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_01f7a7c8;
LAB_01f7a7f8:
    uVar3 = 0;
  }
  if (DAT_0293dbb0 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be8a0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293dbb0 = '\x01';
  }
  if ((iVar6 != (int)uVar1) ||
     ((iVar6 != 0 &&
      (uVar1 = FUN_01f36130(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_027be8a0),
      (uVar1 & 1) == 0)))) {
    return 0;
  }
  uVar5 = 0x7fc00000;
LAB_01f7a858:
  *unaff_x19 = uVar5;
  return 1;
}


