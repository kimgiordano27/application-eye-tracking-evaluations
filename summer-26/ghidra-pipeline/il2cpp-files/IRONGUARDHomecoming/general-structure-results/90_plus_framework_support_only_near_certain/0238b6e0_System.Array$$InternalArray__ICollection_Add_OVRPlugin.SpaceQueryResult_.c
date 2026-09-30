/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0238b6e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceQueryResult>(void)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar10;
  long unaff_x24;
  int iVar11;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x0238b6e0:
  iVar11 = 9;
  do {
    if (unaff_x22 != (long *)0x0) {
      lVar7 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0238b73c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(unaff_x22,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0238b73c:
      (*(code *)*puVar5)(unaff_x22,puVar5[1]);
    }
    if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(unaff_x24);
    }
    if ((iVar11 != 9) && (iVar11 != 0)) {
      return unaff_x23;
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
    uVar8 = FUN_03583338(unaff_x21,0,0);
    if ((uVar8 & 1) == 0) {
      return (long *)0x0;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_0238b7f0;
    lVar7 = **(long **)(unaff_x19 + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar6 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0238b524;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0238b524:
    unaff_x22 = (long *)(*(code *)*puVar5)();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0238b584;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x27,0);
LAB_0238b584:
      uVar8 = (*(code *)*puVar5)(unaff_x22,puVar5[1]);
      if ((uVar8 & 1) == 0) {
        unaff_x24 = 0;
        goto code_r0x0238b6e0;
      }
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar6 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0238b5f8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(unaff_x22,lVar7,0);
LAB_0238b5f8:
      plVar3 = (long *)(*(code *)*puVar5)(unaff_x22,puVar5[1]);
      if (plVar3 == (long *)0x0) {
LAB_0238b624:
        plVar10 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*unaff_x28 + 0x130);
        if (*(byte *)(*plVar3 + 0x130) < bVar1) goto LAB_0238b624;
        plVar10 = plVar3;
        if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28) {
          plVar10 = (long *)0x0;
        }
      }
      uVar8 = System_Console__SetOut(plVar10,0,0);
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar2 = FUN_03eed12c(plVar10,unaff_x21,0);
        uVar2 = uVar2 & 1;
      }
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_03eece10(plVar3,uVar2,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_03582560(uVar4,unaff_x21,0);
    } while ((uVar8 & 1) == 0);
    unaff_x24 = 0;
    iVar11 = 8;
    unaff_x23 = plVar3;
  } while( true );
}


