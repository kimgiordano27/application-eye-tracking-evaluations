/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateFaceTrackingContextNative
ENTRY_POINT: 05b81364
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateFaceTrackingContextNative(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int in_w8;
  long lVar6;
  long unaff_x19;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
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
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  
  if (in_w8 == 0) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (lVar2 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), puVar1 = PTR_DAT_072794f0, lVar2 != 0)) {
    lVar2 = FUN_06bf4764(lVar2,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar6);
    }
    uVar3 = FUN_06be9890(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (DAT_076d0c67 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_0727a4a0);
        DAT_076d0c67 = '\x01';
      }
      lVar6 = *(long *)(*(long *)PTR_DAT_0727a4a0 + 0xb8);
      in_stack_000000c8 = *(undefined8 *)(lVar6 + 0x68);
      in_stack_000000c0 = *(undefined8 *)(lVar6 + 0x60);
      in_stack_000000d8 = *(undefined8 *)(lVar6 + 0x78);
      in_stack_000000d0 = *(undefined8 *)(lVar6 + 0x70);
      in_stack_000000a8 = *(undefined8 *)(lVar6 + 0x48);
      in_stack_000000a0 = *(undefined8 *)(lVar6 + 0x40);
      in_stack_000000b8 = *(undefined8 *)(lVar6 + 0x58);
      in_stack_000000b0 = *(undefined8 *)(lVar6 + 0x50);
    }
    else {
      if (lVar2 == 0) goto LAB_05b81768;
      FUN_06bf4380(&stack0x00000060,lVar2,0);
      in_stack_000000a8 = in_stack_00000068;
      in_stack_000000a0 = in_stack_00000060;
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000b0 = in_stack_00000070;
      in_stack_000000c8 = in_stack_00000088;
      in_stack_000000c0 = in_stack_00000080;
      in_stack_000000d8 = in_stack_00000098;
      in_stack_000000d0 = in_stack_00000090;
    }
    in_stack_00000128 = in_stack_000000a8;
    in_stack_00000120 = in_stack_000000a0;
    in_stack_00000138 = in_stack_000000b8;
    in_stack_00000130 = in_stack_000000b0;
    in_stack_00000148 = in_stack_000000c8;
    in_stack_00000140 = in_stack_000000c0;
    in_stack_00000158 = in_stack_000000d8;
    in_stack_00000150 = in_stack_000000d0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_06be9890(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (DAT_076d0c67 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_0727a4a0);
        DAT_076d0c67 = '\x01';
      }
      lVar2 = *(long *)(*(long *)PTR_DAT_0727a4a0 + 0xb8);
      in_stack_00000088 = *(undefined8 *)(lVar2 + 0x68);
      in_stack_00000080 = *(undefined8 *)(lVar2 + 0x60);
      in_stack_00000098 = *(undefined8 *)(lVar2 + 0x78);
      in_stack_00000090 = *(undefined8 *)(lVar2 + 0x70);
      in_stack_00000068 = *(undefined8 *)(lVar2 + 0x48);
      in_stack_00000060 = *(undefined8 *)(lVar2 + 0x40);
      in_stack_00000078 = *(undefined8 *)(lVar2 + 0x58);
      in_stack_00000070 = *(undefined8 *)(lVar2 + 0x50);
    }
    else {
      if (lVar2 == 0) goto LAB_05b81768;
      FUN_06bf51e8(&stack0x00000020,lVar2,0);
      in_stack_00000068 = in_stack_00000028;
      in_stack_00000060 = in_stack_00000020;
      in_stack_00000078 = in_stack_00000038;
      in_stack_00000070 = in_stack_00000030;
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      in_stack_00000098 = in_stack_00000058;
      in_stack_00000090 = in_stack_00000050;
    }
    in_stack_000000e8 = in_stack_00000068;
    in_stack_000000e0 = in_stack_00000060;
    in_stack_000000f8 = in_stack_00000078;
    in_stack_000000f0 = in_stack_00000070;
    in_stack_00000108 = in_stack_00000088;
    in_stack_00000100 = in_stack_00000080;
    in_stack_00000118 = in_stack_00000098;
    in_stack_00000110 = in_stack_00000090;
    fVar11 = fStack00000000000001a8;
    fVar7 = (float)FUN_06bdb610(in_stack_00000018._4_4_,fStack00000000000001a8,
                                uStack00000000000001ac,&stack0x000000e0,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar12 = fVar11;
      uVar4 = FUN_05b8a5b0(*(long *)(unaff_x19 + 0x20),0);
      fVar8 = (float)FUN_05b8a6a0(uVar4,0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar2 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), puVar1 = PTR_DAT_072a6110, lVar2 != 0
         )) {
        fVar9 = (float)FUN_06bf4e88(lVar2,0);
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = **(long **)(lVar2 + 0xb8);
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x18) == 0) {
LAB_05b8176c:
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          fVar18 = *(float *)(lVar2 + 0x20);
          fVar15 = *(float *)(lVar2 + 0x24);
          fVar16 = fVar8 * fVar9 * 0.5;
          fVar9 = fVar12 * fVar9 * 0.5;
          fVar12 = fStack00000000000001a8;
          fVar8 = (float)FUN_05b81800(in_stack_00000018._4_4_,fStack00000000000001a8,
                                      uStack00000000000001ac,fVar18,fVar15);
          fVar8 = fVar7 + fVar18 * (fVar16 + fVar8);
          fVar12 = fVar15 * (fVar9 + fVar12);
          fVar17 = fVar11 + fVar12;
          if (*(char *)(unaff_x19 + 0x44) == '\0') {
LAB_05b81724:
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              FUN_05b8c78c(fVar8,fVar17,0,*(long *)(unaff_x19 + 0x20),0);
              return;
            }
          }
          else if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                  (lVar2 = FUN_05b8ab68(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
            uVar4 = FUN_05b8a5b0(lVar2,0);
            fVar10 = (float)FUN_05b8a6a0(uVar4,0);
            lVar6 = 0;
            uVar3 = 1;
            while( true ) {
              lVar5 = *(long *)puVar1;
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar5 = *(long *)puVar1;
              }
              if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_05b81768;
              if ((long)*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= (long)uVar3)
              goto LAB_05b81724;
              uVar13 = (ulong)(uint)(fVar17 + fVar9 * fVar15);
              uVar14 = 0;
              uVar4 = FUN_06bdb610(fVar8 + fVar16 * fVar18,uVar13,0,&stack0x00000120,0);
              lVar5 = FUN_06be6b04(lVar2,0);
              if (lVar5 == 0) goto LAB_05b81768;
              fVar15 = (float)FUN_06bf6070(uVar4,uVar13,uVar14,lVar5,0);
              if (((((float)uVar13 < fVar12 + fVar12 * -0.5) && (fVar12 * -0.5 <= (float)uVar13)) &&
                  (fVar10 * -0.5 <= fVar15)) && (fVar15 < fVar10 + fVar10 * -0.5))
              goto LAB_05b81724;
              lVar5 = *(long *)puVar1;
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar5 = *(long *)puVar1;
              }
              lVar5 = **(long **)(lVar5 + 0xb8);
              if (lVar5 == 0) goto LAB_05b81768;
              if (*(uint *)(lVar5 + 0x18) <= uVar3) break;
              fVar18 = *(float *)(lVar5 + lVar6 + 0x28);
              fVar15 = *(float *)(lVar5 + lVar6 + 0x2c);
              fVar17 = fStack00000000000001a8;
              fVar8 = (float)FUN_05b81800(in_stack_00000018._4_4_,fStack00000000000001a8,
                                          uStack00000000000001ac,fVar18,fVar15);
              fVar8 = fVar7 + fVar18 * (fVar16 + fVar8);
              uVar3 = uVar3 + 1;
              lVar6 = lVar6 + 8;
              fVar17 = fVar11 + fVar15 * (fVar9 + fVar17);
            }
            goto LAB_05b8176c;
          }
        }
      }
    }
  }
LAB_05b81768:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


