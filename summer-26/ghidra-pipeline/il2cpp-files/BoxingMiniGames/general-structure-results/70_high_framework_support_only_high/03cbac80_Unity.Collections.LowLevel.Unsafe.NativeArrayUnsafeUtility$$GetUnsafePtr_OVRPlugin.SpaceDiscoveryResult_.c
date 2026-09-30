/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$GetUnsafePtr<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03cbac80
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>
          (long param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x10;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  
  bVar1 = *(byte *)(param_1 + 0x130);
  if ((uint)bVar1 < (uint)in_x10) {
    lVar4 = *(long *)(unaff_x21 + 0x38);
  }
  else {
    lVar4 = *(long *)(unaff_x21 + 0x38);
    if (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) == param_2) {
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
        param_1 = *unaff_x20;
        bVar1 = *(byte *)(param_1 + 0x130);
      }
      if ((*(byte *)(lVar4 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4))
      {
        lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
        lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc(lVar4);
          param_1 = *unaff_x20;
          bVar1 = *(byte *)(param_1 + 0x130);
        }
        if ((*(byte *)(lVar4 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4)
           ) {
          lVar4 = thunk_FUN_03661d64(*(undefined8 *)
                                      (param_1 + (ulong)*(ushort *)(lVar3 + 0x50) * 0x10 + 0x140),
                                     lVar3);
                    /* WARNING: Could not recover jumptable at 0x03cbae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(lVar4 + 8))();
          return uVar2;
        }
      }
      goto LAB_03cbaf40;
    }
  }
  if ((*(ushort *)(*(long *)(lVar4 + 0x28) + 0x135) & 1) == 0) {
    FUN_0367c9fc(*(long *)(lVar4 + 0x28));
  }
  lVar4 = thunk_FUN_0367fd24();
  if (lVar4 == 0) {
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar4 + 0x130)) {
      lVar3 = *(long *)(unaff_x21 + 0x38);
    }
    else {
      lVar3 = *(long *)(unaff_x21 + 0x38);
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4
         ) {
        if ((*(ushort *)(*(long *)(lVar3 + 0x50) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        uVar2 = thunk_FUN_0367fe20();
        lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc(lVar4);
        }
        if ((*(byte *)(lVar4 + 0x130) <= *(byte *)(*unaff_x20 + 0x130)) &&
           (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) ==
            lVar4)) {
          FUN_0531d420(uVar2);
          return uVar2;
        }
LAB_03cbaf40:
                    /* WARNING: Subroutine does not return */
        FUN_03643084();
      }
    }
    if ((*(ushort *)(*(long *)(lVar3 + 0x60) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar2 = thunk_FUN_0367fe20();
    FUN_052fcf3c();
  }
  else {
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x30) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar2 = thunk_FUN_0367fe20();
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar4);
    }
    lVar4 = thunk_FUN_0367fd24();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
    FUN_052d3b14(uVar2,lVar4,0);
  }
  return uVar2;
}


