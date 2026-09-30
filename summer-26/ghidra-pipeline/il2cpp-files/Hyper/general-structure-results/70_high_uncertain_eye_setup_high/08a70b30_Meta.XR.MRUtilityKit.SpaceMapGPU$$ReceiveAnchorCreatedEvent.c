/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$ReceiveAnchorCreatedEvent
ENTRY_POINT: 08a70b30
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__ReceiveAnchorCreatedEvent(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x228));
  FUN_04947ee4(PTR_DAT_0ac54230);
  FUN_04947ee4(PTR_DAT_0ac0a4c0);
  FUN_04947ee4(PTR_DAT_0ac54238);
  FUN_04947ee4(PTR_DAT_0ac46ed8);
  *(undefined1 *)(unaff_x20 + 0x5ec) = 1;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar2 = FUN_08a6f3a8();
    puVar1 = PTR_DAT_0ac46eb8;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (DAT_0b32acf7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac46eb8);
        DAT_0b32acf7 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar6 = *(long *)puVar1;
      }
      if ((*(long *)(unaff_x19 + 0x10) != 0) &&
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20), lVar7 != 0)) {
        plVar3 = (long *)**(undefined8 **)(lVar6 + 0xb8);
        uVar4 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac54238,*(undefined8 *)(lVar7 + 0x20),
                             *(undefined8 *)PTR_DAT_0ac0a4c0,0);
        if (plVar3 != (long *)0x0) {
          lVar6 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac46ed8) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                goto LAB_08a70ca4;
              }
              uVar2 = uVar2 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar2 != 0);
          }
          puVar5 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a70ca4:
          (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
          lVar6 = *(long *)(unaff_x19 + 0x28);
          lVar7 = *(long *)(unaff_x19 + 0x10);
          if (lVar6 == 0) {
            lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
            FUN_08cc3ad0();
            *(long *)(unaff_x19 + 0x28) = lVar6;
            thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x28),lVar6);
          }
          lVar9 = *(long *)(unaff_x19 + 0x30);
          if (lVar9 == 0) {
            lVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac524a0);
            FUN_089c54f8();
            *(long *)(unaff_x19 + 0x30) = lVar9;
            thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x30),lVar9);
          }
          if (lVar7 != 0) {
            FUN_08a6d3d4(lVar7,lVar6,lVar9);
            lVar6 = *(long *)(unaff_x19 + 0x18);
            if (lVar6 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x08a70d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),2,0,*(undefined8 *)(lVar6 + 0x28));
            return;
          }
        }
      }
    }
    else {
      plVar3 = *(long **)(unaff_x19 + 0x10);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
        lVar6 = *(long *)(unaff_x19 + 0x20);
        if (lVar6 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x08a70bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


