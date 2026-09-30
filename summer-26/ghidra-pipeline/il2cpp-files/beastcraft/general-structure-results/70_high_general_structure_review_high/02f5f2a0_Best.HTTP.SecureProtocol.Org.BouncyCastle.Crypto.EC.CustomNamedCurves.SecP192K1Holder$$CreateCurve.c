/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Crypto.EC.CustomNamedCurves.SecP192K1Holder$$CreateCurve
ENTRY_POINT: 02f5f2a0
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
Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP192K1Holder__CreateCurve
          (ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  byte *unaff_x24;
  ulong unaff_x25;
  long unaff_x27;
  undefined4 unaff_w28;
  long unaff_x29;
  undefined8 uVar17;
  
  puVar8 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  if (param_1 < 0x60) {
    pbVar13 = *(byte **)(unaff_x29 + -0x40);
    uVar14 = 0;
    uVar11 = 0;
    pbVar15 = pbVar13;
    do {
      if (pbVar15 == unaff_x24) {
        fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
        fflush((FILE *)(puVar8 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar5 = *pbVar15;
      pbVar13 = pbVar13 + 1;
      uVar16 = uVar14 & 0x3f;
      uVar14 = uVar14 + 7;
      uVar11 = ((ulong)bVar5 & 0x7f) << uVar16 | uVar11;
      pbVar15 = pbVar15 + 1;
    } while ((char)bVar5 < '\0');
    lVar10 = unaff_x20 + param_1 * 0x10;
    uVar16 = -1L << (uVar14 & 0x3f);
    iVar7 = *(int *)(unaff_x22 + 0x2c);
    cVar6 = *(char *)(lVar10 + 0x1c);
    if (0x38 < (int)uVar14 - 7U || bVar5 < 0x40) {
      uVar16 = 0;
    }
                    /* try { // try from 02f5f308 to 0305f403 has its CatchHandler @ 02f5f308
                       catch() { ... } // from try @ 02f5f308 with catch @ 02f5f308
                       catch() { ... } // from try @ 02f5f410 with catch @ 02f5f308 */
    *(byte **)(unaff_x29 + -0x40) = pbVar13;
    if (cVar6 == '\0') {
      lVar2 = unaff_x20 + param_1 * 0x10;
      lVar3 = unaff_x19 + 0x28 + param_1 * 0x10;
      uVar17 = *(undefined8 *)(lVar2 + 0x20);
      uVar9 = *(undefined8 *)(lVar2 + 0x18);
      *(char *)(lVar10 + 0x1c) = '\x01';
      *(undefined8 *)(lVar3 + 0x20) = uVar17;
      *(undefined8 *)(lVar3 + 0x18) = uVar9;
    }
    *(undefined4 *)(lVar10 + 0x18) = 4;
    *(ulong *)(lVar10 + 0x20) = (uVar11 | uVar16) * (long)iVar7;
    pbVar13 = *(byte **)(unaff_x29 + -0x40);
    if (pbVar13 < unaff_x24) goto LAB_02f5fa90;
LAB_02f5f180:
    unaff_x27 = unaff_x27 + 0x18;
    if (unaff_x27 != 0x30) {
      puVar1 = (ulong *)(unaff_x29 + -0x38 + unaff_x27);
      pbVar13 = (byte *)*puVar1;
      unaff_x24 = (byte *)puVar1[1];
      unaff_x21 = puVar1[2];
      *(byte **)(unaff_x29 + -0x40) = pbVar13;
      if (pbVar13 < unaff_x24 && unaff_x21 != 0) {
        unaff_x25 = 0;
        do {
          bVar5 = *pbVar13;
          *(byte **)(unaff_x29 + -0x40) = pbVar13 + 1;
          if (bVar5 < 0x30) {
                    /* WARNING: Could not recover jumptable at 0x02f5f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar9 = (*(code *)((ulong)*(ushort *)(unaff_x23 + (ulong)bVar5 * 2) * 4 + 0x2f5f1d4))();
            return uVar9;
          }
          bVar4 = bVar5 & 0xc0;
          uVar14 = (ulong)bVar5 & 0x3f;
          if (bVar4 == 0x40) {
            unaff_x25 = unaff_x25 + (uint)(*(int *)(unaff_x22 + 0x28) * (int)uVar14);
            pbVar13 = *(byte **)(unaff_x29 + -0x40);
          }
          else if (bVar4 == 0xc0) {
            if (*(char *)(unaff_x20 + uVar14 * 0x10 + 0x1c) != '\0') {
              lVar10 = unaff_x19 + 0x28 + uVar14 * 0x10;
              lVar2 = unaff_x20 + uVar14 * 0x10;
              uVar9 = *(undefined8 *)(lVar10 + 0x18);
              *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
              *(undefined8 *)(lVar2 + 0x18) = uVar9;
            }
            pbVar13 = *(byte **)(unaff_x29 + -0x40);
          }
          else {
            if (bVar4 != 0x80) goto LAB_02f5fc4c;
            *(undefined4 *)(unaff_x19 + 4) = unaff_w28;
            lVar10 = FUN_02f60414(unaff_x29 + -0x40,unaff_x24);
            iVar7 = *(int *)(unaff_x22 + 0x2c);
            pcVar12 = (char *)(unaff_x20 + uVar14 * 0x10 + 0x1c);
            if (*pcVar12 == '\0') {
              lVar2 = unaff_x20 + uVar14 * 0x10;
              uVar9 = *(undefined8 *)(lVar2 + 0x18);
              lVar3 = unaff_x19 + 0x28 + uVar14 * 0x10;
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
              *(undefined8 *)(lVar3 + 0x18) = uVar9;
              *pcVar12 = '\x01';
            }
            lVar2 = unaff_x20 + uVar14 * 0x10;
            unaff_w28 = *(undefined4 *)(unaff_x19 + 4);
            *(undefined4 *)(lVar2 + 0x18) = 2;
            *(long *)(lVar2 + 0x20) = lVar10 * iVar7;
            pbVar13 = *(byte **)(unaff_x29 + -0x40);
          }
          if (unaff_x24 <= pbVar13) break;
LAB_02f5fa90:
        } while (unaff_x25 < unaff_x21);
      }
      goto LAB_02f5f180;
    }
    uVar9 = 1;
  }
  else {
    fwrite("libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n",0x44,1,
           (FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130));
    fflush((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130));
LAB_02f5fc4c:
    uVar9 = 0;
  }
  return uVar9;
}


