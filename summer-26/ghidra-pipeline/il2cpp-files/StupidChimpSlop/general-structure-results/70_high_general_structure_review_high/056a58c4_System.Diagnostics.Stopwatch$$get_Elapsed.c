/*
FUNCTION_NAME: System.Diagnostics.Stopwatch$$get_Elapsed
ENTRY_POINT: 056a58c4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Diagnostics_Stopwatch__get_Elapsed(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 unaff_x19;
  long *unaff_x22;
  
  FUN_056a8e44();
                    /* try { // try from 056a58c8 to 057a58d3 has its CatchHandler @ 056a5b0c */
  lVar14 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar14 + 0x108) = unaff_x19;
  thunk_FUN_02dc1ef0(lVar14 + 0x108);
                    /* try { // try from 056a58e0 to 057a58e7 has its CatchHandler @ 056a5b08 */
  uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action>_LockForChanges__
                             );
  FUN_056a8e98();
  lVar14 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar14 + 0x110) = uVar12;
  thunk_FUN_02dc1ef0(lVar14 + 0x110,uVar12);
  uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_UnlockForChanges__
                             );
  FUN_056a955c();
                    /* try { // try from 056a592c to 057a5937 has its CatchHandler @ 056a5ac4 */
  lVar14 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar14 + 0x118) = uVar12;
  thunk_FUN_02dc1ef0(lVar14 + 0x118,uVar12);
                    /* try { // try from 056a5940 to 057a594f has its CatchHandler @ 056a5acc */
  lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x118);
  if (lVar14 != 0) {
                    /* try { // try from 056a5958 to 057a595b has its CatchHandler @ 056a5b14 */
    plVar13 = (long *)FUN_056a8ef0(lVar14,1,0);
                    /* try { // try from 056a595c to 057a5a2b has its CatchHandler @ 056a47c4 */
    lVar14 = *unaff_x22;
    if (plVar13 == (long *)0x0) {
      lVar15 = *(long *)(lVar14 + 0xb8);
      *(undefined8 *)(lVar15 + 0x120) = 0;
    }
    else {
      bVar1 = *(byte *)(lVar14 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
      goto LAB_056a89bc;
      lVar15 = *(long *)(lVar14 + 0xb8);
      *(long **)(lVar15 + 0x120) = plVar13;
      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
      goto LAB_056a89bc;
    }
    puVar3 = Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action>_get_Item__;
    puVar4 = Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action>_UnlockForChanges__;
    puVar6 = Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action>_RemoveCallback__;
    puVar7 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputDeviceChange>>_AddCallback__
    ;
    puVar8 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_get_length__
    ;
    puVar5 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_get_Item__
    ;
    puVar2 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_SubscribeAndUpdate__;
    thunk_FUN_02dc1ef0(lVar15 + 0x120,plVar13);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
    FUN_056a955c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x128) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x128,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
    FUN_056a9094();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x130) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x130,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
    FUN_056a90e8();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x138) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x138,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
    FUN_056a913c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x140) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x140,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
    FUN_056a9190();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x148) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x148,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar7);
    FUN_056a955c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x150) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x150,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar8);
    FUN_056a955c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x158) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x158,uVar12);
    lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x158);
    if (lVar14 == 0) goto LAB_056a89c4;
    plVar13 = (long *)FUN_056a8ef0(lVar14,1,0);
    lVar14 = *unaff_x22;
    if (plVar13 == (long *)0x0) {
      lVar15 = *(long *)(lVar14 + 0xb8);
      *(undefined8 *)(lVar15 + 0x160) = 0;
    }
    else {
      bVar1 = *(byte *)(lVar14 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
      goto LAB_056a89bc;
      lVar15 = *(long *)(lVar14 + 0xb8);
      *(long **)(lVar15 + 0x160) = plVar13;
      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
      goto LAB_056a89bc;
    }
    puVar11 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_length__;
    puVar10 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_Item__;
    puVar9 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_UnlockForChanges__
    ;
    puVar3 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
    ;
    puVar4 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_LockForChanges__
    ;
    puVar6 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_AddCallback__
    ;
    puVar7 = Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action>_get_length__;
    puVar8 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_AddCallback__
    ;
    puVar5 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputEventPtr>>_AddCallback__
    ;
    puVar2 = 
    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputDeviceChange>>_RemoveCallback__
    ;
    thunk_FUN_02dc1ef0(lVar15 + 0x160,plVar13);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar7);
    FUN_056a91ec();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x168) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x168,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
    FUN_056a9240();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x170) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x170,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
    FUN_056a955c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x178) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x178,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
    FUN_056a9240();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x180) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x180,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
    FUN_056a929c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x188) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x188,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar9);
    FUN_056a92f4();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 400) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 400,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar8);
    FUN_056a955c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x198) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x198,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
    FUN_056a955c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x1a0) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x1a0,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar11);
    FUN_056a9354();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x1a8) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x1a8,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
    FUN_056a955c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x1b0) = uVar12;
    thunk_FUN_02dc1ef0(lVar14 + 0x1b0,uVar12);
    lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b0);
    if (lVar14 != 0) {
      plVar13 = (long *)FUN_056a8ef0(lVar14,1,0);
      lVar14 = *unaff_x22;
      if (plVar13 == (long *)0x0) {
        lVar15 = *(long *)(lVar14 + 0xb8);
        *(undefined8 *)(lVar15 + 0x1b8) = 0;
      }
      else {
        bVar1 = *(byte *)(lVar14 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) {
LAB_056a89bc:
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar13);
        }
        lVar15 = *(long *)(lVar14 + 0xb8);
        *(long **)(lVar15 + 0x1b8) = plVar13;
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
        goto LAB_056a89bc;
      }
      puVar11 = 
      Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<bool>__ctor__;
      puVar10 = 
      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceFindControlLayoutDelegate>_get_length__
      ;
      puVar9 = 
      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceFindControlLayoutDelegate>_get_Item__
      ;
      puVar3 = 
      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceFindControlLayoutDelegate>_UnlockForChanges__
      ;
      puVar4 = 
      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceFindControlLayoutDelegate>_LockForChanges__
      ;
      puVar6 = 
      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceFindControlLayoutDelegate>_AddCallback__
      ;
      puVar7 = 
      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_get_length__
      ;
      puVar8 = 
      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_RemoveCallback__
      ;
      puVar5 = 
      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputEventPtr>>_RemoveCallback__
      ;
      puVar2 = 
      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_RemoveCallback__
      ;
      thunk_FUN_02dc1ef0(lVar15 + 0x1b8,plVar13);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
      FUN_056a9240();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1c0) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x1c0,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
      FUN_056a9240();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1c8) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x1c8,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
      FUN_056a955c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1d0) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x1d0,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
      FUN_056a93b8();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1d8) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x1d8,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar9);
      FUN_056a940c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1e0) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x1e0,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar7);
      FUN_056a9460();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1e8) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x1e8,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar8);
      FUN_056a94b4();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1f0) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x1f0,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
      FUN_056a9508();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1f8) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x1f8,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar11);
      FUN_056a955c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x200) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x200,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<DateTime>__ctor__
                                 );
      FUN_056a95b0();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x208) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x208,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<byte>__ctor__
                                 );
      FUN_056a9608();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x210) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x210,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<char>__ctor__
                                 );
      FUN_056a9660();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x218) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x218,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<double>__ctor__
                                 );
      FUN_056a955c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x220) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x220,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<short>__ctor__
                                 );
      FUN_056a96bc();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x228) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x228,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<int>__ctor__
                                 );
      FUN_056a9710();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x230) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x230,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<long>__ctor__
                                 );
      FUN_056a9764();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x238) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x238,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<sbyte>__ctor__
                                 );
      FUN_056a97b8();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x240) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x240,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<string>__ctor__
                                 );
      FUN_056a980c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x248) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x248,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<ulong>__ctor__
                                 );
      FUN_056a9860();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x250) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x250,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<uint>__ctor__
                                 );
      FUN_056a98b8();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 600) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 600,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceFindControlLayoutDelegate>_RemoveCallback__
                                 );
      FUN_056a955c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x260) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x260,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<Decimal>__ctor__
                                 );
      FUN_056a955c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x268) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x268,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_AddCallback__
                                 );
      FUN_056a9918();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x270) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x270,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_get_Item__
                                 );
      FUN_056a996c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x278) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x278,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<float>__ctor__
                                 );
      FUN_056a9918();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x280) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x280,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<ushort>__ctor__
                                 );
      FUN_056a99c4();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x288) = uVar12;
      thunk_FUN_02dc1ef0(lVar14 + 0x288,uVar12);
      plVar13 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar2,0xd);
      if (plVar13 != (long *)0x0) {
        lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x200);
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0)) {
LAB_056a89b0:
          uVar12 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar12,0);
        }
        if ((int)plVar13[3] != 0) {
          plVar13[4] = lVar14;
          thunk_FUN_02dc1ef0(plVar13 + 4,lVar14);
          lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x150);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
          goto LAB_056a89b0;
          if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
            plVar13[5] = lVar14;
            thunk_FUN_02dc1ef0(plVar13 + 5,lVar14);
            lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x158);
            if ((lVar14 != 0) &&
               (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
            goto LAB_056a89b0;
            if (2 < *(uint *)(plVar13 + 3)) {
              plVar13[6] = lVar14;
              thunk_FUN_02dc1ef0(plVar13 + 6,lVar14);
              lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x160);
              if ((lVar14 != 0) &&
                 (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0)
                 ) goto LAB_056a89b0;
              if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                plVar13[7] = lVar14;
                thunk_FUN_02dc1ef0(plVar13 + 7,lVar14);
                lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x118);
                if ((lVar14 != 0) &&
                   (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar15 == 0)) goto LAB_056a89b0;
                if (4 < *(uint *)(plVar13 + 3)) {
                  plVar13[8] = lVar14;
                  thunk_FUN_02dc1ef0(plVar13 + 8,lVar14);
                  lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x120);
                  if ((lVar14 != 0) &&
                     (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar15 == 0)) goto LAB_056a89b0;
                  if (5 < *(uint *)(plVar13 + 3)) {
                    plVar13[9] = lVar14;
                    thunk_FUN_02dc1ef0(plVar13 + 9,lVar14);
                    lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b0);
                    if ((lVar14 != 0) &&
                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar15 == 0)) goto LAB_056a89b0;
                    if (6 < *(uint *)(plVar13 + 3)) {
                      plVar13[10] = lVar14;
                      thunk_FUN_02dc1ef0(plVar13 + 10,lVar14);
                      lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b8);
                      if ((lVar14 != 0) &&
                         (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                         lVar15 == 0)) goto LAB_056a89b0;
                      if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                        plVar13[0xb] = lVar14;
                        thunk_FUN_02dc1ef0(plVar13 + 0xb,lVar14);
                        lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1d8);
                        if ((lVar14 != 0) &&
                           (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar15 == 0)) goto LAB_056a89b0;
                        if (8 < *(uint *)(plVar13 + 3)) {
                          plVar13[0xc] = lVar14;
                          thunk_FUN_02dc1ef0(plVar13 + 0xc,lVar14);
                          lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x128);
                          if ((lVar14 != 0) &&
                             (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                             lVar15 == 0)) goto LAB_056a89b0;
                          if (9 < *(uint *)(plVar13 + 3)) {
                            plVar13[0xd] = lVar14;
                            thunk_FUN_02dc1ef0(plVar13 + 0xd,lVar14);
                            lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1f0);
                            if ((lVar14 != 0) &&
                               (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar13 + 0x40))
                               , lVar15 == 0)) goto LAB_056a89b0;
                            if (10 < *(uint *)(plVar13 + 3)) {
                              plVar13[0xe] = lVar14;
                              thunk_FUN_02dc1ef0(plVar13 + 0xe,lVar14);
                              lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1a0);
                              if ((lVar14 != 0) &&
                                 (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)
                                                                      (*plVar13 + 0x40)),
                                 lVar15 == 0)) goto LAB_056a89b0;
                              if (0xb < *(uint *)(plVar13 + 3)) {
                                plVar13[0xf] = lVar14;
                                thunk_FUN_02dc1ef0(plVar13 + 0xf,lVar14);
                                lVar14 = *(long *)(*unaff_x22 + 0xb8);
                                *(long **)(lVar14 + 0x290) = plVar13;
                                thunk_FUN_02dc1ef0(lVar14 + 0x290,plVar13);
                                plVar13 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar2,0xd);
                                if (plVar13 == (long *)0x0) goto LAB_056a89c4;
                                lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x200);
                                if ((lVar14 != 0) &&
                                   (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar15 == 0)) goto LAB_056a89b0;
                                if ((int)plVar13[3] != 0) {
                                  plVar13[4] = lVar14;
                                  thunk_FUN_02dc1ef0(plVar13 + 4,lVar14);
                                  lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x150);
                                  if ((lVar14 != 0) &&
                                     (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)
                                                                          (*plVar13 + 0x40)),
                                     lVar15 == 0)) goto LAB_056a89b0;
                                  if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
                                    plVar13[5] = lVar14;
                                    thunk_FUN_02dc1ef0(plVar13 + 5,lVar14);
                                    lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x158);
                                    if ((lVar14 != 0) &&
                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)
                                                                            (*plVar13 + 0x40)),
                                       lVar15 == 0)) goto LAB_056a89b0;
                                    if (2 < *(uint *)(plVar13 + 3)) {
                                      plVar13[6] = lVar14;
                                      thunk_FUN_02dc1ef0(plVar13 + 6,lVar14);
                                      lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x160);
                                      if ((lVar14 != 0) &&
                                         (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)
                                                                              (*plVar13 + 0x40)),
                                         lVar15 == 0)) goto LAB_056a89b0;
                                      if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                                        plVar13[7] = lVar14;
                                        thunk_FUN_02dc1ef0(plVar13 + 7,lVar14);
                                        lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x118);
                                        if ((lVar14 != 0) &&
                                           (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)
                                                                                (*plVar13 + 0x40)),
                                           lVar15 == 0)) goto LAB_056a89b0;
                                        if (4 < *(uint *)(plVar13 + 3)) {
                                          plVar13[8] = lVar14;
                                          thunk_FUN_02dc1ef0(plVar13 + 8,lVar14);
                                          lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x120);
                                          if ((lVar14 != 0) &&
                                             (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)
                                                                                  (*plVar13 + 0x40))
                                             , lVar15 == 0)) goto LAB_056a89b0;
                                          if (5 < *(uint *)(plVar13 + 3)) {
                                            plVar13[9] = lVar14;
                                            thunk_FUN_02dc1ef0(plVar13 + 9,lVar14);
                                            lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b0)
                                            ;
                                            if ((lVar14 != 0) &&
                                               (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)
                                                                                    (*plVar13 + 0x40
                                                                                    )), lVar15 == 0)
                                               ) goto LAB_056a89b0;
                                            if (6 < *(uint *)(plVar13 + 3)) {
                                              plVar13[10] = lVar14;
                                              thunk_FUN_02dc1ef0(plVar13 + 10,lVar14);
                                              lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                0x1b8);
                                              if ((lVar14 != 0) &&
                                                 (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)
                                                                                      (*plVar13 +
                                                                                      0x40)),
                                                 lVar15 == 0)) goto LAB_056a89b0;
                                              if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                                                plVar13[0xb] = lVar14;
                                                thunk_FUN_02dc1ef0(plVar13 + 0xb,lVar14);
                                                lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                  0x1d8);
                                                if ((lVar14 != 0) &&
                                                   (lVar15 = thunk_FUN_02d8a53c(lVar14,*(undefined8
                                                                                         *)(*plVar13
                                                                                           + 0x40)),
                                                   lVar15 == 0)) goto LAB_056a89b0;
                                                if (8 < *(uint *)(plVar13 + 3)) {
                                                  plVar13[0xc] = lVar14;
                                                  thunk_FUN_02dc1ef0(plVar13 + 0xc,lVar14);
                                                  lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                    0x128);
                                                  if ((lVar14 != 0) &&
                                                     (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if (9 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xd] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xd,lVar14);
                                                    lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x1e8);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if (10 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xe] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xe,lVar14);
                                                    lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x1a0);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar8 = 
                                                  Method_UnityEngine_UIElements_ChangeEvent<string>_get_newValue__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_UIElements_ChangeEvent<string>_GetPooled__
                                                  ;
                                                  puVar2 = 
                                                  System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_TypeInfo
                                                  ;
                                                  if (0xb < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xf] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xf,lVar14);
                                                    lVar14 = *(long *)(*unaff_x22 + 0xb8);
                                                    *(long **)(lVar14 + 0x298) = plVar13;
                                                    thunk_FUN_02dc1ef0(lVar14 + 0x298,plVar13);
                                                    plVar13 = (long *)FUN_02d4dd2c(*(undefined8 *)
                                                                                    puVar5,0x26);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb0);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar2,uVar12
                                                                );
                                                    if (plVar13 == (long *)0x0) goto LAB_056a89c4;
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  PlayFab_ClientModels_WriteClientPlayerEventRequest_TypeInfo
                                                  ;
                                                  if ((int)plVar13[3] != 0) {
                                                    plVar13[4] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 4,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x148)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar2,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = PTR_DAT_06660cd8;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
                                                    plVar13[5] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 5,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb8);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar2,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar7 = 
                                                  PlayFab_ClientModels_WriteClientCharacterEventRequest_TypeInfo
                                                  ;
                                                  if (2 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[6] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 6,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 200);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar7,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar7 = 
                                                  System_Security_Cryptography_X509Certificates_X509Certificate2Enumerator_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                                                    plVar13[7] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 7,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xd0);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar7,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar6 = PTR_DAT_066565d0;
                                                  if (4 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[8] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 8,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xe0);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar6,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  Mono_Security_X509_X509CertificateCollection_TypeInfo
                                                  ;
                                                  if (5 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[9] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 9,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xe8);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = System_Xml_Linq_XText_TypeInfo;
                                                  if (6 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[10] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 10,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xf8);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  System_Security_Cryptography_X509Certificates_X509CertificateCollection_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                                                    plVar13[0xb] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xb,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x120)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  System_Security_Cryptography_X509Certificates_X509ChainElementEnumerator_TypeInfo
                                                  ;
                                                  if (8 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xc] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xc,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x118)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  PlayFab_EventsModels_WriteEventsResponse_TypeInfo;
                                                  if (9 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xd] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xd,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x128)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  System_Security_Cryptography_X509Certificates_X509ChainElementCollection_TypeInfo
                                                  ;
                                                  if (10 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xe] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xe,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x130)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = PTR_DAT_0664d998;
                                                  if (0xb < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xf] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xf,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  Method_UnityEngine_UIElements_ChangeEvent<Vector3>_get_newValue__
                                                  ;
                                                  if (0xc < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x10] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x10,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x140)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  Method_UnityEngine_UIElements_ChangeEvent<Vector3Int>_get_newValue__
                                                  ;
                                                  if (0xd < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x11] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x11,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  System_Security_Cryptography_X509Certificates_X509Chain_TypeInfo
                                                  ;
                                                  if (0xe < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x12] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x12,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xc0);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  System_Security_Cryptography_X509Certificates_X509Certificate2_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffff0) != 0) {
                                                    plVar13[0x13] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x13,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1f8)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = Mono_Security_X509_X509Extension_TypeInfo
                                                  ;
                                                  if (0x10 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x14] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x14,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  System_Security_Cryptography_X509Certificates_X509Certificate2ImplMono_TypeInfo
                                                  ;
                                                  if (0x11 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x15] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x15,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x180)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = PTR_DAT_06653050;
                                                  if (0x12 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x16] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x16,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x150)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  System_Security_Cryptography_X509Certificates_X509CertificateImpl_TypeInfo
                                                  ;
                                                  if (0x13 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x17] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x17,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x158)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = Mono_Unity_X509ChainImplUnityTls_TypeInfo
                                                  ;
                                                  if (0x14 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x18] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x18,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x160)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar4 = 
                                                  System_Security_Cryptography_X509Certificates_X509Certificate2Collection_TypeInfo
                                                  ;
                                                  if (0x15 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x19] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x19,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = 
                                                  System_Security_Cryptography_X509Certificates_X509CertificateImplCollection_TypeInfo
                                                  ;
                                                  if (0x16 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1a] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1a,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b0)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = 
                                                  System_Security_Cryptography_X509Certificates_X509Certificate2Impl_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1b] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1b,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b8)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = Mono_Security_X509_X509Crl_TypeInfo;
                                                  if (0x18 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1c] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1c,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d8)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = PTR_DAT_06660cc8;
                                                  if (0x19 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1d] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1d,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = 
                                                  System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo
                                                  ;
                                                  if (0x1a < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1e] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1e,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x140)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = 
                                                  System_Security_Cryptography_X509Certificates_X509ChainStatus_TypeInfo
                                                  ;
                                                  if (0x1b < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1f] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1f,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = PTR_DAT_0664d090;
                                                  if (0x1c < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x20] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x20,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x200)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = PTR_DAT_0664ee78;
                                                  if (0x1d < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x21] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x21,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x210)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = 
                                                  System_Security_Cryptography_X509Certificates_X509ChainImplMono_TypeInfo
                                                  ;
                                                  if (0x1e < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x22] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x22,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x218)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = 
                                                  System_Security_Cryptography_X509Certificates_X509ChainElement_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar13 + 3) & 0xffffffe0) != 0) {
                                                    plVar13[0x23] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x23,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x228)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = 
                                                  System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtension_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x24] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x24,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x240)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = 
                                                  Mono_Security_X509_X509ExtensionCollection_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x25] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x25,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x230)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = 
                                                  System_Security_Cryptography_X509Certificates_X509ChainPolicy_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x26] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x26,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x238)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = PTR_DAT_06652da0;
                                                  if (0x23 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x27] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x27,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa8);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = Mono_Security_X509_X509Chain_TypeInfo;
                                                  if (0x24 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x28] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x28,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x248)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a18(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar3 = 
                                                  System_Xml_XmlAttributeCollection_TypeInfo;
                                                  if (0x25 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x29] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x29,lVar14);
                                                    lVar14 = *(long *)(*unaff_x22 + 0xb8);
                                                    *(long **)(lVar14 + 0x2a0) = plVar13;
                                                    thunk_FUN_02dc1ef0(lVar14 + 0x2a0,plVar13);
                                                    plVar13 = (long *)FUN_02d4dd2c(*(undefined8 *)
                                                                                    puVar5,0x2d);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x120)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar3,uVar12
                                                                 ,0xb);
                                                    if (plVar13 == (long *)0x0) goto LAB_056a89c4;
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Interactables_Visuals_XRTintInteractableVisual_TypeInfo
                                                  ;
                                                  if ((int)plVar13[3] != 0) {
                                                    plVar13[4] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 4,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x118)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = 
                                                  System_Xml_Serialization_XmlAttributeEventArgs_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
                                                    plVar13[5] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 5,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x150)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,5);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = System_Data_XSDSchema_TypeInfo;
                                                  if (2 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[6] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 6,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x158)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,5);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = 
                                                  Newtonsoft_Json_Converters_XTextWrapper_TypeInfo;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                                                    plVar13[7] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 7,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x160)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = 
                                                  System_Xml_Linq_XStreamingElement_TypeInfo;
                                                  if (4 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[8] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 8,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1a0)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,9);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = 
                                                  UnityEngine_Experimental_Rendering_XRVisibleMesh_TypeInfo
                                                  ;
                                                  if (5 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[9] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 9,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b0)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,0x28);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = System_Xml_Schema_XmlAtomicValue_TypeInfo
                                                  ;
                                                  if (6 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[10] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 10,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b8)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = System_Net_WebExceptionMapping_TypeInfo;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                                                    plVar13[0xb] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xb,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d8)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = PTR_DAT_066513d8;
                                                  if (8 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xc] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xc,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x198)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,0x28);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = 
                                                  System_Xml_Schema_XmlAnyListConverter_TypeInfo;
                                                  if (9 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xd] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xd,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1e8)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if (10 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xe] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xe,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa0);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)
                                                                                                                                                  
                                                  System_Collections_Specialized_OrderedDictionary_OrderedDictionaryEnumerator_TypeInfo
                                                  ,uVar12,0xffffffff);
                                                  if ((lVar14 != 0) &&
                                                     (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = 
                                                  System_Xml_XmlAsyncCheckReaderWithLineInfo_TypeInfo
                                                  ;
                                                  if (0xb < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xf] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0xf,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa8);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar5 = 
                                                  Photon_Voice_WebRTCAudioProcessor_TypeInfo;
                                                  if (0xc < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x10] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x10,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb0);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if (0xd < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x11] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x11,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb8);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  System_Security_Cryptography_X509Certificates_X509ChainStatusFlags_TypeInfo
                                                  ;
                                                  if (0xe < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x12] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x12,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xc0);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x25);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffff0) != 0) {
                                                    plVar13[0x13] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x13,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xd0);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar7,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if (0x10 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x14] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x14,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xd8);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if (0x11 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x15] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x15,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xf8);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)
                                                                                                                                                  
                                                  System_Xml_Linq_XText_TypeInfo,uVar12,0xb);
                                                  if ((lVar14 != 0) &&
                                                     (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_TypeInfo
                                                  ;
                                                  if (0x12 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x16] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x16,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x100)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  System_Xml_Serialization_XmlAnyAttributeAttribute_TypeInfo
                                                  ;
                                                  if (0x13 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x17] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x17,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x110)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if (0x14 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x18] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x18,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x138)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)
                                                                         PTR_DAT_0664d998,uVar12,0xb
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  System_Xml_Serialization_XmlArrayItemAttributes_TypeInfo
                                                  ;
                                                  if (0x15 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x19] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x19,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xf0);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  System_Xml_Serialization_XmlAnyElementAttribute_TypeInfo
                                                  ;
                                                  if (0x16 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1a] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1a,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x188)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  System_Xml_XmlAsyncCheckReaderWithNS_TypeInfo;
                                                  if (0x17 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1b] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1b,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 400);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  System_Xml_Serialization_XmlArrayItemAttribute_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1c] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1c,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x250)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = System_Xml_XmlAttribute_TypeInfo;
                                                  if (0x19 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1d] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1d,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 600);
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = System_Xml_Schema_XdrBuilder_TypeInfo;
                                                  if (0x1a < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1e] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1e,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x148)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if (0x1b < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1f] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x1f,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar4,uVar12
                                                                 ,0x1f);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = PTR_DAT_06660cd0;
                                                  if (0x1c < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x20] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x20,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x170)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x12);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  System_Xml_XmlAsyncCheckReaderWithLineInfoNSSchema_TypeInfo
                                                  ;
                                                  if (0x1d < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x21] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x21,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x178)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x28);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = System_Xml_XmlAsyncCheckWriter_TypeInfo;
                                                  if (0x1e < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x22] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x22,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x180)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x1d);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  System_Xml_XmlAsyncCheckReaderWithLineInfoNS_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar13 + 3) & 0xffffffe0) != 0) {
                                                    plVar13[0x23] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x23,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1a8)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x22);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = System_Xml_XmlAsyncCheckReader_TypeInfo;
                                                  if (0x20 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x24] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x24,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1c0)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x1d);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x25] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x25,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1c8)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x1d);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = System_Xml_Schema_XdrValidator_TypeInfo;
                                                  if (0x22 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x26] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x26,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d0)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x26);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_UI_XRUIToolkitHandler_TypeInfo
                                                  ;
                                                  if (0x23 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x27] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x27,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1e0)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x21);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = PTR_DAT_0664d978;
                                                  if (0x24 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x28] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x28,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1f8)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x1c);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if (0x25 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x29] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x29,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x200)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)
                                                                         PTR_DAT_0664d090,uVar12,0xb
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if (0x26 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2a] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x2a,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x208)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)
                                                                         PTR_DAT_0664ee78,uVar12,0xb
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = PTR_DAT_06647fa8;
                                                  if (0x27 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2b] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x2b,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x220)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x23);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  System_Xml_Serialization_XmlAttributeAttribute_TypeInfo
                                                  ;
                                                  if (0x28 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2c] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x2c,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x228)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x2c);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  System_Xml_Serialization_XmlAnyElementAttributes_TypeInfo
                                                  ;
                                                  if (0x29 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2d] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x2d,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x230)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x2b);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_UI_XRUIToolkitPokeHandler_TypeInfo
                                                  ;
                                                  if (0x2a < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2e] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x2e,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x238)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x21);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  puVar2 = 
                                                  System_Xml_Schema_XmlAnyConverter_TypeInfo;
                                                  if (0x2b < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2f] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x2f,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x240)
                                                    ;
                                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_056a9a5c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x2a);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02d8a53c(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_056a89b0;
                                                  if (0x2c < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x30] = lVar14;
                                                    thunk_FUN_02dc1ef0(plVar13 + 0x30,lVar14);
                                                    lVar14 = *(long *)(*unaff_x22 + 0xb8);
                                                    *(long **)(lVar14 + 0x2a8) = plVar13;
                                                    thunk_FUN_02dc1ef0(lVar14 + 0x2a8,plVar13);
                                                    FUN_056a9ab4();
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
    }
  }
LAB_056a89c4:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


