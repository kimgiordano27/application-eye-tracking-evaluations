/*
FUNCTION_NAME: FUN_03945754
ENTRY_POINT: 03945754
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_16;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x03945e04) */
/* WARNING: Removing unreachable block (ram,0x03945df8) */

long * FUN_03945754(undefined8 param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  int iVar19;
  
  puVar2 = Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__;
  if ((DAT_0483836e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_3964);
    thunk_FUN_01efb3a4(StringLiteral_3965);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_3966);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(StringLiteral_3967);
    thunk_FUN_01efb3a4(StringLiteral_3968);
    DAT_0483836e = 1;
  }
  puVar4 = StringLiteral_3966;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar8 = (long *)FUN_0243dec4(param_1,0x18,*(undefined8 *)puVar4);
  puVar2 = StringLiteral_3964;
  if (plVar8 == (long *)0x0) {
LAB_03945df0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar14 = *plVar8;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_3964) {
        puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_03945878;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)StringLiteral_3964,0);
LAB_03945878:
  plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
  puVar6 = StringLiteral_3968;
  puVar5 = StringLiteral_3967;
  puVar3 = StringLiteral_3965;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_039458ac:
  do {
    lVar14 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_039458f8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_039458f8:
    uVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar16 & 1) == 0) {
      plVar10 = (long *)0x0;
      iVar19 = 6;
      iVar7 = 6;
      if (plVar8 == (long *)0x0) goto LAB_03945ab8;
      goto LAB_03945a58;
    }
    lVar15 = *plVar8;
    lVar14 = *(long *)puVar3;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03945954;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar14,0);
LAB_03945954:
    plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar11 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
    uVar16 = thunk_FUN_0340e318(uVar11,*(undefined8 *)puVar5,0);
    if ((uVar16 & 1) == 0) {
      if ((param_3 & 1) != 0) goto LAB_039458ac;
      uVar11 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
      uVar16 = thunk_FUN_0340e318(uVar11,*(undefined8 *)puVar6,0);
      if ((uVar16 & 1) == 0) goto LAB_039458ac;
    }
    lVar14 = (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250));
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar12 = *(long **)(lVar14 + 0x20);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar16 = (**(code **)(*plVar12 + 0x2a8))(plVar12,param_1,*(undefined8 *)(*plVar12 + 0x2b0));
    if ((uVar16 & 1) == 0) goto LAB_039458ac;
    uVar11 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0));
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar11,uVar11);
    }
    uVar16 = (**(code **)(*param_2 + 0x2a8))(param_2,uVar11,*(undefined8 *)(*param_2 + 0x2b0));
  } while ((uVar16 & 1) == 0);
  iVar19 = 5;
  iVar7 = 5;
  if (plVar8 != (long *)0x0) {
LAB_03945a58:
    iVar19 = iVar7;
    lVar14 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03945aac;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03945aac:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
LAB_03945ab8:
  if ((iVar19 == 6) || ((plVar8 = plVar10, iVar19 != 5 && (plVar8 = (long *)puVar3, iVar19 == 0))))
  {
    if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    plVar8 = (long *)FUN_0243dec4(param_2,0x18,*(undefined8 *)puVar4);
    if (plVar8 == (long *)0x0) goto LAB_03945df0;
    lVar14 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03945b54;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03945b54:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar3 = StringLiteral_3968;
    puVar1 = StringLiteral_3967;
    puVar4 = StringLiteral_3965;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03945b88:
    do {
      lVar14 = *plVar8;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03945bd4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03945bd4:
      uVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      uVar18 = uVar16 & 0xffffffff;
      if ((uVar16 & 1) == 0) {
        uVar18 = 0;
        if (plVar8 == (long *)0x0) goto LAB_03945d94;
        goto LAB_03945d34;
      }
      lVar14 = *plVar8;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03945c34;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03945c34:
      plVar12 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
      uVar16 = thunk_FUN_0340e318(uVar11,*(undefined8 *)puVar1,0);
      if ((uVar16 & 1) == 0) {
        if ((param_3 & 1) != 0) goto LAB_03945b88;
        uVar11 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
        uVar16 = thunk_FUN_0340e318(uVar11,*(undefined8 *)puVar3,0);
        if ((uVar16 & 1) == 0) goto LAB_03945b88;
      }
      lVar14 = (**(code **)(*plVar12 + 0x248))(plVar12,*(undefined8 *)(*plVar12 + 0x250));
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar13 = *(long **)(lVar14 + 0x20);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar16 = (**(code **)(*plVar13 + 0x2a8))(plVar13,param_1,*(undefined8 *)(*plVar13 + 0x2b0));
      if ((uVar16 & 1) == 0) goto LAB_03945b88;
      uVar11 = (**(code **)(*plVar12 + 1000))(plVar12,*(undefined8 *)(*plVar12 + 0x3f0));
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar11,uVar11);
      }
      uVar16 = (**(code **)(*param_2 + 0x2a8))(param_2,uVar11,*(undefined8 *)(*param_2 + 0x2b0));
    } while ((uVar16 & 1) == 0);
    plVar10 = plVar12;
    if (plVar8 != (long *)0x0) {
LAB_03945d34:
      lVar14 = *plVar8;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03945d88;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03945d88:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
    }
LAB_03945d94:
    plVar8 = plVar10;
    if ((uVar18 & 1) == 0) {
      plVar8 = (long *)0x0;
    }
  }
  return plVar8;
}


