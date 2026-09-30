/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 05612b88
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint in_w9;
  int in_w10;
  long in_x11;
  uint in_w12;
  int iVar2;
  int in_w13;
  int iVar3;
  int in_w14;
  int in_w15;
  long lVar4;
  uint uVar5;
  long unaff_x19;
  
  while( true ) {
    if ((bool)in_ZR) {
      iVar2 = 1;
      do {
        lVar4 = 0;
        do {
          if (in_x11 + -1 == lVar4) goto LAB_05612c20;
          iVar3 = 0x1e;
          if (0x18 < lVar4 + 1U) {
            iVar3 = -0x19;
          }
          uVar5 = (int)lVar4 + iVar3 + 2;
          if (in_w9 <= uVar5) goto LAB_05612c20;
          iVar3 = *(int *)(param_1 + 0x24 + lVar4 * 4) -
                  *(int *)(param_1 + (long)(int)uVar5 * 4 + 0x20);
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0x7fffffff;
          }
          *(int *)(param_1 + 0x24 + lVar4 * 4) = iVar3;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x37);
        iVar2 = iVar2 + 1;
        if (iVar2 == 5) {
          *(undefined8 *)(unaff_x19 + 0x10) = DAT_013f6868;
          return;
        }
      } while( true );
    }
    uVar5 = in_w12 + 0x15;
    uVar1 = in_w12 - 0x22;
    in_w12 = uVar5;
    if (0x36 < (int)uVar5) {
      in_w12 = uVar1;
    }
    if (in_w9 <= in_w12) break;
    iVar2 = in_w10 - in_w13;
    if (iVar2 < 0) {
      iVar2 = iVar2 + in_w15;
    }
    in_w14 = in_w14 + -1;
    in_ZR = in_w14 == 0;
    *(int *)(param_1 + (long)(int)in_w12 * 4 + 0x20) = in_w13;
    in_w10 = in_w13;
    in_w13 = iVar2;
  }
LAB_05612c20:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


