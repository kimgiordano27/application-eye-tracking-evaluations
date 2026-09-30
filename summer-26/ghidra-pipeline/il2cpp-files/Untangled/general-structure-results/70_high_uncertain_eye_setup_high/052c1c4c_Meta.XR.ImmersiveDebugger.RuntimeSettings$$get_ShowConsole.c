/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ShowConsole
ENTRY_POINT: 052c1c4c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ShowConsole(long param_1)

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
  int unaff_w24;
  long *unaff_x25;
  undefined8 uVar8;
  long *unaff_x29;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  do {
                    /* try { // try from 052c1c4c to 053c1c57 has its CatchHandler @ 052c1ea4 */
    puVar5 = *(undefined4 **)(param_1 + 0xb8);
    uVar11 = (ulong)(uint)puVar5[1];
    uVar13 = (ulong)(uint)puVar5[2];
    FUN_052c1f7c(*puVar5,uVar11,uVar13);
    do {
      unaff_w24 = unaff_w24 + 1;
      if (*(int *)(unaff_x23 + 0x18) <= unaff_w24) {
        return 0;
      }
      FUN_0407af38();
      if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_052c1da4;
      uVar9 = FUN_066d31a4(*(long *)(unaff_x21 + 0x10),0);
      uVar14 = *(undefined4 *)(unaff_x19 + 0x28);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x60);
      uVar3 = FUN_066ca064(*(undefined4 *)(unaff_x19 + 0x58),0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x29);
      }
      uVar10 = uVar11;
      uVar12 = uVar13;
      uVar4 = FUN_0673f798(uVar9,uVar11,uVar13,uVar14,uVar8,uVar3,1,0);
      if (0 < (int)uVar4) {
        if (*(char *)(unaff_x19 + 0x52) != '\0') {
          FUN_052c1f7c(uVar9,uVar11,uVar13);
        }
        puVar2 = PTR_DAT_06d3d400;
        puVar1 = PTR_DAT_06d02708;
        if (*(char *)(unaff_x19 + 0x53) == '\0')
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MeshRendererLayer;
        uVar7 = 0;
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowErrorLog;
      }
      uVar11 = uVar10;
      uVar13 = uVar12;
    } while (*(char *)(unaff_x19 + 0x52) == '\0');
    if (DAT_071babf5 == '\0') {
      FUN_02f07e70();
      DAT_071babf5 = '\x01';
    }
    param_1 = *unaff_x25;
  } while( true );
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowErrorLog:
  do {
    if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_052c1da4;
    uVar8 = FUN_066cd398(*(long *)(unaff_x21 + 0x10),0);
    lVar6 = *(long *)(unaff_x19 + 0x60);
    if (lVar6 == 0) goto LAB_052c1da4;
    if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar6 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_052c1da4;
    uVar9 = FUN_066cd398(lVar6,0);
    uVar8 = FUN_05465414(uVar8,*(undefined8 *)puVar2,uVar9,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar1);
    }
    FUN_06693690(uVar8,0);
    uVar7 = uVar7 + 1;
  } while (uVar4 != uVar7);
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


