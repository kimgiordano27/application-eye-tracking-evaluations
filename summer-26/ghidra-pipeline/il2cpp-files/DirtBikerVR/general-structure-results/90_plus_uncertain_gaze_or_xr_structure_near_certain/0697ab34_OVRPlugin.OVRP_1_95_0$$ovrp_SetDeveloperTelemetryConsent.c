/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 0697ab34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(void)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar13;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
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
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  int iStack0000000000000198;
  undefined8 in_stack_000001a0;
  long in_stack_000001b0;
  int iStack00000000000001b8;
  int iStack00000000000001c0;
  undefined4 uStack00000000000001c4;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  ulong uVar12;
  
  FUN_03a8a718(PTR_DAT_08486be8);
  FUN_03a8a718(PTR_DAT_084b75b8);
  FUN_03a8a718(PTR_DAT_084b75c0);
  FUN_03a8a718(PTR_DAT_084b75c8);
  FUN_03a8a718(PTR_DAT_084b75d0);
  FUN_03a8a718(PTR_DAT_084b75d8);
  *(undefined1 *)(unaff_x20 + 0x133) = 1;
  in_stack_000001a0 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  _iStack0000000000000198 = 0;
  in_stack_00000190 = 0;
  _iStack00000000000001b8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001c8 = 0;
  _iStack00000000000001c0 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  if (*(char *)(unaff_x19 + 0xc4) != '\0') {
    puVar1 = (undefined8 *)(unaff_x19 + 0x19c);
    in_stack_00000008 = *(undefined8 **)(unaff_x19 + 0x1a4);
    in_stack_00000000 = *puVar1;
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x1b4);
    in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1ac);
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x1c4);
    in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x1bc);
    in_stack_00000038 = *(undefined8 *)(unaff_x19 + 0x1d4);
    in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x1cc);
    FUN_07c88a54(&stack0x00000100,0);
    in_stack_000000c8 = in_stack_00000008;
    in_stack_000000c0 = in_stack_00000000;
    in_stack_000000d8 = in_stack_00000018;
    in_stack_000000d0 = in_stack_00000010;
    in_stack_000000e8 = in_stack_00000028;
    in_stack_000000e0 = in_stack_00000020;
    in_stack_000000f8 = in_stack_00000038;
    in_stack_000000f0 = in_stack_00000030;
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
      in_stack_00000000 = 0;
      iVar5 = iStack00000000000001c0 + 1;
      lVar7 = *(long *)PTR_DAT_084b75c0;
      _iStack00000000000001c0 = CONCAT44(uStack00000000000001c4,iVar5);
      in_stack_00000008 = &stack0x000001b0;
      if (iVar5 < iStack00000000000001b8) {
        do {
          lVar4 = in_stack_000001b0;
          if ((*(ushort *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          memmove(&stack0x000001c8,(void *)(lVar4 + (long)iVar5 * 0x68),0x68);
          memcpy(&stack0x00000140,&stack0x000001c8,0x68);
          iVar5 = FUN_07d2cd08(&stack0x00000140,0);
          if ((iVar5 == *(int *)(unaff_x19 + 0x454)) ||
             (iVar5 = FUN_07d2cd44(&stack0x00000140,0), iVar5 == *(int *)(unaff_x19 + 0x454))) {
            FUN_07d2cd08(&stack0x00000140,0);
            if (0 < iStack0000000000000198) {
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
              } while (iVar5 < iStack0000000000000198);
            }
          }
          iVar5 = iStack00000000000001c0 + 1;
          lVar7 = *(long *)puVar3;
          _iStack00000000000001c0 = CONCAT44(uStack00000000000001c4,iVar5);
        } while (iVar5 < iStack00000000000001b8);
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
  }
  return;
}


