/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 074edab4
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString(void)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  long lVar4;
  long lVar5;
  long unaff_x29;
  
LAB_074edb28:
  do {
    while( true ) {
      unaff_w24 = unaff_w24 + 1;
      if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
        return;
      }
      sVar2 = FUN_07363804();
      if (sVar2 == 0x2d) break;
      if (sVar2 == 0x23) {
        if (unaff_x19 == 0) {
LAB_074edb58:
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_074ed3cc();
      }
      else {
        if (*(char *)(unaff_x29 + 0x2cd) == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          *(undefined1 *)(unaff_x29 + 0x2cd) = 1;
        }
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar1) {
LAB_074edb5c:
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar2;
        }
        else {
          FUN_073869c4();
        }
      }
    }
    if (unaff_x19 == 0) goto LAB_074edb58;
    lVar4 = *(long *)(unaff_x19 + 0x30);
    if (DAT_09546f42 == '\0') {
      FUN_0403162c(PTR_DAT_08f8ca68);
      DAT_09546f42 = '\x01';
    }
    if (lVar4 == 0) goto LAB_074edb58;
    if (*(int *)(lVar4 + 0x10) != 1) {
LAB_074edb04:
      FUN_07386af0();
      goto LAB_074edb28;
    }
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar1) goto LAB_074edb04;
    if (*(uint *)(unaff_x22 + 0x10) <= uVar1) goto LAB_074edb5c;
    lVar5 = *(long *)(unaff_x22 + 8);
    uVar3 = FUN_07363804(lVar4,0,0);
    *(undefined2 *)(lVar5 + (long)(int)uVar1 * 2) = uVar3;
    *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
  } while( true );
}


