/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 034e7210
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceQueryResult>
               (void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x21;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    FUN_02d9a2e0(lVar3);
  }
  plVar1 = (long *)thunk_FUN_02d9d438();
  if ((plVar1 == (long *)0x0) || (lVar3 = thunk_FUN_02d9d438(), lVar3 == 0)) {
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_02d9a2e0(lVar3);
    }
    plVar1 = (long *)thunk_FUN_02d9d438();
    if ((plVar1 == (long *)0x0) || (lVar3 = thunk_FUN_02d9d438(), lVar3 == 0)) {
      lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        FUN_02d9a2e0(lVar3);
      }
      plVar1 = (long *)thunk_FUN_02d9d438();
      if ((plVar1 == (long *)0x0) || (lVar3 = thunk_FUN_02d9d438(), lVar3 == 0)) {
        lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          FUN_02d9a2e0(lVar3);
        }
        plVar1 = (long *)thunk_FUN_02d9d438();
        if ((plVar1 == (long *)0x0) || (lVar3 = thunk_FUN_02d9d438(), lVar3 == 0)) {
          lVar3 = **(long **)(unaff_x22 + 0x38);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02d9a2e0(lVar3);
          }
          lVar4 = *unaff_x21;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                goto 
                Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<UnsafeList<DrawBatch>>>
                ;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_02d9a5d4();

          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<UnsafeList<DrawBatch>>>
          :
          UNRECOVERED_JUMPTABLE = (code *)*puVar2;
          goto LAB_034e7484;
        }
        lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d9a2e0(lVar3);
        }
        lVar4 = *plVar1;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) goto LAB_034e746c;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
      }
      else {
        lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d9a2e0(lVar3);
        }
        lVar4 = *plVar1;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) goto LAB_034e746c;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
      }
    }
    else {
      lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0(lVar3);
      }
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) goto LAB_034e746c;
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) goto LAB_034e746c;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4(plVar1,lVar3,0);
LAB_034e7478:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
LAB_034e7484:
                    /* WARNING: Could not recover jumptable at 0x034e7498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
LAB_034e746c:
  puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
  goto LAB_034e7478;
}


