/*
FUNCTION_NAME: FUN_01f75f20
ENTRY_POINT: 01f75f20
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_12
*/


long * FUN_01f75f20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if ((DAT_037804ae & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvt_f32_u32__);
    thunk_FUN_00d48444(PTR_DAT_033f5140);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnComplete__
                      );
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaEntity>_Dispose__
                      );
    DAT_037804ae = 1;
  }
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_01780344(uVar7,0);
  puVar1 = PTR_DAT_033f5140;
  if (lVar4 != 0) {
    uVar7 = FUN_0178c398(lVar4,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaEntity>_Dispose__
                         ,0x28,0);
    uVar5 = FUN_016ac4bc(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (plVar6 == (long *)0x0) goto LAB_01f76098;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01f75da4 with catch @ 01f76080
                        */
      FUN_01f76378(plVar6,0,*(undefined8 *)
                             Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnComplete__
                  );
    }
    else {
      uVar8 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvt_f32_u32__;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01780344(uVar8,0);
      plVar6 = (long *)FUN_017bbf9c(uVar8,uVar7,0);
      if (plVar6 != (long *)0x0) {
        if (*plVar6 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar6);
        }
      }
    }
    return plVar6;
  }
LAB_01f76098:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01f76098 to 020760af has its CatchHandler @ 01f76174 */
  FUN_00da518c();
}


