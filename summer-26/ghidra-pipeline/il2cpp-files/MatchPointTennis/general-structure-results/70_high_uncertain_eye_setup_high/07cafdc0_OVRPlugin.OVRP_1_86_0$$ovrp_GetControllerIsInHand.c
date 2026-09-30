/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_GetControllerIsInHand
ENTRY_POINT: 07cafdc0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_GetControllerIsInHand(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x90));
  *(undefined1 *)(unaff_x20 + 0xaca) = 1;
  lVar2 = FUN_094ae27c(0);
  if (lVar2 != 0) {
    if (((*(int *)(lVar2 + 0x18) < 1) || (*(char *)(unaff_x19 + 0x28) == '\0')) ||
       (*(char *)(unaff_x19 + 0x48) != '\0')) {
      return;
    }
    lVar2 = FUN_094ae27c(0);
    puVar1 = PTR_DAT_09f4d090;
    if (lVar2 != 0) {
      uVar6 = 0;
      do {
        if (*(int *)(lVar2 + 0x18) <= (int)uVar6) {
          return;
        }
        lVar2 = FUN_094ae27c(0);
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar6) {
LAB_07caff34:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar3 = *(long **)(lVar2 + (long)(int)uVar6 * 8 + 0x20);
        if (plVar3 == (long *)0x0) break;
        uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar1);
        }
        uVar5 = FUN_09583e48((unaff_s9 + unaff_s13) * (float)(int)uVar6 + unaff_s11,
                             (unaff_s8 + unaff_s12) * (float)(int)uVar6 + unaff_s10,uVar4,0);
        if ((uVar5 & 1) != 0) {
          FUN_07caf9e8();
          lVar2 = FUN_094ae27c(0);
          if (lVar2 == 0) break;
          if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_07caff34;
          plVar3 = *(long **)(lVar2 + (long)(int)uVar6 * 8 + 0x20);
          if (plVar3 == (long *)0x0) break;
          uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
          thunk_FUN_044bb4b4(unaff_x19 + 0x40,uVar4);
          *(undefined1 *)(unaff_x19 + 0x48) = 1;
          FUN_07caf7a0();
          FUN_07cafb24();
        }
        uVar6 = uVar6 + 1;
        lVar2 = FUN_094ae27c(0);
      } while (lVar2 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


