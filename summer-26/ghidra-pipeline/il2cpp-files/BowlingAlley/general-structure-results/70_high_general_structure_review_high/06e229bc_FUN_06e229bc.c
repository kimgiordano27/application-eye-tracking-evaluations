/*
FUNCTION_NAME: FUN_06e229bc
ENTRY_POINT: 06e229bc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long FUN_06e229bc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((DAT_076ea728 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072799d0);
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<int>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072799c0);
    thunk_FUN_032e1da0(PTR_DAT_07289360);
    DAT_076ea728 = 1;
  }
  if (DAT_076ea720 == (code *)0x0) {
    DAT_076ea720 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_ScriptableObject_op_Equality
                                     (
                                     "UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()"
                                     );
  }
  lVar2 = (*DAT_076ea720)(param_1);
  puVar1 = PTR_DAT_07289360;
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x18) == 0)) {
    lVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_07289360 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (DAT_076d3ca9 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07289360);
      DAT_076d3ca9 = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar1;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
    lVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072799c0);
    FUN_050f81a8(lVar3,*(undefined4 *)(lVar2 + 0x18),uVar5,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<int>__
                );
    puVar1 = PTR_DAT_072799d0;
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar6 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar6) {
LAB_06e22b84:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar5 = *(undefined8 *)(lVar2 + 0x20 + uVar6 * 8);
        if (DAT_076ea718 == (code *)0x0) {
          DAT_076ea718 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_ScriptableObject_op_Equality
                                           (
                                           "UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)"
                                           );
        }
        uVar5 = (*DAT_076ea718)(param_1,uVar5);
        if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_06e22b84;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_050f8b10(lVar3,*(undefined8 *)(lVar2 + 0x20 + uVar6 * 8),uVar5,*(undefined8 *)puVar1);
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
  }
  return lVar3;
}


