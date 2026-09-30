/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 06021344
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin__StopColocationSessionAdvertisement(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  uint unaff_w23;
  int unaff_w26;
  int iVar9;
  
code_r0x06021344:
  unaff_w23 = unaff_w23 | param_1;
switchD_060212ac_default:
  do {
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 5) goto LAB_060213f8;
    iVar9 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    iVar4 = unaff_x20[4];
    if (*(int *)(*(long *)PTR_DAT_075f2f78 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    switch(unaff_w21) {
    case 0:
      break;
    case 1:
      iVar9 = iVar2;
      break;
    case 2:
      iVar9 = iVar1;
      break;
    case 3:
      iVar9 = iVar3;
      break;
    case 4:
      iVar9 = iVar4;
      break;
    default:
      goto switchD_060211f4_default;
    }
    if (iVar9 == 2) break;
switchD_060211f4_default:
    if (unaff_w26 != 0) {
      iVar9 = *unaff_x20;
      iVar2 = unaff_x20[1];
      iVar1 = unaff_x20[2];
      iVar3 = unaff_x20[3];
      iVar4 = unaff_x20[4];
      if (*(int *)(*(long *)PTR_DAT_075f2f78 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      switch(unaff_w21) {
      case 0:
        break;
      case 1:
        iVar9 = iVar2;
        break;
      case 2:
        iVar9 = iVar1;
        break;
      case 3:
        iVar9 = iVar3;
        break;
      case 4:
        iVar9 = iVar4;
        break;
      default:
        goto switchD_060212ac_default;
      }
      if (iVar9 == 1) {
        if (unaff_x19 == (long *)0x0) goto LAB_06021418;
        lVar6 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075f53a0) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_060213c4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0322c1e8();
LAB_060213c4:
        uVar7 = (*(code *)*puVar5)();
        if ((uVar7 & 1) != 0) {
          unaff_w23 = 1;
          goto LAB_060213f8;
        }
      }
    }
  } while( true );
  if (unaff_x19 == (long *)0x0) {
LAB_06021418:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075f53a0) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_060212c4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0322c1e8();
LAB_060212c4:
  uVar7 = (*(code *)*puVar5)();
  if ((uVar7 & 1) == 0) {
    unaff_w23 = 0;
LAB_060213f8:
    return unaff_w23 & 1;
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075f53a0) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_06021330;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0322c1e8();
LAB_06021330:
  param_1 = (*(code *)*puVar5)();
  goto code_r0x06021344;
}


