/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-EventInterestReflectionUtils.DefaultEventInterests>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02a9b5d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Collections_Generic_Dictionary<object,_EventInterestReflectionUtils_DefaultEventInterests>__System_Collections_IEnumerable_GetEnumerator
          (long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  undefined4 uVar8;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *pvVar9;
  long *plVar10;
  long unaff_x24;
  long unaff_x29;
  
  pvVar9 = (void *)(param_1 - in_x9);
  memset(pvVar9,0,unaff_x19);
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
  piVar2 = (int *)thunk_FUN_01ee7388();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    pvVar9 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x60);
    memcpy(unaff_x20,pvVar9,unaff_x19);
    FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x20);
    uVar8 = 1;
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),1);
    goto LAB_02a9b99c;
  }
  if (iVar1 == 1) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    plVar10 = (long *)*puVar4;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar2 * 0x10 + 0x138);
          goto FUN_02a9b77c;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,0);
FUN_02a9b77c:
    uVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0xe0,uVar3);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);

    System_Collections_Generic_Dictionary<object,_EventInterestReflectionUtils_DefaultEventInterests>__System_Collections_IDictionary_set_Item
    :
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar10 = (long *)*puVar4;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_02a9b83c;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02a9b83c:
    uVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((uVar7 & 1) != 0) {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      plVar10 = (long *)*puVar4;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar5) {
            lVar5 = lVar6 + (long)*piVar2 * 0x10 + 0x138;
            goto LAB_02a9b91c;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar7 != 0);
      }
      lVar5 = FUN_01ecb238(plVar10,lVar5,0);
LAB_02a9b91c:
      *(void **)(unaff_x29 + -0x10) = unaff_x20;
      lVar5 = *(long *)(lVar5 + 8);
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,unaff_x29 + -0x10);
      memcpy(pvVar9,unaff_x20,unaff_x19);
      memcpy(unaff_x21,pvVar9,unaff_x19);
      FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x20);
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),2);
      uVar8 = 1;
      goto LAB_02a9b99c;
    }
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x18));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0xe0,0);
  }
  else if (iVar1 == 2) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    goto 
    System_Collections_Generic_Dictionary<object,_EventInterestReflectionUtils_DefaultEventInterests>__System_Collections_IDictionary_set_Item
    ;
  }
  uVar8 = 0;
LAB_02a9b99c:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


