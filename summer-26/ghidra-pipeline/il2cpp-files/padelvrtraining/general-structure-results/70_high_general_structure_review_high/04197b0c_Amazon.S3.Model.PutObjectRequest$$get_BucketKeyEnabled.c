/*
FUNCTION_NAME: Amazon.S3.Model.PutObjectRequest$$get_BucketKeyEnabled
ENTRY_POINT: 04197b0c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Removing unreachable block (ram,0x04197bdc) */

void Amazon_S3_Model_PutObjectRequest__get_BucketKeyEnabled
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  
  do {
    uStack0000000000000040 = param_1;
    uStack0000000000000050 = param_2;
    uStack0000000000000060 = param_3;
    uStack0000000000000070 = param_4;
    FUN_06b5c520();
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_041979e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_041979e0:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_03d2ee44();
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_04197b74;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto Amazon_S3_Model_PutObjectRequest__IsSetCannedACL;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
Amazon_S3_Model_PutObjectRequest__IsSetCannedACL:
    plVar2 = (long *)(*(code *)*puVar1)();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04197ab4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_04197ab4:
    lVar4 = (*(code *)*puVar1)();
    if (lVar4 == 0) {
      lVar3 = 0;
    }
    else {
      uVar7 = *unaff_x28;
      lVar3 = thunk_FUN_03d2ee44(lVar4,uVar7);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(lVar4,uVar7);
      }
    }
    FUN_041972f0(&stack0x00000040,lVar3);
    param_1 = uStack0000000000000040;
    param_2 = uStack0000000000000050;
    param_3 = uStack0000000000000060;
    param_4 = uStack0000000000000070;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x25) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04197b90;
    }
  }
LAB_04197b74:
  puVar1 = (undefined8 *)FUN_03d8f370(plVar2,*unaff_x25,0);
LAB_04197b90:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return;
}


