/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureHeight
ENTRY_POINT: 01dace40
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureHeight(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w20;
  int unaff_w21;
  int *unaff_x22;
  undefined4 in_stack_00000008;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  iVar2 = FUN_01dad100();
  iVar3 = *unaff_x22;
  thunk_FUN_00ffe618();
  puVar1 = PTR_DAT_023578f8;
  if (iVar3 == iVar2) {
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0235a230);
    uVar5 = FUN_01d75474(uVar5,0);
    thunk_FUN_010303a8(PTR_DAT_0235a238);
    uVar6 = thunk_FUN_010400dc();
    FUN_01da5d18(uVar6,uVar5);
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0235a240);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar6,uVar5);
  }
  in_stack_00000008 = 0;
  do {
    do {
      do {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        FUN_01da8120(&stack0x00000008);
        iVar3 = *unaff_x22;
        thunk_FUN_00ffe618();
        if (iVar3 == 0) {
          FUN_01dac7a8();
          thunk_FUN_00ffe618();
          iVar3 = FUN_00ff7794();
          if (iVar3 == 0) {
            return;
          }
          FUN_01dacd8c();
        }
      } while (unaff_w21 == -1);
      if (unaff_w21 == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar4 = FUN_01da8220(&stack0x00000008);
    } while ((uVar4 & 1) == 0);
    iVar3 = thunk_FUN_01027034(0);
    if (iVar3 - unaff_w20 < 0) {
      return;
    }
  } while (0 < unaff_w21 - (iVar3 - unaff_w20));
  return;
}


