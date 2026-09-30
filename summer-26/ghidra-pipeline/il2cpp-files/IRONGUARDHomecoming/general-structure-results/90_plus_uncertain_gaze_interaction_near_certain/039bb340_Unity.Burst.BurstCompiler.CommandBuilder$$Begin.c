/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.CommandBuilder$$Begin
ENTRY_POINT: 039bb340
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039bb8f0) */
/* WARNING: Removing unreachable block (ram,0x039bb8d0) */
/* WARNING: Removing unreachable block (ram,0x039bb6a0) */
/* WARNING: Removing unreachable block (ram,0x039bb774) */
/* WARNING: Removing unreachable block (ram,0x039bb7fc) */

void Unity_Burst_BurstCompiler_CommandBuilder__Begin(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auVar16 [16];
  
  System_ComponentModel_ArrayConverter___ctor(param_1);
  if (unaff_x21 != 0) {
    auVar16 = FUN_039c8460();
    FUN_039b554c();
    puVar1 = StringLiteral_5376;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_039ac428(*(long *)(unaff_x19 + 0x10),auVar16._0_8_ & 0xffffffff);
      uVar5 = (**(code **)(*unaff_x20 + 0x188))();
      uVar5 = FUN_03982d98(uVar5,*(undefined8 *)puVar1,0);
      if (unaff_x20[3] != 0) {
        plVar6 = (long *)FUN_0265d924(unaff_x20[3],*(undefined8 *)StringLiteral_5372);
        puVar3 = StringLiteral_4706;
        puVar2 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_039bb3f4:
        lVar11 = *(long *)puVar1;
        lVar12 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_039bb444;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar11,0);
LAB_039bb444:
        uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar14 & 1) != 0) {
          lVar11 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_5369) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_039bb4ac;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)StringLiteral_5369,0);
LAB_039bb4ac:
          lVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar8 = (long *)FUN_0265d924(*(long *)(lVar11 + 0x10),
                                        *(undefined8 *)
                                         Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                       );
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar13 = *plVar8;
            lVar12 = *(long *)puVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_039bb52c;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_039bb52c:
            uVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
            if ((uVar14 & 1) == 0) goto LAB_039bb624;
            lVar12 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_039bb588;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_039bb588:
            uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
            lVar12 = unaff_x20[5];
            if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0
               ) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_0397b860(auVar16._8_8_,uVar9,0,lVar12,0);
            uVar10 = FUN_039812f8(uVar5,*(undefined8 *)(lVar11 + 0x18),0);
            lVar12 = *(long *)puVar3;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar12 = *(long *)puVar3;
            }
            FUN_039763a8(uVar9,uVar10,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0xd0),0);
            FUN_039baab4();
          } while( true );
        }
        if (plVar6 == (long *)0x0) goto LAB_039bb768;
        lVar11 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 == 0) goto LAB_039bb740;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_039bb728;
      }
    }
  }
  goto LAB_039bb8e0;
LAB_039bb624:
  if (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_039bb684;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_039bb684:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  goto LAB_039bb3f4;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_039bb728:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_039bb75c;
    }
  }
LAB_039bb740:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_039bb75c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_039bb768:
  lVar11 = unaff_x20[4];
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03982cc4(uVar5,lVar11,0);
  FUN_039bc060();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    lVar11 = *(long *)(unaff_x19 + 0x18);
    uVar4 = System_ComponentModel_ArrayConverter___ctor();
    if (lVar11 != 0) {
      FUN_039c2c88(lVar11,auVar16._0_8_,auVar16._8_8_,uVar4,0);
      return;
    }
  }
LAB_039bb8e0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


