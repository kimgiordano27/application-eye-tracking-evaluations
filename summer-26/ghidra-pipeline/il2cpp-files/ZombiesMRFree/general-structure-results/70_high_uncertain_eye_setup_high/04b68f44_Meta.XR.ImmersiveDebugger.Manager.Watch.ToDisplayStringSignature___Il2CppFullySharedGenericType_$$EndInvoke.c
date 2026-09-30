/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$EndInvoke
ENTRY_POINT: 04b68f44
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__EndInvoke
               (ulong param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x21;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *puVar9;
  long unaff_x25;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x26;
  undefined8 *puVar12;
  long unaff_x27;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x770);
  puVar12 = *(undefined8 **)(unaff_x26 + 0x7b0);
  puVar7 = *(undefined8 **)(unaff_x21 + 0x7a8);
  puVar10 = *(undefined8 **)(unaff_x25 + 0xc40);
  puVar9 = *(undefined8 **)(unaff_x24 + 0xc38);
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6e760);
    FUN_02fe925c(PTR_DAT_06f6e780);
    FUN_02fe925c(PTR_DAT_06f9b958);
    FUN_02fe925c(PTR_DAT_06f6e770);
    FUN_02fe925c(PTR_DAT_06f717a8);
    FUN_02fe925c(PTR_DAT_06f6dc38);
    FUN_02fe925c(PTR_DAT_06f717b0);
    FUN_02fe925c(PTR_DAT_06f6e768);
    FUN_02fe925c(PTR_DAT_06f6dc40);
    FUN_02fe925c(PTR_DAT_06f6d6a0);
    *(undefined1 *)(unaff_x27 + 0x21a) = 1;
  }
  puVar1 = PTR_DAT_06f6d6a0;
  lVar2 = thunk_FUN_0301080c(*unaff_x23);
  FUN_043b4bd8(lVar2,*puVar8);
  lVar3 = thunk_FUN_0301080c(*puVar12);
  FUN_04357908(lVar3,*puVar7);
  lVar4 = thunk_FUN_0301080c(*puVar12);
  FUN_04357908(lVar4,*puVar7);
  lVar5 = thunk_FUN_0301080c(*puVar10);
  FUN_0442fab4(lVar5,*puVar9);
  lVar6 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02feb2c4();
  }
  uVar11 = **(undefined8 **)(lVar6 + 0xc0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar1);
  }
  uVar11 = FUN_05afde1c(uVar11,0);
  if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4(*(long *)(param_3 + 0x20));
  }
  FUN_04b6917c(param_2,uVar11,lVar2,lVar3,lVar4,lVar5,0,0);
  if (lVar2 != 0) {
    uVar11 = FUN_043b6de8(lVar2,*(undefined8 *)PTR_DAT_06f6e780);
    *param_2 = uVar11;
    thunk_FUN_03048534(param_2,uVar11);
    puVar1 = PTR_DAT_06f9b958;
    if (lVar3 != 0) {
      uVar11 = FUN_04359b5c(lVar3,*(undefined8 *)PTR_DAT_06f9b958);
      param_2[1] = uVar11;
      thunk_FUN_03048534();
      if (lVar5 != 0) {
        uVar11 = FUN_04431d44(lVar5,*(undefined8 *)PTR_DAT_06f6e760);
        param_2[3] = uVar11;
        thunk_FUN_03048534();
        if (lVar4 != 0) {
          uVar11 = FUN_04359b5c(lVar4,*(undefined8 *)puVar1);
          param_2[2] = uVar11;
          thunk_FUN_03048534(param_2 + 2,uVar11);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


