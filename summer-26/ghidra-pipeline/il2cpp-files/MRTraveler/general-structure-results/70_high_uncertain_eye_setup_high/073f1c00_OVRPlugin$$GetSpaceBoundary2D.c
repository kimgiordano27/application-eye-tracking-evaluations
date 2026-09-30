/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 073f1c00
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__GetSpaceBoundary2D(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int in_w8;
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
    if (in_w8 == 0) {
      thunk_FUN_03cd7500();
    }
    if ((uint)unaff_x21 < 5) {
                    /* WARNING: Could not recover jumptable at 0x073f1c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)((ulong)(&switchD_073f1c24::switchdataD_01a336e9)[unaff_x28] * 4 + 0x73f1c28
                        ))();
      return uVar7;
    }
switchD_073f1c24_default:
    do {
      uVar5 = (int)unaff_x21 + 1;
      unaff_x21 = (ulong)uVar5;
      if (uVar5 == 5) goto LAB_073f1d70;
      iVar10 = *unaff_x20;
      iVar2 = unaff_x20[1];
      iVar1 = unaff_x20[2];
      iVar3 = unaff_x20[3];
      iVar4 = unaff_x20[4];
      if (*(int *)(*(long *)PTR_DAT_08eb1c18 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
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
        goto switchD_073f1b6c_default;
      }
      if (iVar10 == 2) {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar8 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08eb3cd0) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_073f1c3c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348();
LAB_073f1c3c:
        uVar7 = (*(code *)*puVar6)();
        if ((uVar7 & 1) == 0) {
          unaff_w23 = 0;
LAB_073f1d70:
          return (ulong)(unaff_w23 & 1);
        }
        lVar8 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08eb3cd0) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_073f1ca8;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348();
LAB_073f1ca8:
        uVar5 = (*(code *)*puVar6)();
        unaff_w23 = unaff_w23 | uVar5;
        goto switchD_073f1c24_default;
      }
switchD_073f1b6c_default:
    } while (unaff_w26 == 0);
    in_w8 = *(int *)(*(long *)PTR_DAT_08eb1c18 + 0xe0);
    unaff_x28 = unaff_x21;
  } while( true );
}


