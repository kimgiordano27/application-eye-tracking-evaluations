/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTrackerAsync
ENTRY_POINT: 06021c8c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

float OVRPlugin__CreateDynamicObjectTrackerAsync(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int in_w8;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  ulong unaff_x20;
  int *unaff_x21;
  uint uVar9;
  long *unaff_x23;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int in_stack_00000018;
  uint uStack000000000000001c;
  
  if (in_w8 == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar9 = 0;
  fVar13 = 0.0;
  fVar12 = 1.0;
  uStack000000000000001c = 0;
  do {
    if ((unaff_x20 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_06021fa0;
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075f53a0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06021d00;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8();
LAB_06021d00:
      uVar7 = (*(code *)*puVar5)();
      if ((uVar7 & 1) == 0) goto LAB_06021d14;
    }
    else {
LAB_06021d14:
      iVar10 = *unaff_x21;
      iVar2 = unaff_x21[1];
      iVar1 = unaff_x21[2];
      iVar3 = unaff_x21[3];
      iVar4 = unaff_x21[4];
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      switch(uVar9) {
      case 1:
        iVar1 = iVar2;
        break;
      case 2:
        break;
      case 3:
        iVar10 = iVar3;
      case 0:
        iVar1 = iVar10;
        break;
      case 4:
        iVar1 = iVar4;
        break;
      default:
        goto switchD_06021d50_default;
      }
      if (iVar1 == 0) goto switchD_06021d50_default;
      iVar10 = *unaff_x21;
      iVar2 = unaff_x21[1];
      iVar1 = unaff_x21[2];
      iVar3 = unaff_x21[3];
      iVar4 = unaff_x21[4];
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      switch(uVar9) {
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
        goto switchD_06021dac_default;
      }
      if (iVar10 == 1) {
        if (unaff_x19 == (long *)0x0) {
LAB_06021fa0:
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar6 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075f53a0) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_06021e80;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0322c1e8();
LAB_06021e80:
        fVar11 = (float)(*(code *)*puVar5)();
        if (fVar13 <= fVar11) {
          fVar13 = fVar11;
        }
      }
      else {
switchD_06021dac_default:
        iVar10 = *unaff_x21;
        iVar2 = unaff_x21[1];
        iVar1 = unaff_x21[2];
        iVar3 = unaff_x21[3];
        iVar4 = unaff_x21[4];
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        switch(uVar9) {
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
          goto switchD_06021e64_default;
        }
        if (iVar10 == 2) {
          if (unaff_x19 == (long *)0x0) goto LAB_06021fa0;
          lVar6 = *unaff_x19;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075f53a0) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_06021f14;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_0322c1e8();
LAB_06021f14:
          fVar11 = (float)(*(code *)*puVar5)();
          if (fVar11 <= fVar12) {
            fVar12 = fVar11;
          }
          uStack000000000000001c = 1;
        }
      }
    }
switchD_06021d50_default:
    uVar9 = uVar9 + 1;
  } while (uVar9 != 5);
switchD_06021e64_default:
  if ((uStack000000000000001c & 1) == 0) {
    fVar12 = 0.0;
  }
  if ((((iStack0000000000000008 != 2 && iStack000000000000000c != 2) && iStack0000000000000010 != 2)
      && iStack0000000000000014 != 2) && in_stack_00000018 != 2) {
    fVar12 = fVar13;
  }
  return fVar12;
}


