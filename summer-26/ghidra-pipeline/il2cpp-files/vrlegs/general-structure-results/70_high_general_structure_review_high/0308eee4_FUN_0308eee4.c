/*
FUNCTION_NAME: FUN_0308eee4
ENTRY_POINT: 0308eee4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_1;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


void FUN_0308eee4(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ushort *puVar9;
  undefined1 auVar10 [16];
  undefined1 local_40 [16];
  
  if ((DAT_0412b527 & 1) == 0) {
    FUN_01ab69ac(
                Unity_Entities_Baking_BakeDependencies_ResetBakerDependencies_000001D6_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_Baking_BakeDependencies_UpdateDependencies_000001D8_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cd8108);
    FUN_01ab69ac(UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_var);
    FUN_01ab69ac(Unity_Entities_BlobAssetOwner___codegen__Release_00000057_PostfixBurstDelegate_var)
    ;
    FUN_01ab69ac(PTR_DAT_03cd9460);
    DAT_0412b527 = 1;
  }
  uVar3 = FUN_03096ee0(param_2);
  if ((uVar3 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if ((((param_3 != 0) && (*(long *)(param_3 + 0x28) != 0)) && (param_2 != 0)) &&
     (((*(long *)(param_2 + 0x18) != 0 &&
       (lVar4 = *(long *)(*(long *)(param_3 + 0x28) + 0x28), lVar4 != 0)) &&
      (FUN_02215a88(lVar4,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x1c),local_40,
                    *(undefined8 *)PTR_DAT_03cd8108), uVar5 = local_40._0_8_, local_40._0_8_ != 0)))
     ) {
    uVar3 = FUN_025bd4ac(*(undefined8 *)(local_40._0_8_ + 0x20),*(undefined8 *)PTR_DAT_03cd9460,0);
    local_40._0_4_ = *(int *)(uVar5 + 0x28);
    if ((uVar3 & 1) != 0) {
LAB_0308f11c:
      uVar6 = thunk_FUN_01a6ca08(System_NullReferenceException_var);
      uVar6 = thunk_FUN_01a89a98(uVar6,local_40);
      FUN_018748a8(uVar5);
      uVar8 = *(undefined8 *)(uVar5 + 0x20);
      uVar5 = thunk_FUN_01a6ca08(
                                Unity_Physics_Systems_BroadphaseSystem___codegen__OnCreate_00000B7B_PostfixBurstDelegate_var
                                );
      uVar5 = FUN_025be86c(uVar5,uVar6,uVar8,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
      uVar6 = thunk_FUN_01a89e68();
      FUN_026b274c(uVar6,uVar5,0);
      uVar5 = thunk_FUN_01a6ca08(
                                Unity_Entities_BlobAssetOwner___codegen__Retain_00000056_PostfixBurstDelegate_var
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar6,uVar5);
    }
    if (local_40._0_4_ == 0x1403) {
      if (*(long *)(param_2 + 0x18) != 0) {
        auVar10 = FUN_01f7f7e8(param_3,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x1c),
                               *(undefined8 *)
                                Unity_Entities_Baking_BakeDependencies_ResetBakerDependencies_000001D6_PostfixBurstDelegate_var
                              );
        puVar9 = auVar10._0_8_;
        if (*(long *)(param_3 + 0x30) != 0) {
          local_40 = FUN_01fb41c8(*(long *)(param_3 + 0x30),auVar10._8_8_,
                                  *(undefined8 *)
                                   UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_var
                                 );
          if (0 < auVar10._8_4_) {
            uVar3 = auVar10._8_8_ & 0xffffffff;
            puVar7 = local_40._0_8_;
            do {
              uVar2 = *puVar9;
              puVar1 = puVar9 + 1;
              uVar3 = uVar3 - 1;
              puVar9 = puVar9 + 2;
              uVar5 = NEON_ucvtf((ulong)CONCAT24(*puVar1,(uint)uVar2),4);
              *puVar7 = uVar5;
              puVar7 = puVar7 + 1;
            } while (uVar3 != 0);
          }
          goto LAB_0308f0d4;
        }
      }
    }
    else {
      if (local_40._0_4_ != 0x1406) {
        FUN_018748a8(uVar5);
        local_40._0_4_ = *(int *)(uVar5 + 0x28);
        goto LAB_0308f11c;
      }
      if (*(long *)(param_2 + 0x18) != 0) {
        local_40 = FUN_01f7f7e8(param_3,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x1c),
                                *(undefined8 *)
                                 Unity_Entities_Baking_BakeDependencies_UpdateDependencies_000001D8_PostfixBurstDelegate_var
                               );
        if (local_40._8_4_ != param_4) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
          uVar5 = thunk_FUN_01a89e68();
          uVar6 = thunk_FUN_01a6ca08(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
          FUN_027a794c(uVar5,uVar6,0);
          uVar6 = thunk_FUN_01a6ca08(
                                    Unity_Entities_BlobAssetOwner___codegen__Retain_00000056_PostfixBurstDelegate_var
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar5,uVar6);
        }
LAB_0308f0d4:
        *param_1 = 0;
        param_1[1] = 0;
        uVar5 = *(undefined8 *)
                 Unity_Entities_BlobAssetOwner___codegen__Release_00000057_PostfixBurstDelegate_var;
        param_1[2] = 0;
        FUN_02241190(param_1,local_40,uVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


