/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2DCount
ENTRY_POINT: 0514b3ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceBoundary2DCount(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x8b0));
  FUN_02d6084c(PTR_DAT_0675eef8);
  FUN_02d6084c(PTR_DAT_0677fc68);
  FUN_02d6084c(PTR_DAT_06780430);
  FUN_02d6084c(PTR_DAT_067680c0);
  *(undefined1 *)(unaff_x22 + 0xda4) = 1;
  puVar1 = PTR_DAT_0675e258;
  if (unaff_x20 == 0) {
LAB_0514b59c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)PTR_DAT_06780430;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(uVar5,0);
  uVar2 = FUN_0501ed54(uVar4,uVar5,0);
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar5 = *(undefined8 *)PTR_DAT_0677fc68;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_05015c2c(uVar5,0);
    uVar2 = FUN_0501ed54(uVar4,uVar5,0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x21 == 0) goto LAB_0514b59c;
      lVar3 = *(long *)(unaff_x21 + 0x38);
      if (lVar3 == 0) {
        *unaff_x19 = 0;
        thunk_FUN_02dd37b4();
        uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_067680c0 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_050db8f0(uVar4,0);
        return uVar4;
      }
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_04f8e414(0);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_0677d8b0 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d8b0);
      }
      lVar3 = FUN_050daafc(lVar3,uVar4,uVar5,0);
      *unaff_x19 = lVar3;
      goto LAB_0514b4c4;
    }
  }
  *unaff_x19 = unaff_x21;
LAB_0514b4c4:
  thunk_FUN_02dd37b4();
  return 1;
}


