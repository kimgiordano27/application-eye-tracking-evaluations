/*
FUNCTION_NAME: FUN_065894e0
ENTRY_POINT: 065894e0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_065894e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar1 = BNG_Slider_var;
  if ((DAT_073a051e & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f998e0);
    FUN_02fe925c(BNG_Slider_var);
    FUN_02fe925c(StatisticManager_var);
    FUN_02fe925c(Unity_VisualScripting_SerializeAttribute_var);
    DAT_073a051e = 1;
  }
  lVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
  thunk_FUN_06549f88(lVar3,0);
  local_38 = FUN_0656b5b0(lVar3,0);
  local_38 = FUN_06572ac8(&local_38,param_1,0x7a,0);
  puVar1 = Unity_VisualScripting_SerializeAttribute_var;
  if (local_38 != 0) {
    *(undefined8 *)(local_38 + 0x80) = param_4;
    thunk_FUN_03048534((undefined8 *)(local_38 + 0x80),param_4);
    lVar2 = local_38;
    local_50 = 0;
    uStack_48 = 0;
    FUN_06549240(&local_50,*(undefined8 *)puVar1,0);
    puVar1 = StatisticManager_var;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x28) = uStack_48;
      *(undefined8 *)(lVar2 + 0x20) = local_50;
      thunk_FUN_03048534(lVar2 + 0x20,0);
      lVar2 = local_38;
      local_50 = 0;
      uStack_48 = 0;
      FUN_06549240(&local_50,*(undefined8 *)puVar1,0);
      uVar4 = FUN_0654967c(local_50,uStack_48,0);
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0x40);
        *puVar5 = uVar4;
        thunk_FUN_03048534(puVar5,uVar4);
        if (local_38 != 0) {
          *(undefined8 *)(local_38 + 0x58) = param_2;
          *(undefined8 *)(local_38 + 0x60) = param_3;
          thunk_FUN_03048534((undefined8 *)(local_38 + 0x58),0);
          puVar1 = PTR_DAT_06f998e0;
          if (local_38 != 0) {
            FUN_065692dc(local_38,1,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar4 = _DAT_01370750;
            if (local_38 != 0) {
              *(undefined8 *)(local_38 + 0x18) = _UNK_01370758;
              *(undefined8 *)(local_38 + 0x10) = uVar4;
              auVar6 = FUN_065582b4(0,0);
              auVar7 = FUN_065582b4(1,0);
              if (local_38 != 0) {
                *(undefined1 (*) [16])(local_38 + 200) = auVar7;
                *(undefined1 (*) [16])(local_38 + 0xb8) = auVar6;
                FUN_065692b0(local_38,1,0);
                if (lVar3 != 0) {
                  *(undefined4 *)(lVar3 + 0x140) = 0x78;
                  return lVar3;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


