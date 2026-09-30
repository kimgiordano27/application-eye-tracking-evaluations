/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 074be5c4
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(void)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  int in_w8;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  long lVar4;
  long lVar5;
  long unaff_x29;
  
  do {
    unaff_w24 = unaff_w24 + 1;
    if (in_w8 <= unaff_w24) {
      return;
    }
    sVar2 = FUN_073213d0();
    if (sVar2 == 0x2d) {
      if (unaff_x19 == 0) {
LAB_074be5f0:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if (DAT_0968e4c0 == '\0') {
        FUN_03f13384(PTR_DAT_09129228);
        DAT_0968e4c0 = '\x01';
      }
      if (lVar4 == 0) goto LAB_074be5f0;
      if (*(int *)(lVar4 + 0x10) == 1) {
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar1) goto LAB_074be5f4;
          lVar5 = *(long *)(unaff_x22 + 8);
          uVar3 = FUN_073213d0(lVar4,0,0);
          *(undefined2 *)(lVar5 + (long)(int)uVar1 * 2) = uVar3;
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          goto LAB_074be5c0;
        }
      }
      FUN_0734705c();
    }
    else if (sVar2 == 0x23) {
      if (unaff_x19 == 0) goto LAB_074be5f0;
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      FUN_074bde64();
    }
    else {
      if (*(char *)(unaff_x29 + 0x807) == '\0') {
        FUN_03f13384(PTR_DAT_09129228);
        *(undefined1 *)(unaff_x29 + 0x807) = 1;
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar1) {
LAB_074be5f4:
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar2;
      }
      else {
        FUN_07346f30();
      }
    }
LAB_074be5c0:
    in_w8 = *(int *)(unaff_x23 + 0x10);
  } while( true );
}


