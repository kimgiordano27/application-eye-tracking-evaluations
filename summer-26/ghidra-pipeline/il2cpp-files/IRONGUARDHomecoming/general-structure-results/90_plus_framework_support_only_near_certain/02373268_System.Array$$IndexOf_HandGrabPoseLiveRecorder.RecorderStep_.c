/*
FUNCTION_NAME: System.Array$$IndexOf<HandGrabPoseLiveRecorder.RecorderStep>
ENTRY_POINT: 02373268
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 163
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023735a4) */
/* WARNING: Removing unreachable block (ram,0x023736f4) */

void System_Array__IndexOf<HandGrabPoseLiveRecorder_RecorderStep>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  void *__src;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  int iVar13;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  undefined8 *unaff_x24;
  void *unaff_x25;
  undefined8 unaff_x26;
  long lVar14;
  long unaff_x28;
  long unaff_x29;
  
  uVar3 = System_ComponentModel_ArrayConverter___ctor();
  lVar10 = *(long *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x29 + -0x3c) = uVar3;
  if (lVar10 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))(lVar10);
    if (*(long *)(unaff_x21 + 0x20) != 0) {
      FUN_039b6544(*(undefined8 *)(unaff_x29 + -0x38),*(long *)(unaff_x21 + 0x20),
                   ~*(uint *)(unaff_x29 + -0x50) & 1,0);
    }
    if (*(long *)(unaff_x29 + -0x58) != 0) {
      *(undefined8 *)(unaff_x29 + -0x60) = unaff_x26;
      lVar14 = *(long *)(unaff_x29 + -0x38);
      lVar10 = *(long *)(lVar14 + 0x10);
      uVar5 = FUN_039b1960(*(long *)(unaff_x29 + -0x58),lVar14,0);
      if (lVar10 != 0) {
        FUN_039afc24(lVar10,uVar5,0,*(uint *)(unaff_x29 + -0x50) & 1,0);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        lVar10 = *(long *)(unaff_x21 + 0x18);
        if (lVar10 != 0) {
          iVar13 = 0;
          *(uint *)(unaff_x29 + -0x4c) = (*(uint *)(unaff_x29 + -0x50) ^ 1) & 1;
          *(long *)(unaff_x29 + -0x48) = unaff_x21;
LAB_02373318:
          iVar4 = FUN_0265d6c4(lVar10,*(undefined8 *)
                                       Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                              );
          if (iVar13 < iVar4) {
            if (*(long *)(unaff_x21 + 0x18) != 0) {
              lVar10 = FUN_0265d74c(*(long *)(unaff_x21 + 0x18),iVar13,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                                   );
              if ((*(long *)(lVar14 + 0x10) != 0) &&
                 (iVar4 = System_ComponentModel_ArrayConverter___ctor(*(long *)(lVar14 + 0x10),0),
                 lVar10 != 0)) {
                lVar14 = *(long *)(lVar10 + 0x10);
                *(long *)(unaff_x29 + -0x30) = lVar10;
                if (lVar14 != 0) {
                  *(int *)(unaff_x29 + -0x24) = iVar13;
                  plVar6 = (long *)FUN_0265d924(lVar14,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                               );
                  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  iVar13 = *(int *)(unaff_x29 + -0x3c);
                  do {
                    lVar10 = *plVar6;
                    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    if (uVar11 != 0) {
                      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                          goto LAB_023733e8;
                        }
                        uVar11 = uVar11 - 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_023733e8:
                    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                    if ((uVar11 & 1) == 0) goto LAB_02373528;
                    lVar10 = *plVar6;
                    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    if (uVar11 != 0) {
                      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) ==
                            *(long *)
                             Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__) {
                          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                          goto LAB_0237344c;
                        }
                        uVar11 = uVar11 - 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar7 = (undefined8 *)
                             FUN_01ecb238(plVar6,*(long *)
                                                  Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__
                                          ,0);
LAB_0237344c:
                    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
                    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    bVar1 = *(byte *)(*(long *)
                                       Method_UnityEngine_Component_GetComponent<OVRSkeleton>__ +
                                     0x130);
                    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc();
                    }
                    lVar14 = plVar8[2];
                    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01ecaf44(lVar10);
                    }
                    __src = (void *)FUN_01f08934(lVar14,lVar10);
                    memcpy(unaff_x25,__src,unaff_x22);
                    memcpy(unaff_x24,unaff_x25,unaff_x22);
                    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    puVar7 = unaff_x24;
                    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x28)) {
                      puVar7 = (undefined8 *)*unaff_x24;
                    }
                    puVar9 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20);
                    uVar5 = *puVar9;
                    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
                    *(int *)(unaff_x29 + -0xc) = iVar4 - iVar13;
                    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
                    (*(code *)puVar9[2])(uVar5);
                  } while( true );
                }
              }
            }
          }
          else {
            lVar10 = *(long *)(lVar14 + 0x10);
            uVar5 = FUN_039b1960(*(undefined8 *)(unaff_x29 + -0x58),lVar14,0);
            if (lVar10 != 0) {
              FUN_039afab4(lVar10,uVar5,0);
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
LAB_023736f0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02373528:
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02373588;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02373588:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  lVar14 = *(long *)(unaff_x29 + -0x38);
  FUN_039b6544(lVar14,*(undefined8 *)(*(long *)(unaff_x29 + -0x30) + 0x18),
               *(undefined4 *)(unaff_x29 + -0x4c),0);
  unaff_x21 = *(long *)(unaff_x29 + -0x48);
  if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_023736f0;
  iVar4 = FUN_0265d6c4(*(long *)(unaff_x21 + 0x18),
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
  iVar13 = *(int *)(unaff_x29 + -0x24);
  if (iVar13 < iVar4 + -1) {
    lVar10 = *(long *)(lVar14 + 0x10);
    uVar5 = FUN_039b1960(*(undefined8 *)(unaff_x29 + -0x58),lVar14,0);
    if (lVar10 == 0) goto LAB_023736f0;
    FUN_039afc24(lVar10,uVar5,0,*(uint *)(unaff_x29 + -0x50) & 1,0);
    iVar13 = *(int *)(unaff_x29 + -0x24);
  }
  lVar10 = *(long *)(unaff_x21 + 0x18);
  iVar13 = iVar13 + 1;
  if (lVar10 == 0) goto LAB_023736f0;
  goto LAB_02373318;
}


