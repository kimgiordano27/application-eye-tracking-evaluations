/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 034e2b18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceDiscoveryResult>
               (long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  long unaff_x22;
  
  lVar1 = thunk_FUN_02f45174();
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_02f41e9c(lVar1);
    }
    param_1 = (long *)thunk_FUN_02f45174();
    if ((param_1 == (long *)0x0) || (lVar1 = thunk_FUN_02f45174(), lVar1 == 0)) {
      lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        FUN_02f41e9c(lVar1);
      }
      param_1 = (long *)thunk_FUN_02f45174();
      if ((param_1 == (long *)0x0) || (lVar1 = thunk_FUN_02f45174(), lVar1 == 0)) {
        lVar1 = **(long **)(unaff_x22 + 0x38);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02f41e9c(lVar1);
        }
        lVar3 = *unaff_x21;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar1) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_034e2d64;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_02f421d0();
LAB_034e2d64:
        UNRECOVERED_JUMPTABLE = (code *)*puVar2;
        goto LAB_034e2ce0;
      }
      lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02f41e9c(lVar1);
      }
      lVar3 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar1) goto LAB_034e2cc8;
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
    }
    else {
      lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02f41e9c(lVar1);
      }
      lVar3 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar1) goto LAB_034e2cc8;
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
    }
  }
  else {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c(lVar1);
    }
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar1) goto LAB_034e2cc8;
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_02f421d0(param_1,lVar1,0);
  goto LAB_034e2cd4;
LAB_034e2cc8:
  puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
LAB_034e2cd4:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
LAB_034e2ce0:
                    /* WARNING: Could not recover jumptable at 0x034e2cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


