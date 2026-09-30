/*
FUNCTION_NAME: System.Array$$IndexOf<HIDParser.HIDReportData>
ENTRY_POINT: 0237312c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 151
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023735a4) */
/* WARNING: Removing unreachable block (ram,0x023736f4) */

void System_Array__IndexOf<HIDParser_HIDReportData>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  void *__src;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  int iVar15;
  long *unaff_x20;
  long lVar16;
  undefined8 uVar17;
  ulong __n;
  undefined8 *__dest;
  void *__s;
  undefined8 unaff_x26;
  long unaff_x29;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
  lVar11 = *(long *)(unaff_x19 + 0x38);
  if (lVar11 == 0) {
    FUN_01ecafa0();
    lVar11 = *(long *)(unaff_x19 + 0x38);
  }
  __n = (ulong)*(uint *)(*(long *)(lVar11 + 0x18) + 0xfc);
  uVar12 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(((long)&stack0x00000000 - uVar12) - uVar12);
  __s = (void *)((long)__dest - uVar12);
  memset(__s,0,__n);
  uVar5 = FUN_039baefc(*(undefined8 *)(unaff_x29 + -0x38),0,0);
  *(undefined8 *)(unaff_x29 + -0x58) = uVar5;
  if (unaff_x20 != (long *)0x0) {
    uVar5 = (**(code **)(*unaff_x20 + 0x188))();
    uVar17 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar17 = FUN_03579868(uVar17,0);
    uVar3 = FUN_03583338(uVar5,uVar17,0);
    lVar11 = unaff_x20[2];
    *(undefined4 *)(unaff_x29 + -0x50) = uVar3;
    FUN_039b554c(*(undefined8 *)(unaff_x29 + -0x38),lVar11,0);
    if ((*(byte *)(**(long **)(unaff_x19 + 0x38) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    lVar11 = thunk_FUN_01f117cc();
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))();
    lVar16 = *(long *)(unaff_x29 + -0x38);
    lVar6 = *(long *)(lVar16 + 0x10);
    if (lVar6 != 0) {
      uVar3 = System_ComponentModel_ArrayConverter___ctor(lVar6,0);
      lVar6 = *(long *)(lVar16 + 0x10);
      *(undefined4 *)(unaff_x29 + -0x3c) = uVar3;
      if (lVar6 != 0) {
        (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))(lVar6,lVar11);
        if (unaff_x20[4] != 0) {
          FUN_039b6544(*(undefined8 *)(unaff_x29 + -0x38),unaff_x20[4],
                       ~*(uint *)(unaff_x29 + -0x50) & 1,0);
        }
        if (*(long *)(unaff_x29 + -0x58) != 0) {
          *(undefined8 *)(unaff_x29 + -0x60) = unaff_x26;
          lVar16 = *(long *)(unaff_x29 + -0x38);
          lVar6 = *(long *)(lVar16 + 0x10);
          uVar5 = FUN_039b1960(*(long *)(unaff_x29 + -0x58),lVar16,0);
          if (lVar6 != 0) {
            FUN_039afc24(lVar6,uVar5,0,*(uint *)(unaff_x29 + -0x50) & 1,0);
            puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            lVar6 = unaff_x20[3];
            if (lVar6 != 0) {
              iVar15 = 0;
              *(uint *)(unaff_x29 + -0x4c) = (*(uint *)(unaff_x29 + -0x50) ^ 1) & 1;
              *(long **)(unaff_x29 + -0x48) = unaff_x20;
LAB_02373318:
              iVar4 = FUN_0265d6c4(lVar6,*(undefined8 *)
                                          Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                                  );
              if (iVar15 < iVar4) {
                if (unaff_x20[3] != 0) {
                  lVar6 = FUN_0265d74c(unaff_x20[3],iVar15,
                                       *(undefined8 *)
                                        Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                                      );
                  if ((*(long *)(lVar16 + 0x10) != 0) &&
                     (iVar4 = System_ComponentModel_ArrayConverter___ctor
                                        (*(long *)(lVar16 + 0x10),0), lVar6 != 0)) {
                    lVar16 = *(long *)(lVar6 + 0x10);
                    *(long *)(unaff_x29 + -0x30) = lVar6;
                    if (lVar16 != 0) {
                      *(int *)(unaff_x29 + -0x24) = iVar15;
                      plVar7 = (long *)FUN_0265d924(lVar16,*(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                                  );
                      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      iVar15 = *(int *)(unaff_x29 + -0x3c);
                      do {
                        lVar6 = *plVar7;
                        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                              puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_023733e8;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_023733e8:
                        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                        if ((uVar13 & 1) == 0) goto LAB_02373528;
                        lVar6 = *plVar7;
                        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                *(long *)
                                 Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__) {
                              puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_0237344c;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar8 = (undefined8 *)
                                 FUN_01ecb238(plVar7,*(long *)
                                                  Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__
                                              ,0);
LAB_0237344c:
                        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        bVar1 = *(byte *)(*(long *)
                                           Method_UnityEngine_Component_GetComponent<OVRSkeleton>__
                                         + 0x130);
                        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                            *(long *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__)) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08cfc();
                        }
                        lVar16 = plVar9[2];
                        lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
                        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                          lVar6 = FUN_01ecaf44(lVar6);
                        }
                        __src = (void *)FUN_01f08934(lVar16,lVar6,(long)&stack0x00000000 - uVar12);
                        memcpy(__s,__src,__n);
                        memcpy(__dest,__s,__n);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        puVar8 = __dest;
                        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x28)) {
                          puVar8 = (undefined8 *)*__dest;
                        }
                        puVar10 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20);
                        uVar5 = *puVar10;
                        *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
                        *(int *)(unaff_x29 + -0xc) = iVar4 - iVar15;
                        *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
                        (*(code *)puVar10[2])
                                  (uVar5,puVar10,lVar11,unaff_x29 + -0x20,unaff_x29 + -0x10);
                      } while( true );
                    }
                  }
                }
              }
              else {
                lVar11 = *(long *)(lVar16 + 0x10);
                uVar5 = FUN_039b1960(*(undefined8 *)(unaff_x29 + -0x58),lVar16,0);
                if (lVar11 != 0) {
                  FUN_039afab4(lVar11,uVar5,0);
                  if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_023736f0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02373528:
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02373588;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02373588:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  lVar16 = *(long *)(unaff_x29 + -0x38);
  FUN_039b6544(lVar16,*(undefined8 *)(*(long *)(unaff_x29 + -0x30) + 0x18),
               *(undefined4 *)(unaff_x29 + -0x4c),0);
  unaff_x20 = *(long **)(unaff_x29 + -0x48);
  if (unaff_x20[3] == 0) goto LAB_023736f0;
  iVar4 = FUN_0265d6c4(unaff_x20[3],
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
  iVar15 = *(int *)(unaff_x29 + -0x24);
  if (iVar15 < iVar4 + -1) {
    lVar6 = *(long *)(lVar16 + 0x10);
    uVar5 = FUN_039b1960(*(undefined8 *)(unaff_x29 + -0x58),lVar16,0);
    if (lVar6 == 0) goto LAB_023736f0;
    FUN_039afc24(lVar6,uVar5,0,*(uint *)(unaff_x29 + -0x50) & 1,0);
    iVar15 = *(int *)(unaff_x29 + -0x24);
  }
  lVar6 = unaff_x20[3];
  iVar15 = iVar15 + 1;
  if (lVar6 == 0) goto LAB_023736f0;
  goto LAB_02373318;
}


