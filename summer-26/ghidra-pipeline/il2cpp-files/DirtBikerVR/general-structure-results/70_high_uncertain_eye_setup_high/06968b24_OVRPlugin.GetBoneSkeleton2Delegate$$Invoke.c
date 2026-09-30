/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$Invoke
ENTRY_POINT: 06968b24
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton2Delegate__Invoke(float param_1,float param_2,float param_3)

{
  char cVar1;
  long lVar2;
  int in_w8;
  float *pfVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float in_s6;
  float in_s7;
  float unaff_s8;
  float fVar6;
  float fVar7;
  float in_stack_00000000;
  float in_stack_00000010;
  
  if ((in_w8 == 0) && (*(char *)(unaff_x19 + 0x111) == '\0')) {
    in_stack_00000000 = *(float *)(unaff_x19 + 0x9c);
    in_stack_00000010 = *(float *)(unaff_x19 + 0xa0);
    fVar4 = *(float *)(unaff_x19 + 0xa4);
  }
  else {
    if ((*(long *)(unaff_x19 + 0x108) == 0) ||
       ((lVar2 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x80), lVar2 == 0 ||
        (lVar2 = FUN_07c98f88(lVar2,0), lVar2 == 0)))) goto LAB_06968ce4;
    fVar4 = (float)FUN_07cac924(lVar2,0);
    *(undefined8 *)(unaff_x19 + 0xc0) = 0;
    *(undefined8 *)(unaff_x19 + 200) = 0;
    fVar6 = DAT_015c5c68;
    *(undefined4 *)(unaff_x19 + 0xd0) = 0;
    in_stack_00000000 = in_stack_00000000 - fVar4 * fVar6;
    fVar4 = unaff_s8 - param_3 * fVar6;
    in_s6 = *(float *)(unaff_x19 + 0x58);
    unaff_s8 = *(float *)(unaff_x19 + 0x5c);
    in_stack_00000010 = in_stack_00000010 - param_2 * fVar6;
    param_1 = *(float *)(unaff_x19 + 0x48);
    param_2 = *(float *)(unaff_x19 + 0x4c);
    param_3 = *(float *)(unaff_x19 + 0x50);
    in_s7 = *(float *)(unaff_x19 + 0x54);
    *(float *)(unaff_x19 + 0xa4) = fVar4;
    *(float *)(unaff_x19 + 0x9c) = in_stack_00000000;
    *(float *)(unaff_x19 + 0xa0) = in_stack_00000010;
  }
  cVar1 = DAT_08974d8c;
  in_s6 = in_s6 - in_stack_00000010;
  fVar4 = unaff_s8 - fVar4;
  in_s7 = in_s7 - in_stack_00000000;
  *(float *)(unaff_x19 + 0x68) = fVar4;
  *(float *)(unaff_x19 + 0x60) = in_s7;
  *(float *)(unaff_x19 + 100) = in_s6;
  if (cVar1 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974d8c = '\x01';
  }
  fVar6 = in_s6 * param_3 - fVar4 * param_2;
  fVar7 = fVar4 * param_1 - in_s7 * param_3;
  fVar4 = in_s7 * param_2 - in_s6 * param_1;
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar5 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7);
  if (fVar5 <= DAT_015c5ce0) {
    if (DAT_08974d8f == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d8f = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
    fVar6 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  else {
    fVar6 = fVar6 / fVar5;
    fVar7 = fVar7 / fVar5;
    fVar4 = fVar4 / fVar5;
  }
  *(float *)(unaff_x19 + 0x6c) = fVar6;
  *(float *)(unaff_x19 + 0x70) = fVar7;
  *(float *)(unaff_x19 + 0x74) = fVar4;
  *(undefined4 *)(unaff_x19 + 0x88) = *(undefined4 *)(unaff_x19 + 0x78);
  FUN_06968e24();
  if (*(long *)(unaff_x19 + 0x160) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) <= *(int *)(unaff_x19 + 0x148) + 2) {
      FUN_0696829c();
    }
    *(undefined2 *)(unaff_x19 + 0x110) = 0;
    *(undefined1 *)(unaff_x19 + 0x112) = 0;
    return;
  }
LAB_06968ce4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


