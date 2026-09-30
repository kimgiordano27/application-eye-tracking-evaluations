/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 020f9d5c
PROGRAM: vrfs-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long Meta_XR_MetaXREyeTrackedFoveationFeature__set_eyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 unaff_w19;
  long unaff_x21;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float unaff_s11;
  float unaff_s14;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined4 in_stack_00000018;
  
  puVar1 = PTR_DAT_06e2dd30;
  uVar6 = FUN_04f1b0c8();
  FUN_04f13b8c(unaff_s11 * unaff_s14,uVar6,param_2,param_3,0);
  uVar7 = FUN_04f13694(0);
  lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_06e5cae8;
  if (lVar2 != 0) {
    FUN_04481abc(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = unaff_w19;
    lVar3 = FUN_0160edfc(*(undefined8 *)puVar1,1);
    fVar4 = (float)FUN_04f13a40(uVar7,uVar6,param_2,param_3,0);
    fVar10 = *(float *)(unaff_x21 + 0xbbc);
    uVar8 = (ulong)(uint)((float)uVar6 * fVar10);
    uVar9 = (ulong)(uint)((float)param_2 * fVar10);
    uVar6 = FUN_04f14190(fVar4 * fVar10,uVar8,uVar9,0);
    fVar10 = (float)FUN_04f13f58(in_stack_00000008._4_4_,fStack0000000000000010,
                                 fStack0000000000000014,in_stack_00000018,uVar6,uVar8,uVar9,0);
    fStack0000000000000010 = fStack0000000000000010 * DAT_0533fbb0;
    fStack0000000000000014 = fStack0000000000000014 * DAT_0533fbb0;
    fVar4 = DAT_0533fbb0;
    uVar5 = FUN_04f139a8(fVar10 * DAT_0533fbb0,0);
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


