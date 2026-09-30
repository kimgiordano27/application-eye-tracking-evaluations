/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<TextProcessingStack<float>>
ENTRY_POINT: 023f8e78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023f8fbc) */
/* WARNING: Removing unreachable block (ram,0x023f8fc8) */

void System_Array__InternalArray__ICollection_Remove<TextProcessingStack<float>>
               (void *param_1,undefined8 param_2,size_t param_3)

{
  char in_NG;
  char in_OV;
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  void *unaff_x20;
  long *plVar6;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x26;
  long unaff_x29;
  
  if (in_NG == in_OV) {
    unaff_x20 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(param_1,unaff_x20,param_3);
                    /* catch() { ... } // from try @ 023f8e6c with catch @ 023f8e84 */
  puVar2 = (undefined8 *)unaff_x22[1];
  uVar1 = *puVar2;
  if (-1 < *(int *)(*unaff_x22 + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x21;
  (*(code *)puVar2[2])(uVar1,puVar2,0,unaff_x29 + -0x18);
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_023f8f0c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023f8f0c:
    (*(code *)*puVar2)();
  }
  plVar6 = *(long **)(unaff_x29 + -0x28);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_023f8f7c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f8f7c:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


