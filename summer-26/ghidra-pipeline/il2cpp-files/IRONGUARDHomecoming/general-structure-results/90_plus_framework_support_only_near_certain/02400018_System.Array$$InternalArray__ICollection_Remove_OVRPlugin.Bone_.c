/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Bone>
ENTRY_POINT: 02400018
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
System_Array__InternalArray__ICollection_Remove<OVRPlugin_Bone>
          (undefined8 param_1,long param_2,void *param_3,long param_4)

{
  void *__src;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *__dest;
  ulong __n;
  long *plVar6;
  long unaff_x29;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  lVar2 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(lVar2 + 0x28);
  *(void **)(unaff_x29 + -0xa0) = param_3;
  plVar6 = *(long **)(param_4 + 0x38);
  if (plVar6 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationSection_SerializeSection__);
    plVar6 = *(long **)(param_4 + 0x38);
    if (plVar6 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar6 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*plVar6 + 0xfc);
  __dest = (undefined8 *)((long)&stack0x00000000 - (__n + 0xf & 0x1fffffff0));
  in_stack_000000c0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  __src = param_3;
  if (-1 < *(int *)(*plVar6 + 0x28)) {
    __src = (void *)(unaff_x29 + -0xa0);
  }
  memcpy(__dest,__src,__n);
  uVar3 = FUN_01f089f8(*plVar6,__dest);
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_03e2525c(param_2,0);
    if ((uVar3 & 1) == 0) {
      if (param_2 != 0) {
        lVar5 = FUN_04070398(param_2,0);
        plVar6 = *(long **)(param_4 + 0x38);
        if (-1 < *(int *)(*plVar6 + 0x28)) {
          param_3 = (void *)(unaff_x29 + -0xa0);
        }
        memcpy(__dest,param_3,__n);
        puVar1 = (undefined8 *)plVar6[1];
        uVar4 = *puVar1;
        if (-1 < *(int *)(*plVar6 + 0x28)) {
          __dest = (undefined8 *)*__dest;
        }
        *(int *)(unaff_x29 + -0x84) = (int)param_1;
        *(undefined8 **)(unaff_x29 + -0x98) = __dest;
        *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x84;
        (*(code *)puVar1[2])(uVar4,puVar1,0,unaff_x29 + -0x98,unaff_x29 + -0x80);
        FUN_03c7c6bc(*(undefined4 *)(unaff_x29 + -0x80),*(undefined4 *)(unaff_x29 + -0x7c),
                     *(undefined4 *)(unaff_x29 + -0x78),0);
        if (lVar5 != 0) {
          FUN_0407ba80(lVar5,0);
          auVar8 = FUN_03c7c6c0(0);
          goto LAB_02400268;
        }
      }
    }
    else {
      plVar6 = *(long **)(param_4 + 0x38);
      if (-1 < *(int *)(*plVar6 + 0x28)) {
        param_3 = (void *)(unaff_x29 + -0xa0);
      }
      memcpy(__dest,param_3,__n);
      uVar4 = thunk_FUN_01f113fc(*plVar6,__dest);
      if ((param_2 != 0) && (lVar5 = FUN_04070398(param_2,0), lVar5 != 0)) {
        FUN_0407cee0(unaff_x29 + -0x70,lVar5,0);
        in_stack_00000048 = *(undefined8 *)(unaff_x29 + -0x68);
        in_stack_00000040 = *(undefined8 *)(unaff_x29 + -0x70);
        in_stack_00000058 = *(undefined8 *)(unaff_x29 + -0x58);
        in_stack_00000050 = *(undefined8 *)(unaff_x29 + -0x60);
        in_stack_00000068 = *(undefined8 *)(unaff_x29 + -0x48);
        in_stack_00000060 = *(undefined8 *)(unaff_x29 + -0x50);
        in_stack_00000078 = *(undefined8 *)(unaff_x29 + -0x38);
        in_stack_00000070 = *(undefined8 *)(unaff_x29 + -0x40);
        FUN_03c8e558(unaff_x29 + -0x70,&stack0x00000040,0);
        in_stack_00000008 = *(undefined8 *)(unaff_x29 + -0x68);
        in_stack_00000000 = *(undefined8 *)(unaff_x29 + -0x70);
        in_stack_00000018 = *(undefined8 *)(unaff_x29 + -0x58);
        in_stack_00000010 = *(undefined8 *)(unaff_x29 + -0x60);
        in_stack_00000028 = *(undefined8 *)(unaff_x29 + -0x48);
        in_stack_00000020 = *(undefined8 *)(unaff_x29 + -0x50);
        in_stack_00000038 = *(undefined8 *)(unaff_x29 + -0x38);
        in_stack_00000030 = *(undefined8 *)(unaff_x29 + -0x40);
        Unity_VisualScripting_GreaterThanHandler_<>c__<_ctor>b__0_88
                  (&stack0x00000080,uVar4,&stack0x00000000,2,0);
        uVar4 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_SerializeSection__;
        memcpy((void *)(unaff_x29 + -0x70),&stack0x00000080,0x48);
        auVar7 = FUN_0240a9dc(param_1,unaff_x29 + -0x70,uVar4);
        uVar4 = auVar7._8_8_;
        FUN_03e1c250(&stack0x00000080,0);
        auVar8._8_8_ = uVar4;
        auVar8._0_8_ = auVar7._0_8_;
        goto LAB_02400268;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  auVar8 = ZEXT816(0x7f800000);
LAB_02400268:
  if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -0x28)) {
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


