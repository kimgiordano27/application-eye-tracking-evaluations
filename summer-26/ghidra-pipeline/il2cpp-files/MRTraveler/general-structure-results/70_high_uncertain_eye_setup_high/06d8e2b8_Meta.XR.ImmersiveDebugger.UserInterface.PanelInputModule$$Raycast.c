/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$Raycast
ENTRY_POINT: 06d8e2b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__Raycast
               (long param_1,undefined8 param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  int iVar6;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float in_s6;
  float unaff_s9;
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
  
  puVar4 = (undefined8 *)(param_1 + unaff_x25 * unaff_x24);
  *puVar4 = CONCAT44((float)((ulong)param_2 >> 0x20) + (float)((ulong)param_4 >> 0x20),
                     (float)param_2 + (float)param_4);
  *(float *)(puVar4 + 1) = unaff_s9 + param_3;
  uVar2 = *(uint *)(unaff_x19 + 0x1e0);
  iVar3 = *(int *)(unaff_x19 + 0x1ec);
  if ((int)uVar2 <= iVar3) {
    do {
      lVar1 = (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) + (long)(int)uVar2;
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x78) + lVar1 * 4);
      in_stack_000001c8 = *(undefined4 *)(puVar4 + 1);
      in_stack_000001c0 = *puVar4;
      fVar7 = *(float *)(*(long *)(unaff_x19 + 0xd8) + lVar1 * 4 + 8);
      puVar4 = (undefined8 *)
               (*(long *)(unaff_x19 + 0x98) + (long)(int)(uVar2 - 1) * (long)(int)unaff_x24);
      uVar8 = *puVar4;
      fVar9 = *(float *)(puVar4 + 1);
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x98) + lVar1 * 4);
      *puVar4 = CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)((ulong)unaff_d11 >> 0x20) * fVar7,
                         (float)uVar8 + (float)unaff_d11 * fVar7);
      *(float *)(puVar4 + 1) = fVar9 + unaff_s10 * fVar7;
      in_stack_00000120 = unaff_x20[6];
      in_stack_00000108 = unaff_x20[3];
      uVar8 = unaff_x20[2];
      in_stack_00000118 = unaff_x20[5];
      in_stack_00000110 = unaff_x20[4];
      in_stack_000000f8 = unaff_x20[1];
      uVar10 = *unaff_x20;
      in_stack_000000f0 = uVar10;
      in_stack_00000100 = uVar8;
      fVar7 = (float)FUN_07d81e28(&stack0x000001c0,&stack0x000000f0,0);
      if (*(char *)(unaff_x23 + 0xff5) == '\0') {
        FUN_03c8f898();
        *(undefined1 *)(unaff_x23 + 0xff5) = 1;
      }
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x98) + (long)(int)uVar2 * 0xc);
      uVar14 = *puVar4;
      fVar15 = *(float *)(puVar4 + 1);
      uVar11 = **(undefined8 **)(*unaff_x22 + 0xb8);
      fVar13 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
      fVar9 = (float)uVar11;
      fVar12 = (float)((ulong)uVar11 >> 0x20);
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xa8) + (long)(int)uVar2 * 0xc);
      *puVar4 = CONCAT44((float)uVar8 + fVar12 + in_s6 * ((float)((ulong)uVar14 >> 0x20) - fVar12),
                         fVar7 + fVar9 + in_s6 * ((float)uVar14 - fVar9));
      *(float *)(puVar4 + 1) = (float)uVar10 + fVar13 + in_s6 * (fVar15 - fVar13);
      iVar3 = *(int *)(unaff_x19 + 0x1ec);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 <= iVar3);
  }
  iVar6 = *(int *)(unaff_x19 + 0x1dc);
  if (iVar6 <= iVar3) {
    do {
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x78) + (long)iVar6 * 0xc);
      in_stack_000001b8 = *(undefined4 *)(puVar4 + 1);
      in_stack_000001b0 = *puVar4;
      in_stack_000000a0 = unaff_x20[6];
      in_stack_00000088 = unaff_x20[3];
      in_stack_00000080 = unaff_x20[2];
      in_stack_00000098 = unaff_x20[5];
      in_stack_00000090 = unaff_x20[4];
      in_stack_00000078 = unaff_x20[1];
      in_stack_00000070 = *unaff_x20;
      puVar5 = (undefined4 *)(*(long *)(unaff_x19 + 0xa8) + (long)iVar6 * 0xc);
      in_stack_000000b0 = in_stack_00000070;
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000c0 = in_stack_00000080;
      in_stack_000000c8 = in_stack_00000088;
      in_stack_000000d0 = in_stack_00000090;
      in_stack_000000d8 = in_stack_00000098;
      in_stack_000000e0 = in_stack_000000a0;
      FUN_07d81e60(*puVar5,puVar5[1],puVar5[2],&stack0x000001b0,&stack0x00000070,0);
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x78) + (long)iVar6 * 0xc);
      *(undefined4 *)(puVar4 + 1) = in_stack_000001b8;
      *puVar4 = in_stack_000001b0;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= *(int *)(unaff_x19 + 0x1ec));
  }
  FUN_07d81e60(*(undefined4 *)(unaff_x19 + 0x1fc),*(undefined4 *)(unaff_x19 + 0x200),
               *(undefined4 *)(unaff_x19 + 0x204));
                    /* try { // try from 06d8e4d0 to 06e8e4ef has its CatchHandler @ 06d8e504 */
  return;
}


