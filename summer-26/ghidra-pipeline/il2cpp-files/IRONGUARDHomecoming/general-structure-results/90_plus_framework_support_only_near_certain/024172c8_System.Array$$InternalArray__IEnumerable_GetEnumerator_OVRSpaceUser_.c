/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRSpaceUser>
ENTRY_POINT: 024172c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0241763c) */
/* WARNING: Removing unreachable block (ram,0x024176d8) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<OVRSpaceUser>(long param_1)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  code *pcVar14;
  int iVar15;
  undefined8 uVar16;
  long unaff_x27;
  int in_stack_000001b0;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xa98));
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ControlConnection__ctor__);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_01ecafa0();
  }
  if (unaff_x20 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar16 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ControlInput_get_couldBeEntered__);
    FUN_034efd20(uVar6,uVar16,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6);
  }
  if (unaff_x21 == (long *)0x0) {
    return unaff_x27;
  }
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = FUN_034127bc();
  puVar3 = Method_System_IO_CStreamReader_Read__;
  iVar5 = *(int *)(unaff_x27 + 0x10);
  if (0 < *(int *)(unaff_x27 + 0x10)) {
    do {
      iVar15 = iVar5;
      if (iVar15 < 1) {
        iVar15 = 0;
        break;
      }
      uVar4 = FUN_03409f80();
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
      uVar7 = FUN_034f5e70(uVar4,0);
      iVar5 = iVar15 + -1;
    } while ((uVar7 & 1) != 0);
    if (iVar15 != *(int *)(unaff_x27 + 0x10)) {
      uVar16 = FUN_0341265c();
      iVar5 = FUN_03568700(uVar16,0);
      iVar5 = iVar5 + 1;
      lVar8 = FUN_03410500();
      plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      goto LAB_024173bc;
    }
  }
  iVar5 = 1;
  lVar8 = unaff_x27;
  plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
LAB_024173bc:
  do {
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    lVar12 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar11) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02417420;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02417420:
    plVar10 = (long *)(*(code *)*puVar9)();
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *plVar2) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02417480;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*plVar2,0);
LAB_02417480:
      uVar7 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar7 & 1) == 0) {
        bVar1 = true;
        goto joined_r0x024175cc;
      }
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar12 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_024174f4;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,0);
LAB_024174f4:
      (*(code *)*puVar9)(&stack0x00000010,plVar10,puVar9[1]);
      memcpy(&stack0x000000e0,&stack0x00000010,0xd0);
      pcVar14 = *(code **)(unaff_x20 + 0x18);
      uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
      memcpy(&stack0x000001b0,&stack0x000000e0,0xd0);
      lVar11 = (*pcVar14)(uVar16,&stack0x000001b0,*(undefined8 *)(unaff_x20 + 0x28));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar16 = FUN_034127bc(lVar11,0);
      uVar7 = thunk_FUN_0340e318(uVar16,uVar6,0);
    } while ((uVar7 & 1) == 0);
    in_stack_000001b0 = iVar5;
    uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               ,&stack0x000001b0);
    unaff_x27 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                             lVar8,uVar6,0);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_034127bc(unaff_x27,0);
    bVar1 = false;
    iVar5 = iVar5 + 1;
joined_r0x024175cc:
    if (plVar10 != (long *)0x0) {
      lVar11 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02417624;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02417624:
      (*(code *)*puVar9)(plVar10,puVar9[1]);
    }
    if (bVar1) {
      return unaff_x27;
    }
  } while( true );
}


