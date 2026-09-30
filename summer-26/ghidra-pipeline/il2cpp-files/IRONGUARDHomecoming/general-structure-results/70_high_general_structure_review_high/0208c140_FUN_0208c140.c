/*
FUNCTION_NAME: FUN_0208c140
ENTRY_POINT: 0208c140
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0208c140(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined4 local_58;
  int local_54;
  
  puVar4 = Method_Unity_VisualScripting_StaticFunctionInvoker<float,_Vector3,_Vector3>__ctor__;
  puVar3 = Method_Unity_VisualScripting_StaticFunctionInvoker<float,_Vector2,_Vector2>__ctor__;
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<float,_float,_bool>__ctor__;
  puVar1 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__;
  if ((DAT_0482f764 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<float,_Vector3,_Vector3>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<float,_float,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplineDataDictionary<float>_TryGetValue__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<float,_Vector4,_Vector4>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<float,_Vector2,_Vector2>__ctor__
                      );
    DAT_0482f764 = 1;
  }
  local_54 = *(int *)(param_1 + 0x28);
  uVar9 = 1;
  if (local_54 != 1) {
    uVar9 = 2;
  }
  *(undefined4 *)(param_1 + 0x50) = uVar9;
  uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_54);
  uVar5 = FUN_03406290(*(undefined8 *)puVar3,uVar5,0);
  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding(uVar6,uVar5,0);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),uVar6);
  lVar7 = FUN_01f08890(*(undefined8 *)puVar4,0x3c);
  plVar10 = (long *)(param_1 + 0x40);
  *plVar10 = lVar7;
  thunk_FUN_01f51358(plVar10);
  puVar4 = Method_Unity_VisualScripting_StaticFunctionInvoker<float,_Vector4,_Vector4>__ctor__;
  puVar3 = Method_UnityEngine_Splines_SplineDataDictionary<float>_TryGetValue__;
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  lVar7 = *plVar10;
  if (lVar7 != 0) {
    uVar11 = 0;
    lVar12 = 0x20;
    do {
      if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar11) {
        return;
      }
      if (*(long *)(param_1 + 0x38) == 0) break;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = FUN_04073258(*(long *)(param_1 + 0x38),0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      lVar7 = FUN_023aa90c(uVar6,uVar5,*(undefined8 *)puVar3);
      local_58 = (undefined4)uVar11;
      uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_58);
      uVar5 = FUN_03406290(*(undefined8 *)puVar4,uVar5,0);
      if (lVar7 == 0) break;
      FUN_040767ac(lVar7,uVar5,0);
      FUN_04073314(lVar7,0,0);
      lVar8 = *plVar10;
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(long *)(lVar8 + uVar11 * 8 + 0x20) = lVar7;
      thunk_FUN_01f51358(lVar8 + lVar12,lVar7);
      lVar7 = *plVar10;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 8;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


