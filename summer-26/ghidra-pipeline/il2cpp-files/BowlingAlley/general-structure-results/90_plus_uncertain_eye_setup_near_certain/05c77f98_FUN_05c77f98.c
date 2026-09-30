/*
FUNCTION_NAME: FUN_05c77f98
ENTRY_POINT: 05c77f98
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05c77f98(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_076d7dba & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072ac7a0);
    thunk_FUN_032e1da0(PTR_DAT_072ac7a8);
    thunk_FUN_032e1da0(PTR_DAT_072ac7b0);
    thunk_FUN_032e1da0(PTR_DAT_072823c0);
    thunk_FUN_032e1da0(PTR_DAT_07282968);
    thunk_FUN_032e1da0(PTR_DAT_072aa5b8);
    DAT_076d7dba = 1;
  }
  FUN_059660a0(param_1,0);
  puVar6 = PTR_DAT_072ac7b0;
  puVar5 = PTR_DAT_072ac7a8;
  puVar3 = PTR_DAT_072aa5b8;
  puVar2 = PTR_DAT_07282968;
  puVar1 = PTR_DAT_072823c0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    puVar4 = PTR_DAT_072ac7a0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_0451f220(&local_50,*(undefined4 *)(param_2 + 0x20),4,0,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x20) = uStack_48;
    *(undefined8 *)(param_1 + 0x18) = local_50;
    FUN_0451f704(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                 *(undefined8 *)puVar6);
    local_60 = 0;
    uStack_58 = 0;
    FUN_044487b0(&local_60,*(undefined4 *)(param_2 + 0x30),4,0,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x30) = uStack_58;
    *(undefined8 *)(param_1 + 0x28) = local_60;
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
              (param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
               *(undefined8 *)puVar5);
    local_70 = 0;
    uStack_68 = 0;
    FUN_044bdf14(&local_70,*(undefined4 *)(param_2 + 0x40),4,0,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x40) = uStack_68;
    *(undefined8 *)(param_1 + 0x38) = local_70;
    FUN_044be398(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),
                 *(undefined8 *)puVar4);
    local_80 = 0;
    uStack_78 = 0;
    FUN_044487b0(&local_80,*(undefined4 *)(param_2 + 0x50),4,0,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x50) = uStack_78;
    *(undefined8 *)(param_1 + 0x48) = local_80;
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
              (param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50),
               *(undefined8 *)puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


