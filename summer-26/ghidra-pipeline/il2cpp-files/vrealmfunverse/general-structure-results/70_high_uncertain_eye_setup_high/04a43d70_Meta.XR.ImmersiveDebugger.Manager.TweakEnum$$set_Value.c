/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakEnum$$set_Value
ENTRY_POINT: 04a43d70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a43eac) */
/* WARNING: Removing unreachable block (ram,0x04a43eb8) */
/* WARNING: Removing unreachable block (ram,0x04a43fd8) */
/* WARNING: Removing unreachable block (ram,0x04a43fe8) */

undefined8 Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long *plVar6;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
LAB_04a43d74:
  lVar3 = *unaff_x23;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_1) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_04a43dbc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(unaff_x23,param_1,0);
LAB_04a43dbc:
  (*(code *)*puVar2)(unaff_x23,puVar2[1]);
  iVar1 = FUN_04a437e4();
  if (iVar1 < 0) {
    unaff_w24 = unaff_w24 + 1;
    if ((unaff_x20 & 1) == 0) goto LAB_04a43ce4;
LAB_04a43e2c:
    plVar6 = *(long **)(unaff_x29 + -0x10);
    if (plVar6 == (long *)0x0) goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__get_Value;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 == 0) goto LAB_04a43e78;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    goto LAB_04a43e60;
  }
  if (unaff_x22 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_04a440d4;
  }
  uVar4 = FUN_0527e17c();
  if ((uVar4 & 1) == 0) {
    FUN_0527e100();
    unaff_w25 = unaff_w25 + 1;
  }
LAB_04a43ce4:
  plVar6 = *(long **)(unaff_x29 + -0x10);
  if (plVar6 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_04a440d4;
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x27) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__set_Label;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(plVar6,*unaff_x27,0);
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__set_Label:
  uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if ((uVar4 & 1) == 0) goto LAB_04a43e2c;
  unaff_x23 = *(long **)(unaff_x29 + -0x10);
  if (unaff_x23 != (long *)0x0) {
    param_1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_02b76218(param_1);
    }
    goto LAB_04a43d74;
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_04a440d4;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_04a43e60:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04a43e94;
    }
  }
LAB_04a43e78:
  puVar2 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06312f78,0);
LAB_04a43e94:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
Meta_XR_ImmersiveDebugger_Manager_TweakEnum__get_Value:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return CONCAT44(unaff_w24,unaff_w25);
  }
LAB_04a440d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


