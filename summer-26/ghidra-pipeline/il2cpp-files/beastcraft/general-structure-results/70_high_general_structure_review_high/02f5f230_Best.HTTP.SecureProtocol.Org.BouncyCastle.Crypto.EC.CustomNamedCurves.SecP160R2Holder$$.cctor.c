/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Crypto.EC.CustomNamedCurves.SecP160R2Holder$$.cctor
ENTRY_POINT: 02f5f230
PROGRAM: beastcraft-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;strong_file_logging_hits_2
*/


undefined8
Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP160R2Holder___cctor
          (ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong in_x9;
  byte *pbVar10;
  long in_x10;
  ulong in_x11;
  byte *in_x12;
  long unaff_x19;
  undefined4 *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  byte *unaff_x24;
  ulong unaff_x25;
  ulong uVar11;
  long unaff_x27;
  undefined4 unaff_w28;
  long unaff_x29;
  
  puVar6 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  while( true ) {
    in_x10 = in_x10 + 1;
    uVar11 = in_x9 & 0x3f;
    in_x9 = in_x9 + 7;
    param_1 = (in_x11 & 0x7f) << uVar11 | param_1;
    if (((uint)in_x11 >> 7 & 1) == 0) break;
    if (in_x12 == unaff_x24) {
      fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
              "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
      fflush((FILE *)(puVar6 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    in_x11 = (ulong)*in_x12;
    in_x12 = in_x12 + 1;
  }
  *(long *)(unaff_x29 + -0x40) = in_x10;
  if (param_2 < 0x60) {
    iVar4 = *(int *)(unaff_x22 + 0x2c);
    uVar9 = (uint)(-1L << (in_x9 & 0x3f));
    if (0x38 < (int)in_x9 - 7U || (uint)in_x11 < 0x40) {
      uVar9 = 0;
    }
    *unaff_x20 = (int)param_2;
    unaff_x20[1] = iVar4 * ((uint)param_1 | uVar9);
    pbVar10 = *(byte **)(unaff_x29 + -0x40);
    if (pbVar10 < unaff_x24) goto LAB_02f5fa90;
LAB_02f5f180:
    unaff_x27 = unaff_x27 + 0x18;
    if (unaff_x27 != 0x30) {
      puVar1 = (ulong *)(unaff_x29 + -0x38 + unaff_x27);
      pbVar10 = (byte *)*puVar1;
      unaff_x24 = (byte *)puVar1[1];
      unaff_x21 = puVar1[2];
      *(byte **)(unaff_x29 + -0x40) = pbVar10;
      if (pbVar10 < unaff_x24 && unaff_x21 != 0) {
        unaff_x25 = 0;
        do {
          bVar5 = *pbVar10;
          *(byte **)(unaff_x29 + -0x40) = pbVar10 + 1;
          if (bVar5 < 0x30) {
                    /* WARNING: Could not recover jumptable at 0x02f5f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*(code *)((ulong)*(ushort *)(unaff_x23 + (ulong)bVar5 * 2) * 4 + 0x2f5f1d4))();
            return uVar7;
          }
          bVar3 = bVar5 & 0xc0;
          uVar11 = (ulong)bVar5 & 0x3f;
          if (bVar3 == 0x40) {
            unaff_x25 = unaff_x25 + (uint)(*(int *)(unaff_x22 + 0x28) * (int)uVar11);
            pbVar10 = *(byte **)(unaff_x29 + -0x40);
          }
          else if (bVar3 == 0xc0) {
            if (*(char *)(unaff_x20 + uVar11 * 4 + 7) != '\0') {
              lVar8 = unaff_x19 + 0x28 + uVar11 * 0x10;
              uVar7 = *(undefined8 *)(lVar8 + 0x18);
              *(undefined8 *)(unaff_x20 + uVar11 * 4 + 8) = *(undefined8 *)(lVar8 + 0x20);
              *(undefined8 *)(unaff_x20 + uVar11 * 4 + 6) = uVar7;
            }
            pbVar10 = *(byte **)(unaff_x29 + -0x40);
          }
          else {
            if (bVar3 != 0x80) goto LAB_02f5fc4c;
            *(undefined4 *)(unaff_x19 + 4) = unaff_w28;
            lVar8 = FUN_02f60414(unaff_x29 + -0x40,unaff_x24);
            iVar4 = *(int *)(unaff_x22 + 0x2c);
            if (*(char *)(unaff_x20 + uVar11 * 4 + 7) == '\0') {
              uVar7 = *(undefined8 *)(unaff_x20 + uVar11 * 4 + 6);
              lVar2 = unaff_x19 + 0x28 + uVar11 * 0x10;
              *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(unaff_x20 + uVar11 * 4 + 8);
              *(undefined8 *)(lVar2 + 0x18) = uVar7;
              *(char *)(unaff_x20 + uVar11 * 4 + 7) = '\x01';
            }
            unaff_w28 = *(undefined4 *)(unaff_x19 + 4);
            unaff_x20[uVar11 * 4 + 6] = 2;
            *(long *)(unaff_x20 + uVar11 * 4 + 8) = lVar8 * iVar4;
            pbVar10 = *(byte **)(unaff_x29 + -0x40);
          }
          if (unaff_x24 <= pbVar10) break;
LAB_02f5fa90:
        } while (unaff_x25 < unaff_x21);
      }
      goto LAB_02f5f180;
    }
    uVar7 = 1;
  }
  else {
    fwrite("libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n",0x41,1,
           (FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130));
    fflush((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130));
LAB_02f5fc4c:
    uVar7 = 0;
  }
  return uVar7;
}


