/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ModifiableContactPair>
ENTRY_POINT: 024169a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02416a90) */
/* WARNING: Removing unreachable block (ram,0x02416b2c) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<ModifiableContactPair>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x23;
  long *unaff_x25;
  long unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x024169a4:
  uVar3 = thunk_FUN_0340e318(param_1,param_2,param_3);
  param_2 = unaff_x23;
  if ((uVar3 & 1) == 0) goto LAB_024168b0;
  in_stack_00000008._4_4_ = unaff_w28;
  uVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__,
                             (long)&stack0x00000008 + 4);
  unaff_x27 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                           in_stack_00000000,uVar4,0);
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  param_2 = FUN_034127bc(unaff_x27,0);
  bVar1 = false;
  unaff_w28 = unaff_w28 + 1;
  do {
    if (unaff_x25 != (long *)0x0) {
      lVar5 = *unaff_x25;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02416a78;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(unaff_x25,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02416a78:
      (*(code *)*puVar2)(unaff_x25,puVar2[1]);
    }
    if (bVar1) {
      return unaff_x27;
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0241689c;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0241689c:
    unaff_x25 = (long *)(*(code *)*puVar2)();
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_024168b0:
    lVar5 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_024168fc;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x29,0);
LAB_024168fc:
    uVar3 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
    if ((uVar3 & 1) != 0) break;
    bVar1 = true;
  } while( true );
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *unaff_x25;
  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar3 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar5) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02416970;
      }
      uVar3 = uVar3 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,lVar5,0);
LAB_02416970:
  uVar4 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
  lVar5 = (**(code **)(unaff_x20 + 0x18))
                    (*(undefined8 *)(unaff_x20 + 0x40),uVar4,*(undefined8 *)(unaff_x20 + 0x28));
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  param_1 = FUN_034127bc(lVar5,0);
  param_3 = 0;
  unaff_x23 = param_2;
  goto code_r0x024169a4;
}


