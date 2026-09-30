/*
FUNCTION_NAME: FUN_05f18bac
ENTRY_POINT: 05f18bac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_05f18bac(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,long param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_6 == 0) {
    param_6 = FUN_070dd958(*(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 8));
  }
  uVar5 = param_5[5];
  uVar4 = param_5[4];
  uVar3 = param_5[7];
  uVar2 = param_5[6];
  uVar9 = param_5[1];
  uVar8 = *param_5;
  uVar7 = param_5[3];
  uVar6 = param_5[2];
  lVar1 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  local_80 = uVar8;
  uStack_78 = uVar9;
  uStack_70 = uVar6;
  uStack_68 = uVar7;
  local_60 = uVar4;
  uStack_58 = uVar5;
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
            (param_2,param_3,param_4,&local_80,param_6,
             *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x58));
  return;
}


