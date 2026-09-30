/*
FUNCTION_NAME: OVRPlugin$$GetConnectedControllers
ENTRY_POINT: 03685890
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_12
*/


/* WARNING: Removing unreachable block (ram,0x0368572c) */
/* WARNING: Removing unreachable block (ram,0x03685860) */
/* WARNING: Removing unreachable block (ram,0x036859fc) */

void OVRPlugin__GetConnectedControllers(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long lVar8;
  undefined8 uVar9;
  long *in_stack_00000008;
  undefined8 in_stack_00000028;
  
  if (param_2 != 1) {
    if (in_stack_00000008 != (long *)0x0) {
      lVar8 = *in_stack_00000008;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x036859e4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(in_stack_00000008,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
code_r0x036859e4:
      (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  lVar8 = *plVar4;
  __cxa_end_catch();
  if (in_stack_00000008 != (long *)0x0) {
    lVar5 = *in_stack_00000008;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03685530;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03685530:
    (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
  }
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar8);
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar4 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar4 != (long *)0x0)) {
    lVar8 = *plVar4;
    uVar9 = *(undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_16__) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_036855bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_16__,0);
LAB_036855bc:
    puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_17__;
    plVar4 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
    do {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto OVRPlugin__SetBoundaryVisible;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
OVRPlugin__SetBoundaryVisible:
      uVar6 = (*(code *)*puVar2)(plVar4,puVar2[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_03685720;
        lVar8 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 == 0) goto LAB_036856f8;
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_036856e0;
      }
      lVar8 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03685690;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03685690:
      lVar8 = (*(code *)*puVar2)(plVar4,puVar2[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = FUN_03405678(uVar9,*(undefined8 *)(lVar8 + 0x18),0);
    } while( true );
  }
  goto LAB_03685850;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_036856e0:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03685714;
    }
  }
LAB_036856f8:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03685714:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
LAB_03685720:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar4 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0367e580();
    uVar3 = thunk_FUN_01f113fc(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_14__,
                               (long)&stack0x00000028 + 4);
    uVar9 = FUN_0340f2f0(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_23__,uVar3,uVar9,0)
    ;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x558))(plVar4,uVar9,*(undefined8 *)(*plVar4 + 0x560));
      return;
    }
  }
LAB_03685850:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


