/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<InternedString,-InternedString>$$System.Collections.ICollection.get_IsSynchronized
ENTRY_POINT: 02efc1e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02efc5c4) */

void System_Collections_Generic_Dictionary_KeyCollection<InternedString,_InternedString>__System_Collections_ICollection_get_IsSynchronized
               (undefined8 param_1,undefined8 param_2,size_t param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  void *__src;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong in_x9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long *plVar11;
  undefined8 *unaff_x26;
  void *unaff_x27;
  undefined4 unaff_w28;
  long unaff_x29;
  
  memset(&stack0x00000000 + -(in_x9 & 0xfffffffffffffff0),0,param_3);
  lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                            );
  FUN_039dcb20(lVar2,&stack0x00000000 + -(in_x9 & 0xfffffffffffffff0),unaff_w28,0);
  plVar11 = *(long **)(unaff_x29 + -0x20);
  if (plVar11 != (long *)0x0) {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar9 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar5 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02efc2a0;
        }
        uVar10 = uVar10 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_02efc2a0:
    plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02efc308;
          }
          uVar10 = uVar10 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_02efc308:
      uVar10 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_02efc47c;
        lVar7 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_02efc454;
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_02efc43c;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar9 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar5 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar7) {
            lVar7 = lVar9 + (long)*piVar5 * 0x10 + 0x138;
            goto LAB_02efc380;
          }
          uVar10 = uVar10 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar10 != 0);
      }
      lVar7 = FUN_01ecb238(plVar11,lVar7,0);
LAB_02efc380:
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
      lVar7 = *(long *)(lVar7 + 8);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar11,unaff_x29 + -0x18);
      memcpy(unaff_x27,unaff_x22,unaff_x21);
      memcpy(unaff_x26,unaff_x27,unaff_x21);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar3 = unaff_x26;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x98) + 0x28)) {
        puVar3 = (undefined8 *)*unaff_x26;
      }
      puVar8 = *(undefined8 **)(lVar7 + 0x1d8);
      uVar4 = *puVar8;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
      (*(code *)puVar8[2])(uVar4);
      if (-1 < *(int *)(unaff_x29 + -0xc)) {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar2,*(int *)(unaff_x29 + -0xc),0);
      }
    } while( true );
  }
LAB_02efc5b4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar5 = piVar5 + 4;
    if (uVar10 == 0) break;
LAB_02efc43c:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
      goto 
      System_Collections_Generic_Dictionary_KeyCollection<InternedString,_object>__System_Collections_Generic_ICollection<TKey>_Remove
      ;
    }
  }
LAB_02efc454:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar11,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);

  System_Collections_Generic_Dictionary_KeyCollection<InternedString,_object>__System_Collections_Generic_ICollection<TKey>_Remove
  :
  (*(code *)*puVar3)(plVar11,puVar3[1]);
LAB_02efc47c:
  if (0 < (int)unaff_x23) {
    uVar10 = 0;
    do {
      plVar11 = *(long **)(unaff_x20 + 0x18);
      if (plVar11 == (long *)0x0) goto LAB_02efc5b4;
      if (*(uint *)(plVar11 + 3) <= uVar10) {
LAB_02efc5b8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      piVar5 = (int *)thunk_FUN_01ee7388((long)plVar11 + uVar10 * *(uint *)(*plVar11 + 0x104) + 0x20
                                         ,*(undefined8 *)
                                           (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0)
                                                     + 0x90) + 0x80));
      if (-1 < *piVar5) {
        if (lVar2 == 0) goto LAB_02efc5b4;
        uVar6 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar2,uVar10 & 0xffffffff,0);
        if ((uVar6 & 1) == 0) {
          plVar11 = *(long **)(unaff_x20 + 0x18);
          if (plVar11 == (long *)0x0) goto LAB_02efc5b4;
          if (*(uint *)(plVar11 + 3) <= uVar10) goto LAB_02efc5b8;
          __src = (void *)thunk_FUN_01ee7388((long)plVar11 +
                                             uVar10 * *(uint *)(*plVar11 + 0x104) + 0x20,
                                             *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 +
                                                                                    0x20) + 0xc0) +
                                                                0x90) + 0x80) + 0x40);
          memcpy(unaff_x22,__src,unaff_x21);
          lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
          puVar3 = unaff_x22;
          if (-1 < *(int *)(*(long *)(lVar7 + 0x98) + 0x28)) {
            puVar3 = (undefined8 *)*unaff_x22;
          }
          puVar8 = *(undefined8 **)(lVar7 + 0x148);
          uVar4 = *puVar8;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
          (*(code *)puVar8[2])(uVar4);
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


