/*
FUNCTION_NAME: FUN_01b75428
ENTRY_POINT: 01b75428
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_4;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01b75804) */
/* WARNING: Removing unreachable block (ram,0x01b75728) */
/* WARNING: Removing unreachable block (ram,0x01b7580c) */

void FUN_01b75428(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
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
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar7 = StringLiteral_8562;
  if ((DAT_0377e4fe & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_12209);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_RandomNumberGenerator_GetBytes__);
    thunk_FUN_00d48444(OVRPlugin_BoneCapsule___TypeInfo);
    thunk_FUN_00d48444(FullSerializer_Internal_fsForwardConverter_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Security_Cryptography_X509Certificates_X509ExtensionCollection_get_Item__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzs_f32__);
    thunk_FUN_00d48444(System_Collections_Generic_List<int[]>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_MoveNext__
                      );
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_RenderingUtils_StereoConstants_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f5bf8);
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
    thunk_FUN_00d48444(System_Func<bool,_bool,_float,_bool>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_ExpressionVisitor_ValidateChildType__);
    thunk_FUN_00d48444(Method_System_Net_FileWebRequest_set_ContentLength__);
    thunk_FUN_00d48444(StringLiteral_8562);
    DAT_0377e4fe = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_e8 = 0;
  uVar14 = FUN_0112d330(param_1,&local_70,*(undefined8 *)puVar7);
  puVar8 = Method_System_Net_FileWebRequest_set_ContentLength__;
  puVar7 = Method_System_Linq_Expressions_ExpressionVisitor_ValidateChildType__;
  if ((uVar14 & 1) != 0) {
    if ((param_2 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_033f02a8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_01b2bd64(param_1,&local_80,2,0);
      puVar6 = Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
      if ((uVar14 & 1) != 0) {
        uStack_88 = uStack_78;
        local_90 = local_80;
        local_120 = 0;
        FUN_01320c9c(&local_120,&local_98,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzs_f32__);
        puVar10 = 
        Method_System_Security_Cryptography_X509Certificates_X509ExtensionCollection_get_Item__;
        local_a0 = local_120;
        FUN_01342ff4(&local_80,&local_120,*(undefined8 *)PTR_DAT_033f5bf8);
        puVar11 = StringLiteral_12209;
        puVar9 = Method_System_Security_Cryptography_RandomNumberGenerator_GetBytes__;
        puVar5 = 
        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_MoveNext__
        ;
        puVar4 = FullSerializer_Internal_fsForwardConverter_TypeInfo;
        puVar3 = OVRPlugin_BoneCapsule___TypeInfo;
        puVar2 = System_Collections_Generic_List<int[]>_TypeInfo;
        puVar1 = System_Func<bool,_bool,_float,_bool>_TypeInfo;
        uStack_c8 = uStack_118;
        local_d0 = local_120;
        uStack_b8 = uStack_108;
        local_c0 = local_110;
        uStack_a8 = uStack_f8;
        local_b0 = uStack_100;
        while (uVar14 = FUN_00c092c4(&local_d0,*(undefined8 *)puVar3), (uVar14 & 1) != 0) {
          FUN_00c09180(&local_120,&local_d0,*(undefined8 *)puVar4);
          uVar13 = local_110;
          uVar12 = uStack_118;
          uVar15 = local_120;
          local_120 = 0;
          uStack_118 = 0;
          local_110 = 0;
          FUN_01a92b90(&local_120,uVar15,uVar12,uVar13,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uStack_138 = uStack_118;
          local_140 = local_120;
          local_130 = local_110;
          uVar14 = FUN_01b73aa8(&local_140,&local_e8);
          if ((uVar14 & 1) != 0) {
            uStack_118 = uStack_e0;
            local_120 = local_e8;
            local_110 = local_d8;
            if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uStack_158 = uStack_e0;
            local_160 = local_e8;
            local_150 = local_d8;
            FUN_00c373dc(local_98,&local_160,*(undefined8 *)puVar2);
          }
        }
        FUN_012b4c54(&local_d0,*(undefined8 *)puVar9);
        if (local_98 != 0) {
          if (*(int *)(local_98 + 0x18) == 0) {
            lVar17 = *(long *)puVar11;
            lVar16 = *(long *)(lVar17 + 0x38);
            if (lVar16 == 0) {
              FUN_00d59478(lVar17);
              lVar16 = *(long *)(lVar17 + 0x38);
            }
            lVar16 = *(long *)(lVar16 + 0x10);
            if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
              lVar16 = FUN_00d5941c();
            }
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
            if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
              lVar16 = FUN_00d5941c();
            }
            uVar15 = **(undefined8 **)(lVar16 + 0xb8);
          }
          else {
            uVar15 = FUN_01325140(local_98,*(undefined8 *)puVar5);
          }
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01351f70(&local_70,uVar15,*(undefined8 *)puVar7);
          FUN_01320dd0(&local_a0,*(undefined8 *)puVar10);
          FUN_01342a94(&local_90,*(undefined8 *)puVar6);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01351f70(&local_70,0,*(undefined8 *)puVar7);
  }
  return;
}


