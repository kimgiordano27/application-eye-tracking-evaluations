/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$.ctor
ENTRY_POINT: 05be8574
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR___ctor(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  
  uVar5 = (*(code *)*param_1)();
  iVar2 = *(int *)(unaff_x20 + 0x80);
  iVar1 = *(int *)(unaff_x20 + 0x90) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  lVar6 = *(long *)(unaff_x20 + 0x88);
  *(int *)(unaff_x20 + 0x90) = iVar1 - iVar3 * iVar2;
  *(undefined4 *)(unaff_x20 + 0x94) = uVar5;
  if (lVar6 != 0) {
    lVar8 = 0;
    do {
      uVar7 = (uint)lVar8;
      if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar7) {
        iVar2 = *(int *)(unaff_x20 + 0x80);
        iVar3 = *(int *)(unaff_x20 + 0x84);
        iVar1 = iVar3;
        if (iVar2 <= iVar3) {
          iVar1 = iVar2;
        }
        iVar4 = 0;
        if (-1 < iVar3) {
          iVar4 = iVar1;
        }
        *(int *)(unaff_x20 + 0x84) = iVar4;
        if (lVar6 != 0) {
          iVar4 = (*(int *)(unaff_x20 + 0x90) + iVar2) - iVar4;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = iVar4 / iVar2;
          }
          uVar7 = iVar4 - iVar1 * iVar2;
          lVar8 = 0;
          goto LAB_05be84ac;
        }
        break;
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_05be8618;
      lVar9 = *(long *)(unaff_x19 + 0x38);
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_05be8618;
      lVar6 = *(long *)(lVar6 + lVar8 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x20 + 0x90)) goto LAB_05be8618;
      lVar9 = lVar9 + lVar8 * 0x10;
      lVar6 = lVar6 + (long)(int)*(uint *)(unaff_x20 + 0x90) * 0x10;
      lVar8 = lVar8 + 1;
      uVar11 = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar6 + 0x20) = uVar11;
      lVar6 = *(long *)(unaff_x20 + 0x88);
    } while (lVar6 != 0);
  }
  goto LAB_05be8614;
  while( true ) {
    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_05be8618;
    lVar9 = *(long *)(unaff_x19 + 0x38);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_05be8618;
    lVar6 = lVar6 + (long)(int)uVar7 * 0x10;
    uVar11 = *(undefined8 *)(lVar6 + 0x20);
    lVar9 = lVar9 + lVar8 * 0x10;
    lVar8 = lVar8 + 1;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar9 + 0x20) = uVar11;
    lVar6 = *(long *)(unaff_x20 + 0x88);
    if (lVar6 == 0) break;
LAB_05be84ac:
    uVar10 = (uint)lVar8;
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar10) {
      return;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar10) {
LAB_05be8618:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar6 = *(long *)(lVar6 + lVar8 * 8 + 0x20);
    if (lVar6 == 0) break;
  }
LAB_05be8614:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


