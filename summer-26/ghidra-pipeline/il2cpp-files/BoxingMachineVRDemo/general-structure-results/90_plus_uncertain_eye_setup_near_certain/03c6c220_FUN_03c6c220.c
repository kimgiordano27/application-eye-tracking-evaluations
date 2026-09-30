/*
FUNCTION_NAME: FUN_03c6c220
ENTRY_POINT: 03c6c220
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_03c6c220(long param_1,uint param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(uint *)(param_1 + 0x18) < param_2) {
    FUN_0502837c(0);
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x18) - param_3 < (int)param_2)) {
    FUN_050283a8(0);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050188b4(8,0);
  }
  if ((int)param_2 < (int)(param_3 + param_2)) {
    lVar5 = (long)(int)param_2 * 0x18 + 0x20;
    lVar6 = (long)(int)(param_3 + param_2) - (long)(int)param_2;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar4 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      puVar1 = (undefined8 *)(lVar4 + lVar5);
      if (param_4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose;
      local_60 = *puVar1;
      uStack_58 = puVar1[1];
      local_50 = puVar1[2];
      uVar3 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&local_60,*(undefined8 *)(param_4 + 0x28));
      if ((uVar3 & 1) != 0) goto LAB_03c6c318;
      param_2 = param_2 + 1;
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 != 0);
  }
  param_2 = 0xffffffff;
LAB_03c6c318:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


