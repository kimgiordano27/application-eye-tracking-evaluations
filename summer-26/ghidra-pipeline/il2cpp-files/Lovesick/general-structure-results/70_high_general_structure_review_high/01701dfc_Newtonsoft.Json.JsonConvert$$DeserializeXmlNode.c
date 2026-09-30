/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 01701dfc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonConvert__DeserializeXmlNode(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  int in_w9;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  int unaff_w23;
  
  iVar3 = in_w9 + unaff_w22;
  lVar2 = param_1 + 0x20;
  iVar5 = 0;
  if (unaff_w22 < iVar3) {
    iVar7 = 0;
    do {
      iVar4 = iVar5;
      if ((unaff_x21 & 1) != 0) {
        if (iVar7 == 0x4c) {
          iVar7 = 0;
          iVar5 = iVar4 + 1;
          *(undefined2 *)(unaff_x19 + (long)iVar4 * 2) = 0xd;
          iVar4 = iVar4 + 2;
          *(undefined2 *)(unaff_x19 + (long)iVar5 * 2) = 10;
        }
        iVar7 = iVar7 + 4;
      }
      iVar5 = unaff_w22 + 1;
      *(undefined2 *)(unaff_x19 + (long)iVar4 * 2) =
           *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + unaff_w22) >> 1) & 0x7e) + lVar2);
      *(undefined2 *)(unaff_x19 + (long)(iVar4 + 1) * 2) =
           *(undefined2 *)
            (lVar2 + (ulong)((uint)(*(byte *)(unaff_x20 + iVar5) >> 4) |
                            (*(byte *)(unaff_x20 + unaff_w22) & 3) << 4) * 2);
      iVar1 = unaff_w22 + 2;
      unaff_w22 = unaff_w22 + 3;
      *(undefined2 *)(unaff_x19 + (long)(iVar4 + 2) * 2) =
           *(undefined2 *)
            (lVar2 + (ulong)((uint)(*(byte *)(unaff_x20 + iVar1) >> 6) |
                            (*(byte *)(unaff_x20 + iVar5) & 0xf) << 2) * 2);
      iVar5 = iVar4 + 4;
      *(undefined2 *)(unaff_x19 + (long)(iVar4 + 3) * 2) =
           *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + iVar1) & 0x3f) * 2 + lVar2);
    } while (unaff_w22 < iVar3);
    if (((unaff_w23 != in_w9) && ((unaff_x21 & 1) != 0)) && (iVar7 == 0x4c)) {
      *(undefined2 *)(unaff_x19 + (long)iVar5 * 2) = 0xd;
      iVar5 = iVar4 + 6;
      *(undefined2 *)(unaff_x19 + (long)(iVar4 + 5) * 2) = 10;
    }
  }
  if (unaff_w23 - in_w9 == 1) {
    *(undefined2 *)(unaff_x19 + (long)iVar5 * 2) =
         *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + iVar3) >> 1) & 0x7e) + lVar2);
    *(undefined2 *)(unaff_x19 + (long)(iVar5 + 1) * 2) =
         *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + iVar3) & 3) * 0x20 + lVar2);
    uVar6 = *(undefined2 *)(param_1 + 0xa0);
  }
  else {
    if (unaff_w23 - in_w9 != 2) {
      return iVar5;
    }
    *(undefined2 *)(unaff_x19 + (long)iVar5 * 2) =
         *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + iVar3) >> 1) & 0x7e) + lVar2);
    *(undefined2 *)(unaff_x19 + (long)(iVar5 + 1) * 2) =
         *(undefined2 *)
          (lVar2 + (ulong)((uint)(*(byte *)(unaff_x20 + (iVar3 + 1)) >> 4) |
                          (*(byte *)(unaff_x20 + iVar3) & 3) << 4) * 2);
    uVar6 = *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + (iVar3 + 1)) & 0xf) * 8 + lVar2);
  }
  *(undefined2 *)(unaff_x19 + (long)(iVar5 + 2) * 2) = uVar6;
  *(undefined2 *)(unaff_x19 + (long)(iVar5 + 3) * 2) = *(undefined2 *)(param_1 + 0xa0);
  return iVar5 + 4;
}


