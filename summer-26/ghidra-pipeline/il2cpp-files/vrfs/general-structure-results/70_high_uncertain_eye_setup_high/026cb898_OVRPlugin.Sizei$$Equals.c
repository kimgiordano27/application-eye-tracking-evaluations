/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 026cb898
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


undefined8 OVRPlugin_Sizei__Equals(long param_1,long *param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 *puStack0000000000000010;
  long lStack0000000000000018;
  
  puStack0000000000000010 = param_3;
  lStack0000000000000018 = param_4;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(5);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar13 = *(long **)(param_1 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (param_2 == (long *)0x0) goto LAB_026cbbb4;
      uVar5 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    }
    else {
      lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x148);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_015c2790(lVar7);
      }
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto FUN_026cb960;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_015c2a80(plVar13,lVar7,1);
FUN_026cb960:
      uVar5 = (*(code *)*puVar6)(plVar13,param_2,puVar6[1]);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_026cbbb4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar1 != 0) {
      iVar4 = (int)uVar5 / (int)uVar1;
    }
    uVar3 = uVar5 - iVar4 * uVar1;
    if (uVar1 <= uVar3) {
LAB_026cbbb8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    uVar1 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar1) {
      uVar16 = 0xffffffff;
      do {
        uVar15 = uVar1;
        lVar7 = *(long *)(param_1 + 0x18);
        if (lVar7 == 0) goto LAB_026cbbb4;
        if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_026cbbb8;
        puVar17 = (uint *)(lVar7 + (long)(int)uVar15 * 0x18 + 0x20);
        lVar9 = (long)(int)uVar15;
        if (*puVar17 == uVar5) {
          plVar13 = *(long **)(param_1 + 0x30);
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(lStack0000000000000018 +
                                                                        0x20) + 0xc0) + 0x10) + 8))
                                        ();
            if (plVar13 == (long *)0x0) goto LAB_026cbbb4;
            uVar11 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined8 *)(lVar7 + lVar9 * 0x18 + 0x28),param_2,
                                *(undefined8 *)(*plVar13 + 0x1c0));
          }
          else {
            if (plVar13 == (long *)0x0) goto LAB_026cbbb4;
            lVar8 = *(long *)(*(long *)(*(long *)(lStack0000000000000018 + 0x20) + 0xc0) + 0x148);
            uVar14 = *(undefined8 *)(lVar7 + lVar9 * 0x18 + 0x28);
            if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
              lVar8 = FUN_015c2790(lVar8);
            }
            lVar10 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_026cbab0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_015c2a80(plVar13,lVar8,0);
LAB_026cbab0:
            uVar11 = (*(code *)*puVar6)(plVar13,uVar14,param_2,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)uVar16 < 0) {
              lVar8 = *(long *)(param_1 + 0x10);
              if (lVar8 == 0) goto LAB_026cbbb4;
              if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_026cbbb8;
              *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + lVar9 * 0x18 + 0x24) + 1;
            }
            else {
              lVar8 = *(long *)(param_1 + 0x18);
              if (lVar8 == 0) goto LAB_026cbbb4;
              if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_026cbbb8;
              *(undefined4 *)(lVar8 + (long)(int)uVar16 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar7 + lVar9 * 0x18 + 0x24);
            }
            lVar7 = lVar7 + lVar9 * 0x18;
            *puStack0000000000000010 = *(undefined8 *)(lVar7 + 0x30);
            *puVar17 = 0xffffffff;
            uVar2 = *(undefined4 *)(param_1 + 0x24);
            *(undefined8 *)(lVar7 + 0x28) = 0;
            *(undefined4 *)(lVar7 + 0x24) = uVar2;
            *(uint *)(param_1 + 0x24) = uVar15;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + lVar9 * 0x18 + 0x24);
        uVar16 = uVar15;
      } while (-1 < (int)uVar1);
    }
  }
  *puStack0000000000000010 = 0;
  return 0;
}


