/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 05ff6cc4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(void)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  float *unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  long unaff_x29;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong unaff_d9;
  float fVar11;
  undefined8 unaff_d10;
  float fVar12;
  ulong unaff_d11;
  float fVar13;
  ulong unaff_d12;
  float fStack0000000000000000;
  float fStack0000000000000004;
  
  do {
    FUN_031f20f4();
    *(undefined1 *)(unaff_x29 + 0xba6) = unaff_w28;
    do {
      lVar1 = *(long *)(*unaff_x21 + 0xb8);
      uVar4 = unaff_d11;
      uVar5 = unaff_d9;
      fVar3 = (float)FUN_06e464bc(unaff_d10,unaff_d11,unaff_d9,unaff_d12,
                                  *(undefined4 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x4c),
                                  *(undefined4 *)(lVar1 + 0x50),0);
      lVar1 = *unaff_x24;
      fVar10 = *(float *)(unaff_x19 + 0x60);
      if (*(int *)(lVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar1 = *unaff_x24;
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      pfVar2 = *(float **)(lVar1 + 0xb8);
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      unaff_x26[-7] = fVar3 * fVar10;
      unaff_x26[-6] = (float)uVar4 * fVar10;
      fVar11 = (float)unaff_d10;
      fVar13 = (float)unaff_d12;
      fVar12 = (float)unaff_d11;
      fVar3 = (float)unaff_d9;
      *unaff_x26 = fStack0000000000000000 * (float)(int)unaff_x23;
      unaff_x23 = unaff_x23 + 1;
      unaff_w22 = unaff_w22 + -1;
      unaff_x26[-5] = (float)uVar5 * fVar10;
      unaff_x26[-4] = (fVar12 * fVar8 + fVar13 * fVar6 + fVar11 * fVar9) - fVar3 * fVar7;
      unaff_x26[-3] = (fVar3 * fVar6 + fVar13 * fVar7 + fVar12 * fVar9) - fVar11 * fVar8;
      unaff_x26[-2] = (fVar11 * fVar7 + fVar13 * fVar8 + fVar3 * fVar9) - fVar12 * fVar6;
      unaff_x26[-1] = ((fVar13 * fVar9 - fVar11 * fVar6) - fVar12 * fVar7) - fVar3 * fVar8;
      unaff_x26 = unaff_x26 + 8;
      if (unaff_x25 == unaff_x23) {
        return;
      }
      if (*(char *)(unaff_x27 + 0xaf2) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x27 + 0xaf2) = unaff_w28;
      }
      lVar1 = *(long *)(*unaff_x21 + 0xb8);
      unaff_d11 = (ulong)*(uint *)(lVar1 + 0x18);
      unaff_d9 = (ulong)*(uint *)(lVar1 + 0x1c);
      unaff_d12 = (ulong)*(uint *)(lVar1 + 0x20);
      unaff_d10 = FUN_06e460f8((float)unaff_w22 - fStack0000000000000004,0);
    } while (*(char *)(unaff_x29 + 0xba6) != '\0');
  } while( true );
}


