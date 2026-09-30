/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ClearErrorContext
ENTRY_POINT: 02740974
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


int Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext
              (long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  int in_w9;
  int in_w10;
  int in_w11;
  undefined2 in_w12;
  undefined2 in_w13;
  int in_w14;
  int in_w15;
  uint in_w16;
  ulong in_x17;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  
  while( true ) {
    uVar1 = (uint)(in_x17 >> 6);
    *(undefined2 *)(unaff_x19 + (long)(param_2 + 2) * 2) =
         *(undefined2 *)(param_1 + (ulong)(uVar1 & 0x3ffffc0 | uVar1 & 3 | (in_w16 & 0xf) << 2) * 2)
    ;
    iVar2 = param_2 + 4;
    *(undefined2 *)(unaff_x19 + (long)(param_2 + 3) * 2) =
         *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + in_w15) & 0x3f) * 2 + param_1);
    if (in_w9 <= unaff_w22) break;
    if ((unaff_x21 & 1) != 0) {
      if (in_w11 == 0x4c) {
        in_w11 = 0;
        *(undefined2 *)(unaff_x19 + (long)iVar2 * 2) = in_w12;
        iVar2 = param_2 + 6;
        *(undefined2 *)(unaff_x19 + (long)(param_2 + 5) * 2) = in_w13;
      }
      in_w11 = in_w11 + 4;
    }
    *(undefined2 *)(unaff_x19 + (long)iVar2 * 2) =
         *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + unaff_w22) >> 1) & 0x7e) + param_1);
    *(undefined2 *)(unaff_x19 + (long)(iVar2 + 1) * 2) =
         *(undefined2 *)
          (param_1 +
          (ulong)((uint)(*(byte *)(unaff_x20 + (unaff_w22 + 1)) >> 4) |
                 (*(byte *)(unaff_x20 + unaff_w22) & 3) << 4) * 2);
    in_w15 = unaff_w22 + 2;
    in_x17 = (ulong)*(byte *)(unaff_x20 + in_w15);
    in_w16 = (uint)*(byte *)(unaff_x20 + (unaff_w22 + 1));
    unaff_w22 = unaff_w22 + 3;
    param_2 = iVar2;
    in_w14 = iVar2;
  }
  if (((in_w10 != 0) && ((unaff_x21 & 1) != 0)) && (in_w11 == 0x4c)) {
    *(undefined2 *)(unaff_x19 + (long)iVar2 * 2) = 0xd;
    iVar2 = in_w14 + 6;
    *(undefined2 *)(unaff_x19 + (long)(in_w14 + 5) * 2) = 10;
  }
  if (in_w10 == 1) {
    *(undefined2 *)(unaff_x19 + (long)iVar2 * 2) =
         *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + in_w9) >> 1) & 0x7e) + param_1);
    *(undefined2 *)(unaff_x19 + (long)(iVar2 + 1) * 2) =
         *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + in_w9) & 3) * 0x20 + param_1);
    uVar3 = *(undefined2 *)(param_1 + 0x80);
  }
  else {
    if (in_w10 != 2) {
      return iVar2;
    }
    *(undefined2 *)(unaff_x19 + (long)iVar2 * 2) =
         *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + in_w9) >> 1) & 0x7e) + param_1);
    *(undefined2 *)(unaff_x19 + (long)(iVar2 + 1) * 2) =
         *(undefined2 *)
          (param_1 +
          (ulong)((uint)(*(byte *)(unaff_x20 + (in_w9 + 1)) >> 4) |
                 (*(byte *)(unaff_x20 + in_w9) & 3) << 4) * 2);
    uVar3 = *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + (in_w9 + 1)) & 0xf) * 8 + param_1);
  }
  *(undefined2 *)(unaff_x19 + (long)(iVar2 + 2) * 2) = uVar3;
  *(undefined2 *)(unaff_x19 + (long)(iVar2 + 3) * 2) = *(undefined2 *)(param_1 + 0x80);
  return iVar2 + 4;
}


