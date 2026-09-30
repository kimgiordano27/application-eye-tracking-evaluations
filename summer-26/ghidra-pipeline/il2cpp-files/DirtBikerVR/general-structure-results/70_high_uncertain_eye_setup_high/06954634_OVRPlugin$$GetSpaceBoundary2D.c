/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 06954634
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceBoundary2D(long param_1,float param_2,float param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 / param_3 <= 1.0) {
    if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      FUN_07d30cc0(*(long *)(param_1 + 0x20),10,0);
      if (*(long *)(unaff_x21 + 0x10) != 0) {
        lVar1 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x20);
        FUN_07c8ac48(*(undefined4 *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x34),
                     *(undefined4 *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x3c),
                     *(undefined4 *)(unaff_x19 + 0x40),*(undefined4 *)(unaff_x19 + 0x44),
                     *(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c),0);
        if (lVar1 != 0) {
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
      }
    }
  }
  else if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_07d30cc0(*(long *)(param_1 + 0x20),*(undefined4 *)(unaff_x19 + 0x2c),0);
    *(undefined1 *)(unaff_x21 + 0x44) = 0;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
    if ((unaff_x21 != 0) &&
       ((*(long *)(unaff_x21 + 0x10) != 0 &&
        (lVar1 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x20), lVar1 != 0)))) {
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


