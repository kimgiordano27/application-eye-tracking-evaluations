/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
ENTRY_POINT: 01db6e08
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
               (ulong param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lStack0000000000000038;
  
  lStack0000000000000038 = param_3;
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02359fa0);
    FUN_00fdc2e4(PTR_DAT_0234c670);
    FUN_00fdc2e4(PTR_DAT_0234bca8);
    FUN_00fdc2e4(PTR_DAT_0235a670);
    FUN_00fdc2e4(PTR_DAT_0235a678);
    *(undefined1 *)(unaff_x20 + 0xa27) = 1;
  }
  lVar8 = *(long *)(param_2 + 0x48);
  thunk_FUN_00ffe618();
  if ((lVar8 == 0) && (lVar8 = FUN_01db85c8(param_2,0), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  *(long *)(lVar8 + 0x28) = param_3;
  thunk_FUN_0106e12c((long *)(lVar8 + 0x28),0);
  uVar4 = FUN_01db71b8(param_2);
  puVar3 = PTR_DAT_0234c670;
  if ((uVar4 & 0x3400) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0234c670 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    if ((param_3 == 0) || (iVar1 = *(int *)(param_3 + 0x20), thunk_FUN_00ffe618(), iVar1 < 2)) {
      puVar2 = PTR_DAT_0234bca8;
      lVar5 = *(long *)PTR_DAT_0234bca8;
      if (param_4 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar5 = *(long *)puVar2;
        }
        lVar7 = *(long *)puVar3;
        uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01022c14(lVar7);
        }
        FUN_01da63c8(&stack0x00000038,uVar6,param_2);
      }
      else {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar5 = *(long *)puVar2;
        }
        uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
        uVar6 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a678);
        FUN_01aac154(uVar6,param_2,param_4,param_5,*(undefined8 *)PTR_DAT_0235a670);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        FUN_01da63c8(&stack0x00000038,uVar9,uVar6);
      }
      uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)PTR_DAT_02359fa0);
      *(undefined8 *)(lVar8 + 0x30) = uVar6;
      thunk_FUN_0106e12c((undefined8 *)(lVar8 + 0x30));
    }
    else {
      FUN_01db7214(param_2,0);
    }
  }
  return;
}


