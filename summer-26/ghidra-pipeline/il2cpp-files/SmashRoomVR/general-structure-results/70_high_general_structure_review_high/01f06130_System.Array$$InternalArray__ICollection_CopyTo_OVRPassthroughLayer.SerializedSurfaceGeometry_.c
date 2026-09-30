/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 01f06130
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,undefined8 ****param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  void *__dest;
  long *plVar8;
  undefined8 ***pppuStack_10;
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  plVar7 = *(long **)(param_3 + 0x38);
  pppuStack_10 = param_2;
  if (plVar7 == (long *)0x0) {
    FUN_01ae9ed0(param_3);
    plVar7 = *(long **)(param_3 + 0x38);
  }
  uVar1 = *(uint *)(*plVar7 + 0xfc);
  __dest = (void *)((long)&pppuStack_10 - ((ulong)uVar1 + 0xf & 0x1fffffff0));
  lVar3 = FUN_03349ae8(param_1,0);
  if (lVar3 != 0) {
    plVar8 = *(long **)(param_3 + 0x38);
    plVar7 = *(long **)(lVar3 + 0x38);
    if (-1 < *(int *)(*plVar8 + 0x28)) {
      param_2 = &pppuStack_10;
    }
    memcpy(__dest,param_2,(ulong)uVar1);
    lVar4 = thunk_FUN_01afa70c(*plVar8,__dest);
    if (plVar7 != (long *)0x0) {
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
        uVar6 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar6,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar7[4] = lVar4;
      thunk_FUN_01b4f09c(plVar7 + 4,lVar4);
      uVar6 = FUN_03337144(lVar3,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_03337a94(*(long *)(param_1 + 0x18),lVar3,0);
        FUN_033371c0(lVar3,uVar6,0);
        if (*(long *)(lVar2 + 0x28) == lStack_8) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


