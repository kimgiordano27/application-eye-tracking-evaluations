/*
FUNCTION_NAME: FUN_031fda10
ENTRY_POINT: 031fda10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_031fda10(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_58;
  
  if ((DAT_0453271a & 1) == 0) {
    FUN_01c5d288(OVRPlugin_OVRP_1_71_0_TypeInfo);
    DAT_0453271a = 1;
  }
  local_58 = 0;
  local_68 = 0;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar6 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  if ((uVar6 >> 0xd & 1) == 0) {
    lVar9 = 0;
  }
  else {
    local_68 = 0;
    (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    local_6c = 0;
    thunk_FUN_01c65de4(param_1,&local_6c,&local_58,&local_68,0);
    uVar3 = local_6c;
    uVar2 = *(undefined4 *)(&DAT_00c7c66c + ((ulong)local_6c & 6) * 4);
    uVar6 = local_6c & 0x700;
    if (uVar6 < 0x201) {
      uVar8 = 1;
      if (uVar6 != 0x100) {
        uVar8 = 2;
      }
    }
    else if (uVar6 == 0x300) {
      uVar8 = 3;
    }
    else if (uVar6 == 0x400) {
      uVar8 = 4;
    }
    else if (uVar6 == 0x500) {
      uVar8 = 5;
    }
    else {
      uVar8 = 2;
    }
    uVar6 = local_6c & 0x30;
    uVar1 = local_6c & 0x3000;
    uVar7 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    uVar5 = local_58;
    uVar4 = local_68;
    lVar9 = thunk_FUN_01c496e0(*(undefined8 *)OVRPlugin_OVRP_1_71_0_TypeInfo);
    FUN_032f97b8(lVar9,0);
    *(undefined8 *)(lVar9 + 0x10) = uVar4;
    *(undefined8 *)(lVar9 + 0x18) = uVar5;
    *(undefined4 *)(lVar9 + 0x20) = uVar2;
    *(byte *)(lVar9 + 0x25) = (byte)uVar3 & 1;
    *(byte *)(lVar9 + 0x24) = (byte)(uVar3 >> 6) & 1;
    *(byte *)(lVar9 + 0x26) = (byte)(uVar7 >> 7) & 1;
    *(undefined4 *)(lVar9 + 0x28) = uVar8;
    *(bool *)(lVar9 + 0x2c) = uVar6 == 0x10;
    *(bool *)(lVar9 + 0x2d) = uVar1 == 0x1000;
  }
  return lVar9;
}


