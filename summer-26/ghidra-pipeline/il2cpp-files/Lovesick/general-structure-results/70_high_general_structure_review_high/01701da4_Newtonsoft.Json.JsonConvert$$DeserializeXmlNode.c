/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 01701da4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonConvert__DeserializeXmlNode(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined2 uVar8;
  int iVar9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
  *(undefined1 *)(unaff_x25 + 0x992) = 1;
  lVar7 = *unaff_x24;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x24;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    iVar4 = (unaff_w23 / 3) * 3;
    iVar3 = iVar4 + unaff_w22;
    lVar2 = lVar7 + 0x20;
    iVar6 = 0;
    if (unaff_w22 < iVar3) {
      iVar9 = 0;
      do {
        iVar5 = iVar6;
        if ((unaff_x21 & 1) != 0) {
          if (iVar9 == 0x4c) {
            iVar9 = 0;
            iVar6 = iVar5 + 1;
            *(undefined2 *)(unaff_x19 + (long)iVar5 * 2) = 0xd;
            iVar5 = iVar5 + 2;
            *(undefined2 *)(unaff_x19 + (long)iVar6 * 2) = 10;
          }
          iVar9 = iVar9 + 4;
        }
        iVar6 = unaff_w22 + 1;
        *(undefined2 *)(unaff_x19 + (long)iVar5 * 2) =
             *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + unaff_w22) >> 1) & 0x7e) + lVar2);
        *(undefined2 *)(unaff_x19 + (long)(iVar5 + 1) * 2) =
             *(undefined2 *)
              (lVar2 + (ulong)((uint)(*(byte *)(unaff_x20 + iVar6) >> 4) |
                              (*(byte *)(unaff_x20 + unaff_w22) & 3) << 4) * 2);
        iVar1 = unaff_w22 + 2;
        unaff_w22 = unaff_w22 + 3;
        *(undefined2 *)(unaff_x19 + (long)(iVar5 + 2) * 2) =
             *(undefined2 *)
              (lVar2 + (ulong)((uint)(*(byte *)(unaff_x20 + iVar1) >> 6) |
                              (*(byte *)(unaff_x20 + iVar6) & 0xf) << 2) * 2);
        iVar6 = iVar5 + 4;
        *(undefined2 *)(unaff_x19 + (long)(iVar5 + 3) * 2) =
             *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + iVar1) & 0x3f) * 2 + lVar2);
      } while (unaff_w22 < iVar3);
      if (((unaff_w23 != iVar4) && ((unaff_x21 & 1) != 0)) && (iVar9 == 0x4c)) {
        *(undefined2 *)(unaff_x19 + (long)iVar6 * 2) = 0xd;
        iVar6 = iVar5 + 6;
        *(undefined2 *)(unaff_x19 + (long)(iVar5 + 5) * 2) = 10;
      }
    }
    if (unaff_w23 % 3 == 1) {
      *(undefined2 *)(unaff_x19 + (long)iVar6 * 2) =
           *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + iVar3) >> 1) & 0x7e) + lVar2);
      *(undefined2 *)(unaff_x19 + (long)(iVar6 + 1) * 2) =
           *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + iVar3) & 3) * 0x20 + lVar2);
      uVar8 = *(undefined2 *)(lVar7 + 0xa0);
    }
    else {
      if (unaff_w23 % 3 != 2) {
        return iVar6;
      }
      *(undefined2 *)(unaff_x19 + (long)iVar6 * 2) =
           *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + iVar3) >> 1) & 0x7e) + lVar2);
      *(undefined2 *)(unaff_x19 + (long)(iVar6 + 1) * 2) =
           *(undefined2 *)
            (lVar2 + (ulong)((uint)(*(byte *)(unaff_x20 + (iVar3 + 1)) >> 4) |
                            (*(byte *)(unaff_x20 + iVar3) & 3) << 4) * 2);
      uVar8 = *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + (iVar3 + 1)) & 0xf) * 8 + lVar2);
    }
    *(undefined2 *)(unaff_x19 + (long)(iVar6 + 2) * 2) = uVar8;
    *(undefined2 *)(unaff_x19 + (long)(iVar6 + 3) * 2) = *(undefined2 *)(lVar7 + 0xa0);
    return iVar6 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


