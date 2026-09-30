/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Crypto.EC.CustomNamedCurves.SecP256K1Holder$$CreateCurve
ENTRY_POINT: 02f600b0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_16;strong_file_logging_hits_7;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_7
*/


/* WARNING: Type propagation algorithm not settling */

byte * Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP256K1Holder__CreateCurve
                 (undefined8 param_1,long *param_2,byte *param_3,uint param_4,long param_5)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  byte *pbVar4;
  int in_w8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *unaff_x19;
  
  puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  if (in_ZR || in_NG != in_OV) {
    if (in_w8 == 4) {
LAB_02f601d4:
      pbVar4 = *(byte **)unaff_x19;
      *param_2 = (long)(unaff_x19 + 8);
      puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
    }
    else {
      if (in_w8 != 9) {
LAB_02f603e0:
        fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar6 = 0;
      uVar5 = 0;
      pbVar4 = unaff_x19;
      pbVar8 = unaff_x19;
      do {
        if (pbVar8 == param_3) {
          fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar1 = *pbVar8;
        pbVar4 = pbVar4 + 1;
        uVar7 = uVar6 & 0x3f;
        uVar6 = uVar6 + 7;
        uVar5 = ((ulong)bVar1 & 0x7f) << uVar7 | uVar5;
        pbVar8 = pbVar8 + 1;
      } while ((char)bVar1 < '\0');
      *param_2 = (long)pbVar4;
      uVar7 = -1L << (uVar6 & 0x3f);
      if (0x38 < (int)uVar6 - 7U || bVar1 < 0x40) {
        uVar7 = 0;
      }
      pbVar4 = (byte *)(uVar5 | uVar7);
      puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
    }
  }
  else if (in_w8 == 10) {
    pbVar4 = (byte *)(long)*(short *)unaff_x19;
    *param_2 = (long)(unaff_x19 + 2);
    puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  }
  else {
    if (in_w8 != 0xb) {
      if (in_w8 != 0xc) goto LAB_02f603e0;
      goto LAB_02f601d4;
    }
    pbVar4 = (byte *)(long)*(int *)unaff_x19;
    *param_2 = (long)(unaff_x19 + 4);
    puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  }
  uVar2 = (param_4 & 0xff) >> 4 & 7;
  Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ = puVar3;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      if (uVar2 != 1) goto LAB_02f603ac;
      pbVar4 = pbVar4 + (long)unaff_x19;
    }
LAB_02f60260:
    if ((param_4 >> 7 & 1) == 0) {
      return pbVar4;
    }
    return *(byte **)pbVar4;
  }
  if (uVar2 < 4) {
    if (uVar2 == 3) {
      if (param_5 == 0) {
        fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_datarel is invalid with a datarelBase of 0");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pbVar4 = pbVar4 + param_5;
      goto LAB_02f60260;
    }
    if (uVar2 == 2) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_textrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (uVar2 == 4) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_funcrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar2 == 5) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_aligned pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_02f603ac:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


