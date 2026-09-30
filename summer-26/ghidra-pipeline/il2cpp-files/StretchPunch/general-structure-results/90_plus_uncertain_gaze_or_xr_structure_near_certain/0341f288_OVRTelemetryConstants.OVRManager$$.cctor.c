/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 0341f288
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 OVRTelemetryConstants_OVRManager___cctor(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  byte bVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  byte unaff_w24;
  int iVar6;
  int unaff_w25;
  
  do {
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    bVar2 = *(byte *)(param_1 + (param_3 & 0xff) + 0x20);
    if ((char)bVar2 < '\0') {
      bVar5 = unaff_w24;
      if ((int)param_3 != 0x2d) goto LAB_0341f2a0;
      bVar5 = 0;
      iVar6 = -1;
      if ((unaff_w24 & 1) != 0) {
        uVar4 = FUN_032a2174();
        iVar6 = -1;
        bVar5 = 1;
        if ((uVar4 & 1) == 0) {
          bVar5 = 1;
          if (unaff_x20 != 0) {
LAB_0341f360:
            if (unaff_x19 != 0) {
              if (*(char *)(unaff_x19 + 0x28) == '\0') {
                bVar5 = bVar5 & 1;
                *(uint *)(unaff_x19 + 0x30) = unaff_w23;
                *(int *)(unaff_x19 + 0x34) = iVar6;
              }
              else {
                bVar5 = 0;
                *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffff00000000;
              }
              *(byte *)(unaff_x19 + 0x38) = bVar5;
              uVar3 = FUN_032a21c0();
              *(undefined4 *)(unaff_x19 + 0x2c) = uVar3;
            }
          }
LAB_0341f398:
          return *(undefined4 *)(unaff_x21 + 0x28);
        }
      }
    }
    else {
      iVar6 = unaff_w25 + 6;
      bVar5 = 0;
      unaff_w23 = (uint)bVar2 | unaff_w23 << 6;
      if (0xf < iVar6) {
        iVar6 = unaff_w25 + -10;
        bVar5 = 0;
        goto LAB_0341f2f8;
      }
    }
    while( true ) {
      while( true ) {
        uVar4 = FUN_032a218c();
        if ((uVar4 & 1) == 0) goto joined_r0x0341f35c;
        bVar2 = FUN_032a219c();
        uVar1 = (uint)(char)bVar2;
        param_3 = (ulong)uVar1;
        if (-1 < iVar6) break;
        if (uVar1 == 0x2b) {
          iVar6 = 0;
          bVar5 = 1;
        }
        else {
          if ((int)uVar1 < 0) {
            uVar4 = FUN_032a21d0();
            goto joined_r0x0341f2b0;
          }
LAB_0341f2f8:
          uVar4 = FUN_032a2174();
          if ((uVar4 & 1) == 0) {
            if (-1 < iVar6) {
              FUN_032a217c();
              iVar6 = iVar6 + 0x10;
            }
            goto joined_r0x0341f35c;
          }
        }
      }
      if (-1 < (int)uVar1) break;
LAB_0341f2a0:
      uVar4 = FUN_032a21d0();
      iVar6 = -1;
joined_r0x0341f2b0:
      if ((uVar4 & 1) == 0) {
joined_r0x0341f35c:
        if (unaff_x20 == 0) goto LAB_0341f398;
        goto LAB_0341f360;
      }
    }
    param_1 = *(long *)(unaff_x22 + 0x40);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    in_CY = (uint)bVar2 <= *(uint *)(param_1 + 0x18);
    in_ZR = *(uint *)(param_1 + 0x18) == (uint)bVar2;
    unaff_w25 = iVar6;
    unaff_w24 = bVar5;
  } while( true );
}


