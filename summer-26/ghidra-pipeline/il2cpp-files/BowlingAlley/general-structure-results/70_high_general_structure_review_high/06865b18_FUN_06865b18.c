/*
FUNCTION_NAME: FUN_06865b18
ENTRY_POINT: 06865b18
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_06865b18(long param_1)

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
  
  puVar5 = Method_System_Collections_Generic_KeyValuePair<Type,_PostProcessBundle>_get_Value__;
  puVar4 = 
  Method_System_Collections_Generic_KeyValuePair<Type,_Dictionary<InstanceHandle,_Inspector>>_get_Value__
  ;
  puVar3 = Method_System_Collections_Generic_KeyValuePair<Transform,_Pose>__ctor__;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Key__;
  if ((DAT_076e0f83 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<Type,_VolumeComponent>_get_Key__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<Type,_PostProcessBundle>_get_Value__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<Type,_VolumeComponent>_get_Value__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_KeyValuePair<Transform,_Pose>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_KeyValuePair<Transform,_Pose>_get_Key__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<Type,_Dictionary<InstanceHandle,_Inspector>>_get_Value__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Value__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Key__
                      );
    DAT_076e0f83 = 1;
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
  puVar6 = Method_System_Collections_Generic_KeyValuePair<Type,_VolumeComponent>_get_Key__;
  local_108 = 0;
  uStack_fc = 0;
  uStack_104 = 0x14;
  uStack_100 = 0x3d4ccccd;
  local_f8 = FUN_068644ec(*(undefined8 *)puVar2);
  thunk_FUN_0333a630(&local_f8);
  *(undefined8 *)(param_1 + 0x48) = local_f8;
  *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_fc,uStack_100);
  *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_104,local_108);
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x48),0);
  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
  FUN_0438e7a8(lVar7,*(undefined8 *)puVar3);
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
    thunk_FUN_032cd7c0();
    lVar8 = *(long *)puVar5;
  }
  uStack_158 = (*(undefined8 **)(lVar8 + 0xb8))[1];
  local_160 = **(undefined8 **)(lVar8 + 0xb8);
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  local_170 = FUN_068644ec(*(undefined8 *)puVar2);
  thunk_FUN_0333a630(&local_170,local_170);
  lVar10 = *(long *)puVar6;
  local_188 = 0;
  local_180 = 0;
  uStack_178 = uStack_178 & 0xffffffff00000000;
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_03293514(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_032934b8();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Value__;
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_032934b8();
  }
  local_188 = **(undefined8 **)(lVar8 + 0xb8);
  thunk_FUN_0333a630(&local_188);
  uStack_168 = local_188;
  thunk_FUN_0333a630(&uStack_168,0);
  uStack_148 = uStack_178;
  local_150 = local_180;
  uStack_138 = uStack_168;
  uStack_140 = local_170;
  thunk_FUN_0333a630(&uStack_140,0);
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  local_170 = FUN_068644ec(*(undefined8 *)puVar2);
  thunk_FUN_0333a630(&local_170,local_170);
  lVar10 = *(long *)puVar6;
  local_188 = 0;
  local_180 = 0;
  uStack_178 = CONCAT44(uStack_178._4_4_,1);
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_03293514(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_032934b8();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_032934b8();
  }
  local_188 = **(undefined8 **)(lVar8 + 0xb8);
  thunk_FUN_0333a630(&local_188);
  uStack_168 = local_188;
  thunk_FUN_0333a630(&uStack_168,0);
  uStack_128 = uStack_178;
  local_130 = local_180;
  uStack_118 = uStack_168;
  uStack_120 = local_170;
  thunk_FUN_0333a630(&uStack_120,0);
  memcpy(auStack_1d8,&local_160,0x50);
  if (lVar7 != 0) {
    lVar10 = *(long *)
              Method_System_Collections_Generic_KeyValuePair<Type,_VolumeComponent>_get_Value__;
    memcpy(auStack_f0,auStack_1d8,0x50);
    lVar8 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar3 = 
    Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<Transform,_Pose>_get_Key__;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * 0x50;
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar8 + 0x20),auStack_f0,0x50);
        thunk_FUN_0333a630(lVar8 + 0x40,0);
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
        memcpy(auStack_a0,auStack_f0,0x50);
        FUN_0438f0ec(lVar7,auStack_a0,uVar9);
      }
      *(long *)(param_1 + 0x50) = lVar7;
      thunk_FUN_0333a630((long *)(param_1 + 0x50),lVar7);
      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_0429c7d8(uVar9,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x58) = uVar9;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x58),uVar9);
      FUN_06c15dc4(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


