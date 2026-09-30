/*
FUNCTION_NAME: FUN_034e5110
ENTRY_POINT: 034e5110
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034e5110(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if ((DAT_04832de3 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    DAT_04832de3 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    puVar4 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_BoxData>__
    ;
  }
  else if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    puVar4 = 
    Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_CircleData>__;
  }
  else {
    if (param_3 != 0) {
      lVar1 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                           ,3);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar1 + 0x18) != 0) {
        *(long *)(lVar1 + 0x20) = param_1;
        thunk_FUN_01f51358((long *)(lVar1 + 0x20),param_1);
        if (1 < *(uint *)(lVar1 + 0x18)) {
          *(long *)(lVar1 + 0x28) = param_2;
          thunk_FUN_01f51358((long *)(lVar1 + 0x28),param_2);
          puVar4 = 
          Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
          if (2 < *(uint *)(lVar1 + 0x18)) {
            *(long *)(lVar1 + 0x30) = param_3;
            thunk_FUN_01f51358((long *)(lVar1 + 0x30),param_3);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_034e4e20(lVar1);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    puVar4 = Method_Unity_VisualScripting_WaitForFlow_Reset__;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar4);
  FUN_034efd20(uVar2,uVar3,0);
  uVar3 = thunk_FUN_01efb3a4(Method_System_Threading_WaitHandle_InternalWaitOne__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar3);
}


