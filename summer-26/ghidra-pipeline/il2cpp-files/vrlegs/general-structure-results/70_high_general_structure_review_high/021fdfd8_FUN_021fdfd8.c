/*
FUNCTION_NAME: FUN_021fdfd8
ENTRY_POINT: 021fdfd8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_3;strong_file_logging_hits_3
*/


void FUN_021fdfd8(undefined8 param_1,void *param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong __n;
  void *__dest;
  void *__src;
  long *plVar6;
  void *local_80;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar4 + 0x28) + 0xfc);
  uVar5 = __n + 0xf & 0x1fffffff0;
  __dest = (void *)((long)&local_80 - uVar5);
  __src = (void *)((long)__dest - uVar5);
  piVar2 = (int *)thunk_FUN_01a59484(param_1,*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x80));
  if (0 < *piVar2) {
    lVar4 = thunk_FUN_01a59484(param_1,*(undefined8 *)
                                        (*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                  0x10) + 0x80));
    plVar6 = *(long **)(lVar4 + 8);
    memcpy(__dest,param_2,__n);
    if (plVar6 == (long *)0x0) {
HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68__MoveNext:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *(long *)(*plVar6 + 0x1b0);
    local_80 = __dest;
    uStack_78 = param_1;
    local_70 = __src;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar6,&local_80,__src);
    memcpy(param_2,__src,__n);
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    FUN_01ab6954(lVar4,param_2,__src);
    lVar4 = thunk_FUN_01a59484(param_1,*(undefined8 *)
                                        (*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                  0x10) + 0x80));
    if ((*(long *)(lVar4 + 0x10) != 0) &&
       (piVar2 = (int *)thunk_FUN_01a59484(param_1,*(undefined8 *)
                                                    (*(long *)(*(long *)(*(long *)(param_3 + 0x20) +
                                                                        0xc0) + 0x10) + 0x80)),
       0 < *piVar2 + -1)) {
      lVar4 = 0;
      do {
        lVar3 = thunk_FUN_01a59484(param_1,*(undefined8 *)
                                            (*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                      0x10) + 0x80));
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 == 0)
        goto HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68__MoveNext;
        if (*(uint *)(lVar3 + 0x18) <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar6 = *(long **)(lVar3 + lVar4 * 8 + 0x20);
        memcpy(__dest,param_2,__n);
        if (plVar6 == (long *)0x0)
        goto HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68__MoveNext;
        lVar3 = *(long *)(*plVar6 + 0x1b0);
        local_80 = __dest;
        uStack_78 = param_1;
        local_70 = __src;
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar6,&local_80,__src);
        memcpy(param_2,__src,__n);
        lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        FUN_01ab6954(lVar3,param_2,__src);
        piVar2 = (int *)thunk_FUN_01a59484(param_1,*(undefined8 *)
                                                    (*(long *)(*(long *)(*(long *)(param_3 + 0x20) +
                                                                        0xc0) + 0x10) + 0x80));
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *piVar2 + -1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


