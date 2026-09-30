/*
FUNCTION_NAME: FUN_00d6f958
ENTRY_POINT: 00d6f958
PROGRAM: LethalApe-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_19;telemetry_or_network_hits_7
*/


undefined8
FUN_00d6f958(long param_1,undefined4 param_2,undefined8 param_3,char param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  int *piVar18;
  int iVar19;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  local_64 = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    (**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8) + 8))(param_1,0);
  }
  plVar16 = *(long **)(param_1 + 0x30);
  lVar17 = *(long *)(param_1 + 0x18);
  if (plVar16 == (long *)0x0) {
    uVar4 = FUN_01718188(&local_64,
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x138));
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x150);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_0099e870(lVar6);
    }
    lVar10 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar13 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_00d6fa4c;
        }
        uVar13 = uVar13 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_0099eb60(plVar16,lVar6,1);
LAB_00d6fa4c:
    uVar4 = (*(code *)*puVar5)(plVar16,param_2,puVar5[1]);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_00d6fe00;
  uVar15 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar19 = 0;
  if (uVar15 != 0) {
    iVar19 = (int)uVar4 / (int)uVar15;
  }
  uVar9 = uVar4 - iVar19 * uVar15;
  if (uVar9 < uVar15) {
    piVar18 = (int *)(lVar6 + (ulong)uVar9 * 4 + 0x20);
    uVar15 = *piVar18 - 1;
    if (plVar16 == (long *)0x0) {
      if (lVar17 == 0) goto LAB_00d6fe00;
      uVar11 = *(undefined8 *)(lVar17 + 0x18);
      uVar9 = (uint)uVar11;
      if (uVar15 < uVar9) {
        iVar19 = 0;
        do {
          uVar9 = (uint)uVar11;
          lVar6 = (long)(int)uVar15;
          if (*(uint *)(lVar17 + (long)(int)uVar15 * 0x14 + 0x20) == uVar4) {
            plVar16 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) +
                                                    0x10) + 8))();
            if (*(uint *)(lVar17 + 0x18) <= uVar15)
            goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
            if (plVar16 == (long *)0x0) goto LAB_00d6fe00;
            uVar13 = (**(code **)(*plVar16 + 0x1b8))
                               (plVar16,*(undefined4 *)(lVar17 + lVar6 * 0x14 + 0x28),local_64,
                                *(undefined8 *)(*plVar16 + 0x1c0));
            if ((uVar13 & 1) != 0) {
              if (param_4 != '\x02') {
                if (param_4 != '\x01') {
                  return 0;
                }
                if (uVar15 < *(uint *)(lVar17 + 0x18)) {
                  *(undefined8 *)(lVar17 + lVar6 * 0x14 + 0x2c) = param_3;
                  return 1;
                }
                goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
              }
              local_68 = local_64;
              lVar17 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xb0);
              if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
                lVar17 = FUN_0099e870();
              }
              puVar7 = &local_68;
              goto LAB_00d6fde8;
            }
            uVar9 = *(uint *)(lVar17 + 0x18);
          }
          if (uVar9 <= uVar15)
          goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
          uVar15 = *(uint *)(lVar17 + lVar6 * 0x14 + 0x24);
          if ((int)uVar9 <= iVar19) {
            FUN_0173e12c(0);
          }
          uVar11 = *(undefined8 *)(lVar17 + 0x18);
          iVar19 = iVar19 + 1;
          uVar9 = (uint)uVar11;
        } while (uVar15 < uVar9);
      }
    }
    else {
      if (lVar17 == 0) goto LAB_00d6fe00;
      uVar11 = *(undefined8 *)(lVar17 + 0x18);
      uVar9 = (uint)uVar11;
      if (uVar15 < uVar9) {
        iVar19 = 0;
        do {
          uVar3 = local_64;
          uVar9 = (uint)uVar11;
          lVar6 = (long)(int)uVar15;
          if (*(uint *)(lVar17 + (long)(int)uVar15 * 0x14 + 0x20) == uVar4) {
            lVar10 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x150);
            uVar1 = *(undefined4 *)(lVar17 + lVar6 * 0x14 + 0x28);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_0099e870(lVar10);
            }
            lVar12 = *plVar16;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar5 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_00d6fb3c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar5 = (undefined8 *)FUN_0099eb60(plVar16,lVar10,0);
LAB_00d6fb3c:
            uVar13 = (*(code *)*puVar5)(plVar16,uVar1,uVar3,puVar5[1]);
            if ((uVar13 & 1) != 0) {
              if (param_4 == '\x02') {
                local_6c = local_64;
                lVar17 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xb0);
                if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
                  lVar17 = FUN_0099e870();
                }
                puVar7 = &local_6c;
LAB_00d6fde8:
                uVar11 = thunk_FUN_00a058b4(lVar17,puVar7);
                FUN_0173e018(uVar11,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar15 < *(uint *)(lVar17 + 0x18)) {
                *(undefined8 *)(lVar17 + lVar6 * 0x14 + 0x2c) = param_3;
                return 1;
              }
              goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
            }
            uVar9 = *(uint *)(lVar17 + 0x18);
          }
          if (uVar9 <= uVar15)
          goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
          uVar15 = *(uint *)(lVar17 + lVar6 * 0x14 + 0x24);
          if ((int)uVar9 <= iVar19) {
            FUN_0173e12c(0);
          }
          uVar11 = *(undefined8 *)(lVar17 + 0x18);
          iVar19 = iVar19 + 1;
          uVar9 = (uint)uVar11;
        } while (uVar15 < uVar9);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar15 = *(uint *)(param_1 + 0x20);
      if (uVar15 == uVar9) {
        (**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x170) + 8))(param_1);
        lVar6 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar15 + 1;
        if (lVar6 == 0) goto LAB_00d6fe00;
        uVar9 = *(uint *)(lVar6 + 0x18);
        iVar19 = 0;
        if (uVar9 != 0) {
          iVar19 = (int)uVar4 / (int)uVar9;
        }
        uVar2 = uVar4 - iVar19 * uVar9;
        if (uVar9 <= uVar2)
        goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
        lVar17 = *(long *)(param_1 + 0x18);
        piVar18 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar17 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar15 + 1;
      }
      if (lVar17 == 0) {
LAB_00d6fe00:
                    /* WARNING: Subroutine does not return */
        FUN_00a190f0();
      }
      bVar8 = false;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x24);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      bVar8 = true;
    }
    if (uVar15 < *(uint *)(lVar17 + 0x18)) {
      if (bVar8) {
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar17 + (long)(int)uVar15 * 0x14 + 0x24);
      }
      lVar17 = lVar17 + (long)(int)uVar15 * 0x14;
      *(uint *)(lVar17 + 0x20) = uVar4;
      *(int *)(lVar17 + 0x24) = *piVar18 + -1;
      *(undefined8 *)(lVar17 + 0x2c) = param_3;
      *(undefined4 *)(lVar17 + 0x28) = local_64;
      *piVar18 = uVar15 + 1;
      return 1;
    }
  }
System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f8();
}


