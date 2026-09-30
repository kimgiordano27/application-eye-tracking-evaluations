/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<PageInfo>
ENTRY_POINT: 02417430
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


/* WARNING: Removing unreachable block (ram,0x0241763c) */
/* WARNING: Removing unreachable block (ram,0x024176d8) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<PageInfo>(long *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  code *pcVar7;
  undefined8 unaff_x23;
  long *unaff_x25;
  undefined8 uVar8;
  long unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  int in_stack_000001b0;
  
  do {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar3 = *unaff_x25;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x29) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02417480;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x29,0);
LAB_02417480:
      uVar5 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        bVar1 = true;
        goto joined_r0x024175cc;
      }
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar4 = *unaff_x25;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_024174f4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,lVar3,0);
LAB_024174f4:
      (*(code *)*puVar2)(&stack0x00000010,unaff_x25,puVar2[1]);
      memcpy(&stack0x000000e0,&stack0x00000010,0xd0);
      pcVar7 = *(code **)(unaff_x20 + 0x18);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
      memcpy(&stack0x000001b0,&stack0x000000e0,0xd0);
      lVar3 = (*pcVar7)(uVar8,&stack0x000001b0,*(undefined8 *)(unaff_x20 + 0x28));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar8 = FUN_034127bc(lVar3,0);
      uVar5 = thunk_FUN_0340e318(uVar8,unaff_x23,0);
    } while ((uVar5 & 1) == 0);
    in_stack_000001b0 = unaff_w28;
    uVar8 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               ,&stack0x000001b0);
    unaff_x27 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                             in_stack_00000008,uVar8,0);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x23 = FUN_034127bc(unaff_x27,0);
    bVar1 = false;
    unaff_w28 = unaff_w28 + 1;
joined_r0x024175cc:
    if (unaff_x25 != (long *)0x0) {
      lVar3 = *unaff_x25;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02417624;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(unaff_x25,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02417624:
      (*(code *)*puVar2)(unaff_x25,puVar2[1]);
    }
    if (bVar1) {
      return unaff_x27;
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02417420;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02417420:
    param_1 = (long *)(*(code *)*puVar2)();
    unaff_x25 = param_1;
  } while( true );
}


