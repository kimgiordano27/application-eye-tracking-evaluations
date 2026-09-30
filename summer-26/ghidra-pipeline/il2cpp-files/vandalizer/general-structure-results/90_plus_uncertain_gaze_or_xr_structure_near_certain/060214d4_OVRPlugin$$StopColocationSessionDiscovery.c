/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionDiscovery
ENTRY_POINT: 060214d4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

uint OVRPlugin__StopColocationSessionDiscovery(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint in_w8;
  long lVar7;
  uint in_w9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  int *unaff_x20;
  uint uVar10;
  int iVar11;
  long *unaff_x29;
  uint uStack0000000000000004;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
  uVar10 = 0;
  uStack0000000000000004 = in_w9 & in_w8;
  uStack0000000000000008 = 0;
  uStack000000000000000c = 0;
  do {
    iVar11 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    iVar4 = unaff_x20[4];
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    switch(uVar10) {
    case 1:
      iVar1 = iVar2;
      break;
    case 2:
      break;
    case 3:
      iVar11 = iVar3;
    case 0:
      iVar1 = iVar11;
      break;
    case 4:
      iVar1 = iVar4;
      break;
    default:
      goto switchD_06021520_default;
    }
    if (iVar1 != 0) {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_075f53a0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_060215a8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_060215a8:
      uVar5 = (*(code *)*puVar6)();
      iVar11 = *unaff_x20;
      iVar2 = unaff_x20[1];
      iVar1 = unaff_x20[2];
      iVar3 = unaff_x20[3];
      iVar4 = unaff_x20[4];
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x29);
      }
      uStack000000000000000c = uStack000000000000000c | uVar5;
      switch(uVar10) {
      case 0:
        break;
      case 1:
        iVar11 = iVar2;
        break;
      case 2:
        iVar11 = iVar1;
        break;
      case 3:
        iVar11 = iVar3;
        break;
      case 4:
        iVar11 = iVar4;
        break;
      default:
        goto OVRPlugin__DiscoverSpaces;
      }
      if (iVar11 == 2) {
        lVar7 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_075f53a0) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_060216d0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_060216d0:
        uVar8 = (*(code *)*puVar6)();
        if ((uVar8 & 1) != 0) {
          iVar11 = unaff_x20[5];
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uStack0000000000000008 = 1;
          if (iVar11 == 1) goto LAB_060217ec;
        }
      }
      else {
OVRPlugin__DiscoverSpaces:
        iVar11 = *unaff_x20;
        iVar2 = unaff_x20[1];
        iVar1 = unaff_x20[2];
        iVar3 = unaff_x20[3];
        iVar4 = unaff_x20[4];
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        switch(uVar10) {
        case 0:
          break;
        case 1:
          iVar11 = iVar2;
          break;
        case 2:
          iVar11 = iVar1;
          break;
        case 3:
          iVar11 = iVar3;
          break;
        case 4:
          iVar11 = iVar4;
          break;
        default:
          goto switchD_06021520_default;
        }
        if (iVar11 == 1) {
          lVar7 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_075f53a0) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_06021788;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_06021788:
          uVar8 = (*(code *)*puVar6)();
          if ((uVar8 & 1) != 0) {
            iVar11 = unaff_x20[5];
            if (*(int *)(*unaff_x29 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uStack0000000000000008 = 1;
            if ((uStack0000000000000004 & iVar11 == 1) != 0) goto LAB_060217ec;
          }
        }
      }
    }
switchD_06021520_default:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 5);
  uStack0000000000000008 = uStack0000000000000008 & (uStack000000000000000c ^ 1);
LAB_060217ec:
  return uStack0000000000000008 & 1;
}


