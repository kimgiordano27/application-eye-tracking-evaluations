/*
FUNCTION_NAME: UnityEngine.Video.VideoPlayer.TimeEventHandler$$.ctor
ENTRY_POINT: 0419b568
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 144
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0419b878) */
/* WARNING: Removing unreachable block (ram,0x0419b950) */

void UnityEngine_Video_VideoPlayer_TimeEventHandler___ctor(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long unaff_x19;
  long unaff_x21;
  long *plVar16;
  int unaff_w22;
  long *unaff_x23;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  puVar7 = (undefined8 *)FUN_01ecb238(param_1,param_2,0);
  (*(code *)*puVar7)();
  puVar2 = PTR_DAT_0458e030;
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if ((unaff_w22 != 5) && (unaff_w22 != 0)) {
    return;
  }
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e048);
  FUN_030f2380(lVar8,*(undefined8 *)puVar2);
  plVar16 = *(long **)(unaff_x19 + 0x3d0);
  if (plVar16 != (long *)0x0) {
    lVar10 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0458e020) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto UnityEngine_Video_VideoPlayer_TimeEventHandler__Invoke;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)PTR_DAT_0458e020,0);
UnityEngine_Video_VideoPlayer_TimeEventHandler__Invoke:
    plVar16 = (long *)(*(code *)*puVar7)(plVar16,puVar7[1]);
    puVar6 = PTR_DAT_0458e028;
    puVar5 = PTR_DAT_0458ded0;
    puVar4 = PTR_DAT_0458ddc0;
    puVar3 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0419b6a4;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar2,0);
LAB_0419b6a4:
      uVar12 = (*(code *)*puVar7)(plVar16,puVar7[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar16 == (long *)0x0) goto LAB_0419b86c;
        lVar10 = *plVar16;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_0419b844;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_0419b82c;
      }
      lVar10 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0419b700;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar5,0);
LAB_0419b700:
      lVar10 = (*(code *)*puVar7)(plVar16,puVar7[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(unaff_x19 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (*(long *)(unaff_x19 + 0x400),*(undefined8 *)(lVar10 + 0x28),
                          &stack0x00000018,*(undefined8 *)puVar3);
      if ((uVar12 & 1) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar13 = *(long *)puVar6;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000018;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar8,in_stack_00000018,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        if (*(int *)(lVar10 + 0x20) == 0) {
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar10 = *(long *)(in_stack_00000018 + 0x10);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0422aa74(lVar10,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
        }
        else {
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar10 = *(long *)(in_stack_00000018 + 0x10);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0422aa74(lVar10,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),0);
        }
      }
    } while( true );
  }
  goto LAB_0419b90c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_0419b82c:
    if (*(long *)(piVar14 + -2) == *unaff_x23) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0419b860;
    }
  }
LAB_0419b844:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar16,*unaff_x23,0);
LAB_0419b860:
  (*(code *)*puVar7)(plVar16,puVar7[1]);
LAB_0419b86c:
  puVar2 = PTR_DAT_0458e040;
  if (lVar8 != 0) {
    if (1 < *(int *)(lVar8 + 0x18)) {
      iVar15 = 0;
      do {
        lVar10 = FUN_030f28e4(lVar8,iVar15,*(undefined8 *)puVar2);
        if (lVar10 == 0) goto LAB_0419b90c;
        lVar10 = *(long *)(lVar10 + 0x10);
        iVar15 = iVar15 + 1;
        in_stack_00000010._4_4_ = iVar15;
        uVar9 = FUN_035683d0((long)&stack0x00000010 + 4,0);
        if (lVar10 == 0) goto LAB_0419b90c;
        FUN_0419d07c(lVar10,uVar9);
      } while (iVar15 < *(int *)(lVar8 + 0x18));
    }
    return;
  }
LAB_0419b90c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


