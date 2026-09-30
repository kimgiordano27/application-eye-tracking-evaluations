/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 051a94e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpaceRotation(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  
  fVar7 = (float)FUN_05f01910(param_1,0);
  FUN_051a9758();
  *(undefined4 *)(unaff_x21 + 0x44) = 0;
  *(undefined8 *)(unaff_x21 + 0x3c) = 0;
  if (*(long *)(unaff_x19 + 200) != 0) {
    lVar6 = *unaff_x20;
    uVar3 = FUN_05ef2cb4(*(long *)(unaff_x19 + 200),0);
    uVar4 = FUN_05ef2cb4();
    FUN_05167a58(&stack0x00000010,uVar3,uVar4,0);
    uVar2 = uStack0000000000000018;
    if (*(long *)(unaff_x19 + 200) != 0) {
      uVar9 = in_stack_00000010 & 0xffffffff;
      uVar1 = in_stack_00000010._4_4_;
      lVar5 = FUN_05ef2cb4(*(long *)(unaff_x19 + 200),0);
      if (lVar5 != 0) {
        FUN_05f00104(lVar5,0);
        fVar8 = (float)FUN_05ee9a10(0);
        in_stack_00000010 = 0;
        uStack0000000000000018 = 0;
        uStack000000000000001c = 0;
        in_stack_00000028 = 0;
        uStack0000000000000020 = 0;
        uStack0000000000000024 = 0;
        FUN_05effcac(uVar9,uVar1,uVar2,
                     (unaff_s11 * unaff_s9 + unaff_s13 * fVar7 + unaff_s14 * fVar8) -
                     unaff_s12 * unaff_s10,
                     (unaff_s13 * unaff_s10 + unaff_s12 * fVar7 + unaff_s14 * unaff_s9) -
                     unaff_s11 * fVar8,
                     (unaff_s12 * fVar8 + unaff_s11 * fVar7 + unaff_s14 * unaff_s10) -
                     unaff_s13 * unaff_s9,
                     ((unaff_s14 * fVar7 - unaff_s13 * fVar8) - unaff_s12 * unaff_s9) -
                     unaff_s11 * unaff_s10,&stack0x00000010,0);
        if (lVar6 != 0) {
          *(ulong *)(lVar6 + 0x34) = CONCAT44(in_stack_00000028,uStack0000000000000024);
          *(ulong *)(lVar6 + 0x2c) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
          *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          *(ulong *)(lVar6 + 0x20) = in_stack_00000010;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


