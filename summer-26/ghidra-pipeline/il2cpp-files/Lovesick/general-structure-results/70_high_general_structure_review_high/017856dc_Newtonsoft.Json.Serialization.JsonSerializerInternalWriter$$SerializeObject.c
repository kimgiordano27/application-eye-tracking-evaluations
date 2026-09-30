/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeObject
ENTRY_POINT: 017856dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeObject(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  bool in_CY;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  long unaff_x23;
  undefined8 uVar14;
  long *unaff_x26;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  if (in_CY) {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar13 = *unaff_x26;
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    uVar10 = FUN_017bd5a0();
    do {
      puVar1 = (undefined8 *)(unaff_x20 + unaff_x23 * 2);
      puVar2 = (undefined8 *)(unaff_x19 + unaff_x23 * 2);
      uVar14 = *puVar1;
      uVar4 = puVar1[1];
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_00be5230(uVar14,uVar4,uVar3,uVar5,
                            *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabd_s32__);
      if ((uVar11 & 1) != 0) break;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar13 = *unaff_x26;
      lVar9 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar9 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      unaff_x23 = FUN_017bd598(unaff_x23,**(undefined4 **)(lVar9 + 0xb8),0);
      uVar11 = FUN_017bd58c(uVar10,0);
      uVar12 = FUN_017bd58c(unaff_x23,0);
    } while (uVar12 <= uVar11);
  }
  uVar11 = FUN_017bd58c();
  uVar10 = FUN_017bd598(unaff_x23,4,0);
  uVar12 = FUN_017bd58c(uVar10,0);
  puVar7 = PTR_DAT_033f1148;
  if (uVar12 <= uVar11) {
    do {
      uVar10 = *(undefined8 *)(unaff_x20 + unaff_x23 * 2);
      uVar14 = *(undefined8 *)(unaff_x19 + unaff_x23 * 2);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_017cc468(uVar10,uVar14,0);
      if ((uVar11 & 1) != 0) break;
      unaff_x23 = FUN_017bd598(unaff_x23,4,0);
      uVar11 = FUN_017bd58c();
      uVar10 = FUN_017bd598(unaff_x23,4,0);
      uVar12 = FUN_017bd58c(uVar10,0);
    } while (uVar12 <= uVar11);
  }
  uVar11 = FUN_017bd58c();
  uVar10 = FUN_017bd598(unaff_x23,2,0);
  uVar12 = FUN_017bd58c(uVar10,0);
  if ((uVar12 <= uVar11) &&
     (*(int *)(unaff_x20 + unaff_x23 * 2) == *(int *)(unaff_x19 + unaff_x23 * 2))) {
    unaff_x23 = FUN_017bd598(unaff_x23,2,0);
  }
  uVar11 = FUN_017bd58c(unaff_x23,0);
  uVar12 = FUN_017bd58c();
  puVar7 = Newtonsoft_Json_JsonReader_State_TypeInfo;
  if (uVar11 < uVar12) {
    do {
      uVar6 = *(undefined2 *)(unaff_x19 + unaff_x23 * 2);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      iVar8 = FUN_016f8fa4(unaff_x20 + unaff_x23 * 2,uVar6,0);
      if (iVar8 != 0) {
        return iVar8;
      }
      unaff_x23 = FUN_017bd598(unaff_x23,1,0);
      uVar11 = FUN_017bd58c(unaff_x23,0);
      uVar12 = FUN_017bd58c();
    } while (uVar11 < uVar12);
  }
  return in_stack_00000008._4_4_;
}


