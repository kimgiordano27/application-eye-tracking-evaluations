/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$BeginInvoke
ENTRY_POINT: 05d6fb94
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


ulong OVRManager_InstantiateMrcCameraDelegate__BeginInvoke(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  int *unaff_x20;
  ulong unaff_x21;
  uint unaff_w23;
  int unaff_w26;
  int unaff_w27;
  ulong unaff_x28;
  int iVar9;
  
code_r0x05d6fb94:
  iVar9 = unaff_w27;
  do {
    if (iVar9 != 2) goto switchD_05d6fb88_default;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072af0a8) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05d6fc58;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_032937ac();
LAB_05d6fc58:
    uVar7 = (*(code *)*puVar5)();
    if ((uVar7 & 1) == 0) {
      unaff_w23 = 0;
LAB_05d6fd8c:
      return (ulong)(unaff_w23 & 1);
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072af0a8) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_05d6fcc4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_032937ac();
LAB_05d6fcc4:
    uVar4 = (*(code *)*puVar5)();
    unaff_w23 = unaff_w23 | uVar4;
switchD_05d6fc40_default:
    uVar4 = (int)unaff_x21 + 1;
    unaff_x21 = (ulong)uVar4;
    if (uVar4 == 5) goto LAB_05d6fd8c;
    iVar9 = *unaff_x20;
    iVar1 = unaff_x20[1];
    unaff_w27 = unaff_x20[2];
    iVar2 = unaff_x20[3];
    iVar3 = unaff_x20[4];
    if (*(int *)(*(long *)PTR_DAT_072ad9a0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    unaff_x28 = unaff_x21;
    switch(unaff_x21) {
    case 0:
      break;
    case 1:
      iVar9 = iVar1;
      break;
    case 2:
      goto code_r0x05d6fb94;
    case 3:
      iVar9 = iVar2;
      break;
    case 4:
      iVar9 = iVar3;
      break;
    default:
switchD_05d6fb88_default:
      if (unaff_w26 != 0) {
        if (*(int *)(*(long *)PTR_DAT_072ad9a0 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if ((uint)unaff_x21 < 5) {
                    /* WARNING: Could not recover jumptable at 0x05d6fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(OVRManager_PassthroughCapabilities__get_MaxColorLutResolution +
                    (ulong)(&switchD_05d6fc40::switchdataD_014ab7c1)[unaff_x28] * 4))();
          return uVar7;
        }
      }
      goto switchD_05d6fc40_default;
    }
  } while( true );
}


