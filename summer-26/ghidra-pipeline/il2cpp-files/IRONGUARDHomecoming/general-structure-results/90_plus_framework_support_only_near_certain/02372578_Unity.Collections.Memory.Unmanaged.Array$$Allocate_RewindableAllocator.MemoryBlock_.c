/*
FUNCTION_NAME: Unity.Collections.Memory.Unmanaged.Array$$Allocate<RewindableAllocator.MemoryBlock>
ENTRY_POINT: 02372578
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0237285c) */
/* WARNING: Removing unreachable block (ram,0x023729a0) */
/* WARNING: Removing unreachable block (ram,0x023729c4) */

void Unity_Collections_Memory_Unmanaged_Array__Allocate<RewindableAllocator_MemoryBlock>
               (undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  long unaff_x24;
  int iVar14;
  long unaff_x28;
  long unaff_x29;
  uint in_stack_00000008;
  
  FUN_02363294(param_1);
  if (*(long *)(unaff_x28 + 0x20) != 0) {
    FUN_039b6544();
  }
  if (unaff_x19 != 0) {
    lVar13 = *(long *)(unaff_x29 + 0x10);
    uVar6 = FUN_039b1960();
    if (lVar13 != 0) {
      FUN_039afc24(lVar13,uVar6,0,in_stack_00000008 & 1,0);
      puVar4 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
      puVar3 = Method_UnityEngine_Component_GetComponent<OVRSkeleton>__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      lVar13 = *(long *)(unaff_x28 + 0x18);
      if (lVar13 != 0) {
        iVar14 = 0;
        puVar8 = (undefined8 *)
                 Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
LAB_02372628:
        iVar5 = FUN_0265d6c4(lVar13,*puVar8);
        if (iVar14 < iVar5) {
          if (*(long *)(unaff_x28 + 0x18) != 0) {
            lVar13 = FUN_0265d74c(*(long *)(unaff_x28 + 0x18),iVar14,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                                 );
            if (((*(long *)(unaff_x29 + 0x10) != 0) &&
                (System_ComponentModel_ArrayConverter___ctor(*(long *)(unaff_x29 + 0x10),0),
                lVar13 != 0)) && (*(long *)(lVar13 + 0x10) != 0)) {
              plVar7 = (long *)FUN_0265d924(*(long *)(lVar13 + 0x10),
                                            *(undefined8 *)
                                             Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                           );
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              do {
                lVar10 = *plVar7;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_023726ec;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_023726ec:
                uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                if ((uVar11 & 1) == 0) goto LAB_023727e4;
                lVar10 = *plVar7;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_02372748;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_02372748:
                plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
                if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
                {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc();
                }
                plVar9 = (long *)plVar9[2];
                lVar10 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01ecaf44(lVar10);
                }
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(plVar9);
                }
                thunk_FUN_01f11920(plVar9);
                if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                FUN_02b02c4c();
              } while( true );
            }
          }
        }
        else {
          lVar13 = *(long *)(unaff_x29 + 0x10);
          uVar6 = FUN_039b1960(unaff_x19,unaff_x29,0);
          if (lVar13 != 0) {
            FUN_039afab4(lVar13,uVar6,0);
            return;
          }
        }
      }
    }
  }
LAB_023729c0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_023727e4:
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02372844;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02372844:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  FUN_039b6544(unaff_x29,*(undefined8 *)(lVar13 + 0x18),(in_stack_00000008 ^ 1) & 1,0);
  puVar8 = (undefined8 *)
           Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
  if (*(long *)(unaff_x28 + 0x18) == 0) goto LAB_023729c0;
  iVar5 = FUN_0265d6c4(*(long *)(unaff_x28 + 0x18),
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
  if (iVar14 < iVar5 + -1) {
    lVar13 = *(long *)(unaff_x29 + 0x10);
    uVar6 = FUN_039b1960(unaff_x19,unaff_x29,0);
    if (lVar13 == 0) goto LAB_023729c0;
    FUN_039afc24(lVar13,uVar6,0,in_stack_00000008 & 1,0);
  }
  lVar13 = *(long *)(unaff_x28 + 0x18);
  iVar14 = iVar14 + 1;
  if (lVar13 == 0) goto LAB_023729c0;
  goto LAB_02372628;
}


