/*
FUNCTION_NAME: UnityEngine.AttributeHelperEngine$$GetDefaultExecutionOrderFor
ENTRY_POINT: 03f6f448
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f6fbe8) */
/* WARNING: Removing unreachable block (ram,0x03f6fa98) */
/* WARNING: Removing unreachable block (ram,0x03f6fe44) */

long UnityEngine_AttributeHelperEngine__GetDefaultExecutionOrderFor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *plVar16;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x920));
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRMesh>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRSkeletonRenderer>__);
  thunk_FUN_01efb3a4(PTR_DAT_04581170);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(PTR_DAT_045810e8);
  thunk_FUN_01efb3a4(PTR_DAT_04581178);
  thunk_FUN_01efb3a4(StringLiteral_5819);
  thunk_FUN_01efb3a4(StringLiteral_5820);
  thunk_FUN_01efb3a4(PTR_DAT_045810f0);
  thunk_FUN_01efb3a4(PTR_DAT_04581180);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(PTR_DAT_04581188);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
  thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(PTR_DAT_04581190);
  *(undefined1 *)(unaff_x21 + 0x57f) = 1;
  lVar7 = thunk_FUN_01f117cc(*unaff_x22);
  FUN_02b6aa68(lVar7,*unaff_x19);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_0483b624 == '\0') {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    DAT_0483b624 = '\x01';
  }
  lVar8 = *unaff_x20;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *unaff_x20;
  }
  plVar16 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *plVar16;
  uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_045810e8) {
        puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_03f6f5d0;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)PTR_DAT_045810e8,0);
LAB_03f6f5d0:
  puVar6 = PTR_DAT_04581190;
  puVar5 = PTR_DAT_04581180;
  puVar4 = StringLiteral_3425;
  puVar3 = Method_UnityEngine_GeometryUtility_CalculateFrustumPlanes__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  plVar16 = (long *)(*(code *)*puVar9)(plVar16,puVar9[1]);
  do {
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03f6f664;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar2,0);
LAB_03f6f664:
    uVar14 = (*(code *)*puVar9)(plVar16,puVar9[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar16 == (long *)0x0) {
        return lVar7;
      }
      lVar8 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 == 0) goto LAB_03f6fd68;
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_045810f0) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto FUN_03f6f6cc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)PTR_DAT_045810f0,0);
FUN_03f6f6cc:
    uVar10 = (*(code *)*puVar9)(plVar16,puVar9[1]);
    if (*(int *)(*(long *)Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar11 = (long *)FUN_03f6cc30(uVar10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_5819) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03f6f758;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)StringLiteral_5819,0);
LAB_03f6f758:
    plVar11 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03f6f76c:
    lVar8 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03f6f7b8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_03f6f7b8:
    uVar14 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    if ((uVar14 & 1) != 0) {
      lVar8 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_5820) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03f6f81c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)StringLiteral_5820,0);
LAB_03f6f81c:
      plVar12 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
      uVar10 = *(undefined8 *)PTR_DAT_04581188;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_03579868(uVar10,0);
      uVar10 = FUN_03595430(plVar12,uVar10,0,0);
      plVar13 = (long *)FUN_022e50c4(uVar10,*(undefined8 *)PTR_DAT_04581170);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar12 + 0x2e8))(plVar12,*(undefined8 *)(*plVar12 + 0x2f0));
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04581178) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03f6f8f4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)PTR_DAT_04581178,0);
LAB_03f6f8f4:
      plVar13 = (long *)(*(code *)*puVar9)(plVar13,puVar9[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_03f6f908:
      lVar8 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03f6f954;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_03f6f954:
      uVar14 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      if ((uVar14 & 1) != 0) {
        lVar8 = *plVar13;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03f6f9b0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar5,0);
LAB_03f6f9b0:
        lVar8 = (*(code *)*puVar9)(plVar13,puVar9[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar10 = *(undefined8 *)(lVar8 + 0x10);
        uVar14 = FUN_02b6b4d8(lVar7,uVar10,*(undefined8 *)puVar3);
        if ((uVar14 & 1) == 0) {
          FUN_02b6b2e4(lVar7,uVar10,plVar12,*(undefined8 *)puVar4);
        }
        else {
          uVar10 = FUN_0340f2f0(*(undefined8 *)puVar6,uVar10,plVar12,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar10,0);
        }
        goto LAB_03f6f908;
      }
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03f6fa88;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar13,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03f6fa88:
        (*(code *)*puVar9)(plVar13,puVar9[1]);
      }
      goto LAB_03f6f76c;
    }
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03f6fbd8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar11,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f6fbd8:
      (*(code *)*puVar9)(plVar11,puVar9[1]);
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03f6fd84;
    }
  }
LAB_03f6fd68:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar16,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03f6fd84:
  (*(code *)*puVar9)(plVar16,puVar9[1]);
  return lVar7;
}


