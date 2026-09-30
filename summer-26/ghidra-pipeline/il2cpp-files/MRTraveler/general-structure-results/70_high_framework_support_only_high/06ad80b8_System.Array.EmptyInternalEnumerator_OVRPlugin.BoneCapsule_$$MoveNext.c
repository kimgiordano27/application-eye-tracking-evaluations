/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$MoveNext
ENTRY_POINT: 06ad80b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__MoveNext
               (ulong param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               long param_6)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e695f0);
    FUN_03c8f898(PTR_DAT_08e873b0);
    FUN_03c8f898(PTR_DAT_08e83f68);
    FUN_03c8f898(PTR_DAT_08e873b8);
    FUN_03c8f898(PTR_DAT_08e83f78);
    *(undefined1 *)(unaff_x22 + 0xd59) = 1;
  }
  puVar4 = PTR_DAT_08e83f68;
  puVar3 = PTR_DAT_08e695f0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07112c04(4,0);
  }
  FUN_06fffdf0(param_3,*(undefined8 *)PTR_DAT_08e83f78,*(undefined4 *)(param_2 + 0x2c),0);
  lVar7 = *(long *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)puVar4;
  if (lVar7 == 0) {
    lVar7 = FUN_041d81b8(*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x18));
  }
  puVar4 = PTR_DAT_08e873b0;
  uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x170);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar8 = FUN_0710fcf0(uVar8,0);
  FUN_06ffe4e4(param_3,uVar6,lVar7,uVar8,0);
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x18);
  }
  FUN_06fffdf0(param_3,*(undefined8 *)puVar4,uVar5,0);
  if (*(long *)(param_2 + 0x10) != 0) {
    iVar1 = *(int *)(param_2 + 0x28);
    lVar7 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x178);
    iVar2 = *(int *)(param_2 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03cf1244();
    }
    puVar4 = PTR_DAT_08e873b8;
    uVar6 = FUN_03c8f97c(lVar7,iVar2 - iVar1);
    FUN_06ad7f04(param_2,uVar6,0,
                 *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x180));
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x188);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar8 = FUN_0710fcf0(uVar8,0);
    FUN_06ffe4e4(param_3,*(undefined8 *)puVar4,uVar6,uVar8,0);
    return;
  }
  return;
}


