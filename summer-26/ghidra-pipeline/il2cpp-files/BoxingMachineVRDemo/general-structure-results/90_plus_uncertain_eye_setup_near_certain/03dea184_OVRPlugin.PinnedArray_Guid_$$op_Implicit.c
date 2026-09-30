/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$op_Implicit
ENTRY_POINT: 03dea184
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>__op_Implicit
               (long param_1,long *param_2,int param_3,undefined4 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 in_stack_00000008;
  int iStack000000000000000c;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_02d9a2e0(param_1);
  }
  if (param_3 < *(int *)((long)param_2 + 0x14)) {
    *(undefined4 *)(*param_2 + (long)param_3 * 4) = param_4;
    return;
  }
  uVar3 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
  uVar3 = FUN_02d60934(uVar3,4);
  FUN_028f4e40();
  puVar1 = PTR_DAT_0675e7b8;
  uVar4 = thunk_FUN_02dc61f4(PTR_DAT_0675e7b8);
  FUN_028f7030(uVar3,uVar4);
  uVar4 = thunk_FUN_02dc61f4(puVar1);
  FUN_028f7064(uVar3,0,uVar4);
  puVar1 = PTR_DAT_0675e258;
  iStack000000000000000c = param_3;
  uVar4 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&stack0x0000000c);
  FUN_028f4e40(uVar3);
  FUN_028f7030(uVar3,uVar4);
  FUN_028f7064(uVar3,1,uVar4);
  FUN_028f4e40(uVar3);
  puVar2 = PTR_DAT_06769af8;
  uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06769af8);
  FUN_028f7030(uVar3,uVar4);
  uVar4 = thunk_FUN_02dc61f4(puVar2);
  FUN_028f7064(uVar3,2,uVar4);
  FUN_028f85d8(*(undefined8 *)(param_5 + 0x20));
  in_stack_00000008 = *(undefined4 *)((long)param_2 + 0x14);
  uVar4 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
  FUN_028f4e40(uVar3);
  FUN_028f7030(uVar3,uVar4);
  FUN_028f7064(uVar3,3,uVar4);
  uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06769eb0);
  uVar3 = FUN_04e8e72c(uVar4,uVar3,0);
  thunk_FUN_02dc61f4(PTR_DAT_06763258);
  uVar4 = thunk_FUN_02d9d534();
  FUN_05002a00(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar4,param_5);
}


