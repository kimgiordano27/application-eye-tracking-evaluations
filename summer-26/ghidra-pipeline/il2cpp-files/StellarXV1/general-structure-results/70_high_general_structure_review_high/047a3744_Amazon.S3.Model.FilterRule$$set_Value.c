/*
FUNCTION_NAME: Amazon.S3.Model.FilterRule$$set_Value
ENTRY_POINT: 047a3744
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


long Amazon_S3_Model_FilterRule__set_Value(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar5;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_040d65a8(param_1);
    }
    lVar1 = FUN_047a417c(unaff_x20);
    uVar2 = FUN_074e5d94(lVar1,0);
    if ((uVar2 & 1) == 0) break;
    do {
      unaff_x25 = unaff_x25 + 1;
      if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x25) {
        uVar3 = FUN_076c1544(0x28,0);
        uVar2 = FUN_074e5d94(uVar3,0);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_09286528 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar3 = FUN_0764ef60(uVar3,*(undefined8 *)PTR_DAT_092a9368,0);
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*unaff_x22);
          }
          lVar1 = FUN_047a417c(uVar3);
          uVar2 = FUN_074e5d94(lVar1,0);
          if ((uVar2 & 1) == 0) {
            plVar4 = (long *)FUN_04077674(*unaff_x23,1);
            if (plVar4 == (long *)0x0) goto LAB_047a3ac8;
            if ((lVar1 != 0) &&
               (lVar5 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
            goto Amazon_S3_Model_GetBucketEncryptionRequest___ctor;
            if ((int)plVar4[3] == 0) goto LAB_047a3ac4;
            plVar4[4] = lVar1;
            thunk_FUN_040ec700(plVar4 + 4,lVar1);
            goto joined_r0x047a3a54;
          }
        }
        lVar5 = *(long *)PTR_DAT_09288f08;
        lVar1 = *(long *)(lVar5 + 0x38);
        if (lVar1 == 0) {
          FUN_040b1b28(lVar5);
          lVar1 = *(long *)(lVar5 + 0x38);
        }
        lVar1 = *(long *)(lVar1 + 0x10);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_040b1acc();
        }
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        if (unaff_x19 != 0) {
          FUN_0480cc7c();
          return 0;
        }
        goto LAB_047a3ac8;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_047a3ac4;
      unaff_x21 = *(long *)(unaff_x28 + unaff_x25 * 8);
      uVar3 = thunk_FUN_076c13b8(unaff_x21,0);
      uVar2 = FUN_074e5d94(uVar3,0);
    } while ((uVar2 & 1) != 0);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    unaff_x20 = FUN_0764ef60(uVar3,*unaff_x27,0);
    param_1 = *unaff_x22;
  }
  plVar4 = (long *)FUN_04077674(*unaff_x23,2);
  if (plVar4 == (long *)0x0) {
LAB_047a3ac8:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((unaff_x21 != 0) &&
     (lVar5 = thunk_FUN_040b4e00(unaff_x21,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
Amazon_S3_Model_GetBucketEncryptionRequest___ctor:
    uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar3,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = unaff_x21;
    thunk_FUN_040ec700(plVar4 + 4,unaff_x21);
    if ((lVar1 != 0) &&
       (lVar5 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto Amazon_S3_Model_GetBucketEncryptionRequest___ctor;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar1;
      thunk_FUN_040ec700(plVar4 + 5,lVar1);
joined_r0x047a3a54:
      if (unaff_x19 != 0) {
        FUN_0480cc7c();
        return lVar1;
      }
      goto LAB_047a3ac8;
    }
  }
LAB_047a3ac4:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


