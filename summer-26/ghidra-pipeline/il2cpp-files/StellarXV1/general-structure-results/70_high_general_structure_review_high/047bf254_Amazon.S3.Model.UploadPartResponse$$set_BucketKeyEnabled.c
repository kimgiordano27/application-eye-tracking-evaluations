/*
FUNCTION_NAME: Amazon.S3.Model.UploadPartResponse$$set_BucketKeyEnabled
ENTRY_POINT: 047bf254
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void Amazon_S3_Model_UploadPartResponse__set_BucketKeyEnabled(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int in_w8;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
                    /* catch() { ... } // from try @ 047bf138 with catch @ 047bf254 */
  if (in_w8 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    *unaff_x19 = 0xffffffff;
LAB_047bf324:
    uVar2 = FUN_06c9cdb4(&stack0x00000020,*(undefined8 *)PTR_DAT_092a5250);
    lVar3 = *(long *)(unaff_x19 + 0x10);
    uVar2 = FUN_047bec44(uVar2,1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    puVar5 = (undefined8 *)(lVar3 + 0x18);
    *puVar5 = uVar2;
    thunk_FUN_040ec700(puVar5);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined1 *)(*(long *)(unaff_x19 + 0x10) + 0x10) = 1;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *(long *)(unaff_x20 + 0x10);
    lVar8 = *(long *)PTR_DAT_09288f08;
    lVar3 = *(long *)(lVar8 + 0x38);
    if (lVar3 == 0) {
      FUN_040b1b28(lVar8);
      lVar3 = *(long *)(lVar8 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0480cc7c(lVar7,*(undefined8 *)PTR_DAT_092a9fc8,**(undefined8 **)(lVar3 + 0xb8),0);
    lVar3 = *(long *)(unaff_x19 + 0x10);
  }
  else {
                    /* catch() { ... } // from try @ 047bf12c with catch @ 047bf258
                       catch() { ... } // from try @ 047bf228 with catch @ 047bf258 */
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
                    /* catch() { ... } // from try @ 047bf114 with catch @ 047bf25c
                       catch() { ... } // from try @ 047bf224 with catch @ 047bf25c */
                    /* catch() { ... } // from try @ 047bf100 with catch @ 047bf260
                       catch() { ... } // from try @ 047bf21c with catch @ 047bf260 */
    uVar2 = FUN_047bcfd4();
                    /* try { // try from 047bf278 to 048bf28f has its CatchHandler @ 047bf308 */
    lVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092aa138);
                    /* try { // try from 047bf290 to 048bf2f7 has its CatchHandler @ 047bf05c */
    FUN_066dce30(lVar3,*(undefined8 *)PTR_DAT_092aa120);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined1 *)(lVar3 + 0x10) = 0;
    plVar9 = (long *)(unaff_x19 + 0x10);
    *plVar9 = lVar3;
    thunk_FUN_040ec700(plVar9,lVar3);
    uVar4 = FUN_074e5db0(uVar2,0);
    puVar1 = PTR_DAT_092a9fc0;
    if ((uVar4 & 1) == 0) {
      plVar10 = *(long **)(unaff_x20 + 0x20);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar3 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092a9fc0) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_047bf400;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092a9fc0,0);
LAB_047bf400:
      uVar4 = (*(code *)*puVar5)(plVar10,uVar2,puVar5[1]);
      if ((uVar4 & 1) != 0) {
        plVar9 = *(long **)(unaff_x20 + 0x20);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar3 = *plVar9;
        uVar11 = *(undefined8 *)(unaff_x19 + 0xe);
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
              goto LAB_047bf550;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar1,4);
LAB_047bf550:
        lVar3 = (*(code *)*puVar5)(plVar9,uVar2,uVar11,puVar5[1]);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        _in_stack_00000020 = FUN_06649f48(lVar3,0,*(undefined8 *)PTR_DAT_092a5288);
        uVar4 = FUN_06c9cd6c(&stack0x00000020,*(undefined8 *)PTR_DAT_092a5278);
        if ((uVar4 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000020;
          thunk_FUN_040ec700(unaff_x19 + 0x12,0);
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_049b7760(unaff_x19 + 2,&stack0x00000020);
          return;
        }
        goto LAB_047bf324;
      }
    }
    lVar7 = *(long *)(unaff_x20 + 0x10);
    lVar8 = *(long *)PTR_DAT_09288f08;
    lVar3 = *(long *)(lVar8 + 0x38);
    if (lVar3 == 0) {
      FUN_040b1b28(lVar8);
      lVar3 = *(long *)(lVar8 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0480cc7c(lVar7,*(undefined8 *)PTR_DAT_092a9fd0,**(undefined8 **)(lVar3 + 0xb8),0);
    lVar3 = *plVar9;
  }
  puVar1 = PTR_DAT_092aa118;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *unaff_x19 = 0xfffffffe;
  thunk_FUN_040ec700(unaff_x19 + 0x10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_067119b4(unaff_x19 + 2,lVar3,*(undefined8 *)puVar1);
  return;
}


