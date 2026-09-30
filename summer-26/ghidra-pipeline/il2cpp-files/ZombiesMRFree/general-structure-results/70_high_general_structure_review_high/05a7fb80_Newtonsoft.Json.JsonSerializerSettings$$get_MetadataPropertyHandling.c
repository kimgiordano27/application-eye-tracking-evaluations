/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling
ENTRY_POINT: 05a7fb80
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool Newtonsoft_Json_JsonSerializerSettings__get_MetadataPropertyHandling(long param_1)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  short unaff_w19;
  ulong uVar5;
  uint unaff_w20;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  
  if (param_1 == 0) {
LAB_05a7fc5c:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  sVar2 = FUN_0596d0e4(param_1,unaff_w20,0);
  lVar3 = *unaff_x21;
  if (sVar2 == unaff_w19) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar3 = *unaff_x21;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) goto LAB_05a7fc5c;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (unaff_w20 < uVar1) {
      *(undefined1 *)(lVar3 + unaff_x23 + 0x20) = 1;
      return uVar1 == unaff_w22;
    }
  }
  else {
    uVar5 = 0;
    while( true ) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar3 = *unaff_x21;
      }
      if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_05a7fc5c;
      if ((long)*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) <= (long)uVar5) {
        return false;
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar3 = *unaff_x21;
      }
      lVar4 = **(long **)(lVar3 + 0xb8);
      if (lVar4 == 0) goto LAB_05a7fc5c;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) break;
      lVar4 = lVar4 + uVar5;
      uVar5 = uVar5 + 1;
      *(undefined1 *)(lVar4 + 0x20) = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


