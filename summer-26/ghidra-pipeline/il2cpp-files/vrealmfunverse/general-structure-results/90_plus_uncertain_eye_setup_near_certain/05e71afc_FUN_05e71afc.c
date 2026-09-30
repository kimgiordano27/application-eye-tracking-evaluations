/*
FUNCTION_NAME: FUN_05e71afc
ENTRY_POINT: 05e71afc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e71afc(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  puVar2 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshCollider>__;
  if ((DAT_066dc728 & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MonoBehaviour>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Motion>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<NavMeshAgent>__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_17__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<NavMeshData>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshCollider>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<NavMeshObstacle>__);
    DAT_066dc728 = 1;
  }
  FUN_04dbdb8c(param_1,0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = **(long **)(lVar7 + 0xb8);
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<NavMeshData>__;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar6 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<NavMeshObstacle>__;
    puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<NavMeshAgent>__;
    puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Motion>__;
    puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MonoBehaviour>__;
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_17__;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *plVar10 = param_1;
        thunk_FUN_02bb0e9c(plVar10,param_1);
      }
      else {
        FUN_037a6538(lVar7,param_1,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      *(undefined8 *)(param_1 + 0x10) = param_2;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x10),param_2);
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
      FUN_0452d05c(uVar8,0x20,*(undefined8 *)puVar3);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x18),uVar8);
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
      FUN_05e7dc70();
      *(undefined8 *)(param_1 + 0x20) = uVar8;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x20),uVar8);
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
      UnityEngine_UI_LayoutGroup__get_rectChildren();
      *(undefined8 *)(param_1 + 0x28) = uVar8;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28),uVar8);
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
      FUN_05e5e7d0(uVar8,0x1000,0);
      *(undefined8 *)(param_1 + 0x30) = uVar8;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x30),uVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


