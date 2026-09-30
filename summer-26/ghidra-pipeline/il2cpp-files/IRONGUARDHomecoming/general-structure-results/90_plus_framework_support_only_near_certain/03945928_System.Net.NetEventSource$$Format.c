/*
FUNCTION_NAME: System.Net.NetEventSource$$Format
ENTRY_POINT: 03945928
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03945e04) */
/* WARNING: Removing unreachable block (ram,0x03945df8) */

long * System_Net_NetEventSource__Format(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong in_x9;
  int *in_x10;
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
  
  do {
    if ((bool)in_ZR) {
      puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_03945954;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03945954:
        plVar7 = (long *)(*(code *)*puVar6)();
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        uVar9 = thunk_FUN_0340e318(uVar8,*unaff_x26,0);
        if ((uVar9 & 1) != 0) {
LAB_03945988:
          lVar10 = (**(code **)(*plVar7 + 0x248))(plVar7,*(undefined8 *)(*plVar7 + 0x250));
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar11 = *(long **)(lVar10 + 0x20);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar11 = (long *)(**(code **)(*plVar11 + 0x1d8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar9 = (**(code **)(*plVar11 + 0x2a8))();
          if ((uVar9 & 1) == 0) goto LAB_039458ac;
          uVar8 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar8,uVar8);
          }
          uVar9 = (**(code **)(*unaff_x20 + 0x2a8))();
          if ((uVar9 & 1) == 0) goto LAB_039458ac;
          iVar16 = 5;
          iVar5 = 5;
          if (unaff_x23 == (long *)0x0) goto LAB_03945ab8;
LAB_03945a58:
          iVar16 = iVar5;
          lVar10 = *unaff_x23;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 == 0) goto LAB_03945a90;
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_03945a78;
        }
        if ((unaff_x19 & 1) == 0) {
          uVar8 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
          uVar9 = thunk_FUN_0340e318(uVar8,*unaff_x27,0);
          if ((uVar9 & 1) != 0) goto LAB_03945988;
        }
LAB_039458ac:
        lVar10 = *unaff_x23;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *unaff_x24) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_039458f8;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238();
LAB_039458f8:
        uVar9 = (*(code *)*puVar6)();
        if ((uVar9 & 1) == 0) {
          plVar7 = (long *)0x0;
          iVar16 = 6;
          iVar5 = 6;
          if (unaff_x23 != (long *)0x0) goto LAB_03945a58;
          goto LAB_03945ab8;
        }
        param_1 = *unaff_x23;
        param_3 = *unaff_x25;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar14 = piVar14 + 4;
    if (uVar9 == 0) break;
LAB_03945a78:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03945aac;
    }
  }
LAB_03945a90:
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03945aac:
  (*(code *)*puVar6)();
LAB_03945ab8:
  if ((iVar16 == 6) || ((plVar11 = plVar7, iVar16 != 5 && (plVar11 = unaff_x25, iVar16 == 0)))) {
    if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    plVar11 = (long *)FUN_0243dec4();
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x29) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03945b54;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x29,0);
LAB_03945b54:
    plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
    puVar4 = StringLiteral_3968;
    puVar3 = StringLiteral_3967;
    puVar2 = StringLiteral_3965;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03945b88:
    do {
      lVar10 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03945bd4;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_03945bd4:
      uVar9 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      uVar15 = uVar9 & 0xffffffff;
      if ((uVar9 & 1) == 0) {
        uVar15 = 0;
        if (plVar11 == (long *)0x0) goto LAB_03945d94;
        goto LAB_03945d34;
      }
      lVar10 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03945c34;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_03945c34:
      plVar12 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar8 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
      uVar9 = thunk_FUN_0340e318(uVar8,*(undefined8 *)puVar3,0);
      if ((uVar9 & 1) == 0) {
        if ((unaff_x19 & 1) != 0) goto LAB_03945b88;
        uVar8 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
        uVar9 = thunk_FUN_0340e318(uVar8,*(undefined8 *)puVar4,0);
        if ((uVar9 & 1) == 0) goto LAB_03945b88;
      }
      lVar10 = (**(code **)(*plVar12 + 0x248))(plVar12,*(undefined8 *)(*plVar12 + 0x250));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar13 = *(long **)(lVar10 + 0x20);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = (**(code **)(*plVar13 + 0x2a8))();
      if ((uVar9 & 1) == 0) goto LAB_03945b88;
      uVar8 = (**(code **)(*plVar12 + 1000))(plVar12,*(undefined8 *)(*plVar12 + 0x3f0));
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar8,uVar8);
      }
      uVar9 = (**(code **)(*unaff_x20 + 0x2a8))();
    } while ((uVar9 & 1) == 0);
    plVar7 = plVar12;
    if (plVar11 != (long *)0x0) {
LAB_03945d34:
      lVar10 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03945d88;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar11,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03945d88:
      (*(code *)*puVar6)(plVar11,puVar6[1]);
    }
LAB_03945d94:
    plVar11 = plVar7;
    if ((uVar15 & 1) == 0) {
      plVar11 = (long *)0x0;
    }
  }
  return plVar11;
}


