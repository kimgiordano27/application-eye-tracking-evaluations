/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03ab2e18
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  puVar1 = PTR_DAT_07d86398;
  if ((DAT_082543fa & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(PTR_DAT_07d88a88);
    DAT_082543fa = 1;
  }
  puVar2 = PTR_DAT_07d88a88;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_075b0180(param_6,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar2);
  }
  lVar4 = FUN_03aac8e4();
  if ((lVar4 != 0) && (param_5 != 0)) {
    FUN_075aa9c8(param_5,0);
    if ((uVar3 & 1) == 0) {
      FUN_03aafbb8(param_1,param_2,param_3);
      FUN_03ad8654(lVar4 + 0x38,param_4);
    }
    else {
      FUN_03aafbb8(&stack0x00000060,param_1,param_2,param_3);
      if ((param_6 == 0) || (lVar5 = FUN_075aa9c8(param_6,0), lVar5 == 0)) goto LAB_03ab2f70;
      FUN_075ba188(lVar5,0);
      in_stack_00000038 = in_stack_00000068;
      in_stack_00000030 = in_stack_00000060;
      in_stack_00000048 = in_stack_00000078;
      in_stack_00000040 = in_stack_00000070;
      in_stack_00000058 = in_stack_00000088;
      in_stack_00000050 = in_stack_00000080;
      FUN_03ad86fc(lVar4 + 0x38,param_4,&stack0x00000030,0);
    }
    return;
  }
LAB_03ab2f70:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


