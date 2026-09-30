/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonForAction$$set_Action
ENTRY_POINT: 06d8d010
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d8d320) */
/* WARNING: Removing unreachable block (ram,0x06d8d030) */
/* WARNING: Removing unreachable block (ram,0x06d8d43c) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonForAction__set_Action
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float unaff_s8;
  undefined8 uVar14;
  float unaff_s9;
  float unaff_s10;
  float fVar15;
  float unaff_s11;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  
  fVar3 = (float)FUN_085d2bd4(0);
  if (unaff_s11 < 0.0) {
    unaff_s11 = 0.0;
  }
  uVar9 = unaff_x19[4];
  FUN_07d81e60(unaff_s8 + unaff_s11 * ((in_stack_00000020 + fVar3) - unaff_s8),
               unaff_s9 + unaff_s11 * ((in_stack_00000010 + param_2) - unaff_s9),
               unaff_s10 + unaff_s11 * ((in_stack_00000008._4_4_ + param_3) - unaff_s10));
  lVar1 = unaff_x20 + 0xc;
  uVar2 = FUN_07d897c0(lVar1,&stack0x00000230,0);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(unaff_x20 + 0x1d8) == '\0') {
      in_stack_000000e0 = unaff_x19[6];
      in_stack_000000c8 = unaff_x19[3];
      uVar9 = unaff_x19[2];
      in_stack_000000d8 = unaff_x19[5];
      in_stack_000000d0 = unaff_x19[4];
      in_stack_000000b8 = unaff_x19[1];
      uVar8 = *unaff_x19;
      in_stack_000000b0 = uVar8;
      in_stack_000000c0 = uVar9;
      fVar3 = (float)FUN_07d81e98(lVar1,&stack0x000000b0,0);
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      uVar13 = *(undefined8 *)(unaff_x20 + 0x1b4);
      fVar5 = *(float *)(unaff_x20 + 0x1bc);
      in_stack_00000088 = unaff_x19[3];
      in_stack_00000080 = unaff_x19[2];
      in_stack_00000098 = unaff_x19[5];
      in_stack_00000090 = unaff_x19[4];
      in_stack_00000078 = unaff_x19[1];
      in_stack_00000070 = *unaff_x19;
      uVar14 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      fVar15 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
      in_stack_000000a0 = unaff_x19[6];
      fVar4 = (float)FUN_07d81d44(unaff_x20 + 0x158,&stack0x00000070,0);
      fVar4 = fVar4 * unaff_s15;
      fVar6 = (float)uVar14;
      fVar7 = (float)((ulong)uVar14 >> 0x20);
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      in_stack_00000048 = unaff_x19[3];
      in_stack_00000040 = unaff_x19[2];
      in_stack_00000058 = unaff_x19[5];
      in_stack_00000050 = unaff_x19[4];
      in_stack_00000060 = unaff_x19[6];
      in_stack_00000038 = unaff_x19[1];
      in_stack_00000030 = *unaff_x19;
      fVar7 = (float)uVar9 +
              fVar7 + (((float)((ulong)uVar13 >> 0x20) - (float)uVar9) - fVar7) * fVar4;
      FUN_07d81ed0(CONCAT44(fVar7,fVar3 + fVar6 + (((float)uVar13 - fVar3) - fVar6) * fVar4),fVar7,
                   (float)uVar8 + fVar15 + ((fVar5 - (float)uVar8) - fVar15) * fVar4,lVar1,
                   &stack0x00000030,0);
    }
    else {
      fVar15 = (float)unaff_x19[2];
      fVar10 = (float)*unaff_x19;
      fVar4 = (float)FUN_07d81e28(&stack0x000004b0,&stack0x000001f0,0);
      in_stack_000001e0 = unaff_x19[6];
      in_stack_000001c8 = unaff_x19[3];
      uVar14 = unaff_x19[2];
      in_stack_000001d8 = unaff_x19[5];
      in_stack_000001d0 = unaff_x19[4];
      in_stack_000001b8 = unaff_x19[1];
      uVar11 = *unaff_x19;
      in_stack_000001b0 = uVar11;
      in_stack_000001c0 = uVar14;
      uVar8 = FUN_07d81f78(&stack0x000004b0,&stack0x000001b0,0);
      in_stack_00000188 = unaff_x19[3];
      in_stack_00000180 = unaff_x19[2];
      in_stack_00000198 = unaff_x19[5];
      in_stack_00000190 = unaff_x19[4];
      in_stack_000001a0 = unaff_x19[6];
      in_stack_00000178 = unaff_x19[1];
      in_stack_00000170 = *unaff_x19;
      fVar5 = (float)FUN_07d81d44(unaff_x20 + 0x158,&stack0x00000170,0);
      in_stack_00000148 = unaff_x19[3];
      uVar12 = unaff_x19[2];
      in_stack_00000158 = unaff_x19[5];
      uVar13 = unaff_x19[4];
      in_stack_00000160 = unaff_x19[6];
      in_stack_00000138 = unaff_x19[1];
      in_stack_00000130 = *unaff_x19;
      in_stack_00000140 = uVar12;
      in_stack_00000150 = uVar13;
      fVar6 = (float)FUN_07d81e28(lVar1,&stack0x00000130,0);
      fVar7 = (float)FUN_085d2bd4(uVar8,uVar14,uVar11,uVar9,*(undefined4 *)(unaff_x20 + 0x1b4),
                                  *(undefined4 *)(unaff_x20 + 0x1b8),
                                  *(undefined4 *)(unaff_x20 + 0x1bc),0);
      in_stack_00000120 = unaff_x19[6];
      fVar3 = fVar5 * unaff_s15;
      if (fVar5 * unaff_s15 < 0.0) {
        fVar3 = 0.0;
      }
      in_stack_000000f8 = unaff_x19[1];
      in_stack_000000f0 = *unaff_x19;
      in_stack_00000108 = unaff_x19[3];
      in_stack_00000100 = unaff_x19[2];
      in_stack_00000118 = unaff_x19[5];
      in_stack_00000110 = unaff_x19[4];
      FUN_07d81e60(fVar6 + fVar3 * ((fVar4 + fVar7) - fVar6),
                   (float)uVar13 + fVar3 * ((fVar15 + (float)uVar14) - (float)uVar13),
                   (float)uVar12 + fVar3 * ((fVar10 + (float)uVar11) - (float)uVar12),lVar1,
                   &stack0x000000f0,0);
    }
  }
  return;
}


