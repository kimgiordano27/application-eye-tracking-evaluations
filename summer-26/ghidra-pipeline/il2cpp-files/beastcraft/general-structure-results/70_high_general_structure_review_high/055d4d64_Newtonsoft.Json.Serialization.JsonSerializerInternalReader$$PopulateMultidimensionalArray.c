/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 055d4d64
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
                (long param_1)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_02e3ca1c(*(undefined8 *)(param_1 + 0x938));
  *(undefined1 *)(unaff_x20 + 0x5ef) = 1;
  if (*(char *)((long)unaff_x19 + 0x45) == '\0') {
    (**(code **)(*unaff_x19 + 0x2d8))();
    lVar5 = unaff_x19[3];
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if ((((uVar1 != 0) && (uVar1 != 1)) && (2 < uVar1)) && (uVar1 != 3)) {
        return (ulong)*(uint *)(lVar5 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
  }
  else {
    plVar3 = (long *)unaff_x19[2];
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_055d3c24();
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_06a32938 + 0x130);
    if ((bVar2 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06a32938)) {
      uVar4 = FUN_055bc3e4(plVar3,0);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


