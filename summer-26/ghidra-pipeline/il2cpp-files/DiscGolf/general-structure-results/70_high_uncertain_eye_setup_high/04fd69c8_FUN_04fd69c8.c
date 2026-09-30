/*
FUNCTION_NAME: FUN_04fd69c8
ENTRY_POINT: 04fd69c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_04fd69c8(long param_1,undefined4 param_2,undefined8 param_3,char param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  local_64 = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_04fd68e8(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar14 = *(long **)(param_1 + 0x30);
  lVar18 = *(long *)(param_1 + 0x18);
  if (plVar14 == (long *)0x0) {
    uVar4 = FUN_05504f1c(&local_64,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18(lVar6);
    }
    lVar8 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_04fd6ab4;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar14,lVar6,1);
LAB_04fd6ab4:
    uVar4 = (*(code *)*puVar5)(plVar14,param_2,puVar5[1]);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_04fd6e68;
  uVar17 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar12 = 0;
  if (uVar17 != 0) {
    iVar12 = (int)uVar4 / (int)uVar17;
  }
  uVar15 = uVar4 - iVar12 * uVar17;
  if (uVar15 < uVar17) {
    piVar13 = (int *)(lVar6 + (ulong)uVar15 * 4 + 0x20);
    uVar17 = *piVar13 - 1;
    if (plVar14 == (long *)0x0) {
      if (lVar18 == 0) goto LAB_04fd6e68;
      uVar16 = *(undefined8 *)(lVar18 + 0x18);
      uVar15 = (uint)uVar16;
      if (uVar17 < uVar15) {
        iVar12 = 0;
        lVar6 = lVar18 + 0x20;
        do {
          uVar15 = (uint)uVar16;
          if (*(uint *)(lVar6 + (long)(int)uVar17 * 0x18) == uVar4) {
            plVar14 = (long *)FUN_0390b9f8(*(undefined8 *)
                                            (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_04fd6e64;
            if (plVar14 == (long *)0x0) goto LAB_04fd6e68;
            uVar10 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined4 *)(lVar6 + (long)(int)uVar17 * 0x18 + 8),
                                local_64,*(undefined8 *)(*plVar14 + 0x1c0));
            if ((uVar10 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar7 = &local_68;
                lVar18 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
                local_68 = local_64;
                goto 
                System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
                ;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_04fd6e64;
              puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar17 * 0x18 + 0x10);
              *puVar5 = param_3;
              goto FUN_04fd6e18;
            }
            uVar15 = *(uint *)(lVar18 + 0x18);
          }
          if (uVar15 <= uVar17) goto LAB_04fd6e64;
          uVar17 = *(uint *)(lVar6 + (long)(int)uVar17 * 0x18 + 4);
          if ((int)uVar15 <= iVar12) {
            FUN_05509a24(0);
          }
          uVar16 = *(undefined8 *)(lVar18 + 0x18);
          iVar12 = iVar12 + 1;
          uVar15 = (uint)uVar16;
        } while (uVar17 < uVar15);
      }
    }
    else {
      if (lVar18 == 0) goto LAB_04fd6e68;
      uVar16 = *(undefined8 *)(lVar18 + 0x18);
      uVar15 = (uint)uVar16;
      if (uVar17 < uVar15) {
        iVar12 = 0;
        lVar6 = lVar18 + 0x20;
        do {
          uVar3 = local_64;
          uVar15 = (uint)uVar16;
          if (*(uint *)(lVar6 + (long)(int)uVar17 * 0x18) == uVar4) {
            lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar6 + (long)(int)uVar17 * 0x18 + 8);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02dcfd18(lVar8);
            }
            lVar9 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar8) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_04fd6ba8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_02dd004c(plVar14,lVar8,0);
LAB_04fd6ba8:
            uVar10 = (*(code *)*puVar5)(plVar14,uVar1,uVar3,puVar5[1]);
            if ((uVar10 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar7 = &local_6c;
                lVar18 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
                local_6c = local_64;

                System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
                :
                uVar16 = thunk_FUN_02dd2d7c(*(undefined8 *)(lVar18 + 0x70),puVar7);
                FUN_05509920(uVar16,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar17 < *(uint *)(lVar18 + 0x18)) {
                puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar17 * 0x18 + 0x10);
                *puVar5 = param_3;
FUN_04fd6e18:
                LeanTween__value(puVar5,param_3);
                return 1;
              }
              goto LAB_04fd6e64;
            }
            uVar15 = *(uint *)(lVar18 + 0x18);
          }
          if (uVar15 <= uVar17) goto LAB_04fd6e64;
          uVar17 = *(uint *)(lVar6 + (long)(int)uVar17 * 0x18 + 4);
          if ((int)uVar15 <= iVar12) {
            FUN_05509a24(0);
          }
          uVar16 = *(undefined8 *)(lVar18 + 0x18);
          iVar12 = iVar12 + 1;
          uVar15 = (uint)uVar16;
        } while (uVar17 < uVar15);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar17 = *(uint *)(param_1 + 0x20);
      if (uVar17 == uVar15) {
        FUN_04fd7204(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1b8));
        lVar6 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar15 + 1;
        if (lVar6 == 0) goto LAB_04fd6e68;
        uVar15 = *(uint *)(lVar6 + 0x18);
        iVar12 = 0;
        if (uVar15 != 0) {
          iVar12 = (int)uVar4 / (int)uVar15;
        }
        uVar2 = uVar4 - iVar12 * uVar15;
        if (uVar15 <= uVar2) goto LAB_04fd6e64;
        lVar18 = *(long *)(param_1 + 0x18);
        piVar13 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar18 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar17 + 1;
      }
      if (lVar18 == 0) {
LAB_04fd6e68:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_04fd6e64;
      lVar18 = lVar18 + (long)(int)uVar17 * 0x18;
    }
    else {
      uVar17 = *(uint *)(param_1 + 0x24);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      if (uVar15 <= uVar17) goto LAB_04fd6e64;
      lVar18 = lVar18 + (long)(int)uVar17 * 0x18;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar18 + 0x24);
    }
    *(uint *)(lVar18 + 0x20) = uVar4;
    *(int *)(lVar18 + 0x24) = *piVar13 + -1;
    *(undefined4 *)(lVar18 + 0x28) = local_64;
    *(undefined8 *)(lVar18 + 0x30) = param_3;
    LeanTween__value((undefined8 *)(lVar18 + 0x30),param_3);
    *piVar13 = uVar17 + 1;
    return 1;
  }
LAB_04fd6e64:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


