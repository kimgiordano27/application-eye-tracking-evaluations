/*
FUNCTION_NAME: Amazon.S3.Model.UploadPartResponse$$get_BucketKeyEnabled
ENTRY_POINT: 047bf218
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void Amazon_S3_Model_UploadPartResponse__get_BucketKeyEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *unaff_x19;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
                    /* try { // try from 047bf218 to 048bf21b has its CatchHandler @ 047bf244 */
  FUN_04077588();
                    /* try { // try from 047bf21c to 048bf21f has its CatchHandler @ 047bf260 */
                    /* try { // try from 047bf220 to 048bf223 has its CatchHandler @ 047bf240 */
                    /* try { // try from 047bf224 to 048bf227 has its CatchHandler @ 047bf25c */
  FUN_04077588(PTR_DAT_092a9fc8);
                    /* try { // try from 047bf228 to 048bf22b has its CatchHandler @ 047bf258 */
                    /* try { // try from 047bf22c to 048bf22f has its CatchHandler @ 047bf250 */
                    /* catch() { ... } // from try @ 047bf188 with catch @ 047bf230
                       try { // try from 047bf230 to 048bf277 has its CatchHandler @ 047bf05c */
  FUN_04077588(PTR_DAT_092a9fd0);
                    /* catch() { ... } // from try @ 047bf19c with catch @ 047bf234 */
                    /* catch() { ... } // from try @ 047bf168 with catch @ 047bf238 */
  *(undefined1 *)(unaff_x20 + 0x528) = 1;
  puVar2 = PTR_DAT_092a9fe0;
                    /* catch() { ... } // from try @ 047bf15c with catch @ 047bf23c */
                    /* catch() { ... } // from try @ 047bf220 with catch @ 047bf240 */
                    /* catch() { ... } // from try @ 047bf218 with catch @ 047bf244 */
                    /* catch() { ... } // from try @ 047bf0e8 with catch @ 047bf248 */
  lVar8 = *(long *)(unaff_x19 + 8);
                    /* catch() { ... } // from try @ 047bf0e4 with catch @ 047bf24c
                       catch() { ... } // from try @ 047bf1d4 with catch @ 047bf24c */
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
                    /* catch() { ... } // from try @ 047bf14c with catch @ 047bf250
                       catch() { ... } // from try @ 047bf22c with catch @ 047bf250 */
  if (*unaff_x19 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
LAB_047bf324:
    uVar3 = FUN_06c9cdb4(&stack0x00000020,*(undefined8 *)PTR_DAT_092a5250);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    uVar3 = FUN_047bec44(uVar3,1);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    puVar6 = (undefined8 *)(lVar4 + 0x18);
    *puVar6 = uVar3;
    thunk_FUN_040ec700(puVar6);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined1 *)(*(long *)(unaff_x19 + 0x10) + 0x10) = 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *(long *)(lVar8 + 0x10);
    lVar9 = *(long *)PTR_DAT_09288f08;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      FUN_040b1b28(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0480cc7c(lVar4,*(undefined8 *)PTR_DAT_092a9fc8,**(undefined8 **)(lVar8 + 0xb8),0);
    lVar8 = *(long *)(unaff_x19 + 0x10);
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = FUN_047bcfd4(lVar8,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(unaff_x19 + 0xc),0);
    lVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092aa138);
    FUN_066dce30(lVar4,*(undefined8 *)PTR_DAT_092aa120);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined1 *)(lVar4 + 0x10) = 0;
    plVar10 = (long *)(unaff_x19 + 0x10);
    *plVar10 = lVar4;
    thunk_FUN_040ec700(plVar10,lVar4);
    uVar5 = FUN_074e5db0(uVar3,0);
    puVar1 = PTR_DAT_092a9fc0;
    if ((uVar5 & 1) == 0) {
      plVar11 = *(long **)(lVar8 + 0x20);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar4 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092a9fc0) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_047bf400;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092a9fc0,0);
LAB_047bf400:
      uVar5 = (*(code *)*puVar6)(plVar11,uVar3,puVar6[1]);
      if ((uVar5 & 1) != 0) {
        plVar10 = *(long **)(lVar8 + 0x20);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar4 = *plVar10;
        uVar12 = *(undefined8 *)(unaff_x19 + 0xe);
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_047bf550;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)puVar1,4);
LAB_047bf550:
        lVar4 = (*(code *)*puVar6)(plVar10,uVar3,uVar12,puVar6[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        _in_stack_00000020 = FUN_06649f48(lVar4,0,*(undefined8 *)PTR_DAT_092a5288);
        uVar5 = FUN_06c9cd6c(&stack0x00000020,*(undefined8 *)PTR_DAT_092a5278);
        if ((uVar5 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000020;
          thunk_FUN_040ec700(unaff_x19 + 0x12,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_049b7760(unaff_x19 + 2,&stack0x00000020);
          return;
        }
        goto LAB_047bf324;
      }
    }
    lVar4 = *(long *)(lVar8 + 0x10);
    lVar9 = *(long *)PTR_DAT_09288f08;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      FUN_040b1b28(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0480cc7c(lVar4,*(undefined8 *)PTR_DAT_092a9fd0,**(undefined8 **)(lVar8 + 0xb8),0);
    lVar8 = *plVar10;
  }
  puVar1 = PTR_DAT_092aa118;
  piVar7 = unaff_x19 + 0x10;
  piVar7[0] = 0;
  piVar7[1] = 0;
  *unaff_x19 = -2;
  thunk_FUN_040ec700(piVar7,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_067119b4(unaff_x19 + 2,lVar8,*(undefined8 *)puVar1);
  return;
}


