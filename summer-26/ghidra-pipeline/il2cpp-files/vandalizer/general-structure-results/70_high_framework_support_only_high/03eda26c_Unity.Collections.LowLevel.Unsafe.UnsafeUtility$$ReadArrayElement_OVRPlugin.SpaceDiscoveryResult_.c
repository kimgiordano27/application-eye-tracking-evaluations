/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03eda26c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceDiscoveryResult>
               (long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_031f20f4(PTR_DAT_075d7c40);
    FUN_031f20f4(PTR_DAT_075d7c48);
    FUN_031f20f4(PTR_DAT_075d7c50);
    FUN_031f20f4(PTR_DAT_075d7c58);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_0322bf50(param_4);
    }
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar3 = thunk_FUN_0322f148();
    uVar4 = thunk_FUN_03257e30(PTR_DAT_075d7c60);
    FUN_05d6f364(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar3,param_4);
  }
  lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
  }
  plVar1 = (long *)thunk_FUN_0322f04c(param_1,lVar5);
  if ((plVar1 == (long *)0x0) ||
     (lVar5 = thunk_FUN_0322f04c(param_2,*(undefined8 *)PTR_DAT_075d7c48), lVar5 == 0)) {
    lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4(lVar5);
    }
    plVar1 = (long *)thunk_FUN_0322f04c(param_1,lVar5);
    if ((plVar1 == (long *)0x0) ||
       (lVar5 = thunk_FUN_0322f04c(param_2,*(undefined8 *)PTR_DAT_075d7c50), lVar5 == 0)) {
      lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4(lVar5);
      }
      plVar1 = (long *)thunk_FUN_0322f04c(param_1,lVar5);
      if ((plVar1 == (long *)0x0) ||
         (lVar5 = thunk_FUN_0322f04c(param_2,*(undefined8 *)PTR_DAT_075d7c58), lVar5 == 0)) {
        lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0322bef4(lVar5);
        }
        plVar1 = (long *)thunk_FUN_0322f04c(param_1,lVar5);
        if ((plVar1 == (long *)0x0) ||
           (lVar5 = thunk_FUN_0322f04c(param_2,*(undefined8 *)PTR_DAT_075d7c40), lVar5 == 0)) {
          lVar5 = **(long **)(param_4 + 0x38);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0322bef4(lVar5);
          }
          lVar6 = *param_1;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto 
                Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<UnsafeList<MetadataValue>>>
                ;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_0322c1e8(param_1,lVar5,2);

          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<UnsafeList<MetadataValue>>>
          :
          UNRECOVERED_JUMPTABLE = (code *)*puVar2;
          uVar3 = puVar2[1];
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<UnsafeList<AttachmentDescriptor>>>
          ;
        }
        lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0322bef4(lVar6);
        }
        lVar7 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) goto LAB_03eda52c;
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
      }
      else {
        lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0322bef4(lVar6);
        }
        lVar7 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) goto LAB_03eda52c;
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0322bef4(lVar6);
      }
      lVar7 = *plVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) goto LAB_03eda52c;
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0322bef4(lVar6);
    }
    lVar7 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) goto LAB_03eda52c;
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_0322c1e8(plVar1,lVar6,0);
  param_1 = plVar1;
  param_2 = lVar5;
FUN_03eda538:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
  uVar3 = puVar2[1];

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<UnsafeList<AttachmentDescriptor>>>
  :
                    /* WARNING: Could not recover jumptable at 0x03eda558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,uVar3);
  return;
LAB_03eda52c:
  puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
  param_1 = plVar1;
  param_2 = lVar5;
  goto FUN_03eda538;
}


