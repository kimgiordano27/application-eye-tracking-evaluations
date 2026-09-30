/*
FUNCTION_NAME: FUN_06aaf398
ENTRY_POINT: 06aaf398
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06aaf398(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_086e2152 & 1) == 0) {
                    /* try { // try from 06aaf3c8 to 06baf3d3 has its CatchHandler @ 06aaf690 */
    FUN_0335b6c8(&DAT_083cc450,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ccff0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083edc90,1);
    DataMemoryBarrier(2,3);
                    /* try { // try from 06aaf410 to 06baf437 has its CatchHandler @ 06aaf68c */
    FUN_0335b6c8(&DAT_083d1cb8,1);
    DataMemoryBarrier(2,3);
    DAT_086e2152 = 1;
  }
  if (*(long *)(param_4 + 0x20) != 0) {
    if (*(int *)(*(long *)(param_4 + 0x20) + 0x84) == 3) {
      return;
    }
    uVar1 = FUN_06aacdfc();
    uVar10 = 0x3f800000;
    uVar11 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar13 = 0x3f800000;
    if ((uVar1 & 1) == 0) {
      uVar13 = *(undefined4 *)(param_4 + 0x54);
      uVar12 = *(undefined4 *)(param_4 + 0x58);
      uVar11 = *(undefined4 *)(param_4 + 0x5c);
      uVar10 = *(undefined4 *)(param_4 + 0x60);
    }
    plVar6 = *(long **)(param_4 + 0x70);
    lVar3 = *(long *)(param_4 + 0x20);
    if (plVar6 == (long *)0x0) {
      if (lVar3 == 0) goto LAB_06aaf654;
      local_70 = *(undefined8 *)(lVar3 + 0x168);
      uStack_88 = *(undefined8 *)(lVar3 + 0x150);
      local_90 = *(undefined8 *)(lVar3 + 0x148);
      uStack_78 = *(undefined8 *)(lVar3 + 0x160);
      uVar9 = *(undefined8 *)(lVar3 + 0x158);
      uStack_80 = uVar9;
      if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar8 = OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                        (&local_90);
    }
    else {
      if (lVar3 == 0) goto LAB_06aaf654;
      local_70 = *(undefined8 *)(lVar3 + 0x168);
      uStack_88 = *(undefined8 *)(lVar3 + 0x150);
      local_90 = *(undefined8 *)(lVar3 + 0x148);
      uStack_78 = *(undefined8 *)(lVar3 + 0x160);
      uVar9 = *(undefined8 *)(lVar3 + 0x158);
      uStack_80 = uVar9;
      if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar8 = OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                        (&local_90);
      lVar3 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_083ccff0) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_06aaf524;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
                    /* try { // try from 06aaf4d0 to 06baf4f7 has its CatchHandler @ 06aaf6cc */
      puVar2 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083ccff0,0);
LAB_06aaf524:
      uVar8 = (*(code *)*puVar2)(uVar8,uVar9,param_3,plVar6,puVar2[1]);
    }
                    /* try { // try from 06aaf53c to 06baf563 has its CatchHandler @ 06aaf6c8 */
    if (*(long *)(param_4 + 0x20) != 0) {
      FUN_06aac274(auStack_b0);
      FUN_06aaf658(uVar8,uVar9,param_3,param_4,auStack_b0);
      lVar3 = *(long *)(param_4 + 0x28);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x50) = uVar13;
        *(undefined4 *)(lVar3 + 0x54) = uVar12;
        *(undefined4 *)(lVar3 + 0x58) = uVar11;
        *(undefined4 *)(lVar3 + 0x5c) = uVar10;
        plVar6 = *(long **)(param_4 + 0x48);
        lVar3 = *(long *)(param_4 + 0x28);
                    /* try { // try from 06aaf588 to 06baf58f has its CatchHandler @ 06aaf6b0 */
        if (plVar6 == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          lVar4 = *plVar6;
                    /* try { // try from 06aaf5a0 to 06baf5a3 has its CatchHandler @ 06aaf6bc */
          uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 06aaf5a4 to 06baf5a7 has its CatchHandler @ 06aaf694 */
          if (uVar1 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_083cc450) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_06aaf5f0;
              }
              uVar1 = uVar1 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar1 != 0);
          }
          puVar2 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cc450,0);
LAB_06aaf5f0:
          uVar7 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        }
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x78) = uVar7;
          if (*(long *)(param_4 + 0x28) != 0) {
            FUN_069d2558(*(long *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x68),0,0);
            FUN_06aafd94(uVar13,uVar12,uVar11,uVar10,param_4);
            return;
          }
        }
      }
    }
  }
LAB_06aaf654:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


