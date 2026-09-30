/*
FUNCTION_NAME: OVR.AudioManager$$GetActiveSnapshot
ENTRY_POINT: 034f8dac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 OVR_AudioManager__GetActiveSnapshot(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long lVar7;
  undefined8 uVar8;
  
  if (in_ZR || in_NG != in_OV) {
    FUN_0358b620(0xe,0x16,0);
    if (unaff_w19 < 0) {
LAB_034f8f30:
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar8 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                                );
      uVar6 = thunk_FUN_01efb3a4(
                                Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_ParseMember__
                                );
      FUN_034f3578(uVar8,uVar5,uVar6);
      uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_XHashSetPool_Free<Flow>__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,uVar5);
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else if (unaff_w19 < 0) goto LAB_034f8f30;
  if (*(int *)(unaff_x21 + 0x18) - unaff_w19 < unaff_w20) {
    FUN_0358b438(5,0xf,0);
  }
  puVar2 = 
  Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier__
  ;
  if (unaff_w19 == 0) {
    uVar8 = **(undefined8 **)
              (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
  }
  else {
    if (0x2aaaaaaa < unaff_w19) {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
      uVar8 = thunk_FUN_01f113fc();
      uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_XHashSetPool_Free<GraphReference>__);
      uVar8 = FUN_033f0c40(uVar5,uVar8,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                                );
      FUN_034f3578(uVar5,uVar6,uVar8);
      uVar8 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_XHashSetPool_Free<Flow>__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar8);
    }
    FUN_028a57b0();
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = 
    Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__ctor__;
    lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar3 = *(long *)puVar2;
      }
      uVar8 = **(undefined8 **)(lVar3 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__ctor__
                                );
      FUN_02721170(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_CopyFrom__
                   ,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar4 = lVar7;
      thunk_FUN_01f51358(plVar4,lVar7);
    }
    uVar8 = FUN_024146a8(unaff_w19 * 3 + -1,0,0,lVar7,*(undefined8 *)puVar1);
  }
  return uVar8;
}


