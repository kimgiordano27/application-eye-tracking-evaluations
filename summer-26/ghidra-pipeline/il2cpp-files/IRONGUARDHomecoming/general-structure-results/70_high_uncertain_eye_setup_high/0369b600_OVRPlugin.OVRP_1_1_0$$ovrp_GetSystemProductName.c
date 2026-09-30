/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemProductName
ENTRY_POINT: 0369b600
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemProductName(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x19;
  long lVar3;
  
  if (in_w8 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  uVar2 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_FileSystem_LinkOrCopyFile__);
  FUN_02ab0374();
  puVar1 = 
  Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
  ;
  if (lVar3 != 0) {
    System_Collections_Generic_List<KeyValuePair<int,_object>>__System_Collections_IList_IndexOf
              (lVar3,uVar2,
               *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_034f6024();
    if (lVar3 != 0) {
      FUN_02f47338(lVar3,uVar2,
                   *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


