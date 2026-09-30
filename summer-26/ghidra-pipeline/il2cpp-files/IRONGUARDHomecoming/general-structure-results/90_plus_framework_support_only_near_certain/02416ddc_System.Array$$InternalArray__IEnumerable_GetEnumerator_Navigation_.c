/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<Navigation>
ENTRY_POINT: 02416ddc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_14;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02417108) */
/* WARNING: Removing unreachable block (ram,0x02417190) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<Navigation>(void)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  uVar4 = FUN_0341265c();
  iVar3 = FUN_03568700(uVar4,0);
  *(int *)(unaff_x29 + -0x1c) = iVar3 + 1;
  uVar4 = FUN_03410500();
  *(undefined8 *)(unaff_x29 + -0x40) = uVar4;
  *(undefined8 *)(unaff_x29 + -0x38) = unaff_x20;
  do {
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar9 = *unaff_x28;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02416e74;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(unaff_x28,lVar7,0);
LAB_02416e74:
    plVar6 = (long *)(*(code *)*puVar5)(unaff_x28,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02416edc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_02416edc:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        bVar1 = true;
        plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        goto joined_r0x02417064;
      }
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            lVar7 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_02416f50;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar7 = FUN_01ecb238(plVar6,lVar7,0);
LAB_02416f50:
      *(void **)(unaff_x29 + -0x18) = unaff_x24;
      lVar7 = *(long *)(lVar7 + 8);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar6,unaff_x29 + -0x18);
      memcpy(unaff_x26,unaff_x24,unaff_x23);
      memcpy(unaff_x25,unaff_x26,unaff_x23);
      puVar5 = unaff_x25;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x28)) {
        puVar5 = (undefined8 *)*unaff_x25;
      }
      puVar8 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
      uVar4 = *puVar8;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
      (*(code *)puVar8[2])(uVar4,puVar8,unaff_x20,unaff_x29 + -0x18,unaff_x29 + -0x10);
      if (*(long *)(unaff_x29 + -0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = FUN_034127bc(*(long *)(unaff_x29 + -0x10),0);
      uVar10 = thunk_FUN_0340e318(uVar4,unaff_x27,0);
    } while ((uVar10 & 1) == 0);
    uVar4 = *(undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x1c);
    uVar4 = thunk_FUN_01f113fc(uVar4,unaff_x29 + -0x10);
    unaff_x22 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                             *(undefined8 *)(unaff_x29 + -0x40),uVar4,0);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x27 = FUN_034127bc(unaff_x22,0);
    bVar1 = false;
    *(int *)(unaff_x29 + -0x1c) = *(int *)(unaff_x29 + -0x1c) + 1;
    plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
joined_r0x02417064:
    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__ = (undefined *)plVar2;
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      *(undefined8 *)(unaff_x29 + -0x28) = unaff_x27;
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *plVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_024170d8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*plVar2,0);
LAB_024170d8:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      unaff_x20 = *(undefined8 *)(unaff_x29 + -0x38);
      unaff_x27 = *(undefined8 *)(unaff_x29 + -0x28);
    }
    unaff_x28 = *(long **)(unaff_x29 + -0x30);
    if (bVar1) {
      if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return unaff_x22;
    }
  } while( true );
}


