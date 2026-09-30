/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<StylePropertyAnimationSystem.Values.StyleData<Translate>>
ENTRY_POINT: 023f8a40
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


/* WARNING: Removing unreachable block (ram,0x023f8b94) */

undefined8
System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<Translate>>
          (void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  size_t unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  plVar1 = (long *)FUN_03910d44(0,0);
  if (-1 < *(int *)(**(long **)(unaff_x23 + 0x38) + 0x28)) {
    unaff_x25 = (void *)(unaff_x29 + -0x40);
  }
  memcpy(unaff_x24,unaff_x25,unaff_x26);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = FUN_039109dc(plVar1[3],0);
  puVar5 = (undefined8 *)(*(long **)(unaff_x23 + 0x38))[1];
  uVar3 = *puVar5;
  if (-1 < *(int *)(**(long **)(unaff_x23 + 0x38) + 0x28)) {
    unaff_x24 = (undefined8 *)*unaff_x24;
  }
  *(undefined8 **)(unaff_x29 + -0x38) = unaff_x24;
  *(undefined8 *)(unaff_x29 + -0x30) = uVar2;
  *(undefined4 *)(unaff_x29 + -0xc) = unaff_w22;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x21;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
  (*(code *)puVar5[2])(uVar3,puVar5,0,unaff_x29 + -0x38);
  if (plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = (long *)FUN_039109dc(plVar1[3],0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0));
  lVar6 = *plVar1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_023f8b4c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f8b4c:
  (*(code *)*puVar5)(plVar1,puVar5[1]);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


