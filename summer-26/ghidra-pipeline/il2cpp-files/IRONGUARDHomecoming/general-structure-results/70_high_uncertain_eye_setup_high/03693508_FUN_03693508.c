/*
FUNCTION_NAME: FUN_03693508
ENTRY_POINT: 03693508
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03693508(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined1 local_d0 [40];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  
  if ((DAT_04833eda & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_66__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_67__);
    DAT_04833eda = 1;
  }
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_66__;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_118 = 0;
  local_120 = 0;
  uStack_11c = 0;
  lVar9 = *(long *)(param_1 + 0x40);
  while (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x20) < 1) {
      return;
    }
    FUN_02606308(&local_a8,lVar9,*(undefined8 *)puVar1);
    uVar8 = uStack_90;
    uVar7 = local_94;
    uVar6 = uStack_98;
    uVar5 = uStack_9c;
    uVar4 = uStack_a0;
    uVar3 = uStack_a4;
    uVar2 = local_a8;
    FUN_036670e4(&local_a8,*(undefined8 *)(param_1 + 0x20),0,0);
    local_f0 = CONCAT44(uStack_a4,local_a8);
    uStack_e8 = uStack_a0;
    uStack_dc = local_94;
    local_d8 = uStack_90;
    uStack_e4 = uStack_9c;
    local_e0 = uStack_98;
    FUN_036936e4(uVar3,uVar4,uVar5,param_1,local_88);
    FUN_03693858(uVar6,uVar7,uVar8,local_8c,param_1,uStack_84);
    FUN_036670e4(&local_a8,*(undefined8 *)(param_1 + 0x20),0,0);
    local_130 = CONCAT44(uStack_a4,local_a8);
    uStack_128 = uStack_a0;
    uStack_11c = local_94;
    local_118 = uStack_90;
    uStack_124 = uStack_9c;
    local_120 = uStack_98;
    FUN_036677c0(&local_a8,&local_f0,&local_130,0);
    lVar9 = *(long *)(param_1 + 0x30);
    if (lVar9 == 0) break;
    local_a8 = uVar2;
    uStack_a4 = uVar3;
    uStack_a0 = uVar4;
    uStack_9c = uVar5;
    uStack_98 = uVar6;
    local_94 = uVar7;
    uStack_90 = uVar8;
    (**(code **)(lVar9 + 0x18))
              (*(undefined8 *)(lVar9 + 0x40),&local_a8,local_d0,*(undefined8 *)(lVar9 + 0x28));
    lVar9 = *(long *)(param_1 + 0x40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


