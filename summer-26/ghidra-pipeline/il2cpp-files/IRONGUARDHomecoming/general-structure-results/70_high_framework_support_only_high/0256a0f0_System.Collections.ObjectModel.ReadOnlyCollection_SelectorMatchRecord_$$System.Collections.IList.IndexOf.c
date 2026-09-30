/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<SelectorMatchRecord>$$System.Collections.IList.IndexOf
ENTRY_POINT: 0256a0f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<SelectorMatchRecord>__System_Collections_IList_IndexOf
          (long param_1,uint param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined8 unaff_x20;
  long *plVar8;
  long unaff_x23;
  long unaff_x29;
  
  while( true ) {
    FUN_01bc5068(*(undefined8 *)(unaff_x29 + -0x18),*(long *)(param_1 + 0x80) + 0x100,param_2 & 1);
    pcVar2 = (char *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x100);
    if (*pcVar2 != '\0') break;
    pcVar2 = (char *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x100);
    if (*pcVar2 == '\0') {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x18));
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0xe0,0);
      uVar7 = 0;
      goto LAB_0256a27c;
    }
    puVar1 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar8 = (long *)*puVar1;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0256a0d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_0256a0d4:
    param_2 = (*(code *)*puVar1)(plVar8,puVar1[1]);
    param_1 = **(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0);
  }
  puVar1 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) +
                                                   0xc0) + 0x80) + 0xe0);
  plVar8 = (long *)*puVar1;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44(lVar3);
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
        goto System_Collections_ObjectModel_ReadOnlyCollection<SerializationNode>__get_Count;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar3 = FUN_01ecb238(plVar8,lVar3,0);
System_Collections_ObjectModel_ReadOnlyCollection<SerializationNode>__get_Count:
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
  lVar3 = *(long *)(lVar3 + 8);
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar8,unaff_x29 + -0x10);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar7 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),1);
LAB_0256a27c:
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


