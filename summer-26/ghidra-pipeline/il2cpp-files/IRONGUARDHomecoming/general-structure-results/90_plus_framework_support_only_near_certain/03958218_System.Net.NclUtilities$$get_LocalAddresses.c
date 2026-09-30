/*
FUNCTION_NAME: System.Net.NclUtilities$$get_LocalAddresses
ENTRY_POINT: 03958218
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03958590) */

long * System_Net_NclUtilities__get_LocalAddresses(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  ulong unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long unaff_x24;
  ulong uVar13;
  long *unaff_x25;
  int unaff_w26;
  long *unaff_x29;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_03958238;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03958238:
  (*(code *)*puVar5)();
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if ((unaff_w26 == 6) ||
     ((plVar6 = unaff_x22, unaff_w26 != 5 && (plVar6 = unaff_x25, unaff_w26 == 0)))) {
    if (*(int *)(*(long *)Method_System_Collections_CollectionBase_OnValidate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar6 = (long *)FUN_0243ee3c();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x29) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_039582e0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x29,0);
LAB_039582e0:
    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar4 = StringLiteral_3968;
    puVar3 = StringLiteral_3967;
    puVar2 = StringLiteral_3965;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03958314:
    do {
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03958360;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03958360:
      uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      uVar13 = uVar11 & 0xffffffff;
      if ((uVar11 & 1) == 0) {
        uVar13 = 0;
        if (plVar6 == (long *)0x0) goto LAB_03958520;
        goto LAB_039584c0;
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_039583c0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_039583c0:
      plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar8 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      uVar11 = thunk_FUN_0340e318(uVar8,*(undefined8 *)puVar3,0);
      if ((uVar11 & 1) == 0) {
        if ((unaff_x19 & 1) != 0) goto LAB_03958314;
        uVar8 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        uVar11 = thunk_FUN_0340e318(uVar8,*(undefined8 *)puVar4,0);
        if ((uVar11 & 1) == 0) goto LAB_03958314;
      }
      lVar10 = (**(code **)(*plVar7 + 0x248))(plVar7,*(undefined8 *)(*plVar7 + 0x250));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar9 = *(long **)(lVar10 + 0x20);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = (**(code **)(*plVar9 + 0x2a8))();
      if ((uVar11 & 1) == 0) goto LAB_03958314;
      uVar8 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar8,uVar8);
      }
      uVar11 = (**(code **)(*unaff_x20 + 0x2a8))();
    } while ((uVar11 & 1) == 0);
    unaff_x22 = plVar7;
    if (plVar6 != (long *)0x0) {
LAB_039584c0:
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03958514;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03958514:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
    }
LAB_03958520:
    plVar6 = unaff_x22;
    if ((uVar13 & 1) == 0) {
      plVar6 = (long *)0x0;
    }
  }
  return plVar6;
}


