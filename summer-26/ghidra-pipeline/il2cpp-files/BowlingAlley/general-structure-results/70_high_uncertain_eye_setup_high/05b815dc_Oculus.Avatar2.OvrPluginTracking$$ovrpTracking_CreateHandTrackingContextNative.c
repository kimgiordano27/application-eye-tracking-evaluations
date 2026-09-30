/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateHandTrackingContextNative
ENTRY_POINT: 05b815dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateHandTrackingContextNative
               (float param_1,float param_2)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  ulong unaff_d13;
  ulong unaff_d14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  
  fStack000000000000000c = param_1 * -0.5;
  fStack0000000000000008 = param_1 + fStack000000000000000c;
  lVar2 = 0;
  uVar3 = 1;
  while( true ) {
    lVar1 = *unaff_x21;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar1 = *unaff_x21;
    }
    if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_05b81768;
    if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)uVar3) break;
    uVar7 = (ulong)(uint)((float)unaff_d14 + unaff_s11 * unaff_s8);
    uVar8 = 0;
    uVar6 = FUN_06bdb610((float)unaff_d13 + unaff_s10 * unaff_s15,uVar7,0,&stack0x00000120,0);
    lVar1 = FUN_06be6b04();
    if (lVar1 == 0) goto LAB_05b81768;
    fVar4 = (float)FUN_06bf6070(uVar6,uVar7,uVar8,lVar1,0);
    if (((((float)uVar7 < param_2 + param_2 * -0.5) && (param_2 * -0.5 <= (float)uVar7)) &&
        (fStack000000000000000c <= fVar4)) && (fVar4 < fStack0000000000000008)) break;
    lVar1 = *unaff_x21;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar1 = *unaff_x21;
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
    if (lVar1 == 0) goto LAB_05b81768;
    if (*(uint *)(lVar1 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    unaff_s15 = *(float *)(lVar1 + lVar2 + 0x28);
    unaff_s8 = *(float *)(lVar1 + lVar2 + 0x2c);
    fVar4 = fStack00000000000001a8;
    fVar5 = (float)FUN_05b81800(uStack000000000000001c,fStack00000000000001a8,uStack00000000000001ac
                                ,unaff_s15,unaff_s8);
    unaff_d13 = (ulong)(uint)(fStack0000000000000018 + unaff_s15 * (unaff_s10 + fVar5));
    uVar3 = uVar3 + 1;
    lVar2 = lVar2 + 8;
    unaff_d14 = (ulong)(uint)(in_stack_00000010._4_4_ + unaff_s8 * (unaff_s11 + fVar4));
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_05b8c78c(unaff_d13,unaff_d14,0,*(long *)(unaff_x19 + 0x20),0);
    return;
  }
LAB_05b81768:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


