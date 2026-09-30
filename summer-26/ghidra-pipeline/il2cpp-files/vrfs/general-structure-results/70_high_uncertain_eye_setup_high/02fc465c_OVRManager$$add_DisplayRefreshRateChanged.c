/*
FUNCTION_NAME: OVRManager$$add_DisplayRefreshRateChanged
ENTRY_POINT: 02fc465c
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_DisplayRefreshRateChanged(long *param_1)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  long unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    plVar3 = unaff_x23;
    if (!(bool)in_ZR) {
      plVar3 = param_1;
    }
    if (param_1 == (long *)0x0) {
      plVar3 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x10)
                                   + 8))();
      if (plVar3 == (long *)0x0) goto LAB_02fc4848;
      uVar6 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,*(undefined4 *)(unaff_x27 + unaff_x26 * unaff_x21 + 0x28),
                         in_stack_00000018._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
    }
    else {
      if (plVar3 == (long *)0x0) goto LAB_02fc4848;
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x148);
      uVar1 = *(undefined4 *)(unaff_x27 + unaff_x26 * unaff_x21 + 0x28);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_015c2790(lVar4);
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02fc4728;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80(plVar3,lVar4,0);
LAB_02fc4728:
      uVar6 = (*(code *)*puVar2)(plVar3,uVar1,in_stack_00000018._4_4_,puVar2[1]);
      unaff_x23 = plVar3;
      unaff_x24 = in_stack_00000010;
    }
    if ((uVar6 & 1) != 0) {
      if ((int)unaff_w20 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 != 0) {
          if ((uint)in_stack_00000000 < *(uint *)(lVar4 + 0x18)) {
            *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
                 *(int *)(unaff_x27 + unaff_x26 * 0x38 + 0x24) + 1;
            goto LAB_02fc47f4;
          }
LAB_02fc484c:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 != 0) {
          if (unaff_w20 < *(uint *)(lVar4 + 0x18)) {
            *(undefined4 *)(lVar4 + (long)(int)unaff_w20 * 0x38 + 0x24) =
                 *(undefined4 *)(unaff_x27 + unaff_x26 * 0x38 + 0x24);
LAB_02fc47f4:
            lVar4 = unaff_x27 + unaff_x26 * 0x38;
            uVar10 = *(undefined8 *)(lVar4 + 0x34);
            uVar9 = *(undefined8 *)(lVar4 + 0x2c);
            uVar8 = *(undefined8 *)(lVar4 + 0x4c);
            uVar12 = *(undefined8 *)(lVar4 + 0x44);
            uVar11 = *(undefined8 *)(lVar4 + 0x3c);
            *(undefined4 *)(in_stack_00000008 + 5) = *(undefined4 *)(lVar4 + 0x54);
            in_stack_00000008[4] = uVar8;
            in_stack_00000008[1] = uVar10;
            *in_stack_00000008 = uVar9;
            in_stack_00000008[3] = uVar12;
            in_stack_00000008[2] = uVar11;
            *unaff_x28 = -1;
            *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = unaff_w25;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
          goto LAB_02fc484c;
        }
      }
LAB_02fc4848:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    do {
      unaff_w20 = unaff_w25;
      unaff_w25 = *(uint *)(unaff_x27 + unaff_x26 * unaff_x21 + 0x24);
      if ((int)unaff_w25 < 0) {
        *(undefined8 *)((long)in_stack_00000008 + 0x24) = 0;
        *(undefined8 *)((long)in_stack_00000008 + 0x1c) = 0;
        in_stack_00000008[1] = 0;
        *in_stack_00000008 = 0;
        in_stack_00000008[3] = 0;
        in_stack_00000008[2] = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_02fc4848;
      if (*(uint *)(unaff_x27 + 0x18) <= unaff_w25) goto LAB_02fc484c;
      unaff_x28 = (int *)(unaff_x27 + (long)(int)unaff_w25 * (long)(int)unaff_x21 + 0x20);
      unaff_x26 = (long)(int)unaff_w25;
    } while (*unaff_x28 != unaff_w29);
    param_1 = *(long **)(unaff_x19 + 0x30);
    in_ZR = param_1 == (long *)0x0;
  } while( true );
}


