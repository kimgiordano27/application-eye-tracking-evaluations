/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$.ctor
ENTRY_POINT: 052de7dc
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor___ctor
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  FUN_0431f26c(param_2,param_3,*param_1);
  *(undefined8 *)(unaff_x19 + 0x1bc) = uStack0000000000000008;
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
      lVar3 = *(long *)(unaff_x19 + 0xe0);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
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
    lVar3 = FUN_066c67ec();
    if (lVar3 != 0) {
      lVar3 = FUN_03a862a4(lVar3,*(undefined8 *)PTR_DAT_06d3d830);
      lVar7 = *(long *)(unaff_x19 + 0x58);
      if (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar9 = *(long *)PTR_DAT_06d3d578;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar4 = lVar3;
            thunk_FUN_02f411dc(plVar4,lVar3);
          }
          else {
            FUN_03fd0c9c(lVar7,lVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar3 != 0) {
            *(long *)(lVar3 + 0x40) = unaff_x19;
            thunk_FUN_02f411dc((long *)(lVar3 + 0x40));
            goto LAB_052de8a8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


