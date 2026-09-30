/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Equals
ENTRY_POINT: 0469ebb0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Equals(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0469eba4 with catch @ 0469ebb0
                        */
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_02feb2c4(param_1);
  }
  if (*unaff_x20 != 0) {
    iVar1 = *(int *)((long)unaff_x20 + 0xc);
    if (iVar1 == 0) {
      thunk_FUN_03037804(PTR_DAT_06f6d640);
      uVar2 = thunk_FUN_0301080c();
      uVar3 = thunk_FUN_03037804(PTR_DAT_06f9b0b8);
      FUN_05aeefcc(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar2);
    }
    if (1 < iVar1) {
      FUN_068b50f4(*unaff_x20,iVar1,0);
      *(undefined4 *)((long)unaff_x20 + 0xc) = 0;
    }
    *unaff_x20 = 0;
  }
  return;
}


