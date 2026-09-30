/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreLoadSceneFromJsonDelegate$$Invoke
ENTRY_POINT: 0771502c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate__Invoke
               (ulong param_1,float param_2,ulong param_3,ulong param_4,float param_5,
               undefined1 param_6 [16],undefined1 param_7 [16],float param_8)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  ulong uVar9;
  undefined8 unaff_d8;
  float unaff_s9;
  float in_s17;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  
  while( true ) {
    if ((bool)in_ZR || in_NG != in_OV) {
      param_8 = in_s17;
    }
    fVar3 = (float)(param_3 >> 0x20);
    fVar4 = ((float)param_4 - (float)param_3) * (float)unaff_d8;
    fVar6 = (float)((ulong)unaff_d8 >> 0x20);
    fVar5 = ((float)(param_4 >> 0x20) - fVar3) * fVar6;
    fVar7 = (param_8 - param_5) * unaff_s9;
    fVar2 = (float)param_3 + fVar4;
    fVar3 = fVar3 + fVar5;
    fVar8 = fVar2 - fVar4;
    fVar10 = fVar3 - fVar5;
    uVar9 = CONCAT44(fVar10,fVar8);
    fVar4 = fVar4 + fVar2;
    fVar5 = fVar5 + fVar3;
    fVar2 = (param_5 + fVar7) - fVar7;
    fVar3 = (float)(param_1 >> 0x20);
    fVar7 = fVar7 + param_5 + fVar7;
    uVar9 = uVar9 ^ (uVar9 ^ param_1) &
                    ~CONCAT44(-(uint)(fVar10 < fVar3),-(uint)(fVar8 < (float)param_1));
    param_1 = param_1 ^ (param_1 ^ CONCAT44(fVar5,fVar4)) &
                        CONCAT44(-(uint)(fVar3 < fVar5),-(uint)((float)param_1 < fVar4));
    if (param_2 <= fVar2) {
      fVar2 = param_2;
    }
    fVar3 = (float)uVar9;
    fStack0000000000000024 = (float)(uVar9 >> 0x20);
    if (fVar7 <= param_2) {
      fVar7 = param_2;
    }
    fStack000000000000002c = ((float)param_1 - fVar3) * (float)unaff_d8;
    fVar6 = ((float)(param_1 >> 0x20) - fStack0000000000000024) * fVar6;
    unaff_w21 = unaff_w21 + 1;
    fStack0000000000000034 = (fVar7 - fVar2) * unaff_s9;
    fVar3 = fVar3 + fStack000000000000002c;
    fStack0000000000000024 = fStack0000000000000024 + fVar6;
    if (*(int *)(unaff_x20 + 0x18) <= unaff_w21) break;
    uVar1 = FUN_05badb74();
    uVar9 = FUN_0775fc9c(uVar1,&stack0x00000038,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f30a70,0);
      return;
    }
    param_5 = (fVar2 + fStack0000000000000034) - fStack0000000000000034;
    fVar5 = (float)in_stack_00000038 - (float)uStack0000000000000044;
    fVar7 = (float)((ulong)in_stack_00000038 >> 0x20);
    fVar8 = fVar7 - SUB84(uStack0000000000000044,4);
    in_s17 = (float)uStack0000000000000040 - (float)uStack000000000000004c;
    fVar4 = fVar3 - fStack000000000000002c;
    fStack000000000000002c = fStack000000000000002c + fVar3;
    param_8 = fStack0000000000000034 + fVar2 + fStack0000000000000034;
    param_1 = CONCAT44(fVar7 + SUB84(uStack0000000000000044,4),
                       (float)in_stack_00000038 + (float)uStack0000000000000044);
    param_2 = (float)uStack0000000000000040 + (float)uStack000000000000004c;
    param_3 = CONCAT44(fVar8,fVar5) ^
              (CONCAT44(fVar8,fVar5) ^ CONCAT44(fStack0000000000000024 - fVar6,fVar4)) &
              CONCAT44(-(uint)(fStack0000000000000024 - fVar6 < fVar8),-(uint)(fVar4 < fVar5));
    if (in_s17 <= param_5) {
      param_5 = in_s17;
    }
    in_OV = NAN(param_8) || NAN(in_s17);
    in_ZR = param_8 == in_s17;
    in_NG = param_8 < in_s17;
    param_4 = CONCAT44(fVar8,fVar5) ^
              (CONCAT44(fVar8,fVar5) ^
              CONCAT44(fVar6 + fStack0000000000000024,fStack000000000000002c)) &
              CONCAT44(-(uint)(fVar8 < fVar6 + fStack0000000000000024),
                       -(uint)(fVar5 < fStack000000000000002c));
  }
  if (unaff_x19 != 0) {
    FUN_094d96a4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


