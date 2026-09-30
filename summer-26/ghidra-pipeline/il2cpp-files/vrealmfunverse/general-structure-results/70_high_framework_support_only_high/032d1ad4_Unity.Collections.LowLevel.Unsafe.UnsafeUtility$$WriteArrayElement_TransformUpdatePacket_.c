/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<TransformUpdatePacket>
ENTRY_POINT: 032d1ad4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_9
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<TransformUpdatePacket>(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  
  lVar4 = FUN_02b76218();
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar4 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0xe) != '\0') {
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_0275e12c(DAT_066dedc0);
    uVar6 = FUN_04d8a7b0(uVar6,0);
    uVar9 = thunk_FUN_02ba3594(&DAT_064a7f28);
    uVar6 = FUN_04c00984(uVar9,uVar6,0);
    thunk_FUN_02ba3594(&DAT_06446e68);
    uVar9 = thunk_FUN_02b79644();
    FUN_04db2a6c(uVar9,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar9);
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    if ((**(long **)(lVar4 + 0xb8) == 0) ||
       (plVar5 = (long *)thunk_FUN_02b4c898(**(long **)(lVar4 + 0xb8),0), plVar5 == (long *)0x0))
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar6 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
    puVar2 = PTR_DAT_06312310;
    uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    plVar5 = (long *)FUN_04d8a7b0(uVar9,0);
    if (plVar5 == (long *)0x0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar9 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
    uVar7 = FUN_04cc2134(uVar6,uVar9,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (unaff_x20 == 0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar6 = thunk_FUN_02b4c898();
    uVar6 = FUN_0318a0c4(uVar6,DAT_064779f8);
    uVar7 = FUN_031a8288(uVar6,DAT_06479b10);
    if ((uVar7 & 1) != 0) {
      plVar5 = (long *)thunk_FUN_02b4c898();
      if (plVar5 == (long *)0x0)
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
      uVar6 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
      uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(puVar2 + 0xe0));
      }
      plVar5 = (long *)FUN_04d8a7b0(uVar9,0);
      if (plVar5 == (long *)0x0)
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
      uVar9 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
      uVar7 = FUN_04cc1830(uVar6,uVar9,0);
      if ((uVar7 & 1) != 0) {
        return;
      }
    }
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  **(long **)(lVar4 + 0xb8) = unaff_x20;
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(undefined8 *)(lVar4 + 0xb8));
  if (*(int *)(DAT_0644b1e0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar4 = **(long **)(DAT_0644b1e0 + 0xb8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(DAT_066dedc0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(DAT_066dedc0);
  }
  uVar6 = FUN_04d8a7b0(uVar6,0);
  if (lVar4 == 0)
  goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
  uVar7 = FUN_042f4cec(lVar4,uVar6,*(undefined8 *)PTR_DAT_0631fe90);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(DAT_0644b1e0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar4 = *(long *)(*(long *)(DAT_0644b1e0 + 0xb8) + 8);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(DAT_066dedc0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(DAT_066dedc0);
    }
    uVar6 = FUN_04d8a7b0(uVar6,0);
    lVar3 = DAT_06467cc0;
    if (lVar4 == 0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    lVar8 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar8 == 0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (*(int *)(DAT_0644b1e0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar4 = **(long **)(DAT_0644b1e0 + 0xb8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(DAT_066dedc0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(DAT_066dedc0);
  }
  uVar6 = FUN_04d8a7b0(uVar6,0);
  if (lVar4 != 0) {
    FUN_042f6600(lVar4,uVar6);
    return;
  }
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector2f>:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


