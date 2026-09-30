/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetMesh
ENTRY_POINT: 076e50d0
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


void OVRPlugin_OVRP_1_44_0__ovrp_GetMesh(undefined1 param_1 [16],ulong param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  undefined8 uVar7;
  long *plVar8;
  long *unaff_x25;
  long *unaff_x27;
  undefined1 unaff_w28;
  long unaff_x29;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s9;
  float unaff_s10;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while (fVar13 = (float)param_2, unaff_x24 != (long *)0x0) {
    lVar4 = *unaff_x24;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          fVar16 = param_3;
          goto LAB_076e5124;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(unaff_x24,*unaff_x25,1);
    fVar16 = param_3;
LAB_076e5124:
    fVar9 = (float)(*(code *)*puVar3)(unaff_x24,unaff_w23,puVar3[1]);
    if (unaff_x20 == 0) break;
    fVar17 = unaff_s14;
    fVar19 = unaff_s10;
    uVar5 = FUN_076e3724(unaff_s15,unaff_s10,unaff_s14,fVar9,fVar13,fVar16);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar10 = (float)FUN_076e2da4(&stack0x00000010);
      if (*(char *)(unaff_x29 + 0xe19) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x29 + 0xe19) = unaff_w28;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar17 = unaff_s14 - fVar17;
      fVar14 = *(float *)(unaff_x21 + 0x28);
      fVar19 = unaff_s9 +
               SQRT(fVar17 * fVar17 +
                    (unaff_s15 - fVar10) * (unaff_s15 - fVar10) +
                    (unaff_s10 - fVar19) * (unaff_s10 - fVar19));
      if (fVar14 <= ABS(*(float *)(unaff_x19 + 0x1c) - fVar19)) {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar5 = FUN_0858816c(uVar7,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x28) == 0) break;
          if ((*(char *)(*(long *)(unaff_x19 + 0x28) + 0xb0) == '\0') &&
             (*(char *)(unaff_x20 + 0xb0) != '\0')) {
            if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar10 = fStack0000000000000018;
            fVar11 = (float)FUN_076e2da4(unaff_x19 + 0x30);
            fVar18 = fVar17;
            fVar15 = fVar14;
            fVar12 = (float)FUN_076e2da4(&stack0x00000010);
            bVar1 = (fVar17 - fVar18) * (fVar17 - fVar18) +
                    (fVar11 - fVar12) * (fVar11 - fVar12) + (fVar14 - fVar15) * (fVar14 - fVar15) <
                    fVar10 * fVar10;
            goto LAB_076e5248;
          }
        }
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
LAB_076e5248:
      uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar5 = FUN_08589e5c(uVar7,0,0);
      if ((uVar5 & 1) != 0) {
LAB_076e5390:
        *(float *)(unaff_x19 + 0x1c) = fVar19;
        *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000030;
        *(ulong *)(unaff_x19 + 0x38) = CONCAT44(uStack000000000000001c,fStack0000000000000018);
        *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000010;
        *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000028;
        *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000020;
        *(long *)(unaff_x19 + 0x28) = unaff_x20;
        return;
      }
      if (bVar1) {
        iVar2 = (**(code **)(*unaff_x21 + 0x548))();
        if (0 < iVar2) goto LAB_076e5390;
      }
      else if (fVar19 < *(float *)(unaff_x19 + 0x1c)) goto LAB_076e5390;
    }
    if (*(char *)(unaff_x29 + 0xe19) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x29 + 0xe19) = unaff_w28;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    plVar8 = (long *)unaff_x21[0x27];
    param_3 = unaff_s14 - fVar16;
    unaff_w23 = unaff_w23 + 1;
    param_2 = (ulong)(uint)(param_3 * param_3);
    unaff_s9 = unaff_s9 +
               SQRT(param_3 * param_3 +
                    (unaff_s15 - fVar9) * (unaff_s15 - fVar9) +
                    (unaff_s10 - fVar13) * (unaff_s10 - fVar13));
    if (plVar8 == (long *)0x0) break;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076e50ac;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*unaff_x25,0);
LAB_076e50ac:
    iVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if (iVar2 <= unaff_w23) {
      return;
    }
    if (*(float *)(unaff_x19 + 0x1c) < unaff_s9) {
      return;
    }
    unaff_s14 = fVar16;
    unaff_s10 = fVar13;
    unaff_s15 = fVar9;
    unaff_x24 = (long *)unaff_x21[0x27];
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


