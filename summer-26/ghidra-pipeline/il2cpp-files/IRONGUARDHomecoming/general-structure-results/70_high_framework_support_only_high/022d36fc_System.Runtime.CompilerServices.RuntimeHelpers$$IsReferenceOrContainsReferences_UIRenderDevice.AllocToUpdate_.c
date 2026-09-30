/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<UIRenderDevice.AllocToUpdate>
ENTRY_POINT: 022d36fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d39e8) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<UIRenderDevice_AllocToUpdate>
               (void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 unaff_w19;
  long unaff_x21;
  undefined8 uVar11;
  code *pcVar12;
  long *unaff_x24;
  long *unaff_x26;
  void *unaff_x28;
  long *unaff_x29;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  
  plVar4 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar4 == (long *)0x0) {
LAB_022d3728:
    plVar4 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) goto LAB_022d3728;
    if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29) {
      plVar4 = (long *)0x0;
    }
  }
  if (plVar4 == unaff_x24) {
    if (unaff_x24 == (long *)0x0) goto LAB_022d38ac;
  }
  else {
    if (plVar4 != (long *)0x0) {
      FUN_041f7574(plVar4,0);
      FUN_041f76d0(plVar4,unaff_w19,0);
    }
    if (unaff_x24 == (long *)0x0) {
LAB_022d38ac:
      if ((in_stack_00000010 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000018,0,0);
      return;
    }
    FUN_041f7788(uStack0000000000000070,uStack0000000000000074);
  }
  uVar3 = uStack0000000000000070;
  uVar2 = uStack0000000000000068;
  memcpy(&stack0x00000020,unaff_x28,0x44);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  pcVar12 = *(code **)(unaff_x21 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x21 + 0x40);
  memcpy(&stack0x00000078,&stack0x00000020,0x44);
  plVar4 = (long *)(*pcVar12)(uVar3,uStack0000000000000074,0,uVar2,uStack000000000000006c,0,uVar11,
                              &stack0x00000078,*(undefined8 *)(unaff_x21 + 0x28));
  plVar5 = (long *)(**(code **)(*unaff_x24 + 0x398))();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar5 + 0x198))(plVar5,plVar4,*(undefined8 *)(*plVar5 + 0x1a0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = FUN_041d84e4(plVar4,0);
  if ((uVar6 & 1) != 0) {
    FUN_041c73ec(in_stack_00000018);
  }
  lVar7 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar8 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar7 == lVar8) {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19);
  }
  else {
    lVar7 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar7 == lVar8) {
      if (*plVar4 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar4);
      }
      if ((int)plVar4[0x16] == 0) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar7 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar9 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_022d3984;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar6 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022d3984:
  (*(code *)*puVar9)(plVar4,puVar9[1]);
  return;
}


