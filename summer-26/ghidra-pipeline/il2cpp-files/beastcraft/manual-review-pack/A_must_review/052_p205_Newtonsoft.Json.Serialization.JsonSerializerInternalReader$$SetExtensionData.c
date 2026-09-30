/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 055d8d94
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData
          (undefined8 *param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  
  iVar2 = FUN_05492684(param_2,*param_1);
  if (-1 < iVar2) {
    thunk_FUN_02ea289c(PTR_DAT_06a30728);
    uVar4 = thunk_FUN_02e78ab8();
    uVar5 = thunk_FUN_02ea289c(PTR_DAT_06a83568);
    FUN_0557a944(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02ea289c(PTR_DAT_06a83570);
                    /* WARNING: Subroutine does not return */
    FUN_02e3cb88(uVar4,uVar5);
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  iVar2 = FUN_05492f88();
  if ((iVar2 != 0) && (iVar2 < 1)) {
    return **(undefined8 **)(*(long *)(unaff_x23 + 0x90) + 0xb8);
  }
  lVar3 = FUN_0548f424();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  iVar2 = *(int *)(lVar3 + 0x10);
  if (iVar2 < 2) {
    lVar6 = *unaff_x22;
    if (iVar2 == 1) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(lVar6);
        lVar6 = *unaff_x22;
      }
      if ((*(short *)(*(long *)(lVar6 + 0xb8) + 10) == 0x5c) && (1 < *(int *)(unaff_x20 + 0x10))) {
                    /* try { // try from 055d8e70 to 056d8f73 has its CatchHandler @ 055d8e70
                       catch() { ... } // from try @ 055d8e70 with catch @ 055d8e70
                       catch() { ... } // from try @ 055d9070 with catch @ 055d8e70
                       catch() { ... } // from try @ 055d9138 with catch @ 055d8e70
                       catch() { ... } // from try @ 055d9144 with catch @ 055d8e70
                       catch() { ... } // from try @ 055d918c with catch @ 055d8e70 */
        sVar1 = FUN_05487524();
        lVar6 = *unaff_x22;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar6);
          lVar6 = *unaff_x22;
        }
        if (*(short *)(*(long *)(lVar6 + 0xb8) + 0x18) == sVar1) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(lVar6);
          }
          if (*(int *)(*(long *)(unaff_x23 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          lVar6 = *(long *)(*unaff_x22 + 0xb8) + 0x18;
          goto LAB_055d8f64;
        }
      }
    }
  }
  else {
    lVar6 = *unaff_x22;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar6);
      lVar6 = *unaff_x22;
    }
    if (*(short *)(*(long *)(lVar6 + 0xb8) + 10) == 0x5c) {
      sVar1 = FUN_05487524(lVar3,iVar2 + -1,0);
      lVar6 = *unaff_x22;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(lVar6);
        lVar6 = *unaff_x22;
      }
      if (*(short *)(*(long *)(lVar6 + 0xb8) + 0x18) == sVar1) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar6);
        }
        if (*(int *)(*(long *)(unaff_x23 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        lVar6 = *(long *)(*unaff_x22 + 0xb8) + 10;
LAB_055d8f64:
        uVar4 = FUN_0556e974(lVar6,0);
        uVar4 = FUN_05482ce0(lVar3,uVar4,0);
        return uVar4;
      }
    }
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar6);
  }
  uVar4 = FUN_055dd2c8(lVar3);
  return uVar4;
}


