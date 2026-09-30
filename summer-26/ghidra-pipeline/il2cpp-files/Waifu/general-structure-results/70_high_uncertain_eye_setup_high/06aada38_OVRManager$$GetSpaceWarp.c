/*
FUNCTION_NAME: OVRManager$$GetSpaceWarp
ENTRY_POINT: 06aada38
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager__GetSpaceWarp
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,undefined8 param_5,
               long param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long *unaff_x25;
  long *plVar10;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  float unaff_s9;
  undefined8 unaff_d10;
  undefined8 uVar22;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  do {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_6) {
        puVar5 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        uVar17 = param_3;
        uVar20 = param_4;
        uVar22 = unaff_d10;
        goto LAB_06aada74;
      }
      in_x9 = in_x9 - 1;
      piVar9 = piVar9 + 4;
    } while (in_x9 != 0);
    do {
      puVar5 = (undefined8 *)FUN_0338f71c(unaff_x25,param_6,0);
      uVar17 = param_3;
      uVar20 = param_4;
      uVar22 = unaff_d10;
LAB_06aada74:
      iVar4 = (*(code *)*puVar5)(unaff_x25,puVar5[1]);
      if (iVar4 <= unaff_w24) {
        return;
      }
      if (*(float *)(unaff_x20 + 0x1c) < unaff_s9) {
        return;
      }
      plVar10 = (long *)unaff_x21[0x27];
      if (plVar10 == (long *)0x0) goto LAB_06aade38;
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)(unaff_x28 + 0xf20)) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_06aadaec;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0338f71c(plVar10,*(long *)(unaff_x28 + 0xf20),1);
LAB_06aadaec:
      unaff_d10 = (*(code *)*puVar5)(plVar10,unaff_w24,puVar5[1]);
      if (unaff_x19 == 0) goto LAB_06aade38;
      uVar8 = unaff_d15;
      uVar21 = unaff_d14;
      uVar6 = FUN_06aabad8(uVar22,unaff_d15,unaff_d14,unaff_d10,uVar17,uVar20);
      fVar18 = (float)uVar21;
      fVar14 = (float)uVar8;
      if ((uVar6 & 1) != 0) {
        if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar11 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                                  (&stack0x00000020);
        if (*(char *)(unaff_x22 + 0xff6) == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x22 + 0xff6) = 1;
        }
        if (*(int *)(*(long *)(unaff_x29 + 0x8b0) + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar11 = (float)uVar22 - fVar11;
        fVar14 = (float)unaff_d15 - fVar14;
        fVar18 = (float)unaff_d14 - fVar18;
        fVar18 = fVar18 * fVar18;
        fVar15 = *(float *)(unaff_x21 + 0x28);
        fVar14 = unaff_s9 + SQRT(fVar18 + fVar11 * fVar11 + fVar14 * fVar14);
        if (fVar15 <= ABS(*(float *)(unaff_x20 + 0x1c) - fVar14)) {
          lVar7 = *unaff_x26;
          if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar8 = FUN_07a0d2c4(lVar7,0,0);
          if ((uVar8 & 1) != 0) {
            if (*unaff_x26 == 0) goto LAB_06aade38;
            if ((*(char *)(*unaff_x26 + 0xb0) == '\0') && (*(char *)(unaff_x19 + 0xb0) != '\0')) {
              if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar11 = fStack0000000000000028;
              fVar12 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                                        (in_stack_00000010);
              fVar16 = fVar15;
              fVar19 = fVar18;
              fVar13 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                                        (&stack0x00000020);
              bVar3 = (fVar18 - fVar19) * (fVar18 - fVar19) +
                      (fVar12 - fVar13) * (fVar12 - fVar13) + (fVar15 - fVar16) * (fVar15 - fVar16)
                      < fVar11 * fVar11;
              goto LAB_06aadc1c;
            }
          }
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
LAB_06aadc1c:
        unaff_d15 = unaff_d15 & 0xffffffff;
        unaff_d14 = unaff_d14 & 0xffffffff;
        lVar7 = *unaff_x26;
        if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar8 = FUN_07a119fc(lVar7,0,0);
        if ((uVar8 & 1) != 0) {
LAB_06aadd70:
          *(float *)(unaff_x20 + 0x1c) = fVar14;
          in_stack_00000010[4] = in_stack_00000040;
          in_stack_00000010[1] = CONCAT44(uStack000000000000002c,fStack0000000000000028);
          *in_stack_00000010 = in_stack_00000020;
          in_stack_00000010[3] = in_stack_00000038;
          in_stack_00000010[2] = in_stack_00000030;
          if (DAT_08908cd0 == 0) {
            *unaff_x26 = unaff_x19;
          }
          else {
            puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000010 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000010 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x26 >> 0x12 & 0x7fff);
            *unaff_x26 = unaff_x19;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)unaff_x26 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
        if (bVar3) {
          iVar4 = (**(code **)(*unaff_x21 + 0x548))();
          if (0 < iVar4) goto LAB_06aadd70;
        }
        else if (fVar14 < *(float *)(unaff_x20 + 0x1c)) goto LAB_06aadd70;
      }
      if (*(char *)(unaff_x22 + 0xff6) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x22 + 0xff6) = 1;
      }
      if (*(int *)(*(long *)(unaff_x29 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar14 = (float)uVar22 - (float)unaff_d10;
      fVar18 = (float)unaff_d15 - (float)uVar17;
      fVar11 = (float)unaff_d14 - (float)uVar20;
      fVar18 = fVar18 * fVar18;
      param_3 = (ulong)(uint)fVar18;
      unaff_x25 = (long *)unaff_x21[0x27];
      fVar11 = fVar11 * fVar11;
      param_4 = (ulong)(uint)fVar11;
      unaff_s9 = unaff_s9 + SQRT(fVar11 + fVar14 * fVar14 + fVar18);
      unaff_w24 = unaff_w24 + 1;
      if (unaff_x25 == (long *)0x0) {
LAB_06aade38:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      param_1 = *unaff_x25;
      param_6 = *(long *)(unaff_x28 + 0xf20);
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_d14 = uVar20;
      unaff_d15 = uVar17;
    } while (in_x9 == 0);
  } while( true );
}


