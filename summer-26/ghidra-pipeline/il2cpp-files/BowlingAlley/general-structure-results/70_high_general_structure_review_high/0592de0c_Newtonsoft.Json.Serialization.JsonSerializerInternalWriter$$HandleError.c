/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 0592de0c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(void)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar9;
  uint unaff_w23;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long unaff_x25;
  ulong uVar14;
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uVar15;
  
  uVar6 = FUN_059320ac();
  puVar4 = PTR_DAT_072969e0;
  if ((uVar6 & 1) == 0) {
    uVar10 = 0;
    iVar11 = 1;
LAB_0592de4c:
    if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar15 = unaff_w28 - 0x30;
    if (uVar15 < 10) {
      if (unaff_w28 != 0x30) {
LAB_0592deb0:
        uVar13 = uVar10 + 1;
        uVar6 = (ulong)uVar15;
        iVar12 = -0x11;
        do {
          if (unaff_w23 <= uVar13) goto LAB_0592e128;
          uVar3 = *(ushort *)(unaff_x21 + (long)(int)(uVar10 + iVar12 + 0x12) * 2);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if (9 < uVar3 - 0x30) {
            uVar14 = (ulong)(uint)uVar3;
            uVar15 = uVar10 + iVar12 + 0x12;
            goto LAB_0592dff4;
          }
          uVar13 = uVar10 + iVar12 + 0x13;
          bVar5 = iVar12 != -1;
          iVar12 = iVar12 + 1;
          uVar6 = ((ulong)uVar3 + uVar6 * 10) - 0x30;
        } while (bVar5);
        if (unaff_w23 <= uVar13) {
LAB_0592e128:
          uVar7 = 1;
          lVar8 = uVar6 * (long)iVar11;
          goto LAB_0592e0f4;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)(uVar10 + 0x12) * 2);
        uVar14 = (ulong)uVar3;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar15 = uVar10 + 0x12;
        if (9 < uVar3 - 0x30) {
LAB_0592dff4:
          uVar10 = uVar15;
          bVar5 = false;
          uVar13 = (uint)uVar14;
          goto LAB_0592e004;
        }
        bVar2 = 0xccccccccccccccc < (long)uVar6;
        iVar12 = 2 - iVar11;
        if (-1 < 1 - iVar11) {
          iVar12 = 1 - iVar11;
        }
        uVar6 = (uVar14 + uVar6 * 10) - 0x30;
        uVar10 = uVar10 + 0x13;
        bVar1 = (ulong)(uint)(iVar12 >> 1) + 0x7fffffffffffffff < uVar6;
        bVar5 = bVar2 || bVar1;
        if (uVar10 < unaff_w23) {
          do {
            uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            uVar13 = (uint)uVar3;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            if (9 < uVar3 - 0x30) goto LAB_0592e004;
            uVar10 = uVar10 + 1;
            bVar5 = true;
          } while (unaff_w23 != uVar10);
        }
        else if (!bVar2 && !bVar1) goto LAB_0592e128;
LAB_0592e0c4:
        lVar8 = 0;
        uVar7 = 0;
        *unaff_x27 = 1;
        goto LAB_0592e0f4;
      }
      do {
        uVar10 = uVar10 + 1;
        if (unaff_w23 <= uVar10) {
          uVar6 = 0;
          goto LAB_0592e128;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
        uVar13 = (uint)uVar3;
        uVar15 = uVar3 - 0x30;
      } while (uVar15 == 0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (uVar15 < 10) goto LAB_0592deb0;
      uVar6 = 0;
      bVar5 = false;
LAB_0592e004:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar10 = uVar10 + 1;
          if ((int)uVar10 < (int)unaff_w23) {
            puVar9 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            do {
              if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              uVar3 = *puVar9;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0592e078;
              uVar10 = uVar10 + 1;
              puVar9 = puVar9 + 1;
            } while (unaff_w23 != uVar10);
          }
          else {
LAB_0592e078:
            if (uVar10 < unaff_w23) goto LAB_0592e08c;
          }
          goto LAB_0592e0bc;
        }
      }
      else {
LAB_0592e08c:
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar14 = FUN_0592fca4();
        if ((uVar14 & 1) != 0) {
LAB_0592e0bc:
          if (!bVar5) goto LAB_0592e128;
          goto LAB_0592e0c4;
        }
      }
    }
  }
  else {
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar10 = *(uint *)(unaff_x25 + 0x10);
    if (uVar10 < unaff_w23) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
      iVar11 = -1;
      goto LAB_0592de4c;
    }
  }
  lVar8 = 0;
  uVar7 = 0;
LAB_0592e0f4:
  *unaff_x19 = lVar8;
  return uVar7;
}


