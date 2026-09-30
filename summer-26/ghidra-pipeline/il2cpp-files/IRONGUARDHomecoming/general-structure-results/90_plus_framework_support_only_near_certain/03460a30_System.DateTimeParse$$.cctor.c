/*
FUNCTION_NAME: System.DateTimeParse$$.cctor
ENTRY_POINT: 03460a30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_16;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x034609d4) */
/* WARNING: Removing unreachable block (ram,0x03460c2c) */
/* WARNING: Removing unreachable block (ram,0x03460854) */
/* WARNING: Removing unreachable block (ram,0x03460bf4) */

long System_DateTimeParse___cctor(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  if (param_2 == 1) {
    plVar5 = (long *)__cxa_begin_catch(param_1);
    lVar11 = *plVar5;
    __cxa_end_catch();
    lVar9 = 0;
    plVar5 = (long *)thunk_FUN_01f116d0();
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0346069c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0346069c:
      (*(code *)*puVar3)(plVar5,puVar3[1]);
    }
    if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar11);
    }
    if (*(int *)(*(long *)Method_System_RuntimeType_IsEnumDefined__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03453e94();
    lVar11 = *unaff_x29;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *unaff_x29;
    }
    plVar5 = *(long **)(*(long *)(lVar11 + 0xb8) + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
    puVar2 = Method_Sirenix_Serialization_SerializationUtility_CreateReader__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar6 = *plVar5;
      lVar11 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar11) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0346076c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar5,lVar11,0);
LAB_0346076c:
      uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        uVar10 = 8;
        goto LAB_034608a0;
      }
      lVar6 = *plVar5;
      lVar11 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar11) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_034607cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar5,lVar11,1);
LAB_034607cc:
      lVar11 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      if (lVar11 == 0) {
        lVar6 = 0;
      }
      else {
        uVar12 = *(undefined8 *)puVar2;
        lVar6 = thunk_FUN_01f116d0(lVar11,uVar12);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar11,uVar12);
        }
      }
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar11 = FUN_0346cfb8(lVar6);
    } while (lVar11 == 0);
    lVar9 = *unaff_x29;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar9 = *unaff_x29;
    }
    plVar4 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar4 + 0x3c8))(plVar4,lVar6,*(undefined8 *)(*plVar4 + 0x3d0));
    FUN_0346d1d4(lVar6);
    uVar10 = 4;
    lVar9 = lVar11;
LAB_034608a0:
    plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03460910;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03460910:
      (*(code *)*puVar3)(plVar5,puVar3[1]);
    }
    lVar11 = 0;
  }
  else {
    plVar5 = (long *)thunk_FUN_01f116d0();
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x03460bb8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
code_r0x03460bb8:
      (*(code *)*puVar3)(plVar5,puVar3[1]);
    }
    if (param_2 != 1) {
      if (in_stack_00000008._4_1_ != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (unaff_x28,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14(param_1);
    }
    plVar5 = (long *)__cxa_begin_catch(param_1);
    lVar11 = *plVar5;
    __cxa_end_catch();
    lVar9 = 0;
    uVar10 = 0;
  }
  if (in_stack_00000008._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(unaff_x28,0);
  }
  if (lVar11 == 0) {
    if ((uVar10 | 8) == 8) {
      *unaff_x19 = 0;
      thunk_FUN_01f51358();
      lVar9 = 0;
    }
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990(lVar11);
}


