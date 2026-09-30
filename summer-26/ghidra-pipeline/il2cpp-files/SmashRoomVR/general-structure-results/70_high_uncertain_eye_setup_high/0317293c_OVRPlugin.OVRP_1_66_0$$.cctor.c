/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$.cctor
ENTRY_POINT: 0317293c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0___cctor(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  uint uVar9;
  long unaff_x20;
  long *plVar10;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_01b4f09c();
  plVar10 = *(long **)(unaff_x19 + 0x68);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar1 = *(undefined4 *)(unaff_x19 + 0x50);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 03172974 to 0327297b has its CatchHandler @ 03172b04 */
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_13594) {
                    /* try { // try from 031729a0 to 032729b3 has its CatchHandler @ 03172b08 */
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_031729a4;
        }
                    /* try { // try from 0317297c to 0327299f has its CatchHandler @ 03172b0c */
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)StringLiteral_13594,0);
LAB_031729a4:
    uVar4 = (*(code *)*puVar3)(plVar10,uVar1,puVar3[1]);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x20 + 0x20),uVar4);
    if (*(char *)(unaff_x19 + 0x54) != '\0') {
      lVar6 = FUN_0391c2b8();
      if ((lVar6 == 0) ||
         (lVar6 = FUN_01ed7d50(lVar6,*(undefined8 *)StringLiteral_4012), lVar6 == 0))
      goto LAB_03172a44;
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar2) {
        uVar9 = 0;
        do {
          if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar5 = *(long *)(lVar6 + (long)(int)uVar9 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_03172a44;
          FUN_038fe3fc(lVar5,0,0);
          uVar2 = *(uint *)(lVar6 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar2);
      }
    }
    return;
  }
LAB_03172a44:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


