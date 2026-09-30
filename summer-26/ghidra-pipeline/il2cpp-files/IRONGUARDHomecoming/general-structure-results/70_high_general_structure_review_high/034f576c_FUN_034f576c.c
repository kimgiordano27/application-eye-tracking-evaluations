/*
FUNCTION_NAME: FUN_034f576c
ENTRY_POINT: 034f576c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034f576c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_04832e70 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GraphicsBuffer_SetData<float4>__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(
                      Method_System_Security_Cryptography_X509Certificates_X509Certificate2Collection_Add__
                      );
    thunk_FUN_01efb3a4(Method_Mono_Security_X509_X509Certificate_get_Signature__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_X509Certificates_X509Certificate__ctor__)
    ;
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_X509Certificates_X509Certificate__ctor__)
    ;
    thunk_FUN_01efb3a4(
                      Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData__
                      );
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_X509Certificates_X509Certificate2__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Security_Cryptography_X509Certificates_X509Certificate2_GetCertContentType__
                      );
    DAT_04832e70 = 1;
  }
  puVar2 = Method_System_Security_Cryptography_X509Certificates_X509Certificate2__ctor__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
    FUN_034efd20(uVar9,uVar8);
    uVar8 = thunk_FUN_01efb3a4(
                              Method_System_Security_Cryptography_X509Certificates_X509Certificate2Collection_AddRange__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar8);
  }
  uVar9 = *(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<float4>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar9 = FUN_03579868(uVar9,0);
  plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar2,uVar9,0);
  puVar1 = Method_System_Security_Cryptography_X509Certificates_X509Certificate__ctor__;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
  if (plVar4 != (long *)0x0) {
    if (*(long *)(*plVar4 + 0x40) ==
        *(long *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0x40)) {
      puVar5 = (undefined8 *)thunk_FUN_01f11920();
      *param_1 = *puVar5;
      uVar9 = FUN_03579868(*(undefined8 *)puVar2,0);
      plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar1,uVar9,0);
      puVar3 = 
      Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData__
      ;
      puVar1 = Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
      if (plVar4 == (long *)0x0) goto LAB_034f5a98;
      if (*(long *)(*plVar4 + 0x40) ==
          *(long *)(*(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ +
                   0x40)) {
        puVar6 = (undefined1 *)thunk_FUN_01f11920();
        *(undefined1 *)(param_1 + 1) = *puVar6;
        uVar9 = FUN_03579868(*(undefined8 *)puVar2,0);
        plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar9,0);
        puVar3 = Method_System_Security_Cryptography_X509Certificates_X509Certificate__ctor__;
        if (plVar4 == (long *)0x0) goto LAB_034f5a98;
        if (*(long *)(*plVar4 + 0x40) == *(long *)(*(long *)puVar1 + 0x40)) {
          puVar6 = (undefined1 *)thunk_FUN_01f11920();
          *(undefined1 *)((long)param_1 + 9) = *puVar6;
          uVar9 = FUN_03579868(*(undefined8 *)puVar2,0);
          plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar9,0);
          puVar3 = 
          Method_System_Security_Cryptography_X509Certificates_X509Certificate2Collection_Add__;
          puVar2 = 
          Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
          ;
          if (plVar4 == (long *)0x0) goto LAB_034f5a98;
          if (*(long *)(*plVar4 + 0x40) == *(long *)(*(long *)puVar1 + 0x40)) {
            puVar6 = (undefined1 *)thunk_FUN_01f11920();
            *(undefined1 *)((long)param_1 + 10) = *puVar6;
            uVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
            plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar2,uVar9,0);
            puVar1 = 
            Method_System_Security_Cryptography_X509Certificates_X509Certificate2_GetCertContentType__
            ;
            puVar2 = Method_Oculus_Platform_CAPI_StringToNative__;
            if (plVar4 == (long *)0x0) goto LAB_034f5a98;
            if (*(long *)(*plVar4 + 0x40) ==
                *(long *)(*(long *)Method_Mono_Security_X509_X509Certificate_get_Signature__ + 0x40)
               ) {
              puVar7 = (undefined4 *)thunk_FUN_01f11920();
              *(undefined4 *)((long)param_1 + 0xc) = *puVar7;
              uVar9 = FUN_03579868(*(undefined8 *)puVar2,0);
              plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar1,uVar9,0);
              if (plVar4 == (long *)0x0) goto LAB_034f5a98;
              if (*(long *)(*plVar4 + 0x40) ==
                  *(long *)(*(long *)
                             Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                           + 0x40)) {
                puVar6 = (undefined1 *)thunk_FUN_01f11920();
                *(undefined1 *)(param_1 + 2) = *puVar6;
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
LAB_034f5a98:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


