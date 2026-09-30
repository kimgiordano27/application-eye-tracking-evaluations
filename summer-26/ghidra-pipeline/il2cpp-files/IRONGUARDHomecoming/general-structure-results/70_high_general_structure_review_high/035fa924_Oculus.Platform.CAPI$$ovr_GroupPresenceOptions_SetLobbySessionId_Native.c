/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_GroupPresenceOptions_SetLobbySessionId_Native
ENTRY_POINT: 035fa924
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetLobbySessionId_Native(void)

{
  bool in_ZR;
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack000000000000000c;
  
  if (in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x44) = 1;
  }
  if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x30) != 0)) {
    FUN_04034464(0,*(long *)(unaff_x20 + 0x30),0);
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      FUN_04034704(*(long *)(unaff_x20 + 0x30),0);
      uVar2 = FUN_04078370(0);
      *(undefined4 *)(unaff_x19 + 0x48) = uVar2;
      *(undefined4 *)(unaff_x19 + 0x4c) = 0;
      if (*(float *)(unaff_x19 + 0x38) <= 0.0) {
        if (*(int *)(unaff_x19 + 0x24) == 1) {
          if (unaff_x20 == 0) goto LAB_035faa40;
          FUN_035f590c();
        }
        else if (unaff_x20 == 0) goto LAB_035faa40;
        uVar1 = 0;
        *(undefined4 *)(unaff_x20 + 0x28) = 0;
      }
      else {
        fVar3 = (float)FUN_04078370(0);
        fVar3 = fVar3 - *(float *)(unaff_x19 + 0x48);
        *(float *)(unaff_x19 + 0x4c) = fVar3;
        if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x30) == 0)) goto LAB_035faa40;
        fVar3 = fVar3 / *(float *)(unaff_x19 + 0x38);
        fVar4 = fVar3;
        if (1.0 < fVar3) {
          fVar4 = 1.0;
        }
        if (fVar3 < 0.0) {
          fVar4 = 0.0;
        }
        FUN_04034464(*(float *)(unaff_x19 + 0x3c) +
                     fVar4 * (*(float *)(unaff_x19 + 0x40) - *(float *)(unaff_x19 + 0x3c)),
                     *(long *)(unaff_x20 + 0x30),0);
        uStack000000000000000c = 0;
        uVar1 = thunk_FUN_01f113fc(*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                   ,&stack0x0000000c);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x18),uVar1);
        *(undefined4 *)(unaff_x19 + 0x10) = 2;
        uVar1 = 1;
      }
      return uVar1;
    }
  }
LAB_035faa40:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


