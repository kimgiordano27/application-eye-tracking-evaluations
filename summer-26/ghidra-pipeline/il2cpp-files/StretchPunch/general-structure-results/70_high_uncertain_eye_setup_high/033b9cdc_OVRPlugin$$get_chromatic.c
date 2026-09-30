/*
FUNCTION_NAME: OVRPlugin$$get_chromatic
ENTRY_POINT: 033b9cdc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__get_chromatic(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int unaff_w19;
  long *unaff_x20;
  int unaff_w21;
  long *plVar9;
  
  FUN_033b96a8(param_1,param_2,unaff_w21);
  puVar1 = StringLiteral_2464;
                    /* try { // try from 033b9ce4 to 034b9cef has its CatchHandler @ 033b9414 */
  if (unaff_w21 <= unaff_w19) {
LAB_033b9e1c:
    FUN_033b96a8();
    return unaff_w19;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b9cf0 with catch @ 033b9cfc
                        */
  while (*unaff_x20 != 0) {
    plVar9 = (long *)unaff_x20[2];
    unaff_w19 = unaff_w19 + 1;
    uVar3 = FUN_033aae5c(*unaff_x20,unaff_w19);
    if (plVar9 == (long *)0x0) break;
    lVar6 = *plVar9;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_033b9d64;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc(plVar9,lVar5,0);
LAB_033b9d64:
    iVar2 = (*(code *)*puVar4)(plVar9,uVar3);
    if (-1 < iVar2) {
      do {
        if (*unaff_x20 == 0) goto LAB_033b9e48;
        plVar9 = (long *)unaff_x20[2];
        unaff_w21 = unaff_w21 + -1;
        FUN_033aae5c(*unaff_x20,unaff_w21);
        if (plVar9 == (long *)0x0) goto LAB_033b9e48;
        lVar6 = *plVar9;
        lVar5 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_033b9de8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01dde8fc(plVar9,lVar5,0);
LAB_033b9de8:
        iVar2 = (*(code *)*puVar4)(plVar9);
      } while (iVar2 < 0);
      if (unaff_w21 <= unaff_w19) goto LAB_033b9e1c;
      FUN_033b96a8();
    }
  }
LAB_033b9e48:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


