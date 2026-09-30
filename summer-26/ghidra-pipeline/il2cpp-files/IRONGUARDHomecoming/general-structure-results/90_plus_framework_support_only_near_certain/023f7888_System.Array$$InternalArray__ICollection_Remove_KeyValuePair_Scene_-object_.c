/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<Scene,-object>>
ENTRY_POINT: 023f7888
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 114
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x023f79e8) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<Scene,_object>>
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long lVar6;
  long unaff_x28;
  long unaff_x29;
  
  if (param_2 != 1) {
    plVar2 = *(long **)(unaff_x29 + -0x28);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_023f79d0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_023f79d0:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  lVar6 = *plVar2;
  __cxa_end_catch();
  plVar2 = *(long **)(unaff_x29 + -0x28);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_023f77ec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f77ec:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar6);
  }
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  memcpy(unaff_x19,unaff_x21,unaff_x20);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


