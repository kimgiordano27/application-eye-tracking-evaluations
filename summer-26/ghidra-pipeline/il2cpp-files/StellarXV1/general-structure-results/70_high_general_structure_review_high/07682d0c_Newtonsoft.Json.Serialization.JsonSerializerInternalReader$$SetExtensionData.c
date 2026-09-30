/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 07682d0c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData(void)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long lVar5;
  long lVar6;
  long unaff_x29;
  
LAB_07682d20:
  while( true ) {
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
      return;
    }
    sVar3 = FUN_074e0328();
    if (sVar3 == 0x2d) break;
    if (sVar3 == 0x25) {
      cVar1 = *(char *)(unaff_x29 + 0x26f);
      lVar5 = *(long *)(unaff_x19 + 0x90);
      goto joined_r0x07682cbc;
    }
    if (sVar3 == 0x23) {
      if (*(int *)(*(long *)PTR_DAT_092d6630 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_07681d5c();
    }
    else {
      if (*(char *)(unaff_x25 + 0x578) == '\0') {
        FUN_04077588(PTR_DAT_092d03e8);
        *(undefined1 *)(unaff_x25 + 0x578) = 1;
      }
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_07682d54;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar3;
      }
      else {
        FUN_07503cf0();
      }
    }
  }
  cVar1 = *(char *)(unaff_x29 + 0x26f);
  lVar5 = *(long *)(unaff_x19 + 0x30);
joined_r0x07682cbc:
  if (cVar1 == '\0') {
    FUN_04077588(PTR_DAT_092d03e8);
    *(undefined1 *)(unaff_x29 + 0x26f) = 1;
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(lVar5 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar2) {
LAB_07682d54:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar6 = *(long *)(unaff_x22 + 8);
      uVar4 = FUN_074e0328(lVar5,0,0);
      *(undefined2 *)(lVar6 + (long)(int)uVar2 * 2) = uVar4;
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      goto LAB_07682d20;
    }
  }
  FUN_07503e1c();
  goto LAB_07682d20;
}


