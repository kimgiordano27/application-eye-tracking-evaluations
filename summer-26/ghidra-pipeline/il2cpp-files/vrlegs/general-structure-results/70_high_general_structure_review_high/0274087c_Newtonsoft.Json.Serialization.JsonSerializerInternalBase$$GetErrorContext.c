/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$GetErrorContext
ENTRY_POINT: 0274087c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalBase__GetErrorContext
              (ulong param_1,long param_2,long param_3,int param_4)

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
  ulong unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc03b8);
    *(undefined1 *)(unaff_x25 + 0x99c) = 1;
  }
  lVar7 = *unaff_x24;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *unaff_x24;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    iVar4 = (unaff_w23 / 3) * 3;
    iVar3 = iVar4 + param_4;
    lVar2 = lVar7 + 0x20;
    iVar6 = 0;
    if (param_4 < iVar3) {
      iVar9 = 0;
      do {
        iVar5 = iVar6;
        if ((unaff_x21 & 1) != 0) {
          if (iVar9 == 0x4c) {
            iVar9 = 0;
            iVar6 = iVar5 + 1;
            *(undefined2 *)(param_2 + (long)iVar5 * 2) = 0xd;
            iVar5 = iVar5 + 2;
            *(undefined2 *)(param_2 + (long)iVar6 * 2) = 10;
          }
          iVar9 = iVar9 + 4;
        }
        iVar6 = param_4 + 1;
        *(undefined2 *)(param_2 + (long)iVar5 * 2) =
             *(undefined2 *)(((ulong)(*(byte *)(param_3 + param_4) >> 1) & 0x7e) + lVar2);
        *(undefined2 *)(param_2 + (long)(iVar5 + 1) * 2) =
             *(undefined2 *)
              (lVar2 + (ulong)((uint)(*(byte *)(param_3 + iVar6) >> 4) |
                              (*(byte *)(param_3 + param_4) & 3) << 4) * 2);
        iVar1 = param_4 + 2;
        param_4 = param_4 + 3;
        *(undefined2 *)(param_2 + (long)(iVar5 + 2) * 2) =
             *(undefined2 *)
              (lVar2 + (ulong)((uint)(*(byte *)(param_3 + iVar1) >> 6) |
                              (*(byte *)(param_3 + iVar6) & 0xf) << 2) * 2);
        iVar6 = iVar5 + 4;
        *(undefined2 *)(param_2 + (long)(iVar5 + 3) * 2) =
             *(undefined2 *)(((ulong)*(byte *)(param_3 + iVar1) & 0x3f) * 2 + lVar2);
      } while (param_4 < iVar3);
      if (((unaff_w23 != iVar4) && ((unaff_x21 & 1) != 0)) && (iVar9 == 0x4c)) {
        *(undefined2 *)(param_2 + (long)iVar6 * 2) = 0xd;
        iVar6 = iVar5 + 6;
        *(undefined2 *)(param_2 + (long)(iVar5 + 5) * 2) = 10;
      }
    }
    if (unaff_w23 % 3 == 1) {
      *(undefined2 *)(param_2 + (long)iVar6 * 2) =
           *(undefined2 *)(((ulong)(*(byte *)(param_3 + iVar3) >> 1) & 0x7e) + lVar2);
      *(undefined2 *)(param_2 + (long)(iVar6 + 1) * 2) =
           *(undefined2 *)(((ulong)*(byte *)(param_3 + iVar3) & 3) * 0x20 + lVar2);
      uVar8 = *(undefined2 *)(lVar7 + 0xa0);
    }
    else {
      if (unaff_w23 % 3 != 2) {
        return iVar6;
      }
      *(undefined2 *)(param_2 + (long)iVar6 * 2) =
           *(undefined2 *)(((ulong)(*(byte *)(param_3 + iVar3) >> 1) & 0x7e) + lVar2);
      *(undefined2 *)(param_2 + (long)(iVar6 + 1) * 2) =
           *(undefined2 *)
            (lVar2 + (ulong)((uint)(*(byte *)(param_3 + (iVar3 + 1)) >> 4) |
                            (*(byte *)(param_3 + iVar3) & 3) << 4) * 2);
      uVar8 = *(undefined2 *)(((ulong)*(byte *)(param_3 + (iVar3 + 1)) & 0xf) * 8 + lVar2);
    }
    *(undefined2 *)(param_2 + (long)(iVar6 + 2) * 2) = uVar8;
    *(undefined2 *)(param_2 + (long)(iVar6 + 3) * 2) = *(undefined2 *)(lVar7 + 0xa0);
    return iVar6 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


