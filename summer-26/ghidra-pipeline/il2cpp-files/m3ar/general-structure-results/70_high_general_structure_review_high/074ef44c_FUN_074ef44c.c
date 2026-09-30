/*
FUNCTION_NAME: FUN_074ef44c
ENTRY_POINT: 074ef44c
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong FUN_074ef44c(undefined8 param_1,long param_2,ulong param_3,long param_4,long *param_5,
                  uint param_6)

{
  bool bVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  long local_58;
  
  puVar5 = PTR_DAT_08f9f500;
  puVar4 = PTR_DAT_08f992c8;
  param_3 = param_3 & 0xffffffff;
  if ((DAT_09546f37 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f992c8);
    FUN_0403162c(PTR_DAT_08f9f500);
    FUN_0403162c(PTR_DAT_08f8ca58);
    DAT_09546f37 = 1;
  }
  local_58 = 0;
  lVar6 = FUN_04bf989c(param_1,param_2,*(undefined8 *)puVar4);
  local_58 = lVar6;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0408f364(*(long *)puVar5);
  }
  puVar11 = (undefined1 *)(ulong)(param_6 & 1);
  uVar7 = FUN_074f0e60(&local_58,lVar6 + ((param_2 << 0x20) >> 0x1f));
  if ((uVar7 & 1) != 0) {
    lVar6 = local_58 - lVar6;
    if (lVar6 < 0) {
      lVar6 = lVar6 + 1;
    }
    if ((param_2 << 0x20) >> 0x20 <= lVar6 >> 1) {
      return uVar7;
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    param_3 = lVar6 >> 1 & 0xffffffff;
    uVar7 = FUN_074f172c(param_1,param_2);
    if ((uVar7 & 1) != 0) {
      return uVar7;
    }
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  auVar22 = FUN_074ef08c(0,0);
  puVar14 = auVar22._0_8_;
  if ((DAT_09546f28 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fa33d0);
    FUN_0403162c(PTR_DAT_08f9f500);
    FUN_0403162c(PTR_DAT_08f9f7a8);
    FUN_0403162c(PTR_DAT_08f8ca58);
    FUN_0403162c(PTR_DAT_08f671e0);
    FUN_0403162c(PTR_DAT_08f65d40);
    DAT_09546f28 = 1;
  }
  puVar4 = PTR_DAT_08f9f500;
  uVar15 = auVar22._8_4_;
  if (uVar15 == 0) goto LAB_074ef9fc;
  uVar2 = *puVar14;
  if ((param_3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((uVar2 - 9 < 5) || (uVar2 == 0x20)) {
      if (uVar15 != 1) {
        lVar6 = *(long *)puVar4;
        uVar17 = 1;
        do {
          uVar2 = puVar14[(int)uVar17];
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar6 = *(long *)puVar4;
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074ef630;
          uVar17 = uVar17 + 1;
        } while (uVar15 != uVar17);
      }
      goto LAB_074ef9fc;
    }
  }
  uVar17 = 0;
LAB_074ef630:
  uVar20 = (uint)uVar2;
  uVar7 = auVar22._8_8_ >> 0x20;
  if (((uint)param_3 >> 2 & 1) == 0) {
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray:
    iVar13 = 1;
    auVar3 = auVar22;
LAB_074ef894:
    puVar4 = PTR_DAT_08f9f500;
    lVar6 = auVar3._0_8_;
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar15 = uVar20 - 0x30;
    if (uVar15 < 10) {
      uVar16 = auVar3._8_4_;
      if (uVar20 == 0x30) {
        do {
          uVar17 = uVar17 + 1;
          if (uVar16 <= uVar17) {
            uVar21 = 0;
            goto LAB_074efb34;
          }
          uVar2 = *(ushort *)(lVar6 + (long)(int)uVar17 * 2);
          uVar19 = (ulong)uVar2;
        } while (uVar2 == 0x30);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar15 = uVar2 - 0x30;
        if (uVar15 < 10) goto LAB_074ef8f8;
        uVar12 = 0;
        uVar20 = uVar17;
LAB_074efa48:
        uVar15 = (uint)uVar19;
        bVar1 = false;
LAB_074efa4c:
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if ((uVar15 - 9 < 5) || (uVar15 == 0x20)) {
          if (((uint)param_3 >> 1 & 1) != 0) {
            uVar20 = uVar20 + 1;
            if ((int)uVar20 < (int)uVar16) {
              puVar14 = (ushort *)(lVar6 + (long)(int)uVar20 * 2);
              do {
                if (uVar16 <= uVar20) {
                    /* WARNING: Subroutine does not return */
                  FUN_04031894();
                }
                uVar2 = *puVar14;
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074efac8;
                uVar20 = uVar20 + 1;
                puVar14 = puVar14 + 1;
              } while (uVar16 != uVar20);
            }
            else {
LAB_074efac8:
              if (uVar20 < uVar16)
              goto 
              Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty
              ;
            }
            goto LAB_074efb18;
          }
        }
        else {
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty:
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar7 = FUN_074f172c(lVar6,auVar3._8_8_ & 0xffffffff | uVar7 << 0x20,uVar20);
          if ((uVar7 & 1) != 0) {
LAB_074efb18:
            uVar21 = uVar12;
            if (!bVar1) goto LAB_074efb34;
            goto LAB_074efb1c;
          }
        }
        lVar6 = 0;
        uVar7 = 0;
      }
      else {
LAB_074ef8f8:
        uVar20 = uVar17 + 0x12;
        iVar18 = 1;
        uVar12 = (ulong)uVar15;
        do {
          uVar21 = uVar12;
          if (uVar16 <= uVar17 + iVar18) goto LAB_074efb34;
          uVar2 = *(ushort *)(lVar6 + (long)(int)(uVar17 + iVar18) * 2);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar2 - 0x30) {
            uVar19 = (ulong)(uint)uVar2;
            uVar20 = uVar17 + iVar18;
            goto LAB_074efa48;
          }
          iVar18 = iVar18 + 1;
          uVar21 = ((ulong)uVar2 + uVar12 * 10) - 0x30;
          uVar12 = uVar21;
        } while (iVar18 != 0x12);
        if (uVar16 <= uVar20) {
LAB_074efb34:
          uVar7 = 1;
          lVar6 = uVar21 * (long)iVar13;
          goto LAB_074efa00;
        }
        uVar2 = *(ushort *)(lVar6 + (long)(int)uVar20 * 2);
        uVar19 = (ulong)uVar2;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if (9 < uVar2 - 0x30) goto LAB_074efa48;
        uVar20 = uVar17 + 0x13;
        uVar12 = (uVar19 + uVar21 * 10) - 0x30;
        bVar1 = (ulong)(1U - iVar13 >> 1) + 0x7fffffffffffffff < uVar12 ||
                0xccccccccccccccc < (long)uVar21;
        if (uVar16 <= uVar20) goto LAB_074efb18;
        lVar9 = *(long *)puVar4;
        do {
          uVar2 = *(ushort *)(lVar6 + (long)(int)uVar20 * 2);
          uVar15 = (uint)uVar2;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar9 = *(long *)puVar4;
          }
          if (9 < uVar2 - 0x30) goto LAB_074efa4c;
          uVar20 = uVar20 + 1;
          bVar1 = true;
        } while (uVar16 != uVar20);
LAB_074efb1c:
        lVar6 = 0;
        uVar7 = 0;
        *puVar11 = 1;
      }
      goto LAB_074efa00;
    }
  }
  else {
    if (param_4 == 0) goto LAB_074efb4c;
    lVar6 = *(long *)(param_4 + 0x28);
    lVar9 = *(long *)(param_4 + 0x30);
    uVar21 = thunk_FUN_07367938(lVar6,*(undefined8 *)PTR_DAT_08f671e0,0);
    if (((uVar21 & 1) == 0) ||
       (uVar21 = thunk_FUN_07367938(lVar9,*(undefined8 *)PTR_DAT_08f65d40,0), (uVar21 & 1) == 0)) {
      uVar16 = uVar15 - uVar17;
      if (uVar15 < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_07505afc(0);
      }
      if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f9f7a8 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      puVar14 = puVar14 + (int)uVar17;
      auVar3._8_4_ = uVar16;
      auVar3._0_8_ = puVar14;
      auVar3._12_4_ = 0;
      auVar22._8_4_ = uVar16;
      auVar22._0_8_ = puVar14;
      auVar22._12_4_ = 0;
      uVar7 = FUN_07368ba4(lVar6,0);
      if ((uVar7 & 1) == 0) {
        if (DAT_0953f498 == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca88);
          DAT_0953f498 = '\x01';
        }
        if (lVar6 == 0) {
          uVar8 = 0;
          uVar10 = 0;
        }
        else {
          uVar8 = FUN_0736648c(lVar6,0);
          uVar10 = *(undefined4 *)(lVar6 + 0x10);
        }
        uVar7 = FUN_074f38fc(puVar14,uVar16,uVar8,uVar10,*(undefined8 *)PTR_DAT_08fa33d0);
        if ((uVar7 & 1) == 0) goto LAB_074ef7e4;
        if (lVar6 == 0) goto LAB_074efb4c;
        uVar17 = *(uint *)(lVar6 + 0x10);
        if (uVar16 <= uVar17) goto LAB_074ef9fc;
        iVar13 = 1;
LAB_074ef86c:
        uVar7 = 0;
LAB_074ef890:
        uVar20 = (uint)*(ushort *)(auVar22._0_8_ + (long)(int)uVar17 * 2);
        auVar3 = auVar22;
      }
      else {
LAB_074ef7e4:
        uVar7 = FUN_07368ba4(lVar9,0);
        if ((uVar7 & 1) == 0) {
          if (DAT_0953f498 == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca88);
            DAT_0953f498 = '\x01';
          }
          if (lVar9 == 0) {
            uVar8 = 0;
            uVar10 = 0;
          }
          else {
            uVar8 = FUN_0736648c(lVar9,0);
            uVar10 = *(undefined4 *)(lVar9 + 0x10);
          }
          uVar7 = FUN_074f38fc(puVar14,uVar16,uVar8,uVar10,*(undefined8 *)PTR_DAT_08fa33d0);
          if ((uVar7 & 1) != 0) {
            if (lVar9 == 0) {
LAB_074efb4c:
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            uVar17 = *(uint *)(lVar9 + 0x10);
            if (uVar16 <= uVar17) goto LAB_074ef9fc;
            iVar13 = -1;
            goto LAB_074ef86c;
          }
        }
        uVar7 = 0;
        uVar17 = 0;
        iVar13 = 1;
      }
      goto LAB_074ef894;
    }
    if (uVar20 == 0x2b) {
      uVar17 = uVar17 + 1;
      if (uVar17 < uVar15) {
        iVar13 = 1;
        goto LAB_074ef890;
      }
    }
    else {
      if (uVar20 != 0x2d)
      goto 
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray;
      uVar17 = uVar17 + 1;
      if (uVar17 < uVar15) {
        iVar13 = -1;
        goto LAB_074ef890;
      }
    }
  }
LAB_074ef9fc:
  lVar6 = 0;
  uVar7 = 0;
LAB_074efa00:
  *param_5 = lVar6;
  return uVar7;
}


