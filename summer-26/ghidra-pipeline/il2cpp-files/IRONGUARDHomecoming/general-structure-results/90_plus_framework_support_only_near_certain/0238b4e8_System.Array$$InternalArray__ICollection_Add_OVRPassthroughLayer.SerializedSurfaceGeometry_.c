/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0238b4e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 175
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0238b7f4) */

long * System_Array__InternalArray__ICollection_Add<OVRPassthroughLayer_SerializedSurfaceGeometry>
                 (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar11;
  int iVar12;
  int iVar13;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0238b524;
      }
      in_x9 = in_x9 - 1;
      piVar10 = piVar10 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0238b524:
      plVar4 = (long *)(*(code *)*puVar3)();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0238b584;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x27,0);
LAB_0238b584:
        uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          iVar13 = 9;
          iVar12 = 9;
          goto joined_r0x0238b6e4;
        }
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0238b5f8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,0);
LAB_0238b5f8:
        plVar5 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
        if (plVar5 == (long *)0x0) {
LAB_0238b624:
          plVar11 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*unaff_x28 + 0x130);
          if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_0238b624;
          plVar11 = plVar5;
          if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28) {
            plVar11 = (long *)0x0;
          }
        }
        uVar9 = System_Console__SetOut(plVar11,0,0);
        if ((uVar9 & 1) == 0) {
          uVar2 = 0;
        }
        else {
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar2 = FUN_03eed12c(plVar11,unaff_x21,0);
          uVar2 = uVar2 & 1;
        }
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_03eece10(plVar5,uVar2,0);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_03582560(uVar6,unaff_x21,0);
      } while ((uVar9 & 1) == 0);
      iVar13 = 8;
      iVar12 = 8;
      unaff_x25 = plVar5;
joined_r0x0238b6e4:
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0238b73c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar4,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0238b73c:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
        iVar12 = iVar13;
      }
      if ((iVar12 != 9) && (iVar12 != 0)) {
        return unaff_x25;
      }
      if (unaff_x21 == (long *)0x0) {
LAB_0238b7f0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x888))
                                    (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x890));
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar9 = FUN_03583338(unaff_x21,0,0);
      if ((uVar9 & 1) == 0) {
        return (long *)0x0;
      }
      if (unaff_x20 == (long *)0x0) goto LAB_0238b7f0;
      param_3 = **(long **)(unaff_x19 + 0x38);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_01ecaf44(param_3);
      }
      param_1 = *unaff_x20;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
}


