/*
FUNCTION_NAME: OVRManager$$add_SpaceSaveComplete
ENTRY_POINT: 06366310
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_SpaceSaveComplete(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x24;
  
  uVar3 = (*in_x9)();
  if ((uVar3 & 1) == 0) {
    lVar8 = *(long *)(unaff_x19 + 0x30);
    uVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db34c8);
    FUN_049ce6c0(uVar4,*(undefined8 *)PTR_DAT_07db34c0);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(lVar8 + 0xe0);
      *puVar9 = uVar4;
      thunk_FUN_037aeb94(puVar9,uVar4);
      uVar4 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_07d963d8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar8 = FUN_063275d4(uVar4,0);
      puVar2 = PTR_DAT_07db3528;
      puVar1 = PTR_DAT_07d96690;
      if ((lVar8 != 0) && (lVar5 = *(long *)(lVar8 + 0x20), lVar5 != 0)) {
        uVar3 = 0;
        while( true ) {
          if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar3) goto LAB_06365fc4;
          lVar5 = *(long *)(lVar8 + 0x18);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          uVar4 = *(undefined8 *)(lVar5 + uVar3 * 8 + 0x20);
          uVar10 = *unaff_x20;
          if (*(int *)(*(long *)(unaff_x24 + 0x98) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar4 = FUN_062772f0(uVar10,uVar4,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)puVar1);
          }
          uVar4 = FUN_063853bc(uVar4,0);
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (plVar11 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar11 == (long *)0x0))
          break;
          lVar5 = *plVar11;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_06366474;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar2,2);
LAB_06366474:
          (*(code *)*puVar9)(plVar11,uVar4,puVar9[1]);
          lVar5 = *(long *)(lVar8 + 0x20);
          uVar3 = uVar3 + 1;
          if (lVar5 == 0) break;
        }
      }
    }
  }
  else {
LAB_06365fc4:
    lVar8 = FUN_0636579c();
    if (lVar8 != 0) {
      return *(undefined8 *)(lVar8 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


