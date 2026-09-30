/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateHandTrackingContext
ENTRY_POINT: 05b81524
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateHandTrackingContext(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  undefined8 uVar10;
  float unaff_s8;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  
  fVar6 = (float)FUN_06bf4e88(param_1,0);
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar1 = *unaff_x21;
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
LAB_05b8176c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    fVar15 = *(float *)(lVar1 + 0x20);
    fVar11 = *(float *)(lVar1 + 0x24);
    fVar12 = unaff_s8 * fVar6 * 0.5;
    fVar13 = unaff_s13 * fVar6 * 0.5;
    fVar6 = fStack00000000000001a8;
    fVar7 = (float)FUN_05b81800(uStack000000000000001c,fStack00000000000001a8,uStack00000000000001ac
                                ,fVar15,fVar11);
    fVar7 = fStack0000000000000018 + fVar15 * (fVar12 + fVar7);
    fVar6 = fVar11 * (fVar13 + fVar6);
    fVar14 = in_stack_00000010._4_4_ + fVar6;
    if (*(char *)(unaff_x19 + 0x44) == '\0') {
LAB_05b81724:
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_05b8c78c(fVar7,fVar14,0,*(long *)(unaff_x19 + 0x20),0);
        return;
      }
    }
    else if ((*(long *)(unaff_x19 + 0x20) != 0) &&
            (lVar1 = FUN_05b8ab68(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)) {
      uVar2 = FUN_05b8a5b0(lVar1,0);
      fVar8 = (float)FUN_05b8a6a0(uVar2,0);
      lVar4 = 0;
      uVar5 = 1;
      while( true ) {
        lVar3 = *unaff_x21;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar3 = *unaff_x21;
        }
        if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_05b81768;
        if ((long)*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) <= (long)uVar5) goto LAB_05b81724;
        uVar9 = (ulong)(uint)(fVar14 + fVar13 * fVar11);
        uVar10 = 0;
        uVar2 = FUN_06bdb610(fVar7 + fVar12 * fVar15,uVar9,0,&stack0x00000120,0);
        lVar3 = FUN_06be6b04(lVar1,0);
        if (lVar3 == 0) goto LAB_05b81768;
        fVar11 = (float)FUN_06bf6070(uVar2,uVar9,uVar10,lVar3,0);
        if (((((float)uVar9 < fVar6 + fVar6 * -0.5) && (fVar6 * -0.5 <= (float)uVar9)) &&
            (fVar8 * -0.5 <= fVar11)) && (fVar11 < fVar8 + fVar8 * -0.5)) goto LAB_05b81724;
        lVar3 = *unaff_x21;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar3 = *unaff_x21;
        }
        lVar3 = **(long **)(lVar3 + 0xb8);
        if (lVar3 == 0) goto LAB_05b81768;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) break;
        fVar15 = *(float *)(lVar3 + lVar4 + 0x28);
        fVar11 = *(float *)(lVar3 + lVar4 + 0x2c);
        fVar14 = fStack00000000000001a8;
        fVar7 = (float)FUN_05b81800(uStack000000000000001c,fStack00000000000001a8,
                                    uStack00000000000001ac,fVar15,fVar11);
        fVar7 = fStack0000000000000018 + fVar15 * (fVar12 + fVar7);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 8;
        fVar14 = in_stack_00000010._4_4_ + fVar11 * (fVar13 + fVar14);
      }
      goto LAB_05b8176c;
    }
  }
LAB_05b81768:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


