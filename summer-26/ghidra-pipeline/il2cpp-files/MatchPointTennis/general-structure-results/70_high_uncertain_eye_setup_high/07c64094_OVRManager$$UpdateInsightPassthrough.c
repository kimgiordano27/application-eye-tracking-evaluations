/*
FUNCTION_NAME: OVRManager$$UpdateInsightPassthrough
ENTRY_POINT: 07c64094
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateInsightPassthrough
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  float *unaff_x21;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_000000c8;
  
  if (param_4 != 0) {
    fVar11 = unaff_x21[1];
    in_stack_000000c8._4_4_ = unaff_x21[2];
    fVar12 = *unaff_x21;
    fVar7 = (float)FUN_09539d64(param_4,0);
    if (DAT_0a51bf40 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf40 = '\x01';
    }
    lVar3 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar10 = *(float *)(lVar3 + 0x18);
    fVar14 = *(float *)(lVar3 + 0x1c);
    fVar13 = *(float *)(lVar3 + 0x20);
    if (DAT_0a5233ad == '\0') {
      FUN_04447ba8(PTR_DAT_09f1f580);
      DAT_0a5233ad = '\x01';
    }
    fVar8 = fVar13 * fVar13 + fVar10 * fVar10 + fVar14 * fVar14;
    fVar12 = fVar12 - fVar7;
    fVar11 = fVar11 - param_2;
    param_3 = in_stack_000000c8._4_4_ - param_3;
    fVar7 = **(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8);
    if (fVar7 <= fVar8) {
      fVar9 = param_3 * fVar13 + fVar12 * fVar10 + fVar11 * fVar14;
      fVar7 = (fVar10 * fVar9) / fVar8;
      fVar12 = fVar12 - fVar7;
      fVar11 = fVar11 - (fVar14 * fVar9) / fVar8;
      param_3 = param_3 - (fVar13 * fVar9) / fVar8;
    }
    if (DAT_0a51c009 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51c009 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    puVar1 = PTR_DAT_09f25358;
    if (*(long *)(unaff_x19 + 0x128) != 0) {
      fVar10 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + param_3 * param_3);
      fVar11 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x128),0);
      fVar12 = fVar7;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar13 = (float)FUN_09538070();
      plVar6 = *(long **)(unaff_x19 + 0x138);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_09537b20(fVar11 + fVar10 * fVar13,unaff_x21[1],fVar7 + fVar10 * fVar12,
                   *(undefined4 *)(unaff_x20 + 0xc),*(undefined4 *)(unaff_x20 + 0x10),
                   *(undefined4 *)(unaff_x20 + 0x14),*(undefined4 *)(unaff_x20 + 0x18),
                   &stack0x00000040,0);
      uStack0000000000000074 = CONCAT44(in_stack_00000058,uStack0000000000000054);
      uStack0000000000000068 = uStack0000000000000048;
      in_stack_00000060 = in_stack_00000040;
      uStack000000000000006c = uStack000000000000004c;
      uStack0000000000000070 = uStack0000000000000050;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09f4d938) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_07c642b8;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_044822ac(plVar6,*(long *)PTR_DAT_09f4d938,2);
LAB_07c642b8:
        (*(code *)*puVar2)(plVar6,&stack0x00000060,puVar2[1]);
        *(undefined8 *)(unaff_x19 + 0x14c) = in_stack_00000008;
        *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000;
        *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000014;
        *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


