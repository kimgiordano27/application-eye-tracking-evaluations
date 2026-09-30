/*
FUNCTION_NAME: Amazon.S3.Model.ServerSideEncryptionRule$$get_BucketKeyEnabled
ENTRY_POINT: 047bdcc4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_5;eye_or_gaze_keyword_boost_only
*/


void Amazon_S3_Model_ServerSideEncryptionRule__get_BucketKeyEnabled(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int in_w9;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000008;
  
  do {
                    /* try { // try from 047bdcc4 to 048bdccf has its CatchHandler @ 047bde70 */
    *(int *)(unaff_x19 + 0x18) = in_w9;
    *(long *)(param_1 + 0x20) = unaff_x23;
    thunk_FUN_040ec700((long *)(param_1 + 0x20),unaff_x23);
LAB_047bdcf0:
    do {
                    /* try { // try from 047bdcf0 to 048bdcf7 has its CatchHandler @ 047bde50 */
      unaff_x25 = unaff_x25 + 1;
      if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x25) {
        lVar10 = *(long *)(unaff_x20 + 0x10);
        plVar4 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,1);
        if (unaff_x19 != 0) {
          in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x19 + 0x18);
          lVar5 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),
                                     (long)&stack0x00000008 + 4);
          if (plVar4 != (long *)0x0) {
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_040b4e00(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar7,0);
            }
            if ((int)plVar4[3] == 0) goto LAB_047bddb8;
            plVar4[4] = lVar5;
            thunk_FUN_040ec700(plVar4 + 4,lVar5);
            if (lVar10 != 0) {
              FUN_0480cc7c(lVar10,*(undefined8 *)PTR_DAT_092aa070,plVar4,0);
              return;
            }
          }
        }
        goto Amazon_S3_Model_SessionCredentials__set_AccessKeyId;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_x25) {
LAB_047bddb8:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      plVar4 = *(long **)(unaff_x20 + 0x20);
      if (plVar4 == (long *)0x0) goto Amazon_S3_Model_SessionCredentials__set_AccessKeyId;
      lVar10 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      uVar7 = *(undefined8 *)(unaff_x21 + unaff_x25 * 8 + 0x20);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_047bdc34;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar4,*unaff_x26,1);
LAB_047bdc34:
      uVar3 = (*(code *)*puVar2)(plVar4,uVar7,puVar2[1]);
      lVar10 = FUN_047bec44(uVar3,0,0);
    } while (lVar10 == 0);
    unaff_x23 = thunk_FUN_040b4efc(*unaff_x27);
    FUN_047bf0d8(unaff_x23,0);
    if (unaff_x23 == 0) {
Amazon_S3_Model_SessionCredentials__set_AccessKeyId:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(long *)(unaff_x23 + 0x10) = lVar10;
    thunk_FUN_040ec700((long *)(unaff_x23 + 0x10),lVar10);
    *(undefined8 *)(unaff_x23 + 0x18) = uVar7;
    thunk_FUN_040ec700((undefined8 *)(unaff_x23 + 0x18),uVar7);
    if (unaff_x19 == 0) goto Amazon_S3_Model_SessionCredentials__set_AccessKeyId;
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto Amazon_S3_Model_SessionCredentials__set_AccessKeyId;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (*(uint *)(param_1 + 0x18) <= uVar1) {
      FUN_05c26d88();
      goto LAB_047bdcf0;
    }
    param_1 = param_1 + (long)(int)uVar1 * 8;
    in_w9 = uVar1 + 1;
  } while( true );
}


