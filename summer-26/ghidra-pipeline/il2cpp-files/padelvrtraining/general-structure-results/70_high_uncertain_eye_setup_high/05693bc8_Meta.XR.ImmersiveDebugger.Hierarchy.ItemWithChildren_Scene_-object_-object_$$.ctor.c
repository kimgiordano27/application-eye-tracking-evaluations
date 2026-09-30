/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<Scene,-object,-object>$$.ctor
ENTRY_POINT: 05693bc8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<Scene,_object,_object>___ctor
               (long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  long lVar10;
  long lVar11;
  long unaff_x29;
  
  lVar9 = (long)&stack0x00000000 -
          ((ulong)*(uint *)(*(long *)(param_1 + 0x70) + 0xfc) + 0xf & 0x1fffffff0);
  lVar10 = lVar9 - ((ulong)*(uint *)(*(long *)(param_1 + 0x80) + 0xfc) + 0xf & 0x1fffffff0);
  lVar11 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    FUN_03d8f26c(param_3);
  }
  puVar1 = (undefined8 *)FUN_03d2d438();
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    FUN_03d8f26c(lVar6);
  }
  puVar2 = (undefined8 *)FUN_03d2d438();
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  puVar3 = (undefined8 *)FUN_03d2d438(*(undefined8 *)(unaff_x29 + -0x50),lVar6);
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  puVar4 = (undefined8 *)FUN_03d2d438(*(undefined8 *)(unaff_x29 + -0x48),lVar6);
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  puVar5 = (undefined8 *)FUN_03d2d438(*(undefined8 *)(unaff_x29 + -0x40),lVar6,lVar9);
  if (lVar11 != 0) {
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    if (-1 < *(int *)(*(long *)(lVar9 + 0x50) + 0x28)) {
      puVar1 = (undefined8 *)*puVar1;
    }
    if (-1 < *(int *)(*(long *)(lVar9 + 0x58) + 0x28)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    puVar7 = *(undefined8 **)(lVar9 + 0x78);
    if (-1 < *(int *)(*(long *)(lVar9 + 0x60) + 0x28)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    uVar8 = *puVar7;
    if (-1 < *(int *)(*(long *)(lVar9 + 0x68) + 0x28)) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if (-1 < *(int *)(*(long *)(lVar9 + 0x70) + 0x28)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    *(undefined8 **)(unaff_x29 + -0x38) = puVar1;
    *(undefined8 **)(unaff_x29 + -0x30) = puVar2;
    *(undefined8 **)(unaff_x29 + -0x28) = puVar3;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    *(long *)(unaff_x29 + -0x10) = lVar10;
    (*(code *)puVar7[2])(uVar8,puVar7,lVar11,unaff_x29 + -0x38,lVar10);
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80),lVar10)
    ;
    if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


