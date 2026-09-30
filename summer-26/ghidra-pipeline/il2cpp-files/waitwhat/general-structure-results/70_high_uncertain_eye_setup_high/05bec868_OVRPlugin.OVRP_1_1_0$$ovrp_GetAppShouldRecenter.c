/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppShouldRecenter
ENTRY_POINT: 05bec868
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppShouldRecenter(void)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  long lVar11;
  
  FUN_03188a78();
  *(undefined1 *)(unaff_x20 + 0xd76) = 1;
  FUN_0506e2e8();
  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x88), lVar11 != 0)) {
    plVar10 = *(long **)(unaff_x19 + 0x70);
    *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(unaff_x19 + 0x80);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar1 = *(undefined4 *)(unaff_x19 + 0x50);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07112ae0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05bec8f8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)PTR_DAT_07112ae0,0);
LAB_05bec8f8:
      uVar5 = (*(code *)*puVar4)(plVar10,uVar1,puVar4[1]);
      cVar3 = *(char *)(unaff_x19 + 0x54);
      *(undefined8 *)(lVar11 + 0x20) = uVar5;
      if (cVar3 != '\0') {
        lVar11 = FUN_069d3b50();
        if ((lVar11 == 0) ||
           (lVar11 = FUN_03ac393c(lVar11,*(undefined8 *)PTR_DAT_07116c88), lVar11 == 0))
        goto LAB_05bec98c;
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar2) {
          lVar7 = 0;
          do {
            if (uVar2 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            lVar6 = *(long *)(lVar11 + 0x20 + lVar7 * 8);
            if (lVar6 == 0) goto LAB_05bec98c;
            FUN_069a0b64(lVar6,0,0);
            uVar2 = *(uint *)(lVar11 + 0x18);
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < (int)uVar2);
        }
      }
      return;
    }
  }
LAB_05bec98c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


