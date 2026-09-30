/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<StylePropertyAnimationSystem.Values.StyleData<TransformOrigin>>
ENTRY_POINT: 023f89f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x023f8b94) */

undefined8
System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<TransformOrigin>>
          (void)

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
  undefined8 unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  undefined8 *puVar10;
  void *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  
  plVar6 = *(long **)(unaff_x23 + 0x38);
  if (plVar6 == (long *)0x0) {
    FUN_01ecafa0();
    plVar6 = *(long **)(unaff_x23 + 0x38);
  }
  uVar2 = *(uint *)(*plVar6 + 0xfc);
  puVar10 = (undefined8 *)(&stack0x00000000 + -((ulong)uVar2 + 0xf & 0x1fffffff0));
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_03910d44(0,0);
  if (-1 < *(int *)(**(long **)(unaff_x23 + 0x38) + 0x28)) {
    unaff_x25 = (void *)(unaff_x29 + -0x40);
  }
  memcpy(puVar10,unaff_x25,(ulong)uVar2);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_039109dc(plVar6[3],0);
  puVar1 = (undefined8 *)(*(long **)(unaff_x23 + 0x38))[1];
  uVar4 = *puVar1;
  if (-1 < *(int *)(**(long **)(unaff_x23 + 0x38) + 0x28)) {
    puVar10 = (undefined8 *)*puVar10;
  }
  *(undefined8 **)(unaff_x29 + -0x38) = puVar10;
  *(undefined8 *)(unaff_x29 + -0x30) = uVar3;
  *(undefined4 *)(unaff_x29 + -0xc) = unaff_w22;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x21;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
  (*(code *)puVar1[2])(uVar4,puVar1,0,unaff_x29 + -0x38);
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
        goto LAB_023f8b4c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar6,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_023f8b4c:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


