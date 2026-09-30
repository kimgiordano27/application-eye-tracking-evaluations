/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<Matrix4x4>
ENTRY_POINT: 02416788
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02416a90) */
/* WARNING: Removing unreachable block (ram,0x02416b2c) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<Matrix4x4>(void)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x23;
  int unaff_w24;
  long unaff_x27;
  undefined8 in_stack_00000008;
  
  puVar3 = Method_System_IO_CStreamReader_Read__;
  if (0 < unaff_w24) {
    do {
      iVar5 = unaff_w24;
      if (iVar5 < 1) {
        iVar5 = 0;
        break;
      }
      uVar4 = FUN_03409f80();
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
      uVar6 = FUN_034f5e70(uVar4,0);
      unaff_w24 = iVar5 + -1;
    } while ((uVar6 & 1) != 0);
    if (iVar5 != *(int *)(unaff_x27 + 0x10)) {
      uVar10 = FUN_0341265c();
      iVar5 = FUN_03568700(uVar10,0);
      iVar5 = iVar5 + 1;
      lVar7 = FUN_03410500();
      plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      goto LAB_02416838;
    }
  }
  iVar5 = 1;
  lVar7 = unaff_x27;
  plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
LAB_02416838:
  do {
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    lVar12 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar11) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0241689c;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_0241689c:
    plVar9 = (long *)(*(code *)*puVar8)();
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *plVar2) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_024168fc;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*plVar2,0);
LAB_024168fc:
      uVar6 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar6 & 1) == 0) {
        bVar1 = true;
        goto joined_r0x02416a20;
      }
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar12 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar11) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02416970;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar11,0);
LAB_02416970:
      uVar10 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      lVar11 = (**(code **)(unaff_x20 + 0x18))
                         (*(undefined8 *)(unaff_x20 + 0x40),uVar10,*(undefined8 *)(unaff_x20 + 0x28)
                         );
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = FUN_034127bc(lVar11,0);
      uVar6 = thunk_FUN_0340e318(uVar10,unaff_x23,0);
    } while ((uVar6 & 1) == 0);
    in_stack_00000008._4_4_ = iVar5;
    uVar10 = thunk_FUN_01f113fc(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                ,(long)&stack0x00000008 + 4);
    unaff_x27 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                             lVar7,uVar10,0);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x23 = FUN_034127bc(unaff_x27,0);
    bVar1 = false;
    iVar5 = iVar5 + 1;
joined_r0x02416a20:
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02416a78;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02416a78:
      (*(code *)*puVar8)(plVar9,puVar8[1]);
    }
    if (bVar1) {
      return unaff_x27;
    }
  } while( true );
}


