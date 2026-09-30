/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 0608166c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__BeginInvoke(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *unaff_x20;
  uVar10 = *(undefined4 *)(unaff_x19 + 0xc);
  uVar11 = *(undefined4 *)(unaff_x19 + 0x10);
  uVar12 = *(undefined4 *)(unaff_x19 + 0x14);
  uVar13 = *(undefined4 *)(unaff_x19 + 0x18);
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07a208e0) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_06081810;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30();
LAB_06081810:
  iVar2 = (*(code *)*puVar3)();
  puVar1 = PTR_DAT_07a207e0;
  lVar4 = *(long *)PTR_DAT_07a207e0;
  if (iVar2 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar4 + 0xb8);
    puVar5 = (undefined4 *)(lVar4 + 0x48);
    puVar7 = (undefined4 *)(lVar4 + 0x4c);
    puVar9 = (undefined4 *)(lVar4 + 0x50);
  }
  else {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar4 = *(long *)puVar1;
    }
    puVar5 = *(undefined4 **)(lVar4 + 0xb8);
    puVar7 = puVar5 + 1;
    puVar9 = puVar5 + 2;
  }
  FUN_071af638(uVar10,uVar11,uVar12,uVar13,*puVar5,*puVar7,*puVar9,0);
  return;
}


