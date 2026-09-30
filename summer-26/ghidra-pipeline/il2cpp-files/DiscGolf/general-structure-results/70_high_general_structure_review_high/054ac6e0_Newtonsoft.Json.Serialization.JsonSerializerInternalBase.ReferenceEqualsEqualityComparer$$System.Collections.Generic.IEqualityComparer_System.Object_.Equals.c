/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.Equals
ENTRY_POINT: 054ac6e0
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_Equals
          (undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long in_x9;
  code *in_x11;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  
  uVar3 = (*in_x11)(param_1,unaff_x21 - in_x9);
  iVar1 = *(int *)(unaff_x19 + 0x3c) + ((int)uVar3 - unaff_w22);
  *(int *)(unaff_x19 + 0x3c) = iVar1;
  if ((-1 < iVar1) &&
     (iVar2 = *(int *)(unaff_x19 + 0x40) - iVar1, iVar2 != 0 && iVar1 <= *(int *)(unaff_x19 + 0x40))
     ) {
    plVar4 = *(long **)(unaff_x19 + 0x28);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x338))(plVar4,(long)iVar2,1,*(undefined8 *)(*plVar4 + 0x340));
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined4 *)(unaff_x19 + 0x3c) = 0;
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  return uVar3;
}


