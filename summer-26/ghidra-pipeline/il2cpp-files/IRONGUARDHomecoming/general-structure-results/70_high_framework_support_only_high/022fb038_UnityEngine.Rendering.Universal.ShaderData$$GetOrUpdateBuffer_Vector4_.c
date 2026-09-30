/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ShaderData$$GetOrUpdateBuffer<Vector4>
ENTRY_POINT: 022fb038
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022fb0dc) */
/* WARNING: Removing unreachable block (ram,0x022fb0d0) */
/* WARNING: Removing unreachable block (ram,0x022fb0d8) */
/* WARNING: Removing unreachable block (ram,0x022fb158) */

void UnityEngine_Rendering_Universal_ShaderData__GetOrUpdateBuffer<Vector4>(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x23;
  long *unaff_x24;
  long unaff_x27;
  long unaff_x29;
  
  memcpy(unaff_x23,unaff_x21,unaff_x20);
  if (unaff_x24 != (long *)0x0) {
    lVar2 = *unaff_x24;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_022fb0b8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_022fb0b8:
    (*(code *)*puVar1)();
  }
  memcpy(unaff_x21,unaff_x23,unaff_x20);
  memcpy(unaff_x19,unaff_x21,unaff_x20);
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


