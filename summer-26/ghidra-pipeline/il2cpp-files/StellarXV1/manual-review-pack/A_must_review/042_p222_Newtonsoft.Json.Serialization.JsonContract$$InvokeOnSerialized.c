/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnSerialized
ENTRY_POINT: 076744f4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Newtonsoft_Json_Serialization_JsonContract__InvokeOnSerialized(void)

{
  uint uVar1;
  long lVar2;
  undefined1 (*unaff_x19) [16];
  long unaff_x20;
  long *plVar3;
  uint unaff_w22;
  uint uVar4;
  int iVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar8 [16];
  
  plVar3 = *(long **)(unaff_x20 + 0xd10);
  uVar1 = unaff_w22 & 3;
  if (unaff_w22 < 4) {
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar5 = FUN_07674194();
  }
  else {
    auVar8 = *unaff_x19;
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0988a859 == '\0') {
      FUN_04077588(PTR_DAT_0928fd10);
      DAT_0988a859 = '\x01';
    }
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    auVar7 = NEON_ushl(auVar8,_DAT_01af1c40,4);
    auVar9 = NEON_ushl(auVar8,_DAT_01aefcf0,4);
    iVar5 = CONCAT13(auVar9[3] | auVar7[3],
                     CONCAT12(auVar9[2] | auVar7[2],
                              CONCAT11(auVar9[1] | auVar7[1],auVar9[0] | auVar7[0])));
    auVar6._0_8_ = CONCAT17(auVar9[7] | auVar7[7],
                            CONCAT16(auVar9[6] | auVar7[6],
                                     CONCAT15(auVar9[5] | auVar7[5],
                                              CONCAT14(auVar9[4] | auVar7[4],iVar5))));
    auVar6[8] = auVar9[8] | auVar7[8];
    auVar6[9] = auVar9[9] | auVar7[9];
    auVar6[10] = auVar9[10] | auVar7[10];
    auVar6[0xb] = auVar9[0xb] | auVar7[0xb];
    auVar8[0xc] = auVar9[0xc] | auVar7[0xc];
    auVar8._0_12_ = auVar6;
    auVar8[0xd] = auVar9[0xd] | auVar7[0xd];
    auVar8[0xe] = auVar9[0xe] | auVar7[0xe];
    auVar8[0xf] = auVar9[0xf] | auVar7[0xf];
    iVar5 = iVar5 + (int)((ulong)auVar6._0_8_ >> 0x20) + auVar6._8_4_ + auVar8._12_4_;
  }
  uVar4 = iVar5 + unaff_w22 * 4;
  lVar2 = *plVar3;
  if (uVar1 != 0) {
    iVar5 = *(int *)unaff_x19[1];
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0988a856 == '\0') {
      FUN_04077588(PTR_DAT_0928fd10);
      DAT_0988a856 = '\x01';
    }
    lVar2 = *plVar3;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar2 = *plVar3;
    }
    uVar4 = uVar4 + iVar5 * -0x3d4d51c3;
    uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) * 0x27d4eb2f;
    if (uVar1 != 1) {
      iVar5 = *(int *)(unaff_x19[1] + 4);
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (DAT_0988a856 == '\0') {
        FUN_04077588(PTR_DAT_0928fd10);
        DAT_0988a856 = '\x01';
      }
      lVar2 = *plVar3;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar2 = *plVar3;
      }
      uVar4 = uVar4 + iVar5 * -0x3d4d51c3;
      uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) * 0x27d4eb2f;
      if (uVar1 == 3) {
        iVar5 = *(int *)(unaff_x19[1] + 8);
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (DAT_0988a856 == '\0') {
          FUN_04077588(PTR_DAT_0928fd10);
          DAT_0988a856 = '\x01';
        }
        lVar2 = *plVar3;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar2 = *plVar3;
        }
        uVar4 = uVar4 + iVar5 * -0x3d4d51c3;
        uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) * 0x27d4eb2f;
      }
    }
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = (uVar4 ^ uVar4 >> 0xf) * -0x7a143589;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51c3;
  return uVar1 ^ uVar1 >> 0x10;
}


