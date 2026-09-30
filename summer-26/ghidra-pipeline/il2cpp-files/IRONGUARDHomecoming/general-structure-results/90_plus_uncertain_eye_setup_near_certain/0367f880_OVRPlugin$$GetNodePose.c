/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 0367f880
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int in_w8;
  long unaff_x19;
  long *unaff_x21;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x25;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
    param_1 = *unaff_x25;
  }
  puVar2 = 
  Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_get_Current__
  ;
  puVar1 = 
  Method_System_Collections_Specialized_NameObjectCollectionBase_KeysCollection_System_Collections_ICollection_CopyTo__
  ;
  if (*(long *)(*(long *)(param_1 + 0xb8) + 8) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_1 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(param_1 + 0xb8);
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_Reset__
                              );
    FUN_02e68a30(uVar3,uVar7,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_Namespace_<AndAncestors>d__21_System_Collections_IEnumerator_Reset__
                 ,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8);
    *puVar4 = uVar3;
    thunk_FUN_01f51358(puVar4,uVar3);
  }
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_02e0b580();
  lVar6 = *unaff_x21;
  uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_0367f9b4(uVar3,lVar6,lVar5);
  if ((*unaff_x21 != 0) && (lVar5 != 0)) {
    FUN_02e0b5e0(lVar5,*(undefined8 *)(*unaff_x21 + 0x30),
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_NameAndParameters_<>c_<ToString>b__8_0__)
    ;
    if ((*unaff_x21 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
      FUN_02b07154(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(*unaff_x21 + 0x38),uVar3,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_99__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


