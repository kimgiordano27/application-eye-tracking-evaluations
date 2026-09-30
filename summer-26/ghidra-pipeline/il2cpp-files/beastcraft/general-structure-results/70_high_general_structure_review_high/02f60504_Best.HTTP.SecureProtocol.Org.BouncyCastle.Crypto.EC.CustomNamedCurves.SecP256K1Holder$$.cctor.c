/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Crypto.EC.CustomNamedCurves.SecP256K1Holder$$.cctor
ENTRY_POINT: 02f60504
PROGRAM: beastcraft-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;strong_file_logging_hits_2
*/


ulong Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP256K1Holder___cctor
                (long *param_1,ulong param_2,byte *param_3)

{
  byte bVar1;
  undefined *puVar2;
  bool in_ZR;
  long in_x9;
  byte *pbVar3;
  
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  if (!in_ZR) {
    param_2 = param_2 | (ulong)((int)*(char *)(in_x9 + 7) & 0x7f) << 0x31;
    pbVar3 = (byte *)(in_x9 + 8);
    if (-1 < *(char *)(in_x9 + 7)) {
LAB_02f60444:
      *param_1 = (long)pbVar3;
      return param_2;
    }
    if (pbVar3 != param_3) {
      param_2 = param_2 | (ulong)((int)*(char *)(in_x9 + 8) & 0x7f) << 0x38;
      pbVar3 = (byte *)(in_x9 + 9);
      if (-1 < *(char *)(in_x9 + 8)) goto LAB_02f60444;
      if (pbVar3 != param_3) {
        bVar1 = *pbVar3;
        if ((bVar1 & 0x7e) == 0) {
          if (-1 < (char)bVar1) {
            *param_1 = in_x9 + 10;
                    /* catch() { ... } // from try @ 02f60418 with catch @ 02f6055c
                       catch() { ... } // from try @ 02f604c0 with catch @ 02f6055c */
            return param_2 | (ulong)bVar1 << 0x3f;
          }
          if ((byte *)(in_x9 + 10) == param_3)
          goto 
          Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP256R1Holder__CreateCurve
          ;
        }
        fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getULEB128","malformed uleb128 expression");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP256R1Holder__CreateCurve:
  fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
          "libunwind: %s - %s\n","getULEB128","truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


