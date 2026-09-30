/*
FUNCTION_NAME: OVRManager$$remove_VrFocusAcquired
ENTRY_POINT: 02fc3978
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_VrFocusAcquired(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint unaff_w19;
  uint uVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  char unaff_w29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined4 uStack000000000000003c;
  
  do {
    uVar9 = (uint)param_1;
    lVar10 = (long)(int)unaff_w19;
                    /* try { // try from 02fc3988 to 030c39ab has its CatchHandler @ 02fc3c14 */
    if (*(int *)(unaff_x26 + (long)(int)unaff_w19 * (long)(int)unaff_x23 + 0x20) == unaff_w27) {
      plVar5 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10)
                                   + 8))();
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_w19) goto LAB_02fc3bcc;
                    /* try { // try from 02fc39ac to 030c3a97 has its CatchHandler @ 02fc2e70 */
      if (plVar5 == (long *)0x0) goto LAB_02fc3bd0;
      uVar6 = (**(code **)(*plVar5 + 0x1b8))
                        (plVar5,*(undefined4 *)(unaff_x26 + lVar10 * unaff_x23 + 0x28),
                         uStack000000000000003c,*(undefined8 *)(*plVar5 + 0x1c0));
      if ((uVar6 & 1) != 0) {
        if (unaff_w29 == '\x02') {
          in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uStack000000000000003c);
          lVar10 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_015c2790();
          }
          uVar7 = thunk_FUN_015d01b0(lVar10,&stack0x00000010);
          FUN_031dbe34(uVar7,0);
        }
        else if (unaff_w29 == '\x01') {
          uStack0000000000000034 = *(undefined8 *)((long)unaff_x25 + 0x24);
          in_stack_00000018 = unaff_x25[1];
          in_stack_00000010 = *unaff_x25;
          uVar7 = unaff_x25[3];
          in_stack_00000020 = unaff_x25[2];
          uStack0000000000000030 =
               (undefined4)((ulong)*(undefined8 *)((long)unaff_x25 + 0x1c) >> 0x20);
          uStack0000000000000028 = (undefined4)uVar7;
          uStack000000000000002c = (undefined4)((ulong)uVar7 >> 0x20);
          if (unaff_w19 < *(uint *)(unaff_x26 + 0x18)) {
            lVar10 = unaff_x26 + lVar10 * 0x38;
            *(undefined8 *)(lVar10 + 0x50) = uStack0000000000000034;
            *(ulong *)(lVar10 + 0x48) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
            *(undefined8 *)(lVar10 + 0x44) = uVar7;
            *(undefined8 *)(lVar10 + 0x3c) = in_stack_00000020;
            *(undefined8 *)(lVar10 + 0x34) = in_stack_00000018;
            *(undefined8 *)(lVar10 + 0x2c) = in_stack_00000010;
            return 1;
          }
          goto LAB_02fc3bcc;
        }
        return 0;
      }
      uVar9 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar9 <= unaff_w19) goto LAB_02fc3bcc;
    unaff_w19 = *(uint *)(unaff_x26 + lVar10 * unaff_x23 + 0x24);
    if ((int)uVar9 <= unaff_w22) {
      FUN_031dbf48(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    unaff_w22 = unaff_w22 + 1;
  } while (unaff_w19 < (uint)param_1);
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar9 = *(uint *)(unaff_x20 + 0x20);
    if (uVar9 == (uint)param_1) {
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168) + 8))();
      lVar10 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
      if (lVar10 == 0) goto LAB_02fc3bd0;
      uVar1 = *(uint *)(lVar10 + 0x18);
      iVar4 = 0;
      if (uVar1 != 0) {
        iVar4 = unaff_w27 / (int)uVar1;
      }
      uVar3 = unaff_w27 - iVar4 * uVar1;
      if (uVar1 <= uVar3) goto LAB_02fc3bcc;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar10 + (ulong)uVar3 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
    }
    if (unaff_x26 == 0) {
LAB_02fc3bd0:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    bVar8 = false;
  }
  else {
    uVar9 = *(uint *)(unaff_x20 + 0x24);
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    bVar8 = true;
  }
  if (uVar9 < *(uint *)(unaff_x26 + 0x18)) {
    if (bVar8) {
      *(undefined4 *)(unaff_x20 + 0x24) =
           *(undefined4 *)(unaff_x26 + (long)(int)uVar9 * 0x38 + 0x24);
    }
    lVar10 = unaff_x26 + (long)(int)uVar9 * 0x38;
    *(int *)(lVar10 + 0x20) = unaff_w27;
    *(int *)(lVar10 + 0x24) = *unaff_x28 + -1;
    *(undefined4 *)(lVar10 + 0x28) = uStack000000000000003c;
    uVar2 = *(undefined4 *)(unaff_x25 + 5);
    uVar11 = unaff_x25[1];
    uVar7 = *unaff_x25;
    uVar13 = unaff_x25[3];
    uVar12 = unaff_x25[2];
    *(undefined8 *)(lVar10 + 0x4c) = unaff_x25[4];
    *(undefined4 *)(lVar10 + 0x54) = uVar2;
    *(undefined8 *)(lVar10 + 0x44) = uVar13;
    *(undefined8 *)(lVar10 + 0x3c) = uVar12;
    *(undefined8 *)(lVar10 + 0x34) = uVar11;
    *(undefined8 *)(lVar10 + 0x2c) = uVar7;
    *unaff_x28 = uVar9 + 1;
    return 1;
  }
LAB_02fc3bcc:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


