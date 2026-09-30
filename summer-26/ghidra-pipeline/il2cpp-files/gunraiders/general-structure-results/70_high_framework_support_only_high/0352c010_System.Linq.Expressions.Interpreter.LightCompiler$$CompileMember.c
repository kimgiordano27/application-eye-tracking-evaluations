/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.LightCompiler$$CompileMember
ENTRY_POINT: 0352c010
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint System_Linq_Expressions_Interpreter_LightCompiler__CompileMember(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 in_stack_00000008;
  uint uStack000000000000000c;
  
  lVar4 = FUN_035336b4(param_1,0);
  uStack000000000000000c = FUN_035336bc();
  uVar8 = 0;
  uVar7 = 0;
  pbVar9 = (byte *)(lVar4 + (int)uStack000000000000000c + 0x20);
  do {
    uVar2 = uStack000000000000000c;
    if (uVar8 == 0x23) break;
    iVar3 = FUN_03533754();
    if (iVar3 <= (int)uVar2) {
      FUN_019b2708();
      FUN_03533754();
      FUN_019b2708();
      FUN_035336c4();
      uVar5 = thunk_FUN_01c273e8(PTR_DAT_0422fd68);
      uVar5 = FUN_01c5d2fc(uVar5,8);
      FUN_019b2708();
      uVar6 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<int2>_get_IsCreated__);
      FUN_019b8e08(uVar5,0,uVar6);
      uVar6 = FUN_032cf308(&stack0x0000000c,0);
      FUN_019b2708(uVar5);
      FUN_019b8e08(uVar5,1,uVar6);
      FUN_019b2708(uVar5);
      uVar6 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<int3>__ctor__);
      FUN_019b8e08(uVar5,2,uVar6);
      FUN_019b2708();
      in_stack_00000008 = FUN_03533754();
      uVar6 = FUN_032cf308(&stack0x00000008,0);
      FUN_019b2708(uVar5);
      FUN_019b8e08(uVar5,3,uVar6);
      FUN_019b2708(uVar5);
      uVar6 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<int3>_Dispose__);
      FUN_019b8e08(uVar5,4,uVar6);
      FUN_019b2708(lVar4);
      in_stack_00000008 = (undefined4)*(undefined8 *)(lVar4 + 0x18);
      uVar6 = FUN_032cf308(&stack0x00000008,0);
      FUN_019b2708(uVar5);
      FUN_019b8e08(uVar5,5,uVar6);
      FUN_019b2708(uVar5);
      uVar6 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<int3>_get_IsCreated__);
      FUN_019b8e08(uVar5,6,uVar6);
      FUN_019b2708();
      in_stack_00000008 = FUN_0353a4cc();
      uVar6 = FUN_032cf308(&stack0x00000008,0);
      FUN_019b2708(uVar5);
      FUN_019b8e08(uVar5,7,uVar6);
      uVar5 = FUN_031533cc(uVar5,0);
      thunk_FUN_01c273e8(OVRPlugin_OVRP_1_28_0_TypeInfo);
      uVar6 = thunk_FUN_01c496e0();
      FUN_032245cc(uVar6,uVar5,0);
      uVar5 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<int4>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar5);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    bVar1 = *pbVar9;
    uStack000000000000000c = uVar2 + 1;
    uVar7 = (bVar1 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar7;
    uVar8 = uVar8 + 7;
    pbVar9 = pbVar9 + 1;
  } while ((char)bVar1 < '\0');
  FUN_035336c4();
  return uVar7;
}


