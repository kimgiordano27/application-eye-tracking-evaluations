/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0238b650
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 165
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0238b7f4) */

long * System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>(ulong param_1)

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
  long *unaff_x24;
  int iVar9;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x0238b650:
  if ((param_1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_03eed12c(unaff_x24,unaff_x21,0);
    uVar2 = uVar2 & 1;
  }
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_03eece10(unaff_x23,uVar2,0);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03582560(uVar4,unaff_x21,0);
  if ((uVar5 & 1) == 0) goto LAB_0238b538;
  iVar9 = 8;
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
    if ((iVar9 != 9) && (iVar9 != 0)) {
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
    iVar9 = 9;
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
  unaff_x23 = (long *)(*(code *)*puVar3)(unaff_x22,puVar3[1]);
  if (unaff_x23 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x28 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x23 + 0x130)) {
      unaff_x24 = unaff_x23;
      if (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28) {
        unaff_x24 = (long *)0x0;
      }
      goto LAB_0238b640;
    }
  }
  unaff_x24 = (long *)0x0;
LAB_0238b640:
  param_1 = System_Console__SetOut(unaff_x24,0,0);
  goto code_r0x0238b650;
}


