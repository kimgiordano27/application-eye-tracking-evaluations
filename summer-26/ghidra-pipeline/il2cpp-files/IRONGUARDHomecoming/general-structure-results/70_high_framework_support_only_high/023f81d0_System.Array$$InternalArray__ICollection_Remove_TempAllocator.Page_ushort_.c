/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<TempAllocator.Page<ushort>>
ENTRY_POINT: 023f81d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023f8344) */

undefined8 System_Array__InternalArray__ICollection_Remove<TempAllocator_Page<ushort>>(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined8 *puVar9;
  void *unaff_x24;
  size_t unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  puVar9 = (undefined8 *)(param_1 - (unaff_x25 + 0xf & 0x1fffffff0));
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar2 = (long *)FUN_03910d44(0,0);
  if (-1 < *(int *)(**(long **)(unaff_x22 + 0x38) + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x38);
  }
  memcpy(puVar9,unaff_x24,unaff_x25);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_039109dc(plVar2[3],0);
  puVar1 = (undefined8 *)(*(long **)(unaff_x22 + 0x38))[1];
  uVar4 = *puVar1;
  if (-1 < *(int *)(**(long **)(unaff_x22 + 0x38) + 0x28)) {
    puVar9 = (undefined8 *)*puVar9;
  }
  *(undefined8 **)(unaff_x29 + -0x30) = puVar9;
  *(undefined8 *)(unaff_x29 + -0x28) = uVar3;
  *(undefined4 *)(unaff_x29 + -0xc) = unaff_w21;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
  (*(code *)puVar1[2])(uVar4,puVar1,0,unaff_x29 + -0x30);
  if (plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)FUN_039109dc(plVar2[3],0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar9 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto FUN_023f8300;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
FUN_023f8300:
  (*(code *)*puVar9)(plVar2,puVar9[1]);
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


