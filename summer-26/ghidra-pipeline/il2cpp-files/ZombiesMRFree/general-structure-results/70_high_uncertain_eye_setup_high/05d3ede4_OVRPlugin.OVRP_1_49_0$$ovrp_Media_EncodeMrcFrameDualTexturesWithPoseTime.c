/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
ENTRY_POINT: 05d3ede4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  
  iVar2 = *(int *)(unaff_x20 + 0x80);
  lVar5 = *(long *)(unaff_x20 + 0x88);
  iVar1 = *(int *)(unaff_x20 + 0x90) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  *(int *)(unaff_x20 + 0x90) = iVar1 - iVar3 * iVar2;
  *(undefined4 *)(unaff_x20 + 0x94) = param_1;
  if (lVar5 != 0) {
    lVar8 = 0;
    do {
      uVar7 = (uint)lVar8;
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
        iVar2 = *(int *)(unaff_x20 + 0x80);
        iVar3 = *(int *)(unaff_x20 + 0x84);
        iVar1 = iVar2;
        if (iVar3 <= iVar2) {
          iVar1 = iVar3;
        }
        iVar4 = 0;
        if (-1 < iVar3) {
          iVar4 = iVar1;
        }
        *(int *)(unaff_x20 + 0x84) = iVar4;
        if (lVar5 != 0) {
          lVar8 = 0;
          iVar4 = (*(int *)(unaff_x20 + 0x90) + iVar2) - iVar4;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = iVar4 / iVar2;
          }
          uVar7 = iVar4 - iVar1 * iVar2;
          goto LAB_05d3ed00;
        }
        break;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_05d3ee6c;
      lVar9 = *(long *)(unaff_x19 + 0x48);
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_05d3ee6c;
      lVar5 = *(long *)(lVar5 + lVar8 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x20 + 0x90)) goto LAB_05d3ee6c;
      lVar9 = lVar9 + lVar8 * 0x10;
      uVar10 = *(undefined8 *)(lVar9 + 0x20);
      lVar5 = lVar5 + (long)(int)*(uint *)(unaff_x20 + 0x90) * 0x10;
      lVar8 = lVar8 + 1;
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar5 + 0x20) = uVar10;
      lVar5 = *(long *)(unaff_x20 + 0x88);
    } while (lVar5 != 0);
  }
  goto LAB_05d3ee68;
  while( true ) {
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_05d3ee6c;
    lVar9 = *(long *)(unaff_x19 + 0x48);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_05d3ee6c;
    lVar5 = lVar5 + (long)(int)uVar7 * 0x10;
    uVar10 = *(undefined8 *)(lVar5 + 0x20);
    lVar9 = lVar9 + lVar8 * 0x10;
    lVar8 = lVar8 + 1;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar9 + 0x20) = uVar10;
    lVar5 = *(long *)(unaff_x20 + 0x88);
    if (lVar5 == 0) break;
LAB_05d3ed00:
    uVar6 = (uint)lVar8;
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar6) {
      return;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_05d3ee6c:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar5 = *(long *)(lVar5 + lVar8 * 8 + 0x20);
    if (lVar5 == 0) break;
  }
LAB_05d3ee68:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


