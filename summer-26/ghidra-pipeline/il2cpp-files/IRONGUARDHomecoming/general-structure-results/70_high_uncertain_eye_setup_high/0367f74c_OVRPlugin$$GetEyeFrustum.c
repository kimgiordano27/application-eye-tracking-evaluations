/*
FUNCTION_NAME: OVRPlugin$$GetEyeFrustum
ENTRY_POINT: 0367f74c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetEyeFrustum(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 unaff_x21;
  long *plVar7;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  undefined8 *unaff_x24;
  undefined8 uVar9;
  
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_99__);
  thunk_FUN_01efb3a4(
                    Method_MyCustomSceneModelLoader_<DelayedLoad>d__0_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_InputSystem_Utilities_NameAndParameters_<>c_<ToString>b__8_0__
                    );
  thunk_FUN_01efb3a4(
                    Method_System_Collections_Specialized_NameObjectCollectionBase_KeysCollection__ctor__
                    );
  thunk_FUN_01efb3a4(
                    Method_System_Collections_Specialized_NameObjectCollectionBase_KeysCollection_System_Collections_ICollection_CopyTo__
                    );
  thunk_FUN_01efb3a4(
                    Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_MoveNext__
                    );
  thunk_FUN_01efb3a4(
                    Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(
                    Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_get_Current__
                    );
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_Namespace_<AndAncestors>d__21_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_Namespace_<get_Ancestors>d__20_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_98__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass10_0_<set_onBeforeUpdate>b__0__
                    );
  *(undefined1 *)(unaff_x23 + 0xe3d) = 1;
  lVar4 = thunk_FUN_01f117cc(*unaff_x24);
  FUN_035ac8e8(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = unaff_x21;
    thunk_FUN_01f51358();
    plVar7 = (long *)(lVar4 + 0x18);
    *plVar7 = unaff_x22;
    thunk_FUN_01f51358(plVar7);
    puVar3 = 
    Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass10_0_<set_onBeforeUpdate>b__0__
    ;
    puVar2 = 
    Method_Unity_VisualScripting_Namespace_<get_Ancestors>d__20_System_Collections_IEnumerator_Reset__
    ;
    puVar1 = 
    Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_MoveNext__
    ;
    if ((*plVar7 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
      FUN_02b07348(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(*plVar7 + 0x38),
                   *(undefined8 *)
                    Method_MyCustomSceneModelLoader_<DelayedLoad>d__0_System_Collections_IEnumerator_Reset__
                  );
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_02e686ac(uVar5,lVar4,*(undefined8 *)puVar2,0);
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar3;
      }
      puVar2 = 
      Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_get_Current__
      ;
      puVar1 = 
      Method_System_Collections_Specialized_NameObjectCollectionBase_KeysCollection_System_Collections_ICollection_CopyTo__
      ;
      lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar8 == 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = *(long *)puVar3;
        }
        uVar9 = **(undefined8 **)(lVar4 + 0xb8);
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
      lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_02e0b580(lVar4,uVar5,lVar8);
      lVar8 = *plVar7;
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_0367f9b4(uVar5,lVar8,lVar4);
      if ((*plVar7 != 0) && (lVar4 != 0)) {
        FUN_02e0b5e0(lVar4,*(undefined8 *)(*plVar7 + 0x30),
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_NameAndParameters_<>c_<ToString>b__8_0__
                    );
        if ((*plVar7 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
          FUN_02b07154(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(*plVar7 + 0x38),uVar5,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_99__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


