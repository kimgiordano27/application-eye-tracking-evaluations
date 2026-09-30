/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 07682c50
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue(void)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long lVar4;
  long unaff_x29;
  
  do {
    *(undefined1 *)(unaff_x29 + 0x26f) = in_w8;
LAB_07682c54:
    do {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(unaff_x26 + 0x10) == 1) {
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar1) goto LAB_07682ca0;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar1) {
LAB_07682d54:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar4 = *(long *)(unaff_x22 + 8);
        uVar3 = FUN_074e0328(unaff_x26,0,0);
        *(undefined2 *)(lVar4 + (long)(int)uVar1 * 2) = uVar3;
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      }
      else {
LAB_07682ca0:
        FUN_07503e1c();
      }
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
          return;
        }
        sVar2 = FUN_074e0328();
        if (sVar2 == 0x2d) {
          unaff_x26 = *(long *)(unaff_x19 + 0x30);
          if (*(char *)(unaff_x29 + 0x26f) == '\0') goto LAB_07682c40;
          goto LAB_07682c54;
        }
        if (sVar2 == 0x25) break;
        if (sVar2 == 0x23) {
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
          uVar1 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar1) goto LAB_07682d54;
            *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar2;
          }
          else {
            FUN_07503cf0();
          }
        }
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x90);
    } while (*(char *)(unaff_x29 + 0x26f) != '\0');
LAB_07682c40:
    FUN_04077588(PTR_DAT_092d03e8);
    in_w8 = 1;
  } while( true );
}


