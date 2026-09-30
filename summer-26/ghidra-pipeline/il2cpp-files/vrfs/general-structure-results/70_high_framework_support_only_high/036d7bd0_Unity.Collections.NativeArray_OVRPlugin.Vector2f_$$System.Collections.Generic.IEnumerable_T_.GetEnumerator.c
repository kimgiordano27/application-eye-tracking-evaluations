/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 036d7bd0
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x25;
  undefined8 unaff_x29;
  
  plVar1 = (long *)thunk_FUN_015d0480();
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_036d7998;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar1,*unaff_x25,0);
LAB_036d7998:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0164c380();
  }
  if (unaff_w22 != 0) {
    return;
  }
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0xd8) = unaff_x29;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0xd8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


