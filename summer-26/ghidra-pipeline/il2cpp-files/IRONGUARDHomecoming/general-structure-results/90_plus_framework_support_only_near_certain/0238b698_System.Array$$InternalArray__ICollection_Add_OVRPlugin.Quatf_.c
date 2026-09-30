/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Quatf>
ENTRY_POINT: 0238b698
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

long * System_Array__InternalArray__ICollection_Add<OVRPlugin_Quatf>(long *param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar9;
  int iVar10;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x0238b698:
  uVar4 = FUN_03eece10(param_1,param_2,0);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03582560(uVar4,unaff_x21,0);
  if ((uVar5 & 1) == 0) goto LAB_0238b538;
  iVar10 = 8;
  unaff_x25 = unaff_x23;
  do {
    if (unaff_x22 != (long *)0x0) {
      lVar6 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0238b73c;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
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
    if ((iVar10 != 9) && (iVar10 != 0)) {
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
    lVar6 = **(long **)(unaff_x19 + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0238b524;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
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
    lVar6 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0238b584;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x27,0);
LAB_0238b584:
    uVar5 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    if ((uVar5 & 1) != 0) break;
    iVar10 = 9;
  } while( true );
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0238b5f8;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(unaff_x22,lVar6,0);
LAB_0238b5f8:
  param_1 = (long *)(*(code *)*puVar3)(unaff_x22,puVar3[1]);
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x28 + 0x130);
    if (bVar1 <= *(byte *)(*param_1 + 0x130)) {
      plVar9 = param_1;
      if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28) {
        plVar9 = (long *)0x0;
      }
      goto LAB_0238b640;
    }
  }
  plVar9 = (long *)0x0;
LAB_0238b640:
  uVar5 = System_Console__SetOut(plVar9,0,0);
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_03eed12c(plVar9,unaff_x21,0);
    uVar2 = uVar2 & 1;
  }
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  param_2 = (ulong)uVar2;
  unaff_x23 = param_1;
  goto code_r0x0238b698;
}


