/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Start
ENTRY_POINT: 05adde64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Start(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long *unaff_x24;
  long unaff_x25;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar3 = (**(code **)(*param_1 + 0x298))();
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)PTR_DAT_07a03018;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar6 = FUN_05e26f18(uVar6,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_036a1978(*unaff_x24);
    }
    goto LAB_05addfd0;
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar3 & 1) == 0) goto LAB_05ade030;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar6 = FUN_05e4c8a4();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_05e32ff8(uVar6,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_05addf80;
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar4 = (undefined8 *)PTR_DAT_07a03028;
      }
      else {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar4 = (undefined8 *)PTR_DAT_07a03010;
      }
    }
    else {
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_07a02ff0;
    }
  }
  else {
LAB_05addf80:
    if (uVar2 != 5) {
LAB_05ade030:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      uVar6 = thunk_FUN_0367fe20();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc(lVar5);
      }
      FUN_04a507cc(uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return uVar6;
    }
    lVar5 = *(long *)(unaff_x25 + 0xe0);
    puVar4 = (undefined8 *)PTR_DAT_07a03020;
  }
  uVar6 = *puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar6 = FUN_05e26f18(uVar6,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
LAB_05addfd0:
  uVar6 = FUN_05e59d90(uVar6);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
  }
  uVar6 = FUN_03156018(uVar6,lVar5);
  return uVar6;
}


