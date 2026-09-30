/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$.cctor
ENTRY_POINT: 090cca14
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0___cctor(long param_1)

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
  long unaff_x20;
  long lVar9;
  long *plVar10;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x230));
  FUN_04947ee4(PTR_DAT_0ac79648);
  FUN_04947ee4(PTR_DAT_0ac761b8);
  *(undefined1 *)(unaff_x20 + 0x50c) = 1;
  FUN_084e0fd8();
  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x98), lVar9 != 0)) {
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(unaff_x19 + 0x80);
    thunk_FUN_049ee3d8();
    plVar10 = *(long **)(unaff_x19 + 0x70);
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      uVar1 = *(undefined4 *)(unaff_x19 + 0x50);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac761b8) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_090ccac8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac761b8,0);
LAB_090ccac8:
      uVar4 = (*(code *)*puVar3)(plVar10,uVar1,puVar3[1]);
      *(undefined8 *)(lVar9 + 0x20) = uVar4;
      thunk_FUN_049ee3d8((undefined8 *)(lVar9 + 0x20),uVar4);
      if (*(char *)(unaff_x19 + 0x54) != '\0') {
        lVar9 = FUN_0a178414();
        if ((lVar9 == 0) ||
           (lVar9 = FUN_05bdf37c(lVar9,*(undefined8 *)PTR_DAT_0ac79648), lVar9 == 0))
        goto LAB_090ccb68;
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar2) {
          lVar6 = 0;
          do {
            if (uVar2 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_04948194();
            }
            lVar5 = *(long *)(lVar9 + 0x20 + lVar6 * 8);
            if (lVar5 == 0) goto LAB_090ccb68;
            FUN_0a148064(lVar5,0,0);
            uVar2 = *(uint *)(lVar9 + 0x18);
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < (int)uVar2);
        }
      }
      return;
    }
  }
LAB_090ccb68:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


