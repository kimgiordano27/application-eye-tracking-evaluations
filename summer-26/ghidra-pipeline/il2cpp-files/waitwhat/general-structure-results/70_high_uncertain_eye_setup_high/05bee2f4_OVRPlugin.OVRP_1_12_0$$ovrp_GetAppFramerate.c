/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetAppFramerate
ENTRY_POINT: 05bee2f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_03188a78();
  *(undefined1 *)(unaff_x21 + 0xd9b) = 1;
  puVar1 = PTR_DAT_07112178;
  uVar7 = 0;
  while (plVar8 = *(long **)(unaff_x20 + 0x38), plVar8 != (long *)0x0) {
    lVar3 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05bee368;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar1,0);
LAB_05bee368:
    puVar2 = (undefined8 *)(*(code *)*puVar2)(plVar8,uVar7 & 0xffffffff,puVar2[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) break;
    uStack0000000000000008 = (undefined4)puVar2[1];
    uStack000000000000000c = (undefined4)((ulong)puVar2[1] >> 0x20);
    uStack0000000000000004 = (undefined4)((ulong)*puVar2 >> 0x20);
    if (*(uint *)(lVar3 + 0x18) <= uVar7) {
LAB_05bee414:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar3 = lVar3 + uVar7 * 0x1c;
    *(ulong *)(lVar3 + 0x20) = CONCAT44(uStack0000000000000008,uStack0000000000000004);
    *(undefined4 *)(lVar3 + 0x28) = uStack000000000000000c;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (((lVar3 == 0) || (unaff_x19 == 0)) || (lVar5 = *(long *)(unaff_x19 + 0x38), lVar5 == 0))
    break;
    if ((*(uint *)(lVar5 + 0x18) <= uVar7) || (*(uint *)(lVar3 + 0x18) <= uVar7)) goto LAB_05bee414;
    lVar3 = lVar3 + uVar7 * 0x1c;
    lVar5 = lVar5 + uVar7 * 0x10;
    uVar7 = uVar7 + 1;
    uVar9 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar3 + 0x2c) = uVar9;
    if (uVar7 == 0x18) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


