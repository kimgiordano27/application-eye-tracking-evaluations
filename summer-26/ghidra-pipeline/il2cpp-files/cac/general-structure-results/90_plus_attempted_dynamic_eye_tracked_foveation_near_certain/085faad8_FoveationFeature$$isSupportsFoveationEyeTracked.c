/*
FUNCTION_NAME: FoveationFeature$$isSupportsFoveationEyeTracked
ENTRY_POINT: 085faad8
PROGRAM: cac-libil2cpp.so
SCORE: 125
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__isSupportsFoveationEyeTracked
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined4 unaff_s13;
  float unaff_s14;
  undefined4 unaff_s15;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  fStack0000000000000020 = unaff_s12;
  fStack000000000000000c = (float)FUN_087e35c4(0);
  fStack000000000000000c = unaff_s11 + fStack000000000000000c;
  fStack0000000000000004 = unaff_s9 + param_3;
  fVar7 = unaff_s14;
  fStack0000000000000014 = unaff_s9;
  fVar2 = (float)FUN_087e35c4(0);
  fStack0000000000000024 = unaff_s11;
  FUN_08798a34(fStack000000000000000c,unaff_s10 + param_2,fStack0000000000000004,unaff_s11 + fVar2,
               unaff_s10 + fVar7,unaff_s9 + unaff_s12,0);
  fVar2 = fStack0000000000000020;
  fVar5 = unaff_s14;
  fVar6 = fStack0000000000000020;
  fStack000000000000000c = (float)FUN_087e35c4(0);
  fVar7 = fStack0000000000000014;
  fStack000000000000000c = unaff_s11 + fStack000000000000000c;
  fStack0000000000000004 = fStack0000000000000014 + fVar6;
  fVar4 = unaff_s14;
  fVar8 = fVar2;
  fVar3 = (float)FUN_087e35c4(0);
  fVar6 = fStack0000000000000024;
  FUN_08798a34(fStack000000000000000c,unaff_s10 + fVar5,fStack0000000000000004,
               fStack0000000000000024 + fVar3,unaff_s10 + fVar4,fVar7 + fVar8,0);
  fVar5 = unaff_s14;
  fVar4 = fVar2;
  uStack000000000000001c = unaff_s15;
  fStack000000000000000c = (float)FUN_087e35c4(0);
  fVar7 = fStack0000000000000014;
  fStack000000000000000c = fVar6 + fStack000000000000000c;
  fStack0000000000000004 = fStack0000000000000014 + fVar4;
  fVar4 = unaff_s14;
  fVar8 = fVar2;
  fVar3 = (float)FUN_087e35c4(0);
  FUN_08798a34(fStack000000000000000c,unaff_s10 + fVar5,fStack0000000000000004,fVar6 + fVar3,
               unaff_s10 + fVar4,fVar7 + fVar8,0);
  uVar1 = uStack000000000000001c;
  fVar5 = unaff_s14;
  fVar4 = fVar2;
  fStack000000000000000c =
       (float)FUN_087e35c4(uStack000000000000001c,unaff_s14,fVar2,unaff_s13,uStack000000000000007c,
                           uStack0000000000000078,uStack000000000000007c,0);
  fVar6 = fStack0000000000000024;
  fStack000000000000000c = fStack0000000000000024 + fStack000000000000000c;
  fStack0000000000000004 = fVar7 + fVar4;
  fVar4 = unaff_s14;
  fVar8 = fVar2;
  fVar3 = (float)FUN_087e35c4(uVar1,unaff_s14,fVar2,unaff_s13,in_stack_00000028._4_4_,
                              uStack0000000000000078,uStack000000000000007c,0);
  FUN_08798a34(fStack000000000000000c,unaff_s10 + fVar5,fStack0000000000000004,fVar6 + fVar3,
               unaff_s10 + fVar4,fVar7 + fVar8,0);
  uVar1 = uStack000000000000001c;
  fVar5 = unaff_s14;
  fVar4 = fVar2;
  fStack000000000000000c =
       (float)FUN_087e35c4(uStack000000000000001c,unaff_s14,fVar2,unaff_s13,in_stack_00000028._4_4_,
                           uStack0000000000000078,uStack000000000000007c,0);
  fVar6 = fStack0000000000000024;
  fStack000000000000000c = fStack0000000000000024 + fStack000000000000000c;
  fStack0000000000000004 = fVar7 + fVar4;
  fVar4 = unaff_s14;
  fVar8 = fVar2;
  fVar3 = (float)FUN_087e35c4(uVar1,unaff_s14,fVar2,unaff_s13,in_stack_00000028._4_4_,
                              uStack0000000000000078,in_stack_00000028._4_4_,0);
  FUN_08798a34(fStack000000000000000c,unaff_s10 + fVar5,fStack0000000000000004,fVar6 + fVar3,
               unaff_s10 + fVar4,fVar7 + fVar8,0);
  fVar6 = unaff_s14;
  fVar5 = fVar2;
  fStack000000000000000c =
       (float)FUN_087e35c4(uVar1,unaff_s14,fVar2,unaff_s13,in_stack_00000028._4_4_,
                           uStack0000000000000078,in_stack_00000028._4_4_,0);
  fStack000000000000000c = fStack0000000000000024 + fStack000000000000000c;
  fStack0000000000000004 = fVar7 + fVar5;
  fVar5 = unaff_s14;
  fVar4 = (float)FUN_087e35c4(uVar1,unaff_s14,fVar2,unaff_s13,uStack000000000000007c,
                              uStack0000000000000078,in_stack_00000028._4_4_,0);
  FUN_08798a34(fStack000000000000000c,unaff_s10 + fVar6,fStack0000000000000004,
               fStack0000000000000024 + fVar4,unaff_s10 + fVar5,fVar7 + fVar2,0);
  fVar2 = unaff_s14;
  fVar6 = fStack0000000000000020;
  fStack000000000000000c =
       (float)FUN_087e35c4(uStack000000000000001c,unaff_s14,fStack0000000000000020,unaff_s13,
                           uStack000000000000007c,uStack0000000000000078,in_stack_00000028._4_4_,0);
  fVar7 = fStack0000000000000020;
  fStack000000000000000c = fStack0000000000000024 + fStack000000000000000c;
  fStack0000000000000004 = fStack0000000000000014 + fVar6;
  fVar6 = unaff_s14;
  fVar5 = fStack0000000000000020;
  fVar4 = (float)FUN_087e35c4(uStack000000000000001c,unaff_s14,fStack0000000000000020,unaff_s13,
                              uStack000000000000007c,0,in_stack_00000028._4_4_,0);
  FUN_08798a34(fStack000000000000000c,unaff_s10 + fVar2,fStack0000000000000004,
               fStack0000000000000024 + fVar4,unaff_s10 + fVar6,fStack0000000000000014 + fVar5,0);
  fVar2 = unaff_s14;
  fVar6 = fVar7;
  fStack000000000000000c =
       (float)FUN_087e35c4(uStack000000000000001c,unaff_s14,fVar7,unaff_s13,uStack000000000000007c,
                           uStack0000000000000078,uStack000000000000007c,0);
  fStack000000000000000c = fStack0000000000000024 + fStack000000000000000c;
  fStack0000000000000004 = fStack0000000000000014 + fVar6;
  fVar6 = unaff_s14;
  fVar5 = (float)FUN_087e35c4(uStack000000000000001c,unaff_s14,fVar7,unaff_s13,
                              uStack000000000000007c,0,uStack000000000000007c,0);
  FUN_08798a34(fStack000000000000000c,unaff_s10 + fVar2,fStack0000000000000004,
               fStack0000000000000024 + fVar5,unaff_s10 + fVar6,fStack0000000000000014 + fVar7,0);
  fVar7 = unaff_s14;
  fVar2 = fStack0000000000000020;
  fStack000000000000000c =
       (float)FUN_087e35c4(uStack000000000000001c,unaff_s14,fStack0000000000000020,unaff_s13,
                           in_stack_00000028._4_4_,uStack0000000000000078,uStack000000000000007c,0);
  fStack000000000000000c = fStack0000000000000024 + fStack000000000000000c;
  fStack0000000000000004 = fStack0000000000000014 + fVar2;
  fVar2 = unaff_s14;
  fVar6 = fStack0000000000000020;
  fVar5 = (float)FUN_087e35c4(uStack000000000000001c,unaff_s14,fStack0000000000000020,unaff_s13,
                              in_stack_00000028._4_4_,0,uStack000000000000007c,0);
  FUN_08798a34(fStack000000000000000c,unaff_s10 + fVar7,fStack0000000000000004,
               fStack0000000000000024 + fVar5,unaff_s10 + fVar2,fStack0000000000000014 + fVar6,0);
  fVar7 = unaff_s14;
  fVar2 = fStack0000000000000020;
  fVar6 = (float)FUN_087e35c4(uStack000000000000001c,unaff_s14,fStack0000000000000020,unaff_s13,
                              in_stack_00000028._4_4_,uStack0000000000000078,in_stack_00000028._4_4_
                              ,0);
  fStack000000000000000c = fStack0000000000000014 + fVar2;
  fVar2 = (float)FUN_087e35c4(uStack000000000000001c,unaff_s14,fStack0000000000000020,unaff_s13,
                              in_stack_00000028._4_4_,0,in_stack_00000028._4_4_,0);
  FUN_08798a34(fStack0000000000000024 + fVar6,unaff_s10 + fVar7,fStack000000000000000c,
               fStack0000000000000024 + fVar2,unaff_s10 + unaff_s14,
               fStack0000000000000014 + fStack0000000000000020,0);
  return;
}


