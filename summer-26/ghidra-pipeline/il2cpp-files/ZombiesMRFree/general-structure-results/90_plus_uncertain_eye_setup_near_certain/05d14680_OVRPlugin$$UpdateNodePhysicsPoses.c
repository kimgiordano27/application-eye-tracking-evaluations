/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 05d14680
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__UpdateNodePhysicsPoses(ulong param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 auVar8 [16];
  ulong uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
                    /* try { // try from 05d14684 to 05e1468f has its CatchHandler @ 05d142d4 */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 05d14690 to 05e14697 has its CatchHandler @ 05d14698 */
    FUN_02fe925c(PTR_DAT_06fb4b20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d1461c with catch @ 05d14698
                       catch(type#2 @ 00000000) { ... } // from try @ 05d14690 with catch @ 05d14698
                        */
    FUN_02fe925c(PTR_DAT_06fb4b00);
    *(undefined1 *)(unaff_x22 + 0x85d) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (param_2 == (long *)0x0) goto LAB_05d148b0;
  lVar4 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06fb4b00) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_05d1470c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)PTR_DAT_06fb4b00,4);
LAB_05d1470c:
  lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
  *unaff_x19 = 0;
  uVar6 = FUN_05d148b4(param_2);
  uVar9 = 0;
  auVar1 = ZEXT816(0);
  if ((uVar6 & 1) != 0) {
    if (unaff_x21 == (long *)0x0) goto LAB_05d148b0;
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06fb4b20) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_05d14790;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_05d14790:
    (*(code *)*puVar3)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar4 == 0) goto LAB_05d148b0;
    auVar8 = FUN_05d362ac(lVar4,&stack0x00000020,unaff_w20 & 1,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar9;
    auVar1 = auVar1 << 0x40;
    if (0.0 < auVar8._0_4_) {
      *unaff_x19 = 1;
      auVar1 = auVar8;
    }
  }
  uVar10 = auVar1._8_8_;
  uVar6 = FUN_05d14964(param_2);
  auVar8._8_8_ = uVar10;
  auVar8._0_8_ = auVar1._0_8_;
  if ((uVar6 & 1) == 0) {
    return auVar8;
  }
  if (unaff_x21 != (long *)0x0) {
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06fb4b20) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_05d14848;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_05d14848:
    (*(code *)*puVar3)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar4 != 0) {
      auVar8 = FUN_05d36658(lVar4,&stack0x00000020,unaff_w20 & 1,0);
      auVar2._8_8_ = uVar10;
      auVar2._0_8_ = auVar1._0_8_;
      if (auVar8._0_4_ <= auVar1._0_4_) {
        return auVar2;
      }
      *unaff_x19 = 2;
      return auVar8;
    }
  }
LAB_05d148b0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


