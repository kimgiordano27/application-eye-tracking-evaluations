/*
FUNCTION_NAME: FUN_07e66c10
ENTRY_POINT: 07e66c10
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07e66c10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  
  if ((DAT_0899a8a3 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_Media_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_LensFlareCommonSRP_<>c__DisplayClass55_0_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_LensFlareCommonSRP_<>c__DisplayClass56_0_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanSingle_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanByte_TypeInfo);
    DAT_0899a8a3 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x40)) {
    return;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x3c);
  FUN_07e66f18(param_1);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_07e67024();
    puVar2 = System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanByte_TypeInfo;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_049d9b28(&local_98,*(long *)(param_1 + 0x28),
                   *(undefined8 *)
                    System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanByte_TypeInfo);
      puVar1 = UnityEngine_Rendering_LensFlareCommonSRP_<>c__DisplayClass56_0_TypeInfo;
      puStack_58 = puStack_90;
      local_60 = local_98;
      local_50 = local_88;
      local_98 = 0;
      puStack_90 = &local_60;
      while (uVar5 = FUN_061c094c(&local_60,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_07e66b90(*(long *)(param_1 + 0x48),local_50,0x10);
      }
      FUN_061c0948(&local_60,
                   *(undefined8 *)
                    UnityEngine_Rendering_LensFlareCommonSRP_<>c__DisplayClass55_0_TypeInfo);
      puVar3 = System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanSingle_TypeInfo;
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_049d9654(*(long *)(param_1 + 0x28),
                     *(undefined8 *)
                      System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanSingle_TypeInfo
                    );
        if (*(long *)(param_1 + 0x30) != 0) {
          FUN_049d9b28(&local_98,*(long *)(param_1 + 0x30),*(undefined8 *)puVar2);
          puVar2 = OVRPlugin_Media_TypeInfo;
          puStack_78 = puStack_90;
          local_80 = local_98;
          local_70 = local_88;
          local_98 = 0;
          puStack_90 = &local_80;
          while (uVar5 = FUN_061c094c(&local_80,*(undefined8 *)puVar1), lVar4 = local_70,
                (uVar5 & 1) != 0) {
            if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar5 = FUN_07e027b8(local_70,0);
            if (((uVar5 & 1) != 0) || (uVar5 = FUN_07e02868(lVar4,0), (uVar5 & 1) != 0)) {
              uVar6 = FUN_07dfdfd8(lVar4,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07de46f4(uVar6,0);
              lVar7 = *(long *)(param_1 + 0x48);
              uVar6 = FUN_07dfdfd8(lVar4,0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_07e670c8(lVar7,lVar4,uVar6);
            }
          }
          FUN_061c0948(&local_80,
                       *(undefined8 *)
                        UnityEngine_Rendering_LensFlareCommonSRP_<>c__DisplayClass55_0_TypeInfo);
          if (*(long *)(param_1 + 0x30) != 0) {
            FUN_049d9654(*(long *)(param_1 + 0x30),*(undefined8 *)puVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


