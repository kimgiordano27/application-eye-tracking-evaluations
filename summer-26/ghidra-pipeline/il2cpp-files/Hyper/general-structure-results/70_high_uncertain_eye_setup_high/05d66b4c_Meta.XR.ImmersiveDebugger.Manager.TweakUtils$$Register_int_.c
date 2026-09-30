/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$Register<int>
ENTRY_POINT: 05d66b4c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils__Register<int>(ushort *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_04980b34();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar9 = **(long **)(unaff_x19 + 0x38);
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0xb) == '\0') {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_0433a0d0(*(undefined8 *)(PTR_DAT_0ac09758 + 0xe0));
    uVar5 = FUN_08d895f0(uVar5,0);
    puVar7 = PTR_DAT_0ac41c08;
LAB_05d67028:
    uVar10 = thunk_FUN_049ae08c(puVar7);
    uVar5 = FUN_08bc9f74(uVar10,uVar5,0);
    thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
    uVar10 = thunk_FUN_04983f60();
    FUN_08db3e00(uVar10,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar10);
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0xe) != '\0') {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_0433a0d0(*(undefined8 *)(PTR_DAT_0ac09758 + 0xe0));
    uVar5 = FUN_08d895f0(uVar5,0);
    puVar7 = PTR_DAT_0ac41c10;
    goto LAB_05d67028;
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    if ((**(long **)(lVar3 + 0xb8) == 0) ||
       (plVar4 = (long *)thunk_FUN_04956588(**(long **)(lVar3 + 0xb8),0), plVar4 == (long *)0x0))
    goto LAB_05d66fc8;
    uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
    puVar7 = PTR_DAT_0ac09758;
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)(PTR_DAT_0ac09758 + 0xe0));
    }
    plVar4 = (long *)FUN_08d895f0(uVar10,0);
    if (plVar4 == (long *)0x0) goto LAB_05d66fc8;
    uVar10 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
    uVar6 = FUN_08c876d0(uVar5,uVar10,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (unaff_x20 == 0) goto LAB_05d66fc8;
    uVar5 = thunk_FUN_04956588();
    uVar5 = FUN_05b1aa94(uVar5,*(undefined8 *)PTR_DAT_0ac41bf0);
    uVar6 = FUN_05b4f9b0(uVar5,*(undefined8 *)PTR_DAT_0ac41bf8);
    if ((uVar6 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_04956588();
      if (plVar4 == (long *)0x0) goto LAB_05d66fc8;
      uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
      uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(*(long *)(puVar7 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)(puVar7 + 0xe0));
      }
      plVar4 = (long *)FUN_08d895f0(uVar10,0);
      if (plVar4 == (long *)0x0) goto LAB_05d66fc8;
      uVar10 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
      uVar6 = FUN_08c878ac(uVar5,uVar10,0);
      if ((uVar6 & 1) != 0) {
        return;
      }
    }
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  **(long **)(lVar3 + 0xb8) = unaff_x20;
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  thunk_FUN_049ee3d8(*(undefined8 *)(lVar3 + 0xb8));
  puVar7 = PTR_DAT_0ac41bd8;
  lVar3 = *(long *)PTR_DAT_0ac41bd8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *(long *)puVar7;
  }
  puVar2 = PTR_DAT_0ac09758;
  lVar3 = **(long **)(lVar3 + 0xb8);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)(PTR_DAT_0ac09758 + 0xe0));
  }
  uVar5 = FUN_08d895f0(uVar5,0);
  if (lVar3 == 0) goto LAB_05d66fc8;
  uVar6 = FUN_0842e378(lVar3,uVar5,*(undefined8 *)PTR_DAT_0ac41be0);
  if ((uVar6 & 1) == 0) {
    lVar3 = *(long *)puVar7;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar3 = *(long *)puVar7;
    }
    lVar9 = *(long *)(puVar2 + 0xe0);
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c(lVar9);
    }
    uVar5 = FUN_08d895f0(uVar5,0);
    if (lVar3 == 0) goto LAB_05d66fc8;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar8 = *(long *)PTR_DAT_0ac41c00;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_05d66fc8;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      thunk_FUN_049ee3d8();
    }
    else {
      FUN_06b7fe74(lVar3,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar3 = *(long *)puVar7;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *(long *)puVar7;
  }
  lVar9 = *(long *)(puVar2 + 0xe0);
  lVar3 = **(long **)(lVar3 + 0xb8);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_049a583c(lVar9);
  }
  uVar5 = FUN_08d895f0(uVar5,0);
  if (lVar3 != 0) {
    FUN_08430120(lVar3,uVar5);
    return;
  }
LAB_05d66fc8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


