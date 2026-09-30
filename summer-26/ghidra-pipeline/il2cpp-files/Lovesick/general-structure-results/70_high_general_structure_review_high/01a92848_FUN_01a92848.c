/*
FUNCTION_NAME: FUN_01a92848
ENTRY_POINT: 01a92848
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01a92848(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_90;
  ulong uStack_88;
  long local_80;
  ulong uStack_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_48;
  undefined4 local_44;
  
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_f64__;
  if ((DAT_0377cd29 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Meta_WitAi_Json_JsonConvert_SerializeToken<List<WitEntityKeywordInfo>>__
                      );
    thunk_FUN_00d48444(StringLiteral_8940);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Face,_bool>__ctor__);
    thunk_FUN_00d48444(StringLiteral_3940);
    thunk_FUN_00d48444(Method_UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor_OnContactAdded__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<Object>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
    thunk_FUN_00d48444(StringLiteral_9912);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_f64__);
    DAT_0377cd29 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_48 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uVar10 = FUN_0112d330(param_1,&local_60,*(undefined8 *)puVar3);
  puVar3 = StringLiteral_9912;
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_010a0568(&local_60,&local_70,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_033f02a8;
    if ((uVar10 & 1) != 0) {
      local_80 = 0;
      uStack_78 = 0;
      if (*(int *)(*(long *)PTR_DAT_033f02a8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_01b2ef50(param_1,0,0,&local_48,0);
      uVar10 = FUN_01b139c4(uVar11,0);
      puVar7 = StringLiteral_3940;
      puVar6 = Method_UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor_OnContactAdded__;
      puVar5 = Method_Meta_WitAi_Json_JsonConvert_SerializeToken<List<WitEntityKeywordInfo>>__;
      puVar4 = Method_System_Collections_Generic_Dictionary<Face,_bool>__ctor__;
      if ((uVar10 & 1) != 0) {
        do {
          if (local_80 != 0) {
            FUN_01342a94(&local_80,*(undefined8 *)puVar7);
          }
          FUN_013421d4(&local_80,local_48,2,1,*(undefined8 *)puVar6);
          uVar11 = FUN_01127558(local_80,uStack_78,*(undefined8 *)puVar4);
          uVar10 = uStack_78;
          lVar12 = *(long *)puVar3;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar12);
          }
          iVar8 = FUN_01b2ef50(param_1,uVar11,uVar10 & 0xffffffff,&local_48,0);
        } while (iVar8 == -0x3ef);
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar2 = *(undefined4 *)(local_70 + 0x18);
        uStack_88 = uStack_78;
        local_90 = local_80;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_01b139c4(iVar8,0);
        if ((local_48 == 0) || (((uVar9 ^ 1) & 1) != 0)) {
          FUN_01342a94(&local_90,*(undefined8 *)puVar7);
        }
        else {
          if (0 < local_48) {
            lVar13 = 0;
            lVar12 = 0;
            do {
              if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              puVar1 = (undefined8 *)(local_80 + lVar13);
              uStack_a8 = puVar1[1];
              local_b0 = *puVar1;
              local_a0 = puVar1[2];
              FUN_00bd18e4(local_70,&local_b0,*(undefined8 *)puVar5);
              lVar12 = lVar12 + 1;
              lVar13 = lVar13 + 0x18;
            } while (lVar12 < local_48);
          }
          FUN_01342a94(&local_90,*(undefined8 *)puVar7);
          if (local_68 != 0) {
            local_44 = uVar2;
            (**(code **)(local_68 + 0x18))
                      (*(undefined8 *)(local_68 + 0x40),local_70,&local_44,
                       *(undefined8 *)(local_68 + 0x28));
          }
        }
      }
    }
  }
  return;
}


