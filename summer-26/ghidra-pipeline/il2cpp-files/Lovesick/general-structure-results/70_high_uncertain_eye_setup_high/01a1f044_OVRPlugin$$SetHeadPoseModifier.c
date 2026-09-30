/*
FUNCTION_NAME: OVRPlugin$$SetHeadPoseModifier
ENTRY_POINT: 01a1f044
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01a1f350) */

void OVRPlugin__SetHeadPoseModifier(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float unaff_s13;
  float unaff_s15;
  undefined1 auVar14 [16];
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  float fStack000000000000002c;
  undefined8 uStack0000000000000030;
  float in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000070;
  uint uStack0000000000000074;
  uint in_stack_00000078;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  fStack000000000000002c = *(float *)(param_1 + 0x894);
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0x3f6bebec3f6bebec;
  plVar8 = *(long **)(unaff_x29 + 0x580);
  uStack0000000000000030 = param_2;
  do {
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          uVar5 = param_3;
          goto LAB_01a1f0b0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
    uVar5 = param_3;
LAB_01a1f0b0:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 == 0) goto LAB_01a1f2e0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01a1f10c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a1f10c:
    auVar14 = (*(code *)*puVar2)();
    _in_stack_00000090 = auVar14;
    lVar4 = FUN_00bfe424(&stack0x00000090,*unaff_x26);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar1 = *(undefined4 *)(lVar4 + 0x10);
    fVar9 = (float)FUN_00bfe528(&stack0x00000090,*unaff_x27);
    plVar7 = *(long **)(unaff_x20 + 0x28);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar4 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
    param_3 = uVar5;
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_01a1f1a0;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724(plVar7,*unaff_x28,4);
LAB_01a1f1a0:
    uVar3 = (*(code *)*puVar2)(plVar7,uVar1,&stack0x00000070,puVar2[1]);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      param_3 = (ulong)uStack0000000000000074;
      uVar3 = (ulong)in_stack_00000078;
      uVar11 = FUN_026a0e4c(uStack0000000000000070,param_3,uVar3,*(long *)(unaff_x20 + 0x30),0);
      fVar13 = (float)uVar5;
      fVar10 = 0.0;
      fVar12 = unaff_s13;
      if (fVar9 <= fVar13) {
        uStack0000000000000050 = in_stack_00000048;
      }
      else {
        uStack0000000000000050 = in_stack_00000040;
        fVar10 = 0.0;
        if (0.0 < fVar13) {
          fVar10 = (fVar9 / fVar13) * unaff_s15;
          fVar9 = fVar10;
          if (unaff_s13 < fVar10) {
            fVar9 = unaff_s13;
          }
          if (fVar10 < 0.0) {
            fVar9 = 0.0;
          }
          fVar12 = (float)uStack0000000000000030 * fVar9 + in_stack_00000038;
          fVar10 = fStack000000000000002c - fVar9 * fStack000000000000002c;
          uStack0000000000000050 =
               CONCAT44((float)((ulong)uStack0000000000000010 >> 0x20) -
                        (float)((ulong)uStack0000000000000030 >> 0x20) * fVar9,fVar12);
        }
      }
      lVar4 = *plVar8;
      fVar9 = *(float *)(unaff_x20 + 0x38);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *plVar8;
      }
      lVar4 = *(long *)(lVar4 + 0xb8);
      *(float *)(lVar4 + 0x1c) = fVar9 * unaff_s15;
      *(undefined8 *)(lVar4 + 0xc) = uStack0000000000000050;
      *(float *)(lVar4 + 0x14) = fVar10;
      *(float *)(lVar4 + 0x18) = fVar12;
      FUN_019a99ac(uVar11,param_3,uVar3,0,0);
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_01a1f2fc;
    }
  }
LAB_01a1f2e0:
  puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a1f2fc:
  (*(code *)*puVar2)();
  return;
}


