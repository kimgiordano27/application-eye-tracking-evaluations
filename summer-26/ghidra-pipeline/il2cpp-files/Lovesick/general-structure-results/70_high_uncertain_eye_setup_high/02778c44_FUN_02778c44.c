/*
FUNCTION_NAME: FUN_02778c44
ENTRY_POINT: 02778c44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02778c44(long param_1,long param_2,undefined4 param_3,uint param_4,long *param_5,
                 long *param_6,undefined2 *param_7,undefined8 *param_8,byte param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_250 [80];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined4 local_1df;
  undefined3 uStack_1db;
  long local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined4 local_1af;
  undefined3 uStack_1ab;
  undefined4 local_1a8;
  undefined3 uStack_1a4;
  long local_1a0;
  long lStack_198;
  undefined8 local_190;
  int local_180 [2];
  long local_178;
  long lStack_170;
  long local_168;
  long lStack_160;
  long local_158;
  long lStack_150;
  long local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  
  puVar7 = StringLiteral_302;
  if ((DAT_03788621 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033ef0d0);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef080);
    thunk_FUN_00d48444(
                      Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_OnApplicationQuitting__
                      );
    thunk_FUN_00d48444(StringLiteral_4895);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_s8__);
    thunk_FUN_00d48444(PTR_DAT_033f5a48);
    thunk_FUN_00d48444(Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
    DAT_03788621 = 1;
  }
  local_70 = 0;
  lStack_88 = 0;
  local_90 = 0;
  lStack_78 = 0;
  local_80 = 0;
  lStack_98 = 0;
  local_a0 = 0;
  uVar14 = NEON_rev64(*(undefined8 *)(param_1 + 0x60),4);
  *(int *)(param_1 + 100) = (int)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) + 1;
  *param_8 = uVar14;
  param_8[1] = param_2;
  plVar11 = param_8 + 2;
  param_8[3] = 0;
  *plVar11 = 0;
  param_8[5] = 0;
  param_8[4] = 0;
  param_8[7] = 0;
  param_8[6] = 0;
  param_8[8] = 0;
  *(byte *)(param_8 + 9) = param_9 & 1;
  *(undefined4 *)((long)param_8 + 0x49) = 0;
  *(undefined4 *)((long)param_8 + 0x4c) = 0;
  iVar2 = *(int *)(param_1 + 100);
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_02661ba8(iVar2 != 0,0);
  if (param_2 == 0) goto LAB_027791c8;
  iVar2 = *(int *)(param_2 + 0x5c);
  if (iVar2 == 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    lVar8 = *(long *)(param_2 + 0x18);
    param_8[4] = *(undefined8 *)(param_2 + 0x28);
    param_8[3] = uVar10;
    *plVar11 = lVar8;
    uVar13 = *(undefined8 *)(param_2 + 0x38);
    uVar10 = *(undefined8 *)(param_2 + 0x30);
    param_8[7] = *(undefined8 *)(param_2 + 0x40);
    param_8[6] = uVar13;
    param_8[5] = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x50);
    param_8[8] = uVar10;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x48);
    if (lVar8 == 0) goto LAB_027791c8;
    iVar3 = *(int *)(lVar8 + 0x18);
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(param_2 + 0x58) / iVar3;
    }
    FUN_0132138c(lVar8,*(int *)(param_2 + 0x58) - iVar5 * iVar3,&local_f0,
                 *(undefined8 *)StringLiteral_4895);
    lVar8 = local_f0;
    if (local_f0 == 0) goto LAB_027791c8;
    iVar2 = iVar2 + -1;
    FUN_0132138c(local_f0,iVar2,&local_f0,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_s8__);
    lStack_98 = lStack_e0;
    local_a0 = lStack_e8;
    lStack_88 = lStack_d0;
    local_90 = local_d8;
    lStack_78 = lStack_c0;
    local_80 = local_c8;
    local_70 = local_b8;
    iVar5 = (int)local_f0;
    iVar3 = *(int *)(param_2 + 0x5c);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02661ba8((int)local_f0 == iVar3,0);
    *(byte *)(param_8 + 9) = *(byte *)(param_8 + 9) | (byte)uStack_a8 & 1;
    lStack_e8 = lStack_98;
    local_f0 = local_a0;
    local_d8 = lStack_88;
    lStack_e0 = local_90;
    local_c8 = lStack_78;
    lStack_d0 = local_80;
    lStack_c0 = local_70;
    param_8[4] = lStack_88;
    param_8[3] = local_90;
    *plVar11 = lStack_98;
    local_100 = local_70;
    lStack_118 = lStack_88;
    local_120 = local_90;
    lStack_108 = lStack_78;
    lStack_110 = local_80;
    lStack_128 = lStack_98;
    local_130 = local_a0;
    param_8[6] = lStack_78;
    param_8[5] = local_80;
    param_8[7] = local_70;
    param_8[8] = local_b0;
    local_180[1] = 0xffffffff;
    local_180[0] = iVar5;
    lStack_170 = lStack_98;
    local_178 = local_a0;
    lStack_160 = lStack_88;
    local_168 = local_90;
    lStack_150 = lStack_78;
    local_158 = local_80;
    local_148 = local_70;
    uStack_140 = local_b0;
    local_138 = uStack_a8;
    FUN_0132149c(lVar8,iVar2,local_180,*(undefined8 *)PTR_DAT_033f5a48);
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 == 0) goto LAB_027791c8;
    uVar4 = *(uint *)(lVar8 + 0x18);
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = *(uint *)(param_1 + 0x60) / uVar4;
    }
    FUN_0132138c(lVar8,*(uint *)(param_1 + 0x60) - uVar6 * uVar4,&local_1a0,
                 *(undefined8 *)
                  Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_OnApplicationQuitting__);
    lVar8 = local_1a0;
    puVar7 = System_Collections_Generic_Dictionary<string,_string>_TypeInfo;
    local_190 = *(undefined8 *)(param_2 + 0x28);
    lStack_198 = *(undefined8 *)(param_2 + 0x20);
    lVar12 = *(long *)(param_2 + 0x18);
    local_1a8 = 0;
    uStack_1a4 = 0;
    bVar1 = local_1a0 == 0;
    local_1a0 = lVar12;
    if (bVar1) goto LAB_027791c8;
    local_1b0 = 1;
    local_1af = 0;
    uStack_1ab = 0;
    local_1d0 = lVar12;
    uStack_1c8 = lStack_198;
    local_1c0 = local_190;
    uStack_1b8 = *(undefined8 *)(param_2 + 0x50);
    FUN_00ce442c(lVar8,&local_1d0,
                 *(undefined8 *)System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    uStack_1e8 = *(undefined8 *)(param_2 + 0x50);
    uStack_1f8 = *(undefined8 *)(param_2 + 0x38);
    local_200 = *(undefined8 *)(param_2 + 0x30);
    local_1f0 = *(undefined8 *)(param_2 + 0x40);
    local_1e0 = 0;
    local_1df = 0;
    uStack_1db = 0;
    uVar14 = FUN_00ce442c(lVar8,&local_200,*(undefined8 *)puVar7);
    uVar10 = *(undefined8 *)(param_2 + 0x50);
  }
  uVar9 = FUN_02779514(uVar14,uVar10,param_3,param_4,(undefined4 *)(param_2 + 0x18),
                       (undefined4 *)(param_2 + 0x30),1);
  if ((uVar9 & 1) == 0) {
    FUN_02778438(param_1,param_2,param_3,param_4,param_5,param_6,1);
  }
  else {
    if ((*(long *)(param_2 + 0x50) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_2 + 0x50) + 0x18), lVar8 == 0)) goto LAB_027791c8;
    FUN_01282738(lVar8,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                 *(undefined8 *)
                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                );
    if ((*(long *)(param_2 + 0x50) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_2 + 0x50) + 0x20), lVar8 == 0)) goto LAB_027791c8;
    FUN_01282738(lVar8,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
  }
  *(uint *)(param_2 + 0x48) = param_4 / 3;
  uVar14 = NEON_rev64(*param_8,4);
  *(undefined8 *)(param_2 + 0x58) = uVar14;
  lVar8 = *(long *)(param_1 + 0x48);
  if (lVar8 != 0) {
    iVar2 = *(int *)(lVar8 + 0x18);
    iVar3 = 0;
    if ((long)iVar2 != 0) {
      iVar3 = (int)((long)(ulong)*(uint *)(param_1 + 0x60) / (long)iVar2);
    }
    FUN_0132138c(lVar8,*(uint *)(param_1 + 0x60) - iVar3 * iVar2,&local_f0,
                 *(undefined8 *)StringLiteral_4895);
    lVar8 = local_f0;
    memcpy(&local_f0,param_8,0x50);
    puVar7 = PTR_DAT_033ef0d0;
    if (lVar8 != 0) {
      memcpy(auStack_250,&local_f0,0x50);
      FUN_00ce461c(lVar8,auStack_250,*(undefined8 *)puVar7);
      if ((*(long *)(param_2 + 0x50) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_2 + 0x50) + 0x18), lVar8 != 0)) {
        local_130 = 0;
        lStack_128 = 0;
        FUN_01344298(&local_130,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                     *(undefined4 *)(param_2 + 0x18),param_3,
                     *(undefined8 *)
                      Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
        param_5[1] = lStack_128;
        *param_5 = local_130;
        if ((*(long *)(param_2 + 0x50) != 0) &&
           (lVar8 = *(long *)(*(long *)(param_2 + 0x50) + 0x20), lVar8 != 0)) {
          local_1a0 = 0;
          lStack_198 = 0;
          FUN_01344298(&local_1a0,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                       *(undefined4 *)(param_2 + 0x30),param_4,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
          param_6[1] = lStack_198;
          *param_6 = local_1a0;
          *param_7 = (short)*(undefined4 *)(param_2 + 0x18);
          return;
        }
      }
    }
  }
LAB_027791c8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


