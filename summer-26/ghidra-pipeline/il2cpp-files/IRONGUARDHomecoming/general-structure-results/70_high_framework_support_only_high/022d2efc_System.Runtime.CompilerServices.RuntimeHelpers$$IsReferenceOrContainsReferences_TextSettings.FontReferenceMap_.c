/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<TextSettings.FontReferenceMap>
ENTRY_POINT: 022d2efc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d3258) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<TextSettings_FontReferenceMap>
               (long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  char unaff_w25;
  int unaff_w27;
  long *unaff_x29;
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
  
  while ((uVar3 = FUN_041f75ac(param_1,param_2,param_3,param_4,param_5), (uVar3 & 1) == 0 ||
         (lVar4 = (**(code **)(*unaff_x24 + 0x418))
                            (uStack0000000000000048,uStack000000000000004c,unaff_x24,
                             *(undefined8 *)(*unaff_x24 + 0x420)), lVar4 == 0))) {
    do {
      do {
        unaff_w27 = unaff_w27 + -1;
        if (unaff_w27 < 0) {
          unaff_x24 = (long *)0x0;
          goto LAB_022d2f28;
        }
        param_1 = (long *)FUN_030f28e4();
      } while (param_1 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x29 + 0x130);
    } while (((*(byte *)(*param_1 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) ||
            ((unaff_w25 != '\0' && ((int)param_1[0x3b] != unaff_w23))));
    param_2 = (undefined8 *)&stack0x00000048;
    param_3 = (undefined8 *)&stack0x00000040;
    param_4 = 0;
    param_5 = 0;
    unaff_x24 = param_1;
  }
LAB_022d2f28:
  puVar2 = Method_System_Char_IsUpper__;
  if (*(int *)(*(long *)Method_System_Char_IsUpper__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar5 == (long *)0x0) {
LAB_022d2fb0:
    plVar5 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_022d2fb0;
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29) {
      plVar5 = (long *)0x0;
    }
  }
  if (plVar5 == unaff_x24) {
    if (unaff_x24 == (long *)0x0) goto LAB_022d3120;
  }
  else {
    if (plVar5 != (long *)0x0) {
      FUN_041f7574(plVar5,0);
      FUN_041f76d0(plVar5,unaff_w19,0);
    }
    if (unaff_x24 == (long *)0x0) {
LAB_022d3120:
      if ((unaff_x22 & 1) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000008,0,0);
      return;
    }
    FUN_041f7788(uStack0000000000000048,uStack000000000000004c,unaff_x24,unaff_w19,0);
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uStack0000000000000048,uStack000000000000004c,*unaff_x20,uStack0000000000000040,
                 uStack0000000000000044);
  }
  in_stack_00000050 = *unaff_x20;
  in_stack_00000058 = unaff_x20[1];
  in_stack_00000060 = unaff_x20[2];
  in_stack_00000068 = unaff_x20[3];
  in_stack_00000070 = unaff_x20[4];
  plVar5 = (long *)(**(code **)(unaff_x21 + 0x18))
                             (uStack0000000000000048,uStack000000000000004c,0,uStack0000000000000040
                              ,uStack0000000000000044,0,*(undefined8 *)(unaff_x21 + 0x40),
                              &stack0x00000050,*(undefined8 *)(unaff_x21 + 0x28));
  plVar6 = (long *)(**(code **)(*unaff_x24 + 0x398))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x3a0));
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar6 + 0x198))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x1a0));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_041d84e4(plVar5,0);
  if ((uVar3 & 1) != 0) {
    FUN_041c73ec(in_stack_00000008,unaff_x24,0);
  }
  lVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar7 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar4 == lVar7) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19,unaff_x24,0);
  }
  else {
    lVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar4 == lVar7) {
      if (*plVar5 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar5);
      }
      if ((int)plVar5[0x16] == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar4 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar8 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_022d31f4;
      }
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar3 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022d31f4:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return;
}


