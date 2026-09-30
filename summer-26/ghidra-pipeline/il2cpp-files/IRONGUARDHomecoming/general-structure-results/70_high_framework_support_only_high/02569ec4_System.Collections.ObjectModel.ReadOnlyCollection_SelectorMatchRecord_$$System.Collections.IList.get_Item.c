/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<SelectorMatchRecord>$$System.Collections.IList.get_Item
ENTRY_POINT: 02569ec4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<SelectorMatchRecord>__System_Collections_IList_get_Item
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined8 unaff_x20;
  long *plVar11;
  long unaff_x23;
  long unaff_x29;
  
  FUN_01bc52e4(param_2,*(undefined8 *)(**(long **)(*(long *)(param_1 + 0x20) + 0xc0) + 0x80),
               0xffffffff);
  if (*(int *)(*(long *)Method_System_Collections_CollectionBase_System_Collections_IList_Remove__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar2 = FUN_03ec8718(*(undefined8 *)Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__,
                       0);
  puVar3 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) +
                                                   0xc0) + 0x80) + 0x60);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar6 = *(undefined8 **)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x18)
  ;
  uVar4 = *puVar6;
  *(undefined8 *)(unaff_x29 + -0x10) = *puVar3;
  (*(code *)puVar6[2])(uVar4,puVar6,lVar2,unaff_x29 + -0x10);
  puVar3 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) +
                                                   0xc0) + 0x80) + 0x60);
  plVar11 = (long *)*puVar3;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44(lVar2);
  }
  lVar7 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02569fe8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar11,lVar2,0);
LAB_02569fe8:
  uVar4 = (*(code *)*puVar3)(plVar11,puVar3[1]);
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80)
               + 0xe0,uVar4);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  do {
    puVar3 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar11 = (long *)*puVar3;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar2 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0256a0d4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_0256a0d4:
    uVar1 = (*(code *)*puVar3)(plVar11,puVar3[1]);
    FUN_01bc5068(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x100,uVar1 & 1);
    pcVar5 = (char *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x100);
    if (*pcVar5 != '\0') {
      puVar3 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      plVar11 = (long *)*puVar3;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44(lVar2);
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_0256a200;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_0256a1e8;
    }
    pcVar5 = (char *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x100);
  } while (*pcVar5 != '\0');
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
            (*(undefined8 *)(unaff_x29 + -0x18));
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80)
               + 0xe0,0);
  uVar10 = 0;
  goto LAB_0256a27c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0256a1e8:
    if (*(long *)(piVar9 + -2) == lVar2) {
      lVar2 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
      goto System_Collections_ObjectModel_ReadOnlyCollection<SerializationNode>__get_Count;
    }
  }
LAB_0256a200:
  lVar2 = FUN_01ecb238(plVar11,lVar2,0);
System_Collections_ObjectModel_ReadOnlyCollection<SerializationNode>__get_Count:
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
  lVar2 = *(long *)(lVar2 + 8);
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,plVar11,unaff_x29 + -0x10);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar10 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),1);
LAB_0256a27c:
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


