/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$CalculateViewMatrix
ENTRY_POINT: 08a70bc8
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__CalculateViewMatrix(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long lVar8;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar1 = *unaff_x20;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar1 = *unaff_x20;
  }
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20), lVar4 != 0)) {
    plVar7 = (long *)**(undefined8 **)(lVar1 + 0xb8);
    uVar2 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac54238,*(undefined8 *)(lVar4 + 0x20),
                         *(undefined8 *)PTR_DAT_0ac0a4c0,0);
    if (plVar7 != (long *)0x0) {
      lVar1 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac46ed8) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_08a70ca4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a70ca4:
      (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
      lVar1 = *(long *)(unaff_x19 + 0x28);
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar1 == 0) {
        lVar1 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
        FUN_08cc3ad0();
        *(long *)(unaff_x19 + 0x28) = lVar1;
        thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x28),lVar1);
      }
      lVar8 = *(long *)(unaff_x19 + 0x30);
      if (lVar8 == 0) {
        lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac524a0);
        FUN_089c54f8();
        *(long *)(unaff_x19 + 0x30) = lVar8;
        thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x30),lVar8);
      }
      if (lVar4 != 0) {
        FUN_08a6d3d4(lVar4,lVar1,lVar8);
        lVar1 = *(long *)(unaff_x19 + 0x18);
        if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x08a70d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar1 + 0x18))
                    (*(undefined8 *)(lVar1 + 0x40),2,0,*(undefined8 *)(lVar1 + 0x28));
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


