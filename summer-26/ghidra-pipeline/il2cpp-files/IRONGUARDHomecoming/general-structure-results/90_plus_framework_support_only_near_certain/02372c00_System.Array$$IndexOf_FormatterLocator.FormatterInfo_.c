/*
FUNCTION_NAME: System.Array$$IndexOf<FormatterLocator.FormatterInfo>
ENTRY_POINT: 02372c00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02372ea8) */
/* WARNING: Removing unreachable block (ram,0x02372fe8) */
/* WARNING: Removing unreachable block (ram,0x0237300c) */

void System_Array__IndexOf<FormatterLocator_FormatterInfo>(void)

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
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar14;
  long unaff_x24;
  long unaff_x25;
  long lVar15;
  int iVar16;
  long unaff_x28;
  uint in_stack_00000010;
  
  lVar14 = *(long *)(unaff_x25 + 0x10);
  uVar6 = FUN_039b1960();
  if (lVar14 != 0) {
    FUN_039afc24(lVar14,uVar6,0,in_stack_00000010 & 1,0);
    puVar4 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
    puVar3 = Method_UnityEngine_Component_GetComponent<OVRSkeleton>__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    lVar14 = *(long *)(unaff_x28 + 0x18);
    if (lVar14 != 0) {
      iVar16 = 0;
      puVar8 = (undefined8 *)
               Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
LAB_02372c78:
      iVar5 = FUN_0265d6c4(lVar14,*puVar8);
      if (iVar16 < iVar5) {
        if (*(long *)(unaff_x28 + 0x18) != 0) {
          lVar14 = FUN_0265d74c(*(long *)(unaff_x28 + 0x18),iVar16,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                               );
          if (((*(long *)(unaff_x25 + 0x10) != 0) &&
              (System_ComponentModel_ArrayConverter___ctor(*(long *)(unaff_x25 + 0x10),0),
              lVar14 != 0)) && (*(long *)(lVar14 + 0x10) != 0)) {
            plVar7 = (long *)FUN_0265d924(*(long *)(lVar14 + 0x10),
                                          *(undefined8 *)
                                           Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                         );
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar11 = *plVar7;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_02372d38;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_02372d38:
              uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
              if ((uVar12 & 1) == 0) goto LAB_02372e30;
              lVar11 = *plVar7;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_02372d94;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_02372d94:
              plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
              if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc();
              }
              lVar15 = plVar9[2];
              lVar11 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_01ecaf44(lVar11);
              }
              if ((lVar15 != 0) && (lVar10 = thunk_FUN_01f116d0(lVar15,lVar11), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar15,lVar11);
              }
              if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              System_Linq_EnumerableSorter<MarkToBaseAdjustmentRecord>__Sort();
            } while( true );
          }
        }
      }
      else {
        lVar14 = *(long *)(unaff_x25 + 0x10);
        uVar6 = FUN_039b1960(unaff_x19,unaff_x25,0);
        if (lVar14 != 0) {
          FUN_039afab4(lVar14,uVar6,0);
          return;
        }
      }
    }
  }
LAB_02373008:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02372e30:
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto FUN_02372e90;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
FUN_02372e90:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  FUN_039b6544(unaff_x25,*(undefined8 *)(lVar14 + 0x18),(in_stack_00000010 ^ 1) & 1,0);
  puVar8 = (undefined8 *)
           Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
  if (*(long *)(unaff_x28 + 0x18) == 0) goto LAB_02373008;
  iVar5 = FUN_0265d6c4(*(long *)(unaff_x28 + 0x18),
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
  if (iVar16 < iVar5 + -1) {
    lVar14 = *(long *)(unaff_x25 + 0x10);
    uVar6 = FUN_039b1960(unaff_x19,unaff_x25,0);
    if (lVar14 == 0) goto LAB_02373008;
    FUN_039afc24(lVar14,uVar6,0,in_stack_00000010 & 1,0);
  }
  lVar14 = *(long *)(unaff_x28 + 0x18);
  iVar16 = iVar16 + 1;
  if (lVar14 == 0) goto LAB_02373008;
  goto LAB_02372c78;
}


