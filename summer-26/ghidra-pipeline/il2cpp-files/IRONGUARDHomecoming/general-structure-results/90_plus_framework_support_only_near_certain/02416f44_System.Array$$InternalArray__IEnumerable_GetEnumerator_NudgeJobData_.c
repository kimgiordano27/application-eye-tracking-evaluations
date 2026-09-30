/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<NudgeJobData>
ENTRY_POINT: 02416f44
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

long System_Array__InternalArray__IEnumerable_GetEnumerator<NudgeJobData>(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *in_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  long *plVar9;
  long unaff_x29;
  
code_r0x02416f44:
  lVar4 = param_1 + (long)*in_x10 * 0x10 + 0x138;
LAB_02416f50:
  *(void **)(unaff_x29 + -0x18) = unaff_x24;
  lVar4 = *(long *)(lVar4 + 8);
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,unaff_x28,unaff_x29 + -0x18);
  memcpy(unaff_x26,unaff_x24,unaff_x23);
  memcpy(unaff_x25,unaff_x26,unaff_x23);
  puVar7 = unaff_x25;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x28)) {
    puVar7 = (undefined8 *)*unaff_x25;
  }
  puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
  uVar2 = *puVar5;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
  (*(code *)puVar5[2])(uVar2,puVar5,unaff_x20,unaff_x29 + -0x18,unaff_x29 + -0x10);
  if (*(long *)(unaff_x29 + -0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = FUN_034127bc(*(long *)(unaff_x29 + -0x10),0);
  uVar3 = thunk_FUN_0340e318(uVar2,unaff_x27,0);
  if ((uVar3 & 1) == 0) goto LAB_02416e88;
  uVar2 = *(undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x1c);
  uVar2 = thunk_FUN_01f113fc(uVar2,unaff_x29 + -0x10);
  unaff_x21 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                           *(undefined8 *)(unaff_x29 + -0x40),uVar2,0);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  unaff_x27 = FUN_034127bc(unaff_x21,0);
  bVar1 = false;
  *(int *)(unaff_x29 + -0x1c) = *(int *)(unaff_x29 + -0x1c) + 1;
  plVar9 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  do {
    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__ = (undefined *)plVar9;
    if (unaff_x28 != (long *)0x0) {
      lVar4 = *unaff_x28;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      *(undefined8 *)(unaff_x29 + -0x28) = unaff_x27;
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *plVar9) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_024170d8;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(unaff_x28,*plVar9,0);
LAB_024170d8:
      (*(code *)*puVar7)(unaff_x28,puVar7[1]);
      unaff_x20 = *(undefined8 *)(unaff_x29 + -0x38);
      unaff_x27 = *(undefined8 *)(unaff_x29 + -0x28);
    }
    plVar9 = *(long **)(unaff_x29 + -0x30);
    if (bVar1) {
      if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return unaff_x21;
    }
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar6 = *plVar9;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02416e74;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_02416e74:
    unaff_x28 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
    if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_02416e88:
    lVar4 = *unaff_x28;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02416edc;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(unaff_x28,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02416edc:
    uVar3 = (*(code *)*puVar7)(unaff_x28,puVar7[1]);
    if ((uVar3 & 1) != 0) break;
    bVar1 = true;
    plVar9 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  } while( true );
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  param_1 = *unaff_x28;
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(in_x10 + -2) == lVar4) goto code_r0x02416f44;
      uVar3 = uVar3 - 1;
      in_x10 = in_x10 + 4;
    } while (uVar3 != 0);
  }
  lVar4 = FUN_01ecb238(unaff_x28,lVar4,0);
  goto LAB_02416f50;
}


