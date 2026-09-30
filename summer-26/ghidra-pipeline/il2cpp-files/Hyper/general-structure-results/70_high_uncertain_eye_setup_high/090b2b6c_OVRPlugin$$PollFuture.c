/*
FUNCTION_NAME: OVRPlugin$$PollFuture
ENTRY_POINT: 090b2b6c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__PollFuture(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined4 extraout_s0;
  undefined4 uVar6;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000000 = param_1;
  uStack0000000000000010 = param_2;
  FUN_0908d078();
  FUN_0a16abe8(0);
  lVar1 = FUN_0a17834c();
  uVar6 = extraout_s0;
  if (lVar1 != 0) {
    uVar6 = FUN_0a18aea0(lVar1,0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_0a148064(*(long *)(unaff_x19 + 0x40),1,0);
      plVar5 = *(long **)(unaff_x19 + 0x58);
      if (plVar5 == (long *)0x0) {
        uVar6 = *(undefined4 *)(unaff_x19 + 0xa8);
      }
      else {
        lVar1 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac75ab8) {
              puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_090b2c38;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac75ab8,0);
LAB_090b2c38:
        uVar6 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      }
      lVar1 = 0x98;
      if (*(char *)(unaff_x19 + 0xb0) != '\0') {
        lVar1 = 0x90;
      }
      if (*(long *)(unaff_x19 + lVar1) != 0) {
        FUN_0a12f64c(*(long *)(unaff_x19 + lVar1),0);
        FUN_090b285c();
        FUN_090b2ca0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c(uVar6);
}


