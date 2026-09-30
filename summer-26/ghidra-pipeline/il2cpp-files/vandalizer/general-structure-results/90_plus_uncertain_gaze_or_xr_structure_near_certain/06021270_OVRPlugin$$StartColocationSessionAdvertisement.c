/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 06021270
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


ulong OVRPlugin__StartColocationSessionAdvertisement(undefined **param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  int *unaff_x20;
  ulong unaff_x21;
  uint unaff_w23;
  int unaff_w26;
  ulong unaff_x28;
  int iVar10;
  
  do {
    if (*(int *)(*(long *)param_1[0x1ef] + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if ((uint)unaff_x21 < 5) {
                    /* WARNING: Could not recover jumptable at 0x060212ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)((ulong)(&switchD_060212ac::switchdataD_015e1029)[unaff_x28] * 4 + 0x60212b0
                        ))();
      return uVar7;
    }
switchD_060212ac_default:
    do {
      uVar5 = (int)unaff_x21 + 1;
      unaff_x21 = (ulong)uVar5;
      if (uVar5 == 5) goto LAB_060213f8;
      iVar10 = *unaff_x20;
      iVar2 = unaff_x20[1];
      iVar1 = unaff_x20[2];
      iVar3 = unaff_x20[3];
      iVar4 = unaff_x20[4];
      if (*(int *)(*(long *)PTR_DAT_075f2f78 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      switch(unaff_x21) {
      case 0:
        break;
      case 1:
        iVar10 = iVar2;
        break;
      case 2:
        iVar10 = iVar1;
        break;
      case 3:
        iVar10 = iVar3;
        break;
      case 4:
        iVar10 = iVar4;
        break;
      default:
        goto switchD_060211f4_default;
      }
      if (iVar10 == 2) {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar8 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_075f53a0) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_060212c4;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_060212c4:
        uVar7 = (*(code *)*puVar6)();
        if ((uVar7 & 1) == 0) {
          unaff_w23 = 0;
LAB_060213f8:
          return (ulong)(unaff_w23 & 1);
        }
        lVar8 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_075f53a0) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_06021330;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_06021330:
        uVar5 = (*(code *)*puVar6)();
        unaff_w23 = unaff_w23 | uVar5;
        goto switchD_060212ac_default;
      }
switchD_060211f4_default:
    } while (unaff_w26 == 0);
    param_1 = &PTR_DAT_075f2000;
    unaff_x28 = unaff_x21;
  } while( true );
}


