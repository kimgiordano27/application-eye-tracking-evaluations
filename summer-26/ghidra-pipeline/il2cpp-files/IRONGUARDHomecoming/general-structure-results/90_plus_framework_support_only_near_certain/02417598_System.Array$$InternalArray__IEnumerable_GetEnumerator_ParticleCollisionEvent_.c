/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ParticleCollisionEvent>
ENTRY_POINT: 02417598
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 152
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0241763c) */
/* WARNING: Removing unreachable block (ram,0x024176d8) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<ParticleCollisionEvent>(void)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  code *pcVar8;
  long *unaff_x25;
  undefined8 uVar9;
  long unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  int in_stack_000001b0;
  
code_r0x02417598:
  uVar3 = FUN_034127bc(unaff_x27,0);
  bVar1 = false;
  unaff_w28 = unaff_w28 + 1;
joined_r0x024175b8:
  if (unaff_x25 != (long *)0x0) {
    lVar4 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02417624;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(unaff_x25,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_02417624:
    (*(code *)*puVar2)(unaff_x25,puVar2[1]);
  }
  if (bVar1) {
    return unaff_x27;
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02417420;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02417420:
  unaff_x25 = (long *)(*(code *)*puVar2)();
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02417480;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x29,0);
LAB_02417480:
    uVar6 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
    if ((uVar6 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_024174f4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,lVar4,0);
LAB_024174f4:
    (*(code *)*puVar2)(&stack0x00000010,unaff_x25,puVar2[1]);
    memcpy(&stack0x000000e0,&stack0x00000010,0xd0);
    pcVar8 = *(code **)(unaff_x20 + 0x18);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
    memcpy(&stack0x000001b0,&stack0x000000e0,0xd0);
    lVar4 = (*pcVar8)(uVar9,&stack0x000001b0,*(undefined8 *)(unaff_x20 + 0x28));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = FUN_034127bc(lVar4,0);
    uVar6 = thunk_FUN_0340e318(uVar9,uVar3,0);
    if ((uVar6 & 1) != 0) {
      in_stack_000001b0 = unaff_w28;
      uVar3 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,&stack0x000001b0);
      unaff_x27 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__
                               ,in_stack_00000008,uVar3,0);
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      goto code_r0x02417598;
    }
  } while( true );
  bVar1 = true;
  goto joined_r0x024175b8;
}


