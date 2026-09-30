/*
FUNCTION_NAME: FUN_01528660
ENTRY_POINT: 01528660
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01528660(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 local_18 [8];
  
  if ((DAT_037779c7 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TrashSwarm>_get_Count__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_UIFoldout_SetState__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<MedleySmackAJackClown>_get_Item__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Current__
                      );
    DAT_037779c7 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
      return;
    }
    FUN_0132138c(lVar2,*(undefined4 *)(param_1 + 0x10),local_18,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Current__
                );
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_01324eac(*(long *)(param_1 + 0x18),
                   *(undefined8 *)Method_UnityEngine_Rendering_UI_UIFoldout_SetState__);
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar1 = FUN_01323730(*(long *)(param_1 + 0x18),local_18,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<TrashSwarm>_get_Count__);
        *(undefined4 *)(param_1 + 0x10) = uVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


