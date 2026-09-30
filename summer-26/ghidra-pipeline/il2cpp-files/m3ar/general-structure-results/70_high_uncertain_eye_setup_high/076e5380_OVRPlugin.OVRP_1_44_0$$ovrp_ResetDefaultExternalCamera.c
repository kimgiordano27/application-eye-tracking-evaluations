/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_ResetDefaultExternalCamera
ENTRY_POINT: 076e5380
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_ResetDefaultExternalCamera(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x25;
  uint unaff_w26;
  long *unaff_x27;
  undefined1 unaff_w28;
  long unaff_x29;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar14;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
LAB_076e5248:
  do {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_08589e5c(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
LAB_076e5390:
      *(float *)(unaff_x19 + 0x1c) = unaff_s8;
      *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000030;
      *(ulong *)(unaff_x19 + 0x38) = CONCAT44(uStack000000000000001c,fStack0000000000000018);
      *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000010;
      *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000028;
      *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000020;
      *(long *)(unaff_x19 + 0x28) = unaff_x20;
      return;
    }
    if ((unaff_w26 & 1) == 0) {
      if (unaff_s8 < *(float *)(unaff_x19 + 0x1c)) goto LAB_076e5390;
    }
    else {
      iVar1 = (**(code **)(*unaff_x21 + 0x548))();
      if (0 < iVar1) goto LAB_076e5390;
    }
    do {
      fVar14 = unaff_s11;
      fVar13 = unaff_s12;
      fVar12 = unaff_s13;
      if (*(char *)(unaff_x29 + 0xe19) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x29 + 0xe19) = unaff_w28;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      plVar7 = (long *)unaff_x21[0x27];
      unaff_s13 = fStack000000000000000c - fVar12;
      unaff_w23 = unaff_w23 + 1;
      unaff_s12 = unaff_s13 * unaff_s13;
      unaff_s9 = unaff_s9 +
                 SQRT(unaff_s12 +
                      (fStack0000000000000008 - fVar14) * (fStack0000000000000008 - fVar14) +
                      (unaff_s10 - fVar13) * (unaff_s10 - fVar13));
      if (plVar7 == (long *)0x0) goto LAB_076e53d8;
      lVar4 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_076e50ac;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*unaff_x25,0);
LAB_076e50ac:
      iVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if (iVar1 <= unaff_w23) {
        return;
      }
      if (*(float *)(unaff_x19 + 0x1c) < unaff_s9) {
        return;
      }
      plVar7 = (long *)unaff_x21[0x27];
      if (plVar7 == (long *)0x0) goto LAB_076e53d8;
      lVar4 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_076e5124;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*unaff_x25,1);
LAB_076e5124:
      unaff_s11 = (float)(*(code *)*puVar2)(plVar7,unaff_w23,puVar2[1]);
      if (unaff_x20 == 0) goto LAB_076e53d8;
      fVar11 = fVar12;
      fVar10 = fVar13;
      uVar3 = FUN_076e3724(fVar14,fVar13,fVar12,unaff_s11,unaff_s12,unaff_s13);
      fStack000000000000000c = fVar12;
      unaff_s10 = fVar13;
      fStack0000000000000008 = fVar14;
    } while ((uVar3 & 1) == 0);
    if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar8 = (float)FUN_076e2da4(&stack0x00000010);
    if (*(char *)(unaff_x29 + 0xe19) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x29 + 0xe19) = unaff_w28;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar12 = fVar12 - fVar11;
    fVar11 = *(float *)(unaff_x21 + 0x28);
    unaff_s8 = unaff_s9 +
               SQRT(fVar12 * fVar12 +
                    (fVar14 - fVar8) * (fVar14 - fVar8) + (fVar13 - fVar10) * (fVar13 - fVar10));
    if (fVar11 <= ABS(*(float *)(unaff_x19 + 0x1c) - unaff_s8)) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar3 = FUN_0858816c(uVar6,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_076e53d8:
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        if ((*(char *)(*(long *)(unaff_x19 + 0x28) + 0xb0) == '\0') &&
           (*(char *)(unaff_x20 + 0xb0) != '\0')) {
          if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          fVar14 = fStack0000000000000018;
          fVar8 = (float)FUN_076e2da4(unaff_x19 + 0x30);
          fVar13 = fVar12;
          fVar10 = fVar11;
          fVar9 = (float)FUN_076e2da4(&stack0x00000010);
          if ((fVar12 - fVar13) * (fVar12 - fVar13) +
              (fVar8 - fVar9) * (fVar8 - fVar9) + (fVar11 - fVar10) * (fVar11 - fVar10) <
              fVar14 * fVar14) {
            unaff_w26 = 1;
          }
          else {
            unaff_w26 = 0;
          }
          goto LAB_076e5248;
        }
      }
      unaff_w26 = 0;
      goto LAB_076e5248;
    }
    unaff_w26 = 1;
  } while( true );
}


