/*
FUNCTION_NAME: OVRPlugin$$GetEyeFrustum
ENTRY_POINT: 01f7a654
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


undefined8 OVRPlugin__GetEyeFrustum(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 *unaff_x19;
  int iVar5;
  long unaff_x22;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_01f6ad8c(param_1,param_2,0);
  uVar3 = auVar7._8_8_;
  uVar1 = auVar7._0_8_;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar6 = *(ulong *)(unaff_x22 + 0x70);
  if (DAT_0293bfb6 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027b5200);
    DAT_0293bfb6 = '\x01';
    if (uVar6 != 0) goto LAB_01f7a67c;
OVRPlugin__GetEyeTextureSize:
    uVar2 = 0;
  }
  else {
    if (uVar6 == 0) goto OVRPlugin__GetEyeTextureSize;
LAB_01f7a67c:
    uVar2 = System_Int32__TryParse(uVar6,0);
    uVar6 = (ulong)*(uint *)(uVar6 + 0x10);
  }
  if (DAT_0293dbb0 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be8a0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293dbb0 = '\x01';
  }
  iVar5 = auVar7._8_4_;
  if ((iVar5 == (int)uVar6) &&
     ((iVar5 == 0 ||
      (uVar6 = FUN_01f36130(uVar1,uVar3,uVar2,uVar6,*(undefined8 *)PTR_DAT_027be8a0),
      (uVar6 & 1) != 0)))) {
    uVar4 = 0x7f800000;
    goto LAB_01f7a858;
  }
  uVar6 = *(ulong *)(unaff_x22 + 0x78);
  if (DAT_0293bfb6 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027b5200);
    DAT_0293bfb6 = '\x01';
    if (uVar6 != 0) goto LAB_01f7a724;
LAB_01f7a754:
    uVar2 = 0;
  }
  else {
    if (uVar6 == 0) goto LAB_01f7a754;
LAB_01f7a724:
    uVar2 = System_Int32__TryParse(uVar6,0);
    uVar6 = (ulong)*(uint *)(uVar6 + 0x10);
  }
  if (DAT_0293dbb0 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be8a0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293dbb0 = '\x01';
  }
  if ((iVar5 == (int)uVar6) &&
     ((iVar5 == 0 ||
      (uVar6 = FUN_01f36130(uVar1,uVar3,uVar2,uVar6,*(undefined8 *)PTR_DAT_027be8a0),
      (uVar6 & 1) != 0)))) {
    uVar4 = 0xff800000;
    goto LAB_01f7a858;
  }
  uVar6 = *(ulong *)(unaff_x22 + 0x68);
  if (DAT_0293bfb6 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027b5200);
    DAT_0293bfb6 = '\x01';
    if (uVar6 != 0) goto LAB_01f7a7c8;
LAB_01f7a7f8:
    uVar2 = 0;
  }
  else {
    if (uVar6 == 0) goto LAB_01f7a7f8;
LAB_01f7a7c8:
    uVar2 = System_Int32__TryParse(uVar6,0);
    uVar6 = (ulong)*(uint *)(uVar6 + 0x10);
  }
  if (DAT_0293dbb0 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be8a0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293dbb0 = '\x01';
  }
  if ((iVar5 != (int)uVar6) ||
     ((iVar5 != 0 &&
      (uVar6 = FUN_01f36130(uVar1,uVar3,uVar2,uVar6,*(undefined8 *)PTR_DAT_027be8a0),
      (uVar6 & 1) == 0)))) {
    return 0;
  }
  uVar4 = 0x7fc00000;
LAB_01f7a858:
  *unaff_x19 = uVar4;
  return 1;
}


