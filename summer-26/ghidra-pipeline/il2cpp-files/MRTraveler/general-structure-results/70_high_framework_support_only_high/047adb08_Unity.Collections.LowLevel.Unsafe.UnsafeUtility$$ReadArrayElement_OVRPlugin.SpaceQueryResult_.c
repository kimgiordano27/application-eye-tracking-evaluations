/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 047adb08
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceQueryResult>
               (ulong param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_03cf1244();
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 047ada44 with catch @ 047adb1c
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 047ad9e0 with catch @ 047adb20
                        */
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e81fe8);
    FUN_081702a0(lVar2,uVar5,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x10),0);
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    *(long *)(*(long *)(lVar3 + 0xb8) + 8) = lVar2;
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    thunk_FUN_03d233cc(*(long *)(lVar3 + 0xb8) + 8,lVar2);
  }
  if (unaff_x19 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = lVar2;
        thunk_FUN_03d233cc(plVar4,lVar2);
        return;
      }
      FUN_05212cf4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


