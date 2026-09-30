/*
FUNCTION_NAME: VRM.VrmDeserializer$$Deserialize_vrm_secondaryAnimation_colliderGroups
ENTRY_POINT: 03888020
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x038888f8) */
/* WARNING: Removing unreachable block (ram,0x03888900) */
/* WARNING: Removing unreachable block (ram,0x038887e4) */
/* WARNING: Removing unreachable block (ram,0x038887e8) */
/* WARNING: Removing unreachable block (ram,0x03888354) */
/* WARNING: Removing unreachable block (ram,0x038880f4) */

void VRM_VrmDeserializer__Deserialize_vrm_secondaryAnimation_colliderGroups(undefined **param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  do {
    uVar4 = unaff_d9;
    FUN_01fcb1a4(unaff_d8,unaff_x23,unaff_x24,0,unaff_x22 & 0xffffffff,*(undefined8 *)param_1[0xe8])
    ;
    lVar5 = *(long *)(unaff_x21 + 0x30);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar5 = lVar5 + unaff_x22 * 8;
    *(int *)(lVar5 + 0x20) = (int)unaff_d8;
    *(int *)(lVar5 + 0x24) = (int)unaff_d9;
    lVar5 = *(long *)PTR_DAT_03cdb2b0;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)PTR_DAT_03cdb2b0;
    }
    if (unaff_x22 == *(uint *)(*(long *)(lVar5 + 0xb8) + 8)) {
      FUN_03888da4(unaff_d8,unaff_d9,unaff_x23,unaff_x24,0);
      FUN_01fb2230(unaff_d8,unaff_x23,unaff_x24,0,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_Dispose__
                  );
      uVar4 = unaff_d9;
    }
    if (in_stack_00000028 == 0) {
LAB_038888e8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_038842b0();
    unaff_d9 = uVar4;
LAB_03888358:
    do {
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if (lVar5 == 0) goto LAB_038888e8;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_038888e4;
      puVar2 = (undefined8 *)(lVar5 + unaff_x22 * 8 + 0x20);
      *puVar2 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar2,0);
      lVar5 = *(long *)(unaff_x21 + 0x28);
      if (lVar5 == 0) goto LAB_038888e8;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_038888e4;
      plVar10 = *(long **)(lVar5 + unaff_x22 * 8 + 0x20);
      uVar6 = unaff_x22;
      if (plVar10 != (long *)0x0) {
        lVar5 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x27) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              uVar4 = unaff_d9;
              goto LAB_038883ec;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_01a472ec(plVar10,*unaff_x27,1);
        uVar4 = unaff_d9;
LAB_038883ec:
        uVar13 = (*(code *)*puVar2)(plVar10,puVar2[1]);
        lVar5 = *(long *)(unaff_x21 + 0x30);
        if (lVar5 == 0) goto LAB_038888e8;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_038888e4;
        lVar5 = lVar5 + unaff_x22 * 8;
        *(int *)(lVar5 + 0x20) = (int)uVar13;
        *(int *)(lVar5 + 0x24) = (int)uVar4;
        lVar5 = *plVar10;
        bVar1 = *(byte *)(*unaff_x29 + 0x130);
        unaff_d9 = uVar4;
        if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x29)) {
          lVar5 = (**(code **)(lVar5 + 0x188))(plVar10,*(undefined8 *)(lVar5 + 400));
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<TimelineClip>_get_Current__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)
                                Method_System_Collections_Generic_List_Enumerator<TimelineClip>_get_Current__
                              );
          }
          lVar3 = FUN_021c3474(*(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<TimeValue>_MoveNext__
                              );
          if (lVar5 != lVar3) {
            lVar5 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<TimelineClip>_Dispose__
                        + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)
                                  Method_System_Collections_Generic_List_Enumerator<TimelineClip>_Dispose__
                                );
            }
            lVar3 = FUN_021c3474(*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<TimeValue>_Dispose__
                                );
            if (lVar5 != lVar3) {
              lVar5 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<string,_List<MB3_MeshCombinerSingle_MBBlendShape>>_Add__
                          + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)
                                    Method_System_Collections_Generic_Dictionary<string,_List<MB3_MeshCombinerSingle_MBBlendShape>>_Add__
                                  );
              }
              lVar3 = FUN_021c3474(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_List<TypeSpec>>_TryGetValue__
                                  );
              if (lVar5 != lVar3) {
                lVar5 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<TimelineClip>_MoveNext__
                            + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)
                                      Method_System_Collections_Generic_List_Enumerator<TimelineClip>_MoveNext__
                                    );
                }
                lVar3 = FUN_021c3474(*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<TimeValue>_get_Current__
                                    );
                if (lVar5 != lVar3) {
                  lVar5 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_HashSet_Enumerator<Tick>_MoveNext__
                              + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)
                                        Method_System_Collections_Generic_HashSet_Enumerator<Tick>_MoveNext__
                                      );
                  }
                  lVar3 = FUN_021c3474(*(undefined8 *)
                                        Method_System_Collections_Generic_HashSet_Enumerator<Tick>_Dispose__
                                      );
                  if (lVar5 != lVar3) {
                    lVar5 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400))
                    ;
                    if (*(int *)(*(long *)
                                  Method_System_Collections_Generic_HashSet_Enumerator<Tick>_get_Current__
                                + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)
                                          Method_System_Collections_Generic_HashSet_Enumerator<Tick>_get_Current__
                                        );
                    }
                    lVar3 = FUN_021c3474(*(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<ThreadType>_get_Current__
                                        );
                    if (lVar5 != lVar3) goto LAB_038885d0;
                  }
                  FUN_0388420c(&stack0x00000010);
                  FUN_03888a34(uVar13,uVar4,unaff_x23,unaff_x24,0,unaff_x22 & 0xffffffff);
                  unaff_d9 = uVar4;
                  FUN_01fcb1a4(uVar13,unaff_x23,unaff_x24,0,unaff_x22 & 0xffffffff,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_MoveNext__
                              );
                  lVar5 = *(long *)PTR_DAT_03cdb2b0;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar5 = *(long *)PTR_DAT_03cdb2b0;
                  }
                  if (unaff_x22 == *(uint *)(*(long *)(lVar5 + 0xb8) + 8)) {
                    FUN_03888da4(uVar13,uVar4,unaff_x23,unaff_x24,plVar10);
                    FUN_01fb2230(uVar13,unaff_x23,unaff_x24,plVar10,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_Dispose__
                                );
                    unaff_d9 = uVar4;
                  }
                  if (in_stack_00000010 != 0) {
                    FUN_038842b0();
                    goto LAB_038885d0;
                  }
                  goto LAB_038888e8;
                }
              }
            }
          }
          FUN_0388420c(&stack0x00000018);
          FUN_03888da4(uVar13,uVar4,unaff_x23,unaff_x24,plVar10);
          FUN_01fb2230(uVar13,unaff_x23,unaff_x24,plVar10,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_Dispose__
                      );
          if (in_stack_00000018 == 0) goto LAB_038888e8;
          FUN_038842b0();
          unaff_d9 = uVar4;
        }
LAB_038885d0:
        lVar5 = *(long *)(unaff_x21 + 0x28);
        if (lVar5 == 0) goto LAB_038888e8;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_038888e4;
        puVar2 = (undefined8 *)(lVar5 + unaff_x22 * 8 + 0x20);
        *puVar2 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar2,0);
      }
LAB_03888664:
      plVar10 = *(long **)(unaff_x21 + 0x18);
      unaff_x22 = uVar6 + 1;
      if (plVar10 == (long *)0x0) goto LAB_038888e8;
      uVar7 = (ulong)*(uint *)(plVar10 + 3);
      if ((long)(int)*(uint *)(plVar10 + 3) <= (long)unaff_x22) {
        return;
      }
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if (lVar5 == 0) goto LAB_038888e8;
      if ((*(uint *)(lVar5 + 0x18) <= unaff_x22) || (uVar7 <= unaff_x22)) goto LAB_038888e4;
      plVar9 = *(long **)(lVar5 + unaff_x22 * 8 + 0x20);
      plVar11 = plVar10 + uVar6 + 5;
      unaff_x23 = *plVar11;
      lVar5 = *(long *)(unaff_x21 + 0x10);
      if (lVar5 == 0) goto LAB_038888e8;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_038888e4;
      unaff_x24 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      if (unaff_x24 == unaff_x23) {
        uVar6 = unaff_x22;
        if (plVar9 == (long *)0x0) {
          lVar5 = *(long *)(unaff_x21 + 0x28);
          if (lVar5 != 0) {
            if (unaff_x22 < *(uint *)(lVar5 + 0x18)) goto code_r0x0388810c;
            goto LAB_038888e4;
          }
          goto LAB_038888e8;
        }
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x28) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
              goto LAB_03888608;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_01a472ec(plVar9,*unaff_x28,5);
LAB_03888608:
        uVar12 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        lVar5 = *(long *)(unaff_x21 + 0x30);
        if (lVar5 != 0) {
          if (unaff_x22 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = lVar5 + unaff_x22 * 8;
            goto LAB_03888660;
          }
          goto LAB_038888e4;
        }
        goto LAB_038888e8;
      }
      if (unaff_x24 != 0) {
        lVar5 = thunk_FUN_01a89d6c(unaff_x24,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar5 == 0) {
          uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar4,0);
        }
        uVar7 = (ulong)*(uint *)(plVar10 + 3);
      }
      if (uVar7 <= unaff_x22) goto LAB_038888e4;
      *plVar11 = unaff_x24;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,unaff_x24);
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x28) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
              uVar4 = unaff_d9;
              goto LAB_0388816c;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01a472ec(plVar9,*unaff_x28,5);
        uVar4 = unaff_d9;
LAB_0388816c:
        uVar13 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        lVar5 = *(long *)(unaff_x21 + 0x30);
        if (lVar5 == 0) goto LAB_038888e8;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x22) {
LAB_038888e4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar5 = lVar5 + unaff_x22 * 8;
        *(int *)(lVar5 + 0x20) = (int)uVar13;
        *(int *)(lVar5 + 0x24) = (int)uVar4;
        lVar5 = *plVar9;
        bVar1 = *(byte *)(*unaff_x29 + 0x130);
        unaff_d9 = uVar4;
        if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29))
        goto LAB_03888358;
        lVar5 = (**(code **)(lVar5 + 0x188))(plVar9,*(undefined8 *)(lVar5 + 400));
        if (*(int *)(*(long *)PTR_DAT_03cdb2a0 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cdb2a0);
        }
        lVar3 = FUN_021c3474(*(undefined8 *)PTR_DAT_03cdb298);
        if (lVar5 != lVar3) {
          lVar5 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
          if (*(int *)(*(long *)PTR_DAT_03cd7cb0 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7cb0);
          }
          lVar3 = FUN_021c3474(*(undefined8 *)PTR_DAT_03cd7c98);
          if (lVar5 != lVar3) {
            lVar5 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
            if (*(int *)(*(long *)PTR_DAT_03cd7ca8 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7ca8);
            }
            lVar3 = FUN_021c3474(*(undefined8 *)PTR_DAT_03cd7ca0);
            if (lVar5 != lVar3) {
              lVar5 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<SceneNode,_SVGDocument_MaskData>_set_Item__
                          + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)
                                    Method_System_Collections_Generic_Dictionary<SceneNode,_SVGDocument_MaskData>_set_Item__
                                  );
              }
              lVar3 = FUN_021c3474(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<SceneNode,_SVGDocument_MaskData>_TryGetValue__
                                  );
              if (lVar5 != lVar3) goto LAB_03888358;
            }
          }
        }
        FUN_0388420c(&stack0x00000020);
        FUN_03888a34(uVar13,uVar4,unaff_x23,unaff_x24,plVar9,unaff_x22 & 0xffffffff);
        FUN_01fcb1a4(uVar13,unaff_x23,unaff_x24,plVar9,unaff_x22 & 0xffffffff,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_MoveNext__
                    );
        if (in_stack_00000020 == 0) goto LAB_038888e8;
        FUN_038842b0();
        unaff_d9 = uVar4;
        goto LAB_03888358;
      }
      lVar5 = *(long *)(unaff_x21 + 0x28);
      if (lVar5 == 0) goto LAB_038888e8;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_038888e4;
    } while (*(long *)(lVar5 + unaff_x22 * 8 + 0x20) != 0);
    FUN_0388420c(&stack0x00000028);
    if (*(int *)(*(long *)PTR_DAT_03cd7cb8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    unaff_d8 = FUN_038889b4(unaff_x22 & 0xffffffff,in_stack_00000008._4_4_);
    FUN_03888a34(unaff_x23,unaff_x24,0,unaff_x22 & 0xffffffff);
    param_1 = &Method_System_Collections_Generic_List_Enumerator<Region>_Dispose__;
  } while( true );
code_r0x0388810c:
  plVar10 = *(long **)(lVar5 + unaff_x22 * 8 + 0x20);
  if (plVar10 != (long *)0x0) {
    lVar3 = *plVar10;
    lVar5 = *(long *)(unaff_x21 + 0x30);
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_03888640;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec(plVar10,*unaff_x27,1);
LAB_03888640:
    uVar12 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if (lVar5 == 0) goto LAB_038888e8;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_038888e4;
    lVar5 = lVar5 + unaff_x22 * 8;
LAB_03888660:
    *(undefined4 *)(lVar5 + 0x20) = uVar12;
    *(int *)(lVar5 + 0x24) = (int)unaff_d9;
  }
  goto LAB_03888664;
}


