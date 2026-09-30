/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Supported
ENTRY_POINT: 0532b5d4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0532b828) */

void OVRPlugin__get_faceTracking2Supported(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong in_x9;
  ulong uVar3;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *plVar5;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fStack0000000000000000;
  float fStack0000000000000004;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  long *in_stack_00000038;
  
code_r0x0532b5d4:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_0532b5c8;
LAB_0532b5e0:
  puVar1 = (undefined8 *)FUN_02f421d0(unaff_x20,param_3,0);
  do {
    auVar14 = (*(code *)*puVar1)(unaff_x20,puVar1[1]);
    if (auVar14._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar5 = *(long **)(unaff_x19 + 0x30);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar2 = *plVar5;
    uVar9 = *(undefined4 *)(auVar14._0_8_ + 0x10);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
          goto LAB_0532b66c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(plVar5,*unaff_x26,4);
LAB_0532b66c:
    uVar3 = (*(code *)*puVar1)(plVar5,uVar9,&stack0x00000018,puVar1[1]);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar9 = uStack000000000000001c;
      uVar10 = in_stack_00000020;
      uVar6 = FUN_060fdd00(uStack0000000000000018,uStack000000000000001c,in_stack_00000020,
                           *(long *)(unaff_x19 + 0x38),0);
      fVar12 = auVar14._12_4_;
      if (auVar14._8_4_ <= fVar12) {
        fVar7 = 0.0;
        fVar12 = 1.0;
LAB_0532b728:
        fVar13 = 0.0;
        fVar8 = 1.0;
      }
      else {
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
          fVar7 = 1.0;
          goto LAB_0532b728;
        }
        fVar7 = (auVar14._8_4_ / fVar12) * 0.5;
        fVar12 = 1.0;
        if (fVar7 <= 1.0) {
          fVar12 = fVar7;
        }
        fVar8 = 0.0;
        if (0.0 <= fVar7) {
          fVar8 = fVar12;
        }
        fVar7 = fVar8 * 0.0 + 1.0;
        fVar12 = fStack0000000000000004 - fVar8 * fStack0000000000000004;
        fVar13 = fStack0000000000000000 - fVar8 * fStack0000000000000000;
        fVar8 = fVar7;
      }
      lVar2 = *unaff_x27;
      fVar11 = *(float *)(unaff_x19 + 0x40);
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar2 = *unaff_x27;
      }
      lVar2 = *(long *)(lVar2 + 0xb8);
      *(float *)(lVar2 + 0xc) = fVar7;
      *(float *)(lVar2 + 0x10) = fVar12;
      *(float *)(lVar2 + 0x14) = fVar13;
      *(float *)(lVar2 + 0x18) = fVar8;
      *(float *)(lVar2 + 0x1c) = fVar11 * 0.5;
      FUN_052ae014(uVar6,uVar9,uVar10,0,0);
    }
    plVar5 = in_stack_00000038;
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar2 = *in_stack_00000038;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0532b598;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*unaff_x24,0);
LAB_0532b598:
    uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    plVar5 = in_stack_00000038;
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000038;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_0532b7b8;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    param_1 = *in_stack_00000038;
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x20 = in_stack_00000038;
    if (in_x9 == 0) goto LAB_0532b5e0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0532b5c8:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x0532b5d4;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0532b7d4;
    }
  }
LAB_0532b7b8:
  puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*unaff_x23,0);
LAB_0532b7d4:
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


