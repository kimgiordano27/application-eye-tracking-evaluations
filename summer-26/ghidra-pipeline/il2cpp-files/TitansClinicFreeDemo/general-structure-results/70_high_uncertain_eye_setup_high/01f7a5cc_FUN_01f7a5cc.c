/*
FUNCTION_NAME: FUN_01f7a5cc
ENTRY_POINT: 01f7a5cc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_01f7a5cc(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
            undefined4 *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR_DAT_027ba7e8;
  if ((DAT_0293dddf & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba7e8);
    DAT_0293dddf = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar2 = FUN_01f75da8(param_1,param_2,param_3,param_4,param_5,0);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  auVar8 = FUN_01f6ad8c(param_1,param_2,0);
  uVar5 = auVar8._8_8_;
  uVar3 = auVar8._0_8_;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar2 = *(ulong *)(param_4 + 0x70);
  if (DAT_0293bfb6 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027b5200);
    DAT_0293bfb6 = '\x01';
    if (uVar2 == 0) goto OVRPlugin__GetEyeTextureSize;
LAB_01f7a67c:
    uVar4 = System_Int32__TryParse(uVar2,0);
    uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
  }
  else {
    if (uVar2 != 0) goto LAB_01f7a67c;
OVRPlugin__GetEyeTextureSize:
    uVar4 = 0;
  }
  if (DAT_0293dbb0 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be8a0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293dbb0 = '\x01';
  }
  iVar7 = auVar8._8_4_;
  if ((iVar7 == (int)uVar2) &&
     ((iVar7 == 0 ||
      (uVar2 = FUN_01f36130(uVar3,uVar5,uVar4,uVar2,*(undefined8 *)PTR_DAT_027be8a0),
      (uVar2 & 1) != 0)))) {
    uVar6 = 0x7f800000;
    goto LAB_01f7a858;
  }
  uVar2 = *(ulong *)(param_4 + 0x78);
  if (DAT_0293bfb6 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027b5200);
    DAT_0293bfb6 = '\x01';
    if (uVar2 == 0) goto LAB_01f7a754;
LAB_01f7a724:
    uVar4 = System_Int32__TryParse(uVar2,0);
    uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
  }
  else {
    if (uVar2 != 0) goto LAB_01f7a724;
LAB_01f7a754:
    uVar4 = 0;
  }
  if (DAT_0293dbb0 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be8a0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293dbb0 = '\x01';
  }
  if ((iVar7 == (int)uVar2) &&
     ((iVar7 == 0 ||
      (uVar2 = FUN_01f36130(uVar3,uVar5,uVar4,uVar2,*(undefined8 *)PTR_DAT_027be8a0),
      (uVar2 & 1) != 0)))) {
    uVar6 = 0xff800000;
    goto LAB_01f7a858;
  }
  uVar2 = *(ulong *)(param_4 + 0x68);
  if (DAT_0293bfb6 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027b5200);
    DAT_0293bfb6 = '\x01';
    if (uVar2 == 0) goto LAB_01f7a7f8;
LAB_01f7a7c8:
    uVar4 = System_Int32__TryParse(uVar2,0);
    uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
  }
  else {
    if (uVar2 != 0) goto LAB_01f7a7c8;
LAB_01f7a7f8:
    uVar4 = 0;
  }
  if (DAT_0293dbb0 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be8a0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293dbb0 = '\x01';
  }
  if ((iVar7 != (int)uVar2) ||
     ((iVar7 != 0 &&
      (uVar2 = FUN_01f36130(uVar3,uVar5,uVar4,uVar2,*(undefined8 *)PTR_DAT_027be8a0),
      (uVar2 & 1) == 0)))) {
    return 0;
  }
  uVar6 = 0x7fc00000;
LAB_01f7a858:
  *param_5 = uVar6;
  return 1;
}


