/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraFov
ENTRY_POINT: 076e5150
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


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraFov(ulong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
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
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar17;
  float unaff_s12;
  float fVar18;
  float unaff_s13;
  float fVar19;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    fVar17 = unaff_s11;
    fVar18 = unaff_s12;
    fVar19 = unaff_s13;
    fVar14 = unaff_s14;
    fVar16 = unaff_s10;
    uVar4 = FUN_076e3724(param_1,unaff_s10,unaff_s14,fVar17,fVar18,fVar19);
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 076e5174 to 077e517b has its CatchHandler @ 076e52bc */
      if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
                    /* try { // try from 076e5184 to 077e5197 has its CatchHandler @ 076e52b8 */
        thunk_FUN_0408f364();
      }
      fVar9 = (float)FUN_076e2da4(&stack0x00000010);
                    /* try { // try from 076e51a0 to 077e51bf has its CatchHandler @ 076e52c0 */
      if (*(char *)(unaff_x29 + 0xe19) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x29 + 0xe19) = unaff_w28;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar14 = unaff_s14 - fVar14;
      fVar12 = *(float *)(unaff_x21 + 0x28);
      fVar16 = unaff_s9 +
               SQRT(fVar14 * fVar14 +
                    (unaff_s15 - fVar9) * (unaff_s15 - fVar9) +
                    (unaff_s10 - fVar16) * (unaff_s10 - fVar16));
      if (fVar12 <= ABS(*(float *)(unaff_x19 + 0x1c) - fVar16)) {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar4 = FUN_0858816c(uVar7,0,0);
        if ((uVar4 & 1) != 0) {
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
            fVar9 = fStack0000000000000018;
            fVar10 = (float)FUN_076e2da4(unaff_x19 + 0x30);
            fVar15 = fVar14;
            fVar13 = fVar12;
            fVar11 = (float)FUN_076e2da4(&stack0x00000010);
            bVar1 = (fVar14 - fVar15) * (fVar14 - fVar15) +
                    (fVar10 - fVar11) * (fVar10 - fVar11) + (fVar12 - fVar13) * (fVar12 - fVar13) <
                    fVar9 * fVar9;
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
      uVar4 = FUN_08589e5c(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
LAB_076e5390:
        *(float *)(unaff_x19 + 0x1c) = fVar16;
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
      else if (fVar16 < *(float *)(unaff_x19 + 0x1c)) goto LAB_076e5390;
    }
    if (*(char *)(unaff_x29 + 0xe19) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x29 + 0xe19) = unaff_w28;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    plVar8 = (long *)unaff_x21[0x27];
    unaff_s13 = unaff_s14 - fVar19;
    unaff_w23 = unaff_w23 + 1;
    unaff_s12 = unaff_s13 * unaff_s13;
    unaff_s9 = unaff_s9 +
               SQRT(unaff_s12 +
                    (unaff_s15 - fVar17) * (unaff_s15 - fVar17) +
                    (unaff_s10 - fVar18) * (unaff_s10 - fVar18));
    if (plVar8 == (long *)0x0) goto LAB_076e53d8;
    lVar5 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076e50ac;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
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
    plVar8 = (long *)unaff_x21[0x27];
    if (plVar8 == (long *)0x0) goto LAB_076e53d8;
    lVar5 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_076e5124;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*unaff_x25,1);
LAB_076e5124:
    unaff_s11 = (float)(*(code *)*puVar3)(plVar8,unaff_w23,puVar3[1]);
    if (unaff_x20 == 0) goto LAB_076e53d8;
    param_1 = (ulong)(uint)fVar17;
    unaff_s14 = fVar19;
    unaff_s10 = fVar18;
    unaff_s15 = fVar17;
  } while( true );
}


