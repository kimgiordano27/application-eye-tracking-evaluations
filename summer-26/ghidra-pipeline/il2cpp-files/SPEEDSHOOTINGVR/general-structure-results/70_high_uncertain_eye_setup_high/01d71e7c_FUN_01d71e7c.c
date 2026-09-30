/*
FUNCTION_NAME: FUN_01d71e7c
ENTRY_POINT: 01d71e7c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01d71e7c(long *param_1,long *param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_0247d768 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02358ca8);
    FUN_00fdc2e4(PTR_DAT_023539f0);
    FUN_00fdc2e4(PTR_DAT_0234c598);
    FUN_00fdc2e4(PTR_DAT_0234bc58);
    DAT_0247d768 = 1;
  }
  uVar4 = FUN_01cc7e9c(param_1,0,0);
  puVar6 = PTR_DAT_0234bc58;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    puVar2 = PTR_DAT_02358ca8;
    if (param_2 != (long *)0x0) {
      uVar8 = *(undefined8 *)PTR_DAT_02358ca8;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar8 = FUN_01d5e86c(uVar8);
      uVar4 = (**(code **)(*param_2 + 0x278))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x280));
      if ((uVar4 & 1) == 0) {
        uVar8 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        plVar5 = (long *)FUN_01d5e86c(uVar8);
        if (plVar5 != param_2) {
          uVar8 = thunk_FUN_010303a8(PTR_DAT_02358cc0);
          uVar8 = FUN_01d75474(uVar8,0);
          thunk_FUN_010303a8(PTR_DAT_0234bcd0);
          uVar7 = thunk_FUN_010400dc();
          FUN_01c65ad0(uVar7,uVar8,0);
          uVar8 = thunk_FUN_010303a8(PTR_DAT_02358cd0);
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar7,uVar8);
        }
      }
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      iVar3 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
      if (iVar3 == 2) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_023539f0 + 0x130);
        if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
           (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)PTR_DAT_023539f0)) {
          FUN_01d718f4(param_1,param_2,param_3 & 1);
          return;
        }
      }
      else {
        if (iVar3 != 0x10) {
                    /* WARNING: Could not recover jumptable at 0x01d72060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1e8))
                    (param_1,param_2,param_3 & 1,*(undefined8 *)(*param_1 + 0x1f0));
          return;
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_0234c598 + 0x130);
        if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
           (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)PTR_DAT_0234c598)) {
          OVRManager__UpdateInsightPassthrough(param_1,param_2,param_3 & 1);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(param_1);
    }
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar8 = thunk_FUN_010400dc();
    puVar6 = PTR_DAT_02353ae0;
  }
  else {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar8 = thunk_FUN_010400dc();
    puVar6 = PTR_DAT_02358cb0;
  }
  uVar7 = thunk_FUN_010303a8(puVar6);
  FUN_01c5e120(uVar8,uVar7,0);
  uVar7 = thunk_FUN_010303a8(PTR_DAT_02358cd0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar8,uVar7);
}


