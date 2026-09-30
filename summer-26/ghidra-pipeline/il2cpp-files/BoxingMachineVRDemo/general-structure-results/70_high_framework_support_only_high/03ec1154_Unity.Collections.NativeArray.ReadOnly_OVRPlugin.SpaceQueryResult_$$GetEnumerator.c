/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 03ec1154
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               byte param_6,undefined4 param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_stack_00000050;
  
  FUN_0504920c(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar2 = thunk_FUN_02d9d534();
    uVar1 = thunk_FUN_02dc61f4(PTR_DAT_06769b28);
    FUN_04f77010(uVar2,uVar1,0);
  }
  else {
    if (0 < param_8) {
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(in_stack_00000050 + 0x20) + 0xc0) + 8) + 0x135) &
          1) == 0) {
        FUN_02d9a2e0();
      }
      uVar1 = thunk_FUN_02d9d534();
      FUN_03aabcd0(uVar1,param_7,
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000050 + 0x20) + 0xc0) + 0x28));
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x10),uVar1);
      *(long *)(param_1 + 0x18) = param_2;
      thunk_FUN_02dd37b4((long *)(param_1 + 0x18),param_2);
      *(int *)(param_1 + 0x38) = param_8;
      *(undefined8 *)(param_1 + 0x20) = param_3;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x20),param_3);
      *(undefined8 *)(param_1 + 0x28) = param_4;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x28),param_4);
      *(undefined8 *)(param_1 + 0x30) = param_5;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x30),param_5);
      *(byte *)(param_1 + 0x3c) = param_6 & 1;
      return;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar2 = thunk_FUN_02d9d534();
    uVar1 = thunk_FUN_02dc61f4(PTR_DAT_0676a118);
    uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06769b38);
    FUN_04f77088(uVar2,uVar1,uVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar2,in_stack_00000050);
}


