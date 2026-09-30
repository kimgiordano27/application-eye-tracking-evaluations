/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 05ac787c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar4;
  long unaff_x21;
  long lVar5;
  
  *(undefined1 *)(unaff_x20 + 0xc1) = 1;
  lVar5 = *(long *)(unaff_x21 + 0x28);
  lVar2 = thunk_FUN_0301080c(*unaff_x19);
  FUN_05abd7a0();
  plVar4 = (long *)(lVar2 + 0x28);
  *plVar4 = lVar5;
  thunk_FUN_03048534(plVar4,lVar5);
  plVar3 = *(long **)(unaff_x21 + 0x28);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
  if (plVar3 != (long *)0x0) {
    lVar5 = *(long *)PTR_DAT_06fa2700;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar5)) {
      *plVar4 = (long)plVar3;
      if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
         (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar5)) goto LAB_05ac7930;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe9884(plVar3);
  }
  *plVar4 = 0;
LAB_05ac7930:
  thunk_FUN_03048534(plVar4,plVar3);
  return lVar2;
}


