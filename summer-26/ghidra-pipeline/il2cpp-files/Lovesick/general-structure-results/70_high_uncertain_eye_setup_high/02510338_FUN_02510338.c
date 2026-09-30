/*
FUNCTION_NAME: FUN_02510338
ENTRY_POINT: 02510338
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02510338(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if ((DAT_03782944 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_SetDuration<AudioClipPlayable>__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_66__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03782944 = 1;
  }
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_02510428;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar2 = FUN_0268b4e0(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        lVar3 = FUN_010e61f4(*(long *)(param_1 + 0x28),
                             *(undefined8 *)
                              Method_UnityEngine_Playables_PlayableExtensions_SetDuration<AudioClipPlayable>__
                            );
        uVar4 = 0;
        *(long *)(param_1 + 0x38) = lVar3;
        *(undefined4 *)(param_1 + 0x40) = 0;
        while (lVar3 != 0) {
          if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar4) {
            *(undefined8 *)(param_1 + 0x38) = 0;
            return 0;
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar5 = *(undefined8 *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
          lVar3 = thunk_FUN_00d6225c(uVar5,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_66__);
          if (lVar3 != 0) {
            *(undefined8 *)(param_1 + 0x18) = uVar5;
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
LAB_02510428:
          lVar3 = *(long *)(param_1 + 0x38);
          uVar4 = *(int *)(param_1 + 0x40) + 1;
          *(uint *)(param_1 + 0x40) = uVar4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  return 0;
}


