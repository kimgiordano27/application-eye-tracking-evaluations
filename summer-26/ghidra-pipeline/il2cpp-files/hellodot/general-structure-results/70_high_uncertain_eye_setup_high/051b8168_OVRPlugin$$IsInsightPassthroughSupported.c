/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 051b8168
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__IsInsightPassthroughSupported(long param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  float fStack000000000000007c;
  float in_stack_00000080;
  float fStack0000000000000084;
  float in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  float in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 in_stack_000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  float in_stack_00000118;
  undefined4 uStack0000000000000120;
  undefined8 uStack0000000000000124;
  
  if ((DAT_06a7133c & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b68);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b70);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b78);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b50);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b80);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b88);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b90);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b60);
    DAT_06a7133c = 1;
  }
  puVar4 = PTR_DAT_06608b90;
  puVar3 = PTR_DAT_06608b60;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  fStack000000000000007c = 0.0;
  in_stack_00000088 = 0.0;
  in_stack_000000e8 = 0.0;
  uStack00000000000000ec = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  uStack00000000000000fc = 0;
  in_stack_000000f0 = 0;
  uStack00000000000000f4 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  uStack00000000000000b4 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0.0;
  uStack00000000000000ac = 0;
  in_stack_000000a0 = 0;
  in_stack_00000080 = 0.0;
  fStack0000000000000084 = 0.0;
  if (param_2 != 0) {
    lVar10 = FUN_034248f0(param_2,*(undefined8 *)PTR_DAT_06608b50);
    uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_038c3cfc(uVar11,*(undefined8 *)puVar4);
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x20) = uVar11;
      puVar5 = PTR_DAT_06608b80;
      puVar4 = PTR_DAT_06608b70;
      puVar3 = PTR_DAT_06608b68;
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_038c5210(&stack0x00000030,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_06608b88);
        fVar2 = DAT_013ddb4c;
        in_stack_000000c8 = CONCAT44(fStack000000000000003c,uStack0000000000000038);
        in_stack_000000d8 = CONCAT44(uStack000000000000004c,fStack0000000000000048);
        in_stack_000000d0 = CONCAT44(fStack0000000000000044,fStack0000000000000040);
        in_stack_000000e0 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
        in_stack_000000c0 = in_stack_00000030;
        in_stack_000000e8 = fStack0000000000000058;
        uStack00000000000000ec = uStack000000000000005c;
        in_stack_000000f8 = (undefined4)in_stack_00000068;
        uStack00000000000000fc = (undefined4)((ulong)in_stack_00000068 >> 0x20);
        in_stack_000000f0 = (undefined4)in_stack_00000060;
        uStack00000000000000f4 = (undefined4)(in_stack_00000060 >> 0x20);
        uVar12 = in_stack_00000060;
        while( true ) {
          fVar19 = (float)uVar12;
          uVar12 = FUN_0480642c(&stack0x000000c0,*(undefined8 *)puVar4);
          if ((uVar12 & 1) == 0) {
            FUN_04806428(&stack0x000000c0,*(undefined8 *)puVar3);
            return lVar10;
          }
          uStack00000000000000b4 = CONCAT44(in_stack_000000f8,uStack00000000000000f4);
          in_stack_000000b0 = in_stack_000000f0;
          in_stack_00000098 = in_stack_000000d8;
          in_stack_00000090 = in_stack_000000d0;
          in_stack_000000a8 = in_stack_000000e8;
          uStack00000000000000ac = uStack00000000000000ec;
          in_stack_000000a0 = in_stack_000000e0;
          FUN_051b88b0(&stack0x00000030,&stack0x00000090,*(undefined8 *)(param_1 + 0x28),0);
          fVar9 = fStack0000000000000048;
          fVar8 = fStack0000000000000044;
          fVar7 = fStack0000000000000040;
          fVar6 = fStack000000000000003c;
          fStack0000000000000084 = fStack0000000000000044;
          in_stack_00000088 = fStack0000000000000048;
          in_stack_00000080 = fStack0000000000000040;
          in_stack_00000078 = uStack0000000000000038;
          fStack000000000000007c = fStack000000000000003c;
          in_stack_00000070 = in_stack_00000030;
          fVar18 = 0.0;
          fVar17 = fVar2;
          fVar16 = (float)FUN_05ee9d24(fVar2,0);
          fStack0000000000000084 = fVar6 * fVar17 + fVar9 * fVar18 + fVar8 * fVar19;
          uVar12 = (ulong)(uint)fStack0000000000000084;
          fStack000000000000007c =
               (fVar7 * fVar18 + fVar9 * fVar16 + fVar6 * fVar19) - fVar8 * fVar17;
          in_stack_00000080 = (fVar8 * fVar16 + fVar9 * fVar17 + fVar7 * fVar19) - fVar6 * fVar18;
          fStack0000000000000084 = fStack0000000000000084 - fVar7 * fVar16;
          in_stack_00000088 = ((fVar9 * fVar19 - fVar6 * fVar16) - fVar7 * fVar17) - fVar8 * fVar18;
          FUN_051b8900(&stack0x00000090,&stack0x00000070,*(undefined8 *)(param_1 + 0x28),0);
          lVar13 = *(long *)(lVar10 + 0x20);
          if (lVar13 == 0) break;
          in_stack_00000108 = in_stack_00000098;
          in_stack_00000100 = in_stack_00000090;
          in_stack_00000110 = in_stack_000000a0;
          uStack0000000000000124 = uStack00000000000000b4;
          lVar15 = *(long *)puVar5;
          in_stack_00000118 = in_stack_000000a8;
          uStack0000000000000120 = in_stack_000000b0;
          lVar14 = *(long *)(lVar13 + 0x10);
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            lVar14 = lVar14 + (long)(int)uVar1 * 0x2c;
            *(undefined8 *)(lVar14 + 0x44) = uStack00000000000000b4;
            *(ulong *)(lVar14 + 0x3c) = CONCAT44(in_stack_000000b0,uStack00000000000000ac);
            *(undefined8 *)(lVar14 + 0x28) = in_stack_00000098;
            *(undefined8 *)(lVar14 + 0x20) = in_stack_00000090;
            *(ulong *)(lVar14 + 0x38) = CONCAT44(uStack00000000000000ac,in_stack_000000a8);
            *(undefined8 *)(lVar14 + 0x30) = in_stack_000000a0;
          }
          else {
            uStack0000000000000038 = (undefined4)in_stack_00000098;
            fStack000000000000003c = (float)((ulong)in_stack_00000098 >> 0x20);
            in_stack_00000030 = in_stack_00000090;
            fStack0000000000000048 = in_stack_000000a8;
            fStack0000000000000040 = (float)in_stack_000000a0;
            fStack0000000000000044 = (float)((ulong)in_stack_000000a0 >> 0x20);
            uStack0000000000000054 = (undefined4)uStack00000000000000b4;
            fStack0000000000000058 = (float)((ulong)uStack00000000000000b4 >> 0x20);
            uStack0000000000000050 = in_stack_000000b0;
            FUN_038c45b0(lVar13,&stack0x00000030,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


