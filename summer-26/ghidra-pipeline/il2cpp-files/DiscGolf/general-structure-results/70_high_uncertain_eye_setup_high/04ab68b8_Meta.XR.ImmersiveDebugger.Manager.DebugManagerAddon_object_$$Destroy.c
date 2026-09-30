/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManagerAddon<object>$$Destroy
ENTRY_POINT: 04ab68b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04ab6a34) */

void Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<object>__Destroy(ulong param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x22 + 0x38);
  if (lVar4 == 0) {
Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<object>__InitSubManagers:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (unaff_w21 < *(uint *)(lVar4 + 0x18)) {
    if (*(long *)(unaff_x22 + 0x30) == 0)
    goto Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<object>__InitSubManagers;
    if (unaff_w21 < *(uint *)(*(long *)(unaff_x22 + 0x30) + 0x18)) {
      lVar4 = lVar4 + 0x20;
      if (*(char *)(lVar4 + (long)(int)unaff_w21 * 0x28 + 0x20) == '\0') {
        lVar6 = 0;
      }
      else {
        lVar6 = unaff_x20 - *(long *)(lVar4 + (long)(int)unaff_w21 * 0x28);
      }
      iVar1 = *(int *)(lVar4 + (long)(int)unaff_w21 * 0x28 + 0x24);
      FUN_064b5f98();
      plVar2 = (long *)FUN_0489828c((double)((float)(lVar6 + (-iVar1 & iVar1 >> 0x1f)) / 1000.0),0,0
                                    ,*(undefined8 *)PTR_DAT_06a11278);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar2[7] = (long)unaff_x19;
      LeanTween__value();
      (**(code **)(*unaff_x19 + 0x188))();
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04ab6a00;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02dd004c(plVar2,*(long *)PTR_DAT_069fbff0,0);
LAB_04ab6a00:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


