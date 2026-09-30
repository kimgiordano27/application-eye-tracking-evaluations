/*
FUNCTION_NAME: Unity.Mathematics.int3$$.ctor
ENTRY_POINT: 021973a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Unity_Mathematics_int3___ctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
                    /* try { // try from 021973b0 to 022973c7 has its CatchHandler @ 02197400 */
  if ((DAT_037814d6 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_10__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<MeshCollider>__);
    DAT_037814d6 = 1;
  }
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x480) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_48 = FUN_021a10fc(*(long *)(param_1 + 0x480),0);
  puVar1 = Method_UnityEngine_GameObject_GetComponentInChildren<MeshCollider>__;
  if (local_48._12_4_ == 0) {
LAB_02197498:
    uVar3 = 1;
  }
  else {
    if (0 < local_48._12_4_) {
      iVar4 = 0;
      do {
        FUN_0138116c(local_48,iVar4,&local_38,*(undefined8 *)puVar1);
        FUN_021f605c(&local_58,local_38,0);
        uVar2 = FUN_021f4ffc(param_2,param_3,local_58,uStack_50,0);
        if (((uVar2 & 1) != 0) ||
           (uVar2 = FUN_021ef194(param_1 + 0x18,local_58,uStack_50,param_2,param_3,0),
           (uVar2 & 1) != 0)) goto LAB_02197498;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_48._12_4_);
    }
    uVar3 = 0;
  }
  return uVar3;
}


