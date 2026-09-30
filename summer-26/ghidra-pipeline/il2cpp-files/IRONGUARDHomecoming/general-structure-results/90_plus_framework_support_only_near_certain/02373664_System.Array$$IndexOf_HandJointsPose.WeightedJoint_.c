/*
FUNCTION_NAME: System.Array$$IndexOf<HandJointsPose.WeightedJoint>
ENTRY_POINT: 02373664
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 193
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0237377c) */

void System_Array__IndexOf<HandJointsPose_WeightedJoint>(undefined8 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  void *__src;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  size_t unaff_x22;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  if (param_2 != 1) {
    if (unaff_x26 != (long *)0x0) {
      lVar12 = *unaff_x26;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x02373764;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
code_r0x02373764:
      (*(code *)*puVar3)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  lVar12 = *plVar5;
  __cxa_end_catch();
  iVar9 = 0;
joined_r0x0237368c:
  if (unaff_x26 != (long *)0x0) {
    lVar11 = *unaff_x26;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02373588;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(unaff_x26,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_02373588:
    (*(code *)*puVar3)(unaff_x26,puVar3[1]);
  }
  if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar12);
  }
  lVar12 = *(long *)(unaff_x29 + -0x38);
  if ((iVar9 != 7) && (iVar9 != 0)) {
LAB_023736bc:
    if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  FUN_039b6544(lVar12,*(undefined8 *)(*(long *)(unaff_x29 + -0x30) + 0x18),
               *(undefined4 *)(unaff_x29 + -0x4c),0);
  lVar11 = *(long *)(unaff_x29 + -0x48);
  if (*(long *)(lVar11 + 0x18) != 0) {
    iVar2 = FUN_0265d6c4(*(long *)(lVar11 + 0x18),
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                        );
    iVar9 = *(int *)(unaff_x29 + -0x24);
    if (iVar9 < iVar2 + -1) {
      lVar10 = *(long *)(lVar12 + 0x10);
      uVar4 = FUN_039b1960(*(undefined8 *)(unaff_x29 + -0x58),lVar12,0);
      if (lVar10 == 0) goto LAB_023736f0;
      FUN_039afc24(lVar10,uVar4,0,*(uint *)(unaff_x29 + -0x50) & 1,0);
      iVar9 = *(int *)(unaff_x29 + -0x24);
    }
    iVar9 = iVar9 + 1;
    if (*(long *)(lVar11 + 0x18) != 0) {
      iVar2 = FUN_0265d6c4(*(long *)(lVar11 + 0x18),
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                          );
      if (iVar9 < iVar2) {
        if (*(long *)(lVar11 + 0x18) != 0) {
          lVar11 = FUN_0265d74c(*(long *)(lVar11 + 0x18),iVar9,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                               );
          if ((*(long *)(lVar12 + 0x10) != 0) &&
             (iVar2 = System_ComponentModel_ArrayConverter___ctor(*(long *)(lVar12 + 0x10),0),
             lVar11 != 0)) {
            lVar12 = *(long *)(lVar11 + 0x10);
            *(long *)(unaff_x29 + -0x30) = lVar11;
            if (lVar12 != 0) {
              *(int *)(unaff_x29 + -0x24) = iVar9;
              unaff_x26 = (long *)FUN_0265d924(lVar12,*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                              );
              if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              iVar9 = *(int *)(unaff_x29 + -0x3c);
              do {
                lVar12 = *unaff_x26;
                uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *unaff_x27) {
                      puVar3 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_023733e8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar3 = (undefined8 *)FUN_01ecb238(unaff_x26,*unaff_x27,0);
LAB_023733e8:
                uVar7 = (*(code *)*puVar3)(unaff_x26,puVar3[1]);
                if ((uVar7 & 1) == 0) goto LAB_02373528;
                lVar12 = *unaff_x26;
                uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) ==
                        *(long *)Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__) {
                      puVar3 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_0237344c;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar3 = (undefined8 *)
                         FUN_01ecb238(unaff_x26,
                                      *(long *)
                                       Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__
                                      ,0);
LAB_0237344c:
                plVar5 = (long *)(*(code *)*puVar3)(unaff_x26,puVar3[1]);
                if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                bVar1 = *(byte *)(*(long *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__
                                 + 0x130);
                if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc();
                }
                lVar11 = plVar5[2];
                lVar12 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_01ecaf44(lVar12);
                }
                __src = (void *)FUN_01f08934(lVar11,lVar12);
                memcpy(unaff_x25,__src,unaff_x22);
                memcpy(unaff_x24,unaff_x25,unaff_x22);
                if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                puVar3 = unaff_x24;
                if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x28)) {
                  puVar3 = (undefined8 *)*unaff_x24;
                }
                puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20);
                uVar4 = *puVar6;
                *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
                *(int *)(unaff_x29 + -0xc) = iVar2 - iVar9;
                *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
                (*(code *)puVar6[2])(uVar4);
              } while( true );
            }
          }
        }
      }
      else {
        lVar11 = *(long *)(lVar12 + 0x10);
        uVar4 = FUN_039b1960(*(undefined8 *)(unaff_x29 + -0x58),lVar12,0);
        if (lVar11 != 0) {
          FUN_039afab4(lVar11,uVar4,0);
          goto LAB_023736bc;
        }
      }
    }
  }
LAB_023736f0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02373528:
  lVar12 = 0;
  iVar9 = 7;
  goto joined_r0x0237368c;
}


