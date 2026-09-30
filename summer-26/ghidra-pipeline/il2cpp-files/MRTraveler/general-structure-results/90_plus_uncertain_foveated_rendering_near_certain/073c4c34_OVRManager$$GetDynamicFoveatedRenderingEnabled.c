/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 073c4c34
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 106
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetDynamicFoveatedRenderingEnabled
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  
  if ((DAT_0941e63a & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb23f0);
    DAT_0941e63a = 1;
  }
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  if (*(long *)(param_4 + 0x128) != 0) {
    fVar14 = param_5[1];
    fVar8 = param_5[2];
    fVar16 = *param_5;
    fVar9 = (float)FUN_085eb198(*(long *)(param_4 + 0x128),0);
    if (DAT_0940fefb == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fefb = '\x01';
    }
    puVar1 = PTR_DAT_08e68e18;
    lVar3 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar15 = *(float *)(lVar3 + 0x18);
    fVar18 = *(float *)(lVar3 + 0x1c);
    fVar17 = *(float *)(lVar3 + 0x20);
    if (DAT_09410ea2 == '\0') {
      FUN_03c8f898(PTR_DAT_08e722b0);
      DAT_09410ea2 = '\x01';
    }
    fVar10 = fVar17 * fVar17 + fVar15 * fVar15 + fVar18 * fVar18;
    fVar16 = fVar16 - fVar9;
    fVar14 = fVar14 - param_2;
    fVar8 = fVar8 - param_3;
    if (**(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) <= fVar10) {
      fVar9 = fVar8 * fVar17 + fVar16 * fVar15 + fVar14 * fVar18;
      fVar16 = fVar16 - (fVar15 * fVar9) / fVar10;
      fVar14 = fVar14 - (fVar18 * fVar9) / fVar10;
      fVar8 = fVar8 - (fVar17 * fVar9) / fVar10;
    }
    if (DAT_094100b4 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b4 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar9 = SQRT(fVar8 * fVar8 + fVar16 * fVar16 + fVar14 * fVar14);
    if (fVar9 <= DAT_018b0528) {
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar16 = *pfVar4;
      fVar14 = pfVar4[1];
      fVar8 = pfVar4[2];
    }
    else {
      fVar16 = fVar16 / fVar9;
      fVar14 = fVar14 / fVar9;
      fVar8 = fVar8 / fVar9;
    }
    uVar12 = (ulong)(uint)fVar8;
    uVar5 = (ulong)(uint)fVar14;
    if (DAT_0940fefb == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fefb = '\x01';
    }
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    uVar13 = (ulong)*(uint *)(lVar3 + 0x18);
    uVar11 = FUN_085d28c8(fVar16,uVar5,uVar12,uVar13,*(undefined4 *)(lVar3 + 0x1c),
                          *(undefined4 *)(lVar3 + 0x20),0);
    plVar7 = *(long **)(param_4 + 0x138);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_085e9668(*param_5,param_5[1],param_5[2],uVar11,uVar5,uVar12,uVar13,&stack0x00000040,0);
    in_stack_00000068 = uStack0000000000000048;
    in_stack_00000060 = in_stack_00000040;
    uStack0000000000000074 = uStack0000000000000054;
    in_stack_00000078 = in_stack_00000058;
    uStack000000000000006c = uStack000000000000004c;
    in_stack_00000070 = uStack0000000000000050;
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08eb23f0) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_073c4f0c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08eb23f0,2);
LAB_073c4f0c:
      (*(code *)*puVar2)(plVar7,&stack0x00000060,puVar2[1]);
      *(undefined8 *)(param_4 + 0x14c) = in_stack_00000008;
      *(undefined8 *)(param_4 + 0x144) = in_stack_00000000;
      *(undefined8 *)(param_4 + 0x158) = uStack0000000000000014;
      *(ulong *)(param_4 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


