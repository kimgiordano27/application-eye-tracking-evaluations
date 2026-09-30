/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 090a229c
PROGRAM: Hyper-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingLevel(undefined1 param_1 [16],undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x25;
  undefined1 auVar12 [16];
  float in_stack_00000000;
  float in_stack_00000020;
  float in_stack_00000030;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  undefined4 in_stack_000000c8;
  
  uStack00000000000000b4 = param_2;
  FUN_0a16adac();
  auVar3._4_4_ = fStack00000000000000c0;
  auVar3._0_4_ = in_stack_000000b8._4_4_;
  auVar3._8_4_ = fStack00000000000000c4;
  auVar12._4_4_ = in_stack_000000c8;
  auVar12._0_4_ = in_stack_000000c8;
  auVar12._8_4_ = in_stack_000000c8;
  auVar12._12_4_ = in_stack_000000c8;
  auVar3._12_4_ = in_stack_000000c8;
  NEON_ext(auVar12,auVar3,4,1);
  auVar1._4_4_ = in_stack_00000020 * fStack00000000000000c0;
  auVar1._0_4_ = in_stack_00000000 * in_stack_000000b8._4_4_;
  auVar1._8_4_ = in_stack_00000030 * fStack00000000000000c4;
  auVar1._12_4_ = in_stack_00000030 * fStack00000000000000c0;
  auVar2._4_4_ = in_stack_00000020 * fStack00000000000000c0;
  auVar2._0_4_ = in_stack_00000000 * in_stack_000000b8._4_4_;
  auVar2._8_4_ = in_stack_00000030 * fStack00000000000000c4;
  auVar2._12_4_ = in_stack_00000030 * fStack00000000000000c0;
  NEON_ext(auVar1,auVar2,4,1);
  auVar4._4_4_ = in_stack_00000000 * fStack00000000000000c0;
  auVar4._0_4_ = in_stack_00000030 * in_stack_000000b8._4_4_;
  auVar4._8_4_ = in_stack_00000020 * fStack00000000000000c4;
  auVar4._12_4_ = in_stack_00000000 * fStack00000000000000c4;
  auVar5._4_4_ = in_stack_00000000 * fStack00000000000000c0;
  auVar5._0_4_ = in_stack_00000030 * in_stack_000000b8._4_4_;
  auVar5._8_4_ = in_stack_00000020 * fStack00000000000000c4;
  auVar5._12_4_ = in_stack_00000000 * fStack00000000000000c4;
  NEON_ext(auVar4,auVar5,0xc,1);
  FUN_090a25cc();
  lVar6 = FUN_090a1150();
  if (lVar6 != 0) {
    plVar7 = (long *)FUN_090a1150();
    if ((unaff_x19 == 0) || (uVar8 = FUN_0a178414(), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_090a2408;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x25,4);
LAB_090a2408:
    (*(code *)*puVar9)(plVar7,uVar8,puVar9[1]);
    FUN_090a18d0();
  }
  return;
}


