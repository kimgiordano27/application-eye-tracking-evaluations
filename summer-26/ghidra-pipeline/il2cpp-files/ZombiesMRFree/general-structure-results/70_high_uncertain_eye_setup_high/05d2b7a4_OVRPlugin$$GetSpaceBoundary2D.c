/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 05d2b7a4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d2b854) */

void OVRPlugin__GetSpaceBoundary2D
               (undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5
               )

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined4 uStack0000000000000000;
  uint in_stack_00000008;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  do {
    FUN_05cae454(param_1,param_2,param_3,param_4,param_5);
    do {
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_05d2b5d8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05d2b5d8:
      uVar4 = (*(code *)*puVar2)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar3 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_05d2b7e4;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_05d2b7cc;
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_05d2b634;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05d2b634:
      auVar12 = (*(code *)*puVar2)();
      if (auVar12._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      plVar6 = *(long **)(unaff_x20 + 0x30);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar3 = *plVar6;
      uVar1 = *(undefined4 *)(auVar12._0_8_ + 0x10);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_05d2b6a4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8(plVar6,*unaff_x27,4);
LAB_05d2b6a4:
      uVar4 = (*(code *)*puVar2)(plVar6,uVar1);
    } while ((uVar4 & 1) == 0);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    param_3 = (ulong)in_stack_00000008;
    param_2 = _uStack0000000000000000 >> 0x20;
    param_1 = FUN_06905ae4(uStack0000000000000000,*(long *)(unaff_x20 + 0x38),0);
    fVar7 = auVar12._12_4_;
    if (auVar12._8_4_ <= fVar7) {
      fVar11 = 1.0;
      fVar7 = 0.0;
LAB_05d2b758:
      fVar10 = 0.0;
      fVar8 = 1.0;
    }
    else {
      if (fVar7 <= 0.0) {
        fVar7 = 1.0;
        fVar11 = 0.0;
        goto LAB_05d2b758;
      }
      fVar7 = (auVar12._8_4_ / fVar7) * 0.5;
      fVar8 = fVar7;
      if (1.0 < fVar7) {
        fVar8 = 1.0;
      }
      if (fVar7 < 0.0) {
        fVar8 = 0.0;
      }
      fVar7 = fVar8 * 0.0 + 1.0;
      fVar11 = fStack000000000000006c - fVar8 * fStack000000000000006c;
      fVar10 = fStack0000000000000068 - fVar8 * fStack0000000000000068;
      fVar8 = fVar7;
    }
    lVar3 = *unaff_x28;
    fVar9 = *(float *)(unaff_x20 + 0x40);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar3 = *unaff_x28;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    *(float *)(lVar3 + 0x18) = fVar8;
    *(float *)(lVar3 + 0x1c) = fVar9 * 0.5;
    *(float *)(lVar3 + 0xc) = fVar7;
    *(float *)(lVar3 + 0x10) = fVar11;
    *(float *)(lVar3 + 0x14) = fVar10;
    param_4 = 0;
    param_5 = 0;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_05d2b7cc:
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_05d2b800;
    }
  }
LAB_05d2b7e4:
  puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05d2b800:
  (*(code *)*puVar2)();
  return;
}


