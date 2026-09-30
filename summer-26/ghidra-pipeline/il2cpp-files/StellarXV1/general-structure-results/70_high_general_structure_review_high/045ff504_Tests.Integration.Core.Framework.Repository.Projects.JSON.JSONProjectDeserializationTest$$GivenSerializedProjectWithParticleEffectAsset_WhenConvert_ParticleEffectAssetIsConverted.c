/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Projects.JSON.JSONProjectDeserializationTest$$GivenSerializedProjectWithParticleEffectAsset_WhenConvert_ParticleEffectAssetIsConverted
ENTRY_POINT: 045ff504
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Projects_JSON_JSONProjectDeserializationTest__GivenSerializedProjectWithParticleEffectAsset_WhenConvert_ParticleEffectAssetIsConverted
               (void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000018;
  
  puVar1 = (undefined8 *)FUN_040b1e00();
  uVar2 = (*(code *)*puVar1)();
  uVar7 = *(undefined8 *)(unaff_x24 + 0x60);
  lVar8 = *(long *)PTR_DAT_092a1400;
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
  FUN_051fe31c(uVar2,uVar7,**(undefined8 **)(lVar3 + 0xb8),*(undefined8 *)PTR_DAT_092a1410);
  if (*(long *)(unaff_x24 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar6 = *(long **)(unaff_x24 + 0x68);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *plVar6;
  uVar2 = *(undefined8 *)(*(long *)(unaff_x24 + 0x60) + 0x60);
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09295880) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_045ff630;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_09295880,5);
LAB_045ff630:
  lVar3 = (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
  if (lVar3 != 0) {
    in_stack_00000018 = FUN_06649f2c(lVar3,*(undefined8 *)PTR_DAT_09296450);
    uVar4 = FUN_065f12f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09296448);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e441cc(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar2 = FUN_065f1330(&stack0x00000018,*(undefined8 *)PTR_DAT_09296440);
      FUN_0789187c(uVar2,0);
      lVar3 = *unaff_x23;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


