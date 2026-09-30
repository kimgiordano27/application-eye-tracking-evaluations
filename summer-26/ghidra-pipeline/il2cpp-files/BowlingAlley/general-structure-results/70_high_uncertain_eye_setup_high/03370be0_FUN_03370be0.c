/*
FUNCTION_NAME: FUN_03370be0
ENTRY_POINT: 03370be0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_03370be0(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
  puStack_68 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__ != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__,&local_58,
               FUN_03383c04);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


