/*
FUNCTION_NAME: FUN_087bb3e4
ENTRY_POINT: 087bb3e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
FUN_087bb3e4(undefined4 param_1,long param_2,undefined4 param_3,char param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  int *piVar18;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 local_64;
  
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  local_64 = param_3;
  if (*(long *)(param_2 + 0x10) == 0) {
    FUN_087bb304(param_2,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar12 = *(long **)(param_2 + 0x30);
  lVar16 = *(long *)(param_2 + 0x18);
  lVar7 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  if (plVar12 == (long *)0x0) {
    uVar4 = FUN_08d98794(&local_64,*(undefined8 *)(lVar7 + 0x188));
  }
  else {
    lVar7 = *(long *)(lVar7 + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34(lVar7);
    }
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_087bb4d4;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar12,lVar7,1);
LAB_087bb4d4:
    uVar4 = (*(code *)*puVar5)(plVar12,param_3,puVar5[1]);
  }
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 == 0) goto LAB_087bb840;
  uVar14 = *(uint *)(lVar7 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar17 = 0;
  if (uVar14 != 0) {
    iVar17 = (int)uVar4 / (int)uVar14;
  }
  uVar13 = uVar4 - iVar17 * uVar14;
  if (uVar14 <= uVar13) {
LAB_087bb83c:
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  piVar18 = (int *)(lVar7 + (ulong)uVar13 * 4 + 0x20);
  uVar14 = *piVar18 - 1;
  uVar10 = (ulong)uVar14;
  if (plVar12 == (long *)0x0) {
    if (lVar16 == 0) goto LAB_087bb840;
    uVar15 = *(undefined8 *)(lVar16 + 0x18);
    uVar13 = (uint)uVar15;
    if (uVar14 < uVar13) {
      iVar17 = 0;
      do {
        uVar14 = (uint)uVar15;
        uVar13 = (uint)uVar10;
        lVar7 = lVar16 + 0x20 + (long)(int)uVar13 * 0x10;
        if (*(uint *)(lVar16 + 0x20 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4)) ==
            uVar4) {
          plVar12 = (long *)FUN_0566cc80(*(undefined8 *)
                                          (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(lVar16 + 0x18) <= uVar13) goto LAB_087bb83c;
          if (plVar12 == (long *)0x0) goto LAB_087bb840;
          uVar10 = (**(code **)(*plVar12 + 0x1b8))
                             (plVar12,*(undefined4 *)(lVar7 + 8),local_64,
                              *(undefined8 *)(*plVar12 + 0x1c0));
          if ((uVar10 & 1) != 0) {
            if (param_4 == '\x02') {
              puVar6 = &local_68;
              lVar16 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
              local_68 = local_64;
              goto LAB_087bb824;
            }
            if (param_4 != '\x01') {
              return 0;
            }
            if (uVar13 < *(uint *)(lVar16 + 0x18)) {
              *(undefined4 *)(lVar7 + 0xc) = param_1;
              return 1;
            }
            goto LAB_087bb83c;
          }
          uVar14 = *(uint *)(lVar16 + 0x18);
        }
        if (uVar14 <= uVar13) goto LAB_087bb83c;
        uVar2 = *(uint *)(lVar7 + 4);
        uVar10 = (ulong)uVar2;
        if ((int)uVar14 <= iVar17) {
          FUN_08d9d998(0);
        }
        uVar15 = *(undefined8 *)(lVar16 + 0x18);
        iVar17 = iVar17 + 1;
        uVar13 = (uint)uVar15;
      } while (uVar2 < uVar13);
    }
  }
  else {
    if (lVar16 == 0) goto LAB_087bb840;
    uVar15 = *(undefined8 *)(lVar16 + 0x18);
    uVar13 = (uint)uVar15;
    if (uVar14 < uVar13) {
      iVar17 = 0;
      do {
        uVar3 = local_64;
        uVar14 = (uint)uVar15;
        uVar13 = (uint)uVar10;
        lVar7 = lVar16 + 0x20 + (long)(int)uVar13 * 0x10;
        if (*(uint *)(lVar16 + 0x20 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4)) ==
            uVar4) {
          uVar1 = *(undefined4 *)(lVar7 + 8);
          lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04980b34(lVar8);
          }
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_087bb5c0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_04980e68(plVar12,lVar8,0);
LAB_087bb5c0:
          uVar10 = (*(code *)*puVar5)(plVar12,uVar1,uVar3,puVar5[1]);
          if ((uVar10 & 1) != 0) {
            if (param_4 == '\x02') {
              puVar6 = &local_74;
              lVar16 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
              local_74 = local_64;
LAB_087bb824:
              uVar15 = thunk_FUN_04983b98(*(undefined8 *)(lVar16 + 0x70),puVar6);
              FUN_08d9d894(uVar15,0);
              return 0;
            }
            if (param_4 != '\x01') {
              return 0;
            }
            if (uVar13 < *(uint *)(lVar16 + 0x18)) {
              *(undefined4 *)(lVar7 + 0xc) = param_1;
              return 1;
            }
            goto LAB_087bb83c;
          }
          uVar14 = *(uint *)(lVar16 + 0x18);
        }
        if (uVar14 <= uVar13) goto LAB_087bb83c;
        uVar2 = *(uint *)(lVar7 + 4);
        uVar10 = (ulong)uVar2;
        if ((int)uVar14 <= iVar17) {
          FUN_08d9d998(0);
        }
        uVar15 = *(undefined8 *)(lVar16 + 0x18);
        iVar17 = iVar17 + 1;
        uVar13 = (uint)uVar15;
      } while (uVar2 < uVar13);
    }
  }
  if (*(int *)(param_2 + 0x28) < 1) {
    uVar14 = *(uint *)(param_2 + 0x20);
    if (uVar14 == uVar13) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext
                (param_2,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1b0));
      lVar7 = *(long *)(param_2 + 0x10);
      *(uint *)(param_2 + 0x20) = uVar13 + 1;
      if (lVar7 == 0) goto LAB_087bb840;
      uVar13 = *(uint *)(lVar7 + 0x18);
      iVar17 = 0;
      if (uVar13 != 0) {
        iVar17 = (int)uVar4 / (int)uVar13;
      }
      uVar2 = uVar4 - iVar17 * uVar13;
      if (uVar13 <= uVar2) goto LAB_087bb83c;
      lVar16 = *(long *)(param_2 + 0x18);
      piVar18 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      lVar16 = *(long *)(param_2 + 0x18);
      *(uint *)(param_2 + 0x20) = uVar14 + 1;
    }
    if (lVar16 == 0) {
LAB_087bb840:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_087bb83c;
    lVar16 = lVar16 + (long)(int)uVar14 * 0x10;
  }
  else {
    uVar14 = *(uint *)(param_2 + 0x24);
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
    if (uVar13 <= uVar14) goto LAB_087bb83c;
    lVar16 = lVar16 + (long)(int)uVar14 * 0x10;
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(lVar16 + 0x24);
  }
  *(uint *)(lVar16 + 0x20) = uVar4;
  iVar17 = *piVar18;
  *(undefined4 *)(lVar16 + 0x2c) = param_1;
  *(int *)(lVar16 + 0x24) = iVar17 + -1;
  *(undefined4 *)(lVar16 + 0x28) = local_64;
  *piVar18 = uVar14 + 1;
  return 1;
}


