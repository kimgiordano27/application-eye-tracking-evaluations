/*
FUNCTION_NAME: FUN_015a217c
ENTRY_POINT: 015a217c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_015a217c(undefined1 param_1 [16],undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  
  if ((DAT_03777d79 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Net_WebRequest_BeginGetResponse__);
    thunk_FUN_00d48444(Method_MedleyGraveyardPuzzle_PlayerHit__);
    thunk_FUN_00d48444(UnityEngine_UI_ReflectionMethodsCache_RaycastAllCallback_var);
    thunk_FUN_00d48444(StringLiteral_12123);
    thunk_FUN_00d48444(StringLiteral_14413);
    thunk_FUN_00d48444(PTR_DAT_033f6148);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03777d79 = 1;
  }
  puVar2 = Method_System_Net_WebRequest_BeginGetResponse__;
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  lStack_58 = 0;
  local_50 = 0;
  local_60 = 0;
  plVar5 = *(long **)(param_3 + 0x20);
  if (plVar5 != (long *)0x0) {
    iVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    *(int *)(param_3 + 0x48) = iVar4;
    local_80 = (long)iVar4;
    lStack_78 = local_80;
    uVar6 = FUN_00da4fc0(*(undefined8 *)puVar2,&local_80);
    *(undefined8 *)(param_3 + 0x40) = uVar6;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_02681b9c(param_4,0,0);
    puVar1 = PTR_DAT_033f6148;
    if ((uVar7 & 1) == 0) {
      *(undefined8 *)(param_3 + 0x28) = 0;
      *(undefined8 *)(param_3 + 0x30) = 0;
      *(undefined8 *)(param_3 + 0x38) = 0;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03777c7e == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033f6148);
        DAT_03777c7e = '\x01';
      }
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar1;
      }
      puVar3 = StringLiteral_12123;
      puVar2 = Method_MedleyGraveyardPuzzle_PlayerHit__;
      puVar1 = UnityEngine_UI_ReflectionMethodsCache_RaycastAllCallback_var;
      if ((**(long **)(lVar8 + 0xb8) == 0) ||
         (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0xd8), lVar8 == 0)) goto LAB_015a2468;
      FUN_01323390(lVar8,&local_80,*(undefined8 *)StringLiteral_14413);
      lStack_58 = lStack_78;
      local_60 = local_80;
      local_50 = local_70;
      while (uVar7 = FUN_012b894c(&local_60,*(undefined8 *)puVar1), (uVar7 & 1) != 0) {
        lVar8 = FUN_00bcea2c(&local_60,*(undefined8 *)puVar3);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0158c288(&local_80,lVar8,0);
        lStack_a8 = lStack_78;
        local_b0 = local_80;
        local_a0 = local_70;
        FUN_02687e74((undefined8 *)(param_3 + 0x28),&local_b0,0);
      }
      FUN_012b8948(&local_60,*(undefined8 *)puVar2);
    }
    else {
      if (param_4 == 0) goto LAB_015a2468;
      FUN_0158c288(&local_98,param_4,0);
      local_70 = local_88;
      lStack_78 = lStack_90;
      local_80 = local_98;
      *(undefined8 *)(param_3 + 0x38) = local_88;
      *(long *)(param_3 + 0x30) = lStack_90;
      *(long *)(param_3 + 0x28) = local_98;
    }
    lVar9 = FUN_0268fd10(param_3,0);
    lVar8 = param_3 + 0x28;
    uVar6 = FUN_02687a80(lVar8,0);
    FUN_02687c20(lVar8,0);
    FUN_02687a80(lVar8,0);
    if (lVar9 != 0) {
      FUN_0269f618(uVar6,param_2,lVar9,0);
      lVar9 = FUN_0268fd10(param_3,0);
      uVar10 = FUN_015a1dc4(param_3);
      FUN_02687be0(lVar8,0);
      uVar6 = param_2;
      FUN_015a1dc4(param_3);
      if (lVar9 != 0) {
        FUN_0269fd98(uVar10,param_2,uVar6,lVar9,0);
        return;
      }
    }
  }
LAB_015a2468:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


