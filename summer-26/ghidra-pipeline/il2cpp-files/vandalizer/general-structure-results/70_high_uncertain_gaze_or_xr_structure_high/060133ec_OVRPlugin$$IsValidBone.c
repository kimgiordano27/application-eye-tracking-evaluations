/*
FUNCTION_NAME: OVRPlugin$$IsValidBone
ENTRY_POINT: 060133ec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsValidBone(undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *unaff_x23;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = FUN_06e587d8();
  if ((uVar1 & 1) == 0) {
LAB_06013458:
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar2 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x48),0), lVar2 == 0)) goto LAB_06013550;
    puVar4 = (undefined8 *)(unaff_x19 + 0x58);
  }
  else {
    if (unaff_x20 == 0) goto LAB_06013550;
    puVar4 = (undefined8 *)(unaff_x20 + 0x28);
    uVar3 = *puVar4;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar1 = FUN_06e587d8(uVar3,0,0);
    if ((uVar1 & 1) == 0) goto LAB_06013458;
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar2 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x48),0), lVar2 == 0)) goto LAB_06013550;
  }
  FUN_06e0c91c(lVar2,*puVar4,0);
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar2 = FUN_06e5502c(*(long *)(unaff_x19 + 0x48),0), unaff_x20 == 0)) goto LAB_06013550;
    fVar6 = *(float *)(unaff_x19 + 100);
    fVar7 = *(float *)(unaff_x19 + 0x68);
    fVar8 = *(float *)(unaff_x19 + 0x6c);
    fVar5 = (float)FUN_06012408();
    if (DAT_07a3f7a9 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3f7a9 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (lVar2 == 0) goto LAB_06013550;
    fVar5 = SQRT(param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2);
    FUN_06e6b2fc(fVar6 * fVar5,fVar7 * fVar5,fVar8 * fVar5,lVar2,0);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_06e03bb0(*(long *)(unaff_x19 + 0x48),1,0);
    return;
  }
LAB_06013550:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


