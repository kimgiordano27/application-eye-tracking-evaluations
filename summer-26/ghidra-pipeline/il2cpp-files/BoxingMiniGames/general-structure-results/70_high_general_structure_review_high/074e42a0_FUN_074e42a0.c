/*
FUNCTION_NAME: FUN_074e42a0
ENTRY_POINT: 074e42a0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_074e42a0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_07ef453e & 1) == 0) {
    FUN_03642964(Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_03642964(PTR_DAT_07a0b588);
    DAT_07ef453e = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      if (param_2 == 0) {
        local_60 = 0;
        uStack_58 = 0;
      }
      else if (*(int *)(param_2 + 0x10) == 0) {
        uVar1 = FUN_05e7282c(1,0);
        uVar1 = FUN_05e72830(uVar1,0);
        local_40 = 0;
        uStack_38 = 0;
        FUN_071d6edc(&local_40,uVar1,0,0);
        local_60 = local_40;
        uStack_58 = uStack_38;
      }
      else {
        if (DAT_07eddfaf == '\0') {
          FUN_03642964(PTR_DAT_079ffcf8);
          DAT_07eddfaf = '\x01';
        }
        local_50 = FUN_05c94ef4(param_2,0);
        local_48 = (ulong)*(uint *)(param_2 + 0x10);
        uVar1 = FUN_04d98008(&local_50,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
        FUN_071d6edc(&local_60,uVar1,local_48 & 0xffffffff,0);
      }
      if (param_3 == 0) {
        local_80 = 0;
        uStack_78 = 0;
      }
      else if (*(int *)(param_3 + 0x10) == 0) {
        uVar1 = FUN_05e7282c(1,0);
        uVar1 = FUN_05e72830(uVar1,0);
        local_40 = 0;
        uStack_38 = 0;
        FUN_071d6edc(&local_40,uVar1,0,0);
        uStack_78 = uStack_38;
        local_80 = local_40;
      }
      else {
        if (DAT_07eddfaf == '\0') {
          FUN_03642964(PTR_DAT_079ffcf8);
          DAT_07eddfaf = '\x01';
        }
        local_70 = FUN_05c94ef4(param_3,0);
        local_68 = (ulong)*(uint *)(param_3 + 0x10);
        uVar1 = FUN_04d98008(&local_70,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
        FUN_071d6edc(&local_80,uVar1,local_68 & 0xffffffff,0);
      }
      if (DAT_07ef45c8 == (code *)0x0) {
        DAT_07ef45c8 = (code *)FUN_03642928(
                                           "UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Bindings.ManagedSpanWrapper&)"
                                           );
      }
      (*DAT_07ef45c8)(lVar2,&local_60,&local_80);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_071d6d5c(param_1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


