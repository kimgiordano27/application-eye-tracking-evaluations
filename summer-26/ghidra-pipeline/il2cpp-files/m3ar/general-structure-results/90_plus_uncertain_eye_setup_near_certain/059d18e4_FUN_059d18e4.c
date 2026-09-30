/*
FUNCTION_NAME: FUN_059d18e4
ENTRY_POINT: 059d18e4
PROGRAM: m3ar-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_059d18e4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_074f6cdc(0x21);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar4 = 0;
    lVar5 = 0x20;
    do {
      iVar2 = *(int *)(param_1 + 0x1c);
      if (iVar1 != iVar2) goto LAB_059d1990;
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (param_2 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor;
      memcpy(auStack_c0,(void *)(lVar3 + lVar5),0x48);
      memcpy(auStack_78,auStack_c0,0x48);
      (**(code **)(param_2 + 0x18))
                (*(undefined8 *)(param_2 + 0x40),auStack_78,*(undefined8 *)(param_2 + 0x28));
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x48;
    } while ((long)uVar4 < (long)*(int *)(param_1 + 0x18));
    iVar2 = *(int *)(param_1 + 0x1c);
LAB_059d1990:
    if (iVar1 != iVar2) {
      FUN_075069a4(0);
    }
  }
  return;
}


