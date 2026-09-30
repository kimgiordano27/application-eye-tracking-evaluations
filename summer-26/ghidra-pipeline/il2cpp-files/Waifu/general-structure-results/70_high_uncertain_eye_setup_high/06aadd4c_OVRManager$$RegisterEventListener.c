/*
FUNCTION_NAME: OVRManager$$RegisterEventListener
ENTRY_POINT: 06aadd4c
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager__RegisterEventListener(float param_1,float param_2,float param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long lVar10;
  long *plVar11;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float unaff_s8;
  float unaff_s9;
  undefined8 uVar19;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  ulong unaff_d12;
  ulong uVar20;
  ulong unaff_d13;
  undefined8 *in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
code_r0x06aadd4c:
  bVar3 = param_3 + param_1 < param_2 * param_2;
  uVar18 = (ulong)(uint)fStack0000000000000018;
  uVar8 = (ulong)(uint)fStack000000000000001c;
LAB_06aadc1c:
  do {
    lVar10 = *unaff_x26;
    if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar7 = FUN_07a119fc(lVar10,0,0);
    if ((uVar7 & 1) != 0) {
LAB_06aadd70:
      *(float *)(unaff_x20 + 0x1c) = unaff_s8;
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
    uVar19 = unaff_d10;
    if (bVar3) {
      iVar4 = (**(code **)(*unaff_x21 + 0x548))();
      if (0 < iVar4) goto LAB_06aadd70;
    }
    else if (unaff_s8 < *(float *)(unaff_x20 + 0x1c)) goto LAB_06aadd70;
    do {
      uVar20 = unaff_d13;
      uVar7 = unaff_d12;
      unaff_d10 = unaff_d11;
      if (*(char *)(unaff_x22 + 0xff6) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x22 + 0xff6) = 1;
      }
      if (*(int *)(*(long *)(unaff_x29 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar12 = (float)uVar19 - (float)unaff_d10;
      fStack0000000000000018 = (float)uVar7;
      fVar15 = (float)uVar18 - fStack0000000000000018;
      fStack000000000000001c = (float)uVar20;
      fVar17 = (float)uVar8 - fStack000000000000001c;
      fVar15 = fVar15 * fVar15;
      unaff_d12 = (ulong)(uint)fVar15;
      plVar11 = (long *)unaff_x21[0x27];
      fVar17 = fVar17 * fVar17;
      unaff_d13 = (ulong)(uint)fVar17;
      unaff_s9 = unaff_s9 + SQRT(fVar17 + fVar12 * fVar12 + fVar15);
      unaff_w24 = unaff_w24 + 1;
      if (plVar11 == (long *)0x0) goto LAB_06aade38;
      lVar10 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)(unaff_x28 + 0xf20)) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06aada74;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x28 + 0xf20),0);
LAB_06aada74:
      iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if (iVar4 <= unaff_w24) {
        return;
      }
      if (*(float *)(unaff_x20 + 0x1c) < unaff_s9) {
        return;
      }
      plVar11 = (long *)unaff_x21[0x27];
      if (plVar11 == (long *)0x0) goto LAB_06aade38;
      lVar10 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)(unaff_x28 + 0xf20)) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_06aadaec;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x28 + 0xf20),1);
LAB_06aadaec:
      unaff_d11 = (*(code *)*puVar5)(plVar11,unaff_w24,puVar5[1]);
      if (unaff_x19 == 0) goto LAB_06aade38;
      uVar8 = uVar7;
      uVar18 = uVar20;
      uVar6 = FUN_06aabad8(unaff_d10,uVar7,uVar20,unaff_d11,unaff_d12,unaff_d13);
      fVar15 = (float)uVar18;
      fVar12 = (float)uVar8;
      uVar19 = unaff_d10;
      uVar8 = uVar20;
      uVar18 = uVar7;
    } while ((uVar6 & 1) == 0);
    if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar17 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                              (&stack0x00000020);
    if (*(char *)(unaff_x22 + 0xff6) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x22 + 0xff6) = 1;
    }
    if (*(int *)(*(long *)(unaff_x29 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar17 = (float)unaff_d10 - fVar17;
    uVar18 = uVar7 & 0xffffffff;
    uVar8 = uVar20 & 0xffffffff;
    fVar16 = (fStack000000000000001c - fVar15) * (fStack000000000000001c - fVar15);
    fVar15 = *(float *)(unaff_x21 + 0x28);
    unaff_s8 = unaff_s9 +
               SQRT(fVar16 + fVar17 * fVar17 +
                             (fStack0000000000000018 - fVar12) * (fStack0000000000000018 - fVar12));
    if (fVar15 <= ABS(*(float *)(unaff_x20 + 0x1c) - unaff_s8)) {
      lVar10 = *unaff_x26;
      if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar7 = FUN_07a0d2c4(lVar10,0,0);
      if ((uVar7 & 1) != 0) {
        if (*unaff_x26 == 0) {
LAB_06aade38:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if ((*(char *)(*unaff_x26 + 0xb0) == '\0') && (*(char *)(unaff_x19 + 0xb0) != '\0')) break;
      }
      bVar3 = false;
      goto LAB_06aadc1c;
    }
    bVar3 = true;
  } while( true );
  if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  param_2 = fStack0000000000000028;
  fVar13 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                            (in_stack_00000010);
  fVar12 = fVar15;
  fVar17 = fVar16;
  fVar14 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                            (&stack0x00000020);
  param_1 = (fVar13 - fVar14) * (fVar13 - fVar14) + (fVar15 - fVar12) * (fVar15 - fVar12);
  param_3 = (fVar16 - fVar17) * (fVar16 - fVar17);
  goto code_r0x06aadd4c;
}


