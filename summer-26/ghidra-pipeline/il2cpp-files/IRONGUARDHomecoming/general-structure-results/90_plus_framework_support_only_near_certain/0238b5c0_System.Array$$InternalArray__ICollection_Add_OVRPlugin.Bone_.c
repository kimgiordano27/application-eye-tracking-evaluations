/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Bone>
ENTRY_POINT: 0238b5c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0238b7f4) */

long * System_Array__InternalArray__ICollection_Add<OVRPlugin_Bone>
                 (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong in_x9;
  int *piVar9;
  long in_x10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar10;
  int iVar11;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x0238b5c0:
  piVar9 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar9 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0238b5f8;
    }
    in_x9 = in_x9 - 1;
    piVar9 = piVar9 + 4;
  } while (in_x9 != 0);
LAB_0238b5dc:
  puVar3 = (undefined8 *)FUN_01ecb238(unaff_x22,param_3,0);
LAB_0238b5f8:
  plVar4 = (long *)(*(code *)*puVar3)(unaff_x22,puVar3[1]);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x28 + 0x130);
    if (bVar1 <= *(byte *)(*plVar4 + 0x130)) {
      plVar10 = plVar4;
      if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28) {
        plVar10 = (long *)0x0;
      }
      goto LAB_0238b640;
    }
  }
  plVar10 = (long *)0x0;
LAB_0238b640:
  uVar5 = System_Console__SetOut(plVar10,0,0);
  if ((uVar5 & 1) == 0) {
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
  uVar6 = FUN_03eece10(plVar4,uVar2,0);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03582560(uVar6,unaff_x21,0);
  if ((uVar5 & 1) == 0) goto LAB_0238b538;
  iVar11 = 8;
  unaff_x25 = plVar4;
  do {
    if (unaff_x22 != (long *)0x0) {
      lVar7 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0238b73c;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(unaff_x22,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0238b73c:
      (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    }
    if ((iVar11 != 9) && (iVar11 != 0)) {
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
    uVar5 = FUN_03583338(unaff_x21,0,0);
    if ((uVar5 & 1) == 0) {
      return (long *)0x0;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_0238b7f0;
    lVar7 = **(long **)(unaff_x19 + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0238b524;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0238b524:
    unaff_x22 = (long *)(*(code *)*puVar3)();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_0238b538:
    lVar7 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0238b584;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x27,0);
LAB_0238b584:
    uVar5 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    if ((uVar5 & 1) != 0) break;
    iVar11 = 9;
  } while( true );
  param_3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_01ecaf44(param_3);
  }
  param_1 = *unaff_x22;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x0238b5bc;
  goto LAB_0238b5dc;
code_r0x0238b5bc:
  in_x10 = *(long *)(param_1 + 0xb0);
  goto code_r0x0238b5c0;
}


