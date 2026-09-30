/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<Nullable<ByteEnum>>
ENTRY_POINT: 023f8188
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023f8344) */

undefined8
System_Array__InternalArray__ICollection_Remove<Nullable<ByteEnum>>
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 unaff_x20;
  long unaff_x22;
  undefined8 *puVar10;
  void *unaff_x24;
  long unaff_x26;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x38) = param_1;
  plVar6 = *(long **)(param_4 + 0x38);
  if (plVar6 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    plVar6 = *(long **)(unaff_x22 + 0x38);
    if (plVar6 == (long *)0x0) {
      FUN_01ecafa0();
      plVar6 = *(long **)(unaff_x22 + 0x38);
    }
  }
  uVar2 = *(uint *)(*plVar6 + 0xfc);
  puVar10 = (undefined8 *)(&stack0x00000000 + -((ulong)uVar2 + 0xf & 0x1fffffff0));
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_03910d44(0,0);
  if (-1 < *(int *)(**(long **)(unaff_x22 + 0x38) + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x38);
  }
  memcpy(puVar10,unaff_x24,(ulong)uVar2);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_039109dc(plVar6[3],0);
  puVar1 = (undefined8 *)(*(long **)(unaff_x22 + 0x38))[1];
  uVar4 = *puVar1;
  if (-1 < *(int *)(**(long **)(unaff_x22 + 0x38) + 0x28)) {
    puVar10 = (undefined8 *)*puVar10;
  }
  *(undefined8 **)(unaff_x29 + -0x30) = puVar10;
  *(undefined8 *)(unaff_x29 + -0x28) = uVar3;
  *(undefined4 *)(unaff_x29 + -0xc) = param_2;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
  (*(code *)puVar1[2])(uVar4,puVar1,0,unaff_x29 + -0x30);
  if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)FUN_039109dc(plVar6[3],0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
  lVar7 = *plVar6;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto FUN_023f8300;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar6,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
FUN_023f8300:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


