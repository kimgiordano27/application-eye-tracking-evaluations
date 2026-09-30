/*
FUNCTION_NAME: OVRManager$$remove_AudioInChanged
ENTRY_POINT: 02fc4210
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_AudioInChanged(long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 uStack_64;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar14 = *(long **)(param_1 + 0x30);
    uStack_64 = param_2;
    if (plVar14 == (long *)0x0) {
      uVar6 = FUN_031d7008(&uStack_64,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x130));
    }
    else {
      lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_015c2790(lVar8);
      }
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_02fc42d0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_015c2a80(plVar14,lVar8,1);
LAB_02fc42d0:
      uVar6 = (*(code *)*puVar7)(plVar14,param_2,puVar7[1]);
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_02fc450c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar4 = 0;
    if (uVar1 != 0) {
      iVar4 = (int)uVar6 / (int)uVar1;
    }
    uVar3 = uVar6 - iVar4 * uVar1;
    if (uVar1 <= uVar3) {
LAB_02fc4510:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    uVar1 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar1) {
      uVar17 = 0xffffffff;
      do {
        uVar15 = uVar1;
        uVar5 = uStack_64;
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 == 0) goto LAB_02fc450c;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_02fc4510;
        puVar16 = (uint *)(lVar8 + (long)(int)uVar15 * 0x38 + 0x20);
        lVar10 = (long)(int)uVar15;
        if (*puVar16 == uVar6) {
          plVar14 = *(long **)(param_1 + 0x30);
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                    0x10) + 8))();
            if (plVar14 == (long *)0x0) goto LAB_02fc450c;
            uVar12 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined4 *)(lVar8 + lVar10 * 0x38 + 0x28),uStack_64,
                                *(undefined8 *)(*plVar14 + 0x1c0));
          }
          else {
            if (plVar14 == (long *)0x0) goto LAB_02fc450c;
            lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
            uVar2 = *(undefined4 *)(lVar8 + lVar10 * 0x38 + 0x28);
            if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
              lVar9 = FUN_015c2790(lVar9);
            }
            lVar11 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_02fc441c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_015c2a80(plVar14,lVar9,0);
LAB_02fc441c:
            uVar12 = (*(code *)*puVar7)(plVar14,uVar2,uVar5,puVar7[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)uVar17 < 0) {
              lVar9 = *(long *)(param_1 + 0x10);
              if (lVar9 == 0) goto LAB_02fc450c;
              if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_02fc4510;
              *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + lVar10 * 0x38 + 0x24) + 1
              ;
            }
            else {
              lVar9 = *(long *)(param_1 + 0x18);
              if (lVar9 == 0) goto LAB_02fc450c;
              if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_02fc4510;
              *(undefined4 *)(lVar9 + (long)(int)uVar17 * 0x38 + 0x24) =
                   *(undefined4 *)(lVar8 + lVar10 * 0x38 + 0x24);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 *)(lVar8 + lVar10 * 0x38 + 0x24) = *(undefined4 *)(param_1 + 0x24);
            *(uint *)(param_1 + 0x24) = uVar15;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + lVar10 * 0x38 + 0x24);
        uVar17 = uVar15;
      } while (-1 < (int)uVar1);
    }
  }
  return 0;
}


