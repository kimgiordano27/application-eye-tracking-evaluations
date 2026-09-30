/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$.cctor
ENTRY_POINT: 0697abb0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_95_0___cctor(void)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar13;
  undefined8 uStack0000000000000000;
  undefined8 *puStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  ulong in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  ulong in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  int in_stack_00000198;
  long in_stack_000001b0;
  int in_stack_000001b8;
  int in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  ulong uVar12;
  
  puVar1 = (undefined8 *)(unaff_x19 + 0x19c);
  puStack0000000000000008 = *(undefined8 **)(unaff_x19 + 0x1a4);
  uStack0000000000000000 = *puVar1;
  uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 0x1b4);
  uStack0000000000000010 = *(undefined8 *)(unaff_x19 + 0x1ac);
  uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0x1c4);
  uStack0000000000000020 = *(undefined8 *)(unaff_x19 + 0x1bc);
  uStack0000000000000038 = *(undefined8 *)(unaff_x19 + 0x1d4);
  uStack0000000000000030 = *(undefined8 *)(unaff_x19 + 0x1cc);
  FUN_07c88a54(&stack0x00000100,0);
  in_stack_000000c8 = puStack0000000000000008;
  in_stack_000000c0 = uStack0000000000000000;
  in_stack_000000d8 = uStack0000000000000018;
  in_stack_000000d0 = uStack0000000000000010;
  in_stack_000000e8 = uStack0000000000000028;
  in_stack_000000e0 = uStack0000000000000020;
  in_stack_000000f8 = uStack0000000000000038;
  in_stack_000000f0 = uStack0000000000000030;
  in_stack_00000088 = in_stack_00000108;
  in_stack_00000080 = in_stack_00000100;
  in_stack_00000098 = in_stack_00000118;
  in_stack_00000090 = in_stack_00000110;
  in_stack_000000a8 = in_stack_00000128;
  in_stack_000000a0 = in_stack_00000120;
  in_stack_000000b8 = in_stack_00000138;
  in_stack_000000b0 = in_stack_00000130;
  uVar12 = in_stack_00000100;
  uVar13 = in_stack_00000120;
  uVar6 = FUN_07c88548(&stack0x000000c0,&stack0x00000080,0);
  if ((uVar6 & 1) == 0) {
    FUN_051214f8(&stack0x00000230,*(undefined8 *)PTR_DAT_084b75d0);
    memcpy(&stack0x000001b0,&stack0x00000000,0x80);
    puVar3 = PTR_DAT_084b75c0;
    fVar2 = DAT_015c5b88;
    uStack0000000000000000 = 0;
    iVar5 = in_stack_000001c0 + 1;
    lVar7 = *(long *)PTR_DAT_084b75c0;
    puStack0000000000000008 = &stack0x000001b0;
    in_stack_000001c0 = iVar5;
    if (iVar5 < in_stack_000001b8) {
      do {
        lVar4 = in_stack_000001b0;
        in_stack_000001c0 = iVar5;
        if ((*(ushort *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        memmove(&stack0x000001c8,(void *)(lVar4 + (long)iVar5 * 0x68),0x68);
        memcpy(&stack0x00000140,&stack0x000001c8,0x68);
        iVar5 = FUN_07d2cd08(&stack0x00000140,0);
        if (((iVar5 == *(int *)(unaff_x19 + 0x454)) ||
            (iVar5 = FUN_07d2cd44(&stack0x00000140,0), iVar5 == *(int *)(unaff_x19 + 0x454))) &&
           (FUN_07d2cd08(&stack0x00000140,0), 0 < in_stack_00000198)) {
          iVar5 = 0;
          do {
            FUN_07d2cd88(&stack0x00000140,iVar5,0);
            FUN_07c888bc(puVar1,0);
            fVar10 = (float)uVar12;
            if (fVar10 < 0.0) {
              fVar9 = fVar10;
              FUN_07d2cdf0(&stack0x00000140,iVar5,0);
              fVar8 = (float)FUN_07c88914(puVar1,0);
              fVar11 = (float)uVar13 * *(float *)(unaff_x19 + 700);
              uVar12 = (ulong)(uint)fVar11;
              if ((fVar2 < ABS(fVar11 + fVar8 * *(float *)(unaff_x19 + 0x2b4) +
                                        fVar9 * *(float *)(unaff_x19 + 0x2b8))) &&
                 (fVar9 = (float)FUN_07d2ce10(&stack0x00000140,iVar5,0), fVar9 < 0.0)) {
                if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                fVar8 = -fVar10 / *(float *)(*(long *)(unaff_x19 + 0x30) + 0x58);
                fVar10 = 1.0;
                if (fVar8 <= 1.0) {
                  fVar10 = fVar8;
                }
                uVar13 = (ulong)(uint)(1.0 - fVar10);
                fVar11 = 1.0;
                if (0.0 <= fVar8) {
                  fVar11 = 1.0 - fVar10;
                }
                uVar12 = (ulong)(uint)fVar11;
                FUN_07d2ce2c(fVar9 * fVar11,&stack0x00000140,iVar5,0);
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < in_stack_00000198);
        }
        iVar5 = in_stack_000001c0 + 1;
        lVar7 = *(long *)puVar3;
        in_stack_000001c0 = iVar5;
      } while (iVar5 < in_stack_000001b8);
    }
    in_stack_000001e8 = 0;
    in_stack_000001e0 = 0;
    in_stack_000001d8 = 0;
    in_stack_000001d0 = 0;
    in_stack_000001c8 = 0;
    FUN_061b8a0c(&stack0x000001b0,*(undefined8 *)PTR_DAT_084b75b8);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b75d8,0);
  }
  return;
}


