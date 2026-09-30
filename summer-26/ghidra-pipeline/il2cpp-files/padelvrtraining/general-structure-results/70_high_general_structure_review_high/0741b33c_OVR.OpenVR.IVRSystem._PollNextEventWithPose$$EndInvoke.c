/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$EndInvoke
ENTRY_POINT: 0741b33c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__EndInvoke(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 unaff_d8;
  undefined4 unaff_s9;
  undefined8 unaff_d10;
  undefined4 unaff_s11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  
  if (*(char *)(unaff_x22 + 0x2c7) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    *(undefined1 *)(unaff_x22 + 0x2c7) = 1;
  }
  puVar5 = *(undefined8 **)(*unaff_x23 + 0xb8);
  uVar11 = *(undefined4 *)puVar5;
  uStack000000000000009c = *(undefined4 *)((long)puVar5 + 4);
  uVar3 = *puVar5;
  uVar12 = *(undefined4 *)(puVar5 + 1);
  uStack000000000000008c = (undefined4)unaff_d10;
  uStack0000000000000090 = (undefined4)((ulong)unaff_d10 >> 0x20);
  in_stack_000000a0._4_4_ = CONCAT31(in_stack_000000a0._5_3_,1);
  lVar4 = *(long *)(unaff_x20 + 0xe0);
  uVar2 = CONCAT44(in_stack_000000a0._4_4_,uVar12);
  if (lVar4 != 0) {
    lVar8 = *unaff_x24;
    lVar6 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      uStack0000000000000094 = unaff_s11;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        lVar6 = lVar6 + (long)(int)uVar1 * 0x28;
        *(undefined8 *)(lVar6 + 0x40) = uVar2;
        *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack000000000000008c,unaff_s9);
        *(undefined8 *)(lVar6 + 0x20) = unaff_d8;
        *(undefined8 *)(lVar6 + 0x38) = uVar3;
        *(ulong *)(lVar6 + 0x30) = CONCAT44(unaff_s11,uStack0000000000000090);
      }
      else {
        in_stack_00000040 = unaff_d8;
        in_stack_00000048 = CONCAT44(uStack000000000000008c,unaff_s9);
        in_stack_00000050 = CONCAT44(unaff_s11,uStack0000000000000090);
        in_stack_00000058 = uVar3;
        in_stack_00000060 = uVar2;
        FUN_05a8294c(lVar4,&stack0x00000040,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      lVar4 = *(long *)(unaff_x20 + 0xe8);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(unaff_x20 + 0xe0),
                   *(undefined8 *)(lVar4 + 0x28));
        lVar4 = *(long *)(unaff_x20 + 0x138);
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0x18) = 0;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          plVar10 = *(long **)(unaff_x20 + 0x78);
          *(undefined4 *)(unaff_x20 + 0x140) = 0xffffffff;
          if (plVar10 != (long *)0x0) {
            lVar4 = *plVar10;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09221d00) {
                  puVar5 = (undefined8 *)(lVar4 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                  goto LAB_0741b4b4;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)PTR_DAT_09221d00,3);
LAB_0741b4b4:
            (*(code *)*puVar5)(plVar10,puVar5[1]);
            unaff_x19[4] = CONCAT44(in_stack_000000a0._4_4_,uVar12);
            unaff_x19[1] = CONCAT44(uStack000000000000008c,unaff_s9);
            *unaff_x19 = unaff_d8;
            unaff_x19[3] = CONCAT44(uStack000000000000009c,uVar11);
            unaff_x19[2] = CONCAT44(uStack0000000000000094,uStack0000000000000090);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


