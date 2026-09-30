/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0207cb48
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceDiscoveryResult>
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong unaff_x22;
  undefined8 uVar5;
  long unaff_x23;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  FUN_02e2ffc0();
  puVar1 = StringLiteral_1254;
  if (unaff_x23 == 0)
  goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElementWithStride<ushort>;
  FUN_02b8b240();
  if ((unaff_x22 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar5 = FUN_033a87c8(uVar5,0);
    uVar2 = FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    uVar3 = FUN_033ab18c(uVar5,uVar2,0);
    if ((uVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033a87c8(uVar5,0);
      FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
      FUN_03a63324();
      if (*(long *)(unaff_x20 + 0x30) == 0) {
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElementWithStride<ushort>:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar3 = FUN_02b8b44c(*(long *)(unaff_x20 + 0x30),in_stack_00000000,in_stack_00000008,
                           *unaff_x28);
      if ((uVar3 & 1) == 0) {
        lVar4 = *(long *)(unaff_x20 + 0x30);
        uVar5 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1256);
        FUN_02e2ffc0();
        if (lVar4 == 0)
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElementWithStride<ushort>;
        FUN_02b8b240(lVar4,in_stack_00000000,in_stack_00000008,uVar5,*(undefined8 *)puVar1);
      }
    }
  }
  return;
}


