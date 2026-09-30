/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<InternedString,-object>$$.ctor
ENTRY_POINT: 02efc294
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02efc5c4) */

void System_Collections_Generic_Dictionary_KeyCollection<InternedString,_object>___ctor
               (long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  void *__src;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  
                    /* try { // try from 02efc298 to 02ffc2a3 has its CatchHandler @ 02efc35c */
                    /* try { // try from 02efc2a4 to 02ffc34f has its CatchHandler @ 02efc1b4 */
  plVar2 = (long *)(**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02efc308;
        }
        uVar10 = uVar10 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_02efc308:
    uVar10 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_02efc47c;
      lVar8 = *plVar2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_02efc454;
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar5 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar8) {
          lVar8 = lVar9 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_02efc380;
        }
        uVar10 = uVar10 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar10 != 0);
    }
    lVar8 = FUN_01ecb238(plVar2,lVar8,0);
LAB_02efc380:
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
    lVar8 = *(long *)(lVar8 + 8);
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar2,unaff_x29 + -0x18);
    memcpy(unaff_x27,unaff_x22,unaff_x21);
    memcpy(unaff_x26,unaff_x27,unaff_x21);
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar3 = unaff_x26;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x98) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x26;
    }
    puVar7 = *(undefined8 **)(lVar8 + 0x1d8);
    uVar4 = *puVar7;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
    (*(code *)puVar7[2])(uVar4);
    if (-1 < *(int *)(unaff_x29 + -0xc)) {
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039dcb94();
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar5 = piVar5 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
      goto 
      System_Collections_Generic_Dictionary_KeyCollection<InternedString,_object>__System_Collections_Generic_ICollection<TKey>_Remove
      ;
    }
  }
LAB_02efc454:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);

  System_Collections_Generic_Dictionary_KeyCollection<InternedString,_object>__System_Collections_Generic_ICollection<TKey>_Remove
  :
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_02efc47c:
  if (0 < (int)unaff_x23) {
    uVar10 = 0;
    do {
      plVar2 = *(long **)(unaff_x20 + 0x18);
      if (plVar2 == (long *)0x0) goto LAB_02efc5b4;
      if (*(uint *)(plVar2 + 3) <= uVar10) {
LAB_02efc5b8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      piVar5 = (int *)thunk_FUN_01ee7388((long)plVar2 + uVar10 * *(uint *)(*plVar2 + 0x104) + 0x20,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                    0x90) + 0x80));
      if (-1 < *piVar5) {
        if (unaff_x24 == 0) {
LAB_02efc5b4:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32();
        if ((uVar6 & 1) == 0) {
          plVar2 = *(long **)(unaff_x20 + 0x18);
          if (plVar2 == (long *)0x0) goto LAB_02efc5b4;
          if (*(uint *)(plVar2 + 3) <= uVar10) goto LAB_02efc5b8;
          __src = (void *)thunk_FUN_01ee7388((long)plVar2 +
                                             uVar10 * *(uint *)(*plVar2 + 0x104) + 0x20,
                                             *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 +
                                                                                    0x20) + 0xc0) +
                                                                0x90) + 0x80) + 0x40);
          memcpy(unaff_x22,__src,unaff_x21);
          lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
          puVar3 = unaff_x22;
          if (-1 < *(int *)(*(long *)(lVar8 + 0x98) + 0x28)) {
            puVar3 = (undefined8 *)*unaff_x22;
          }
          puVar7 = *(undefined8 **)(lVar8 + 0x148);
          uVar4 = *puVar7;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
          (*(code *)puVar7[2])(uVar4);
        }
      }
      uVar10 = uVar10 + 1;
    } while (unaff_x23 != uVar10);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


