/*
FUNCTION_NAME: OVRManager$$remove_TrackingLost
ENTRY_POINT: 02fc4580
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


undefined8 OVRManager__remove_TrackingLost(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  long unaff_x19;
  uint uVar14;
  long unaff_x24;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar12 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(*piVar12 + 1) * 0x10 + 0x138);
      goto LAB_02fc45d8;
    }
    in_x9 = in_x9 + -1;
    piVar12 = piVar12 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_015c2a80();
LAB_02fc45d8:
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
LAB_02fc484c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    uVar1 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar1) {
      uVar14 = 0xffffffff;
      do {
        uVar15 = uVar1;
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_02fc4848;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_02fc484c;
        puVar17 = (uint *)(lVar8 + (long)(int)uVar15 * 0x38 + 0x20);
        lVar16 = (long)(int)uVar15;
        if (*puVar17 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) +
                                                   0x10) + 8))();
            if (plVar9 == (long *)0x0) goto LAB_02fc4848;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined4 *)(lVar8 + lVar16 * 0x38 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_02fc4848;
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x148);
            uVar2 = *(undefined4 *)(lVar8 + lVar16 * 0x38 + 0x28);
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
                  goto LAB_02fc4728;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_015c2a80(plVar9,lVar7,0);
LAB_02fc4728:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar2,in_stack_00000018._4_4_,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)uVar14 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_02fc4848;
              if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_02fc484c;
              *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + lVar16 * 0x38 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_02fc4848;
              if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_02fc484c;
              *(undefined4 *)(lVar7 + (long)(int)uVar14 * 0x38 + 0x24) =
                   *(undefined4 *)(lVar8 + lVar16 * 0x38 + 0x24);
            }
            lVar8 = lVar8 + lVar16 * 0x38;
            uVar19 = *(undefined8 *)(lVar8 + 0x34);
            uVar18 = *(undefined8 *)(lVar8 + 0x2c);
            uVar13 = *(undefined8 *)(lVar8 + 0x4c);
            uVar21 = *(undefined8 *)(lVar8 + 0x44);
            uVar20 = *(undefined8 *)(lVar8 + 0x3c);
            *(undefined4 *)(in_stack_00000008 + 5) = *(undefined4 *)(lVar8 + 0x54);
            in_stack_00000008[4] = uVar13;
            in_stack_00000008[1] = uVar19;
            *in_stack_00000008 = uVar18;
            in_stack_00000008[3] = uVar21;
            in_stack_00000008[2] = uVar20;
            *puVar17 = 0xffffffff;
            *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar15;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + lVar16 * 0x38 + 0x24);
        uVar14 = uVar15;
      } while (-1 < (int)uVar1);
    }
    *(undefined8 *)((long)in_stack_00000008 + 0x24) = 0;
    *(undefined8 *)((long)in_stack_00000008 + 0x1c) = 0;
    in_stack_00000008[1] = 0;
    *in_stack_00000008 = 0;
    in_stack_00000008[3] = 0;
    in_stack_00000008[2] = 0;
    return 0;
  }
LAB_02fc4848:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


