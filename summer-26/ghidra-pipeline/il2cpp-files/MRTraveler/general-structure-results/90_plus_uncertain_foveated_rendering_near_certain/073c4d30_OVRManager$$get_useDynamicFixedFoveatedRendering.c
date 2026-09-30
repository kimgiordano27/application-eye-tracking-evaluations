/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 073c4d30
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFixedFoveatedRendering(float *param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *plVar6;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  float unaff_s8;
  float fVar11;
  float unaff_s9;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  fVar12 = unaff_s11 - unaff_s10;
  param_3 = param_3 - unaff_s8;
  if (*param_1 <= param_2) {
    fVar8 = param_3 * unaff_s14 + unaff_s9 * unaff_s12 + fVar12 * unaff_s15;
    unaff_s9 = unaff_s9 - (unaff_s12 * fVar8) / param_2;
    fVar12 = fVar12 - (unaff_s15 * fVar8) / param_2;
    param_3 = param_3 - (unaff_s14 * fVar8) / param_2;
  }
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar8 = SQRT(param_3 * param_3 + unaff_s9 * unaff_s9 + fVar12 * fVar12);
  if (fVar8 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    fVar11 = *pfVar2;
    fVar12 = pfVar2[1];
    param_3 = pfVar2[2];
  }
  else {
    fVar11 = unaff_s9 / fVar8;
    fVar12 = fVar12 / fVar8;
    param_3 = param_3 / fVar8;
  }
  uVar9 = (ulong)(uint)param_3;
  uVar4 = (ulong)(uint)fVar12;
  if (*(char *)(unaff_x21 + 0xefb) == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    *(undefined1 *)(unaff_x21 + 0xefb) = 1;
  }
  lVar3 = *(long *)(*unaff_x22 + 0xb8);
  uVar10 = (ulong)*(uint *)(lVar3 + 0x18);
  uVar7 = FUN_085d28c8(fVar11,uVar4,uVar9,uVar10,*(undefined4 *)(lVar3 + 0x1c),
                       *(undefined4 *)(lVar3 + 0x20),0);
  plVar6 = *(long **)(unaff_x19 + 0x138);
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  FUN_085e9668(*unaff_x20,unaff_x20[1],unaff_x20[2],uVar7,uVar4,uVar9,uVar10,&stack0x00000040,0);
  uStack0000000000000074 = CONCAT44(in_stack_00000058,uStack0000000000000054);
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  uStack000000000000006c = uStack000000000000004c;
  in_stack_00000070 = in_stack_00000050;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08eb23f0) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_073c4f0c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08eb23f0,2);
LAB_073c4f0c:
  (*(code *)*puVar1)(plVar6,&stack0x00000060,puVar1[1]);
  *(undefined8 *)(unaff_x19 + 0x14c) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return;
}


