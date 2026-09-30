/*
FUNCTION_NAME: FUN_02000d70
ENTRY_POINT: 02000d70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_02000d70(long param_1,uint param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint local_34;
  uint local_28;
  uint local_24;
  
  if ((DAT_0482ef56 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_GetPooled__)
    ;
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_Init__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_PostDispatch__
                      );
    DAT_0482ef56 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if ((int)param_2 < *(int *)(lVar2 + 0x18)) {
      lVar2 = *(long *)(lVar2 + 0x38);
      if (lVar2 == 0) goto LAB_02000f04;
      if (*(uint *)(lVar2 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*(char *)(lVar2 + (long)(int)param_2 * 0x178 + 0x194) != '\0') {
        return 1;
      }
      if (DAT_0482ef72 == '\0') {
        thunk_FUN_01efb3a4(Method_System_Nullable<InputRemoting_Message>__ctor__);
        DAT_0482ef72 = '\x01';
      }
      if (1 < **(int **)(*(long *)Method_System_Nullable<InputRemoting_Message>__ctor__ + 0xb8)) {
        if ((param_3 & 1) == 0) {
          local_34 = param_2;
          uVar1 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                     ,&local_34);
          puVar3 = (undefined8 *)
                   Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_GetPooled__;
        }
        else {
          local_28 = param_2;
          uVar1 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                     ,&local_28);
          puVar3 = (undefined8 *)
                   Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_PostDispatch__;
        }
        uVar1 = FUN_03406290(*puVar3,uVar1,0);
        FUN_021176a8(uVar1,0);
      }
    }
    else {
      local_24 = param_2;
      uVar1 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,&local_24);
      uVar1 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_Init__,
                           uVar1,0);
      FUN_021179bc(uVar1,0,0);
    }
    return 0;
  }
LAB_02000f04:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


