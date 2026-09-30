/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<ShaderTagId>
ENTRY_POINT: 032d1a08
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_9
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<ShaderTagId>
               (ushort *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02b76218();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar8 = **(long **)(unaff_x19 + 0x38);
  lVar2 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar2 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xb) == '\0') {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_0275e12c(DAT_066dedc0);
    uVar4 = FUN_04d8a7b0(uVar4,0);
    puVar6 = &DAT_064a7f30;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<Painter2D_Painter2DJobData>:
    uVar9 = thunk_FUN_02ba3594(puVar6);
    uVar4 = FUN_04c00984(uVar9,uVar4,0);
    thunk_FUN_02ba3594(&DAT_06446e68);
    uVar9 = thunk_FUN_02b79644();
    FUN_04db2a6c(uVar9,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar9);
  }
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  lVar2 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar2 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xe) != '\0') {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_0275e12c(DAT_066dedc0);
    uVar4 = FUN_04d8a7b0(uVar4,0);
    puVar6 = &DAT_064a7f28;
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<Painter2D_Painter2DJobData>;
  }
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    if ((**(long **)(lVar2 + 0xb8) == 0) ||
       (plVar3 = (long *)thunk_FUN_02b4c898(**(long **)(lVar2 + 0xb8),0), plVar3 == (long *)0x0))
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
    puVar6 = PTR_DAT_06312310;
    uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    plVar3 = (long *)FUN_04d8a7b0(uVar9,0);
    if (plVar3 == (long *)0x0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar9 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
    uVar5 = FUN_04cc2134(uVar4,uVar9,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (unaff_x20 == 0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar4 = thunk_FUN_02b4c898();
    uVar4 = FUN_0318a0c4(uVar4,DAT_064779f8);
    uVar5 = FUN_031a8288(uVar4,DAT_06479b10);
    if ((uVar5 & 1) != 0) {
      plVar3 = (long *)thunk_FUN_02b4c898();
      if (plVar3 == (long *)0x0)
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
      uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
      uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(*(long *)(puVar6 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(puVar6 + 0xe0));
      }
      plVar3 = (long *)FUN_04d8a7b0(uVar9,0);
      if (plVar3 == (long *)0x0)
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
      uVar9 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
      uVar5 = FUN_04cc1830(uVar4,uVar9,0);
      if ((uVar5 & 1) != 0) {
        return;
      }
    }
  }
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  **(long **)(lVar2 + 0xb8) = unaff_x20;
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(undefined8 *)(lVar2 + 0xb8));
  if (*(int *)(DAT_0644b1e0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar2 = **(long **)(DAT_0644b1e0 + 0xb8);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(DAT_066dedc0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(DAT_066dedc0);
  }
  uVar4 = FUN_04d8a7b0(uVar4,0);
  if (lVar2 == 0)
  goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
  uVar5 = FUN_042f4cec(lVar2,uVar4,*(undefined8 *)PTR_DAT_0631fe90);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(DAT_0644b1e0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = *(long *)(*(long *)(DAT_0644b1e0 + 0xb8) + 8);
    uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(DAT_066dedc0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(DAT_066dedc0);
    }
    uVar4 = FUN_04d8a7b0(uVar4,0);
    lVar8 = DAT_06467cc0;
    if (lVar2 == 0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    lVar7 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar7 == 0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538(lVar2,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (*(int *)(DAT_0644b1e0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar2 = **(long **)(DAT_0644b1e0 + 0xb8);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(DAT_066dedc0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(DAT_066dedc0);
  }
  uVar4 = FUN_04d8a7b0(uVar4,0);
  if (lVar2 != 0) {
    FUN_042f6600(lVar2,uVar4);
    return;
  }
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


