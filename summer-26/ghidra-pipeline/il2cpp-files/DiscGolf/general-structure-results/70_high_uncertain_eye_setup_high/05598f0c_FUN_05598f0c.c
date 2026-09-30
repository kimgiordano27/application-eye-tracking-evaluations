/*
FUNCTION_NAME: FUN_05598f0c
ENTRY_POINT: 05598f0c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05598f0c(long *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = OVRPlugin_SpaceQueryResult_var;
  if ((DAT_06dbb59a & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a1d6f0);
    FUN_02d965b8(PTR_DAT_06a233e0);
    FUN_02d965b8(OVRPlugin_Vector3f_var);
    FUN_02d965b8(OVRPlugin_VirtualKeyboardModelAnimationState_var);
    FUN_02d965b8(PTR_DAT_06a1a968);
    FUN_02d965b8(PTR_DAT_06a0e0b0);
    FUN_02d965b8(PTR_DAT_06a1cda8);
    FUN_02d965b8(PTR_DAT_06a1a970);
    FUN_02d965b8(OVRPlugin_SpaceQueryResult_var);
    DAT_06dbb59a = 1;
  }
  FUN_055848a4(param_1,*(undefined8 *)puVar3);
  puVar4 = PTR_DAT_06a1a968;
  puVar3 = PTR_DAT_069fb9c0;
  if (param_1 != (long *)0x0) {
    lVar5 = *(long *)(PTR_DAT_069fb9c0 + 0xe0);
    lVar8 = *param_1;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_05501380(param_2,0,0);
      lVar5 = *param_1;
      if ((uVar6 & 1) == 0) {
        uVar7 = (**(code **)(lVar5 + 0x268))(param_1,param_3 & 1,*(undefined8 *)(lVar5 + 0x270));
      }
      else {
        uVar7 = (**(code **)(lVar5 + 0x278))
                          (param_1,param_2,param_3 & 1,*(undefined8 *)(lVar5 + 0x280));
      }
      uVar7 = FUN_035f9a18(uVar7,*(undefined8 *)OVRPlugin_Vector3f_var);
      FUN_0361471c(uVar7,*(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState_var);
      return;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_06a1d6f0 + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06a1d6f0)) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_05501380(param_2,0,0);
      if ((uVar6 & 1) != 0) {
        FUN_055149a0(param_1,param_2,0);
        return;
      }
      FUN_05514bc8(param_1,0);
      return;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_06a0e0b0 + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06a0e0b0)) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_05501380(param_2,0,0);
      if ((uVar6 & 1) != 0) {
        FUN_055138b8(param_1,param_2,param_3 & 1,0);
        return;
      }
      FUN_05513ba8(param_1,param_3 & 1,0);
      return;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_06a1cda8 + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06a1cda8)) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_05501380(param_2,0,0);
      if ((uVar6 & 1) != 0) {
        FUN_0551475c(param_1,param_2,param_3 & 1,0);
        return;
      }
      FUN_0551460c(param_1,param_3 & 1,0);
      return;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_06a1a970 + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06a1a970)) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_05501380(param_2,0,0);
      if ((uVar6 & 1) != 0) {
        FUN_0551411c(param_1,param_2,param_3 & 1,0);
        return;
      }
      FUN_055143c4(param_1,param_3 & 1,0);
      return;
    }
  }
  lVar5 = FUN_02979ef0(param_1,*(undefined8 *)PTR_DAT_06a1a968);
  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(puVar3 + 0xe0));
  }
  uVar6 = FUN_05501380(param_2,0,0);
  if ((uVar6 & 1) == 0) {
    if (lVar5 == 0) goto LAB_0559931c;
    uVar7 = FUN_02cfb49c(0,*(undefined8 *)puVar4,lVar5,param_3 & 1);
  }
  else {
    if (lVar5 == 0) {
LAB_0559931c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = FUN_02cfb510(1,*(undefined8 *)puVar4,lVar5,param_2,param_3 & 1);
  }
  FUN_02979ef0(uVar7,*(undefined8 *)PTR_DAT_06a233e0);
  return;
}


