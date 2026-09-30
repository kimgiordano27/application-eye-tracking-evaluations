/*
FUNCTION_NAME: Amazon.S3.Model.UploadPartResponse$$get_BucketKeyEnabled
ENTRY_POINT: 0419ec90
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Removing unreachable block (ram,0x0419f128) */
/* WARNING: Removing unreachable block (ram,0x0419f0d0) */

void Amazon_S3_Model_UploadPartResponse__get_BucketKeyEnabled(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack000000000000006c;
  
code_r0x0419ec90:
  iStack000000000000006c = unaff_w26;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar1 = (long *)(**(code **)(*unaff_x20 + 0x1a8))();
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar3 = *plVar1;
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091b20b0) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0419ed20;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370(plVar1,*(long *)PTR_DAT_091b20b0,0);
LAB_0419ed20:
  lVar4 = (*(code *)*puVar2)(plVar1,uVar9,uVar7,puVar2[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  auVar10 = FUN_071f1178(lVar4,0,0);
  _in_stack_00000040 = auVar10;
  uVar5 = FUN_0708d5f0(&stack0x00000040,0);
  if ((uVar5 & 1) == 0) {
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
      uVar5 = FUN_06daab3c(unaff_x19 + 0x12,*(undefined8 *)PTR_DAT_091b20a0);
      if ((uVar5 & 1) == 0) {
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
      plVar8 = (long *)unaff_x20[4];
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar4 = *plVar8;
      uVar7 = *(undefined8 *)(*plVar1 + 0x18);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_0419f054;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar8,*unaff_x25,4);
LAB_0419f054:
      (*(code *)*puVar2)(plVar8,uVar7,puVar2[1]);
      if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar4 = *(long *)(*plVar1 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
    } while (*(long *)(lVar4 + 0x40) == 0);
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
  goto code_r0x0419ec90;
}


