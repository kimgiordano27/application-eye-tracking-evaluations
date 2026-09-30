/*
FUNCTION_NAME: FUN_0766fc00
ENTRY_POINT: 0766fc00
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0766fc00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar1 = UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo;
  if ((DAT_08270fe4 & 1) == 0) {
    FUN_0373b518(
                Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__
                );
    FUN_0373b518(
                System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TypeInfo
                );
    FUN_0373b518(
                Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector3,_Vector3[],_Vector3ArrayOptions>__ctor__
                );
    FUN_0373b518(Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector3,_Path,_PathOptions>__ctor__)
    ;
    FUN_0373b518(
                Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector3,_Vector3,_VectorOptions>__ctor__
                );
    FUN_0373b518(
                Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector4,_Vector4,_VectorOptions>__ctor__
                );
    FUN_0373b518(
                UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_Dictionary<string,_IWebSocketSession>_TypeInfo);
    FUN_0373b518(
                Method_UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARAnchorManager,_ARAnchor>__ctor__
                );
    DAT_08270fe4 = 1;
  }
  puVar2 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector4,_Vector4,_VectorOptions>__ctor__;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x128);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_03fe11c4(uVar11,(long *)(param_1 + 0x130),0x10,*(undefined8 *)puVar2);
  puVar5 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector3,_Path,_PathOptions>__ctor__;
  puVar4 = 
  Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector3,_Vector3[],_Vector3ArrayOptions>__ctor__;
  puVar3 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__;
  puVar2 = System_Collections_Generic_Dictionary<string,_IWebSocketSession>_TypeInfo;
  puVar1 = 
  System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TypeInfo;
  if (*(long *)(param_1 + 0x128) != 0) {
    FUN_049cf910(&local_98,*(long *)(param_1 + 0x128),
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARAnchorManager,_ARAnchor>__ctor__
                );
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while( true ) {
      uVar9 = FUN_05d64e98(&local_80,*(undefined8 *)puVar5);
      lVar6 = local_70;
      if ((uVar9 & 1) == 0) {
        FUN_05d64e94(&local_80,*(undefined8 *)puVar4);
        if (*(long *)(param_1 + 0x1f8) != 0) {
          FUN_045c383c(*(long *)(param_1 + 0x1f8),*(undefined8 *)puVar2);
        }
        return;
      }
      if (local_70 == 0) break;
      uVar7 = FUN_0769d60c(local_70,0);
      uVar8 = FUN_0769f8f4(lVar6,0);
      lVar10 = *(long *)(param_1 + 0x130);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar9 = FUN_05bc54fc(lVar10,uVar7,lVar6,*(undefined8 *)puVar3);
      if ((uVar9 & 1) != 0) {
        FUN_0769f904(lVar6,param_1,0);
        if (*(long *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar11 = FUN_05bc394c(*(long *)(param_1 + 0x120),uVar8,*(undefined8 *)puVar1);
        FUN_0769f8fc(lVar6,uVar11,0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


