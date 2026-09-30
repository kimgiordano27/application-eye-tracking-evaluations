/*
FUNCTION_NAME: FUN_01a922b0
ENTRY_POINT: 01a922b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01a922b0(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  int local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_a0 [7];
  int local_64;
  
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_f64__;
  if ((DAT_0377cd28 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_8940);
    thunk_FUN_00d48444(Method_System_String_Replace__);
    thunk_FUN_00d48444(Method_System_Data_DataColumn_set_Prefix__);
    thunk_FUN_00d48444(StringLiteral_13950);
    thunk_FUN_00d48444(StringLiteral_8453);
    thunk_FUN_00d48444(StringLiteral_9912);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_f64__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_Add__);
    thunk_FUN_00d48444(Method_OVRSpatialAnchor_LoadUnboundAnchorsAsync__);
    thunk_FUN_00d48444(Method_MotelTombstone_MiddleRightPiecePlaced__);
    DAT_0377cd28 = 1;
  }
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[0] = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_e0 = 0;
  uVar9 = FUN_0112d330(param_1,local_a0 + 2,*(undefined8 *)puVar3);
  puVar2 = StringLiteral_9912;
  puVar3 = Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__;
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864();
    }
    puVar8 = StringLiteral_13950;
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
    ;
    uVar9 = FUN_010a0568(local_a0 + 2,local_a0,*(undefined8 *)puVar2);
    puVar7 = StringLiteral_302;
    puVar6 = Method_OVRSpatialAnchor_LoadUnboundAnchorsAsync__;
    puVar5 = Method_MotelTombstone_MiddleRightPiecePlaced__;
    puVar4 = Method_System_Data_DataColumn_set_Prefix__;
    puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
    if ((uVar9 & 1) == 0) {
      local_108 = param_1;
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__,
                                  &local_108);
      local_10c = param_2;
      uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_10c);
      uVar12 = FUN_01600b5c(*(undefined8 *)puVar6,uVar12,uVar13,0);
      uVar12 = FUN_015f5b28(*(undefined8 *)puVar5,uVar12,0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar7);
      }
      FUN_026610e4(uVar12,0);
      local_64 = param_2;
      FUN_0112c260(0,&local_64,&local_100,*(undefined8 *)puVar8);
      local_a0[5] = uStack_f8;
      local_a0[4] = local_100;
      local_a0[6] = local_f0;
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01a92654(&local_100,0x9b8056f,param_1);
      uStack_b8 = uStack_f8;
      local_c0 = local_100;
      uStack_a8 = uStack_e8;
      uStack_b0 = local_f0;
      lVar10 = *(long *)(*(long *)puVar4 + 0x20);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      pcVar11 = (char *)thunk_FUN_00d32ed4(&local_c0,*(undefined8 *)(lVar10 + 0x80));
      puVar2 = Method_System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_Add__;
      if (*pcVar11 != '\0') {
        FUN_00c075a0(&local_100,&local_c0,*(undefined8 *)Method_System_String_Replace__);
        uStack_d8 = uStack_f8;
        local_e0 = local_100;
        local_d0 = local_f0;
        if (local_a0[0] == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (long)*(int *)(local_a0[0] + 0x18);
        }
        FUN_01b7b498(&local_100,&local_e0,*(undefined8 *)puVar2,lVar10,0,0);
      }
      local_100 = CONCAT44(local_100._4_4_,param_2);
      FUN_0112c260(local_a0[0],&local_100,local_a0 + 4,*(undefined8 *)puVar8);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar2 = StringLiteral_8453;
    FUN_01a92720(0x9b8056f,param_1,(long)param_2);
    local_f0 = local_a0[6];
    uStack_f8 = local_a0[5];
    local_100 = local_a0[4];
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uStack_128 = uStack_f8;
    local_130 = local_100;
    local_120 = local_f0;
    FUN_01351f70(local_a0 + 2,&local_130,*(undefined8 *)puVar2);
  }
  return;
}


