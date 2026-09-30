/*
FUNCTION_NAME: FUN_074ef590
ENTRY_POINT: 074ef590
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


undefined8
FUN_074ef590(ushort *param_1,ulong param_2,uint param_3,long param_4,long *param_5,
            undefined1 *param_6)

{
  bool bVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  
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
  uVar11 = (uint)param_2;
  if (uVar11 == 0) goto LAB_074ef9fc;
  uVar3 = *param_1;
  if ((param_3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((uVar3 - 9 < 5) || (uVar3 == 0x20)) {
      if (uVar11 != 1) {
        lVar5 = *(long *)puVar4;
        uVar13 = 1;
        do {
          uVar3 = param_1[(int)uVar13];
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar5 = *(long *)puVar4;
          }
          if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_074ef630;
          uVar13 = uVar13 + 1;
        } while (uVar11 != uVar13);
      }
      goto LAB_074ef9fc;
    }
  }
  uVar13 = 0;
LAB_074ef630:
  uVar17 = (uint)uVar3;
  uVar16 = param_2 >> 0x20;
  if ((param_3 >> 2 & 1) == 0) {
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray:
    iVar9 = 1;
LAB_074ef894:
    puVar4 = PTR_DAT_08f9f500;
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar11 = uVar17 - 0x30;
    if (uVar11 < 10) {
      uVar12 = (uint)param_2;
      if (uVar17 == 0x30) {
        do {
          uVar13 = uVar13 + 1;
          if (uVar12 <= uVar13) {
            uVar18 = 0;
            goto LAB_074efb34;
          }
          uVar3 = param_1[(int)uVar13];
          uVar15 = (ulong)uVar3;
        } while (uVar3 == 0x30);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar11 = uVar3 - 0x30;
        if (uVar11 < 10) goto LAB_074ef8f8;
        uVar8 = 0;
        uVar17 = uVar13;
LAB_074efa48:
        uVar11 = (uint)uVar15;
        bVar1 = false;
LAB_074efa4c:
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if ((uVar11 - 9 < 5) || (uVar11 == 0x20)) {
          if ((param_3 >> 1 & 1) != 0) {
            uVar17 = uVar17 + 1;
            if ((int)uVar17 < (int)uVar12) {
              puVar10 = param_1 + (int)uVar17;
              do {
                if (uVar12 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_04031894();
                }
                uVar3 = *puVar10;
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_074efac8;
                uVar17 = uVar17 + 1;
                puVar10 = puVar10 + 1;
              } while (uVar12 != uVar17);
            }
            else {
LAB_074efac8:
              if (uVar17 < uVar12)
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
          uVar16 = FUN_074f172c(param_1,param_2 & 0xffffffff | uVar16 << 0x20,uVar17);
          if ((uVar16 & 1) != 0) {
LAB_074efb18:
            uVar18 = uVar8;
            if (!bVar1) goto LAB_074efb34;
            goto LAB_074efb1c;
          }
        }
        lVar5 = 0;
        uVar6 = 0;
      }
      else {
LAB_074ef8f8:
        uVar17 = uVar13 + 0x12;
        iVar14 = 1;
        uVar8 = (ulong)uVar11;
        do {
          uVar18 = uVar8;
          if (uVar12 <= uVar13 + iVar14) goto LAB_074efb34;
          uVar3 = param_1[(int)(uVar13 + iVar14)];
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar3 - 0x30) {
            uVar15 = (ulong)(uint)uVar3;
            uVar17 = uVar13 + iVar14;
            goto LAB_074efa48;
          }
          iVar14 = iVar14 + 1;
          uVar18 = ((ulong)uVar3 + uVar8 * 10) - 0x30;
          uVar8 = uVar18;
        } while (iVar14 != 0x12);
        if (uVar12 <= uVar17) {
LAB_074efb34:
          uVar6 = 1;
          lVar5 = uVar18 * (long)iVar9;
          goto LAB_074efa00;
        }
        uVar3 = param_1[(int)uVar17];
        uVar15 = (ulong)uVar3;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if (9 < uVar3 - 0x30) goto LAB_074efa48;
        uVar17 = uVar13 + 0x13;
        uVar8 = (uVar15 + uVar18 * 10) - 0x30;
        bVar1 = (ulong)(1U - iVar9 >> 1) + 0x7fffffffffffffff < uVar8 ||
                0xccccccccccccccc < (long)uVar18;
        if (uVar12 <= uVar17) goto LAB_074efb18;
        lVar5 = *(long *)puVar4;
        do {
          uVar3 = param_1[(int)uVar17];
          uVar11 = (uint)uVar3;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar5 = *(long *)puVar4;
          }
          if (9 < uVar3 - 0x30) goto LAB_074efa4c;
          uVar17 = uVar17 + 1;
          bVar1 = true;
        } while (uVar12 != uVar17);
LAB_074efb1c:
        lVar5 = 0;
        uVar6 = 0;
        *param_6 = 1;
      }
      goto LAB_074efa00;
    }
  }
  else {
    if (param_4 == 0) goto LAB_074efb4c;
    lVar5 = *(long *)(param_4 + 0x28);
    lVar2 = *(long *)(param_4 + 0x30);
    uVar18 = thunk_FUN_07367938(lVar5,*(undefined8 *)PTR_DAT_08f671e0,0);
    if (((uVar18 & 1) == 0) ||
       (uVar18 = thunk_FUN_07367938(lVar2,*(undefined8 *)PTR_DAT_08f65d40,0), (uVar18 & 1) == 0)) {
      uVar12 = uVar11 - uVar13;
      param_2 = (ulong)uVar12;
      if (uVar11 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_07505afc(0);
      }
      if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f9f7a8 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      param_1 = param_1 + (int)uVar13;
      uVar16 = FUN_07368ba4(lVar5,0);
      if ((uVar16 & 1) == 0) {
        if (DAT_0953f498 == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca88);
          DAT_0953f498 = '\x01';
        }
        if (lVar5 == 0) {
          uVar6 = 0;
          uVar7 = 0;
        }
        else {
          uVar6 = FUN_0736648c(lVar5,0);
          uVar7 = *(undefined4 *)(lVar5 + 0x10);
        }
        uVar16 = FUN_074f38fc(param_1,param_2,uVar6,uVar7,*(undefined8 *)PTR_DAT_08fa33d0);
        if ((uVar16 & 1) == 0) goto LAB_074ef7e4;
        if (lVar5 == 0) goto LAB_074efb4c;
        uVar13 = *(uint *)(lVar5 + 0x10);
        if (uVar12 <= uVar13) goto LAB_074ef9fc;
        iVar9 = 1;
LAB_074ef86c:
        uVar16 = 0;
LAB_074ef890:
        uVar17 = (uint)param_1[(int)uVar13];
      }
      else {
LAB_074ef7e4:
        uVar16 = FUN_07368ba4(lVar2,0);
        if ((uVar16 & 1) == 0) {
          if (DAT_0953f498 == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca88);
            DAT_0953f498 = '\x01';
          }
          if (lVar2 == 0) {
            uVar6 = 0;
            uVar7 = 0;
          }
          else {
            uVar6 = FUN_0736648c(lVar2,0);
            uVar7 = *(undefined4 *)(lVar2 + 0x10);
          }
          uVar16 = FUN_074f38fc(param_1,param_2,uVar6,uVar7,*(undefined8 *)PTR_DAT_08fa33d0);
          if ((uVar16 & 1) != 0) {
            if (lVar2 == 0) {
LAB_074efb4c:
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            uVar13 = *(uint *)(lVar2 + 0x10);
            if (uVar12 <= uVar13) goto LAB_074ef9fc;
            iVar9 = -1;
            goto LAB_074ef86c;
          }
        }
        uVar16 = 0;
        uVar13 = 0;
        iVar9 = 1;
      }
      goto LAB_074ef894;
    }
    if (uVar17 == 0x2b) {
      uVar13 = uVar13 + 1;
      if (uVar13 < uVar11) {
        iVar9 = 1;
        goto LAB_074ef890;
      }
    }
    else {
      if (uVar17 != 0x2d)
      goto 
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray;
      uVar13 = uVar13 + 1;
      if (uVar13 < uVar11) {
        iVar9 = -1;
        goto LAB_074ef890;
      }
    }
  }
LAB_074ef9fc:
  lVar5 = 0;
  uVar6 = 0;
LAB_074efa00:
  *param_5 = lVar5;
  return uVar6;
}


