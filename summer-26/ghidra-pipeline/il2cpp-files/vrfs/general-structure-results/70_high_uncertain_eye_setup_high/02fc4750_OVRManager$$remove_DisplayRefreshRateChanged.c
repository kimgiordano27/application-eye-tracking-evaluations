/*
FUNCTION_NAME: OVRManager$$remove_DisplayRefreshRateChanged
ENTRY_POINT: 02fc4750
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_DisplayRefreshRateChanged(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint in_w8;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x24;
  long lVar10;
  long lVar11;
  int *piVar12;
  int unaff_w29;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar4 = in_w8;
    if ((int)uVar4 < 0) {
      *(undefined8 *)((long)in_stack_00000008 + 0x24) = 0;
      *(undefined8 *)((long)in_stack_00000008 + 0x1c) = 0;
      in_stack_00000008[1] = 0;
      *in_stack_00000008 = 0;
      in_stack_00000008[3] = 0;
      in_stack_00000008[2] = 0;
      return 0;
    }
    lVar11 = *(long *)(unaff_x19 + 0x18);
    if (lVar11 == 0) goto LAB_02fc4848;
    if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_02fc484c;
    piVar12 = (int *)(lVar11 + (long)(int)uVar4 * (long)(int)unaff_x21 + 0x20);
    lVar10 = (long)(int)uVar4;
    if (*piVar12 == unaff_w29) {
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x10
                                               ) + 8))();
        if (plVar5 == (long *)0x0) goto LAB_02fc4848;
        uVar7 = (**(code **)(*plVar5 + 0x1b8))
                          (plVar5,*(undefined4 *)(lVar11 + lVar10 * unaff_x21 + 0x28),
                           in_stack_00000018._4_4_,*(undefined8 *)(*plVar5 + 0x1c0));
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_02fc4848;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x148);
        uVar1 = *(undefined4 *)(lVar11 + lVar10 * unaff_x21 + 0x28);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_015c2790(lVar3);
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02fc4728;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_015c2a80(plVar5,lVar3,0);
LAB_02fc4728:
        uVar7 = (*(code *)*puVar2)(plVar5,uVar1,in_stack_00000018._4_4_,puVar2[1]);
        unaff_x24 = in_stack_00000010;
      }
      if ((uVar7 & 1) != 0) {
        if ((int)unaff_w20 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_02fc4848;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_02fc484c;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(lVar11 + lVar10 * 0x38 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_02fc4848:
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w20) {
LAB_02fc484c:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          *(undefined4 *)(lVar3 + (long)(int)unaff_w20 * 0x38 + 0x24) =
               *(undefined4 *)(lVar11 + lVar10 * 0x38 + 0x24);
        }
        lVar11 = lVar11 + lVar10 * 0x38;
        uVar14 = *(undefined8 *)(lVar11 + 0x34);
        uVar13 = *(undefined8 *)(lVar11 + 0x2c);
        uVar9 = *(undefined8 *)(lVar11 + 0x4c);
        uVar16 = *(undefined8 *)(lVar11 + 0x44);
        uVar15 = *(undefined8 *)(lVar11 + 0x3c);
        *(undefined4 *)(in_stack_00000008 + 5) = *(undefined4 *)(lVar11 + 0x54);
        in_stack_00000008[4] = uVar9;
        in_stack_00000008[1] = uVar14;
        *in_stack_00000008 = uVar13;
        in_stack_00000008[3] = uVar16;
        in_stack_00000008[2] = uVar15;
        *piVar12 = -1;
        *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
        *(uint *)(unaff_x19 + 0x24) = uVar4;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    in_w8 = *(uint *)(lVar11 + lVar10 * unaff_x21 + 0x24);
    unaff_w20 = uVar4;
  } while( true );
}


