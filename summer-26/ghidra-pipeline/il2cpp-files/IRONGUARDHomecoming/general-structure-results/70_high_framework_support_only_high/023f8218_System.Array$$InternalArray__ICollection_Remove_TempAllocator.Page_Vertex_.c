/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<TempAllocator.Page<Vertex>>
ENTRY_POINT: 023f8218
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


/* WARNING: Removing unreachable block (ram,0x023f8344) */

undefined8
System_Array__InternalArray__ICollection_Remove<TempAllocator_Page<Vertex>>
          (long param_1,void *param_2,undefined8 param_3,size_t param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x23;
  void *unaff_x24;
  long unaff_x26;
  long unaff_x29;
  
  if (-1 < *(int *)(param_1 + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x38);
  }
  memcpy(param_2,unaff_x24,param_4);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 023f8238 to 024f825f has its CatchHandler @ 023f8428 */
  uVar1 = FUN_039109dc(unaff_x19[3],0);
  puVar4 = (undefined8 *)(*(long **)(unaff_x22 + 0x38))[1];
  uVar2 = *puVar4;
  if (-1 < *(int *)(**(long **)(unaff_x22 + 0x38) + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  *(undefined8 **)(unaff_x29 + -0x30) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x28) = uVar1;
  *(undefined4 *)(unaff_x29 + -0xc) = unaff_w21;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
  (*(code *)puVar4[2])(uVar2,puVar4,0,unaff_x29 + -0x30);
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar3 = (long *)FUN_039109dc(unaff_x19[3],0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto FUN_023f8300;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
FUN_023f8300:
  (*(code *)*puVar4)();
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}


