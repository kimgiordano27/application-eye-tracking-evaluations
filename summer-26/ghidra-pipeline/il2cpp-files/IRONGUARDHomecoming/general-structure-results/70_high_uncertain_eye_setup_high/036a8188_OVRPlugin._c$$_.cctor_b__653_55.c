/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__653_55
ENTRY_POINT: 036a8188
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__653_55
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  
  *(long *)(unaff_x20 + 0x32c) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x324) = param_2._0_8_;
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
  uVar3 = DAT_00c928fc;
  uVar2 = DAT_00c9264c;
  uVar1 = DAT_00c924c4;
  *(undefined4 *)(unaff_x20 + 0x334) = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  FUN_0407b788(uVar2,uVar3,uVar1,0,0,0,0xbf800000,&stack0x00000060,0);
  uStack0000000000000054 = CONCAT44(uStack0000000000000078,uStack0000000000000074);
  in_stack_00000050 = uStack0000000000000070;
  in_stack_00000048 = uStack0000000000000068;
  uStack000000000000004c = uStack000000000000006c;
  in_stack_00000040 = uStack0000000000000060;
  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
    *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
    *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    *(undefined8 *)(unaff_x20 + 0x33c) = uStack0000000000000060;
    uVar3 = DAT_00c9298c;
    uVar2 = DAT_00c9292c;
    uVar1 = DAT_00c92680;
    *(undefined4 *)(unaff_x20 + 0x358) = 0;
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_0407b788(uVar3,uVar1,uVar2,0,0,0,0xbf800000,&stack0x00000020,0);
    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
      *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
      *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
      *(undefined4 *)(unaff_x20 + 0x37c) = 0;
      if (unaff_x19 != 0) {
        *(long *)(unaff_x19 + 0x10) = unaff_x20;
        thunk_FUN_01f51358();
        **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
        thunk_FUN_01f51358(*(undefined8 *)(*unaff_x23 + 0xb8));
        lVar9 = thunk_FUN_01f117cc(*unaff_x23);
        FUN_036a7490();
        puVar8 = Method_UnityEngine_UIElements_PointerCaptureOutEvent_<>c_<_cctor>b__0_0__;
        puVar7 = Method_UnityEngine_UIElements_PointerCaptureEvent_<>c_<_cctor>b__0_0__;
        puVar6 = Method_UnityEngine_UIElements_PointerCancelEvent_<>c_<_cctor>b__0_0__;
        puVar5 = Method_Oculus_Interaction_PointableElement_<>c_<_ctor>b__43_0__;
        puVar4 = 
        Method_Oculus_Interaction_PointableCanvasModule_<>c__DisplayClass24_0_<AddPointerCanvas>b__0__
        ;
        if (**(long **)(*unaff_x23 + 0xb8) != 0) {
          lVar10 = *(long *)
                    Method_UnityEngine_UIElements_PointerCaptureOutEvent_<>c_<_cctor>b__0_0__;
          uVar13 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar10 = *(long *)puVar8;
          }
          uVar14 = **(undefined8 **)(lVar10 + 0xb8);
          uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
          FUN_02e67ddc(uVar11,uVar14,*(undefined8 *)puVar7,0);
          uVar13 = FUN_022fdf24(uVar13,uVar11,*(undefined8 *)puVar4);
          uVar13 = FUN_02308890(uVar13,*(undefined8 *)puVar5);
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x10) = uVar13;
            thunk_FUN_01f51358();
            plVar12 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
            *plVar12 = lVar9;
            thunk_FUN_01f51358(plVar12,lVar9);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


