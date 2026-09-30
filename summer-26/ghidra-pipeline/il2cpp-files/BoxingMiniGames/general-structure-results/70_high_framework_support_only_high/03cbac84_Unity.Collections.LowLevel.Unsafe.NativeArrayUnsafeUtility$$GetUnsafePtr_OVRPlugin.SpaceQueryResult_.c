/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$GetUnsafePtr<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03cbac84
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<OVRPlugin_SpaceQueryResult>
          (long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint in_w9;
  long in_x10;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  if (in_w9 < (uint)in_x10) {
    lVar3 = *(long *)(unaff_x21 + 0x38);
  }
  else {
    lVar3 = *(long *)(unaff_x21 + 0x38);
    if (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) == param_2) {
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc(lVar3);
        param_1 = *unaff_x20;
        in_w9 = (uint)*(byte *)(param_1 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= in_w9) &&
         (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
        lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0367c9fc(lVar3);
          param_1 = *unaff_x20;
          in_w9 = (uint)*(byte *)(param_1 + 0x130);
        }
        if ((*(byte *)(lVar3 + 0x130) <= in_w9) &&
           (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)
           ) {
          lVar3 = thunk_FUN_03661d64(*(undefined8 *)
                                      (param_1 + (ulong)*(ushort *)(lVar2 + 0x50) * 0x10 + 0x140),
                                     lVar2);
                    /* WARNING: Could not recover jumptable at 0x03cbae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(lVar3 + 8))();
          return uVar1;
        }
      }
      goto LAB_03cbaf40;
    }
  }
  if ((*(ushort *)(*(long *)(lVar3 + 0x28) + 0x135) & 1) == 0) {
    FUN_0367c9fc(*(long *)(lVar3 + 0x28));
  }
  lVar3 = thunk_FUN_0367fd24();
  if (lVar3 == 0) {
    lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar3 + 0x130)) {
      lVar2 = *(long *)(unaff_x21 + 0x38);
    }
    else {
      lVar2 = *(long *)(unaff_x21 + 0x38);
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3
         ) {
        if ((*(ushort *)(*(long *)(lVar2 + 0x50) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        uVar1 = thunk_FUN_0367fe20();
        lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0367c9fc(lVar3);
        }
        if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*unaff_x20 + 0x130)) &&
           (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) ==
            lVar3)) {
          FUN_0531d420(uVar1);
          return uVar1;
        }
LAB_03cbaf40:
                    /* WARNING: Subroutine does not return */
        FUN_03643084();
      }
    }
    if ((*(ushort *)(*(long *)(lVar2 + 0x60) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar1 = thunk_FUN_0367fe20();
    FUN_052fcf3c();
  }
  else {
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x30) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar1 = thunk_FUN_0367fe20();
    lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar3);
    }
    lVar3 = thunk_FUN_0367fd24();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
    FUN_052d3b14(uVar1,lVar3,0);
  }
  return uVar1;
}


