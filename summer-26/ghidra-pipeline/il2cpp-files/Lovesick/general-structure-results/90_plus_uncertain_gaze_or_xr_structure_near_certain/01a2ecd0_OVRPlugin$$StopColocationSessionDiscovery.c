/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionDiscovery
ENTRY_POINT: 01a2ecd0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StopColocationSessionDiscovery(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x24;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 in_stack_000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined4 uStack0000000000000150;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined4 uStack0000000000000190;
  undefined8 in_stack_000001a8;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 in_stack_000001b8;
  
  uVar4 = in_stack_000001b8;
  uVar3 = uStack00000000000001b4;
  uVar6 = uStack00000000000001b0;
  uVar7 = in_stack_000001a8._4_4_;
  lVar5 = 0x138;
  if (unaff_w21 != 0) {
    lVar5 = 0x16c;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xb8) + lVar5);
  uStack0000000000000168 = puVar1[1];
  uStack0000000000000160 = *puVar1;
  uStack0000000000000178 = puVar1[3];
  uStack0000000000000170 = puVar1[2];
  uStack0000000000000188 = puVar1[5];
  uStack0000000000000180 = puVar1[4];
  uStack0000000000000190 = *(undefined4 *)(puVar1 + 6);
  lVar5 = 0xd0;
  if (unaff_w21 != 0) {
    lVar5 = 0x104;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xb8) + lVar5);
  uStack0000000000000128 = puVar1[1];
  uStack0000000000000120 = *puVar1;
  uStack0000000000000138 = puVar1[3];
  uStack0000000000000130 = puVar1[2];
  uStack0000000000000150 = *(undefined4 *)(puVar1 + 6);
  uStack0000000000000148 = puVar1[5];
  uStack0000000000000140 = puVar1[4];
  if (DAT_03775377 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775377 = '\x01';
  }
  puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar5 = *(long *)(*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
  uStack00000000000000f4 = uVar6;
  in_stack_000000f0 =
       FUN_02699088(uVar7,uVar6,uVar3,uVar4,*(undefined4 *)(lVar5 + 0x48),
                    *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
  uVar7 = uStack00000000000000f4;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_01a2eff0(&stack0x000000f0,&stack0x00000160,&stack0x00000120);
  uVar3 = in_stack_000001b8;
  uVar6 = uStack00000000000001b0;
  if (DAT_037750c4 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_037750c4 = '\x01';
  }
  lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
  in_stack_000000f0 =
       FUN_02699088(in_stack_000001a8._4_4_,uVar6,uStack00000000000001b4,uVar3,
                    *(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c),
                    *(undefined4 *)(lVar5 + 0x20),0);
  uStack00000000000000f4 = uVar6;
  uVar6 = FUN_01a2eff0(&stack0x000000f0,&stack0x00000160,&stack0x00000120);
  in_stack_000001a8._4_4_ = FUN_02698e08(uVar8,0);
  in_stack_000001b8 = uVar6;
  uStack00000000000001b0 = uVar7;
  in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0x38);
  in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x3c);
  *(undefined8 *)(unaff_x24 + 0x84) = *(undefined8 *)(unaff_x20 + 0x44);
  *(undefined8 *)(unaff_x24 + 0x7c) = uVar8;
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    FUN_019a7844(&stack0x00000100,&stack0x000001a0,*(long *)(unaff_x19 + 0x68) + 0x14,0);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x68);
      uVar7 = FUN_0269fcf8(*(long *)(unaff_x19 + 0x48),0);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x70) = uVar7;
        if (*(long *)(unaff_x19 + 0x68) != 0) {
          *(undefined4 *)(*(long *)(unaff_x19 + 0x68) + 0x30) = 2;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


