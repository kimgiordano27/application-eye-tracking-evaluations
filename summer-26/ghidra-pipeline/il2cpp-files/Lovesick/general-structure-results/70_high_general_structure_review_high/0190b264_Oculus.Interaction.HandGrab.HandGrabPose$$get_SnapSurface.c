/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabPose$$get_SnapSurface
ENTRY_POINT: 0190b264
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void Oculus_Interaction_HandGrab_HandGrabPose__get_SnapSurface(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  uint in_w9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  puVar2 = Method_System_Collections_Generic_List_Enumerator<JsonPosition>_MoveNext__;
  bVar1 = *(byte *)(*unaff_x22 + 300);
  if ((in_w9 < bVar1) ||
     (puVar4 = (undefined8 *)UnityEngine_XR_ARSubsystems_XRFace_TypeInfo,
     *(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_XR_ARSubsystems_SerializableDictionary<string,_byte[]>_Deserialize__
                     + 300);
    if ((in_w9 < bVar1) ||
       (puVar4 = (undefined8 *)Method_System_Globalization_CompareInfo_GetHashCode__,
       unaff_x22 = (long *)
                   Method_UnityEngine_XR_ARSubsystems_SerializableDictionary<string,_byte[]>_Deserialize__
       , *(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
         *(long *)
          Method_UnityEngine_XR_ARSubsystems_SerializableDictionary<string,_byte[]>_Deserialize__))
    {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)puVar2,0);
      return;
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


