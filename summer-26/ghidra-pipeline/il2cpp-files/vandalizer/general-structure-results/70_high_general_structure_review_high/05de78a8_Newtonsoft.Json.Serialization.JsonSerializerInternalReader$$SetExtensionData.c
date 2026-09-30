/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 05de78a8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined2 uStack_10;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x440));
  FUN_031f20f4(PTR_DAT_075d7fe0);
  *(undefined1 *)(unaff_x23 + 0x48f) = 1;
  puVar2 = PTR_DAT_075e8180;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  if ((unaff_x21 != 0) && (*(int *)(unaff_x21 + 0x10) == 1)) {
    uVar3 = FUN_05c829ac();
    if (uVar3 < 0x53) {
      if (uVar3 == 0x4f) {
LAB_05de7924:
        uStack_10 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_05dec980();
        uVar1 = *(uint *)(unaff_x29 + -0xc);
        lVar5 = *(long *)PTR_DAT_075e27b8;
        if (0x21 < uVar1) {
          FUN_05e21fe0(0);
        }
        if ((*(byte *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        puVar2 = PTR_DAT_075ebf70;
        *(undefined8 **)(unaff_x29 + -0x20) = &uStack_50;
        *(ulong *)(unaff_x29 + -0x18) = (ulong)uVar1;
        lVar5 = FUN_05010890(unaff_x29 + -0x20,*(undefined8 *)puVar2);
        goto LAB_05de7a54;
      }
      if (uVar3 == 0x52) goto LAB_05de7a84;
    }
    else {
      if (uVar3 == 0x72) {
LAB_05de7a84:
        lVar5 = thunk_FUN_0322cc60(0x1d,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        FUN_05c857f0(lVar5,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
        }
        FUN_05dece5c();
        goto LAB_05de7a54;
      }
      if (uVar3 == 0x6f) goto LAB_05de7924;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_075a9128 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_05d547ec();
  if (DAT_07a3d293 == '\0') {
    FUN_031f20f4(PTR_DAT_075a1470);
    DAT_07a3d293 = '\x01';
  }
  if (unaff_x21 != 0) {
    FUN_05c857f0();
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = FUN_05ded1c0();
  lVar5 = FUN_05c9768c(uVar4,0);
LAB_05de7a54:
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}


