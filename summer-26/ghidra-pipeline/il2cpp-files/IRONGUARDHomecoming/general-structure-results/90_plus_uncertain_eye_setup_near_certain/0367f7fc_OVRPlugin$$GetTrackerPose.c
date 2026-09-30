/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 0367f7fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 unaff_x21;
  long *plVar7;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  undefined8 uVar9;
  
  *(undefined8 *)(unaff_x23 + 0x10) = unaff_x21;
  thunk_FUN_01f51358();
  plVar7 = (long *)(unaff_x23 + 0x18);
  *plVar7 = unaff_x22;
  thunk_FUN_01f51358(plVar7);
  puVar3 = 
  Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass10_0_<set_onBeforeUpdate>b__0__
  ;
  puVar1 = 
  Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_MoveNext__
  ;
  if ((*plVar7 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
    FUN_02b07348(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(*plVar7 + 0x38),
                 *(undefined8 *)
                  Method_MyCustomSceneModelLoader_<DelayedLoad>d__0_System_Collections_IEnumerator_Reset__
                );
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02e686ac();
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar3;
    }
    puVar2 = 
    Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_get_Current__
    ;
    puVar1 = 
    Method_System_Collections_Specialized_NameObjectCollectionBase_KeysCollection_System_Collections_ICollection_CopyTo__
    ;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar3;
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_Reset__
                                );
      FUN_02e68a30(lVar8,uVar9,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_Namespace_<AndAncestors>d__21_System_Collections_IEnumerator_Reset__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar6 = lVar8;
      thunk_FUN_01f51358(plVar6,lVar8);
    }
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02e0b580(lVar5,uVar4,lVar8);
    lVar8 = *plVar7;
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_0367f9b4(uVar4,lVar8,lVar5);
    if ((*plVar7 != 0) && (lVar5 != 0)) {
      FUN_02e0b5e0(lVar5,*(undefined8 *)(*plVar7 + 0x30),
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_NameAndParameters_<>c_<ToString>b__8_0__
                  );
      if ((*plVar7 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
        FUN_02b07154(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(*plVar7 + 0x38),uVar4,
                     *(undefined8 *)
                      Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_99__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


