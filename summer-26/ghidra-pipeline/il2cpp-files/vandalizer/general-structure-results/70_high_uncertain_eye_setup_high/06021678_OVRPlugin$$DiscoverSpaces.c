/*
FUNCTION_NAME: OVRPlugin$$DiscoverSpaces
ENTRY_POINT: 06021678
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__DiscoverSpaces(void)

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
  int iVar10;
  long *unaff_x24;
  ulong unaff_x27;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
code_r0x06021678:
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((uint)unaff_x21 < 5) {
                    /* WARNING: Could not recover jumptable at 0x060216b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)((ulong)(&switchD_060216b4::switchdataD_015e1038)[unaff_x27] * 4 + 0x60216b8))
                      ();
    return uVar7;
  }
switchD_06021520_default:
  uVar5 = (int)unaff_x21 + 1;
  unaff_x21 = (ulong)uVar5;
  if (uVar5 == 5) {
    uStack0000000000000008 = uStack0000000000000008 & (uStack000000000000000c ^ 1);
    goto LAB_060217ec;
  }
  iVar10 = *unaff_x20;
  iVar2 = unaff_x20[1];
  iVar1 = unaff_x20[2];
  iVar3 = unaff_x20[3];
  iVar4 = unaff_x20[4];
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  switch(unaff_x21) {
  case 1:
    goto joined_r0x06021534;
  case 2:
    iVar2 = iVar1;
joined_r0x06021534:
    if (iVar2 != 0) goto LAB_06021544;
    goto switchD_06021520_default;
  case 3:
    iVar10 = iVar3;
  case 0:
    break;
  case 4:
    iVar10 = iVar4;
    break;
  default:
    goto switchD_06021520_default;
  }
  if (iVar10 == 0) goto switchD_06021520_default;
LAB_06021544:
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
        goto LAB_060215a8;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_060215a8:
  uVar5 = (*(code *)*puVar6)();
  iVar10 = *unaff_x20;
  iVar2 = unaff_x20[1];
  iVar1 = unaff_x20[2];
  iVar3 = unaff_x20[3];
  iVar4 = unaff_x20[4];
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
  }
  uStack000000000000000c = uStack000000000000000c | uVar5;
  unaff_x27 = unaff_x21;
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
    goto code_r0x06021678;
  }
  if (iVar10 != 2) goto code_r0x06021678;
  lVar8 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_075f53a0) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_060216d0;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_060216d0:
  uVar7 = (*(code *)*puVar6)();
  if ((uVar7 & 1) != 0) {
    iVar10 = unaff_x20[5];
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uStack0000000000000008 = 1;
    if (iVar10 == 1) {
LAB_060217ec:
      return (ulong)(uStack0000000000000008 & 1);
    }
  }
  goto switchD_06021520_default;
}


