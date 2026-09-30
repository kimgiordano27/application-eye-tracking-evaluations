/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode
ENTRY_POINT: 054ac6ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_GetHashCode
               (void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long unaff_x19;
  int unaff_w20;
  int unaff_w22;
  
  iVar1 = *(int *)(unaff_x19 + 0x3c) + (unaff_w20 - unaff_w22);
  *(int *)(unaff_x19 + 0x3c) = iVar1;
  if ((-1 < iVar1) &&
     (iVar2 = *(int *)(unaff_x19 + 0x40) - iVar1, iVar2 != 0 && iVar1 <= *(int *)(unaff_x19 + 0x40))
     ) {
    plVar3 = *(long **)(unaff_x19 + 0x28);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x338))(plVar3,(long)iVar2,1,*(undefined8 *)(*plVar3 + 0x340));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined4 *)(unaff_x19 + 0x3c) = 0;
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  return;
}


