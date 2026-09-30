/*
FUNCTION_NAME: Unity.Burst.BurstCompiler$$BeginCompilerCommand
ENTRY_POINT: 039bb1f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039bb8f0) */
/* WARNING: Removing unreachable block (ram,0x039bb6a0) */
/* WARNING: Removing unreachable block (ram,0x039bb8d0) */
/* WARNING: Removing unreachable block (ram,0x039bb774) */
/* WARNING: Removing unreachable block (ram,0x039bb7fc) */

void Unity_Burst_BurstCompiler__BeginCompilerCommand(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  undefined1 auVar16 [16];
  
  if ((1 << (ulong)(unaff_w21 & 0x1f) & 0x1de0U) != 0) {
    FUN_02372a54();
    return;
  }
  if (unaff_w21 == 9) {
    FUN_02372404();
    return;
  }
  if (unaff_w21 == 0x12) {
    lVar5 = FUN_0397299c(0);
    uVar6 = System_Console__SetOut(lVar5,0,0);
    if ((uVar6 & 1) != 0) {
      if (lVar5 == 0) goto LAB_039bb8e0;
      uVar6 = FUN_034b2ac0(lVar5,0);
      if ((uVar6 & 1) == 0) {
        lVar5 = 0;
      }
    }
    uVar6 = FUN_035baa7c(unaff_x20[5],lVar5,0);
    if ((uVar6 & 1) != 0) {
      FUN_039bb9e0();
      return;
    }
  }
  puVar1 = Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__;
  plVar7 = (long *)unaff_x20[2];
  if (plVar7 != (long *)0x0) {
    lVar5 = *(long *)(unaff_x19 + 0x18);
    uVar8 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar8 = FUN_03986848(uVar8,0);
    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
       (uVar4 = System_ComponentModel_ArrayConverter___ctor(*(long *)(unaff_x19 + 0x10)), lVar5 != 0
       )) {
      auVar16 = FUN_039c8460(lVar5,uVar8,uVar4,0);
      FUN_039b554c();
      puVar1 = StringLiteral_5376;
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_039ac428(*(long *)(unaff_x19 + 0x10),auVar16._0_8_ & 0xffffffff);
        uVar8 = (**(code **)(*unaff_x20 + 0x188))();
        uVar8 = FUN_03982d98(uVar8,*(undefined8 *)puVar1,0);
        if (unaff_x20[3] != 0) {
          plVar7 = (long *)FUN_0265d924(unaff_x20[3],*(undefined8 *)StringLiteral_5372);
          puVar3 = StringLiteral_4706;
          puVar2 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
LAB_039bb3f4:
          lVar5 = *(long *)puVar1;
          lVar13 = *plVar7;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar5) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_039bb444;
              }
              uVar6 = uVar6 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar7,lVar5,0);
LAB_039bb444:
          uVar6 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          if ((uVar6 & 1) != 0) {
            lVar5 = *plVar7;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_5369) {
                  puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_039bb4ac;
                }
                uVar6 = uVar6 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)StringLiteral_5369,0);
LAB_039bb4ac:
            lVar5 = (*(code *)*puVar9)(plVar7,puVar9[1]);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar10 = (long *)FUN_0265d924(*(long *)(lVar5 + 0x10),
                                           *(undefined8 *)
                                            Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                          );
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar14 = *plVar10;
              lVar13 = *(long *)puVar1;
              uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar6 != 0) {
                piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar13) {
                    puVar9 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_039bb52c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar6 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar13,0);
LAB_039bb52c:
              uVar6 = (*(code *)*puVar9)(plVar10,puVar9[1]);
              if ((uVar6 & 1) == 0) goto LAB_039bb624;
              lVar13 = *plVar10;
              uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar6 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_039bb588;
                  }
                  uVar6 = uVar6 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar6 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_039bb588:
              uVar11 = (*(code *)*puVar9)(plVar10,puVar9[1]);
              lVar13 = unaff_x20[5];
              if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) ==
                  0) {
                thunk_FUN_01ee6d7c();
              }
              uVar11 = FUN_0397b860(auVar16._8_8_,uVar11,0,lVar13,0);
              uVar12 = FUN_039812f8(uVar8,*(undefined8 *)(lVar5 + 0x18),0);
              lVar13 = *(long *)puVar3;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar13 = *(long *)puVar3;
              }
              FUN_039763a8(uVar11,uVar12,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0xd0),0);
              FUN_039baab4();
            } while( true );
          }
          if (plVar7 == (long *)0x0) goto LAB_039bb768;
          lVar5 = *plVar7;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_039bb740;
          piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_039bb728;
        }
      }
    }
  }
  goto LAB_039bb8e0;
LAB_039bb624:
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_039bb684;
        }
        uVar6 = uVar6 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_039bb684:
    (*(code *)*puVar9)(plVar10,puVar9[1]);
  }
  goto LAB_039bb3f4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar15 = piVar15 + 4;
    if (uVar6 == 0) break;
LAB_039bb728:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_039bb75c;
    }
  }
LAB_039bb740:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_039bb75c:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
LAB_039bb768:
  lVar5 = unaff_x20[4];
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03982cc4(uVar8,lVar5,0);
  FUN_039bc060();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x18);
    uVar4 = System_ComponentModel_ArrayConverter___ctor();
    if (lVar5 != 0) {
      FUN_039c2c88(lVar5,auVar16._0_8_,auVar16._8_8_,uVar4,0);
      return;
    }
  }
LAB_039bb8e0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


