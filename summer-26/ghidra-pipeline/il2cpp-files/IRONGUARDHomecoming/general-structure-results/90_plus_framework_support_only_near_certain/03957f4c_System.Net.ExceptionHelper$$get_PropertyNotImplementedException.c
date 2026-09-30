/*
FUNCTION_NAME: System.Net.ExceptionHelper$$get_PropertyNotImplementedException
ENTRY_POINT: 03957f4c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03958590) */
/* WARNING: Removing unreachable block (ram,0x03958584) */

long * System_Net_ExceptionHelper__get_PropertyNotImplementedException(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  ulong uVar17;
  int iVar18;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x90));
  thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_OnValidate__);
  thunk_FUN_01efb3a4(StringLiteral_3967);
  thunk_FUN_01efb3a4(StringLiteral_3968);
  *(undefined1 *)(unaff_x22 + 0x3eb) = 1;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_0243ee3c();
  puVar2 = StringLiteral_3964;
  if (plVar7 == (long *)0x0) {
LAB_0395857c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar13 = *plVar7;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_3964) {
        puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_03958004;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)StringLiteral_3964,0);
LAB_03958004:
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar5 = StringLiteral_3968;
  puVar4 = StringLiteral_3967;
  puVar3 = StringLiteral_3965;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_03958038:
  do {
    lVar13 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03958084;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03958084:
    uVar15 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar15 & 1) == 0) {
      plVar9 = (long *)0x0;
      iVar18 = 6;
      iVar6 = 6;
      if (plVar7 == (long *)0x0) goto LAB_03958244;
      goto LAB_039581e4;
    }
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar3;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_039580e0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar13,0);
LAB_039580e0:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
    uVar15 = thunk_FUN_0340e318(uVar10,*(undefined8 *)puVar4,0);
    if ((uVar15 & 1) == 0) {
      if ((unaff_x19 & 1) != 0) goto LAB_03958038;
      uVar10 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
      uVar15 = thunk_FUN_0340e318(uVar10,*(undefined8 *)puVar5,0);
      if ((uVar15 & 1) == 0) goto LAB_03958038;
    }
    lVar13 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar11 = *(long **)(lVar13 + 0x20);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar15 = (**(code **)(*plVar11 + 0x2a8))();
    if ((uVar15 & 1) == 0) goto LAB_03958038;
    uVar10 = (**(code **)(*plVar9 + 1000))(plVar9,*(undefined8 *)(*plVar9 + 0x3f0));
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar10,uVar10);
    }
    uVar15 = (**(code **)(*unaff_x20 + 0x2a8))();
  } while ((uVar15 & 1) == 0);
  iVar18 = 5;
  iVar6 = 5;
  if (plVar7 != (long *)0x0) {
LAB_039581e4:
    iVar18 = iVar6;
    lVar13 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03958238;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03958238:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
LAB_03958244:
  if ((iVar18 == 6) || ((plVar7 = plVar9, iVar18 != 5 && (plVar7 = (long *)puVar3, iVar18 == 0)))) {
    if (*(int *)(*(long *)Method_System_Collections_CollectionBase_OnValidate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar7 = (long *)FUN_0243ee3c();
    if (plVar7 == (long *)0x0) goto LAB_0395857c;
    lVar13 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_039582e0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_039582e0:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar4 = StringLiteral_3968;
    puVar3 = StringLiteral_3967;
    puVar1 = StringLiteral_3965;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03958314:
    do {
      lVar13 = *plVar7;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03958360;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03958360:
      uVar15 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar17 = uVar15 & 0xffffffff;
      if ((uVar15 & 1) == 0) {
        uVar17 = 0;
        if (plVar7 == (long *)0x0) goto LAB_03958520;
        goto LAB_039584c0;
      }
      lVar13 = *plVar7;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_039583c0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_039583c0:
      plVar11 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
      uVar15 = thunk_FUN_0340e318(uVar10,*(undefined8 *)puVar3,0);
      if ((uVar15 & 1) == 0) {
        if ((unaff_x19 & 1) != 0) goto LAB_03958314;
        uVar10 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
        uVar15 = thunk_FUN_0340e318(uVar10,*(undefined8 *)puVar4,0);
        if ((uVar15 & 1) == 0) goto LAB_03958314;
      }
      lVar13 = (**(code **)(*plVar11 + 0x248))(plVar11,*(undefined8 *)(*plVar11 + 0x250));
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar12 = *(long **)(lVar13 + 0x20);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar12 = (long *)(**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar15 = (**(code **)(*plVar12 + 0x2a8))();
      if ((uVar15 & 1) == 0) goto LAB_03958314;
      uVar10 = (**(code **)(*plVar11 + 1000))(plVar11,*(undefined8 *)(*plVar11 + 0x3f0));
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar10,uVar10);
      }
      uVar15 = (**(code **)(*unaff_x20 + 0x2a8))();
    } while ((uVar15 & 1) == 0);
    plVar9 = plVar11;
    if (plVar7 != (long *)0x0) {
LAB_039584c0:
      lVar13 = *plVar7;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03958514;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03958514:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
LAB_03958520:
    plVar7 = plVar9;
    if ((uVar17 & 1) == 0) {
      plVar7 = (long *)0x0;
    }
  }
  return plVar7;
}


