/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<ValueTuple<object,-int>>
ENTRY_POINT: 023f96a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x023f98b4) */
/* WARNING: Removing unreachable block (ram,0x023f98c0) */

void System_Array__InternalArray__ICollection_Remove<ValueTuple<object,_int>>(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  long *plVar7;
  undefined8 *unaff_x23;
  long *unaff_x24;
  size_t unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar1 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_ResetModified__);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_029dad5c(plVar1,*(undefined8 *)
                       Method_System_Configuration_ConfigurationElement_get_Properties__);
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *unaff_x24;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
        goto LAB_023f9740;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023f9740:
  (*(code *)*puVar2)();
  plVar7 = *(long **)(unaff_x22 + 0x38);
  if (-1 < *(int *)(*plVar7 + 0x28)) {
    unaff_x21 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(unaff_x23,unaff_x21,unaff_x25);
  puVar2 = (undefined8 *)plVar7[1];
  uVar3 = *puVar2;
  if (-1 < *(int *)(*plVar7 + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
  *(long **)(unaff_x29 + -0x18) = unaff_x24;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
  (*(code *)puVar2[2])(uVar3,puVar2,0,unaff_x29 + -0x20);
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_023f9800;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_023f9800:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  plVar1 = *(long **)(unaff_x29 + -0x30);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_023f9870;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f9870:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


