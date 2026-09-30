/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector3f>
ENTRY_POINT: 0238b770
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0238b7f4) */

long * System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector3f>(long *param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long *plVar11;
  int iVar12;
  int iVar13;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  while( true ) {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_03583338(param_1,0,0);
    if ((uVar3 & 1) == 0) {
      return (long *)0x0;
    }
    if (unaff_x20 == (long *)0x0) break;
    lVar8 = **(long **)(unaff_x19 + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0238b524;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0238b524:
    plVar5 = (long *)(*(code *)*puVar4)();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar8 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0238b584;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x27,0);
LAB_0238b584:
      uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar3 & 1) == 0) {
        iVar13 = 9;
        iVar12 = 9;
        goto joined_r0x0238b6e4;
      }
      lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0238b5f8;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_0238b5f8:
      plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (plVar6 == (long *)0x0) {
LAB_0238b624:
        plVar11 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*unaff_x28 + 0x130);
        if (*(byte *)(*plVar6 + 0x130) < bVar1) goto LAB_0238b624;
        plVar11 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28) {
          plVar11 = (long *)0x0;
        }
      }
      uVar3 = System_Console__SetOut(plVar11,0,0);
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar2 = FUN_03eed12c(plVar11,param_1,0);
        uVar2 = uVar2 & 1;
      }
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03eece10(plVar6,uVar2,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_03582560(uVar7,param_1,0);
    } while ((uVar3 & 1) == 0);
    iVar13 = 8;
    iVar12 = 8;
    unaff_x23 = plVar6;
joined_r0x0238b6e4:
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0238b73c;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0238b73c:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      iVar12 = iVar13;
    }
    if ((iVar12 != 9) && (iVar12 != 0)) {
      return unaff_x23;
    }
    if (param_1 == (long *)0x0) break;
    param_1 = (long *)(**(code **)(*param_1 + 0x888))(param_1,*(undefined8 *)(*param_1 + 0x890));
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


