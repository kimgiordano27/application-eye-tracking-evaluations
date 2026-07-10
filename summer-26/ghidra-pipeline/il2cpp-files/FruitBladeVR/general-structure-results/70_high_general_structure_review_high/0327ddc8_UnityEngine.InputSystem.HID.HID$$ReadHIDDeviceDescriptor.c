/*
FUNCTION_NAME: UnityEngine.InputSystem.HID.HID$$ReadHIDDeviceDescriptor
ENTRY_POINT: 0327ddc8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_17;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x0327e320) */

void UnityEngine_InputSystem_HID_HID__ReadHIDDeviceDescriptor
               (ulong *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 local_130;
  undefined1 *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  ulong local_d0 [7];
  undefined1 local_98 [16];
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_StringLiteral_2997_03cd0890;
  if ((DAT_03ef4fce & 1) == 0) {
    FUN_01c5c92c(PTR_byte___TypeInfo_03cb5e48);
    FUN_01c5c92c(PTR_Method_UnityEngine_InputSystem_HID_HID_ReadHIDDeviceDescriptor___03cd08a0);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_HID_HID_TypeInfo_03cd0838);
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<byte>___03cb7140
                );
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<byte>_Dispose___03cb6cd0);
    FUN_01c5c92c(PTR_StringLiteral_2997_03cd0890);
    DAT_03ef4fce = 1;
  }
  local_98._8_8_ = 0;
  uStack_88 = 0;
  local_98._0_8_ = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  local_d0[3] = 0;
  local_d0[2] = 0;
  local_d0[5] = 0;
  local_d0[4] = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_d0[1] = 0;
  local_d0[0] = 0;
  local_e8 = 0;
  uVar3 = System_String__op_Inequality(*param_2,*(undefined8 *)puVar2,0);
  if ((uVar3 & 1) != 0) {
    puStack_128 = (undefined1 *)param_2[1];
    local_130 = *param_2;
    uStack_118 = param_2[3];
    local_120 = param_2[2];
    uStack_108 = param_2[5];
    local_110 = param_2[4];
    local_100 = param_2[6];
    uVar5 = thunk_FUN_01cb9718(
                              PTR_UnityEngine_InputSystem_Layouts_InputDeviceDescription_TypeInfo_03ccc870
                              );
    uVar5 = thunk_FUN_01c8f880(uVar5,&local_130);
    uVar4 = thunk_FUN_01cb9718(PTR_StringLiteral_2407_03cd08a8);
    uVar5 = System_String__Format(uVar4,uVar5,0);
    thunk_FUN_01cb9718(PTR_System_ArgumentException_TypeInfo_03cb63c8);
    uVar4 = thunk_FUN_01c8fc48();
    System_ArgumentException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_01cb9718(
                              PTR_Method_UnityEngine_InputSystem_HID_HID_ReadHIDDeviceDescriptor___03cd08a0
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5ca98(uVar4,uVar5);
  }
  param_2 = param_2 + 6;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uVar3 = System_String__IsNullOrEmpty(*param_2,0);
  if ((uVar3 & 1) == 0) {
    UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor__FromJson(&local_130,*param_2);
    uStack_68 = uStack_118;
    local_70 = local_120;
    uStack_58 = uStack_108;
    local_60 = local_110;
    uStack_78 = puStack_128;
    local_80 = local_130;
    if ((local_110 != 0) && (*(long *)(local_110 + 0x18) != 0)) {
      puVar10 = &local_80;
      goto LAB_0327e18c;
    }
  }
  puVar2 = PTR_UnityEngine_InputSystem_HID_HID_TypeInfo_03cd0838;
  if (*(int *)(*(long *)PTR_UnityEngine_InputSystem_HID_HID_TypeInfo_03cd0838 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  local_130 = (ulong)local_130._4_4_ << 0x20;
  UnityEngine_InputSystem_Utilities_FourCC___ctor(&local_130,0x48,0x49,0x44,0x53,0);
  UnityEngine_InputSystem_LowLevel_InputDeviceCommand___ctor(&uStack_88,local_130 & 0xffffffff,8,0);
  puVar1 = 
  PTR_Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<byte>___03cb7140
  ;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar3 = (**(code **)(param_3 + 0x18))
                    (*(undefined8 *)(param_3 + 0x40),&uStack_88,*(undefined8 *)(param_3 + 0x28));
  if ((long)uVar3 < 1) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
                    /* try { // try from 0327e1d8 to 0337e213 has its CatchHandler @ 0327e218 */
    local_130 = local_130 & 0xffffffff00000000;
    UnityEngine_InputSystem_Utilities_FourCC___ctor(&local_130,0x48,0x49,0x44,0x50,0);
    local_e0 = UnityEngine_InputSystem_LowLevel_InputDeviceCommand__AllocateNative
                         (local_130 & 0xffffffff,0x200000,0);
    uVar5 = Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<byte>
                      (local_e0._0_8_,local_e0._8_8_,*(undefined8 *)puVar1);
                    /* try { // try from 0327e214 to 0337e22f has its CatchHandler @ 0327e120 */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 0327e1d8 with catch @ 0327e218
                        */
    uVar3 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),uVar5,*(undefined8 *)(param_3 + 0x28));
    if ((long)uVar3 < 0) {
      local_d0[3] = 0;
      local_d0[2] = 0;
      local_d0[5] = 0;
      local_d0[4] = 0;
      local_d0[1] = 0;
      local_d0[0] = 0;
      iVar9 = 0xb;
    }
    else {
                    /* try { // try from 0327e230 to 0337e247 has its CatchHandler @ 0327e2b4 */
      lVar7 = FUN_01c5ca18(*(undefined8 *)PTR_byte___TypeInfo_03cb5e48,uVar3 & 0xffffffff);
      if (lVar7 == 0) {
        lVar11 = 0;
      }
      else {
                    /* try { // try from 0327e248 to 0337e29f has its CatchHandler @ 0327e120 */
        lVar11 = 0;
        if (*(int *)(lVar7 + 0x18) != 0) {
          lVar11 = lVar7 + 0x20;
        }
      }
      uVar5 = UnityEngine_InputSystem_LowLevel_InputDeviceCommand__get_payloadPtr(uVar5,0);
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemCpy(lVar11,uVar5,uVar3,0);
      plVar8 = (long *)System_Text_Encoding__get_UTF8(0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
                    /* try { // try from 0327e2a0 to 0337e2af has its CatchHandler @ 0327e2b0 */
                    /* catch() { ... } // from try @ 0327e2a0 with catch @ 0327e2b0 */
      uVar5 = (**(code **)(*plVar8 + 0x358))
                        (plVar8,lVar7,0,uVar3 & 0xffffffff,*(undefined8 *)(*plVar8 + 0x360));
                    /* catch() { ... } // from try @ 0327e230 with catch @ 0327e2b4 */
                    /* try { // try from 0327e2b8 to 0337e2bb has its CatchHandler @ 0327e2c4 */
                    /* try { // try from 0327e2bc to 0337e2c7 has its CatchHandler @ 0327e120 */
      UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor__FromJson(&local_130);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0327e2b8 with catch @ 0327e2c4
                        */
      *param_2 = uVar5;
      uStack_58 = uStack_108;
      local_60 = local_110;
      uStack_78 = puStack_128;
      local_80 = local_130;
      uStack_68 = uStack_118;
      local_70 = local_120;
      thunk_FUN_01cc8040(param_2,uVar5);
      iVar9 = 8;
    }
    Unity_Collections_NativeArray<byte>__Dispose
              (local_e0,*(undefined8 *)
                         PTR_Method_Unity_Collections_NativeArray<byte>_Dispose___03cb6cd0);
    puVar10 = &local_80;
    if ((iVar9 == 0) || (iVar9 == 8)) goto LAB_0327e18c;
    if (iVar9 != 0xb) {
      return;
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    local_130 = local_130 & 0xffffffff00000000;
    UnityEngine_InputSystem_Utilities_FourCC___ctor(&local_130,0x48,0x49,0x44,0x44,0);
    local_98 = UnityEngine_InputSystem_LowLevel_InputDeviceCommand__AllocateNative
                         (local_130 & 0xffffffff,uVar3 & 0xffffffff,0);
    puStack_128 = local_98;
    local_130 = 0;
    uVar5 = Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<byte>
                      (local_98._0_8_,local_98._8_8_,*(undefined8 *)puVar1);
    uVar6 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),uVar5,*(undefined8 *)(param_3 + 0x28));
    if (uVar6 == uVar3) {
      uVar5 = UnityEngine_InputSystem_LowLevel_InputDeviceCommand__get_payloadPtr(uVar5,0);
                    /* try { // try from 0327e120 to 0337e1d7 has its CatchHandler @ 0327e120
                       catch() { ... } // from try @ 0327e120 with catch @ 0327e120
                       catch() { ... } // from try @ 0327e214 with catch @ 0327e120
                       catch() { ... } // from try @ 0327e248 with catch @ 0327e120
                       catch() { ... } // from try @ 0327e2bc with catch @ 0327e120 */
      uVar3 = UnityEngine_InputSystem_HID_HIDParser__ParseReportDescriptor
                        (uVar5,uVar3 & 0xffffffff,&local_80,0);
      if ((uVar3 & 1) != 0) {
        Unity_Collections_NativeArray<byte>__Dispose
                  (local_98,*(undefined8 *)
                             PTR_Method_Unity_Collections_NativeArray<byte>_Dispose___03cb6cd0);
        puVar10 = &local_80;
        uVar5 = UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor__ToJson(&local_80);
        *param_2 = uVar5;
        thunk_FUN_01cc8040(param_2,uVar5);
        goto LAB_0327e18c;
      }
    }
    local_d0[3] = 0;
    local_d0[2] = 0;
    local_d0[5] = 0;
    local_d0[4] = 0;
    local_d0[1] = 0;
    local_d0[0] = 0;
    Unity_Collections_NativeArray<byte>__Dispose
              (local_98,*(undefined8 *)
                         PTR_Method_Unity_Collections_NativeArray<byte>_Dispose___03cb6cd0);
  }
  puVar10 = local_d0;
LAB_0327e18c:
  uVar6 = puVar10[1];
  uVar3 = *puVar10;
  uVar13 = puVar10[3];
  uVar12 = puVar10[2];
  uVar14 = puVar10[4];
  param_1[5] = puVar10[5];
  param_1[4] = uVar14;
  param_1[1] = uVar6;
  *param_1 = uVar3;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  return;
}


