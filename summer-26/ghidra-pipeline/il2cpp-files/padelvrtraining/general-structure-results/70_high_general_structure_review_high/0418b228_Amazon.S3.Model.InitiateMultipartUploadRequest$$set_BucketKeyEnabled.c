/*
FUNCTION_NAME: Amazon.S3.Model.InitiateMultipartUploadRequest$$set_BucketKeyEnabled
ENTRY_POINT: 0418b228
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_8;eye_or_gaze_keyword_boost_only
*/


void Amazon_S3_Model_InitiateMultipartUploadRequest__set_BucketKeyEnabled
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *plVar12;
  
  do {
    in_x9 = in_x9 + -1;
    piVar11 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_03d8f370();
      goto LAB_0418b254;
    }
    plVar12 = (long *)(in_x10 + 2);
    in_x10 = piVar11;
  } while (*plVar12 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
LAB_0418b254:
  uVar4 = (*(code *)*puVar3)();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
  thunk_FUN_03d1023c();
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x21;
  thunk_FUN_03d1023c();
  uVar4 = thunk_FUN_03d2ef40(*unaff_x25);
  FUN_06b6d004(uVar4,*unaff_x24);
  puVar3 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar3 = uVar4;
  thunk_FUN_03d1023c(puVar3,uVar4);
  puVar2 = PTR_DAT_091b1518;
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_091b1518) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto Amazon_S3_Model_InitiateMultipartUploadRequest__get_Headers;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370();
Amazon_S3_Model_InitiateMultipartUploadRequest__get_Headers:
    lVar7 = (*(code *)*puVar5)();
    puVar1 = PTR_DAT_091af250;
    if (lVar7 == 0) {
LAB_0418b444:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar10 = 0;
      uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        lVar9 = *unaff_x19;
        uVar4 = *(undefined8 *)(lVar7 + uVar10 * 8 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
              goto LAB_0418b394;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_03d8f370();
LAB_0418b394:
        uVar6 = (*(code *)*puVar5)();
        plVar12 = (long *)*puVar3;
        if (plVar12 == (long *)0x0) goto LAB_0418b444;
        lVar9 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0418b400;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)puVar1,1);
LAB_0418b400:
        (*(code *)*puVar5)(plVar12,uVar4,uVar6,puVar5[1]);
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
  }
  return;
}


