/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClasses
ENTRY_POINT: 06021dfc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetDynamicObjectTrackedClasses(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong in_x9;
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
  int iStack0000000000000018;
  uint uStack000000000000001c;
  
code_r0x06021dfc:
  piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*piVar8 + 2) * 0x10 + 0x138);
      goto LAB_06021e80;
    }
    in_x9 = in_x9 - 1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
LAB_06021e1c:
  puVar5 = (undefined8 *)FUN_0322c1e8();
LAB_06021e80:
  fVar10 = (float)(*(code *)*puVar5)();
  if (unaff_s8 <= fVar10) {
    unaff_s8 = fVar10;
  }
switchD_06021d50_default:
  unaff_w22 = unaff_w22 + 1;
  if (unaff_w22 == 5) goto switchD_06021e64_default;
  if ((unaff_x20 & 1) != 0) goto LAB_06021d14;
  if (unaff_x19 != (long *)0x0) goto code_r0x06021cac;
  goto LAB_06021fa0;
code_r0x06021cac:
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
LAB_06021d14:
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
    iVar9 = iVar2;
    break;
  case 2:
    iVar9 = iVar1;
    break;
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
  if (iVar9 == 1) goto code_r0x06021de0;
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
    if ((uStack000000000000001c & 1) == 0) {
      unaff_s9 = 0.0;
    }
    if ((((iStack0000000000000008 != 2 && iStack000000000000000c != 2) &&
         iStack0000000000000010 != 2) && iStack0000000000000014 != 2) && iStack0000000000000018 != 2
       ) {
      unaff_s9 = unaff_s8;
    }
    return unaff_s9;
  }
  if (iVar9 == 2) {
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
    fVar10 = (float)(*(code *)*puVar5)();
    if (fVar10 <= unaff_s9) {
      unaff_s9 = fVar10;
    }
    uStack000000000000001c = 1;
  }
  goto switchD_06021d50_default;
code_r0x06021de0:
  if (unaff_x19 == (long *)0x0) {
LAB_06021fa0:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  param_1 = *unaff_x19;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)PTR_DAT_075f53a0;
  if (in_x9 != 0) goto code_r0x06021dfc;
  goto LAB_06021e1c;
}


