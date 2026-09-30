/*
FUNCTION_NAME: Unity.Burst.BurstCompiler$$CompileUnsafeStaticMethod
ENTRY_POINT: 039bbb8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 180
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039bbfcc) */

void Unity_Burst_BurstCompiler__CompileUnsafeStaticMethod(undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *unaff_x20;
  long unaff_x23;
  long unaff_x24;
  int iVar14;
  long lVar15;
  long unaff_x28;
  long unaff_x29;
  ulong in_stack_00000018;
  
  lVar7 = thunk_FUN_01f117cc(param_1);
  FUN_027641ec(lVar7,1,*unaff_x20);
  if (*(long *)(unaff_x29 + 0x10) != 0) {
    FUN_039b040c();
    if (*(long *)(unaff_x28 + 0x20) != 0) {
      if ((in_stack_00000018 & 0x100000000) == 0) {
        FUN_039b65ec();
      }
      else {
        FUN_039b554c();
      }
    }
    if (unaff_x24 != 0) {
      lVar15 = *(long *)(unaff_x29 + 0x10);
      FUN_039b1978();
      if (lVar15 != 0) {
        FUN_039afc24(lVar15,*(undefined8 *)(unaff_x24 + 0x18),0,in_stack_00000018._4_4_ & 1);
        puVar5 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
        puVar4 = Method_UnityEngine_Component_GetComponent<OVRSkeleton>__;
        puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        lVar15 = *(long *)(unaff_x28 + 0x18);
        if (lVar15 != 0) {
          iVar14 = 0;
          while (iVar6 = FUN_0265d6c4(lVar15,*(undefined8 *)
                                              Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                                     ), iVar14 < iVar6) {
            if (*(long *)(unaff_x28 + 0x18) == 0) goto LAB_039bbfc8;
            lVar15 = FUN_0265d74c(*(long *)(unaff_x28 + 0x18),iVar14,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                                 );
            if (((*(long *)(unaff_x29 + 0x10) == 0) ||
                (iVar6 = System_ComponentModel_ArrayConverter___ctor(*(long *)(unaff_x29 + 0x10)),
                lVar15 == 0)) || (*(long *)(lVar15 + 0x10) == 0)) goto LAB_039bbfc8;
            plVar8 = (long *)FUN_0265d924(*(long *)(lVar15 + 0x10),
                                          *(undefined8 *)
                                           Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                         );
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
LAB_039bbcc4:
            lVar11 = *plVar8;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_039bbd10;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_039bbd10:
            uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            if ((uVar12 & 1) != 0) {
              lVar11 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                    puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_039bbd6c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_039bbd6c:
              plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
              {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc();
              }
              plVar10 = (long *)plVar10[2];
              if (plVar10 == (long *)0x0) {
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(int *)(lVar7 + 0x10) == 1) {
                  *(int *)(lVar7 + 0x10) = iVar6 - param_2;
                }
              }
              else {
                if (*plVar10 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(plVar10,*(long *)puVar3);
                }
                if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                System_Linq_EnumerableSorter<MarkToBaseAdjustmentRecord>__Sort();
              }
              goto LAB_039bbcc4;
            }
            if (plVar8 != (long *)0x0) {
              lVar11 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_039bbe4c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar9 = (undefined8 *)
                       FUN_01ecb238(plVar8,*(long *)
                                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                    ,0);
LAB_039bbe4c:
              (*(code *)*puVar9)(plVar8,puVar9[1]);
            }
            if ((in_stack_00000018 & 0x100000000) == 0) {
              FUN_039b65ec(unaff_x29,*(undefined8 *)(lVar15 + 0x18));
            }
            else {
              FUN_039b554c(unaff_x29);
            }
            if (*(long *)(unaff_x28 + 0x18) == 0) goto LAB_039bbfc8;
            iVar6 = FUN_0265d6c4(*(long *)(unaff_x28 + 0x18),
                                 *(undefined8 *)
                                  Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                                );
            if (iVar14 < iVar6 + -1) {
              lVar15 = *(long *)(unaff_x29 + 0x10);
              FUN_039b1978(unaff_x24,unaff_x29);
              if (lVar15 == 0) goto LAB_039bbfc8;
              FUN_039afc24(lVar15,*(undefined8 *)(unaff_x24 + 0x18),0,in_stack_00000018._4_4_ & 1);
            }
            lVar15 = *(long *)(unaff_x28 + 0x18);
            iVar14 = iVar14 + 1;
            if (lVar15 == 0) goto LAB_039bbfc8;
          }
          lVar7 = *(long *)(unaff_x29 + 0x10);
          FUN_039b1978(unaff_x24,unaff_x29);
          if ((lVar7 != 0) && (*(long *)(unaff_x24 + 0x18) != 0)) {
            FUN_0399e034(*(long *)(unaff_x24 + 0x18),lVar7,0);
            return;
          }
        }
      }
    }
  }
LAB_039bbfc8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


