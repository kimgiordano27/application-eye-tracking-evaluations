/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRAnchor>
ENTRY_POINT: 02416ff8
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

long System_Array__InternalArray__IEnumerable_GetEnumerator<OVRAnchor>(undefined8 param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 in_w8;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long *unaff_x28;
  long *plVar11;
  long unaff_x29;
  
code_r0x02416ff8:
  *(undefined4 *)(unaff_x29 + -0x10) = in_w8;
  uVar4 = thunk_FUN_01f113fc(param_1,unaff_x29 + -0x10);
  lVar5 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                       *(undefined8 *)(unaff_x29 + -0x40),uVar4,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar4 = FUN_034127bc(lVar5,0);
  bVar1 = false;
  *(int *)(unaff_x29 + -0x1c) = *(int *)(unaff_x29 + -0x1c) + 1;
  plVar11 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
joined_r0x02417050:
  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__ = (undefined *)plVar11;
  if (unaff_x28 != (long *)0x0) {
    lVar6 = *unaff_x28;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    *(undefined8 *)(unaff_x29 + -0x28) = uVar4;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar11) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_024170d8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x28,*plVar11,0);
LAB_024170d8:
    (*(code *)*puVar2)(unaff_x28,puVar2[1]);
    unaff_x20 = *(undefined8 *)(unaff_x29 + -0x38);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x28);
  }
  plVar11 = *(long **)(unaff_x29 + -0x30);
  if (bVar1) {
    if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return lVar5;
  }
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar6) {
        puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02416e74;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar11,lVar6,0);
LAB_02416e74:
  unaff_x28 = (long *)(*(code *)*puVar2)(plVar11,puVar2[1]);
  if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *unaff_x28;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02416edc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(unaff_x28,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02416edc:
    uVar9 = (*(code *)*puVar2)(unaff_x28,puVar2[1]);
    if ((uVar9 & 1) == 0) break;
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar8 = *unaff_x28;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          lVar6 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02416f50;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar6 = FUN_01ecb238(unaff_x28,lVar6,0);
LAB_02416f50:
    *(void **)(unaff_x29 + -0x18) = unaff_x24;
    lVar6 = *(long *)(lVar6 + 8);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,unaff_x28,unaff_x29 + -0x18);
    memcpy(unaff_x26,unaff_x24,unaff_x23);
    memcpy(unaff_x25,unaff_x26,unaff_x23);
    puVar2 = unaff_x25;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x25;
    }
    puVar7 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
    uVar3 = *puVar7;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar7[2])(uVar3,puVar7,unaff_x20,unaff_x29 + -0x18,unaff_x29 + -0x10);
    if (*(long *)(unaff_x29 + -0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = FUN_034127bc(*(long *)(unaff_x29 + -0x10),0);
    uVar9 = thunk_FUN_0340e318(uVar3,uVar4,0);
    if ((uVar9 & 1) != 0) {
      param_1 = *(undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      in_w8 = *(undefined4 *)(unaff_x29 + -0x1c);
      goto code_r0x02416ff8;
    }
  } while( true );
  bVar1 = true;
  plVar11 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  goto joined_r0x02417050;
}


