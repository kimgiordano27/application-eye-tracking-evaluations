/*
FUNCTION_NAME: System.Net.ExceptionHelper$$get_MethodNotImplementedException
ENTRY_POINT: 03957ff0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03958590) */
/* WARNING: Removing unreachable block (ram,0x03958584) */

long * System_Net_ExceptionHelper__get_MethodNotImplementedException(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  ulong unaff_x19;
  long *unaff_x20;
  ulong uVar16;
  int iVar17;
  long *unaff_x29;
  
  puVar6 = (undefined8 *)FUN_01ecb238();
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar4 = StringLiteral_3968;
  puVar3 = StringLiteral_3967;
  puVar2 = StringLiteral_3965;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_03958038:
  do {
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03958084;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03958084:
    uVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar14 & 1) == 0) {
      plVar8 = (long *)0x0;
      iVar17 = 6;
      iVar5 = 6;
      if (plVar7 == (long *)0x0) goto LAB_03958244;
      goto LAB_039581e4;
    }
    lVar13 = *plVar7;
    lVar12 = *(long *)puVar2;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_039580e0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar12,0);
LAB_039580e0:
    plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
    uVar14 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar3,0);
    if ((uVar14 & 1) == 0) {
      if ((unaff_x19 & 1) != 0) goto LAB_03958038;
      uVar9 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
      uVar14 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar4,0);
      if ((uVar14 & 1) == 0) goto LAB_03958038;
    }
    lVar12 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar10 = *(long **)(lVar12 + 0x20);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar14 = (**(code **)(*plVar10 + 0x2a8))();
    if ((uVar14 & 1) == 0) goto LAB_03958038;
    uVar9 = (**(code **)(*plVar8 + 1000))(plVar8,*(undefined8 *)(*plVar8 + 0x3f0));
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar9,uVar9);
    }
    uVar14 = (**(code **)(*unaff_x20 + 0x2a8))();
  } while ((uVar14 & 1) == 0);
  iVar17 = 5;
  iVar5 = 5;
  if (plVar7 != (long *)0x0) {
LAB_039581e4:
    iVar17 = iVar5;
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03958238;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03958238:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
LAB_03958244:
  if ((iVar17 == 6) || ((plVar7 = plVar8, iVar17 != 5 && (plVar7 = (long *)puVar2, iVar17 == 0)))) {
    if (*(int *)(*(long *)Method_System_Collections_CollectionBase_OnValidate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar7 = (long *)FUN_0243ee3c();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x29) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_039582e0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x29,0);
LAB_039582e0:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    puVar4 = StringLiteral_3968;
    puVar3 = StringLiteral_3967;
    puVar2 = StringLiteral_3965;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03958314:
    do {
      lVar12 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03958360;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03958360:
      uVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      uVar16 = uVar14 & 0xffffffff;
      if ((uVar14 & 1) == 0) {
        uVar16 = 0;
        if (plVar7 == (long *)0x0) goto LAB_03958520;
        goto LAB_039584c0;
      }
      lVar12 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_039583c0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_039583c0:
      plVar10 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
      uVar14 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar3,0);
      if ((uVar14 & 1) == 0) {
        if ((unaff_x19 & 1) != 0) goto LAB_03958314;
        uVar9 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
        uVar14 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar4,0);
        if ((uVar14 & 1) == 0) goto LAB_03958314;
      }
      lVar12 = (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar11 = *(long **)(lVar12 + 0x20);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar11 = (long *)(**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar14 = (**(code **)(*plVar11 + 0x2a8))();
      if ((uVar14 & 1) == 0) goto LAB_03958314;
      uVar9 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0));
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar9,uVar9);
      }
      uVar14 = (**(code **)(*unaff_x20 + 0x2a8))();
    } while ((uVar14 & 1) == 0);
    plVar8 = plVar10;
    if (plVar7 != (long *)0x0) {
LAB_039584c0:
      lVar12 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03958514;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03958514:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
    }
LAB_03958520:
    plVar7 = plVar8;
    if ((uVar16 & 1) == 0) {
      plVar7 = (long *)0x0;
    }
  }
  return plVar7;
}


