/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$LateUpdate
ENTRY_POINT: 052de690
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  long lVar11;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  FUN_02f07e70(PTR_DAT_06d02708);
  FUN_02f07e70(PTR_DAT_06d3d830);
  FUN_02f07e70(PTR_DAT_06d3d578);
  FUN_02f07e70(PTR_DAT_06d3d630);
  FUN_02f07e70(PTR_DAT_06d089c0);
  FUN_02f07e70(PTR_DAT_06d01e20);
  FUN_02f07e70(PTR_DAT_06d3d838);
  *(undefined1 *)(unaff_x20 + 0x117) = 1;
  FUN_052c8b90();
  plVar10 = (long *)(unaff_x19 + 0x78);
  lVar11 = *plVar10;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066cd30c(lVar11,0);
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_037f1cb8();
    *(undefined8 *)(unaff_x19 + 0x78) = uVar5;
    thunk_FUN_02f411dc(plVar10,uVar5);
  }
  lVar11 = *plVar10;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066cd30c(lVar11,0);
  if ((uVar4 & 1) != 0) {
    if (*plVar10 == 0) goto LAB_052de970;
    uVar4 = FUN_067418c4(*plVar10,0);
    if (((uVar4 & 1) == 0) && (*(char *)(unaff_x19 + 0x150) == '\0')) {
      if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_06694324(*(undefined8 *)PTR_DAT_06d3d838,0);
    }
  }
  uVar4 = FUN_0546b9c0(*(undefined8 *)(unaff_x19 + 0x148),0);
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_0667eb48(*(undefined8 *)(unaff_x19 + 0x148),0);
    in_stack_00000008 = 0;
    FUN_0431f26c(&stack0x00000008,uVar3,*(undefined8 *)PTR_DAT_06d089c0);
    *(undefined8 *)(unaff_x19 + 0x1bc) = in_stack_00000008;
  }
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x58) + 0x18) != 0) {
LAB_052de8a8:
      FUN_052de974();
      if ((*(long *)(unaff_x19 + 0x130) == 0) ||
         (*(long *)(*(long *)(unaff_x19 + 0x130) + 0x18) == 0)) {
        uVar5 = FUN_037f2110();
        *(undefined8 *)(unaff_x19 + 0x130) = uVar5;
        thunk_FUN_02f411dc(unaff_x19 + 0x130,uVar5);
      }
      puVar2 = PTR_DAT_06d08068;
      lVar11 = *(long *)(unaff_x19 + 0xe0);
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) {
        uVar5 = FUN_037f2110();
        *(undefined8 *)(unaff_x19 + 0xe0) = uVar5;
        thunk_FUN_02f411dc((long *)(unaff_x19 + 0xe0),uVar5);
      }
      uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      uVar6 = FUN_0555e110();
      FUN_052deac0(uVar6,uVar5);
      FUN_066cad54();
      return;
    }
    lVar11 = FUN_066c67ec();
    if (lVar11 != 0) {
      lVar11 = FUN_03a862a4(lVar11,*(undefined8 *)PTR_DAT_06d3d830);
      lVar7 = *(long *)(unaff_x19 + 0x58);
      if (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar9 = *(long *)PTR_DAT_06d3d578;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar10 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar10 = lVar11;
            thunk_FUN_02f411dc(plVar10,lVar11);
          }
          else {
            FUN_03fd0c9c(lVar7,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x40) = unaff_x19;
            thunk_FUN_02f411dc((long *)(lVar11 + 0x40));
            goto LAB_052de8a8;
          }
        }
      }
    }
  }
LAB_052de970:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


