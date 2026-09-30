/*
FUNCTION_NAME: Obi.ObiActor$$GetParticleColor
ENTRY_POINT: 017f1074
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_file_logging_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Obi_ObiActor__GetParticleColor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
  if ((DAT_03779275 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__);
                    /* catch() { ... } // from try @ 017f10ec with catch @ 017f10a4
                       catch() { ... } // from try @ 017f112c with catch @ 017f10a4
                       catch() { ... } // from try @ 017f11b0 with catch @ 017f10a4 */
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vuzp2_s32__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Transform>_Clear__);
    thunk_FUN_00d48444(Method_System_IO_Compression_DeflateStream_BeginRead__);
    thunk_FUN_00d48444(Method_System_IO_Compression_GZipStream_ThrowStreamClosedException__);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<Grabbable>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleDataRef<VisualData>_CopyFrom__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Input_Controller_<>c_<_ctor>b__24_0__);
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_GameObjectUtils_<>c__DisplayClass20_0_<GetNamedChild>b__0__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ec050);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_get_Current__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_11__);
    DAT_03779275 = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar3 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
  puVar1 = Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__;
  if (lVar5 != 0) {
    FUN_017b46ec(lVar5,0);
    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar5;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_11__;
    puVar1 = Method_System_IO_Compression_DeflateStream_BeginRead__;
    if (lVar5 != 0) {
      FUN_011c181c(lVar5,0,*(undefined8 *)
                            Method_Oculus_Interaction_Input_Controller_<>c_<_ctor>b__24_0__,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = lVar5;
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar4;
      }
      uVar6 = **(undefined8 **)(lVar5 + 0xb8);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Method_UnityEngine_UIElements_StyleDataRef<VisualData>_CopyFrom__;
      if (lVar5 != 0) {
        FUN_012d1810(lVar5,uVar6,
                     *(undefined8 *)
                      Method_Unity_XR_CoreUtils_GameObjectUtils_<>c__DisplayClass20_0_<GetNamedChild>b__0__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = lVar5;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar5 != 0) {
          FUN_017f3604(lVar5,0,0,0,0);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = lVar5;
          lVar5 = thunk_FUN_00d62348();
          puVar1 = Method_System_IO_Compression_GZipStream_ThrowStreamClosedException__;
          if (lVar5 != 0) {
            FUN_017e9508(lVar5,0,0x4000,0);
            *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30) = lVar5;
            uVar6 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar1 = System_Collections_Generic_IEnumerable<Grabbable>_TypeInfo;
            if (lVar5 != 0) {
              FUN_0136b58c(lVar5,uVar6,*(undefined8 *)PTR_DAT_033ec050,0);
              *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) = lVar5;
              uVar6 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              puVar1 = Method_System_Collections_Generic_List<Transform>_Clear__;
              if (lVar5 != 0) {
                FUN_0136b58c(lVar5,uVar6,
                             *(undefined8 *)
                              Method_System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_get_Current__
                             ,0);
                *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48) = lVar5;
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar5 != 0) {
                  FUN_01298da0(lVar5,*(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vuzp2_s32__);
                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50) = lVar5;
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  if (lVar5 != 0) {
                    FUN_017b46ec(lVar5,0);
                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58) = lVar5;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


