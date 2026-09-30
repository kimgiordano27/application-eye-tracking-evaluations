/*
FUNCTION_NAME: OVRManager$$get_gpuUtilSupported
ENTRY_POINT: 02fc7e8c
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_gpuUtilSupported(long param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint in_w9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  uint *puVar11;
  long unaff_x21;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined4 *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  param_2 = param_2 & 0x7fffffff;
  iVar3 = 0;
  if (in_w9 != 0) {
    iVar3 = (int)param_2 / (int)in_w9;
  }
  uVar2 = param_2 - iVar3 * in_w9;
  if (in_w9 <= uVar2) {
LAB_02fc80a4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  uVar4 = *(int *)(param_1 + (ulong)uVar2 * 4 + 0x20) - 1;
  if (-1 < (int)uVar4) {
    uVar15 = 0xffffffff;
    do {
      uVar12 = uVar4;
      lVar14 = *(long *)(unaff_x19 + 0x18);
      if (lVar14 == 0) goto LAB_02fc80a0;
      if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_02fc80a4;
      puVar11 = (uint *)(lVar14 + (long)(int)uVar12 * 0x10 + 0x20);
      lVar13 = (long)(int)uVar12;
      if (*puVar11 == param_2) {
        plVar7 = *(long **)(unaff_x19 + 0x30);
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) +
                                                 0x10) + 8))();
          if (plVar7 == (long *)0x0) goto LAB_02fc80a0;
          uVar9 = (**(code **)(*plVar7 + 0x1b8))
                            (plVar7,*(undefined4 *)(lVar14 + lVar13 * 0x10 + 0x28),
                             in_stack_00000018._4_4_,*(undefined8 *)(*plVar7 + 0x1c0));
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_02fc80a0;
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
          uVar1 = *(undefined4 *)(lVar14 + lVar13 * 0x10 + 0x28);
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_015c2790(lVar6);
          }
          lVar8 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02fc7fb0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_015c2a80(plVar7,lVar6,0);
LAB_02fc7fb0:
          uVar9 = (*(code *)*puVar5)(plVar7,uVar1,in_stack_00000018._4_4_,puVar5[1]);
        }
        if ((uVar9 & 1) != 0) {
          if ((int)uVar15 < 0) {
            lVar6 = *(long *)(unaff_x19 + 0x10);
            if (lVar6 == 0) goto LAB_02fc80a0;
            if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_02fc80a4;
            *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar14 + lVar13 * 0x10 + 0x24) + 1;
          }
          else {
            lVar6 = *(long *)(unaff_x19 + 0x18);
            if (lVar6 == 0) {
LAB_02fc80a0:
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_02fc80a4;
            *(undefined4 *)(lVar6 + (long)(int)uVar15 * 0x10 + 0x24) =
                 *(undefined4 *)(lVar14 + lVar13 * 0x10 + 0x24);
          }
          lVar14 = lVar14 + lVar13 * 0x10;
          *in_stack_00000010 = *(undefined4 *)(lVar14 + 0x2c);
          *puVar11 = 0xffffffff;
          *(undefined4 *)(lVar14 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar12;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar4 = *(uint *)(lVar14 + lVar13 * 0x10 + 0x24);
      uVar15 = uVar12;
    } while (-1 < (int)uVar4);
  }
  *in_stack_00000010 = 0;
  return 0;
}


