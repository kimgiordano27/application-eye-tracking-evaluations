/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ImmersiveDebuggerEnabled
ENTRY_POINT: 052c1b7c
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ImmersiveDebuggerEnabled
          (undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x21;
  uint uVar7;
  long unaff_x23;
  int iVar8;
  undefined8 uVar9;
  undefined8 *unaff_x29;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  puVar1 = PTR_DAT_06d02c10;
  plVar10 = (long *)*unaff_x29;
  iVar8 = 0;
  while( true ) {
    FUN_0407af38();
    if (*(long *)(unaff_x21 + 0x10) == 0) break;
    uVar11 = FUN_066d31a4(*(long *)(unaff_x21 + 0x10),0);
    uVar14 = *(undefined4 *)(unaff_x19 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar3 = FUN_066ca064(*(undefined4 *)(unaff_x19 + 0x58),0);
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*plVar10);
    }
    uVar12 = param_2;
    uVar13 = param_3;
    uVar4 = FUN_0673f798(uVar11,param_2,param_3,uVar14,uVar9,uVar3,1,0);
    if (0 < (int)uVar4) {
      if (*(char *)(unaff_x19 + 0x52) != '\0') {
        FUN_052c1f7c(uVar11,param_2,param_3);
      }
      puVar2 = PTR_DAT_06d3d400;
      puVar1 = PTR_DAT_06d02708;
      if (*(char *)(unaff_x19 + 0x53) == '\0')
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MeshRendererLayer;
      uVar7 = 0;
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowErrorLog;
    }
    if (*(char *)(unaff_x19 + 0x52) != '\0') {
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(puVar1);
        DAT_071babf5 = '\x01';
      }
      puVar5 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      uVar12 = (ulong)(uint)puVar5[1];
      uVar13 = (ulong)(uint)puVar5[2];
      FUN_052c1f7c(*puVar5);
    }
    iVar8 = iVar8 + 1;
    param_2 = uVar12;
    param_3 = uVar13;
    if (*(int *)(unaff_x23 + 0x18) <= iVar8) {
      return 0;
    }
  }
  goto LAB_052c1da4;
  while( true ) {
    uVar9 = FUN_066cd398(*(long *)(unaff_x21 + 0x10),0);
    lVar6 = *(long *)(unaff_x19 + 0x60);
    if (lVar6 == 0) goto LAB_052c1da4;
    if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar6 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_052c1da4;
    uVar11 = FUN_066cd398(lVar6,0);
    uVar9 = FUN_05465414(uVar9,*(undefined8 *)puVar2,uVar11,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar1);
    }
    FUN_06693690(uVar9,0);
    uVar7 = uVar7 + 1;
    if (uVar4 == uVar7) break;
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowErrorLog:
    if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_052c1da4;
  }
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MeshRendererLayer:
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    FUN_066d3f5c(*(long *)(unaff_x21 + 0x10),0);
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      FUN_066d4bec(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                   *(long *)(unaff_x21 + 0x10),0);
      return 1;
    }
  }
LAB_052c1da4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


