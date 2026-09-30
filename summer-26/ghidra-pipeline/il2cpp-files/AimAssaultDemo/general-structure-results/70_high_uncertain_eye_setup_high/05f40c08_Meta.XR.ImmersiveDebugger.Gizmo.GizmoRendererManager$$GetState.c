/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$GetState
ENTRY_POINT: 05f40c08
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__GetState(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  long *unaff_x24;
  long unaff_x25;
  
  uVar7 = **(undefined8 **)(param_1 + 0x310);
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  plVar2 = (long *)FUN_062519f8(uVar7,0);
  lVar3 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
  if (lVar3 != 0) {
    if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_037787d0(), lVar4 == 0)) {
      uVar7 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar7,0);
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    *(long *)(lVar3 + 0x20) = unaff_x21;
    thunk_FUN_037aeb94();
    if ((plVar2 != (long *)0x0) &&
       (plVar2 = (long *)(**(code **)(*plVar2 + 0x978))
                                   (plVar2,lVar3,*(undefined8 *)(*plVar2 + 0x980)),
       plVar2 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar2 + 0x2a8))();
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*unaff_x20 + 0x5b8))();
        if ((uVar5 & 1) == 0) {
switchD_05f40d78_default:
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03775678();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03775678();
          }
          plVar2 = (long *)thunk_FUN_037788cc();
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03775678(lVar3);
          }
          FUN_04f0eda8(plVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
          return plVar2;
        }
        if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar7 = FUN_06276e18();
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
        }
        uVar1 = FUN_0625d834(uVar7,0);
        switch(uVar1) {
        case 5:
          lVar3 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_07d98338;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar3 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_07d98300;
          break;
        case 7:
          lVar3 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_07d98340;
          break;
        case 0xb:
        case 0xc:
          lVar3 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_07d98320;
          break;
        default:
          goto switchD_05f40d78_default;
        }
        uVar7 = *puVar6;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar7 = FUN_062519f8(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03798b70(*unaff_x24);
        }
      }
      else {
        uVar7 = *(undefined8 *)PTR_DAT_07d98328;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar7 = FUN_062519f8(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03798b70(*unaff_x24);
        }
      }
      plVar2 = (long *)FUN_06284508(uVar7);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03775678(lVar3);
      }
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03775678(lVar3);
      }
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar2);
        }
      }
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


