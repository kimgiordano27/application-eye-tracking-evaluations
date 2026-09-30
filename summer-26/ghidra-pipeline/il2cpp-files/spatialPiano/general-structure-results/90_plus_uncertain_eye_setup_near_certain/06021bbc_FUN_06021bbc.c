/*
FUNCTION_NAME: FUN_06021bbc
ENTRY_POINT: 06021bbc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_06021bbc(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_067c8f20;
  if ((DAT_06bc53ce & 1) == 0) {
    FUN_02f08768(Method_OVRTask_Builder_ToTask<bool>__);
    FUN_02f08768(Method_OVRTask_Builder_ToTask<OVRAnchor>__);
    FUN_02f08768(Method_OVRTask_Builder_ToTask<OVRPlugin_Result>__);
    FUN_02f08768(Method_OVRVirtualKeyboard_<>c_<InitializeGlTFModel>b__92_2__);
    FUN_02f08768(Method_OVRVirtualKeyboard_<>c_<PopulateCollision>b__94_0__);
    FUN_02f08768(PTR_DAT_067c8f20);
    DAT_06bc53ce = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar3 = FUN_060f245c(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = FUN_03abfc98(*(long *)(param_1 + 0x20),param_2,
                         *(undefined8 *)Method_OVRTask_Builder_ToTask<OVRPlugin_Result>__);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar3 = FUN_037524bc(*(long *)(param_1 + 0x28),param_2,
                           *(undefined8 *)Method_OVRTask_Builder_ToTask<bool>__);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      lVar4 = *(long *)(param_1 + 0x20);
      if (param_3 < 0) {
        if (lVar4 == 0) goto LAB_06021d48;
      }
      else {
        if (lVar4 == 0) goto LAB_06021d48;
        if (param_3 < *(int *)(lVar4 + 0x18)) {
          FUN_03ac058c(lVar4,param_3,param_2,
                       *(undefined8 *)Method_OVRVirtualKeyboard_<>c_<InitializeGlTFModel>b__92_2__);
          return 1;
        }
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar6 = *(long *)Method_OVRTask_Builder_ToTask<OVRAnchor>__;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = param_2;
        }
        else {
          FUN_03abf904(lVar4,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        return 1;
      }
    }
  }
LAB_06021d48:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


