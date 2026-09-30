/*
FUNCTION_NAME: OVRPlugin.Sizei$$GetHashCode
ENTRY_POINT: 026cb920
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Sizei__GetHashCode(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 in_ZR;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long unaff_x19;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(in_x10[4] + 1) * 0x10 + 0x138);
      goto FUN_026cb960;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar6 = (undefined8 *)FUN_015c2a80();
FUN_026cb960:
  uVar5 = (*(code *)*puVar6)();
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar8 + 0x18);
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
    uVar1 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar1) {
      uVar16 = 0xffffffff;
      do {
        uVar15 = uVar1;
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_026cbbb4;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_026cbbb8;
        puVar17 = (uint *)(lVar8 + (long)(int)uVar15 * 0x18 + 0x20);
        lVar13 = (long)(int)uVar15;
        if (*puVar17 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) +
                                                             0xc0) + 0x10) + 8))();
            if (plVar9 == (long *)0x0) goto LAB_026cbbb4;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined8 *)(lVar8 + lVar13 * 0x18 + 0x28));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_026cbbb4;
            lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x148);
            uVar14 = *(undefined8 *)(lVar8 + lVar13 * 0x18 + 0x28);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_015c2790(lVar7);
            }
            lVar10 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_026cbab0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_015c2a80(plVar9,lVar7,0);
LAB_026cbab0:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar14);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)uVar16 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_026cbbb4;
              if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_026cbbb8;
              *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + lVar13 * 0x18 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_026cbbb4;
              if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_026cbbb8;
              *(undefined4 *)(lVar7 + (long)(int)uVar16 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar8 + lVar13 * 0x18 + 0x24);
            }
            lVar8 = lVar8 + lVar13 * 0x18;
            *in_stack_00000010 = *(undefined8 *)(lVar8 + 0x30);
            *puVar17 = 0xffffffff;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
            *(undefined8 *)(lVar8 + 0x28) = 0;
            *(undefined4 *)(lVar8 + 0x24) = uVar2;
            *(uint *)(unaff_x19 + 0x24) = uVar15;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + lVar13 * 0x18 + 0x24);
        uVar16 = uVar15;
      } while (-1 < (int)uVar1);
    }
    *in_stack_00000010 = 0;
    return 0;
  }
LAB_026cbbb4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


