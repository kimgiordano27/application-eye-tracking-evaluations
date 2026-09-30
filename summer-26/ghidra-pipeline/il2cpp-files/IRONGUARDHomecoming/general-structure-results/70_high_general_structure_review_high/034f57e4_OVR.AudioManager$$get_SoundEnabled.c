/*
FUNCTION_NAME: OVR.AudioManager$$get_SoundEnabled
ENTRY_POINT: 034f57e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVR_AudioManager__get_SoundEnabled(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xdf0));
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(Method_System_Security_Cryptography_X509Certificates_X509Certificate__ctor__);
  thunk_FUN_01efb3a4(Method_System_Security_Cryptography_X509Certificates_X509Certificate__ctor__);
  thunk_FUN_01efb3a4(
                    Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                    );
  thunk_FUN_01efb3a4(
                    Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData__
                    );
  thunk_FUN_01efb3a4(Method_System_Security_Cryptography_X509Certificates_X509Certificate2__ctor__);
  thunk_FUN_01efb3a4(
                    Method_System_Security_Cryptography_X509Certificates_X509Certificate2_GetCertContentType__
                    );
  *(undefined1 *)(unaff_x21 + 0xe70) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
    FUN_034efd20(uVar8,uVar7);
    uVar7 = thunk_FUN_01efb3a4(
                              Method_System_Security_Cryptography_X509Certificates_X509Certificate2Collection_AddRange__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar7);
  }
  uVar8 = *(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<float4>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar8,0);
  plVar3 = (long *)FUN_03489498();
  puVar2 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
  if (plVar3 != (long *)0x0) {
    if (*(long *)(*plVar3 + 0x40) ==
        *(long *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0x40)) {
      puVar4 = (undefined8 *)thunk_FUN_01f11920();
      *unaff_x19 = *puVar4;
      FUN_03579868(*(undefined8 *)puVar2,0);
      plVar3 = (long *)FUN_03489498();
      puVar1 = Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
      if (plVar3 == (long *)0x0) goto LAB_034f5a98;
      if (*(long *)(*plVar3 + 0x40) ==
          *(long *)(*(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ +
                   0x40)) {
        puVar5 = (undefined1 *)thunk_FUN_01f11920();
        *(undefined1 *)(unaff_x19 + 1) = *puVar5;
        FUN_03579868(*(undefined8 *)puVar2,0);
        plVar3 = (long *)FUN_03489498();
        if (plVar3 == (long *)0x0) goto LAB_034f5a98;
        if (*(long *)(*plVar3 + 0x40) == *(long *)(*(long *)puVar1 + 0x40)) {
          puVar5 = (undefined1 *)thunk_FUN_01f11920();
          *(undefined1 *)((long)unaff_x19 + 9) = *puVar5;
          FUN_03579868(*(undefined8 *)puVar2,0);
          plVar3 = (long *)FUN_03489498();
          puVar2 = 
          Method_System_Security_Cryptography_X509Certificates_X509Certificate2Collection_Add__;
          if (plVar3 == (long *)0x0) goto LAB_034f5a98;
          if (*(long *)(*plVar3 + 0x40) == *(long *)(*(long *)puVar1 + 0x40)) {
            puVar5 = (undefined1 *)thunk_FUN_01f11920();
            *(undefined1 *)((long)unaff_x19 + 10) = *puVar5;
            FUN_03579868(*(undefined8 *)puVar2,0);
            plVar3 = (long *)FUN_03489498();
            puVar2 = Method_Oculus_Platform_CAPI_StringToNative__;
            if (plVar3 == (long *)0x0) goto LAB_034f5a98;
            if (*(long *)(*plVar3 + 0x40) ==
                *(long *)(*(long *)Method_Mono_Security_X509_X509Certificate_get_Signature__ + 0x40)
               ) {
              puVar6 = (undefined4 *)thunk_FUN_01f11920();
              *(undefined4 *)((long)unaff_x19 + 0xc) = *puVar6;
              FUN_03579868(*(undefined8 *)puVar2,0);
              plVar3 = (long *)FUN_03489498();
              if (plVar3 == (long *)0x0) goto LAB_034f5a98;
              if (*(long *)(*plVar3 + 0x40) ==
                  *(long *)(*(long *)
                             Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                           + 0x40)) {
                puVar5 = (undefined1 *)thunk_FUN_01f11920();
                *(undefined1 *)(unaff_x19 + 2) = *puVar5;
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


