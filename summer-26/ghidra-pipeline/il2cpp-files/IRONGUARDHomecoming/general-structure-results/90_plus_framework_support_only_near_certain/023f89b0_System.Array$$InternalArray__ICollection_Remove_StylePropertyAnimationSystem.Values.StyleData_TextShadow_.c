/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<StylePropertyAnimationSystem.Values.StyleData<TextShadow>>
ENTRY_POINT: 023f89b0
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


/* WARNING: Removing unreachable block (ram,0x023f8b94) */

undefined8
System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<TextShadow>>
          (void *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  long unaff_x29;
  undefined8 auStack_40 [8];
  
  lVar3 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar3 + 0x28);
  *(void **)(unaff_x29 + -0x40) = param_1;
  plVar7 = *(long **)(param_5 + 0x38);
  if (plVar7 == (long *)0x0) {
                    /* try { // try from 023f89e0 to 024f89eb has its CatchHandler @ 023f8ae0 */
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__);
                    /* try { // try from 023f89ec to 024f8acf has its CatchHandler @ 023f882c */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    plVar7 = *(long **)(param_5 + 0x38);
    if (plVar7 == (long *)0x0) {
      FUN_01ecafa0(param_5);
      plVar7 = *(long **)(param_5 + 0x38);
    }
  }
  uVar2 = *(uint *)(*plVar7 + 0xfc);
  puVar11 = (undefined8 *)((long)auStack_40 - ((ulong)uVar2 + 0xf & 0x1fffffff0));
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_03910d44(0,0);
  if (-1 < *(int *)(**(long **)(param_5 + 0x38) + 0x28)) {
    param_1 = (void *)(unaff_x29 + -0x40);
  }
  memcpy(puVar11,param_1,(ulong)uVar2);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar4 = FUN_039109dc(plVar7[3],0);
  puVar1 = (undefined8 *)(*(long **)(param_5 + 0x38))[1];
  uVar5 = *puVar1;
  if (-1 < *(int *)(**(long **)(param_5 + 0x38) + 0x28)) {
    puVar11 = (undefined8 *)*puVar11;
  }
  *(undefined8 **)(unaff_x29 + -0x38) = puVar11;
  *(undefined8 *)(unaff_x29 + -0x30) = uVar4;
  *(undefined4 *)(unaff_x29 + -0xc) = param_2;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x20) = param_3;
  *(undefined8 *)(unaff_x29 + -0x18) = param_4;
  (*(code *)puVar1[2])(uVar5,puVar1,0,unaff_x29 + -0x38,param_4);
  if (plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar6 = (long *)FUN_039109dc(plVar7[3],0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar4 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
  lVar8 = *plVar7;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar11 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_023f8b4c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar7,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_023f8b4c:
  (*(code *)*puVar11)(plVar7,puVar11[1]);
  if (*(long *)(lVar3 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


