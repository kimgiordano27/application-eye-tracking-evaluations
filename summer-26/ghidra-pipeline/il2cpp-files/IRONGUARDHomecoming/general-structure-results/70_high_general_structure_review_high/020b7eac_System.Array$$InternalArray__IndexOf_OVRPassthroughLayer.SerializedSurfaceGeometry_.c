/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 020b7eac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__InternalArray__IndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  puVar3 = Method_TMPro_TMP_TextProcessingStack<Color32>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Equals__;
  if ((DAT_0482f924 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Equals__);
    thunk_FUN_01efb3a4(Method_TMPro_TMP_TextProcessingStack<Color32>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<WitRequestOptions>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<WitRequestOptions>_Invoke__);
    DAT_0482f924 = 1;
  }
  uVar4 = FUN_022c59ec(param_1,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_01f51358();
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar3;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    uVar6 = FUN_030f2f44(**(long **)(lVar5 + 0xb8),param_1,
                         *(undefined8 *)
                          Method_UnityEngine_Events_UnityEvent<WitRequestOptions>_Invoke__);
    if ((uVar6 & 1) != 0) {
LAB_020b7fe8:
      FUN_020b8000(param_1);
      return;
    }
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar3;
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)Method_UnityEngine_Events_UnityEvent<WitRequestOptions>__ctor__;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar8 = param_1;
          thunk_FUN_01f51358(plVar8,param_1);
        }
        else {
          FUN_030f2bb4(lVar5,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_020b7fe8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


