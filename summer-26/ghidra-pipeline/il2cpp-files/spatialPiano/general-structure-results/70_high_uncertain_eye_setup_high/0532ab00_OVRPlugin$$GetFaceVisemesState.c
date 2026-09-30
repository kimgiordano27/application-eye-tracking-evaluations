/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 0532ab00
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetFaceVisemesState(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  float fStack000000000000004c;
  
  FUN_02f08768();
  FUN_02f08768(OVR_OpenVR_EVREye_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x2d7) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  fStack000000000000004c = 0.0;
  uVar7 = FUN_060ed0c4();
  if ((uVar7 & 1) == 0) {
    return false;
  }
  cVar2 = *(char *)(unaff_x19 + 0x61);
  *(undefined1 *)(unaff_x19 + 0x61) = 1;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_03ac039c(&stack0x00000008,*(long *)(unaff_x19 + 0x40),
                 *(undefined8 *)OVR_OpenVR_EVREye_TypeInfo);
    puVar5 = OVR_OpenVR_EVRControllerAxisType_TypeInfo;
    puVar4 = OVR_OpenVR_EVRButtonId_TypeInfo;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar7 = FUN_04aff1b0(&stack0x00000020,*(undefined8 *)puVar5), lVar8 = in_stack_00000030,
          (uVar7 & 1) != 0) {
      if (cVar2 == '\0') {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        fVar9 = *(float *)(in_stack_00000030 + 0x18) * -0.5;
      }
      else {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        fVar9 = *(float *)(in_stack_00000030 + 0x18) * 0.5;
      }
      fVar9 = *(float *)(in_stack_00000030 + 0x14) + fVar9;
      bVar6 = FUN_0532ad2c();
      fVar10 = ABS(fStack000000000000004c);
      if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0494995c(fStack000000000000004c,fVar9,*(long *)(unaff_x19 + 0x58),lVar8,
                   *(undefined8 *)puVar4);
      bVar1 = 0;
      if (*(char *)(unaff_x19 + 0x61) != '\0') {
        bVar1 = bVar6 & fVar10 <= fVar9;
      }
      *(byte *)(unaff_x19 + 0x61) = bVar1;
    }
    FUN_04aff1ac(&stack0x00000020,*(undefined8 *)OVR_OpenVR_EVRCompositorTimingMode_TypeInfo);
    lVar8 = *(long *)(unaff_x19 + 0x50);
    if (lVar8 != 0) {
      fVar9 = (float)(**(code **)(lVar8 + 0x18))
                               (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      cVar3 = *(char *)(unaff_x19 + 0x61);
      if (cVar2 == cVar3) {
        fVar10 = *(float *)(unaff_x19 + 100);
      }
      else {
        *(float *)(unaff_x19 + 100) = fVar9;
        fVar10 = fVar9;
      }
      if (*(float *)(unaff_x19 + 0x48) <= fVar9 - fVar10) {
        *(char *)(unaff_x19 + 0x60) = cVar3;
      }
      else {
        cVar3 = *(char *)(unaff_x19 + 0x60);
      }
      return cVar3 != '\0';
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


