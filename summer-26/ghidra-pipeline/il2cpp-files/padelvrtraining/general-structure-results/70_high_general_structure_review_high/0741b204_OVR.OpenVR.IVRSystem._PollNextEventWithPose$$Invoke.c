/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$Invoke
ENTRY_POINT: 0741b204
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


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__Invoke(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *plVar17;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  int unaff_w26;
  undefined8 *unaff_x27;
  undefined2 *unaff_x28;
  long unaff_x29;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  uint uStack0000000000000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
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
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined3 uStack00000000000000d0;
  undefined5 uStack00000000000000d3;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  while( true ) {
    FUN_05c5c2bc(&stack0x00000040,param_1,unaff_w21,*unaff_x27);
    uVar3 = _uStack0000000000000040;
    uVar19 = uStack0000000000000040;
    uVar18 = uStack0000000000000044;
    uVar2 = uStack0000000000000048;
    lVar9 = *(long *)(unaff_x20 + 0xe0);
    if (lVar9 == 0) break;
    uStack00000000000000d0 = CONCAT12(in_stack_00000078._6_1_,in_stack_00000078._4_2_);
    lVar12 = *(long *)(lVar9 + 0x10);
    lVar14 = *unaff_x24;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (int)uVar1 * unaff_x29;
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar12 + 0x20) = in_stack_00000058._4_4_;
      *(undefined4 *)(lVar12 + 0x24) = uStack0000000000000060;
      *(undefined4 *)(lVar12 + 0x28) = uStack0000000000000064;
      *(undefined4 *)(lVar12 + 0x2c) = uStack0000000000000068;
      *(undefined4 *)(lVar12 + 0x30) = uStack000000000000006c;
      *(undefined4 *)(lVar12 + 0x34) = in_stack_00000070;
      *(undefined4 *)(lVar12 + 0x38) = uStack0000000000000040;
      *(undefined4 *)(lVar12 + 0x3c) = uStack0000000000000044;
      *(uint *)(lVar12 + 0x40) = uStack0000000000000048;
      *(undefined1 *)(lVar12 + 0x44) = 0;
      *(undefined1 *)(lVar12 + 0x47) = in_stack_00000078._6_1_;
      *(undefined2 *)(lVar12 + 0x45) = in_stack_00000078._4_2_;
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
      _uStack0000000000000040 = CONCAT44(uStack0000000000000060,in_stack_00000058._4_4_);
      _uStack0000000000000048 = CONCAT44(uStack0000000000000068,uStack0000000000000064);
      in_stack_00000050 = CONCAT44(in_stack_00000070,uStack000000000000006c);
      in_stack_00000058 = uVar3;
      _uStack0000000000000060 = (uint5)uVar2;
      *(undefined1 *)(unaff_x28 + 1) = in_stack_00000078._6_1_;
      *unaff_x28 = in_stack_00000078._4_2_;
      FUN_05a8294c(lVar9,&stack0x00000040,uVar11);
    }
    uVar8 = in_stack_000000c8;
    uVar11 = in_stack_000000c0;
    uVar7 = in_stack_000000b8;
    uVar3 = in_stack_000000b0;
    unaff_w25 = unaff_w25 + -1;
    if (unaff_w25 == 0) {
      if (*(char *)(unaff_x20 + 0x110) == '\0') {
        if (*(char *)(unaff_x22 + 0x2c7) == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a0f88);
          *(undefined1 *)(unaff_x22 + 0x2c7) = 1;
        }
        puVar13 = *(undefined4 **)(*unaff_x23 + 0xb8);
        uStack0000000000000098 = *puVar13;
        uVar18 = puVar13[1];
        uVar19 = puVar13[2];
      }
      else {
        uStack0000000000000098 = FUN_05ee3698(unaff_x20 + 0x110,*(undefined8 *)PTR_DAT_091da538);
      }
      in_stack_00000080 = uVar11;
      uStack0000000000000088 = uVar8;
      uStack000000000000008c = (undefined4)uVar3;
      uStack0000000000000090 = (undefined4)((ulong)uVar3 >> 0x20);
      uStack0000000000000094 = uVar7;
      uStack00000000000000a4 = CONCAT31(uStack00000000000000a4._1_3_,1);
      uVar3 = CONCAT44(uStack000000000000008c,uVar8);
      uVar5 = CONCAT44(uVar18,uStack0000000000000098);
      uVar4 = CONCAT44(uVar7,uStack0000000000000090);
      lVar9 = *(long *)(unaff_x20 + 0xe0);
      uVar6 = CONCAT44(uStack00000000000000a4,uVar19);
      uStack000000000000009c = uVar18;
      uStack00000000000000a0 = uVar19;
      if (lVar9 != 0) {
        lVar14 = *unaff_x24;
        _uStack00000000000000d0 = uVar11;
        lVar12 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        in_stack_000000d8 = uVar3;
        in_stack_000000e0 = uVar4;
        in_stack_000000e8 = uVar5;
        in_stack_000000f0 = uVar6;
        if (lVar12 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            lVar12 = lVar12 + (long)(int)uVar2 * 0x28;
            *(undefined8 *)(lVar12 + 0x40) = uVar6;
            *(undefined8 *)(lVar12 + 0x28) = uVar3;
            *(undefined8 *)(lVar12 + 0x20) = uVar11;
            *(undefined8 *)(lVar12 + 0x38) = uVar5;
            *(undefined8 *)(lVar12 + 0x30) = uVar4;
          }
          else {
            _uStack0000000000000040 = uVar11;
            _uStack0000000000000048 = uVar3;
            in_stack_00000050 = uVar4;
            in_stack_00000058 = uVar5;
            _uStack0000000000000060 = uVar6;
            FUN_05a8294c(lVar9,&stack0x00000040,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = *(long *)(unaff_x20 + 0xe8);
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(unaff_x20 + 0xe0),
                       *(undefined8 *)(lVar9 + 0x28));
            lVar9 = *(long *)(unaff_x20 + 0x138);
            if (lVar9 != 0) {
              *(undefined4 *)(lVar9 + 0x18) = 0;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              plVar17 = *(long **)(unaff_x20 + 0x78);
              *(undefined4 *)(unaff_x20 + 0x140) = 0xffffffff;
              if (plVar17 != (long *)0x0) {
                lVar9 = *plVar17;
                uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar15 == 0) goto LAB_0741b494;
                piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                goto LAB_0741b47c;
              }
            }
          }
        }
      }
      break;
    }
    param_1 = *(long *)(unaff_x20 + 0x138);
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 0) {
      unaff_w21 = unaff_w26;
    }
    if (param_1 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0741b47c:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09221d00) {
      puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 3) * 0x10 + 0x138);
      goto LAB_0741b4b4;
    }
  }
LAB_0741b494:
  puVar10 = (undefined8 *)FUN_03d8f370(plVar17,*(long *)PTR_DAT_09221d00,3);
LAB_0741b4b4:
  (*(code *)*puVar10)(plVar17,puVar10[1]);
  unaff_x19[4] = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
  unaff_x19[1] = CONCAT44(uStack000000000000008c,uStack0000000000000088);
  *unaff_x19 = in_stack_00000080;
  unaff_x19[3] = CONCAT44(uStack000000000000009c,uStack0000000000000098);
  unaff_x19[2] = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  return;
}


