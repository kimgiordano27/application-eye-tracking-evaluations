/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.TraceJsonReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 050dff34
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_TraceJsonReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition(void)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  long unaff_x19;
  ushort *puVar10;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long unaff_x25;
  ulong uVar14;
  long unaff_x26;
  uint unaff_w28;
  long *unaff_x29;
  undefined1 *in_stack_00000018;
  
  *(undefined1 *)(unaff_x19 + 0xda0) = 1;
  if (unaff_x26 != 0) {
    FUN_04f6c4a0();
  }
  uVar4 = FUN_050e40bc();
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_04f6ebb4();
    if ((uVar4 & 1) == 0) {
      if (DAT_06bb7da0 == '\0') {
        FUN_02f08768(PTR_DAT_067ce5b8);
        DAT_06bb7da0 = '\x01';
      }
      if (unaff_x25 != 0) {
        FUN_04f6c4a0();
      }
      uVar4 = FUN_050e40bc();
      if ((uVar4 & 1) != 0) {
        if (unaff_x25 == 0) goto LAB_050e030c;
        uVar11 = *(uint *)(unaff_x25 + 0x10);
        if (uVar11 < unaff_w23) {
          iVar9 = -1;
          goto LAB_050e002c;
        }
        goto LAB_050e01bc;
      }
    }
    uVar11 = 0;
    iVar9 = 1;
LAB_050e0054:
    puVar3 = PTR_DAT_067dbd90;
    if (*(int *)(*(long *)PTR_DAT_067dbd90 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = unaff_w28 - 0x30;
    if (uVar7 < 10) {
      if (unaff_w28 == 0x30) {
        do {
          uVar11 = uVar11 + 1;
          if (unaff_w23 <= uVar11) {
            uVar4 = 0;
            goto LAB_050e02f4;
          }
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
          uVar14 = (ulong)uVar2;
        } while (uVar2 == 0x30);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = uVar2 - 0x30;
        if (uVar7 < 10) goto LAB_050e00b8;
        uVar8 = 0;
        uVar12 = uVar11;
LAB_050e0208:
        uVar11 = (uint)uVar14;
        bVar1 = false;
LAB_050e020c:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if ((uVar11 - 9 < 5) || (uVar11 == 0x20)) {
          if ((unaff_w22 >> 1 & 1) != 0) {
            uVar12 = uVar12 + 1;
            if ((int)uVar12 < (int)unaff_w23) {
              puVar10 = (ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
              do {
                if (unaff_w23 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                uVar2 = *puVar10;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_050e0288;
                uVar12 = uVar12 + 1;
                puVar10 = puVar10 + 1;
              } while (unaff_w23 != uVar12);
            }
            else {
LAB_050e0288:
              if (uVar12 < unaff_w23) goto LAB_050e029c;
            }
            goto LAB_050e02d8;
          }
        }
        else {
LAB_050e029c:
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar4 = FUN_050e1eec();
          if ((uVar4 & 1) != 0) {
LAB_050e02d8:
            uVar4 = uVar8;
            if (!bVar1) goto LAB_050e02f4;
            goto FUN_050e02dc;
          }
        }
        lVar5 = 0;
        uVar6 = 0;
      }
      else {
LAB_050e00b8:
        uVar12 = uVar11 + 0x12;
        iVar13 = 1;
        uVar8 = (ulong)uVar7;
        do {
          uVar4 = uVar8;
          if (unaff_w23 <= uVar11 + iVar13) goto LAB_050e02f4;
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)(uVar11 + iVar13) * 2);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (9 < uVar2 - 0x30) {
            uVar14 = (ulong)(uint)uVar2;
            uVar12 = uVar11 + iVar13;
            goto LAB_050e0208;
          }
          iVar13 = iVar13 + 1;
          uVar4 = ((ulong)uVar2 + uVar8 * 10) - 0x30;
          uVar8 = uVar4;
        } while (iVar13 != 0x12);
        if (unaff_w23 <= uVar12) {
LAB_050e02f4:
          uVar6 = 1;
          lVar5 = uVar4 * (long)iVar9;
          goto LAB_050e01c0;
        }
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
        uVar14 = (ulong)uVar2;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (9 < uVar2 - 0x30) goto LAB_050e0208;
        uVar12 = uVar11 + 0x13;
        uVar8 = (uVar14 + uVar4 * 10) - 0x30;
        bVar1 = (ulong)(1U - iVar9 >> 1) + 0x7fffffffffffffff < uVar8 ||
                0xccccccccccccccc < (long)uVar4;
        if (unaff_w23 <= uVar12) goto LAB_050e02d8;
        lVar5 = *(long *)puVar3;
        do {
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
          uVar11 = (uint)uVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar5 = *(long *)puVar3;
          }
          if (9 < uVar2 - 0x30) goto LAB_050e020c;
          uVar12 = uVar12 + 1;
          bVar1 = true;
        } while (unaff_w23 != uVar12);
FUN_050e02dc:
        lVar5 = 0;
        uVar6 = 0;
        *in_stack_00000018 = 1;
      }
      goto LAB_050e01c0;
    }
  }
  else {
    if (unaff_x26 == 0) {
LAB_050e030c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar11 = *(uint *)(unaff_x26 + 0x10);
    if (uVar11 < unaff_w23) {
      iVar9 = 1;
LAB_050e002c:
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
      goto LAB_050e0054;
    }
  }
LAB_050e01bc:
  lVar5 = 0;
  uVar6 = 0;
LAB_050e01c0:
  *unaff_x29 = lVar5;
  return uVar6;
}


