/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabInteractor.<>c$$.ctor
ENTRY_POINT: 0190b224
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Oculus_Interaction_HandGrab_HandGrabInteractor_<>c___ctor(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  uint in_w9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  puVar2 = Method_System_Collections_Generic_List_Enumerator<JsonPosition>_MoveNext__;
  puVar4 = (undefined8 *)System_Xml_Schema_XmlSchemaComplexContent_TypeInfo;
  if (*(long *)(in_x11 + -8) != in_x10) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_033f5568 + 300);
    if ((in_w9 < bVar1) ||
       (puVar4 = (undefined8 *)
                 Method_System_Collections_Generic_List_Enumerator<IValueAnimationUpdate>_MoveNext__
       , unaff_x22 = (long *)PTR_DAT_033f5568,
       *(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033f5568)) {
      bVar1 = *(byte *)(*(long *)Method_System_Linq_Enumerable_Where<string>__ + 300);
      if ((in_w9 < bVar1) ||
         (puVar4 = (undefined8 *)UnityEngine_XR_ARSubsystems_XRFace_TypeInfo,
         unaff_x22 = (long *)Method_System_Linq_Enumerable_Where<string>__,
         *(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
         *(long *)Method_System_Linq_Enumerable_Where<string>__)) {
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_XR_ARSubsystems_SerializableDictionary<string,_byte[]>_Deserialize__
                         + 300);
        if ((in_w9 < bVar1) ||
           (puVar4 = (undefined8 *)Method_System_Globalization_CompareInfo_GetHashCode__,
           unaff_x22 = (long *)
                       Method_UnityEngine_XR_ARSubsystems_SerializableDictionary<string,_byte[]>_Deserialize__
           , *(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)
              Method_UnityEngine_XR_ARSubsystems_SerializableDictionary<string,_byte[]>_Deserialize__
           )) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)puVar2,0);
          return;
        }
      }
    }
  }
  lVar3 = thunk_FUN_00d62348(*puVar4);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  bVar1 = *(byte *)(*unaff_x22 + 300);
  if ((bVar1 <= *(byte *)(*unaff_x20 + 300)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x22)) {
    FUN_017b46ec(lVar3,0);
    *(long *)(lVar3 + 0x10) = unaff_x19;
    *(long **)(lVar3 + 0x18) = unaff_x20;
    *(long *)(unaff_x19 + 0x50) = lVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}


