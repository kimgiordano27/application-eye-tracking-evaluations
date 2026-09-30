/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__653_54
ENTRY_POINT: 036a811c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__653_54(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined4 uStack00000000000000b8;
  
  uVar1 = DAT_00c92888;
  uVar13 = *(undefined4 *)(param_1 + 0x358);
  uVar14 = *(undefined4 *)(in_x9 + 0x828);
  *(undefined4 *)(unaff_x20 + 0x310) = 0;
  uStack00000000000000a0 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000b0 = 0;
  FUN_0407b788(uVar13,uVar14,uVar1,0,0,0,0xbf800000,&stack0x000000a0,0);
  *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x34);
  *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x2c);
  in_stack_00000088 = uStack00000000000000a8;
  in_stack_00000080 = uStack00000000000000a0;
  if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
    uVar11 = *(undefined8 *)(unaff_x22 + 0xc);
    *(undefined8 *)(unaff_x20 + 0x32c) = *(undefined8 *)(unaff_x22 + 0x14);
    *(undefined8 *)(unaff_x20 + 0x324) = uVar11;
    *(undefined8 *)(unaff_x20 + 800) = uStack00000000000000a8;
    *(undefined8 *)(unaff_x20 + 0x318) = uStack00000000000000a0;
    uVar14 = DAT_00c928fc;
    uVar13 = DAT_00c9264c;
    uVar1 = DAT_00c924c4;
    *(undefined4 *)(unaff_x20 + 0x334) = 0;
    in_stack_00000060 = 0;
    uStack0000000000000068 = 0;
    uStack000000000000006c = 0;
    in_stack_00000078 = 0;
    uStack0000000000000070 = 0;
    uStack0000000000000074 = 0;
    FUN_0407b788(uVar13,uVar14,uVar1,0,0,0,0xbf800000,&stack0x00000060,0);
    uStack0000000000000054 = CONCAT44(in_stack_00000078,uStack0000000000000074);
    uStack0000000000000050 = uStack0000000000000070;
    uStack0000000000000048 = uStack0000000000000068;
    uStack000000000000004c = uStack000000000000006c;
    in_stack_00000040 = in_stack_00000060;
    if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
      *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
      *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
      uVar14 = DAT_00c9298c;
      uVar13 = DAT_00c9292c;
      uVar1 = DAT_00c92680;
      *(undefined4 *)(unaff_x20 + 0x358) = 0;
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      in_stack_00000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_0407b788(uVar14,uVar1,uVar13,0,0,0,0xbf800000,&stack0x00000020,0);
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
          lVar7 = thunk_FUN_01f117cc(*unaff_x23);
          FUN_036a7490();
          puVar6 = Method_UnityEngine_UIElements_PointerCaptureOutEvent_<>c_<_cctor>b__0_0__;
          puVar5 = Method_UnityEngine_UIElements_PointerCaptureEvent_<>c_<_cctor>b__0_0__;
          puVar4 = Method_UnityEngine_UIElements_PointerCancelEvent_<>c_<_cctor>b__0_0__;
          puVar3 = Method_Oculus_Interaction_PointableElement_<>c_<_ctor>b__43_0__;
          puVar2 = 
          Method_Oculus_Interaction_PointableCanvasModule_<>c__DisplayClass24_0_<AddPointerCanvas>b__0__
          ;
          if (**(long **)(*unaff_x23 + 0xb8) != 0) {
            lVar8 = *(long *)
                     Method_UnityEngine_UIElements_PointerCaptureOutEvent_<>c_<_cctor>b__0_0__;
            uVar11 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar8 = *(long *)puVar6;
            }
            uVar12 = **(undefined8 **)(lVar8 + 0xb8);
            uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
            FUN_02e67ddc(uVar9,uVar12,*(undefined8 *)puVar5,0);
            uVar11 = FUN_022fdf24(uVar11,uVar9,*(undefined8 *)puVar2);
            uVar11 = FUN_02308890(uVar11,*(undefined8 *)puVar3);
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x10) = uVar11;
              thunk_FUN_01f51358();
              plVar10 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
              *plVar10 = lVar7;
              thunk_FUN_01f51358(plVar10,lVar7);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


