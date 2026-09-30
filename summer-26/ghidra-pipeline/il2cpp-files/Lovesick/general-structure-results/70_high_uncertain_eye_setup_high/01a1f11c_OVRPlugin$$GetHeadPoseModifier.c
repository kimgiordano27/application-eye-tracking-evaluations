/*
FUNCTION_NAME: OVRPlugin$$GetHeadPoseModifier
ENTRY_POINT: 01a1f11c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01a1f350) */

void OVRPlugin__GetHeadPoseModifier
               (undefined8 param_1,undefined1 param_2 [16],ulong param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float unaff_s13;
  float unaff_s15;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  float in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000070;
  uint uStack0000000000000074;
  uint in_stack_00000078;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  
  auVar13._8_8_ = param_5;
  auVar13._0_8_ = param_4;
  do {
    _uStack0000000000000090 = auVar13;
    lVar2 = FUN_00bfe424(&stack0x00000090,param_1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar1 = *(undefined4 *)(lVar2 + 0x10);
    fVar7 = (float)FUN_00bfe528(&stack0x00000090,*unaff_x27);
    plVar6 = *(long **)(unaff_x20 + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar2 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    uVar10 = param_3;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_01a1f1a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x28,4);
LAB_01a1f1a0:
    uVar4 = (*(code *)*puVar3)(plVar6,uVar1,&stack0x00000070,puVar3[1]);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = (ulong)uStack0000000000000074;
      uVar4 = (ulong)in_stack_00000078;
      uVar9 = FUN_026a0e4c(uStack0000000000000070,uVar10,uVar4,*(long *)(unaff_x20 + 0x30),0);
      fVar12 = (float)param_3;
      fVar8 = 0.0;
      fVar11 = unaff_s13;
      if (fVar7 <= fVar12) {
        uStack0000000000000050 = in_stack_00000048;
      }
      else {
        uStack0000000000000050 = in_stack_00000040;
        fVar8 = 0.0;
        if (0.0 < fVar12) {
          fVar8 = (fVar7 / fVar12) * unaff_s15;
          fVar7 = fVar8;
          if (unaff_s13 < fVar8) {
            fVar7 = unaff_s13;
          }
          if (fVar8 < 0.0) {
            fVar7 = 0.0;
          }
          fVar11 = (float)in_stack_00000030 * fVar7 + in_stack_00000038;
          fVar8 = in_stack_00000028._4_4_ - fVar7 * in_stack_00000028._4_4_;
          uStack0000000000000050 =
               CONCAT44((float)((ulong)in_stack_00000010 >> 0x20) -
                        (float)((ulong)in_stack_00000030 >> 0x20) * fVar7,fVar11);
        }
      }
      lVar2 = *unaff_x29;
      fVar7 = *(float *)(unaff_x20 + 0x38);
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar2 = *unaff_x29;
      }
      lVar2 = *(long *)(lVar2 + 0xb8);
      *(float *)(lVar2 + 0x1c) = fVar7 * unaff_s15;
      *(undefined8 *)(lVar2 + 0xc) = uStack0000000000000050;
      *(float *)(lVar2 + 0x14) = fVar8;
      *(float *)(lVar2 + 0x18) = fVar11;
      FUN_019a99ac(uVar9,uVar10,uVar4,0,0);
    }
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          param_3 = uVar10;
          goto LAB_01a1f0b0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
    param_3 = uVar10;
LAB_01a1f0b0:
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar4 == 0) goto LAB_01a1f2e0;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01a1f10c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
LAB_01a1f10c:
    auVar13 = (*(code *)*puVar3)();
    param_1 = *unaff_x26;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x23) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_01a1f2fc;
    }
  }
LAB_01a1f2e0:
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01a1f2fc:
  (*(code *)*puVar3)();
  return;
}


