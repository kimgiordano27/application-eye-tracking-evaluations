/*
FUNCTION_NAME: FUN_05e90dd8
ENTRY_POINT: 05e90dd8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e90dd8(long param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 local_44 [4];
  
  if ((DAT_06dc3c9a & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff7d8);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__);
    DAT_06dc3c9a = 1;
  }
  if (param_1 == 0) {
LAB_05e90ef0:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar3 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff7d8);
  FUN_05377fb8(plVar3,*(int *)(param_1 + 0x18) << 1,0);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__;
  puVar1 = PTR_DAT_069fb9c0;
  if ((int)param_2 < (int)(param_3 + param_2)) {
    lVar5 = (long)(int)(param_3 + param_2) - (long)(int)param_2;
    puVar6 = (undefined1 *)(param_1 + (int)param_2 + 0x20);
    do {
      if (*(uint *)(param_1 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      local_44[0] = *puVar6;
      uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x18),local_44);
      if (plVar3 == (long *)0x0) goto LAB_05e90ef0;
      FUN_0537ab70(plVar3,*(undefined8 *)puVar2,uVar4,0);
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
      param_2 = param_2 + 1;
    } while (lVar5 != 0);
  }
  else if (plVar3 == (long *)0x0) goto LAB_05e90ef0;
  (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  return;
}


