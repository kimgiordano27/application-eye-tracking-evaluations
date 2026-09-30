/*
FUNCTION_NAME: Unity.Collections.Memory.Unmanaged.Array$$Allocate<__Il2CppFullySharedGenericStructType>
ENTRY_POINT: 0237252c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0237285c) */
/* WARNING: Removing unreachable block (ram,0x023729a0) */
/* WARNING: Removing unreachable block (ram,0x023729c4) */

void Unity_Collections_Memory_Unmanaged_Array__Allocate<__Il2CppFullySharedGenericStructType>
               (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  long lVar16;
  int iVar17;
  long unaff_x28;
  long unaff_x29;
  uint in_stack_00000008;
  
  FUN_039b554c(param_1,param_2,0);
  if ((*(byte *)(**(long **)(unaff_x20 + 0x38) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar7 = thunk_FUN_01f117cc();
  FUN_02b00cbc(lVar7,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
  if (*(long *)(unaff_x29 + 0x10) != 0) {
    iVar5 = System_ComponentModel_ArrayConverter___ctor(*(long *)(unaff_x29 + 0x10),0);
    if (*(long *)(unaff_x29 + 0x10) != 0) {
      FUN_02363294(*(long *)(unaff_x29 + 0x10),lVar7,
                   *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x10));
      if (*(long *)(unaff_x28 + 0x20) != 0) {
        FUN_039b6544();
      }
      if (unaff_x19 != 0) {
        lVar16 = *(long *)(unaff_x29 + 0x10);
        uVar8 = FUN_039b1960();
        if (lVar16 != 0) {
          FUN_039afc24(lVar16,uVar8,0,in_stack_00000008 & 1,0);
          puVar4 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
          puVar3 = Method_UnityEngine_Component_GetComponent<OVRSkeleton>__;
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          lVar16 = *(long *)(unaff_x28 + 0x18);
          if (lVar16 != 0) {
            iVar17 = 0;
            puVar10 = (undefined8 *)
                      Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
            ;
LAB_02372628:
            iVar6 = FUN_0265d6c4(lVar16,*puVar10);
            if (iVar17 < iVar6) {
              if (*(long *)(unaff_x28 + 0x18) != 0) {
                lVar16 = FUN_0265d74c(*(long *)(unaff_x28 + 0x18),iVar17,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                                     );
                if (((*(long *)(unaff_x29 + 0x10) != 0) &&
                    (iVar6 = System_ComponentModel_ArrayConverter___ctor
                                       (*(long *)(unaff_x29 + 0x10),0), lVar16 != 0)) &&
                   (*(long *)(lVar16 + 0x10) != 0)) {
                  plVar9 = (long *)FUN_0265d924(*(long *)(lVar16 + 0x10),
                                                *(undefined8 *)
                                                 Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                               );
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  do {
                    lVar13 = *plVar9;
                    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_023726ec;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_023726ec:
                    uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    if ((uVar14 & 1) == 0) goto LAB_023727e4;
                    lVar13 = *plVar9;
                    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_02372748;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_02372748:
                    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
                    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc();
                    }
                    plVar11 = (long *)plVar11[2];
                    lVar13 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
                    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                      lVar13 = FUN_01ecaf44(lVar13);
                    }
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    if (*(long *)(*plVar11 + 0x40) != *(long *)(lVar13 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc(plVar11);
                    }
                    puVar12 = (undefined4 *)thunk_FUN_01f11920(plVar11);
                    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_02b02c4c(lVar7,*puVar12,iVar6 - iVar5,
                                 *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
                  } while( true );
                }
              }
            }
            else {
              lVar7 = *(long *)(unaff_x29 + 0x10);
              uVar8 = FUN_039b1960(unaff_x19,unaff_x29,0);
              if (lVar7 != 0) {
                FUN_039afab4(lVar7,uVar8,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_023729c0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_023727e4:
  if (plVar9 != (long *)0x0) {
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02372844;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_02372844:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  FUN_039b6544(unaff_x29,*(undefined8 *)(lVar16 + 0x18),(in_stack_00000008 ^ 1) & 1,0);
  puVar10 = (undefined8 *)
            Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
  if (*(long *)(unaff_x28 + 0x18) == 0) goto LAB_023729c0;
  iVar6 = FUN_0265d6c4(*(long *)(unaff_x28 + 0x18),
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
  if (iVar17 < iVar6 + -1) {
    lVar16 = *(long *)(unaff_x29 + 0x10);
    uVar8 = FUN_039b1960(unaff_x19,unaff_x29,0);
    if (lVar16 == 0) goto LAB_023729c0;
    FUN_039afc24(lVar16,uVar8,0,in_stack_00000008 & 1,0);
  }
  lVar16 = *(long *)(unaff_x28 + 0x18);
  iVar17 = iVar17 + 1;
  if (lVar16 == 0) goto LAB_023729c0;
  goto LAB_02372628;
}


