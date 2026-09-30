/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$EndInvoke
ENTRY_POINT: 05d6fc28
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


ulong OVRManager_InstantiateMrcCameraDelegate__EndInvoke(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
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
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x05d6fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(OVRManager_PassthroughCapabilities__get_MaxColorLutResolution +
                (ulong)(&switchD_05d6fc40::switchdataD_014ab7c1)[unaff_x28] * 4))();
      return uVar7;
    }
switchD_05d6fc40_default:
    do {
      uVar5 = (int)unaff_x21 + 1;
      unaff_x21 = (ulong)uVar5;
      if (uVar5 == 5) goto LAB_05d6fd8c;
      iVar10 = *unaff_x20;
      iVar2 = unaff_x20[1];
      iVar1 = unaff_x20[2];
      iVar3 = unaff_x20[3];
      iVar4 = unaff_x20[4];
      if (*(int *)(*(long *)PTR_DAT_072ad9a0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
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
        goto switchD_05d6fb88_default;
      }
      if (iVar10 == 2) {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar8 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_072af0a8) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05d6fc58;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_032937ac();
LAB_05d6fc58:
        uVar7 = (*(code *)*puVar6)();
        if ((uVar7 & 1) == 0) {
          unaff_w23 = 0;
LAB_05d6fd8c:
          return (ulong)(unaff_w23 & 1);
        }
        lVar8 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_072af0a8) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_05d6fcc4;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_032937ac();
LAB_05d6fcc4:
        uVar5 = (*(code *)*puVar6)();
        unaff_w23 = unaff_w23 | uVar5;
        goto switchD_05d6fc40_default;
      }
switchD_05d6fb88_default:
    } while (unaff_w26 == 0);
    if (*(int *)(*(long *)PTR_DAT_072ad9a0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    in_CY = 3 < uVar5;
    in_ZR = uVar5 == 4;
    unaff_x28 = unaff_x21;
  } while( true );
}


