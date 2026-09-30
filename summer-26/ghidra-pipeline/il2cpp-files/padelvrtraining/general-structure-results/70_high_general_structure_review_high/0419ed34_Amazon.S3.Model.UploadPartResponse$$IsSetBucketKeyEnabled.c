/*
FUNCTION_NAME: Amazon.S3.Model.UploadPartResponse$$IsSetBucketKeyEnabled
ENTRY_POINT: 0419ed34
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

void Amazon_S3_Model_UploadPartResponse__IsSetBucketKeyEnabled(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack000000000000006c;
  
code_r0x0419ed34:
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  auVar10 = FUN_071f1178(param_1,0,0);
  _in_stack_00000040 = auVar10;
  uVar2 = FUN_0708d5f0(&stack0x00000040,0);
  if ((uVar2 & 1) == 0) {
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
      uVar2 = FUN_06daab3c(unaff_x19 + 0x12,*(undefined8 *)PTR_DAT_091b20a0);
      if ((uVar2 & 1) == 0) {
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
      plVar1 = (long *)(unaff_x19 + 0x18);
      *plVar1 = *(long *)(unaff_x19 + 0x16);
      thunk_FUN_03d1023c(plVar1);
      iStack000000000000006c = unaff_w26;
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      plVar7 = (long *)unaff_x20[4];
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar5 = *plVar7;
      uVar9 = *(undefined8 *)(*plVar1 + 0x18);
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_0419f054;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*unaff_x25,4);
LAB_0419f054:
      (*(code *)*puVar3)(plVar7,uVar9,puVar3[1]);
      if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar5 = *(long *)(*plVar1 + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
    } while (*(long *)(lVar5 + 0x40) == 0);
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
  plVar1 = (long *)(**(code **)(*unaff_x20 + 0x1a8))();
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *plVar1;
  uVar8 = *(undefined8 *)(lVar5 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091b20b0) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0419ed20;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370(plVar1,*(long *)PTR_DAT_091b20b0,0);
LAB_0419ed20:
  param_1 = (*(code *)*puVar3)(plVar1,uVar8,uVar9,puVar3[1]);
  goto code_r0x0419ed34;
}


