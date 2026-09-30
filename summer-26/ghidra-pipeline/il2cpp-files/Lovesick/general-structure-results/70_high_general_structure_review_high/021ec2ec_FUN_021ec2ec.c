/*
FUNCTION_NAME: FUN_021ec2ec
ENTRY_POINT: 021ec2ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


long FUN_021ec2ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_037817ce & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<Vector2>__ctor__);
    thunk_FUN_00d48444(StringLiteral_13724);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(StringLiteral_13753);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_037817ce = 1;
  }
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(param_1 + 0x3c) < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Collections_NativeArray<Vector2>__ctor__);
    FUN_01796450(*(undefined8 *)(param_1 + 0x40),uVar3,*(undefined4 *)(param_1 + 0x3c),0);
  }
  local_a0 = 0;
  uStack_98 = 0;
  FUN_021f605c(&local_a0,*(undefined8 *)(param_1 + 0x10),0);
  uVar4 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(local_a0,uStack_98,0);
  lVar6 = *(long *)puVar2;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar6);
  }
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
  ;
  uVar5 = FUN_01789ac0(uVar7,0,0);
  if (((uVar5 & 1) == 0) ||
     (uVar5 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x30),0), (uVar5 & 1) == 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar7 = *(undefined8 *)StringLiteral_13753;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_01780344(uVar7,0);
  }
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar6 != 0) {
    FUN_017b46ec(lVar6,0);
    local_a0 = 0;
    uStack_98 = 0;
    FUN_021f605c(&local_a0,uVar4,0);
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    *(undefined8 *)(lVar6 + 0x18) = uStack_98;
    *(undefined8 *)(lVar6 + 0x10) = local_a0;
    *(undefined8 *)(lVar6 + 0x98) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(lVar6 + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
    uVar5 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x30),0);
    puVar2 = StringLiteral_13724;
    if ((uVar5 & 1) == 0) {
      local_80 = 0;
      uStack_78 = 0;
      FUN_021f605c(&local_80,*(undefined8 *)(param_1 + 0x30),0);
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      local_50 = local_80;
      uStack_48 = uStack_78;
      FUN_012f19d4(&local_a0,&local_50,*(undefined8 *)puVar2);
      uStack_68 = uStack_98;
      local_70 = local_a0;
      uStack_58 = uStack_88;
      uStack_60 = uStack_90;
    }
    else {
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    *(undefined8 *)(lVar6 + 0x90) = uVar3;
    *(undefined8 *)(lVar6 + 0x60) = uStack_58;
    *(undefined8 *)(lVar6 + 0x58) = uStack_60;
    *(undefined8 *)(lVar6 + 0x50) = uStack_68;
    *(undefined8 *)(lVar6 + 0x48) = local_70;
    *(undefined2 *)(lVar6 + 0x40) = *(undefined2 *)(param_1 + 0x38);
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


