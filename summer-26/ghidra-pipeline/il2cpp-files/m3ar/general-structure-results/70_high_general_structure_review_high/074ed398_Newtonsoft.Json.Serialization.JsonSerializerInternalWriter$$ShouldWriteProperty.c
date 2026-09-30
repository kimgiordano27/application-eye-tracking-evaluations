/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteProperty
ENTRY_POINT: 074ed398
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteProperty(void)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  int in_w8;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long lVar5;
  long lVar6;
  long unaff_x29;
  
  do {
    unaff_w24 = unaff_w24 + 1;
    if (in_w8 <= unaff_w24) {
      return;
    }
    sVar3 = FUN_07363804();
    if (sVar3 == 0x2d) {
      cVar1 = *(char *)(unaff_x29 + 0xf42);
      lVar5 = *(long *)(unaff_x19 + 0x30);
joined_r0x074ed330:
      if (cVar1 == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca68);
        *(undefined1 *)(unaff_x29 + 0xf42) = 1;
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(int *)(lVar5 + 0x10) == 1) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar2) {
LAB_074ed3c8:
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          lVar6 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_07363804(lVar5,0,0);
          *(undefined2 *)(lVar6 + (long)(int)uVar2 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          goto LAB_074ed394;
        }
      }
      FUN_07386af0();
    }
    else {
      if (sVar3 == 0x24) {
        cVar1 = *(char *)(unaff_x29 + 0xf42);
        lVar5 = *(long *)(unaff_x19 + 0x58);
        goto joined_r0x074ed330;
      }
      if (sVar3 == 0x23) {
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
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_074ed3c8;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar3;
        }
        else {
          FUN_073869c4();
        }
      }
    }
LAB_074ed394:
    in_w8 = *(int *)(unaff_x23 + 0x10);
  } while( true );
}


