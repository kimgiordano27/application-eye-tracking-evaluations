/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Create
ENTRY_POINT: 04a4f74c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Create(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  FUN_04a4f630(param_1,param_2,*(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x18));
  if (unaff_x21 == (long *)0x0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar6 = thunk_FUN_02b79644();
    uVar7 = thunk_FUN_02ba3594(PTR_DAT_0631f060);
    FUN_04cee07c(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar6);
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  if (*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar3 + 0x130)) {
    lVar8 = *(long *)(unaff_x19 + 0x20);
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)
    {
      uVar9 = FUN_04a530f4();
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((uVar9 & 1) != 0) {
        FUN_04a4f98c();
        return;
      }
    }
  }
  lVar3 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x60);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    FUN_02b76218(lVar3);
  }
  plVar4 = (long *)thunk_FUN_02b79548();
  if (plVar4 != (long *)0x0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04a4f88c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar4,lVar3,0);
LAB_04a4f88c:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  FUN_04a51d40();
  FUN_04a50858();
  iVar1 = *(int *)(unaff_x20 + 0x20);
  if (0 < iVar1) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(*(long *)(unaff_x20 + 0x18) + 0x18) / iVar1;
    }
    if (3 < iVar2) {
      FUN_04a51b3c();
      return;
    }
  }
  return;
}


