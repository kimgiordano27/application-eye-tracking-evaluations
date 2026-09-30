/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ResolveIsReference
ENTRY_POINT: 074ed2dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference(void)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  uint uVar4;
  long unaff_x27;
  long lVar5;
  long unaff_x29;
  
code_r0x074ed2dc:
  uVar4 = (uint)unaff_x27;
  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar4) goto LAB_074ed314;
  if (*(uint *)(unaff_x22 + 0x10) <= uVar4) {
LAB_074ed3c8:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  lVar5 = *(long *)(unaff_x22 + 8);
  uVar3 = FUN_07363804(unaff_x26,0,0);
  *(undefined2 *)(lVar5 + unaff_x27 * 2) = uVar3;
  *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
LAB_074ed394:
  do {
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
      return;
    }
    sVar2 = FUN_07363804();
    if (sVar2 == 0x2d) {
      cVar1 = *(char *)(unaff_x29 + 0xf42);
      unaff_x26 = *(long *)(unaff_x19 + 0x30);
    }
    else {
      if (sVar2 != 0x24) {
        if (sVar2 == 0x23) {
          if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          FUN_074ed3cc();
        }
        else {
          if (*(char *)(unaff_x25 + 0x2cd) == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            *(undefined1 *)(unaff_x25 + 0x2cd) = 1;
          }
          uVar4 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar4 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar4) goto LAB_074ed3c8;
            *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar4 * 2) = sVar2;
          }
          else {
            FUN_073869c4();
          }
        }
        goto LAB_074ed394;
      }
      cVar1 = *(char *)(unaff_x29 + 0xf42);
      unaff_x26 = *(long *)(unaff_x19 + 0x58);
    }
    if (cVar1 == '\0') {
      FUN_0403162c(PTR_DAT_08f8ca68);
      *(undefined1 *)(unaff_x29 + 0xf42) = 1;
    }
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(int *)(unaff_x26 + 0x10) == 1) break;
LAB_074ed314:
    FUN_07386af0();
  } while( true );
  unaff_x27 = (long)*(int *)(unaff_x22 + 0x18);
  goto code_r0x074ed2dc;
}


