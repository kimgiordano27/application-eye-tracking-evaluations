/*
FUNCTION_NAME: OVRManager$$get_trackingOriginType
ENTRY_POINT: 053075dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__get_trackingOriginType(long param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float fVar10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
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
  
  param_3 = param_3 + param_2;
  if (**(float **)(param_1 + 0xb8) <= param_3) {
    fVar9 = unaff_s8 * unaff_s14 + unaff_s11 * unaff_s12 + unaff_s9 * unaff_s15;
    param_4 = (unaff_s12 * fVar9) / param_3;
    unaff_s11 = unaff_s11 - param_4;
    unaff_s9 = unaff_s9 - (unaff_s15 * fVar9) / param_3;
    unaff_s8 = unaff_s8 - (unaff_s14 * fVar9) / param_3;
  }
  if (DAT_06bb42c7 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar1 = PTR_DAT_067c9790;
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    fVar10 = SQRT(unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8);
    fVar7 = (float)FUN_060ffbe4(*(long *)(unaff_x19 + 0x128),0);
    fVar9 = param_4;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar8 = (float)FUN_060fde38();
    plVar6 = *(long **)(unaff_x19 + 0x138);
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_060fda18(fVar7 + fVar10 * fVar8,*(undefined4 *)(unaff_x21 + 4),param_4 + fVar10 * fVar9,
                 *(undefined4 *)(unaff_x20 + 0xc),*(undefined4 *)(unaff_x20 + 0x10),
                 *(undefined4 *)(unaff_x20 + 0x14),*(undefined4 *)(unaff_x20 + 0x18),
                 &stack0x00000020,0);
    uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
    uStack0000000000000048 = uStack0000000000000028;
    in_stack_00000040 = in_stack_00000020;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_05307758;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_02f421d0(plVar6,*(long *)
                                    UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo
                            ,2);
LAB_05307758:
      (*(code *)*puVar2)(&stack0x00000000 + 4,plVar6,&stack0x00000040,puVar2[1]);
      *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
      *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000._4_8_;
      *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000018;
      *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


