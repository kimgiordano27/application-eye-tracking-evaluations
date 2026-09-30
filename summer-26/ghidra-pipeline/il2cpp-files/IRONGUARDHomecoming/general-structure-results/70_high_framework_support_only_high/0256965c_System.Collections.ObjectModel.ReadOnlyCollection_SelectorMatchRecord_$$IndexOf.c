/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<SelectorMatchRecord>$$IndexOf
ENTRY_POINT: 0256965c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<SelectorMatchRecord>__IndexOf
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 unaff_w19;
  undefined4 uVar7;
  long *plVar8;
  long unaff_x22;
  long unaff_x29;
  
  puVar2 = (undefined8 *)thunk_FUN_01ee7388(param_2,param_1 + 0x60);
  plVar8 = (long *)*puVar2;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
         ) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_025696c0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                        ,0);
LAB_025696c0:
  uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x10),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80)
               + 0xa0,uVar3);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  puVar2 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) +
                                                   0xc0) + 0x80) + 0xa0);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar8 = (long *)*puVar2;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_02569780;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02569780:
  uVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  if ((uVar5 & 1) == 0) {
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x10));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x10),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80
                          ) + 0xa0,0);
    uVar7 = 0;
  }
  else {
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    plVar8 = (long *)*puVar2;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto FUN_02569844;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,1);
FUN_02569844:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    uVar3 = FUN_01f08934(uVar3,lVar4);
    FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x10),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80
                          ) + 0x20,uVar3,unaff_w19);
    uVar7 = 1;
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),1);
  }
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


