/*
FUNCTION_NAME: OVRPlugin$$get_initialized
ENTRY_POINT: 0693c5a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_initialized
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long unaff_x19;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 unaff_s10;
  undefined4 uVar12;
  
  FUN_0693c954(param_1,param_2,unaff_s10,param_3,param_4,param_3,unaff_x19 + 0x100);
  puVar2 = PTR_DAT_084b6100;
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 != 0) {
    uVar10 = *(undefined4 *)(lVar4 + 0x11c);
    uVar11 = *(undefined4 *)(lVar4 + 0x120);
                    /* try { // try from 0693c5cc to 06a3c60b has its CatchHandler @ 0693c884 */
    uVar12 = *(undefined4 *)(lVar4 + 0x124);
    uVar5 = FUN_07c98f88(lVar4,0);
    FUN_0693c954(uVar10,uVar11,uVar12,uVar5,*(undefined8 *)puVar2,uVar5,unaff_x19 + 0xf8);
    puVar3 = PTR_DAT_084b60f0;
    puVar2 = PTR_DAT_08486738;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      uVar5 = FUN_07c98f88(*(long *)(unaff_x19 + 0x10),0);
      FUN_0693c954(0,DAT_015c5928,0,uVar5,*(undefined8 *)puVar3,uVar5,unaff_x19 + 0xf0);
      plVar9 = (long *)(unaff_x19 + 0xb0);
      lVar4 = *plVar9;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar6 = FUN_07c9e200(lVar4,0,0);
      if ((uVar6 & 1) != 0) {
        plVar7 = (long *)FUN_07c95014(*(undefined8 *)PTR_DAT_084b6108,0);
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
          *plVar9 = 0;
        }
        else {
          lVar4 = *(long *)PTR_DAT_084b60c0;
          bVar1 = *(byte *)(lVar4 + 0x130);
          if (*(byte *)(*plVar7 + 0x130) < bVar1) {
            plVar8 = (long *)0x0;
          }
          else {
            plVar8 = plVar7;
            if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
              plVar8 = (long *)0x0;
            }
          }
          *plVar9 = (long)plVar8;
          if (*(byte *)(*plVar7 + 0x130) < bVar1) {
            plVar7 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
            plVar7 = (long *)0x0;
          }
        }
        thunk_FUN_03afed3c(plVar9,plVar7);
      }
      lVar4 = *plVar9;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar6 = FUN_07c9c218(lVar4,0,0);
      if ((uVar6 & 1) != 0) {
        if (*plVar9 == 0) goto LAB_0693c950;
        uVar5 = FUN_07c379b4(*plVar9,*(undefined8 *)PTR_DAT_0848cbe0,0);
        puVar2 = PTR_DAT_084b60c8;
        uVar5 = FUN_044c8b18(uVar5,*(undefined8 *)PTR_DAT_084b60c8);
        *(undefined8 *)(unaff_x19 + 0xb8) = uVar5;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xb8),uVar5);
        if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0693c950;
        uVar5 = FUN_07c379b4(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b6120,0);
        uVar5 = FUN_044c8b18(uVar5,*(undefined8 *)puVar2);
        *(undefined8 *)(unaff_x19 + 0xc0) = uVar5;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xc0),uVar5);
        if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0693c950;
        uVar5 = FUN_07c379b4(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b60e0,0);
        uVar5 = FUN_044c8b18(uVar5,*(undefined8 *)puVar2);
        *(undefined8 *)(unaff_x19 + 200) = uVar5;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 200),uVar5);
        if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0693c950;
        uVar5 = FUN_07c379b4(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b60f8,0);
        uVar5 = FUN_044c8b18(uVar5,*(undefined8 *)puVar2);
        *(undefined8 *)(unaff_x19 + 0xd8) = uVar5;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xd8),uVar5);
        if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0693c950;
        uVar5 = FUN_07c379b4(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b60e8,0);
        uVar5 = FUN_044c8b18(uVar5,*(undefined8 *)puVar2);
        *(undefined8 *)(unaff_x19 + 0xd0) = uVar5;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xd0),uVar5);
        if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0693c950;
        FUN_07c37db0(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b6130,unaff_x19 + 0x120,0
                    );
      }
      puVar2 = PTR_DAT_084883a0;
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x38);
        uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
        FUN_07cb26a0();
        if (lVar4 != 0) {
          FUN_07cb2770(lVar4,uVar5,0);
          if (*(long *)(unaff_x19 + 0x10) != 0) {
            lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
            uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
            FUN_07cb26a0();
            if (lVar4 != 0) {
              FUN_07cb2770(lVar4,uVar5,0);
              if (*(long *)(unaff_x19 + 0x10) != 0) {
                lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48);
                uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
                FUN_07cb26a0();
                if (lVar4 != 0) {
                  FUN_07cb2770(lVar4,uVar5,0);
                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                    *(undefined1 *)(*(long *)(unaff_x19 + 0x18) + 0x19) = 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0693c950:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


