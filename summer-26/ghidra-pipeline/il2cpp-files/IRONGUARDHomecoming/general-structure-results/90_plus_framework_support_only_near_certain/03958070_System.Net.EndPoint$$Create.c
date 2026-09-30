/*
FUNCTION_NAME: System.Net.EndPoint$$Create
ENTRY_POINT: 03958070
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03958590) */
/* WARNING: Removing unreachable block (ram,0x03958584) */

long * System_Net_EndPoint__Create(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  ulong unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  ulong uVar15;
  long *unaff_x25;
  int iVar16;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x29;
  
code_r0x03958070:
  puVar6 = (undefined8 *)FUN_01ecb238();
  do {
    uVar7 = (*(code *)*puVar6)();
    if ((uVar7 & 1) == 0) {
      plVar8 = (long *)0x0;
      iVar16 = 6;
      iVar5 = 6;
      if (unaff_x23 == (long *)0x0) goto LAB_03958244;
LAB_039581e4:
      iVar16 = iVar5;
      lVar13 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 == 0) goto LAB_0395821c;
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x25) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_039580e0;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_039580e0:
    plVar8 = (long *)(*(code *)*puVar6)();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
    uVar7 = thunk_FUN_0340e318(uVar9,*unaff_x26,0);
    if ((uVar7 & 1) == 0) {
      if ((unaff_x19 & 1) == 0) {
        uVar9 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        uVar7 = thunk_FUN_0340e318(uVar9,*unaff_x27,0);
        if ((uVar7 & 1) != 0) goto LAB_03958114;
      }
    }
    else {
LAB_03958114:
      lVar13 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar10 = *(long **)(lVar13 + 0x20);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar10 = (long *)(**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = (**(code **)(*plVar10 + 0x2a8))();
      if ((uVar7 & 1) != 0) {
        uVar9 = (**(code **)(*plVar8 + 1000))(plVar8,*(undefined8 *)(*plVar8 + 0x3f0));
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar9,uVar9);
        }
        uVar7 = (**(code **)(*unaff_x20 + 0x2a8))();
        if ((uVar7 & 1) != 0) {
          iVar16 = 5;
          iVar5 = 5;
          if (unaff_x23 != (long *)0x0) goto LAB_039581e4;
          goto LAB_03958244;
        }
      }
    }
    lVar13 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 == 0) goto code_r0x03958070;
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    while (*(long *)(piVar14 + -2) != *unaff_x24) {
      uVar7 = uVar7 - 1;
      piVar14 = piVar14 + 4;
      if (uVar7 == 0) goto code_r0x03958070;
    }
    puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03958238;
    }
  }
LAB_0395821c:
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03958238:
  (*(code *)*puVar6)();
LAB_03958244:
  if ((iVar16 == 6) || ((plVar10 = plVar8, iVar16 != 5 && (plVar10 = unaff_x25, iVar16 == 0)))) {
    if (*(int *)(*(long *)Method_System_Collections_CollectionBase_OnValidate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar10 = (long *)FUN_0243ee3c();
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x29) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_039582e0;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x29,0);
LAB_039582e0:
    plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
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
      lVar13 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03958360;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_03958360:
      uVar7 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      uVar15 = uVar7 & 0xffffffff;
      if ((uVar7 & 1) == 0) {
        uVar15 = 0;
        if (plVar10 == (long *)0x0) goto LAB_03958520;
        goto LAB_039584c0;
      }
      lVar13 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_039583c0;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_039583c0:
      plVar11 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
      uVar7 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar3,0);
      if ((uVar7 & 1) == 0) {
        if ((unaff_x19 & 1) != 0) goto LAB_03958314;
        uVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
        uVar7 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar4,0);
        if ((uVar7 & 1) == 0) goto LAB_03958314;
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
      uVar7 = (**(code **)(*plVar12 + 0x2a8))();
      if ((uVar7 & 1) == 0) goto LAB_03958314;
      uVar9 = (**(code **)(*plVar11 + 1000))(plVar11,*(undefined8 *)(*plVar11 + 0x3f0));
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar9,uVar9);
      }
      uVar7 = (**(code **)(*unaff_x20 + 0x2a8))();
    } while ((uVar7 & 1) == 0);
    plVar8 = plVar11;
    if (plVar10 != (long *)0x0) {
LAB_039584c0:
      lVar13 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03958514;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03958514:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
    }
LAB_03958520:
    plVar10 = plVar8;
    if ((uVar15 & 1) == 0) {
      plVar10 = (long *)0x0;
    }
  }
  return plVar10;
}


