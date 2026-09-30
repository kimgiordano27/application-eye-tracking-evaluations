/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<RenderGraphDebugData.ResourceDebugData>
ENTRY_POINT: 022d20fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d2378) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<RenderGraphDebugData_ResourceDebugData>
               (long *param_1)

{
  bool in_ZR;
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 unaff_w19;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  if (!in_ZR) {
    param_1 = (long *)0x0;
  }
  if (param_1 == unaff_x25) {
    if (unaff_x25 == (long *)0x0) goto LAB_022d223c;
  }
  else {
    if (param_1 != (long *)0x0) {
      FUN_041f7574(param_1,0);
      FUN_041f76d0(param_1,unaff_w19,0);
    }
    if (unaff_x25 == (long *)0x0) {
LAB_022d223c:
      if ((in_stack_00000008 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000010,0,0);
      return;
    }
    FUN_041f7788(uStack0000000000000028,uStack000000000000002c);
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar1 = (long *)(**(code **)(unaff_x23 + 0x18))
                             (uStack0000000000000028,uStack000000000000002c,0,uStack0000000000000020
                              ,uStack0000000000000024,0,*(undefined8 *)(unaff_x23 + 0x40));
  plVar2 = (long *)(**(code **)(*unaff_x25 + 0x398))();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar2 + 0x198))(plVar2,plVar1,*(undefined8 *)(*plVar2 + 0x1a0));
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_041d84e4(plVar1,0);
  if ((uVar3 & 1) != 0) {
    FUN_041c73ec(in_stack_00000010);
  }
  lVar4 = (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar4 == lVar5) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19);
  }
  else {
    lVar4 = (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar4 == lVar5) {
      if (*plVar1 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar1);
      }
      if ((int)plVar1[0x16] == 0) {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar4 = *plVar1;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_022d2314;
      }
      uVar3 = uVar3 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar3 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022d2314:
  (*(code *)*puVar6)(plVar1,puVar6[1]);
  return;
}


