/*
FUNCTION_NAME: System.Net.IPHostEntry$$set_HostName
ENTRY_POINT: 0395809c
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

long * System_Net_IPHostEntry__set_HostName(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  ulong unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  int iVar15;
  int iVar16;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x29;
  
  do {
    uVar13 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == param_3) {
          puVar5 = (undefined8 *)(param_1 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_039580e0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_039580e0:
    plVar6 = (long *)(*(code *)*puVar5)();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    uVar13 = thunk_FUN_0340e318(uVar7,*unaff_x26,0);
    if ((uVar13 & 1) == 0) {
      if ((unaff_x19 & 1) == 0) {
        uVar7 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        uVar13 = thunk_FUN_0340e318(uVar7,*unaff_x27,0);
        if ((uVar13 & 1) != 0) goto LAB_03958114;
      }
    }
    else {
LAB_03958114:
      lVar8 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar9 = *(long **)(lVar8 + 0x20);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar13 = (**(code **)(*plVar9 + 0x2a8))();
      if ((uVar13 & 1) != 0) {
        uVar7 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar7,uVar7);
        }
        uVar13 = (**(code **)(*unaff_x20 + 0x2a8))();
        if ((uVar13 & 1) != 0) {
          iVar15 = 5;
          iVar16 = 5;
          goto joined_r0x039581e0;
        }
      }
    }
    lVar8 = *unaff_x23;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03958084;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03958084:
    uVar13 = (*(code *)*puVar5)();
    if ((uVar13 & 1) == 0) break;
    param_1 = *unaff_x23;
    param_3 = *unaff_x25;
  } while( true );
  plVar6 = (long *)0x0;
  iVar15 = 6;
  iVar16 = 6;
joined_r0x039581e0:
  if (unaff_x23 != (long *)0x0) {
    lVar8 = *unaff_x23;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03958238;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03958238:
    (*(code *)*puVar5)();
    iVar16 = iVar15;
  }
  if ((iVar16 == 6) || ((plVar9 = plVar6, iVar16 != 5 && (plVar9 = unaff_x25, iVar16 == 0)))) {
    if (*(int *)(*(long *)Method_System_Collections_CollectionBase_OnValidate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar9 = (long *)FUN_0243ee3c();
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x29) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_039582e0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*unaff_x29,0);
LAB_039582e0:
    plVar10 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
    puVar4 = StringLiteral_3968;
    puVar3 = StringLiteral_3967;
    puVar2 = StringLiteral_3965;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03958314:
    do {
      lVar8 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03958360;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_03958360:
      uVar11 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      uVar13 = uVar11 & 0xffffffff;
      if ((uVar11 & 1) == 0) {
        uVar13 = 0;
        plVar9 = plVar6;
        break;
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_039583c0;
          }
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_039583c0:
      plVar9 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
      uVar11 = thunk_FUN_0340e318(uVar7,*(undefined8 *)puVar3,0);
      if ((uVar11 & 1) == 0) {
        if ((unaff_x19 & 1) != 0) goto LAB_03958314;
        uVar7 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
        uVar11 = thunk_FUN_0340e318(uVar7,*(undefined8 *)puVar4,0);
        if ((uVar11 & 1) == 0) goto LAB_03958314;
      }
      lVar8 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar12 = *(long **)(lVar8 + 0x20);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar12 = (long *)(**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = (**(code **)(*plVar12 + 0x2a8))();
      if ((uVar11 & 1) == 0) goto LAB_03958314;
      uVar7 = (**(code **)(*plVar9 + 1000))(plVar9,*(undefined8 *)(*plVar9 + 0x3f0));
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar7,uVar7);
      }
      uVar11 = (**(code **)(*unaff_x20 + 0x2a8))();
    } while ((uVar11 & 1) == 0);
    if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03958514;
          }
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03958514:
      (*(code *)*puVar5)(plVar10,puVar5[1]);
    }
    if ((uVar13 & 1) == 0) {
      plVar9 = (long *)0x0;
    }
  }
  return plVar9;
}


