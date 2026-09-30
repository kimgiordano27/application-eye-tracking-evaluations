/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Crypto.EC.CustomNamedCurves.SecP256K1Holder$$.ctor
ENTRY_POINT: 02f600a8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_21;strong_file_logging_hits_7;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_7
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 *
Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP256K1Holder___ctor
          (undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined8 *puVar4;
  int in_w8;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *unaff_x19;
  
  puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  if (in_ZR || in_NG != in_OV) {
    if (in_w8 < 2) {
      if (in_w8 == 0) goto LAB_02f601d4;
      if (in_w8 != 1) {
LAB_02f603e0:
        fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_02f60414(param_2,param_3);
      puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
    }
    else if (in_w8 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*unaff_x19;
      *param_2 = (long)unaff_x19 + 2;
      puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
    }
    else {
      if (in_w8 != 3) goto LAB_02f603e0;
      puVar4 = (undefined8 *)(ulong)(uint)*unaff_x19;
      *param_2 = (long)((long)unaff_x19 + 4);
      puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
    }
  }
  else if (in_w8 < 10) {
    if (in_w8 == 4) {
LAB_02f601d4:
      puVar4 = (undefined8 *)*unaff_x19;
      *param_2 = (long)(unaff_x19 + 1);
      puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
    }
    else {
      if (in_w8 != 9) goto LAB_02f603e0;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = unaff_x19;
      puVar9 = unaff_x19;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar1 = (byte)*puVar9;
        puVar6 = (ulong *)((long)puVar6 + 1);
        uVar8 = uVar7 & 0x3f;
        uVar7 = uVar7 + 7;
        uVar5 = ((ulong)bVar1 & 0x7f) << uVar8 | uVar5;
        puVar9 = (ulong *)((long)puVar9 + 1);
      } while ((char)bVar1 < '\0');
      *param_2 = (long)puVar6;
      uVar8 = -1L << (uVar7 & 0x3f);
      if (0x38 < (int)uVar7 - 7U || bVar1 < 0x40) {
        uVar8 = 0;
      }
      puVar4 = (undefined8 *)(uVar5 | uVar8);
      puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
    }
  }
  else if (in_w8 == 10) {
    puVar4 = (undefined8 *)(long)(short)*unaff_x19;
    *param_2 = (long)unaff_x19 + 2;
    puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  }
  else {
    if (in_w8 != 0xb) {
      if (in_w8 != 0xc) goto LAB_02f603e0;
      goto LAB_02f601d4;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*unaff_x19;
    *param_2 = (long)((long)unaff_x19 + 4);
    puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  }
  uVar2 = (param_4 & 0xff) >> 4 & 7;
  Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ = puVar3;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      if (uVar2 != 1) goto LAB_02f603ac;
      puVar4 = (undefined8 *)((long)puVar4 + (long)unaff_x19);
    }
LAB_02f60260:
    if ((param_4 >> 7 & 1) != 0) {
      return (undefined8 *)*puVar4;
    }
    return puVar4;
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
      puVar4 = (undefined8 *)((long)puVar4 + param_5);
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


