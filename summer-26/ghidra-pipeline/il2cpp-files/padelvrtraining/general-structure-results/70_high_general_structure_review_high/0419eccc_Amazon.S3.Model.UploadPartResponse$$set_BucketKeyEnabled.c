/*
FUNCTION_NAME: Amazon.S3.Model.UploadPartResponse$$set_BucketKeyEnabled
ENTRY_POINT: 0419eccc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Removing unreachable block (ram,0x0419f128) */
/* WARNING: Removing unreachable block (ram,0x0419f0d0) */

void Amazon_S3_Model_UploadPartResponse__set_BucketKeyEnabled(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  undefined **in_x10;
  int *piVar4;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack000000000000006c;
  
code_r0x0419eccc:
  uVar8 = *(undefined8 *)(in_x9 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)in_x10[0x16]) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0419ed20;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370(unaff_x21,*(long *)in_x10[0x16],0);
LAB_0419ed20:
  lVar2 = (*(code *)*puVar1)(unaff_x21,uVar8,uVar6,puVar1[1]);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  auVar9 = FUN_071f1178(lVar2,0,0);
  _in_stack_00000040 = auVar9;
  uVar3 = FUN_0708d5f0(&stack0x00000040,0);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000040;
    thunk_FUN_03d1023c(unaff_x19 + 0x1a,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_04e5cc9c(unaff_x19 + 2,&stack0x00000040);
    return;
  }
  do {
    FUN_0708d63c(&stack0x00000040,0);
    do {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      thunk_FUN_03d1023c(unaff_x19 + 0x18,0);
      uVar3 = FUN_06daab3c(unaff_x19 + 0x12,*(undefined8 *)PTR_DAT_091b20a0);
      if ((uVar3 & 1) == 0) {
        if (unaff_w26 < 0) {
          FUN_06daab38(unaff_x19 + 0x12,*(undefined8 *)PTR_DAT_091b2098);
        }
        *(undefined8 *)(unaff_x19 + 0x12) = 0;
        *(undefined8 *)(unaff_x19 + 0x14) = 0;
        *(undefined8 *)(unaff_x19 + 0x16) = 0;
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_0708de18(unaff_x19 + 2,0);
        return;
      }
      plVar5 = (long *)(unaff_x19 + 0x18);
      *plVar5 = *(long *)(unaff_x19 + 0x16);
      thunk_FUN_03d1023c(plVar5);
      iStack000000000000006c = unaff_w26;
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      plVar7 = (long *)unaff_x20[4];
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar2 = *plVar7;
      uVar6 = *(undefined8 *)(*plVar5 + 0x18);
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
            goto LAB_0419f054;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_03d8f370(plVar7,*unaff_x25,4);
LAB_0419f054:
      (*(code *)*puVar1)(plVar7,uVar6,puVar1[1]);
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar2 = *(long *)(*plVar5 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
    } while (*(long *)(lVar2 + 0x40) == 0);
    if (unaff_w26 != 1) break;
    _in_stack_00000040 = *(undefined1 (*) [16])(unaff_x19 + 0x1a);
    unaff_w26 = -1;
    *(undefined8 *)(unaff_x19 + 0x1a) = 0;
    *(undefined8 *)(unaff_x19 + 0x1c) = 0;
    *unaff_x19 = 0xffffffff;
  } while( true );
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(long *)(*(long *)(unaff_x19 + 0x18) + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  unaff_x21 = (long *)(**(code **)(*unaff_x20 + 0x1a8))();
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_x9 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x10);
  if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_x10 = &PTR_DAT_091b2000;
  param_1 = *unaff_x21;
  goto code_r0x0419eccc;
}


