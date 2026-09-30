/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<SelectorMatchRecord>$$System.Collections.IList.Add
ENTRY_POINT: 02569fa8
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
System_Collections_ObjectModel_ReadOnlyCollection<SelectorMatchRecord>__System_Collections_IList_Add
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined8 unaff_x20;
  long *plVar10;
  long unaff_x23;
  long unaff_x29;
  
  if (in_x9 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02569fe8;
      }
      in_x9 = in_x9 + -1;
      piVar8 = piVar8 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02569fe8:
  uVar3 = (*(code *)*puVar2)();
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80)
               + 0xe0,uVar3);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  do {
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar10 = (long *)*puVar2;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0256a0d4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_0256a0d4:
    uVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    FUN_01bc5068(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x100,uVar1 & 1);
    pcVar4 = (char *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x100);
    if (*pcVar4 != '\0') {
      puVar2 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      plVar10 = (long *)*puVar2;
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
      if (uVar7 == 0) goto LAB_0256a200;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_0256a1e8;
    }
    pcVar4 = (char *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x100);
  } while (*pcVar4 != '\0');
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
            (*(undefined8 *)(unaff_x29 + -0x18));
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80)
               + 0xe0,0);
  uVar9 = 0;
  goto LAB_0256a27c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0256a1e8:
    if (*(long *)(piVar8 + -2) == lVar5) {
      lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
      goto System_Collections_ObjectModel_ReadOnlyCollection<SerializationNode>__get_Count;
    }
  }
LAB_0256a200:
  lVar5 = FUN_01ecb238(plVar10,lVar5,0);
System_Collections_ObjectModel_ReadOnlyCollection<SerializationNode>__get_Count:
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
  lVar5 = *(long *)(lVar5 + 8);
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,unaff_x29 + -0x10);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar9 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),1);
LAB_0256a27c:
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


