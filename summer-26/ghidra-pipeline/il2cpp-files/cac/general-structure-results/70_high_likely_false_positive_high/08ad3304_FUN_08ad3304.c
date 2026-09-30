/*
FUNCTION_NAME: FUN_08ad3304
ENTRY_POINT: 08ad3304
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void FUN_08ad3304(long param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int local_24;
  
  if ((DAT_096a5202 & 1) == 0) {
    FUN_03f13384(PTR_DAT_0910b5c0);
    FUN_03f13384(PTR_DAT_091abfe0);
    FUN_03f13384(PTR_DAT_091ad870);
    FUN_03f13384(PTR_DAT_09125800);
    FUN_03f13384(PTR_DAT_091ad888);
    FUN_03f13384(
                Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                );
    FUN_03f13384(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                );
    FUN_03f13384(UnityEngine_UIElements_WorldSpaceInput_PickResult_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer_OrderedTransformation_var
                );
    FUN_03f13384(System_Collections_Generic_HashSet<UIButton>_TypeInfo);
    DAT_096a5202 = 1;
  }
  if (param_2 >> 0x20 == 4) {
    FUN_08acbc94(param_1,param_2 & 0xffffffff);
    return;
  }
  local_24 = (int)param_2;
  if (local_24 < 0x60002) {
    if (local_24 == 0x60000) {
      plVar6 = (long *)FUN_060ff6d8(param_1 + 0x20,
                                    *(undefined8 *)
                                     Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                                   );
      puVar2 = PTR_DAT_091ad870;
      if (param_3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_091ad870 + 0x130);
        if (*(byte *)(*param_3 + 0x130) < bVar1) {
          plVar9 = (long *)0x0;
        }
        else {
                    /* try { // try from 08ad36bc to 08bd36c7 has its CatchHandler @ 08ad34f0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 08ad36b4 with catch @ 08ad36c4
                        */
          plVar9 = param_3;
          if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_091ad870) {
            plVar9 = (long *)0x0;
          }
        }
        *plVar6 = (long)plVar9;
        lVar7 = *(long *)puVar2;
        if (*(byte *)(lVar7 + 0x130) <= *(byte *)(*param_3 + 0x130)) {
          lVar3 = *(long *)(*param_3 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8;
          goto LAB_08ad372c;
        }
        goto LAB_08ad371c;
      }
      lVar3 = *plVar6;
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
                    /* try { // try from 08ad3614 to 08bd3627 has its CatchHandler @ 08ad3684 */
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar4 = FUN_08a06b74(0);
    }
    else {
      if (local_24 != 0x60001) {
LAB_08ad3498:
        uVar4 = thunk_FUN_03f4e2c4(*(undefined8 *)
                                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                                   ,&local_24);
        uVar4 = FUN_0731d5f8(*(undefined8 *)System_Collections_Generic_HashSet<UIButton>_TypeInfo,
                             uVar4,0);
        if (*(int *)(*(long *)PTR_DAT_0910b5c0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_0910b5c0);
        }
                    /* try { // try from 08ad34f0 to 08bd35e7 has its CatchHandler @ 08ad34f0
                       catch() { ... } // from try @ 08ad34f0 with catch @ 08ad34f0
                       catch() { ... } // from try @ 08ad3628 with catch @ 08ad34f0
                       catch() { ... } // from try @ 08ad366c with catch @ 08ad34f0
                       catch() { ... } // from try @ 08ad36bc with catch @ 08ad34f0 */
        FUN_087929a4(uVar4,0);
        return;
      }
      lVar3 = FUN_060ff6d8(param_1 + 0x20,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                          );
      if (param_3 != (long *)0x0) {
        lVar7 = *(long *)PTR_DAT_091ad870;
        uVar8 = (ulong)*(byte *)(lVar7 + 0x130);
        if (*(byte *)(*param_3 + 0x130) < *(byte *)(lVar7 + 0x130)) {
          plVar9 = (long *)0x0;
        }
        else {
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08ad3668 with catch @ 08ad3680
                        */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08ad3614 with catch @ 08ad3684
                        */
          plVar9 = param_3;
          if (*(long *)(*(long *)(*param_3 + 200) + uVar8 * 8 + -8) != lVar7) {
            plVar9 = (long *)0x0;
          }
        }
        plVar6 = (long *)(lVar3 + 8);
        *plVar6 = (long)plVar9;
        goto LAB_08ad370c;
      }
      lVar3 = *(long *)(lVar3 + 8);
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar4 = FUN_08a06bec(0);
    }
                    /* try { // try from 08ad3628 to 08bd3667 has its CatchHandler @ 08ad34f0 */
    FUN_04bee5a4(lVar3,uVar4,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer_OrderedTransformation_var
                );
  }
  else {
    if (local_24 == 0x60002) {
      lVar3 = FUN_060ff6d8(param_1 + 0x20,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                          );
      if (param_3 == (long *)0x0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar5 = FUN_08a06c64(0);
                    /* try { // try from 08ad3668 to 08bd366b has its CatchHandler @ 08ad3680 */
                    /* try { // try from 08ad366c to 08bd369f has its CatchHandler @ 08ad34f0 */
        FUN_04bee538(uVar4,uVar5,
                     *(undefined8 *)
                      UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_var);
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08ad35e8 with catch @ 08ad367c
                        */
        goto LAB_08ad373c;
      }
      lVar7 = *(long *)PTR_DAT_09125800;
      uVar8 = (ulong)*(byte *)(lVar7 + 0x130);
      if (*(byte *)(*param_3 + 0x130) < *(byte *)(lVar7 + 0x130)) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = param_3;
        if (*(long *)(*(long *)(*param_3 + 200) + uVar8 * 8 + -8) != lVar7) {
          plVar9 = (long *)0x0;
        }
      }
      plVar6 = (long *)(lVar3 + 0x10);
      *plVar6 = (long)plVar9;
    }
    else {
      if (local_24 != 0x60003) goto LAB_08ad3498;
      lVar3 = FUN_060ff6d8(param_1 + 0x20,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                          );
      if (param_3 == (long *)0x0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar5 = FUN_08a06cdc(0);
                    /* try { // try from 08ad35e8 to 08bd35f3 has its CatchHandler @ 08ad367c */
        FUN_04bee4e4(uVar4,uVar5,
                     *(undefined8 *)UnityEngine_UIElements_WorldSpaceInput_PickResult_var);
        goto LAB_08ad373c;
      }
      lVar7 = *(long *)PTR_DAT_091ad888;
      uVar8 = (ulong)*(byte *)(lVar7 + 0x130);
      if (*(byte *)(*param_3 + 0x130) < *(byte *)(lVar7 + 0x130)) {
        plVar9 = (long *)0x0;
      }
      else {
                    /* try { // try from 08ad36a0 to 08bd36a3 has its CatchHandler @ 08ad36b0 */
        plVar9 = param_3;
        if (*(long *)(*(long *)(*param_3 + 200) + uVar8 * 8 + -8) != lVar7) {
          plVar9 = (long *)0x0;
        }
      }
                    /* catch() { ... } // from try @ 08ad36a0 with catch @ 08ad36b0 */
      plVar6 = (long *)(lVar3 + 0x18);
      *plVar6 = (long)plVar9;
                    /* try { // try from 08ad36b4 to 08bd36bb has its CatchHandler @ 08ad36c4 */
    }
LAB_08ad370c:
    if ((uint)*(byte *)(*param_3 + 0x130) < (uint)uVar8) {
LAB_08ad371c:
      param_3 = (long *)0x0;
    }
    else {
      lVar3 = *(long *)(*param_3 + 200) + uVar8 * 8;
LAB_08ad372c:
      if (*(long *)(lVar3 + -8) != lVar7) {
        param_3 = (long *)0x0;
      }
    }
    thunk_FUN_03f86000(plVar6,param_3);
  }
LAB_08ad373c:
  *(undefined8 *)(param_1 + 0x48) = 0;
  thunk_FUN_03f86000((undefined8 *)(param_1 + 0x48),0);
  return;
}


