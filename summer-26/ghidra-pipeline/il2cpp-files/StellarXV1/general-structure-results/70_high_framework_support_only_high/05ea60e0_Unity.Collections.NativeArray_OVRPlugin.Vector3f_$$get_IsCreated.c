/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_IsCreated
ENTRY_POINT: 05ea60e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_IsCreated(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  uint uStack000000000000001c;
  
  uVar1 = FUN_0768890c(param_1,0);
  uVar2 = FUN_0768890c(*(long *)(unaff_x22 + 0x88) + 0x20,0);
  uVar3 = FUN_07691f40(uVar1,uVar2,0);
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x70);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    plVar4 = (long *)FUN_0768890c(uVar1,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar1 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    uStack000000000000001c = *(uint *)((long)unaff_x19 + 0xc) & 0x7fffffff;
    uVar2 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x22 + 0x48),&stack0x0000001c);
    FUN_074e74a4(*(undefined8 *)PTR_DAT_092ba5f8,uVar1,uVar2,0);
  }
  else {
    plVar4 = (long *)*unaff_x19;
    if ((plVar4 != (long *)0x0) && (*plVar4 == *(long *)(unaff_x22 + 0x90))) {
      FUN_074e87b0(plVar4,(int)unaff_x19[1],*(uint *)((long)unaff_x19 + 0xc) & 0x7fffffff,0);
      return;
    }
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_05ea9d4c();
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_065589b8();
  }
  return;
}


