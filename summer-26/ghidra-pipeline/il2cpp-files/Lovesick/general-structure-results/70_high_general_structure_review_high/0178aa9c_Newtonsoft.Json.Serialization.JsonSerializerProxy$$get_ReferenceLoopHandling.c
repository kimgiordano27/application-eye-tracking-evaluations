/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ReferenceLoopHandling
ENTRY_POINT: 0178aa9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ReferenceLoopHandling
          (long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x19;
  uint uVar6;
  long *unaff_x20;
  ulong unaff_x21;
  
  while( true ) {
    uVar1 = (**(code **)(param_1 + 0x4d8))(param_2,*(undefined8 *)(param_1 + 0x4e0));
    if ((unaff_x21 & 1) == 0) break;
    if ((uVar1 & 7) != 2)
    goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling;
    param_2 = (long *)(**(code **)(*unaff_x20 + 0x1c8))
                                (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x1d0));
    if (param_2 == (long *)0x0) goto LAB_0178aad0;
    uVar2 = FUN_0178abb0(param_2);
    param_1 = *param_2;
    unaff_x21 = uVar2 & 0xffffffff;
    unaff_x20 = param_2;
  }
  if ((uVar1 & 7) == 1) {
    uVar2 = (**(code **)(*unaff_x19 + 1000))();
    if (((uVar2 & 1) != 0) && (uVar2 = (**(code **)(*unaff_x19 + 0x3f8))(), (uVar2 & 1) == 0)) {
      lVar3 = (**(code **)(*unaff_x19 + 0x488))();
      if (lVar3 == 0) {
LAB_0178aad0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        lVar4 = lVar3;
        while( true ) {
          if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194(lVar4);
          }
          if (*(long *)(lVar3 + (long)(int)uVar6 * 8 + 0x20) == 0) break;
          uVar2 = FUN_0178aa28();
          if ((uVar2 & 1) == 0)
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling;
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar6 = uVar6 + 1;
          lVar4 = 1;
          if ((int)uVar1 <= (int)uVar6) {
            return 1;
          }
        }
        goto LAB_0178aad0;
      }
    }
    uVar5 = 1;
  }
  else {
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling:
    uVar5 = 0;
  }
  return uVar5;
}


