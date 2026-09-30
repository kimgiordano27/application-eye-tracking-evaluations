/*
FUNCTION_NAME: OVRPlugin.OVRP_1_69_0$$.cctor
ENTRY_POINT: 03173088
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_OVRP_1_69_0___cctor(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  float fVar6;
  
  thunk_FUN_01ad9084();
  *(undefined1 *)(unaff_x20 + 0x10b) = 1;
  lVar1 = FUN_03171b2c();
  if (lVar1 == 0) {
    fVar6 = 1.0;
  }
  else {
    plVar2 = (long *)FUN_03171b2c();
    if (plVar2 == (long *)0x0) goto LAB_03173158;
    lVar1 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_13568) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0317310c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*(long *)StringLiteral_13568,0);
LAB_0317310c:
    lVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar1 == 0) goto LAB_03173158;
    fVar6 = (float)FUN_0392a7f0(lVar1,0);
  }
  lVar1 = FUN_024eb298();
  if (lVar1 != 0) {
    return fVar6 * *(float *)(lVar1 + 0x60);
  }
LAB_03173158:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


