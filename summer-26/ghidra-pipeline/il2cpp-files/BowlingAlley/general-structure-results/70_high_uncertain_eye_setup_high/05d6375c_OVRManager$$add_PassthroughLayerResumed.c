/*
FUNCTION_NAME: OVRManager$$add_PassthroughLayerResumed
ENTRY_POINT: 05d6375c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_PassthroughLayerResumed
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 in_x9;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000018 = param_3._8_8_;
  uVar8 = param_3._0_8_;
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  uStack0000000000000010 = uVar8;
  uStack0000000000000020 = in_x9;
  if (*(int *)(**(long **)(param_1 + 0x7f8) + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_05d3d5ac();
  uVar6 = FUN_05d62f6c();
  lVar2 = *(long *)(unaff_x19 + 0x38);
  if (lVar2 != 0) {
    uStack0000000000000020 = *(undefined8 *)(lVar2 + 0x168);
    uStack0000000000000008 = *(undefined8 *)(lVar2 + 0x150);
    uVar9 = *(undefined8 *)(lVar2 + 0x148);
    uStack0000000000000018 = *(undefined8 *)(lVar2 + 0x160);
    uStack0000000000000010 = *(undefined8 *)(lVar2 + 0x158);
    uVar10 = param_4;
    uStack0000000000000000 = uVar9;
    FUN_05d3d7d4();
    uVar7 = FUN_06bddffc(0);
    lVar2 = FUN_06be6b04();
    if (lVar2 != 0) {
      FUN_06bf52dc(uVar6,uVar8,param_4,uVar7,uVar9,uVar10,param_5,lVar2,0);
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        FUN_06bc1cdc(*(long *)(unaff_x19 + 0x40),1,0);
        plVar5 = *(long **)(unaff_x19 + 0x58);
        if (plVar5 == (long *)0x0) {
          uVar3 = (ulong)*(uint *)(unaff_x19 + 0xa8);
        }
        else {
          lVar2 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_072adb10) {
                puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
                goto LAB_05d63884;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar3 != 0);
          }
          puVar1 = (undefined8 *)FUN_032937ac(plVar5,*(long *)PTR_DAT_072adb10,0);
LAB_05d63884:
          uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
        }
        lVar2 = 0x98;
        if (*(char *)(unaff_x19 + 0xb0) != '\0') {
          lVar2 = 0x90;
        }
        if (*(long *)(unaff_x19 + lVar2) != 0) {
          FUN_06baba68(uVar3,*(long *)(unaff_x19 + lVar2),0);
          FUN_05d634a8();
          FUN_05d638ec();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


