/*
FUNCTION_NAME: OVRPlugin$$GetBodyState4
ENTRY_POINT: 07a41ec4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07a41ff8) */

void OVRPlugin__GetBodyState4
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float fVar8;
  undefined1 auVar9 [16];
  float fStack0000000000000000;
  float fStack0000000000000004;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  long *in_stack_00000038;
  
code_r0x07a41ec4:
  param_2 = param_2 + param_4;
  param_5 = param_5 - param_3;
  param_6 = param_6 - param_1 * param_6;
  fVar4 = param_2;
  do {
    lVar3 = *unaff_x27;
    fVar8 = *(float *)(unaff_x19 + 0x40);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar3 = *unaff_x27;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    *(float *)(lVar3 + 0xc) = param_2;
    *(float *)(lVar3 + 0x10) = param_5;
    *(float *)(lVar3 + 0x14) = param_6;
    *(float *)(lVar3 + 0x18) = fVar4;
    *(float *)(lVar3 + 0x1c) = fVar8 * 0.5;
    FUN_079ce940(unaff_s8,unaff_s9,unaff_s10,0,0);
    do {
      plVar7 = in_stack_00000038;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar3 = *in_stack_00000038;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07a41d68;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000038,*unaff_x24,0);
LAB_07a41d68:
      uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      plVar7 = in_stack_00000038;
      if ((uVar5 & 1) == 0) {
        if (in_stack_00000038 == (long *)0x0) {
          return;
        }
        lVar3 = *in_stack_00000038;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0) goto LAB_07a41f88;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_07a41f70;
      }
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar3 = *in_stack_00000038;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07a41dcc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000038,*unaff_x25,0);
LAB_07a41dcc:
      auVar9 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if (auVar9._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar7 = *(long **)(unaff_x19 + 0x30);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar3 = *plVar7;
      uVar1 = *(undefined4 *)(auVar9._0_8_ + 0x10);
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_07a41e3c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar7,*unaff_x26,4);
LAB_07a41e3c:
      uVar5 = (*(code *)*puVar2)(plVar7,uVar1,&stack0x00000018,puVar2[1]);
    } while ((uVar5 & 1) == 0);
    if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    unaff_s9 = uStack000000000000001c;
    unaff_s10 = in_stack_00000020;
    unaff_s8 = FUN_089dd968(uStack0000000000000018,*(long *)(unaff_x19 + 0x38),0);
    fVar4 = auVar9._12_4_;
    if (auVar9._8_4_ <= fVar4) {
      param_2 = 0.0;
      param_5 = 1.0;
    }
    else {
      if (0.0 < fVar4) break;
      param_5 = 0.0;
      param_2 = 1.0;
    }
    param_6 = 0.0;
    fVar4 = 1.0;
  } while( true );
  param_4 = 1.0;
  fVar8 = (auVar9._8_4_ / fVar4) * 0.5;
  fVar4 = 1.0;
  if (fVar8 <= 1.0) {
    fVar4 = fVar8;
  }
  param_1 = 0.0;
  if (0.0 <= fVar8) {
    param_1 = fVar4;
  }
  param_2 = param_1 * 0.0;
  param_3 = param_1 * fStack0000000000000004;
  param_5 = fStack0000000000000004;
  param_6 = fStack0000000000000000;
  goto code_r0x07a41ec4;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_07a41f70:
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_07a41fa4;
    }
  }
LAB_07a41f88:
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000038,*unaff_x23,0);
LAB_07a41fa4:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
  return;
}


