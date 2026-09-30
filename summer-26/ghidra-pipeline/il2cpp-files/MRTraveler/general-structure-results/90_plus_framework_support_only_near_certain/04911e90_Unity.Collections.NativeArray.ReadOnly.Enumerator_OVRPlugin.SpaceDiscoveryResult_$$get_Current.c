/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 04911e90
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current
               (long param_1,int param_2,int param_3,undefined8 *param_4,undefined8 param_5,
               long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (*(long *)(param_6 + 0x38) == 0) {
    FUN_03cf12a0(param_6);
  }
  if (param_1 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar2 = thunk_FUN_03cf5234();
    uVar3 = thunk_FUN_03ce5214(PTR_DAT_08e80478);
    FUN_0705a2f8(uVar2,uVar3,0);
  }
  else {
    if ((param_3 < 0) || (param_2 < 0)) {
      FUN_088d75a0(PTR_DAT_08e80610);
      return;
    }
    if (param_3 <= *(int *)(param_1 + 0x18) - param_2) {
      lVar1 = *(long *)(*(long *)(param_6 + 0x38) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03cf1244();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar4 = *(long *)(*(long *)(param_6 + 0x38) + 8);
      lVar1 = *(long *)(lVar4 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03cf1244();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03cf1244();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar1 = *(long *)(lVar4 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03cf1244();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03cf1244();
      }
      if (**(long **)(lVar1 + 0xb8) != 0) {
        in_stack_00000020 = *param_4;
        in_stack_00000028 = param_4[1];
        in_stack_00000030 = param_4[2];
        FUN_0513e678(**(long **)(lVar1 + 0xb8),param_1,param_2,param_3,&stack0x00000020,param_5,
                     *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x30));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar2 = thunk_FUN_03cf5234();
    uVar3 = thunk_FUN_03ce5214(PTR_DAT_08e80618);
    FUN_07064ba8(uVar2,uVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar2,param_6);
}


