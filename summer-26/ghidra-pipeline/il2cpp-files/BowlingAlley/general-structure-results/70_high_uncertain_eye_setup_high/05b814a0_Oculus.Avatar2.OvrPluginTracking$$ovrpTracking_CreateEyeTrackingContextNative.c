/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateEyeTrackingContextNative
ENTRY_POINT: 05b814a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateEyeTrackingContextNative(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  float fStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  
  lVar4 = *(long *)(**(long **)(param_1 + 0x4a0) + 0xb8);
  uStack0000000000000088 = *(undefined8 *)(lVar4 + 0x68);
  uStack0000000000000080 = *(undefined8 *)(lVar4 + 0x60);
  uStack0000000000000098 = *(undefined8 *)(lVar4 + 0x78);
  uStack0000000000000090 = *(undefined8 *)(lVar4 + 0x70);
  uStack0000000000000068 = *(undefined8 *)(lVar4 + 0x48);
  uStack0000000000000060 = *(undefined8 *)(lVar4 + 0x40);
  uStack0000000000000078 = *(undefined8 *)(lVar4 + 0x58);
  uStack0000000000000070 = *(undefined8 *)(lVar4 + 0x50);
  uStack00000000000000e0 = uStack0000000000000060;
  uStack00000000000000e8 = uStack0000000000000068;
  uStack00000000000000f0 = uStack0000000000000070;
  uStack00000000000000f8 = uStack0000000000000078;
  uStack0000000000000100 = uStack0000000000000080;
  uStack0000000000000108 = uStack0000000000000088;
  uStack0000000000000110 = uStack0000000000000090;
  uStack0000000000000118 = uStack0000000000000098;
  fVar11 = fStack00000000000001a8;
  fVar7 = (float)FUN_06bdb610(in_stack_00000018._4_4_,fStack00000000000001a8,uStack00000000000001ac,
                              &stack0x000000e0,0);
  fStack0000000000000014 = fVar11;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar2 = FUN_05b8a5b0(*(long *)(unaff_x19 + 0x20),0);
    fVar8 = (float)FUN_05b8a6a0(uVar2,0);
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (lVar4 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), puVar1 = PTR_DAT_072a6110, lVar4 != 0))
    {
      fVar9 = (float)FUN_06bf4e88(lVar4,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_05b8176c:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        fVar17 = *(float *)(lVar4 + 0x20);
        fVar14 = *(float *)(lVar4 + 0x24);
        fVar15 = fVar8 * fVar9 * 0.5;
        fVar9 = fVar11 * fVar9 * 0.5;
        fVar11 = fStack00000000000001a8;
        fVar8 = (float)FUN_05b81800(in_stack_00000018._4_4_,fStack00000000000001a8,
                                    uStack00000000000001ac,fVar17,fVar14);
        fVar8 = fVar7 + fVar17 * (fVar15 + fVar8);
        fVar11 = fVar14 * (fVar9 + fVar11);
        fVar16 = fStack0000000000000014 + fVar11;
        if (*(char *)(unaff_x19 + 0x44) == '\0') {
LAB_05b81724:
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_05b8c78c(fVar8,fVar16,0,*(long *)(unaff_x19 + 0x20),0);
            return;
          }
        }
        else if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                (lVar4 = FUN_05b8ab68(*(long *)(unaff_x19 + 0x20),0), lVar4 != 0)) {
          uVar2 = FUN_05b8a5b0(lVar4,0);
          fVar10 = (float)FUN_05b8a6a0(uVar2,0);
          lVar5 = 0;
          uVar6 = 1;
          while( true ) {
            lVar3 = *(long *)puVar1;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar3 = *(long *)puVar1;
            }
            if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_05b81768;
            if ((long)*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) <= (long)uVar6) goto LAB_05b81724;
            uVar12 = (ulong)(uint)(fVar16 + fVar9 * fVar14);
            uVar13 = 0;
            uVar2 = FUN_06bdb610(fVar8 + fVar15 * fVar17,uVar12,0,&stack0x00000120,0);
            lVar3 = FUN_06be6b04(lVar4,0);
            if (lVar3 == 0) goto LAB_05b81768;
            fVar14 = (float)FUN_06bf6070(uVar2,uVar12,uVar13,lVar3,0);
            if (((((float)uVar12 < fVar11 + fVar11 * -0.5) && (fVar11 * -0.5 <= (float)uVar12)) &&
                (fVar10 * -0.5 <= fVar14)) && (fVar14 < fVar10 + fVar10 * -0.5)) goto LAB_05b81724;
            lVar3 = *(long *)puVar1;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar3 = *(long *)puVar1;
            }
            lVar3 = **(long **)(lVar3 + 0xb8);
            if (lVar3 == 0) goto LAB_05b81768;
            if (*(uint *)(lVar3 + 0x18) <= uVar6) break;
            fVar17 = *(float *)(lVar3 + lVar5 + 0x28);
            fVar14 = *(float *)(lVar3 + lVar5 + 0x2c);
            fVar16 = fStack00000000000001a8;
            fVar8 = (float)FUN_05b81800(in_stack_00000018._4_4_,fStack00000000000001a8,
                                        uStack00000000000001ac,fVar17,fVar14);
            fVar8 = fVar7 + fVar17 * (fVar15 + fVar8);
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 8;
            fVar16 = fStack0000000000000014 + fVar14 * (fVar9 + fVar16);
          }
          goto LAB_05b8176c;
        }
      }
    }
  }
LAB_05b81768:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


