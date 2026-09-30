/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_GetInsightPassthroughInitializationState
ENTRY_POINT: 031728d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0__ovrp_GetInsightPassthroughInitializationState(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  
  puVar3 = StringLiteral_13592;
  if ((DAT_03ff20ff & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13592);
    thunk_FUN_01ad9084(StringLiteral_4012);
    thunk_FUN_01ad9084(StringLiteral_13594);
    DAT_03ff20ff = 1;
  }
  FUN_024eaee4(param_1,*(undefined8 *)puVar3);
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0x88), lVar10 != 0)) {
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(param_1 + 0x78);
    thunk_FUN_01b4f09c();
    plVar11 = *(long **)(param_1 + 0x68);
    if (plVar11 != (long *)0x0) {
      lVar6 = *plVar11;
      uVar1 = *(undefined4 *)(param_1 + 0x50);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_13594) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_031729a4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)StringLiteral_13594,0);
LAB_031729a4:
      uVar5 = (*(code *)*puVar4)(plVar11,uVar1,puVar4[1]);
      *(undefined8 *)(lVar10 + 0x20) = uVar5;
      thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x20),uVar5);
      if (*(char *)(param_1 + 0x54) != '\0') {
        lVar10 = FUN_0391c2b8(param_1,0);
        if ((lVar10 == 0) ||
           (lVar10 = FUN_01ed7d50(lVar10,*(undefined8 *)StringLiteral_4012), lVar10 == 0))
        goto LAB_03172a44;
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar2) {
          uVar9 = 0;
          do {
            if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            lVar6 = *(long *)(lVar10 + (long)(int)uVar9 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_03172a44;
            FUN_038fe3fc(lVar6,0,0);
            uVar2 = *(uint *)(lVar10 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar2);
        }
      }
      return;
    }
  }
LAB_03172a44:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


