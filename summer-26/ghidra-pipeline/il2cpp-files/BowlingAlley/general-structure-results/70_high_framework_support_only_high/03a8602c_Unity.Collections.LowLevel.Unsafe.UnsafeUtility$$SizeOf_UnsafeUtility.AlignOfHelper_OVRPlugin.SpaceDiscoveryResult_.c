/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<OVRPlugin.SpaceDiscoveryResult>>
ENTRY_POINT: 03a8602c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_SpaceDiscoveryResult>>
               (long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  long unaff_x23;
  long unaff_x29;
  
  if ((param_1 != 0) &&
     (lVar1 = thunk_FUN_032a55a4(param_1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar1 == 0)) {
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<InternalType_299<InternalType_71>>:
    uVar3 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar3,0);
  }
  if (0xd < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[0x11] = param_1;
    thunk_FUN_0333a630(unaff_x20 + 0x11,param_1);
    lVar1 = *(long *)(unaff_x19 + 0x38);
    plVar4 = *(long **)(unaff_x23 + 0x38);
    pvVar5 = *(void **)(unaff_x29 + 0x98);
    if (-1 < *(int *)(*(long *)(lVar1 + 0x70) + 0x28)) {
      pvVar5 = (void *)(unaff_x29 + 0x98);
    }
    pvVar6 = *(void **)(unaff_x29 + -0x160);
    memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x158));
    lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x70),pvVar6);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<InternalType_299<InternalType_71>>;
    if (0xe < *(uint *)(plVar4 + 3)) {
      plVar4[0x12] = lVar1;
      thunk_FUN_0333a630(plVar4 + 0x12,lVar1);
      FUN_05fb2df0();
      lVar1 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05fb3740(lVar1);
      FUN_05fb2e6c();
      pvVar5 = *(void **)(unaff_x29 + 0xa0);
      uVar3 = FUN_05fa802c();
      lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x78);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_032934b8(lVar1);
      }
      pvVar6 = (void *)FUN_032d5de0(uVar3,lVar1,*(undefined8 *)(unaff_x29 + -0x178));
      memcpy(pvVar5,pvVar6,*(size_t *)(unaff_x29 + -0x170));
      if (*(long *)(*(long *)(unaff_x29 + -0x168) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


