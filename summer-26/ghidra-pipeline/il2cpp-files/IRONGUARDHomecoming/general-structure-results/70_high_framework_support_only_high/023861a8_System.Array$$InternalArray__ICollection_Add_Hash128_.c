/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<Hash128>
ENTRY_POINT: 023861a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__ICollection_Add<Hash128>(void)

{
  void *__src;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int unaff_w22;
  size_t unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long lVar6;
  long unaff_x29;
  
  lVar6 = *(long *)(unaff_x29 + -0x58);
  if (unaff_x26 != (long *)0x0) {
    lVar3 = *unaff_x26;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02386204;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02386204:
    (*(code *)*puVar1)();
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if ((unaff_w22 == 5) || (unaff_w22 == 0)) {
    lVar3 = *(long *)(unaff_x20 + 0x38);
    __src = *(void **)(unaff_x29 + -0x50);
    if (-1 < *(int *)(*(long *)(lVar3 + 8) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x48);
    }
    memcpy(unaff_x21,__src,unaff_x23);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar1 = *(undefined8 **)(lVar3 + 0x60);
    uVar2 = *puVar1;
    if (-1 < *(int *)(*(long *)(lVar3 + 8) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
    (*(code *)puVar1[2])(uVar2);
  }
  if (*(long *)(lVar6 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


