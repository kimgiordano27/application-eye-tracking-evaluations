/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$BeginInvoke
ENTRY_POINT: 0741b218
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__BeginInvoke
               (undefined1 param_1 [16],ulong param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  ulong *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *plVar16;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  int unaff_w26;
  undefined8 *unaff_x27;
  undefined2 *unaff_x28;
  long unaff_x29;
  undefined4 uVar17;
  undefined4 uStack0000000000000040;
  uint uStack0000000000000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  ulong in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined3 uStack00000000000000d0;
  undefined5 uStack00000000000000d3;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  do {
    uVar17 = (undefined4)param_2;
    uVar2 = uStack0000000000000048;
    lVar8 = *(long *)(unaff_x20 + 0xe0);
    if (lVar8 == 0) {
LAB_0741b4f8:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uStack00000000000000d0 = CONCAT12(in_stack_00000078._6_1_,in_stack_00000078._4_2_);
    lVar11 = *(long *)(lVar8 + 0x10);
    lVar13 = *unaff_x24;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_0741b4f8;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (int)uVar1 * unaff_x29;
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar11 + 0x20) = in_stack_00000058._4_4_;
      *(undefined4 *)(lVar11 + 0x24) = uStack0000000000000060;
      *(undefined4 *)(lVar11 + 0x28) = uStack0000000000000064;
      *(undefined4 *)(lVar11 + 0x2c) = uStack0000000000000068;
      *(undefined4 *)(lVar11 + 0x30) = uStack000000000000006c;
      *(undefined4 *)(lVar11 + 0x34) = in_stack_00000070;
      *(undefined4 *)(lVar11 + 0x38) = param_3;
      *(undefined4 *)(lVar11 + 0x3c) = uVar17;
      *(uint *)(lVar11 + 0x40) = uStack0000000000000048;
      *(undefined1 *)(lVar11 + 0x44) = 0;
      *(undefined1 *)(lVar11 + 0x47) = in_stack_00000078._6_1_;
      *(undefined2 *)(lVar11 + 0x45) = in_stack_00000078._4_2_;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
      _uStack0000000000000040 = CONCAT44(uStack0000000000000060,in_stack_00000058._4_4_);
      _uStack0000000000000048 = CONCAT44(uStack0000000000000068,uStack0000000000000064);
      in_stack_00000050 = CONCAT44(in_stack_00000070,uStack000000000000006c);
      in_stack_00000058 = CONCAT44(uVar17,param_3);
      _uStack0000000000000060 = (uint5)uVar2;
      *(undefined1 *)(unaff_x28 + 1) = in_stack_00000078._6_1_;
      *unaff_x28 = in_stack_00000078._4_2_;
      FUN_05a8294c(lVar8,&stack0x00000040,uVar10);
    }
    uVar7 = in_stack_000000c8;
    uVar14 = in_stack_000000c0;
    uVar6 = in_stack_000000b8;
    uVar10 = in_stack_000000b0;
    unaff_w25 = unaff_w25 + -1;
    if (unaff_w25 == 0) {
      if (*(char *)(unaff_x20 + 0x110) == '\0') {
        if (*(char *)(unaff_x22 + 0x2c7) == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a0f88);
          *(undefined1 *)(unaff_x22 + 0x2c7) = 1;
        }
        puVar12 = *(undefined4 **)(*unaff_x23 + 0xb8);
        uStack0000000000000098 = *puVar12;
        uVar17 = puVar12[1];
        param_3 = puVar12[2];
      }
      else {
        uStack0000000000000098 = FUN_05ee3698(unaff_x20 + 0x110,*(undefined8 *)PTR_DAT_091da538);
      }
      in_stack_00000080 = uVar14;
      uStack0000000000000088 = uVar7;
      uStack000000000000008c = (undefined4)uVar10;
      uStack0000000000000090 = (undefined4)((ulong)uVar10 >> 0x20);
      uStack0000000000000094 = uVar6;
      uStack00000000000000a4 = CONCAT31(uStack00000000000000a4._1_3_,1);
      uVar10 = CONCAT44(uStack000000000000008c,uVar7);
      uVar4 = CONCAT44(uVar17,uStack0000000000000098);
      uVar3 = CONCAT44(uVar6,uStack0000000000000090);
      lVar8 = *(long *)(unaff_x20 + 0xe0);
      uVar5 = CONCAT44(uStack00000000000000a4,param_3);
      uStack000000000000009c = uVar17;
      uStack00000000000000a0 = param_3;
      if (lVar8 != 0) {
        lVar13 = *unaff_x24;
        _uStack00000000000000d0 = uVar14;
        lVar11 = *(long *)(lVar8 + 0x10);
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        in_stack_000000d8 = uVar10;
        in_stack_000000e0 = uVar3;
        in_stack_000000e8 = uVar4;
        in_stack_000000f0 = uVar5;
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            lVar11 = lVar11 + (long)(int)uVar2 * 0x28;
            *(undefined8 *)(lVar11 + 0x40) = uVar5;
            *(undefined8 *)(lVar11 + 0x28) = uVar10;
            *(ulong *)(lVar11 + 0x20) = uVar14;
            *(undefined8 *)(lVar11 + 0x38) = uVar4;
            *(undefined8 *)(lVar11 + 0x30) = uVar3;
          }
          else {
            _uStack0000000000000040 = uVar14;
            _uStack0000000000000048 = uVar10;
            in_stack_00000050 = uVar3;
            in_stack_00000058 = uVar4;
            _uStack0000000000000060 = uVar5;
            FUN_05a8294c(lVar8,&stack0x00000040,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          lVar8 = *(long *)(unaff_x20 + 0xe8);
          if (lVar8 != 0) {
            (**(code **)(lVar8 + 0x18))
                      (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(unaff_x20 + 0xe0),
                       *(undefined8 *)(lVar8 + 0x28));
            lVar8 = *(long *)(unaff_x20 + 0x138);
            if (lVar8 != 0) {
              *(undefined4 *)(lVar8 + 0x18) = 0;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              plVar16 = *(long **)(unaff_x20 + 0x78);
              *(undefined4 *)(unaff_x20 + 0x140) = 0xffffffff;
              if (plVar16 != (long *)0x0) {
                lVar8 = *plVar16;
                uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar14 == 0) goto LAB_0741b494;
                piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                break;
              }
            }
          }
        }
      }
      goto LAB_0741b4f8;
    }
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 0) {
      unaff_w21 = unaff_w26;
    }
    if (*(long *)(unaff_x20 + 0x138) == 0) goto LAB_0741b4f8;
    FUN_05c5c2bc(&stack0x00000040,*(long *)(unaff_x20 + 0x138),unaff_w21,*unaff_x27);
    param_2 = _uStack0000000000000040 >> 0x20;
    param_3 = uStack0000000000000040;
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09221d00) {
      puVar9 = (undefined8 *)(lVar8 + (long)(*piVar15 + 3) * 0x10 + 0x138);
      goto LAB_0741b4b4;
    }
  }
LAB_0741b494:
  puVar9 = (undefined8 *)FUN_03d8f370(plVar16,*(long *)PTR_DAT_09221d00,3);
LAB_0741b4b4:
  (*(code *)*puVar9)(plVar16,puVar9[1]);
  unaff_x19[4] = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
  unaff_x19[1] = CONCAT44(uStack000000000000008c,uStack0000000000000088);
  *unaff_x19 = in_stack_00000080;
  unaff_x19[3] = CONCAT44(uStack000000000000009c,uStack0000000000000098);
  unaff_x19[2] = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  return;
}


