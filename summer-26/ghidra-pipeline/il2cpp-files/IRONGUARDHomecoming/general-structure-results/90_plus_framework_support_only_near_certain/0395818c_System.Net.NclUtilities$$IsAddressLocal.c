/*
FUNCTION_NAME: System.Net.NclUtilities$$IsAddressLocal
ENTRY_POINT: 0395818c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03958590) */
/* WARNING: Removing unreachable block (ram,0x03958584) */

long * System_Net_NclUtilities__IsAddressLocal(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  code *in_x9;
  int *piVar13;
  ulong unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  ulong uVar14;
  long *unaff_x25;
  int iVar15;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x29;
  
  while (uVar6 = (*in_x9)(), (uVar6 & 1) == 0) {
LAB_03958038:
    do {
      lVar12 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x24) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03958084;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03958084:
      uVar6 = (*(code *)*puVar7)();
      if ((uVar6 & 1) == 0) {
        unaff_x22 = (long *)0x0;
        iVar15 = 6;
        iVar5 = 6;
        if (unaff_x23 == (long *)0x0) goto LAB_03958244;
        goto LAB_039581e4;
      }
      lVar12 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x25) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_039580e0;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238();
LAB_039580e0:
      unaff_x22 = (long *)(*(code *)*puVar7)();
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = (**(code **)(*unaff_x22 + 0x1a8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x1b0));
      uVar6 = thunk_FUN_0340e318(uVar10,*unaff_x26,0);
      if ((uVar6 & 1) == 0) {
        if ((unaff_x19 & 1) != 0) goto LAB_03958038;
        uVar10 = (**(code **)(*unaff_x22 + 0x1a8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x1b0));
        uVar6 = thunk_FUN_0340e318(uVar10,*unaff_x27,0);
        if ((uVar6 & 1) == 0) goto LAB_03958038;
      }
      lVar12 = (**(code **)(*unaff_x22 + 0x248))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x250));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar8 = *(long **)(lVar12 + 0x20);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar6 = (**(code **)(*plVar8 + 0x2a8))();
    } while ((uVar6 & 1) == 0);
    (**(code **)(*unaff_x22 + 1000))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x3f0));
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    in_x9 = *(code **)(*unaff_x20 + 0x2a8);
  }
  iVar15 = 5;
  iVar5 = 5;
  if (unaff_x23 != (long *)0x0) {
LAB_039581e4:
    iVar15 = iVar5;
    lVar12 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03958238;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03958238:
    (*(code *)*puVar7)();
  }
LAB_03958244:
  if ((iVar15 == 6) || ((plVar8 = unaff_x22, iVar15 != 5 && (plVar8 = unaff_x25, iVar15 == 0)))) {
    if (*(int *)(*(long *)Method_System_Collections_CollectionBase_OnValidate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar8 = (long *)FUN_0243ee3c();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x29) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_039582e0;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*unaff_x29,0);
LAB_039582e0:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    puVar4 = StringLiteral_3968;
    puVar3 = StringLiteral_3967;
    puVar2 = StringLiteral_3965;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03958314:
    do {
      lVar12 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03958360;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03958360:
      uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      uVar14 = uVar6 & 0xffffffff;
      if ((uVar6 & 1) == 0) {
        uVar14 = 0;
        if (plVar8 == (long *)0x0) goto LAB_03958520;
        goto LAB_039584c0;
      }
      lVar12 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_039583c0;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_039583c0:
      plVar9 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
      uVar6 = thunk_FUN_0340e318(uVar10,*(undefined8 *)puVar3,0);
      if ((uVar6 & 1) == 0) {
        if ((unaff_x19 & 1) != 0) goto LAB_03958314;
        uVar10 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
        uVar6 = thunk_FUN_0340e318(uVar10,*(undefined8 *)puVar4,0);
        if ((uVar6 & 1) == 0) goto LAB_03958314;
      }
      lVar12 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
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
      uVar6 = (**(code **)(*plVar11 + 0x2a8))();
      if ((uVar6 & 1) == 0) goto LAB_03958314;
      uVar10 = (**(code **)(*plVar9 + 1000))(plVar9,*(undefined8 *)(*plVar9 + 0x3f0));
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar10,uVar10);
      }
      uVar6 = (**(code **)(*unaff_x20 + 0x2a8))();
    } while ((uVar6 & 1) == 0);
    unaff_x22 = plVar9;
    if (plVar8 != (long *)0x0) {
LAB_039584c0:
      lVar12 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03958514;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03958514:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
    }
LAB_03958520:
    plVar8 = unaff_x22;
    if ((uVar14 & 1) == 0) {
      plVar8 = (long *)0x0;
    }
  }
  return plVar8;
}


