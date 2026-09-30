/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 05ac39fc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint unaff_w19;
  long unaff_x20;
  int iVar16;
  
                    /* catch() { ... } // from try @ 05ac39c0 with catch @ 05ac39fc */
  if (param_1 == 0) {
    lVar8 = thunk_FUN_03010710();
    if (lVar8 == 0) {
      thunk_FUN_03037804(PTR_DAT_06f6d8e8);
      uVar10 = thunk_FUN_0301080c();
      uVar11 = thunk_FUN_03037804(PTR_DAT_06fac8c8);
      uVar9 = thunk_FUN_03037804(PTR_DAT_06f98f28);
      FUN_05a5ea40(uVar10,uVar11,uVar9,0);
      goto LAB_05ac3de8;
    }
    iVar6 = FUN_05b07bb4();
    if (*(int *)(unaff_x20 + 0x18) <= (int)(iVar6 - unaff_w19)) {
      lVar8 = thunk_FUN_03010710();
      if (lVar8 != 0) {
        iVar6 = *(int *)(unaff_x20 + 0x18);
        if (iVar6 < 1) {
          return;
        }
        lVar14 = *(long *)(unaff_x20 + 0x10);
        if (lVar14 != 0) {
          uVar3 = *(uint *)(lVar14 + 0x18);
          uVar13 = 0;
          lVar15 = (ulong)unaff_w19 << 0x20;
          while ((uVar4 = (uint)(uVar13 >> 5) & 0x7ffffff, uVar4 < uVar3 &&
                 (unaff_w19 + uVar13 < (ulong)*(uint *)(lVar8 + 0x18)))) {
            lVar1 = lVar15 >> 0x20;
            lVar15 = lVar15 + 0x100000000;
            uVar12 = (uint)uVar13;
            uVar13 = uVar13 + 1;
            *(byte *)(lVar8 + lVar1 + 0x20) =
                 (byte)(*(uint *)(lVar14 + (ulong)uVar4 * 4 + 0x20) >> (ulong)(uVar12 & 0x1f)) & 1;
            if ((long)iVar6 <= (long)uVar13) {
              return;
            }
          }
LAB_05ac3cb8:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
LAB_05ac3cbc:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      goto LAB_05ac3e00;
    }
  }
  else {
                    /* catch() { ... } // from try @ 05ac37a0 with catch @ 05ac3a00 */
    iVar6 = *(int *)(unaff_x20 + 0x18);
                    /* catch() { ... } // from try @ 05ac35c4 with catch @ 05ac3a04 */
                    /* catch() { ... } // from try @ 05ac3944 with catch @ 05ac3a08 */
                    /* catch() { ... } // from try @ 05ac358c with catch @ 05ac3a0c */
                    /* catch() { ... } // from try @ 05ac38c8 with catch @ 05ac3a10 */
                    /* catch() { ... } // from try @ 05ac38c0 with catch @ 05ac3a14 */
    if (iVar6 < 1) {
      iVar16 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 05ac38b4 with catch @ 05ac3a18 */
                    /* catch() { ... } // from try @ 05ac38a8 with catch @ 05ac3a1c */
      iVar16 = iVar6 + 6;
                    /* catch() { ... } // from try @ 05ac3708 with catch @ 05ac3a20 */
      if (-1 < iVar6 + -1) {
        iVar16 = iVar6 + -1;
      }
                    /* catch() { ... } // from try @ 05ac34f4 with catch @ 05ac3a24 */
                    /* catch() { ... } // from try @ 05ac36ac with catch @ 05ac3a28 */
      iVar16 = (iVar16 >> 3) + 1;
                    /* catch() { ... } // from try @ 05ac3498 with catch @ 05ac3a2c */
    }
    iVar7 = FUN_05b07bb4();
    if (iVar16 <= (int)(iVar7 - unaff_w19)) {
      uVar3 = iVar6 % 8;
      lVar8 = thunk_FUN_03010710();
      if (lVar8 != 0) {
        uVar4 = iVar16 - (uint)(0 < (int)uVar3);
        if (0 < (int)uVar4) {
          uVar12 = 0;
          uVar13 = 0;
          lVar14 = (ulong)unaff_w19 << 0x20;
          do {
            lVar15 = *(long *)(unaff_x20 + 0x10);
            if (lVar15 == 0) goto LAB_05ac3cbc;
            uVar5 = (uint)(uVar13 >> 2) & 0x3fffffff;
            if ((*(uint *)(lVar15 + 0x18) <= uVar5) ||
               ((ulong)*(uint *)(lVar8 + 0x18) <= unaff_w19 + uVar13)) goto LAB_05ac3cb8;
            uVar2 = uVar12 & 0x18;
            uVar13 = uVar13 + 1;
            lVar1 = lVar14 >> 0x20;
            uVar12 = uVar12 + 8;
            lVar14 = lVar14 + 0x100000000;
            *(char *)(lVar8 + lVar1 + 0x20) =
                 (char)(*(int *)(lVar15 + (ulong)uVar5 * 4 + 0x20) >> uVar2);
          } while (uVar4 != uVar13);
        }
        if (0 < (int)uVar3) {
          lVar14 = *(long *)(unaff_x20 + 0x10);
          if (lVar14 == 0) goto LAB_05ac3cbc;
          uVar12 = uVar4 + 3;
          if (-1 < (int)uVar4) {
            uVar12 = uVar4;
          }
          if ((*(uint *)(lVar14 + 0x18) <= (uint)((int)uVar12 >> 2)) ||
             (*(uint *)(lVar8 + 0x18) <= uVar4 + unaff_w19)) goto LAB_05ac3cb8;
          *(byte *)(lVar8 + (int)(uVar4 + unaff_w19) + 0x20) =
               (byte)(*(int *)(lVar14 + (long)((int)uVar12 >> 2) * 4 + 0x20) >> ((uVar4 & 3) << 3))
               & ((byte)(-1 << (ulong)(uVar3 & 0x1f)) ^ 0xff);
        }
        return;
      }
LAB_05ac3e00:
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884();
    }
  }
  thunk_FUN_03037804(PTR_DAT_06f6d8e8);
  uVar10 = thunk_FUN_0301080c();
  uVar11 = thunk_FUN_03037804(PTR_DAT_06f98f50);
  FUN_05a64d00(uVar10,uVar11,0);
LAB_05ac3de8:
  uVar11 = thunk_FUN_03037804(PTR_DAT_06fac8c0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar10,uVar11);
}


