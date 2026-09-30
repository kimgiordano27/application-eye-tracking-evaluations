/*
FUNCTION_NAME: FUN_0621e230
ENTRY_POINT: 0621e230
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_0621e230(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = PTR_DAT_069fb990;
  if ((DAT_06dc712a & 1) == 0) {
    FUN_02d965b8(Method_System_Number_FormatFixed__);
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<NetcodeGameObjectsPlayer>__
                );
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<Vector3>__
                );
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedValueEquals<PlayerScoreData>__
                );
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_FixedString<FixedString128Bytes>__
                );
    FUN_02d965b8(Method_System_Number_NumberToString__);
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_FixedString<FixedString4096Bytes>__
                );
    FUN_02d965b8(Method_System_Number_ThrowOverflowOrFormatException__);
    FUN_02d965b8(Method_System_Globalization_NumberFormatInfo_ReadOnly__);
    FUN_02d965b8(Method_System_Globalization_NumberFormatInfo_ValidateParseStyleFloatingPoint__);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(Method_System_Globalization_NumberFormatInfo_ValidateParseStyleInteger__);
    DAT_06dc712a = 1;
  }
  uVar5 = param_2[6];
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_0634eb94(uVar5,0,0);
  lVar4 = *(long *)(param_1 + 0x68);
  if ((uVar3 & 1) == 0) {
    if ((lVar4 != 0) &&
       (lVar4 = FUN_04e93414(lVar4,*(undefined8 *)Method_System_Number_NumberToString__), lVar4 != 0
       )) {
      FUN_049cf0ac(&local_88,lVar4,
                   *(undefined8 *)
                    Method_System_Globalization_NumberFormatInfo_ValidateParseStyleInteger__);
      puVar2 = Method_System_Globalization_NumberFormatInfo_ReadOnly__;
      puVar1 = Method_System_Number_FormatFixed__;
      while( true ) {
        uVar3 = FUN_05232ed8(&local_88,*(undefined8 *)puVar2);
        if ((uVar3 & 1) == 0) {
          FUN_05232ed4(&local_88,
                       *(undefined8 *)Method_System_Number_ThrowOverflowOrFormatException__);
          return;
        }
        if (local_78 == 0) break;
        uStack_68 = param_2[1];
        local_70 = *param_2;
        uStack_58 = param_2[3];
        local_60 = param_2[2];
        uStack_48 = param_2[5];
        local_50 = param_2[4];
        local_40 = param_2[6];
        FUN_0459c8f0(local_78,&local_70,*(undefined8 *)puVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else if (lVar4 != 0) {
    uVar3 = FUN_04e937e4(lVar4,param_2[6],
                         *(undefined8 *)
                          Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedValueEquals<PlayerScoreData>__
                        );
    if ((uVar3 & 1) == 0) {
      local_40 = 0;
      lVar4 = *(long *)(param_1 + 0x68);
      uVar6 = param_2[6];
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<Vector3>__
                                );
      FUN_045b25dc(uVar5,&local_70,1,0,0,
                   *(undefined8 *)
                    Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<NetcodeGameObjectsPlayer>__
                  );
      if (lVar4 == 0) goto LAB_0621e4b4;
      FUN_04e935dc(lVar4,uVar6,uVar5,
                   *(undefined8 *)
                    Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_FixedString<FixedString4096Bytes>__
                  );
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (lVar4 = FUN_04e93570(*(long *)(param_1 + 0x68),param_2[6],
                             *(undefined8 *)
                              Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_FixedString<FixedString128Bytes>__
                            ), lVar4 != 0)) {
      uStack_68 = param_2[1];
      local_70 = *param_2;
      uStack_58 = param_2[3];
      local_60 = param_2[2];
      uStack_48 = param_2[5];
      local_50 = param_2[4];
      local_40 = param_2[6];
      FUN_0459c8f0(lVar4,&local_70,*(undefined8 *)Method_System_Number_FormatFixed__);
      return;
    }
  }
LAB_0621e4b4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


