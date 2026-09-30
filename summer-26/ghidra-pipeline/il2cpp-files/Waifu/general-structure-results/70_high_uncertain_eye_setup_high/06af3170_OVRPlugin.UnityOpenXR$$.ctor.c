/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$.ctor
ENTRY_POINT: 06af3170
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06af3288) */

void OVRPlugin_UnityOpenXR___ctor(float param_1,float param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar7;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined1 auVar8 [16];
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined4 uStack0000000000000010;
  uint uStack0000000000000014;
  uint in_stack_00000018;
  
code_r0x06af3170:
  param_2 = param_2 - param_1;
  do {
    lVar3 = *(long *)(unaff_x27 + 0x498);
    fVar7 = *(float *)(unaff_x20 + 0x40);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      FUN_033b9870();
      lVar3 = *(long *)(unaff_x27 + 0x498);
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    *(float *)(lVar3 + 0x18) = unaff_s15;
    *(float *)(lVar3 + 0x1c) = fVar7 * 0.5;
    *(float *)(lVar3 + 0xc) = unaff_s13;
    *(float *)(lVar3 + 0x10) = unaff_s14;
    *(float *)(lVar3 + 0x14) = param_2;
    OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata__FixJointPairEndPositionHand
              (unaff_d8,unaff_d9,unaff_d10,0,0);
    do {
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(unaff_x24 + 0x870)) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_06af300c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06af300c:
      uVar4 = (*(code *)*puVar2)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar3 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_06af321c;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_06af3204;
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(unaff_x25 + 0x3e0)) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_06af3068;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06af3068:
      auVar8 = (*(code *)*puVar2)();
      if (auVar8._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      plVar6 = *(long **)(unaff_x20 + 0x30);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar3 = *plVar6;
      uVar1 = *(undefined4 *)(auVar8._0_8_ + 0x10);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(unaff_x26 + 0x4b8)) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_06af30d8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar6,*(long *)(unaff_x26 + 0x4b8),4);
LAB_06af30d8:
      uVar4 = (*(code *)*puVar2)(plVar6,uVar1,&stack0x00000010,puVar2[1]);
    } while ((uVar4 & 1) == 0);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    unaff_d9 = (ulong)uStack0000000000000014;
    unaff_d10 = (ulong)in_stack_00000018;
    unaff_d8 = FUN_07a17248(uStack0000000000000010,*(long *)(unaff_x20 + 0x38),0);
    fVar7 = auVar8._12_4_;
    if (auVar8._8_4_ <= fVar7) {
      unaff_s14 = 1.0;
      unaff_s13 = 0.0;
    }
    else {
      if (0.0 < fVar7) break;
      unaff_s13 = 1.0;
      unaff_s14 = 0.0;
    }
    param_2 = 0.0;
    unaff_s15 = 1.0;
  } while( true );
  fVar7 = (auVar8._8_4_ / fVar7) * 0.5;
  param_1 = fVar7;
  if (1.0 < fVar7) {
    param_1 = 1.0;
  }
  if (fVar7 < 0.0) {
    param_1 = 0.0;
  }
  unaff_s13 = param_1 * 0.0 + 1.0;
  unaff_s14 = fStack000000000000000c - param_1 * fStack000000000000000c;
  param_1 = param_1 * fStack0000000000000008;
  unaff_s15 = unaff_s13;
  param_2 = fStack0000000000000008;
  goto code_r0x06af3170;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_06af3204:
    if (*(long *)(piVar5 + -2) == DAT_083cc7a8) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_06af3238;
    }
  }
LAB_06af321c:
  puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06af3238:
  (*(code *)*puVar2)();
  return;
}


