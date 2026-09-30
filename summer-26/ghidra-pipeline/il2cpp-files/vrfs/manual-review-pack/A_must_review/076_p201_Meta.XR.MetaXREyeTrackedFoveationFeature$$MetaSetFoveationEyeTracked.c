/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaSetFoveationEyeTracked
ENTRY_POINT: 020f9dac
PROGRAM: vrfs-libil2cpp.so
SCORE: 141
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long Meta_XR_MetaXREyeTrackedFoveationFeature__MetaSetFoveationEyeTracked(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 unaff_w19;
  long unaff_x21;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined4 in_stack_00000018;
  
  lVar2 = thunk_FUN_015d056c();
  puVar1 = PTR_DAT_06e5cae8;
  if (lVar2 != 0) {
    FUN_04481abc(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = unaff_w19;
    lVar3 = FUN_0160edfc(*(undefined8 *)puVar1,1);
    fVar4 = (float)FUN_04f13a40(0);
    fVar9 = *(float *)(unaff_x21 + 0xbbc);
    uVar7 = (ulong)(uint)(unaff_s13 * fVar9);
    uVar8 = (ulong)(uint)(unaff_s14 * fVar9);
    uVar6 = FUN_04f14190(fVar4 * fVar9,uVar7,uVar8,0);
    fVar9 = (float)FUN_04f13f58(in_stack_00000008._4_4_,fStack0000000000000010,
                                fStack0000000000000014,in_stack_00000018,uVar6,uVar7,uVar8,0);
    fStack0000000000000010 = fStack0000000000000010 * DAT_0533fbb0;
    fStack0000000000000014 = fStack0000000000000014 * DAT_0533fbb0;
    fVar4 = DAT_0533fbb0;
    uVar5 = FUN_04f139a8(fVar9 * DAT_0533fbb0,0);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined4 *)(lVar3 + 0x20) = uVar5;
        *(float *)(lVar3 + 0x24) = fStack0000000000000010;
        *(float *)(lVar3 + 0x28) = fStack0000000000000014;
        *(float *)(lVar3 + 0x2c) = fVar4;
        *(long *)(lVar2 + 0x30) = lVar3;
        thunk_FUN_01656ef8((long *)(lVar2 + 0x30),lVar3);
        return lVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


