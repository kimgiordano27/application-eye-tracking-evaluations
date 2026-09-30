/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2DCount
ENTRY_POINT: 06954548
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetSpaceBoundary2DCount
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    uVar3 = FUN_07cac824(param_4,0);
    if (*(char *)(unaff_x20 + 0xd89) == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      *(undefined1 *)(unaff_x20 + 0xd89) = 1;
    }
    uVar7 = *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    uVar3 = FUN_07c8b244(uVar3,0);
    *(undefined4 *)(unaff_x19 + 0x40) = uVar3;
    *(undefined4 *)(unaff_x19 + 0x44) = param_2;
    *(undefined4 *)(unaff_x19 + 0x48) = param_3;
    *(undefined4 *)(unaff_x19 + 0x4c) = uVar7;
    if ((*(long *)(unaff_x21 + 0x10) == 0) ||
       (lVar1 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x20), lVar1 == 0)) goto LAB_06954808;
    uVar3 = FUN_07d303b8(lVar1,0);
    lVar1 = *(long *)(unaff_x21 + 0x10);
    *(undefined4 *)(unaff_x19 + 0x50) = uVar3;
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto LAB_06954808;
    uVar3 = FUN_07d30540(lVar1,0);
    lVar1 = *(long *)(unaff_x21 + 0x10);
    *(undefined4 *)(unaff_x19 + 0x54) = uVar3;
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto LAB_06954808;
    FUN_07d3046c(0x41f00000,lVar1,0);
    if ((*(long *)(unaff_x21 + 0x10) == 0) ||
       (lVar1 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x20), lVar1 == 0)) goto LAB_06954808;
    FUN_07d305f4(0x41f00000,lVar1,0);
    if (*(float *)(unaff_x19 + 0x28) < 20.0) {
      if (unaff_x21 == 0) goto LAB_06954808;
      lVar1 = *(long *)(unaff_x21 + 0x10);
      if (*(float *)(unaff_x19 + 0x28) / *(float *)(unaff_x21 + 0x40) <= 1.0) {
        if ((lVar1 == 0) || (*(long *)(lVar1 + 0x20) == 0)) goto LAB_06954808;
        FUN_07d30cc0(*(long *)(lVar1 + 0x20),10,0);
        if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_06954808;
        lVar1 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x20);
        FUN_07c8ac48(*(undefined4 *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x34),
                     *(undefined4 *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x3c),
                     *(undefined4 *)(unaff_x19 + 0x40),*(undefined4 *)(unaff_x19 + 0x44),
                     *(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c),0);
        if (lVar1 == 0) goto LAB_06954808;
        FUN_07d31f3c(lVar1,0);
        fVar6 = *(float *)(unaff_x19 + 0x28);
        uVar3 = 1;
        *(undefined1 *)(unaff_x21 + 0x44) = 1;
        fVar5 = (float)FUN_07ca88b8(0);
        uVar2 = *(undefined8 *)PTR_DAT_084880f8;
        *(float *)(unaff_x19 + 0x28) = fVar6 + fVar5;
        uVar2 = thunk_FUN_03ac74bc(uVar2);
        FUN_07ca4ed8(uVar2,0);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar2);
        goto LAB_06954748;
      }
      if ((lVar1 == 0) || (*(long *)(lVar1 + 0x20) == 0)) goto LAB_06954808;
      FUN_07d30cc0(*(long *)(lVar1 + 0x20),*(undefined4 *)(unaff_x19 + 0x2c),0);
      *(undefined1 *)(unaff_x21 + 0x44) = 0;
    }
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
    if (((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) &&
       (lVar1 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x20), lVar1 != 0)) {
      FUN_07d3046c((*(float *)(unaff_x19 + 0x50) + -30.0) * 0.0 + 30.0,lVar1,0);
      if ((*(long *)(unaff_x21 + 0x10) != 0) &&
         (lVar1 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x20), lVar1 != 0)) {
        fVar6 = *(float *)(unaff_x19 + 0x28);
        fVar5 = 1.0;
        if (fVar6 <= 1.0) {
          fVar5 = fVar6;
        }
        fVar4 = 0.0;
        if (0.0 <= fVar6) {
          fVar4 = fVar5;
        }
        FUN_07d305f4((*(float *)(unaff_x19 + 0x54) + -30.0) * fVar4 + 30.0,lVar1,0);
        fVar6 = *(float *)(unaff_x19 + 0x28);
        fVar5 = (float)FUN_07ca88b8(0);
        uVar2 = *(undefined8 *)PTR_DAT_084880f8;
        *(float *)(unaff_x19 + 0x28) = fVar6 + fVar5;
        uVar2 = thunk_FUN_03ac74bc(uVar2);
        FUN_07ca4ed8(uVar2,0);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar2);
        uVar3 = 2;
LAB_06954748:
        *(undefined4 *)(unaff_x19 + 0x10) = uVar3;
        return 1;
      }
    }
  }
LAB_06954808:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


