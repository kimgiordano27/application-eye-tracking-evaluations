/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$Update
ENTRY_POINT: 06d8e224
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__Update
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  int iVar8;
  long unaff_x25;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s8;
  float unaff_s10;
  undefined8 unaff_d11;
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
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined4 in_stack_000001c8;
  
  fVar9 = (float)FUN_07d81e28();
  if (DAT_0940fff5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fff5 = '\x01';
  }
  puVar3 = PTR_DAT_08e68e18;
  puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x98) + (long)*(int *)(unaff_x19 + 0x1dc) * 0xc);
  uVar10 = *puVar5;
  fVar12 = *(float *)(puVar5 + 1);
  fVar18 = unaff_s8;
  if (1.0 < unaff_s8) {
    fVar18 = 1.0;
  }
  uVar14 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  fVar16 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
  if (unaff_s8 < 0.0) {
    fVar18 = 0.0;
  }
  fVar13 = (float)uVar14;
  fVar17 = (float)((ulong)uVar14 >> 0x20);
  puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0xa8) + unaff_x25 * 0xc);
  *puVar5 = CONCAT44(param_2 + fVar17 + ((float)((ulong)uVar10 >> 0x20) - fVar17) * fVar18,
                     fVar9 + fVar13 + ((float)uVar10 - fVar13) * fVar18);
  *(float *)(puVar5 + 1) = param_3 + fVar16 + fVar18 * (fVar12 - fVar16);
  uVar2 = *(uint *)(unaff_x19 + 0x1e0);
  iVar4 = *(int *)(unaff_x19 + 0x1ec);
  if ((int)uVar2 <= iVar4) {
    do {
      lVar1 = (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) + (long)(int)uVar2;
      puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x78) + lVar1 * 4);
      in_stack_000001c8 = *(undefined4 *)(puVar5 + 1);
      in_stack_000001c0 = *puVar5;
      fVar9 = *(float *)(*(long *)(unaff_x19 + 0xd8) + lVar1 * 4 + 8);
      puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x98) + (long)(int)(uVar2 - 1) * 0xc);
      uVar10 = *puVar5;
      fVar12 = *(float *)(puVar5 + 1);
      puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x98) + lVar1 * 4);
      *puVar5 = CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)unaff_d11 >> 0x20) * fVar9,
                         (float)uVar10 + (float)unaff_d11 * fVar9);
      *(float *)(puVar5 + 1) = fVar12 + unaff_s10 * fVar9;
      in_stack_00000120 = unaff_x20[6];
      in_stack_00000108 = unaff_x20[3];
      uVar10 = unaff_x20[2];
      in_stack_00000118 = unaff_x20[5];
      in_stack_00000110 = unaff_x20[4];
      in_stack_000000f8 = unaff_x20[1];
      uVar14 = *unaff_x20;
      in_stack_000000f0 = uVar14;
      in_stack_00000100 = uVar10;
      fVar9 = (float)FUN_07d81e28(&stack0x000001c0,&stack0x000000f0,0);
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(puVar3);
        DAT_0940fff5 = '\x01';
      }
      puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x98) + (long)(int)uVar2 * 0xc);
      uVar15 = *puVar5;
      fVar17 = *(float *)(puVar5 + 1);
      uVar11 = *puVar6;
      fVar13 = *(float *)(puVar6 + 1);
      fVar12 = (float)uVar11;
      fVar16 = (float)((ulong)uVar11 >> 0x20);
      puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0xa8) + (long)(int)uVar2 * 0xc);
      *puVar5 = CONCAT44((float)uVar10 + fVar16 + fVar18 * ((float)((ulong)uVar15 >> 0x20) - fVar16)
                         ,fVar9 + fVar12 + fVar18 * ((float)uVar15 - fVar12));
      *(float *)(puVar5 + 1) = (float)uVar14 + fVar13 + fVar18 * (fVar17 - fVar13);
      iVar4 = *(int *)(unaff_x19 + 0x1ec);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 <= iVar4);
  }
  iVar8 = *(int *)(unaff_x19 + 0x1dc);
  if (iVar8 <= iVar4) {
    do {
      puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x78) + (long)iVar8 * 0xc);
      in_stack_000001b8 = *(undefined4 *)(puVar5 + 1);
      in_stack_000001b0 = *puVar5;
      in_stack_000000a0 = unaff_x20[6];
      in_stack_00000088 = unaff_x20[3];
      in_stack_00000080 = unaff_x20[2];
      in_stack_00000098 = unaff_x20[5];
      in_stack_00000090 = unaff_x20[4];
      in_stack_00000078 = unaff_x20[1];
      in_stack_00000070 = *unaff_x20;
      puVar7 = (undefined4 *)(*(long *)(unaff_x19 + 0xa8) + (long)iVar8 * 0xc);
      in_stack_000000b0 = in_stack_00000070;
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000c0 = in_stack_00000080;
      in_stack_000000c8 = in_stack_00000088;
      in_stack_000000d0 = in_stack_00000090;
      in_stack_000000d8 = in_stack_00000098;
      in_stack_000000e0 = in_stack_000000a0;
      FUN_07d81e60(*puVar7,puVar7[1],puVar7[2],&stack0x000001b0,&stack0x00000070,0);
      puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x78) + (long)iVar8 * 0xc);
      *(undefined4 *)(puVar5 + 1) = in_stack_000001b8;
      *puVar5 = in_stack_000001b0;
      iVar8 = iVar8 + 1;
    } while (iVar8 <= *(int *)(unaff_x19 + 0x1ec));
  }
  FUN_07d81e60(*(undefined4 *)(unaff_x19 + 0x1fc),*(undefined4 *)(unaff_x19 + 0x200),
               *(undefined4 *)(unaff_x19 + 0x204));
  return;
}


