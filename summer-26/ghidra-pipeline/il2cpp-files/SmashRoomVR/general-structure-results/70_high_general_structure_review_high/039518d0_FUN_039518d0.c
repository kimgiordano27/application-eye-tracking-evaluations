/*
FUNCTION_NAME: FUN_039518d0
ENTRY_POINT: 039518d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_9;telemetry_or_network_hits_5
*/


undefined8 FUN_039518d0(long *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_03ffbaa8 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13915);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9e7f0);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    DAT_03ffbaa8 = 1;
  }
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*param_1 + 0x130);
    bVar2 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if ((bVar2 <= bVar1) &&
       (lVar5 = *(long *)(*param_1 + 200),
       *(long *)(lVar5 + (ulong)bVar2 * 8 + -8) ==
       *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__)) {
      bVar2 = *(byte *)(*(long *)StringLiteral_13915 + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(lVar5 + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_13915)) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_03d9e7f0 + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(lVar5 + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03d9e7f0)) {
          thunk_FUN_01ad9084(
                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                            );
          uVar3 = thunk_FUN_01afaadc();
          uVar4 = thunk_FUN_01ad9084(PTR_DAT_03dac160);
          FUN_02fd7c54(uVar3,uVar4,0);
          uVar4 = thunk_FUN_01ad9084(PTR_DAT_03dac168);
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar3,uVar4);
        }
      }
    }
    if (DAT_03ffba98 == (code *)0x0) {
      DAT_03ffba98 = (code *)FUN_01b47f04(
                                         "UnityEngine.JsonUtility::ToJsonInternal(System.Object,System.Boolean)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x039519dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*DAT_03ffba98)(param_1,param_2 & 1);
    return uVar3;
  }
  return *(undefined8 *)Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
}


