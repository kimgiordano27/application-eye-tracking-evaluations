/*
FUNCTION_NAME: FUN_08a75f74
ENTRY_POINT: 08a75f74
PROGRAM: cac-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior
*/


void FUN_08a75f74(long param_1,long *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_096a4cfe & 1) == 0) {
    FUN_03f13384(UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo);
    FUN_03f13384(PTR_DAT_091ad018);
    FUN_03f13384(System_Func<GrowableArray<int>>_TypeInfo);
    FUN_03f13384(System_Func<HashSet<MethodInfo>>_TypeInfo);
    FUN_03f13384(System_Func<IEnumerable<DebugImage>>_TypeInfo);
    FUN_03f13384(
                UnityEngine_EventSystems_ExecuteEvents_EventFunction<IUpdateSelectedHandler>_TypeInfo
                );
    DAT_096a4cfe = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_EventSystems_ExecuteEvents_EventFunction<IUpdateSelectedHandler>_TypeInfo
                     + 0x130);
    if (((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
         *(long *)
          UnityEngine_EventSystems_ExecuteEvents_EventFunction<IUpdateSelectedHandler>_TypeInfo)) &&
       (*(char *)(param_1 + 0x309) == '\0')) {
      lVar3 = param_2[0x66];
      if (lVar3 != 0) {
        if (*(long *)(param_1 + 0x2d8) == 0) {
LAB_08a76148:
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        FUN_08971d90(*(long *)(param_1 + 0x2d8),param_3,lVar3,0);
        if (*(long *)(param_1 + 0x2f0) == 0) goto LAB_08a76148;
        FUN_056b1638(*(long *)(param_1 + 0x2f0),param_3,lVar3,*(undefined8 *)PTR_DAT_091ad018);
        if (*(long *)(param_1 + 0x2e8) == 0) goto LAB_08a76148;
        FUN_056b1638(*(long *)(param_1 + 0x2e8),param_3,param_2,
                     *(undefined8 *)System_Func<GrowableArray<int>>_TypeInfo);
        FUN_08a71580(param_2,*(undefined1 *)(param_1 + 0x338),0);
        uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)
                                    UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo
                                  );
        FUN_072310c8(uVar2,param_1,*(undefined8 *)System_Func<HashSet<MethodInfo>>_TypeInfo,0);
        FUN_08a70220(param_2,uVar2,0);
      }
      uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)
                                  UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo
                                );
      FUN_072310c8(uVar2,param_1,*(undefined8 *)System_Func<IEnumerable<DebugImage>>_TypeInfo,0);
      FUN_08a700c0(param_2,uVar2,0);
      FUN_08a75ee8(param_1);
      if (*(long *)(param_1 + 0x2f8) == 0) {
        FUN_08a73cdc(param_1,param_2);
        return;
      }
    }
  }
  return;
}


