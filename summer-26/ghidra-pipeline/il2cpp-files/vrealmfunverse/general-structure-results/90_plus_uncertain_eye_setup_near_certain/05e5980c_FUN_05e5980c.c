/*
FUNCTION_NAME: FUN_05e5980c
ENTRY_POINT: 05e5980c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x05e5997c) */
/* WARNING: Removing unreachable block (ram,0x05e59980) */
/* WARNING: Removing unreachable block (ram,0x05e59990) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05e5980c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  char local_3c [4];
  undefined8 local_38;
  
  puVar1 = PTR_DAT_063201e8;
  if ((DAT_066dc60e & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_112__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_113__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_114__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_115__);
    FUN_02b3c81c(PTR_DAT_063201e8);
    DAT_066dc60e = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  local_38 = 0;
  local_3c[0] = '\0';
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_033470bc(0);
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
        local_38 = *(undefined8 *)(param_1 + 0x18);
        local_3c[0] = '\0';
        FUN_04ddecfc(local_38,local_3c,0);
        puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_114__;
        puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_112__;
        iVar6 = 0x80;
        do {
          if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar4 = FUN_04a981c0(*(long *)(param_1 + 0x18),*(undefined8 *)puVar1);
          FUN_03f09b18(lVar5,uVar4,*(undefined8 *)puVar2);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (local_3c[0] != '\0') {
          thunk_FUN_02b4a54c(local_38,0);
        }
      }
      UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>__PreprocessTween
                (lVar5,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_113__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


