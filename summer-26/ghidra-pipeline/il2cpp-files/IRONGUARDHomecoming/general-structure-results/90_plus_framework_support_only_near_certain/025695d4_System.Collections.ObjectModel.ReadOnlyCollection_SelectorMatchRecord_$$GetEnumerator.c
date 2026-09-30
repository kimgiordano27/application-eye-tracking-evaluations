/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<SelectorMatchRecord>$$GetEnumerator
ENTRY_POINT: 025695d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<SelectorMatchRecord>__GetEnumerator(void)

{
  undefined *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  ulong in_x10;
  undefined4 unaff_w19;
  undefined4 uVar7;
  long *plVar8;
  long unaff_x22;
  long unaff_x29;
  
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
  piVar2 = (int *)thunk_FUN_01ee7388();
  if (*piVar2 == 0) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar3 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20)
                                                     + 0xc0) + 0x80) + 0x60);
    plVar8 = (long *)*puVar3;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) ==
            *(long *)
             Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
           ) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_025696c0;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                          ,0);
LAB_025696c0:
    uVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x10),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80
                          ) + 0xa0,uVar4);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_02569708:
    puVar3 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    plVar8 = (long *)*puVar3;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_02569780;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02569780:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) != 0) {
      puVar3 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                 0x20) + 0xc0) + 0x80) + 0xa0);
      plVar8 = (long *)*puVar3;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar2 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar2 + 1) * 0x10 + 0x138);
            goto FUN_02569844;
          }
          uVar6 = uVar6 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,1);
FUN_02569844:
      uVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      uVar4 = FUN_01f08934(uVar4,lVar5,in_x9 - (in_x10 & 0x1fffffff0));
      FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x10),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                            0x80) + 0x20,uVar4,unaff_w19);
      uVar7 = 1;
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),1);
      goto LAB_025698c8;
    }
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x10));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x10),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80
                          ) + 0xa0,0);
  }
  else if (*piVar2 == 1) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    goto LAB_02569708;
  }
  uVar7 = 0;
LAB_025698c8:
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


