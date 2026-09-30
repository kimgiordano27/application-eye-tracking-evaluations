/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 090c7d80
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


void OVRPlugin_OVRP_1_84_0__ovrp_QplCreateMarkerHandle(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  FUN_04947ee4();
  *(undefined1 *)(unaff_x20 + 0x4cb) = 1;
  FUN_084d7914();
  puVar2 = PTR_DAT_0ac78e90;
  puVar1 = PTR_DAT_0ac0f100;
  lVar6 = *(long *)(unaff_x19 + 0x88);
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar5) {
        return;
      }
      uVar3 = FUN_04947fd0(*(undefined8 *)puVar2,*(undefined4 *)(unaff_x19 + 0x80));
      if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_090c7e8c:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      *(undefined8 *)(lVar6 + uVar5 * 8 + 0x20) = uVar3;
      thunk_FUN_049ee3d8();
      if (0 < *(int *)(unaff_x19 + 0x80)) {
        uVar7 = 0;
        do {
          lVar6 = *(long *)(unaff_x19 + 0x88);
          if (lVar6 == 0) goto LAB_090c7e70;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_090c7e8c;
          lVar6 = *(long *)(lVar6 + uVar5 * 8 + 0x20);
          if (DAT_0b31f57b == '\0') {
            FUN_04947ee4(puVar1);
            DAT_0b31f57b = '\x01';
          }
          if (lVar6 == 0) goto LAB_090c7e70;
          if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_090c7e8c;
          puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          uVar3 = *puVar4;
          lVar6 = lVar6 + uVar7 * 0x10;
          uVar7 = uVar7 + 1;
          *(undefined8 *)(lVar6 + 0x28) = puVar4[1];
          *(undefined8 *)(lVar6 + 0x20) = uVar3;
        } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x80));
      }
      lVar6 = *(long *)(unaff_x19 + 0x88);
      uVar5 = uVar5 + 1;
    } while (lVar6 != 0);
  }
LAB_090c7e70:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


