/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingVisemesSupported
ENTRY_POINT: 0532b6a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0532b828) */

void OVRPlugin__get_faceTrackingVisemesSupported
               (ulong param_1,undefined1 param_2 [16],undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar6;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  float fVar7;
  float fVar8;
  undefined4 unaff_s8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fStack0000000000000000;
  float fStack0000000000000004;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  uint in_stack_00000020;
  long *in_stack_00000038;
  
  do {
    fVar10 = (float)param_1;
    if ((float)unaff_x20 <= fVar10) {
      fVar7 = 0.0;
      fVar10 = 1.0;
LAB_0532b728:
      fVar11 = 0.0;
      fVar8 = 1.0;
    }
    else {
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
        fVar7 = 1.0;
        goto LAB_0532b728;
      }
      fVar7 = ((float)unaff_x20 / fVar10) * 0.5;
      fVar10 = 1.0;
      if (fVar7 <= 1.0) {
        fVar10 = fVar7;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar7) {
        fVar8 = fVar10;
      }
      fVar7 = fVar8 * 0.0 + 1.0;
      fVar10 = fStack0000000000000004 - fVar8 * fStack0000000000000004;
      fVar11 = fStack0000000000000000 - fVar8 * fStack0000000000000000;
      fVar8 = fVar7;
    }
    lVar3 = *unaff_x27;
    fVar9 = *(float *)(unaff_x19 + 0x40);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar3 = *unaff_x27;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    *(float *)(lVar3 + 0xc) = fVar7;
    *(float *)(lVar3 + 0x10) = fVar10;
    *(float *)(lVar3 + 0x14) = fVar11;
    *(float *)(lVar3 + 0x18) = fVar8;
    *(float *)(lVar3 + 0x1c) = fVar9 * 0.5;
    FUN_052ae014(unaff_s8,param_3,param_4 & 0xffffffff,0,0);
    do {
      plVar6 = in_stack_00000038;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar3 = *in_stack_00000038;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0532b598;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*unaff_x24,0);
LAB_0532b598:
      uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      plVar6 = in_stack_00000038;
      if ((uVar4 & 1) == 0) {
        if (in_stack_00000038 == (long *)0x0) {
          return;
        }
        lVar3 = *in_stack_00000038;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_0532b7b8;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_0532b7a0;
      }
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar3 = *in_stack_00000038;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0532b5fc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*unaff_x25,0);
LAB_0532b5fc:
      auVar12 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      unaff_x20 = auVar12._8_8_;
      if (auVar12._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar6 = *(long **)(unaff_x19 + 0x30);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar3 = *plVar6;
      uVar1 = *(undefined4 *)(auVar12._0_8_ + 0x10);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_0532b66c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x26,4);
LAB_0532b66c:
      uVar4 = (*(code *)*puVar2)(plVar6,uVar1,&stack0x00000018,puVar2[1]);
    } while ((uVar4 & 1) == 0);
    if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    param_4 = (ulong)in_stack_00000020;
    param_3 = uStack000000000000001c;
    unaff_s8 = FUN_060fdd00(uStack0000000000000018,*(long *)(unaff_x19 + 0x38),0);
    param_1 = unaff_x20 >> 0x20;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_0532b7a0:
    if (*(long *)(piVar5 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0532b7d4;
    }
  }
LAB_0532b7b8:
  puVar2 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*unaff_x23,0);
LAB_0532b7d4:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
  return;
}


