/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 02fc389c
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_VrFocusAcquired(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined4 uStack000000000000003c;
  
  do {
    lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 0x148);
                    /* try { // try from 02fc38ac to 030c3903 has its CatchHandler @ 02fc3c28 */
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_015c2790(lVar7);
    }
    lVar9 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02fc390c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80();
LAB_02fc390c:
                    /* try { // try from 02fc390c to 030c3917 has its CatchHandler @ 02fc3c18 */
    uVar10 = (*(code *)*puVar5)();
    if ((uVar10 & 1) != 0) {
      if (in_stack_00000000._4_1_ == '\x02') {
        in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uStack000000000000003c);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_015c2790();
        }
        uVar6 = thunk_FUN_015d01b0(lVar7,&stack0x00000010);
        FUN_031dbe34(uVar6,0);
      }
      else if (in_stack_00000000._4_1_ == '\x01') {
        uStack0000000000000034 = *(undefined8 *)((long)in_stack_00000008 + 0x24);
        in_stack_00000018 = in_stack_00000008[1];
        in_stack_00000010 = *in_stack_00000008;
        uVar6 = in_stack_00000008[3];
        in_stack_00000020 = in_stack_00000008[2];
        uStack0000000000000030 =
             (undefined4)((ulong)*(undefined8 *)((long)in_stack_00000008 + 0x1c) >> 0x20);
        uStack0000000000000028 = (undefined4)uVar6;
        uStack000000000000002c = (undefined4)((ulong)uVar6 >> 0x20);
        if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
          lVar7 = unaff_x26 + unaff_x19 * 0x38;
          *(undefined8 *)(lVar7 + 0x50) = uStack0000000000000034;
          *(ulong *)(lVar7 + 0x48) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
          *(undefined8 *)(lVar7 + 0x44) = uVar6;
          *(undefined8 *)(lVar7 + 0x3c) = in_stack_00000020;
          *(undefined8 *)(lVar7 + 0x34) = in_stack_00000018;
          *(undefined8 *)(lVar7 + 0x2c) = in_stack_00000010;
          return 1;
        }
LAB_02fc3bcc:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      return 0;
    }
                    /* try { // try from 02fc3924 to 030c393b has its CatchHandler @ 02fc3c20 */
    uVar10 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar10 <= (uint)unaff_x19) goto LAB_02fc3bcc;
      uVar12 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x22 + 0x24);
      if ((int)(uint)uVar10 <= unaff_w29) {
        FUN_031dbf48(0);
      }
      uVar10 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w29 = unaff_w29 + 1;
      if ((uint)uVar10 <= uVar12) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar12 = *(uint *)(unaff_x20 + 0x20);
          if (uVar12 == (uint)uVar10) {
            (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168) + 8))();
            lVar7 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
            if (lVar7 == 0) goto LAB_02fc3bd0;
            uVar1 = *(uint *)(lVar7 + 0x18);
            iVar4 = 0;
            if (uVar1 != 0) {
              iVar4 = unaff_w27 / (int)uVar1;
            }
            uVar3 = unaff_w27 - iVar4 * uVar1;
            if (uVar1 <= uVar3) goto LAB_02fc3bcc;
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            unaff_x28 = (int *)(lVar7 + (ulong)uVar3 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
          }
          if (unaff_x26 == 0) {
LAB_02fc3bd0:
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          bVar8 = false;
        }
        else {
          uVar12 = *(uint *)(unaff_x20 + 0x24);
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          bVar8 = true;
        }
        if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
          if (bVar8) {
            *(undefined4 *)(unaff_x20 + 0x24) =
                 *(undefined4 *)(unaff_x26 + (long)(int)uVar12 * 0x38 + 0x24);
          }
          lVar7 = unaff_x26 + (long)(int)uVar12 * 0x38;
          *(int *)(lVar7 + 0x20) = unaff_w27;
          *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
          *(undefined4 *)(lVar7 + 0x28) = uStack000000000000003c;
          uVar2 = *(undefined4 *)(in_stack_00000008 + 5);
          uVar13 = in_stack_00000008[1];
          uVar6 = *in_stack_00000008;
          uVar15 = in_stack_00000008[3];
          uVar14 = in_stack_00000008[2];
          *(undefined8 *)(lVar7 + 0x4c) = in_stack_00000008[4];
          *(undefined4 *)(lVar7 + 0x54) = uVar2;
          *(undefined8 *)(lVar7 + 0x44) = uVar15;
          *(undefined8 *)(lVar7 + 0x3c) = uVar14;
          *(undefined8 *)(lVar7 + 0x34) = uVar13;
          *(undefined8 *)(lVar7 + 0x2c) = uVar6;
          *unaff_x28 = uVar12 + 1;
          return 1;
        }
        goto LAB_02fc3bcc;
      }
      unaff_x19 = (long)(int)uVar12;
    } while (*(int *)(unaff_x26 + (long)(int)uVar12 * (long)(int)unaff_x22 + 0x20) != unaff_w27);
    param_1 = *(long *)(unaff_x21 + 0x20);
  } while( true );
}


