/*
FUNCTION_NAME: Unity.Burst.BurstCompiler$$IsLoadAdditionalLibrarySupported
ENTRY_POINT: 039bb104
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039bb8f0) */
/* WARNING: Removing unreachable block (ram,0x039bb6a0) */
/* WARNING: Removing unreachable block (ram,0x039bb8d0) */
/* WARNING: Removing unreachable block (ram,0x039bb774) */

void Unity_Burst_BurstCompiler__IsLoadAdditionalLibrarySupported(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar17;
  long *unaff_x24;
  undefined1 auVar18 [16];
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    param_1 = *unaff_x24;
  }
  uVar17 = **(undefined8 **)(param_1 + 0xb8);
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5368);
  FUN_02e6c0a0(uVar7,uVar17,*(undefined8 *)StringLiteral_5374,0);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
  *puVar8 = uVar7;
  thunk_FUN_01f51358(puVar8,uVar7);
  uVar9 = FUN_022e282c();
  if ((uVar9 & 1) != 0) {
    if (unaff_x20[3] == 0) goto LAB_039bb8e0;
    iVar4 = FUN_0265d6c4(unaff_x20[3],
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                        );
    plVar13 = (long *)unaff_x20[2];
    if (iVar4 == 0) {
      FUN_039b65ec();
      if (unaff_x20[4] != 0) {
        FUN_039b554c();
        return;
      }
      return;
    }
    if (plVar13 == (long *)0x0) goto LAB_039bb8e0;
    uVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
    if (*(int *)(*(long *)StringLiteral_4506 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)StringLiteral_4506);
    }
    uVar5 = FUN_039c8f78(uVar7,0);
    uVar9 = FUN_034a66c0(unaff_x20[5],0,0);
    if ((uVar9 & 1) != 0) {
      if (0x12 < uVar5) goto LAB_039bb2f4;
      if ((1 << (ulong)(uVar5 & 0x1f) & 0x1de0U) != 0) {
        FUN_02372a54();
        return;
      }
      if (uVar5 == 9) {
        FUN_02372404();
        return;
      }
    }
    if (uVar5 == 0x12) {
      lVar10 = FUN_0397299c(0);
      uVar9 = System_Console__SetOut(lVar10,0,0);
      if ((uVar9 & 1) != 0) {
        if (lVar10 == 0) goto LAB_039bb8e0;
        uVar9 = FUN_034b2ac0(lVar10,0);
        if ((uVar9 & 1) == 0) {
          lVar10 = 0;
        }
      }
      uVar9 = FUN_035baa7c(unaff_x20[5],lVar10,0);
      if ((uVar9 & 1) != 0) {
        FUN_039bb9e0();
        return;
      }
    }
  }
LAB_039bb2f4:
  puVar1 = Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__;
  plVar13 = (long *)unaff_x20[2];
  if (plVar13 != (long *)0x0) {
    lVar10 = *(long *)(unaff_x19 + 0x18);
    uVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar7 = FUN_03986848(uVar7,0);
    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
       (uVar6 = System_ComponentModel_ArrayConverter___ctor(*(long *)(unaff_x19 + 0x10)),
       lVar10 != 0)) {
      auVar18 = FUN_039c8460(lVar10,uVar7,uVar6,0);
      FUN_039b554c();
      puVar1 = StringLiteral_5376;
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_039ac428(*(long *)(unaff_x19 + 0x10),auVar18._0_8_ & 0xffffffff);
        uVar7 = (**(code **)(*unaff_x20 + 0x188))();
        uVar7 = FUN_03982d98(uVar7,*(undefined8 *)puVar1,0);
        if (unaff_x20[3] != 0) {
          plVar13 = (long *)FUN_0265d924(unaff_x20[3],*(undefined8 *)StringLiteral_5372);
          puVar3 = StringLiteral_4706;
          puVar2 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
LAB_039bb3f4:
          lVar10 = *(long *)puVar1;
          lVar14 = *plVar13;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_039bb444;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar13,lVar10,0);
LAB_039bb444:
          uVar9 = (*(code *)*puVar8)(plVar13,puVar8[1]);
          if ((uVar9 & 1) != 0) {
            lVar10 = *plVar13;
            uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar9 != 0) {
              piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_5369) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_039bb4ac;
                }
                uVar9 = uVar9 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar9 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)StringLiteral_5369,0);
LAB_039bb4ac:
            lVar10 = (*(code *)*puVar8)(plVar13,puVar8[1]);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar11 = (long *)FUN_0265d924(*(long *)(lVar10 + 0x10),
                                           *(undefined8 *)
                                            Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                          );
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar15 = *plVar11;
              lVar14 = *(long *)puVar1;
              uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar9 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar14) {
                    puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_039bb52c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar9 != 0);
              }
              puVar8 = (undefined8 *)FUN_01ecb238(plVar11,lVar14,0);
LAB_039bb52c:
              uVar9 = (*(code *)*puVar8)(plVar11,puVar8[1]);
              if ((uVar9 & 1) == 0) goto LAB_039bb624;
              lVar14 = *plVar11;
              uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar9 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_039bb588;
                  }
                  uVar9 = uVar9 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar9 != 0);
              }
              puVar8 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_039bb588:
              uVar17 = (*(code *)*puVar8)(plVar11,puVar8[1]);
              lVar14 = unaff_x20[5];
              if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) ==
                  0) {
                thunk_FUN_01ee6d7c();
              }
              uVar17 = FUN_0397b860(auVar18._8_8_,uVar17,0,lVar14,0);
              uVar12 = FUN_039812f8(uVar7,*(undefined8 *)(lVar10 + 0x18),0);
              lVar14 = *(long *)puVar3;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar14 = *(long *)puVar3;
              }
              FUN_039763a8(uVar17,uVar12,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0xd0),0);
              FUN_039baab4();
            } while( true );
          }
          if (plVar13 == (long *)0x0) goto LAB_039bb768;
          lVar10 = *plVar13;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 == 0) goto LAB_039bb740;
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_039bb728;
        }
      }
    }
  }
LAB_039bb8e0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_039bb624:
  if (plVar11 != (long *)0x0) {
    lVar10 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_039bb684;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_039bb684:
    (*(code *)*puVar8)(plVar11,puVar8[1]);
  }
  goto LAB_039bb3f4;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar16 = piVar16 + 4;
    if (uVar9 == 0) break;
LAB_039bb728:
    if (*(long *)(piVar16 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_039bb75c;
    }
  }
LAB_039bb740:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar13,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_039bb75c:
  (*(code *)*puVar8)(plVar13,puVar8[1]);
LAB_039bb768:
  lVar10 = unaff_x20[4];
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03982cc4(uVar7,lVar10,0);
  FUN_039bc060();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    lVar10 = *(long *)(unaff_x19 + 0x18);
    uVar6 = System_ComponentModel_ArrayConverter___ctor();
    if (lVar10 != 0) {
      FUN_039c2c88(lVar10,auVar18._0_8_,auVar18._8_8_,uVar6,0);
      return;
    }
  }
  goto LAB_039bb8e0;
}


