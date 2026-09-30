/*
FUNCTION_NAME: OVRPlugin.OVRP_1_51_0$$.cctor
ENTRY_POINT: 06974d5c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_51_0___cctor(void)

{
  float fVar1;
  uint in_w8;
  long in_x9;
  long unaff_x19;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = DAT_015c5b60;
  lVar3 = 0;
  fVar7 = *(float *)(in_x9 + 0xb8c);
  while( true ) {
    if (in_w8 <= (uint)lVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    plVar2 = *(long **)(unaff_x19 + 0x20 + lVar3 * 8);
    if (plVar2 == (long *)0x0) break;
    fVar4 = (float)(**(code **)(*plVar2 + 0x3c8))(plVar2,*(undefined8 *)(*plVar2 + 0x3d0));
    fVar5 = (float)(**(code **)(*plVar2 + 0x3c8))(plVar2,*(undefined8 *)(*plVar2 + 0x3d0));
    (**(code **)(*plVar2 + 0x3d8))(fVar4 + fVar5 * fVar7,plVar2,*(undefined8 *)(*plVar2 + 0x3e0));
    fVar5 = (float)(**(code **)(*plVar2 + 0x3c8))(plVar2,*(undefined8 *)(*plVar2 + 0x3d0));
    fVar4 = fVar1;
    if (fVar5 <= fVar1) {
      fVar4 = fVar5;
    }
    fVar6 = 1000.0;
    if (1000.0 <= fVar5) {
      fVar6 = fVar4;
    }
    (**(code **)(*plVar2 + 0x3d8))(fVar6,plVar2,*(undefined8 *)(*plVar2 + 0x3e0));
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    lVar3 = lVar3 + 1;
    if ((int)in_w8 <= (int)lVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


