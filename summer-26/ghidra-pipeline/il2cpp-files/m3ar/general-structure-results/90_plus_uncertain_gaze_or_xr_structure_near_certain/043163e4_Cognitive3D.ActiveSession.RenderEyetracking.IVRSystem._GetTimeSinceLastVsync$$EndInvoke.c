/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetTimeSinceLastVsync$$EndInvoke
ENTRY_POINT: 043163e4
PROGRAM: m3ar-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetTimeSinceLastVsync__EndInvoke
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_04347f7c();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_04348444(*(long *)(unaff_x19 + 0x50),1);
    if (DAT_0953a09d == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_0953a09d = '\x01';
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      plVar6 = *(long **)(unaff_x19 + 0x70);
      lVar3 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fVar8 = *(float *)(lVar3 + 0x54);
      fVar9 = *(float *)(lVar3 + 0x58);
      fVar10 = *(float *)(lVar3 + 0x5c);
      lVar3 = FUN_082fb6e4(*(long *)(unaff_x19 + 0x28),0);
      if (lVar3 != 0) {
        fVar7 = (float)FUN_08598884(lVar3,0);
        uVar1 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f66370);
        FUN_07449f28();
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          fVar8 = fVar8 * DAT_01a2eba8;
          fVar9 = fVar9 * DAT_01a2eba8;
          fVar10 = fVar10 * DAT_01a2eba8;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f68948) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xf) * 0x10 + 0x138);
                goto LAB_043165c8;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f68948,0xf);
LAB_043165c8:
                    /* WARNING: Could not recover jumptable at 0x04316600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar2)((float)(int)((ulong)unaff_x20 >> 0x20),fVar8 + fVar7,fVar9 + param_2,
                             fVar10 + param_3,plVar6,1,uVar1,puVar2[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


