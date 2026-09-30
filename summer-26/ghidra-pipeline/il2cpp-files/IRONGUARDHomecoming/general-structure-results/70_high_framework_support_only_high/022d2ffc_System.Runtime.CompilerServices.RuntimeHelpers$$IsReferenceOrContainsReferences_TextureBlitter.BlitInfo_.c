/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<TextureBlitter.BlitInfo>
ENTRY_POINT: 022d2ffc
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


/* WARNING: Removing unreachable block (ram,0x022d3258) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<TextureBlitter_BlitInfo>
               (void)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 unaff_w19;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x24;
  long *unaff_x26;
  ulong unaff_x28;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if (unaff_x24 == (long *)0x0) {
    if ((unaff_x28 & 1) != 0) {
      FUN_041c5278(in_stack_00000008,0,0);
    }
  }
  else {
    FUN_041f7788(uStack0000000000000048,uStack000000000000004c);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uStack0000000000000048,uStack000000000000004c,*unaff_x22,uStack0000000000000040,
                   uStack0000000000000044);
    }
    in_stack_00000050 = *unaff_x22;
    in_stack_00000058 = unaff_x22[1];
    in_stack_00000060 = unaff_x22[2];
    in_stack_00000068 = unaff_x22[3];
    in_stack_00000070 = unaff_x22[4];
    plVar1 = (long *)(**(code **)(unaff_x21 + 0x18))
                               (uStack0000000000000048,uStack000000000000004c,0,
                                uStack0000000000000040,uStack0000000000000044,0,
                                *(undefined8 *)(unaff_x21 + 0x40),&stack0x00000050,
                                *(undefined8 *)(unaff_x21 + 0x28));
    plVar2 = (long *)(**(code **)(*unaff_x24 + 0x398))();
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
      FUN_041c73ec(in_stack_00000008);
    }
    lVar4 = (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
    if (lVar4 == lVar5) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
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
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
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
          goto LAB_022d31f4;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022d31f4:
    (*(code *)*puVar6)(plVar1,puVar6[1]);
  }
  return;
}


