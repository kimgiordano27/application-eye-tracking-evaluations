/*
FUNCTION_NAME: FUN_034f8d1c
ENTRY_POINT: 034f8d1c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_034f8d1c(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_04832ea1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(
                      Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_CopyFrom__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_XEventGraph_TriggerEventHandler<EmptyEventArgs>__
                      );
    DAT_04832ea1 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(0xf,0);
  }
  if ((param_2 < 0) || ((param_2 != 0 && (*(int *)(param_1 + 0x18) <= param_2)))) {
    FUN_0358b620(0xe,0x16,0);
    if (param_3 < 0) {
LAB_034f8f30:
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                                );
      uVar8 = thunk_FUN_01efb3a4(
                                Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_ParseMember__
                                );
      FUN_034f3578(uVar5,uVar6,uVar8);
      uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_XHashSetPool_Free<Flow>__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar6);
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else if (param_3 < 0) goto LAB_034f8f30;
  if (*(int *)(param_1 + 0x18) - param_3 < param_2) {
    FUN_0358b438(5,0xf,0);
  }
  puVar2 = 
  Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier__
  ;
  if (param_3 == 0) {
    uVar5 = **(undefined8 **)
              (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
  }
  else {
    if (0x2aaaaaaa < param_3) {
      local_50 = CONCAT44(local_50._4_4_,0x2aaaaaaa);
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar5 = thunk_FUN_01f113fc(uVar5,&local_50);
      uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_XHashSetPool_Free<GraphReference>__);
      uVar5 = FUN_033f0c40(uVar6,uVar5,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      uVar8 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                                );
      FUN_034f3578(uVar6,uVar8,uVar5);
      uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_XHashSetPool_Free<Flow>__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,uVar5);
    }
    local_50 = 0;
    uStack_48 = 0;
    FUN_028a57b0(&local_50,param_1,param_2,param_3,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_XEventGraph_TriggerEventHandler<EmptyEventArgs>__);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar2;
    }
    uVar6 = uStack_48;
    uVar5 = local_50;
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
    uVar5 = FUN_024146a8(param_3 * 3 + -1,uVar5,uVar6,lVar7,*(undefined8 *)puVar1);
  }
  return uVar5;
}


