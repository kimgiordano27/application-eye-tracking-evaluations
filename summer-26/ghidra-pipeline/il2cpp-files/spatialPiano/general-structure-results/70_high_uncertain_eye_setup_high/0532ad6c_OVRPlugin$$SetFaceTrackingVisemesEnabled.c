/*
FUNCTION_NAME: OVRPlugin$$SetFaceTrackingVisemesEnabled
ENTRY_POINT: 0532ad6c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetFaceTrackingVisemesEnabled(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  float *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *plVar7;
  float __x;
  float fVar8;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  
  puVar1 = System_Runtime_CompilerServices_TrueReadOnlyCollection<ParameterExpression>_TypeInfo;
  plVar7 = *(long **)(unaff_x21 + 0x28);
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  fStack000000000000002c = 0.0;
  fStack0000000000000038 = 0.0;
  fStack0000000000000030 = 0.0;
  fStack0000000000000034 = 0.0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  fStack000000000000000c = 0.0;
  fStack0000000000000018 = 0.0;
  fStack0000000000000010 = 0.0;
  fStack0000000000000014 = 0.0;
  if (plVar7 == (long *)0x0) {
LAB_0532aef4:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           System_Runtime_CompilerServices_TrueReadOnlyCollection<ParameterExpression>_TypeInfo) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_0532ade4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02f421d0(plVar7,*(long *)
                                System_Runtime_CompilerServices_TrueReadOnlyCollection<ParameterExpression>_TypeInfo
                        ,3);
LAB_0532ade4:
  uVar5 = (*(code *)*puVar2)(plVar7,unaff_w20,&stack0x00000020,puVar2[1]);
  fVar8 = 0.0;
  if ((uVar5 & 1) != 0) {
    plVar7 = *(long **)(unaff_x21 + 0x38);
    if (plVar7 == (long *)0x0) goto LAB_0532aef4;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_0532ae58;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar1,3);
LAB_0532ae58:
    uVar5 = (*(code *)*puVar2)(plVar7,unaff_w20);
    if ((uVar5 & 1) != 0) {
      __x = (float)NEON_fminnm(ABS(fStack0000000000000038 * fStack0000000000000018 +
                                   fStack0000000000000034 * fStack0000000000000014 +
                                   fStack000000000000002c * fStack000000000000000c +
                                   fStack0000000000000030 * fStack0000000000000010),0x3f800000);
      if (__x <= DAT_011b0508) {
        fVar8 = acosf(__x);
        fVar8 = (fVar8 + fVar8) * DAT_011b0124;
      }
      uVar3 = 1;
      goto LAB_0532aed8;
    }
  }
  uVar3 = 0;
LAB_0532aed8:
  *unaff_x19 = fVar8;
  return uVar3;
}


