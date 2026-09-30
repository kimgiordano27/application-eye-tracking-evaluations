/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreLoadSceneFromJsonDelegate$$BeginInvoke
ENTRY_POINT: 07715044
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate__BeginInvoke
               (ulong param_1,float param_2,undefined8 param_3,undefined8 param_4,float param_5,
               float param_6)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  float fVar9;
  ulong uVar8;
  undefined8 unaff_d8;
  float unaff_s9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  
  while( true ) {
    fVar7 = (float)param_3 - (float)param_4;
    fVar4 = (float)((ulong)param_3 >> 0x20);
    fVar3 = (float)((ulong)param_4 >> 0x20);
    fVar9 = fVar4 - fVar3;
    uVar8 = CONCAT44(fVar9,fVar7);
    fVar2 = (float)param_4 + (float)param_3;
    fVar3 = fVar3 + fVar4;
    fVar4 = (param_5 + param_6) - param_6;
    fVar5 = (float)(param_1 >> 0x20);
    param_6 = param_6 + param_5 + param_6;
    uVar8 = uVar8 ^ (uVar8 ^ param_1) &
                    ~CONCAT44(-(uint)(fVar9 < fVar5),-(uint)(fVar7 < (float)param_1));
    param_1 = param_1 ^ (param_1 ^ CONCAT44(fVar3,fVar2)) &
                        CONCAT44(-(uint)(fVar5 < fVar3),-(uint)((float)param_1 < fVar2));
    if (param_2 <= fVar4) {
      fVar4 = param_2;
    }
    fVar5 = (float)uVar8;
    fStack0000000000000024 = (float)(uVar8 >> 0x20);
    if (param_6 <= param_2) {
      param_6 = param_2;
    }
    fStack000000000000002c = ((float)param_1 - fVar5) * (float)unaff_d8;
    fVar2 = (float)((ulong)unaff_d8 >> 0x20);
    fVar3 = ((float)(param_1 >> 0x20) - fStack0000000000000024) * fVar2;
    unaff_w21 = unaff_w21 + 1;
    fStack0000000000000034 = (param_6 - fVar4) * unaff_s9;
    fVar5 = fVar5 + fStack000000000000002c;
    fStack0000000000000024 = fStack0000000000000024 + fVar3;
    if (*(int *)(unaff_x20 + 0x18) <= unaff_w21) break;
    uVar1 = FUN_05badb74();
    uVar8 = FUN_0775fc9c(uVar1,&stack0x00000038,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f30a70,0);
      return;
    }
    param_5 = (fVar4 + fStack0000000000000034) - fStack0000000000000034;
    fVar10 = (float)in_stack_00000038 - (float)uStack0000000000000044;
    fVar7 = (float)((ulong)in_stack_00000038 >> 0x20);
    fVar11 = fVar7 - SUB84(uStack0000000000000044,4);
    fVar12 = (float)uStack0000000000000040 - (float)uStack000000000000004c;
    fVar9 = fVar5 - fStack000000000000002c;
    fStack000000000000002c = fStack000000000000002c + fVar5;
    fStack0000000000000034 = fStack0000000000000034 + fVar4 + fStack0000000000000034;
    param_1 = CONCAT44(fVar7 + SUB84(uStack0000000000000044,4),
                       (float)in_stack_00000038 + (float)uStack0000000000000044);
    param_2 = (float)uStack0000000000000040 + (float)uStack000000000000004c;
    uVar8 = CONCAT44(fVar11,fVar10) ^
            (CONCAT44(fVar11,fVar10) ^ CONCAT44(fStack0000000000000024 - fVar3,fVar9)) &
            CONCAT44(-(uint)(fStack0000000000000024 - fVar3 < fVar11),-(uint)(fVar9 < fVar10));
    if (fVar12 <= param_5) {
      param_5 = fVar12;
    }
    uVar6 = CONCAT44(fVar11,fVar10) ^
            (CONCAT44(fVar11,fVar10) ^
            CONCAT44(fVar3 + fStack0000000000000024,fStack000000000000002c)) &
            CONCAT44(-(uint)(fVar11 < fVar3 + fStack0000000000000024),
                     -(uint)(fVar10 < fStack000000000000002c));
    if (fStack0000000000000034 <= fVar12) {
      fStack0000000000000034 = fVar12;
    }
    fVar4 = (float)uVar8;
    fVar5 = (float)(uVar8 >> 0x20);
    fVar3 = ((float)uVar6 - fVar4) * (float)unaff_d8;
    fVar2 = ((float)(uVar6 >> 0x20) - fVar5) * fVar2;
    param_4 = CONCAT44(fVar2,fVar3);
    param_6 = (fStack0000000000000034 - param_5) * unaff_s9;
    param_3 = CONCAT44(fVar5 + fVar2,fVar4 + fVar3);
  }
  if (unaff_x19 != 0) {
    FUN_094d96a4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


