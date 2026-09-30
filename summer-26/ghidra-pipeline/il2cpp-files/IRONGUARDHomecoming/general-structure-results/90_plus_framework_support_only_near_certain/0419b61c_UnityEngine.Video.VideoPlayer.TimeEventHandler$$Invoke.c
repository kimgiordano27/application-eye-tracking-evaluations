/*
FUNCTION_NAME: UnityEngine.Video.VideoPlayer.TimeEventHandler$$Invoke
ENTRY_POINT: 0419b61c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 144
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0419b878) */
/* WARNING: Removing unreachable block (ram,0x0419b950) */

void UnityEngine_Video_VideoPlayer_TimeEventHandler__Invoke(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  plVar6 = (long *)(*(code *)*param_1)();
  puVar5 = PTR_DAT_0458ded0;
  puVar4 = PTR_DAT_0458ddc0;
  puVar3 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0419b6a4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_0419b6a4:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_0419b86c;
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_0419b844;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0419b700;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar5,0);
LAB_0419b700:
    lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(unaff_x19 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar11 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                       (*(long *)(unaff_x19 + 0x400),*(undefined8 *)(lVar9 + 0x28),&stack0x00000018,
                        *(undefined8 *)puVar3);
    if ((uVar11 & 1) != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000018;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4();
      }
      if (*(int *)(lVar9 + 0x20) == 0) {
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = *(long *)(in_stack_00000018 + 0x10);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0422aa74(lVar9,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
      }
      else {
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = *(long *)(in_stack_00000018 + 0x10);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0422aa74(lVar9,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),0);
      }
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *unaff_x23) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0419b860;
    }
  }
LAB_0419b844:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x23,0);
LAB_0419b860:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0419b86c:
  if (unaff_x20 == 0) {
LAB_0419b90c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (1 < *(int *)(unaff_x20 + 0x18)) {
    iVar13 = 0;
    do {
      lVar9 = FUN_030f28e4();
      if (lVar9 == 0) goto LAB_0419b90c;
      lVar9 = *(long *)(lVar9 + 0x10);
      iVar13 = iVar13 + 1;
      in_stack_00000010._4_4_ = iVar13;
      uVar8 = FUN_035683d0((long)&stack0x00000010 + 4,0);
      if (lVar9 == 0) goto LAB_0419b90c;
      FUN_0419d07c(lVar9,uVar8);
    } while (iVar13 < *(int *)(unaff_x20 + 0x18));
  }
  return;
}


