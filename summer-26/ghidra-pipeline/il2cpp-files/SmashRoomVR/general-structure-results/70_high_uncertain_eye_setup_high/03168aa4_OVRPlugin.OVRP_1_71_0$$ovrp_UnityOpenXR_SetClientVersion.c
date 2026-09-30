/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_SetClientVersion
ENTRY_POINT: 03168aa4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_SetClientVersion
               (float param_1,float param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x19;
  long *unaff_x20;
  float *unaff_x21;
  long *unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float unaff_s8;
  float fVar16;
  float unaff_s10;
  float fVar17;
  float fVar18;
  float unaff_s11;
  ulong uVar19;
  float unaff_s12;
  ulong uVar20;
  float unaff_s13;
  float fVar21;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float in_stack_00000040;
  
  fStack0000000000000028 = param_1;
  fStack000000000000003c = (float)FUN_039274f8(param_4,0);
  fVar15 = *unaff_x21;
  fStack0000000000000034 = unaff_x21[1];
  fVar6 = unaff_x21[2];
  fVar21 = param_3;
  fStack0000000000000024 = param_2;
  fVar7 = (float)FUN_039274f8();
  fVar10 = param_2;
  fVar18 = fVar21;
  lVar2 = FUN_0391c27c();
  if (lVar2 != 0) {
    fStack000000000000001c = unaff_s8;
                    /* try { // try from 03168af8 to 03268afb has its CatchHandler @ 03168c14 */
    fVar8 = (float)FUN_0392a7f0(lVar2,0);
                    /* try { // try from 03168b04 to 03268b13 has its CatchHandler @ 03168c10 */
    lVar2 = FUN_0391c27c();
    if (lVar2 != 0) {
                    /* try { // try from 03168b18 to 03268b23 has its CatchHandler @ 03168c0c */
      FUN_0392a7f0(lVar2,0);
      lVar2 = FUN_0391c27c();
      if (lVar2 != 0) {
        FUN_0392a7f0(lVar2,0);
        fVar1 = DAT_00b55370;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          param_2 = fStack0000000000000034 - param_2;
          fVar9 = SQRT(unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
          lVar2 = 0;
          fStack0000000000000034 = 1.0 / fVar10;
          uVar5 = 0;
          fVar16 = 0.0;
          fVar12 = fVar9 * fStack000000000000003c;
          fStack000000000000003c = unaff_s13 + in_stack_00000040 * fVar9 * fStack0000000000000024;
          fVar9 = fStack0000000000000028 + in_stack_00000040 * fVar9 * param_3;
          uVar19 = (ulong)(uint)param_2;
          uVar20 = (ulong)(uint)(fVar6 - fVar21);
          fVar10 = fVar15 - fVar7;
          do {
            fVar21 = *unaff_x21;
            uVar13 = (ulong)(uint)unaff_x21[1];
            uVar14 = (ulong)(uint)unaff_x21[2];
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar21 = (float)FUN_0316925c(fVar21,uVar13,uVar14,
                                         fStack000000000000001c + in_stack_00000040 * fVar12,
                                         fStack000000000000003c,fVar9);
            if (*(char *)(unaff_x25 + 0x25c) == '\0') {
              thunk_FUN_01ad9084();
              *(undefined1 *)(unaff_x25 + 0x25c) = 1;
            }
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            lVar3 = *unaff_x20;
            if (lVar3 == 0) goto LAB_03168ea0;
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_03168e9c;
            lVar3 = lVar3 + lVar2;
            *(float *)(lVar3 + 0x20) = (1.0 / fVar8) * fVar21;
            *(float *)(lVar3 + 0x24) = fStack0000000000000034 * (float)uVar13;
            *(float *)(lVar3 + 0x28) = (1.0 / fVar18) * (float)uVar14;
            lVar3 = *unaff_x20;
            if (lVar3 == 0) goto LAB_03168ea0;
            if (DAT_03fed25d == '\0') {
              thunk_FUN_01ad9084();
              DAT_03fed25d = '\x01';
            }
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar10 = fVar21 - fVar10;
            fVar7 = (float)uVar13 - (float)uVar19;
            fVar15 = (float)uVar14 - (float)uVar20;
            fVar17 = SQRT(fVar15 * fVar15 + fVar10 * fVar10 + fVar7 * fVar7);
            fVar6 = fVar1;
            if (fVar17 <= fVar1) {
              if (DAT_03fed257 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed257 = '\x01';
              }
              pfVar4 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
              ;
              fVar10 = *pfVar4;
              fVar7 = pfVar4[1];
              fVar15 = pfVar4[2];
            }
            else {
              fVar10 = fVar10 / fVar17;
              fVar7 = fVar7 / fVar17;
              fVar15 = fVar15 / fVar17;
            }
            uVar11 = FUN_039148b4(fVar10,0);
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_03168e9c;
            lVar3 = lVar3 + lVar2;
            *(undefined4 *)(lVar3 + 0x2c) = uVar11;
            *(float *)(lVar3 + 0x30) = fVar7;
            *(float *)(lVar3 + 0x34) = fVar15;
            *(float *)(lVar3 + 0x38) = fVar6;
            uVar5 = uVar5 + 1;
            fVar16 = fVar16 + fVar17;
            lVar2 = lVar2 + 0x20;
            uVar19 = uVar13;
            uVar20 = uVar14;
            fVar10 = fVar21;
          } while ((long)uVar5 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar3 = *unaff_x20;
            lVar2 = 0x5c;
            uVar5 = 1;
            do {
              if (lVar3 == 0) goto LAB_03168ea0;
              if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) ||
                 (*(uint *)(lVar3 + 0x18) <= uVar5)) {
LAB_03168e9c:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              lVar3 = lVar3 + lVar2;
              fVar18 = *(float *)(lVar3 + -0x38);
              fVar21 = *(float *)(lVar3 + -0x34);
              fVar10 = *(float *)(lVar3 + -0x3c);
              fVar15 = *(float *)(lVar3 + -0x1c);
              fVar7 = *(float *)(lVar3 + -0x18);
              fVar6 = *(float *)(lVar3 + -0x14);
              if (*(char *)(unaff_x25 + 0x25c) == '\0') {
                thunk_FUN_01ad9084();
                *(undefined1 *)(unaff_x25 + 0x25c) = 1;
              }
              if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              lVar3 = *unaff_x20;
              if (lVar3 == 0) goto LAB_03168ea0;
              if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) ||
                 (*(uint *)(lVar3 + 0x18) <= uVar5)) goto LAB_03168e9c;
              fVar10 = fVar10 - fVar15;
              fVar18 = fVar18 - fVar7;
              fVar21 = fVar21 - fVar6;
              *(float *)(lVar3 + lVar2) =
                   SQRT(fVar10 * fVar10 + fVar18 * fVar18 + fVar21 * fVar21) / fVar16 +
                   ((float *)(lVar3 + lVar2))[-8];
              uVar5 = uVar5 + 1;
              lVar2 = lVar2 + 0x20;
            } while ((long)uVar5 < (long)*(int *)(unaff_x19 + 0x50));
          }
        }
        return;
      }
    }
  }
LAB_03168ea0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


