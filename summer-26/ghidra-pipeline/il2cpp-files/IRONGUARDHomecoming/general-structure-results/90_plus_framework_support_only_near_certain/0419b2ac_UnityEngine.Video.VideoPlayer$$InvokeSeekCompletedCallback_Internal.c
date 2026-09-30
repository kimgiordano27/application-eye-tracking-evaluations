/*
FUNCTION_NAME: UnityEngine.Video.VideoPlayer$$InvokeSeekCompletedCallback_Internal
ENTRY_POINT: 0419b2ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 207
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0419b878) */
/* WARNING: Removing unreachable block (ram,0x0419b598) */
/* WARNING: Removing unreachable block (ram,0x0419b950) */
/* WARNING: Removing unreachable block (ram,0x0419b944) */

void UnityEngine_Video_VideoPlayer__InvokeSeekCompletedCallback_Internal(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  long unaff_x19;
  long unaff_x20;
  int iStack0000000000000014;
  long in_stack_00000018;
  long in_stack_00000028;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(PTR_DAT_0458e028);
  thunk_FUN_01efb3a4(PTR_DAT_0458e030);
  thunk_FUN_01efb3a4(PTR_DAT_0458e038);
  thunk_FUN_01efb3a4(PTR_DAT_0458e040);
  thunk_FUN_01efb3a4(PTR_DAT_0458e048);
  thunk_FUN_01efb3a4(PTR_DAT_0458ddc0);
  thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
  *(undefined1 *)(unaff_x20 + 0xca2) = 1;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  iStack0000000000000014 = 0;
  if ((*(long *)(unaff_x19 + 0x420) != 0) &&
     (plVar8 = (long *)FUN_041a7930(*(long *)(unaff_x19 + 0x420),0), plVar8 != (long *)0x0)) {
    lVar11 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0419b39c;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                          ,0);
LAB_0419b39c:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar7 = PTR_DAT_0458ddc0;
    puVar6 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
    puVar5 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
    puVar4 = Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0419b42c;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_0419b42c:
      uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_0419b58c;
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar2;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 == 0) goto LAB_0419b564;
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_0419b54c;
      }
      lVar11 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0419b488;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar6,0);
LAB_0419b488:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (*(long *)(unaff_x19 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(0,uVar10);
      }
      uVar14 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (*(long *)(unaff_x19 + 0x400),uVar10,&stack0x00000028,*(undefined8 *)puVar5
                         );
      if ((uVar14 & 1) != 0) {
        if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(in_stack_00000028 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0419d07c(*(long *)(in_stack_00000028 + 0x10),*(undefined8 *)puVar4);
        if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *(long *)(in_stack_00000028 + 0x10);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0422a94c(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10),0);
        if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(in_stack_00000028 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0422a94c(*(long *)(in_stack_00000028 + 0x10),
                     *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18),0);
      }
    } while( true );
  }
  goto LAB_0419b90c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_0419b54c:
    if (*(long *)(piVar16 + -2) == lVar11) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0419b580;
    }
  }
LAB_0419b564:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_0419b580:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0419b58c:
  puVar3 = PTR_DAT_0458e030;
  lVar11 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e048);
  FUN_030f2380(lVar11,*(undefined8 *)puVar3);
  plVar8 = *(long **)(unaff_x19 + 0x3d0);
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0458e020) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto UnityEngine_Video_VideoPlayer_TimeEventHandler__Invoke;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)PTR_DAT_0458e020,0);
UnityEngine_Video_VideoPlayer_TimeEventHandler__Invoke:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar7 = PTR_DAT_0458e028;
    puVar6 = PTR_DAT_0458ded0;
    puVar5 = PTR_DAT_0458ddc0;
    puVar4 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0419b6a4;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_0419b6a4:
      uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_0419b86c;
        lVar13 = *plVar8;
        lVar12 = *(long *)puVar2;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 == 0) goto LAB_0419b844;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_0419b82c;
      }
      lVar12 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0419b700;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar6,0);
LAB_0419b700:
      lVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(unaff_x19 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar14 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (*(long *)(unaff_x19 + 0x400),*(undefined8 *)(lVar12 + 0x28),
                          &stack0x00000018,*(undefined8 *)puVar4);
      if ((uVar14 & 1) != 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar15 = *(long *)puVar7;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000018;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar11,in_stack_00000018,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        if (*(int *)(lVar12 + 0x20) == 0) {
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = *(long *)(in_stack_00000018 + 0x10);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0422aa74(lVar12,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),0);
        }
        else {
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = *(long *)(in_stack_00000018 + 0x10);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0422aa74(lVar12,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
        }
      }
    } while( true );
  }
  goto LAB_0419b90c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_0419b82c:
    if (*(long *)(piVar16 + -2) == lVar12) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0419b860;
    }
  }
LAB_0419b844:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_0419b860:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0419b86c:
  puVar2 = PTR_DAT_0458e040;
  if (lVar11 != 0) {
    if (1 < *(int *)(lVar11 + 0x18)) {
      iVar17 = 0;
      do {
        lVar12 = FUN_030f28e4(lVar11,iVar17,*(undefined8 *)puVar2);
        if (lVar12 == 0) goto LAB_0419b90c;
        lVar12 = *(long *)(lVar12 + 0x10);
        iVar17 = iVar17 + 1;
        iStack0000000000000014 = iVar17;
        uVar10 = FUN_035683d0(&stack0x00000014,0);
        if (lVar12 == 0) goto LAB_0419b90c;
        FUN_0419d07c(lVar12,uVar10);
      } while (iVar17 < *(int *)(lVar11 + 0x18));
    }
    return;
  }
LAB_0419b90c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


