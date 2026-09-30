/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<ResourceUnversionedData>
ENTRY_POINT: 032d19cc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_7;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_9
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<ResourceUnversionedData>
               (long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  
  FUN_02b3c81c(param_1 + 0xb10);
  FUN_02b3c81c(&DAT_06467cc0);
  FUN_02b3c81c(&DAT_0644b1e0);
  lVar6 = *(long *)(unaff_x19 + 0x38);
  if (lVar6 == 0) {
    FUN_02b76274();
    lVar6 = *(long *)(unaff_x19 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar8 = **(long **)(unaff_x19 + 0x38);
  lVar6 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar6 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xb) == '\0') {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_0275e12c(DAT_066dedc0);
    uVar3 = FUN_04d8a7b0(uVar3,0);
    puVar5 = &DAT_064a7f30;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<Painter2D_Painter2DJobData>:
    uVar9 = thunk_FUN_02ba3594(puVar5);
    uVar3 = FUN_04c00984(uVar9,uVar3,0);
    thunk_FUN_02ba3594(&DAT_06446e68);
    uVar9 = thunk_FUN_02b79644();
    FUN_04db2a6c(uVar9,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar9);
  }
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  lVar6 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar6 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xe) != '\0') {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_0275e12c(DAT_066dedc0);
    uVar3 = FUN_04d8a7b0(uVar3,0);
    puVar5 = &DAT_064a7f28;
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<Painter2D_Painter2DJobData>;
  }
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218();
    }
    if ((**(long **)(lVar6 + 0xb8) == 0) ||
       (plVar2 = (long *)thunk_FUN_02b4c898(**(long **)(lVar6 + 0xb8),0), plVar2 == (long *)0x0))
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar3 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
    puVar5 = PTR_DAT_06312310;
    uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    plVar2 = (long *)FUN_04d8a7b0(uVar9,0);
    if (plVar2 == (long *)0x0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar9 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
    uVar4 = FUN_04cc2134(uVar3,uVar9,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    if (unaff_x20 == 0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar3 = thunk_FUN_02b4c898();
    uVar3 = FUN_0318a0c4(uVar3,DAT_064779f8);
    uVar4 = FUN_031a8288(uVar3,DAT_06479b10);
    if ((uVar4 & 1) != 0) {
      plVar2 = (long *)thunk_FUN_02b4c898();
      if (plVar2 == (long *)0x0)
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
      uVar3 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
      uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(*(long *)(puVar5 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(puVar5 + 0xe0));
      }
      plVar2 = (long *)FUN_04d8a7b0(uVar9,0);
      if (plVar2 == (long *)0x0)
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
      uVar9 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
      uVar4 = FUN_04cc1830(uVar3,uVar9,0);
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
  }
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  **(long **)(lVar6 + 0xb8) = unaff_x20;
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(undefined8 *)(lVar6 + 0xb8));
  if (*(int *)(DAT_0644b1e0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar6 = **(long **)(DAT_0644b1e0 + 0xb8);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(DAT_066dedc0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(DAT_066dedc0);
  }
  uVar3 = FUN_04d8a7b0(uVar3,0);
  if (lVar6 == 0)
  goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
  uVar4 = FUN_042f4cec(lVar6,uVar3,*(undefined8 *)PTR_DAT_0631fe90);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_0644b1e0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar6 = *(long *)(*(long *)(DAT_0644b1e0 + 0xb8) + 8);
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(DAT_066dedc0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(DAT_066dedc0);
    }
    uVar3 = FUN_04d8a7b0(uVar3,0);
    lVar8 = DAT_06467cc0;
    if (lVar6 == 0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    lVar7 = *(long *)(lVar6 + 0x10);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538(lVar6,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (*(int *)(DAT_0644b1e0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar6 = **(long **)(DAT_0644b1e0 + 0xb8);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(DAT_066dedc0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(DAT_066dedc0);
  }
  uVar3 = FUN_04d8a7b0(uVar3,0);
  if (lVar6 != 0) {
    FUN_042f6600(lVar6,uVar3);
    return;
  }
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


