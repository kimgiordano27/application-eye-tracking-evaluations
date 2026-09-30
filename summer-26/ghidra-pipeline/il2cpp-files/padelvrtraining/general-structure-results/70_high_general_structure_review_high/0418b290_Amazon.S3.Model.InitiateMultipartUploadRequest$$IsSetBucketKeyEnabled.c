/*
FUNCTION_NAME: Amazon.S3.Model.InitiateMultipartUploadRequest$$IsSetBucketKeyEnabled
ENTRY_POINT: 0418b290
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_8;eye_or_gaze_keyword_boost_only
*/


void Amazon_S3_Model_InitiateMultipartUploadRequest__IsSetBucketKeyEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar10;
  undefined8 unaff_x22;
  undefined8 uVar11;
  long *plVar12;
  
  FUN_06b6d004();
  puVar10 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar10 = unaff_x22;
  thunk_FUN_03d1023c(puVar10);
  puVar2 = PTR_DAT_091b1518;
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091b1518) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto Amazon_S3_Model_InitiateMultipartUploadRequest__get_Headers;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370();
Amazon_S3_Model_InitiateMultipartUploadRequest__get_Headers:
    lVar5 = (*(code *)*puVar3)();
    puVar1 = PTR_DAT_091af250;
    if (lVar5 == 0) {
LAB_0418b444:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar8 = 0;
      uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        lVar7 = *unaff_x19;
        uVar11 = *(undefined8 *)(lVar5 + uVar8 * 8 + 0x20);
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
              goto LAB_0418b394;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370();
LAB_0418b394:
        uVar4 = (*(code *)*puVar3)();
        plVar12 = (long *)*puVar10;
        if (plVar12 == (long *)0x0) goto LAB_0418b444;
        lVar7 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0418b400;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)puVar1,1);
LAB_0418b400:
        (*(code *)*puVar3)(plVar12,uVar11,uVar4,puVar3[1]);
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
  }
  return;
}


