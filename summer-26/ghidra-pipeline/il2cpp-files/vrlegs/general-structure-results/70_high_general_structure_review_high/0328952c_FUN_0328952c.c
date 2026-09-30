/*
FUNCTION_NAME: FUN_0328952c
ENTRY_POINT: 0328952c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0328952c(long *param_1,long param_2,undefined4 param_3,long param_4,uint param_5,
                 uint param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_64;
  undefined *puVar6;
  
  if ((DAT_0412c9c6 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8408);
    FUN_01ab69ac(
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    DAT_0412c9c6 = 1;
  }
  puVar6 = PTR_DAT_03cd8408;
  local_80 = 0;
  uStack_78 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x98) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cd8408 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_03278748(param_2 + 0x10,0);
      puVar2 = PTR_DAT_03cc4ad8;
      if (0x1fff < uVar3) {
        local_64 = 0x1fff;
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cc4ad8);
        uVar9 = thunk_FUN_01a89a98(uVar8,&local_64);
        FUN_018748a8(param_2);
        uStack_78 = *(undefined8 *)(param_2 + 0x18);
        local_80 = *(undefined8 *)(param_2 + 0x10);
        thunk_FUN_01a6ca08(PTR_DAT_03cd8408);
        FUN_01876390();
        local_84 = FUN_03278748(&local_80,0);
        uVar8 = thunk_FUN_01a6ca08(puVar2);
        uVar8 = thunk_FUN_01a89a98(uVar8,&local_84);
        puVar6 = UnityEngine_CompositeCollider2D_TypeInfo;
LAB_032898c4:
        uVar5 = thunk_FUN_01a6ca08(puVar6);
        uVar8 = FUN_025be8b0(uVar5,param_2,uVar9,uVar8,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
        uVar9 = thunk_FUN_01a89e68();
        FUN_02765308(uVar9,uVar8,0);
        uVar8 = thunk_FUN_01a6ca08(UniGLTF_Zip_CompressionMethod_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar9,uVar8);
      }
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      puVar2 = PTR_DAT_03cc4ad8;
      if (0x1ff < *(uint *)(param_2 + 0x1c)) {
        local_64 = 0x1ff;
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cc4ad8);
        uVar9 = thunk_FUN_01a89a98(uVar8,&local_64);
        FUN_018748a8(param_2);
        uStack_78 = *(undefined8 *)(param_2 + 0x18);
        local_80 = *(undefined8 *)(param_2 + 0x10);
        thunk_FUN_01a6ca08(PTR_DAT_03cd8408);
        FUN_01876390();
        local_84 = uStack_78._4_4_;
        uVar8 = thunk_FUN_01a6ca08(puVar2);
        uVar8 = thunk_FUN_01a89a98(uVar8,&local_84);
        puVar6 = Mono_CSharp_CompoundAssign_TypeInfo;
        goto LAB_032898c4;
      }
    }
    lVar7 = *param_1;
    if (param_2 != lVar7) {
      if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x160), lVar7 == 0)) goto LAB_032897e0;
      if (*(int *)(lVar7 + 0x18) == 0) {

        UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceRegistry__IsRenderGraphResourceImported
        :
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_03289918(param_1,lVar7 + 0x20,param_2,param_7,0);
    }
    if (*(int *)(param_2 + 0x98) == 0) {
      lVar7 = param_1[3];
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_03278748(param_2 + 0x10,0);
      uVar4 = FUN_03203eb4(param_3,uVar4,*(undefined4 *)(param_2 + 0x1c),0);
      if (lVar7 == 0) goto LAB_032897e0;
      local_64 = uVar4;
      FUN_01b5f01c(lVar7,&local_64,
                   *(undefined8 *)
                    Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                  );
    }
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    uVar9 = *(undefined8 *)(param_2 + 0x50);
    FUN_03289244(param_1,param_2,uVar8,uVar9,0);
    FUN_03289244(param_1,param_2,uVar8,uVar9,1);
    if (param_2 != *(long *)(param_2 + 0x78)) {
      if ((param_5 & 1) == 0) {
        param_5 = FUN_031fdbb0(param_2,0);
      }
      else {
        param_5 = 1;
        FUN_031fdbbc(param_2,1,0);
      }
      if ((param_6 & 1) == 0) {
        param_6 = FUN_031fee98(param_2,0);
      }
      else {
        param_6 = 1;
        FUN_031feea4(param_2,1,0);
      }
    }
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = (ulong)*(uint *)(param_2 + 0x98);
    if (0 < (int)*(uint *)(param_2 + 0x98)) {
      if (param_4 == 0) goto LAB_032897e0;
      iVar1 = *(int *)(param_2 + 0x14);
      uVar3 = *(uint *)(param_2 + 0x9c);
      do {
        if (*(uint *)(param_4 + 0x18) <= uVar3)
        goto 
        UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceRegistry__IsRenderGraphResourceImported
        ;
        lVar7 = *(long *)(param_4 + (long)(int)uVar3 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_032897e0;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + iVar1;
        FUN_0328952c(param_1,lVar7,uVar3,param_4,param_5 & 1,param_6 & 1,param_7);
        uVar10 = uVar10 - 1;
        uVar3 = uVar3 + 1;
      } while (uVar10 != 0);
    }
    FUN_031fee4c(param_2,1,0);
    return;
  }
LAB_032897e0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


