/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClassesAsync
ENTRY_POINT: 06021f0c
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


/* WARNING: Removing unreachable block (ram,0x06021f58) */

float OVRPlugin__SetDynamicObjectTrackedClassesAsync(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  int in_w9;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  ulong unaff_x20;
  int *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  int iVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int in_stack_00000018;
  
code_r0x06021f0c:
  puVar5 = (undefined8 *)(param_1 + (long)in_w9 * 0x10 + 0x138);
  do {
    fVar10 = (float)(*(code *)*puVar5)();
    if (fVar10 <= unaff_s9) {
      unaff_s9 = fVar10;
    }
switchD_06021d50_default:
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 5) goto switchD_06021e64_default;
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
      if ((uVar7 & 1) != 0) goto switchD_06021d50_default;
    }
    iVar9 = *unaff_x21;
    iVar2 = unaff_x21[1];
    iVar1 = unaff_x21[2];
    iVar3 = unaff_x21[3];
    iVar4 = unaff_x21[4];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    switch(unaff_w22) {
    case 1:
      goto joined_r0x06021d64;
    case 2:
      iVar2 = iVar1;
joined_r0x06021d64:
      if (iVar2 != 0) goto LAB_06021d74;
      goto switchD_06021d50_default;
    case 3:
      iVar9 = iVar3;
    case 0:
      break;
    case 4:
      iVar9 = iVar4;
      break;
    default:
      goto switchD_06021d50_default;
    }
    if (iVar9 == 0) goto switchD_06021d50_default;
LAB_06021d74:
    iVar9 = *unaff_x21;
    iVar2 = unaff_x21[1];
    iVar1 = unaff_x21[2];
    iVar3 = unaff_x21[3];
    iVar4 = unaff_x21[4];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    switch(unaff_w22) {
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
      goto switchD_06021dac_default;
    }
    if (iVar9 == 1) {
      if (unaff_x19 == (long *)0x0) goto LAB_06021fa0;
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
      fVar10 = (float)(*(code *)*puVar5)();
      if (unaff_s8 <= fVar10) {
        unaff_s8 = fVar10;
      }
      goto switchD_06021d50_default;
    }
switchD_06021dac_default:
    iVar9 = *unaff_x21;
    iVar2 = unaff_x21[1];
    iVar1 = unaff_x21[2];
    iVar3 = unaff_x21[3];
    iVar4 = unaff_x21[4];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    switch(unaff_w22) {
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
switchD_06021e64_default:
      if ((((iStack0000000000000008 != 2 && iStack000000000000000c != 2) &&
           iStack0000000000000010 != 2) && iStack0000000000000014 != 2) && in_stack_00000018 != 2) {
        unaff_s9 = unaff_s8;
      }
      return unaff_s9;
    }
    if (iVar9 != 2) goto switchD_06021d50_default;
    if (unaff_x19 == (long *)0x0) {
LAB_06021fa0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    param_1 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075f53a0) {
          in_w9 = *piVar8 + 2;
          goto code_r0x06021f0c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0322c1e8();
  } while( true );
}


