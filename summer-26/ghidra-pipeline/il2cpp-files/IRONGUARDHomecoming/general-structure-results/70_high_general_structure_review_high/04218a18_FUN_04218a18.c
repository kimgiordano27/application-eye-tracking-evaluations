/*
FUNCTION_NAME: FUN_04218a18
ENTRY_POINT: 04218a18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_04218a18(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int extraout_var;
  undefined8 uVar6;
  long lVar7;
  int local_38;
  int local_34;
  
  puVar3 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
  if ((DAT_048411bd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04590d38);
    thunk_FUN_01efb3a4(PTR_DAT_04590d40);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04590d48);
    thunk_FUN_01efb3a4(PTR_DAT_04590d50);
    DAT_048411bd = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (param_2 < *(int *)(lVar7 + 0x18)) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_03262af0(lVar7,param_2,*(undefined8 *)PTR_DAT_04590d40);
      if (0 < extraout_var) {
        return uVar5;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      local_38 = param_2;
      uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_38);
      uVar6 = *(undefined8 *)PTR_DAT_04590d48;
      goto LAB_04218b7c;
    }
  }
  puVar4 = PTR_DAT_04590d50;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  local_34 = param_2;
  uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_34);
  uVar6 = *(undefined8 *)puVar4;
LAB_04218b7c:
  uVar5 = FUN_03406290(uVar6,uVar5,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  FUN_0403ed64(uVar5,0);
  return 0;
}


