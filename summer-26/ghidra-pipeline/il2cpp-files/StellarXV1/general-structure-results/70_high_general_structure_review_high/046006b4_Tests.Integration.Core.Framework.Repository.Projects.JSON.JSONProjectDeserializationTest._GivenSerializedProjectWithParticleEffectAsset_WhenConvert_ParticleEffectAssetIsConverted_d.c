/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Projects.JSON.JSONProjectDeserializationTest.<GivenSerializedProjectWithParticleEffectAsset_WhenConvert_ParticleEffectAssetIsConverted>d__6$$SetStateMachine
ENTRY_POINT: 046006b4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Projects_JSON_JSONProjectDeserializationTest_<GivenSerializedProjectWithParticleEffectAsset_WhenConvert_ParticleEffectAssetIsConverted>d__6__SetStateMachine
               (void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  thunk_FUN_040d65a8();
  FUN_07659bf8(0);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09295880) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_04600720;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_04600720:
  lVar3 = (*(code *)*puVar2)();
  if (lVar3 != 0) {
    in_stack_00000018 = FUN_0663cf08(lVar3,*(undefined8 *)PTR_DAT_092899d0);
    uVar4 = FUN_065f0a10(&stack0x00000018,*(undefined8 *)PTR_DAT_092899c8);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e3f924(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar1 = FUN_065f0a50(&stack0x00000018,*(undefined8 *)PTR_DAT_092899c0);
      FUN_0789166c(uVar1 & 1,0);
      lVar3 = *unaff_x24;
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


