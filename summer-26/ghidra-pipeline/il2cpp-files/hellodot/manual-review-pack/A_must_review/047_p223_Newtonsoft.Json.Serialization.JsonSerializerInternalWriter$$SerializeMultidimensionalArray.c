/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 04f3b5e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray(void)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long *unaff_x19;
  ulong uVar10;
  long lVar11;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  ulong unaff_x23;
  uint unaff_w24;
  int iVar15;
  int iVar16;
  long unaff_x25;
  ulong uVar17;
  long *unaff_x26;
  undefined1 *unaff_x27;
  uint uVar18;
  ulong uVar19;
  
  for (; uVar13 = (uint)unaff_x23, uVar13 != unaff_w24; unaff_w24 = unaff_w24 + 1) {
    uVar4 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar18 = (uint)uVar4;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((4 < uVar4 - 9) && (uVar4 != 0x20)) {
      uVar10 = unaff_x23 >> 0x20;
      if ((unaff_w22 >> 2 & 1) == 0) goto LAB_04f3b584;
      if (unaff_x25 == 0) goto LAB_04f3bac4;
      lVar9 = *(long *)(unaff_x25 + 0x28);
      lVar3 = *(long *)(unaff_x25 + 0x30);
      uVar19 = thunk_FUN_04db8ae0(lVar9,*(undefined8 *)PTR_DAT_065d8130,0);
      if (((uVar19 & 1) == 0) ||
         (uVar19 = thunk_FUN_04db8ae0(lVar3,*(undefined8 *)PTR_DAT_065e1bc8,0), (uVar19 & 1) == 0))
      {
        lVar11 = *(long *)PTR_DAT_065f7688;
        if (uVar13 < unaff_w24) {
          FUN_04f51680(0);
        }
        if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
          FUN_02ce0978();
        }
        uVar13 = uVar13 - unaff_w24;
        unaff_x23 = (ulong)uVar13;
        unaff_x21 = unaff_x21 + (long)(int)unaff_w24 * 2;
        uVar10 = FUN_04db9688(lVar9,0);
        if ((uVar10 & 1) == 0) {
          if (DAT_06a6cef9 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e23a8);
            DAT_06a6cef9 = '\x01';
          }
          if (lVar9 == 0) {
            uVar7 = 0;
            uVar8 = 0;
          }
          else {
            uVar7 = FUN_04db75ac(lVar9,0);
            uVar8 = *(undefined4 *)(lVar9 + 0x10);
          }
          uVar10 = FUN_04f3f758(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_065fb090);
          if ((uVar10 & 1) == 0) goto LAB_04f3b730;
          if (lVar9 == 0) goto LAB_04f3bac4;
          unaff_w24 = *(uint *)(lVar9 + 0x10);
          if (uVar13 <= unaff_w24) break;
          uVar18 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        }
        else {
LAB_04f3b730:
          uVar10 = FUN_04db9688(lVar3,0);
          if ((uVar10 & 1) == 0) {
            if (DAT_06a6cef9 == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e23a8);
              DAT_06a6cef9 = '\x01';
            }
            if (lVar3 == 0) {
              uVar7 = 0;
              uVar8 = 0;
            }
            else {
              uVar7 = FUN_04db75ac(lVar3,0);
              uVar8 = *(undefined4 *)(lVar3 + 0x10);
            }
            uVar10 = FUN_04f3f758(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_065fb090);
            if ((uVar10 & 1) != 0) {
              if (lVar3 == 0) {
LAB_04f3bac4:
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              unaff_w24 = *(uint *)(lVar3 + 0x10);
              if (unaff_w24 < uVar13) {
                uVar18 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
                uVar10 = 0;
                iVar15 = -1;
                goto LAB_04f3b7d0;
              }
              break;
            }
          }
          unaff_w24 = 0;
        }
        uVar10 = 0;
        iVar15 = 1;
      }
      else {
        if (uVar4 == 0x2b) {
          unaff_w24 = unaff_w24 + 1;
          if (uVar13 <= unaff_w24) break;
          uVar18 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        }
        else if (uVar4 == 0x2d) {
          unaff_w24 = unaff_w24 + 1;
          if (unaff_w24 < uVar13) {
            uVar18 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
            iVar15 = -1;
            goto LAB_04f3b7d0;
          }
          break;
        }
LAB_04f3b584:
        iVar15 = 1;
      }
LAB_04f3b7d0:
      puVar5 = PTR_DAT_065f73a8;
      if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar13 = uVar18 - 0x30;
      if (uVar13 < 10) {
        uVar14 = (uint)unaff_x23;
        if (uVar18 != 0x30) goto LAB_04f3b834;
        goto LAB_04f3b804;
      }
      break;
    }
  }
  goto LAB_04f3ba70;
  while( true ) {
    uVar4 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar18 = (uint)uVar4;
    uVar13 = uVar4 - 0x30;
    if (uVar13 != 0) break;
LAB_04f3b804:
    unaff_w24 = unaff_w24 + 1;
    if (uVar14 <= unaff_w24) {
      uVar19 = 0;
      goto LAB_04f3baac;
    }
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (uVar13 < 10) {
LAB_04f3b834:
    uVar18 = unaff_w24 + 1;
    uVar19 = (ulong)uVar13;
    iVar16 = -0x11;
    do {
      if (uVar14 <= uVar18) goto LAB_04f3baac;
      uVar4 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar16 + 0x12) * 2);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (9 < uVar4 - 0x30) {
        uVar17 = (ulong)(uint)uVar4;
        uVar13 = unaff_w24 + iVar16 + 0x12;
        goto LAB_04f3b978;
      }
      uVar18 = unaff_w24 + iVar16 + 0x13;
      bVar6 = iVar16 != -1;
      iVar16 = iVar16 + 1;
      uVar19 = ((ulong)uVar4 + uVar19 * 10) - 0x30;
    } while (bVar6);
    if (uVar14 <= uVar18) {
LAB_04f3baac:
      uVar7 = 1;
      lVar9 = uVar19 * (long)iVar15;
      goto LAB_04f3ba78;
    }
    uVar4 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + 0x12) * 2);
    uVar17 = (ulong)uVar4;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar13 = unaff_w24 + 0x12;
    if (9 < uVar4 - 0x30) {
LAB_04f3b978:
      unaff_w24 = uVar13;
      bVar6 = false;
      uVar18 = (uint)uVar17;
      goto LAB_04f3b988;
    }
    bVar2 = 0xccccccccccccccc < (long)uVar19;
    iVar16 = 2 - iVar15;
    if (-1 < 1 - iVar15) {
      iVar16 = 1 - iVar15;
    }
    uVar19 = (uVar17 + uVar19 * 10) - 0x30;
    unaff_w24 = unaff_w24 + 0x13;
    bVar1 = (ulong)(uint)(iVar16 >> 1) + 0x7fffffffffffffff < uVar19;
    bVar6 = bVar2 || bVar1;
    if (unaff_w24 < uVar14) {
      do {
        uVar4 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar18 = (uint)uVar4;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (9 < uVar4 - 0x30) goto LAB_04f3b988;
        unaff_w24 = unaff_w24 + 1;
        bVar6 = true;
      } while (uVar14 != unaff_w24);
    }
    else if (!bVar2 && !bVar1) goto LAB_04f3baac;
LAB_04f3ba48:
    lVar9 = 0;
    uVar7 = 0;
    *unaff_x27 = 1;
  }
  else {
    uVar19 = 0;
    bVar6 = false;
LAB_04f3b988:
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((uVar18 - 9 < 5) || (uVar18 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) != 0) {
        unaff_w24 = unaff_w24 + 1;
        if ((int)unaff_w24 < (int)uVar14) {
          puVar12 = (ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
          do {
            if (uVar14 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            uVar4 = *puVar12;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if ((4 < uVar4 - 9) && (uVar4 != 0x20)) goto LAB_04f3b9fc;
            unaff_w24 = unaff_w24 + 1;
            puVar12 = puVar12 + 1;
          } while (uVar14 != unaff_w24);
        }
        else {
LAB_04f3b9fc:
          if (unaff_w24 < uVar14) goto LAB_04f3ba10;
        }
        goto LAB_04f3ba40;
      }
    }
    else {
LAB_04f3ba10:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar10 = FUN_04f3d628(unaff_x21,unaff_x23 & 0xffffffff | uVar10 << 0x20,unaff_w24);
      if ((uVar10 & 1) != 0) {
LAB_04f3ba40:
        if (!bVar6) goto LAB_04f3baac;
        goto LAB_04f3ba48;
      }
    }
LAB_04f3ba70:
    lVar9 = 0;
    uVar7 = 0;
  }
LAB_04f3ba78:
  *unaff_x19 = lVar9;
  return uVar7;
}


