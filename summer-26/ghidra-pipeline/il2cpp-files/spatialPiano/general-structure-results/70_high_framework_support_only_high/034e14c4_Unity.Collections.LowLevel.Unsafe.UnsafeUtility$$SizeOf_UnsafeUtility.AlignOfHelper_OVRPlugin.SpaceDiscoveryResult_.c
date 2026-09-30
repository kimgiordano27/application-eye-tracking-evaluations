/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<OVRPlugin.SpaceDiscoveryResult>>
ENTRY_POINT: 034e14c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_SpaceDiscoveryResult>>
               (void)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x21;
  long unaff_x22;
  
  plVar1 = (long *)thunk_FUN_02f45174();
  if ((plVar1 == (long *)0x0) || (lVar2 = thunk_FUN_02f45174(), lVar2 == 0)) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_02f41e9c(lVar2);
    }
    plVar1 = (long *)thunk_FUN_02f45174();
    if ((plVar1 == (long *)0x0) || (lVar2 = thunk_FUN_02f45174(), lVar2 == 0)) {
      lVar2 = **(long **)(unaff_x22 + 0x38);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02f41e9c(lVar2);
      }
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeList<InstanceCullerSplitDebugArray_Info>>
            ;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0();

      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeList<InstanceCullerSplitDebugArray_Info>>
      :
      UNRECOVERED_JUMPTABLE = (code *)*puVar3;
      goto LAB_034e1600;
    }
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) goto LAB_034e15e8;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) goto LAB_034e15e8;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_02f421d0(plVar1,lVar2,0);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeList<LODGroupCullingData>>:
  UNRECOVERED_JUMPTABLE = (code *)*puVar3;
LAB_034e1600:
                    /* WARNING: Could not recover jumptable at 0x034e1614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
LAB_034e15e8:
  puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
  goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeList<LODGroupCullingData>>;
}


