/*
FUNCTION_NAME: FUN_0644baa0
ENTRY_POINT: 0644baa0
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void FUN_0644baa0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_1d8 [80];
  undefined8 local_188;
  undefined8 local_180;
  ulong uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined1 auStack_f0 [80];
  undefined1 auStack_a0 [80];
  
  puVar5 = System_Func<SpriteGlyph,_uint>_TypeInfo;
  puVar4 = System_Func<SocketPose,_bool>_TypeInfo;
  puVar3 = System_Func<float,_object>_TypeInfo;
  puVar2 = System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo;
  if ((DAT_071cd9ba & 1) == 0) {
    FUN_02f07e70(System_Func<Stream,_Task>_TypeInfo);
    FUN_02f07e70(System_Func<SpriteGlyph,_uint>_TypeInfo);
    FUN_02f07e70(System_Func<string,_CallSite<Func<CallSite,_object,_object>>>_TypeInfo);
    FUN_02f07e70(System_Func<float,_object>_TypeInfo);
    FUN_02f07e70(System_Func<float,_float>_TypeInfo);
    FUN_02f07e70(System_Func<SocketPose,_bool>_TypeInfo);
    FUN_02f07e70(System_Func<SocketPose,_int>_TypeInfo);
    FUN_02f07e70(System_Func<object,_bool>_TypeInfo);
    FUN_02f07e70(System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo);
    DAT_071cd9ba = 1;
  }
  local_188 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_178 = 0;
  local_180 = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x30) = 3;
  puVar6 = System_Func<Stream,_Task>_TypeInfo;
  local_108 = 0;
  uStack_fc = 0;
  uStack_104 = 0x14;
  uStack_100 = 0x3d4ccccd;
  local_f8 = FUN_0644a474(*(undefined8 *)puVar2);
  thunk_FUN_02f411dc(&local_f8);
  *(undefined8 *)(param_1 + 0x48) = local_f8;
  *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_fc,uStack_100);
  *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_104,local_108);
  thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x48),0);
  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
  FUN_0417b00c(lVar7,*(undefined8 *)puVar3);
  lVar8 = *(long *)puVar5;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar8 = *(long *)puVar5;
  }
  uStack_158 = (*(undefined8 **)(lVar8 + 0xb8))[1];
  local_160 = **(undefined8 **)(lVar8 + 0xb8);
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  local_170 = FUN_0644a474(*(undefined8 *)puVar2);
  thunk_FUN_02f411dc(&local_170,local_170);
  lVar10 = *(long *)puVar6;
  local_188 = 0;
  local_180 = 0;
  uStack_178 = uStack_178 & 0xffffffff00000000;
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_02eea7c4(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02eea768();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar2 = System_Func<object,_bool>_TypeInfo;
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02eea768();
  }
  local_188 = **(undefined8 **)(lVar8 + 0xb8);
  thunk_FUN_02f411dc(&local_188);
  uStack_168 = local_188;
  thunk_FUN_02f411dc(&uStack_168,0);
  uStack_148 = uStack_178;
  local_150 = local_180;
  uStack_138 = uStack_168;
  uStack_140 = local_170;
  thunk_FUN_02f411dc(&uStack_140,0);
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  local_170 = FUN_0644a474(*(undefined8 *)puVar2);
  thunk_FUN_02f411dc(&local_170,local_170);
  lVar10 = *(long *)puVar6;
  local_188 = 0;
  local_180 = 0;
  uStack_178 = CONCAT44(uStack_178._4_4_,1);
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_02eea7c4(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02eea768();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02eea768();
  }
  local_188 = **(undefined8 **)(lVar8 + 0xb8);
  thunk_FUN_02f411dc(&local_188);
  uStack_168 = local_188;
  thunk_FUN_02f411dc(&uStack_168,0);
  uStack_128 = uStack_178;
  local_130 = local_180;
  uStack_118 = uStack_168;
  uStack_120 = local_170;
  thunk_FUN_02f411dc(&uStack_120,0);
  memcpy(auStack_1d8,&local_160,0x50);
  if (lVar7 != 0) {
    lVar10 = *(long *)System_Func<string,_CallSite<Func<CallSite,_object,_object>>>_TypeInfo;
    memcpy(auStack_f0,auStack_1d8,0x50);
    lVar8 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar3 = System_Func<SocketPose,_int>_TypeInfo;
    puVar2 = System_Func<float,_float>_TypeInfo;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * 0x50;
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar8 + 0x20),auStack_f0,0x50);
        thunk_FUN_02f411dc(lVar8 + 0x40,0);
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
        memcpy(auStack_a0,auStack_f0,0x50);
        FUN_0417b950(lVar7,auStack_a0,uVar9);
      }
      *(long *)(param_1 + 0x50) = lVar7;
      thunk_FUN_02f411dc((long *)(param_1 + 0x50),lVar7);
      uVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
      FUN_04082338(uVar9,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x58) = uVar9;
      thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x58),uVar9);
      FUN_066f6380(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


