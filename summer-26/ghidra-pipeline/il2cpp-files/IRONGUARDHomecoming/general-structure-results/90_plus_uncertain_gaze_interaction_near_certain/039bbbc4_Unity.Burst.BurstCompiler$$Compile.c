/*
FUNCTION_NAME: Unity.Burst.BurstCompiler$$Compile
ENTRY_POINT: 039bbbc4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039bbfcc) */

void Unity_Burst_BurstCompiler__Compile(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int iVar13;
  long lVar14;
  long unaff_x28;
  long unaff_x29;
  int iStack0000000000000018;
  uint uStack000000000000001c;
  
  if ((_iStack0000000000000018 & 0x100000000) == 0) {
    FUN_039b65ec();
  }
  else {
    FUN_039b554c();
  }
  if (unaff_x24 != 0) {
    lVar14 = *(long *)(unaff_x29 + 0x10);
    FUN_039b1978();
    if (lVar14 != 0) {
      FUN_039afc24(lVar14,*(undefined8 *)(unaff_x24 + 0x18),0,uStack000000000000001c & 1);
      puVar5 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
      puVar4 = Method_UnityEngine_Component_GetComponent<OVRSkeleton>__;
      puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      lVar14 = *(long *)(unaff_x28 + 0x18);
      if (lVar14 != 0) {
        iVar13 = 0;
        while (iVar6 = FUN_0265d6c4(lVar14,*(undefined8 *)
                                            Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                                   ), iVar13 < iVar6) {
          if (*(long *)(unaff_x28 + 0x18) == 0) goto LAB_039bbfc8;
          lVar14 = FUN_0265d74c(*(long *)(unaff_x28 + 0x18),iVar13,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                               );
          if (((*(long *)(unaff_x29 + 0x10) == 0) ||
              (iVar6 = System_ComponentModel_ArrayConverter___ctor(*(long *)(unaff_x29 + 0x10)),
              lVar14 == 0)) || (*(long *)(lVar14 + 0x10) == 0)) goto LAB_039bbfc8;
          plVar7 = (long *)FUN_0265d924(*(long *)(lVar14 + 0x10),
                                        *(undefined8 *)
                                         Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                       );
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
LAB_039bbcc4:
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_039bbd10;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_039bbd10:
          uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar11 & 1) != 0) {
            lVar10 = *plVar7;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_039bbd6c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,0);
LAB_039bbd6c:
            plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            plVar9 = (long *)plVar9[2];
            if (plVar9 == (long *)0x0) {
              if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(int *)(unaff_x25 + 0x10) == 1) {
                *(int *)(unaff_x25 + 0x10) = iVar6 - iStack0000000000000018;
              }
            }
            else {
              if (*plVar9 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar9,*(long *)puVar3);
              }
              if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              System_Linq_EnumerableSorter<MarkToBaseAdjustmentRecord>__Sort();
            }
            goto LAB_039bbcc4;
          }
          if (plVar7 != (long *)0x0) {
            lVar10 = *plVar7;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_039bbe4c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_01ecb238(plVar7,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_039bbe4c:
            (*(code *)*puVar8)(plVar7,puVar8[1]);
          }
          if ((_iStack0000000000000018 & 0x100000000) == 0) {
            FUN_039b65ec(unaff_x29,*(undefined8 *)(lVar14 + 0x18));
          }
          else {
            FUN_039b554c(unaff_x29);
          }
          if (*(long *)(unaff_x28 + 0x18) == 0) goto LAB_039bbfc8;
          iVar6 = FUN_0265d6c4(*(long *)(unaff_x28 + 0x18),
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                              );
          if (iVar13 < iVar6 + -1) {
            lVar14 = *(long *)(unaff_x29 + 0x10);
            FUN_039b1978(unaff_x24,unaff_x29);
            if (lVar14 == 0) goto LAB_039bbfc8;
            FUN_039afc24(lVar14,*(undefined8 *)(unaff_x24 + 0x18),0,uStack000000000000001c & 1);
          }
          lVar14 = *(long *)(unaff_x28 + 0x18);
          iVar13 = iVar13 + 1;
          if (lVar14 == 0) goto LAB_039bbfc8;
        }
        lVar14 = *(long *)(unaff_x29 + 0x10);
        FUN_039b1978(unaff_x24,unaff_x29);
        if ((lVar14 != 0) && (*(long *)(unaff_x24 + 0x18) != 0)) {
          FUN_0399e034(*(long *)(unaff_x24 + 0x18),lVar14,0);
          return;
        }
      }
    }
  }
LAB_039bbfc8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


