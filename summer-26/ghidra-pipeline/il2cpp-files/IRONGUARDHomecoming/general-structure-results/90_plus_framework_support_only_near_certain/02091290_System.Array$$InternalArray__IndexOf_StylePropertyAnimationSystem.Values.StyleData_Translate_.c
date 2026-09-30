/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<StylePropertyAnimationSystem.Values.StyleData<Translate>>
ENTRY_POINT: 02091290
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_10;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02091cec) */
/* WARNING: Removing unreachable block (ram,0x02091ab4) */
/* WARNING: Removing unreachable block (ram,0x02091cfc) */

long System_Array__InternalArray__IndexOf<StylePropertyAnimationSystem_Values_StyleData<Translate>>
               (ulong param_1,undefined1 param_2 [16],ulong param_3,ulong param_4)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long lVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  long lVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Equals__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Read__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<VisualData>_ReferenceEquals__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Release__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Write__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Equality__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Implicit__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Inequality__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleEnum<FlexDirection>_op_Implicit__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleEnum<Overflow>_get_keyword__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleEnum<Overflow>_get_value__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleEnum<Overflow>_op_Implicit__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleEnum<OverflowInternal>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleEnum<Position>_op_Implicit__);
    *(undefined1 *)(unaff_x20 + 0x78c) = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_StyleEnum<Position>_op_Implicit__;
  if (unaff_x19 != 0) {
    uVar8 = FUN_040524d0();
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar13);
      lVar13 = *(long *)puVar2;
    }
    puVar3 = Method_UnityEngine_UIElements_StyleDataRef<VisualData>_ReferenceEquals__;
    lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
    if (lVar18 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar13);
        lVar13 = *(long *)puVar2;
      }
      uVar19 = **(undefined8 **)(lVar13 + 0xb8);
      lVar18 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Write__);
      FUN_02e7b44c(lVar18,uVar19,
                   *(undefined8 *)Method_UnityEngine_UIElements_StyleEnum<Overflow>_op_Implicit__,0)
      ;
      plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar9 = lVar18;
      thunk_FUN_01f51358(plVar9,lVar18);
    }
    uVar8 = FUN_02302ee0(uVar8,lVar18,*(undefined8 *)puVar3);
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar13);
      lVar13 = *(long *)puVar2;
    }
    puVar5 = Method_UnityEngine_UIElements_StyleEnum<Overflow>_get_keyword__;
    puVar4 = Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Read__;
    puVar3 = 
    Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
    ;
    lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
    if (lVar18 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar13);
        lVar13 = *(long *)puVar2;
      }
      uVar19 = **(undefined8 **)(lVar13 + 0xb8);
      lVar18 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Release__)
      ;
      FUN_02e663d8(lVar18,uVar19,
                   *(undefined8 *)Method_UnityEngine_UIElements_StyleEnum<OverflowInternal>__ctor__,
                   0);
      plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar9 = lVar18;
      thunk_FUN_01f51358(plVar9,lVar18);
    }
    plVar9 = (long *)FUN_022f9e6c(uVar8,lVar18,*(undefined8 *)puVar4);
    uVar8 = FUN_0405257c();
    lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_0317f93c(lVar13,uVar8,*(undefined8 *)puVar5);
    if (plVar9 != (long *)0x0) {
      lVar18 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Equality__) {
            puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_02091568;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01ecb238(plVar9,*(long *)
                                     Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Equality__
                             ,0);
LAB_02091568:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      puVar6 = Method_UnityEngine_UIElements_StyleEnum<Overflow>_get_value__;
      puVar5 = Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Implicit__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>__ctor__;
      puVar2 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
      fVar1 = DAT_00c926ac;
      plVar9 = (long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Inequality__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_020915b8:
      do {
        lVar18 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02091604;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_02091604:
        uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if ((uVar15 & 1) == 0) goto LAB_02091b48;
        lVar18 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *plVar9) {
              puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02091660;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*plVar9,0);
LAB_02091660:
        plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        iVar7 = FUN_022f0920(plVar12,*(undefined8 *)
                                      Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Equals__
                            );
        if (iVar7 != 1) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4(puVar2);
            DAT_0482ee12 = '\x01';
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar18 = *plVar12;
          pfVar16 = *(float **)(*(long *)puVar2 + 0xb8);
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          fVar21 = *pfVar16;
          fVar22 = pfVar16[1];
          fVar23 = pfVar16[2];
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__) {
                puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_02091708;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01ecb238(plVar12,*(long *)
                                          Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__
                                 ,0);
LAB_02091708:
          plVar9 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar18 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                  puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_02091774;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_02091774:
            uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if ((uVar15 & 1) == 0) goto LAB_02091800;
            lVar14 = *plVar9;
            lVar18 = *(long *)puVar5;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar18) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_020917d0;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar18,0);
LAB_020917d0:
            (*(code *)*puVar10)(plVar9,puVar10[1]);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar20 = (float)FUN_0317fd78(lVar13,extraout_x1 >> 0x20,*(undefined8 *)puVar3);
            fVar21 = fVar21 + fVar20;
            fVar22 = fVar22 + (float)param_3;
            fVar23 = fVar23 + (float)param_4;
          } while( true );
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02091800:
  if (plVar9 != (long *)0x0) {
    lVar18 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0209185c;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_0209185c:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  plVar9 = (long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Inequality__;
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  param_3 = (ulong)(uint)(fVar23 * fVar23);
  fVar20 = SQRT(fVar23 * fVar23 + fVar22 * fVar22 + fVar21 * fVar21);
  if (fVar20 <= fVar1) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(puVar2);
      DAT_0482ee12 = '\x01';
    }
    pfVar16 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar21 = *pfVar16;
    fVar22 = pfVar16[1];
    fVar23 = pfVar16[2];
  }
  else {
    fVar21 = fVar21 / fVar20;
    fVar22 = fVar22 / fVar20;
    fVar23 = fVar23 / fVar20;
  }
  lVar18 = *plVar12;
  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__) {
        puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_0209195c;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__,0);
LAB_0209195c:
  plVar12 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar18 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_020919bc;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar4,0);
LAB_020919bc:
    uVar15 = (*(code *)*puVar10)(plVar12,puVar10[1]);
    if ((uVar15 & 1) == 0) break;
    lVar14 = *plVar12;
    lVar18 = *(long *)puVar5;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar18) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02091a18;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar12,lVar18,0);
LAB_02091a18:
    (*(code *)*puVar10)(plVar12,puVar10[1]);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_3 = (ulong)(uint)fVar22;
    param_4 = (ulong)(uint)fVar23;
    FUN_0317fdd8(fVar21,lVar13,extraout_x1_00 >> 0x20,*(undefined8 *)puVar6);
  } while( true );
  if (plVar12 != (long *)0x0) {
    lVar18 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02091aa4;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar12,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_02091aa4:
    (*(code *)*puVar10)(plVar12,puVar10[1]);
  }
  goto LAB_020915b8;
LAB_02091b48:
  if (plVar11 != (long *)0x0) {
    lVar18 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02091ba4;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar11,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_02091ba4:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  return lVar13;
}


