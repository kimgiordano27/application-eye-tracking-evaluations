/*
FUNCTION_NAME: FUN_0342f510
ENTRY_POINT: 0342f510
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0342f9e8) */
/* WARNING: Removing unreachable block (ram,0x0342fa60) */
/* WARNING: Removing unreachable block (ram,0x0342fa90) */

void FUN_0342f510(long param_1,long *param_2,int param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  long lVar15;
  
  if ((DAT_048327ed & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Shapes_Polyline_SetPoints__);
    thunk_FUN_01efb3a4(Method_UnityEngine_AI_NavMeshBuilder_BuildNavMeshData__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_System_DateTimeParse_ParseExact__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<float>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Antlr3_Runtime_DFA_NoViableAlt__);
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDateTime__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<ushort>__);
    thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<Color,_Color,_ColorOptions>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<Vector3>__);
    DAT_048327ed = 1;
  }
  if (*param_2 == 0) goto LAB_0342f77c;
  FUN_03418748(*param_2,*(undefined8 *)Method_Unity_VisualScripting_Antlr3_Runtime_DFA_NoViableAlt__
               ,0);
  puVar5 = Method_UnityEngine_AI_NavMeshBuilder_BuildNavMeshData__;
  if (*param_2 == 0) goto LAB_0342f77c;
  FUN_03418748(*param_2,*(undefined8 *)(param_1 + 0x18),0);
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*param_2 != 0) {
      FUN_03418748(*param_2,*(undefined8 *)Method_System_DateTimeParse_ParseExact__,0);
      puVar2 = Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<float>__;
      puVar3 = Method_Shapes_Polyline_SetPoints__;
      puVar4 = Method_System_DBNull_System_IConvertible_ToDateTime__;
      plVar8 = *(long **)(param_1 + 0x20);
      if (plVar8 != (long *)0x0) {
        iVar7 = 0;
        while( true ) {
          iVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
          if (iVar6 <= iVar7) goto LAB_0342f780;
          plVar8 = *(long **)(param_1 + 0x20);
          if ((plVar8 == (long *)0x0) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x2e8))
                                         (plVar8,iVar7,*(undefined8 *)(*plVar8 + 0x2f0)),
             plVar8 == (long *)0x0)) break;
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar8);
          }
          if ((*param_2 == 0) || (lVar9 = FUN_03418748(*param_2,plVar8[2],0), lVar9 == 0)) break;
          lVar9 = FUN_03418748(lVar9,*(undefined8 *)puVar2,0);
          lVar15 = plVar8[3];
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar5);
          }
          uVar10 = FUN_0342f068(lVar15);
          if ((lVar9 == 0) || (lVar9 = FUN_03418748(lVar9,uVar10,0), lVar9 == 0)) break;
          FUN_03418748(lVar9,*(undefined8 *)puVar4,0);
          plVar8 = *(long **)(param_1 + 0x20);
          if (plVar8 == (long *)0x0) break;
          iVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
          if (iVar7 != iVar6 + -1) {
            lVar9 = *param_2;
            uVar10 = FUN_035b04c8(0);
            if (lVar9 == 0) break;
            FUN_03418748(lVar9,uVar10,0);
          }
          plVar8 = *(long **)(param_1 + 0x20);
          iVar7 = iVar7 + 1;
          if (plVar8 == (long *)0x0) break;
        }
      }
    }
    goto LAB_0342f77c;
  }
LAB_0342f780:
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (uVar11 = thunk_FUN_0340e318(*(long *)(param_1 + 0x10),
                                   **(undefined8 **)
                                     (*(long *)
                                       Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                                     + 0xb8),0), (uVar11 & 1) == 0)) ||
     ((plVar8 = *(long **)(param_1 + 0x28), plVar8 != (long *)0x0 &&
      (iVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0)), iVar7 != 0))
     )) {
    puVar4 = Method_DG_Tweening_DOTween_ApplyTo<Color,_Color,_ColorOptions>__;
    if (*param_2 == 0) goto LAB_0342f77c;
    lVar9 = FUN_03418748(*param_2,*(undefined8 *)
                                   Method_DG_Tweening_DOTween_ApplyTo<Color,_Color,_ColorOptions>__,
                         0);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar5);
    }
    uVar10 = FUN_0342f068(uVar10);
    if (lVar9 == 0) goto LAB_0342f77c;
    FUN_03418748(lVar9,uVar10,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar9 = *param_2;
      uVar10 = FUN_035b04c8(0);
      if (lVar9 != 0) {
        FUN_03418748(lVar9,uVar10,0);
        plVar8 = *(long **)(param_1 + 0x28);
        if (plVar8 != (long *)0x0) {
          plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
          puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar15 = *plVar8;
            lVar9 = *(long *)puVar3;
            uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar11 != 0) {
              piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0342f8b8;
                }
                uVar11 = uVar11 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,0);
LAB_0342f8b8:
            uVar11 = (*(code *)*puVar12)(plVar8,puVar12[1]);
            puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
            if ((uVar11 & 1) == 0) {
              plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                                 );
              if (plVar8 == (long *)0x0) goto LAB_0342f9ec;
              lVar9 = *plVar8;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 == 0) goto LAB_0342f9b4;
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_0342f99c;
            }
            lVar15 = *plVar8;
            lVar9 = *(long *)puVar3;
            uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar11 != 0) {
              piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar12 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_0342f918;
                }
                uVar11 = uVar11 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,1);
LAB_0342f918:
            plVar13 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*plVar13 != *(long *)puVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            FUN_0342f510(plVar13,param_2,param_3 + 1);
          } while( true );
        }
      }
      goto LAB_0342f77c;
    }
    goto LAB_0342f9ec;
  }
  lVar9 = *param_2;
  if (lVar9 == 0) goto LAB_0342f77c;
  uVar10 = *(undefined8 *)Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<Vector3>__;
  goto LAB_0342fa20;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar14 = piVar14 + 4;
    if (uVar11 == 0) break;
LAB_0342f99c:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0342f9d0;
    }
  }
LAB_0342f9b4:
  puVar12 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_0342f9d0:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
LAB_0342f9ec:
  if (((*param_2 == 0) ||
      (lVar9 = FUN_03418748(*param_2,*(undefined8 *)
                                      Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<ushort>__
                            ,0), lVar9 == 0)) ||
     (lVar9 = FUN_03418748(lVar9,*(undefined8 *)(param_1 + 0x18),0), lVar9 == 0)) goto LAB_0342f77c;
  uVar10 = *(undefined8 *)puVar4;
LAB_0342fa20:
  lVar9 = FUN_03418748(lVar9,uVar10,0);
  uVar10 = FUN_035b04c8(0);
  if (lVar9 != 0) {
    FUN_03418748(lVar9,uVar10,0);
    return;
  }
LAB_0342f77c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


