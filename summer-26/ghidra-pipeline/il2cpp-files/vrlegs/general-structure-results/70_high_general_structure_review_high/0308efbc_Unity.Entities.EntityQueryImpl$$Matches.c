/*
FUNCTION_NAME: Unity.Entities.EntityQueryImpl$$Matches
ENTRY_POINT: 0308efbc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3
*/


void Unity_Entities_EntityQueryImpl__Matches(undefined8 *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int extraout_w1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  int unaff_w21;
  ushort *puVar8;
  long unaff_x22;
  long unaff_x23;
  undefined1 auVar9 [16];
  
  uVar3 = FUN_025bd4ac(param_2,*param_1);
  if ((uVar3 & 1) != 0) {
LAB_0308f11c:
    thunk_FUN_01a6ca08(System_NullReferenceException_var);
    uVar4 = thunk_FUN_01a89a98();
    FUN_018748a8();
    uVar7 = *(undefined8 *)(unaff_x23 + 0x20);
    uVar5 = thunk_FUN_01a6ca08(
                              Unity_Physics_Systems_BroadphaseSystem___codegen__OnCreate_00000B7B_PostfixBurstDelegate_var
                              );
    uVar4 = FUN_025be86c(uVar5,uVar4,uVar7,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar5 = thunk_FUN_01a89e68();
    FUN_026b274c(uVar5,uVar4,0);
    uVar4 = thunk_FUN_01a6ca08(
                              Unity_Entities_BlobAssetOwner___codegen__Retain_00000056_PostfixBurstDelegate_var
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar4);
  }
  if (*(int *)(unaff_x23 + 0x28) == 0x1403) {
    if (*(long *)(unaff_x22 + 0x18) != 0) {
      auVar9 = FUN_01f7f7e8();
      puVar8 = auVar9._0_8_;
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        puVar6 = (undefined8 *)
                 FUN_01fb41c8(*(long *)(unaff_x20 + 0x30),auVar9._8_8_,
                              *(undefined8 *)
                               UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_var
                             );
        if (0 < auVar9._8_4_) {
          uVar3 = auVar9._8_8_ & 0xffffffff;
          do {
            uVar2 = *puVar8;
            puVar1 = puVar8 + 1;
            uVar3 = uVar3 - 1;
            puVar8 = puVar8 + 2;
            uVar4 = NEON_ucvtf((ulong)CONCAT24(*puVar1,(uint)uVar2),4);
            *puVar6 = uVar4;
            puVar6 = puVar6 + 1;
          } while (uVar3 != 0);
        }
        goto LAB_0308f0d4;
      }
    }
  }
  else {
    if (*(int *)(unaff_x23 + 0x28) != 0x1406) {
      FUN_018748a8();
      goto LAB_0308f11c;
    }
    if (*(long *)(unaff_x22 + 0x18) != 0) {
      FUN_01f7f7e8();
      if (extraout_w1 != unaff_w21) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
        uVar4 = thunk_FUN_01a89e68();
        uVar5 = thunk_FUN_01a6ca08(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
        FUN_027a794c(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01a6ca08(
                                  Unity_Entities_BlobAssetOwner___codegen__Retain_00000056_PostfixBurstDelegate_var
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar5);
      }
LAB_0308f0d4:
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      FUN_02241190();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


