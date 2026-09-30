/*
FUNCTION_NAME: FUN_057e81f4
ENTRY_POINT: 057e81f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;data_collection;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_13;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_possible_biometrics_hits_4
*/


void FUN_057e81f4(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c [4];
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [4];
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134 [4];
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined4 local_fc;
  byte local_f8 [4];
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 local_c8;
  byte local_c4 [4];
  byte local_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  if ((DAT_06dc04a7 & 1) == 0) {
    FUN_02d965b8(System_Func<MouseLeaveEvent>_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_JsonReaderException_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_JsonSerializationException_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_JsonSerializer_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a13830);
    FUN_02d965b8(PTR_DAT_06a00f70);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(PTR_DAT_06a0fd00);
    FUN_02d965b8(Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_Serialization_JsonStringContract_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_JsonTextReader_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_JsonTextWriter_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_JsonToken_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_Serialization_JsonTypeReflector_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_JsonWriter_TypeInfo);
    FUN_02d965b8(Newtonsoft_Json_JsonWriterException_TypeInfo);
    FUN_02d965b8(Unity_Services_Relay_InternalRelayService_TypeInfo);
    FUN_02d965b8(Unity_Services_Authentication_JwtDecoder_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_InterpolatingJoint_TypeInfo);
    FUN_02d965b8(Unity_Services_Authentication_PlayerAccounts_JwtDecoder_TypeInfo);
    FUN_02d965b8(Mtree_KDTree_TypeInfo);
    FUN_02d965b8(Mtree_KDTreeNode_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_KSStruct_TypeInfo);
    FUN_02d965b8(TMPro_KerningPair_TypeInfo);
    FUN_02d965b8(TMPro_KerningTable_TypeInfo);
    FUN_02d965b8(Mono_Security_Cryptography_KeyBuilder_TypeInfo);
    FUN_02d965b8(System_Linq_Expressions_Interpreter_InterpretedFrame_TypeInfo);
    FUN_02d965b8(Mono_Security_Cryptography_KeyBuilder_TypeInfo);
    FUN_02d965b8(UnityEngine_KeyCode_TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_Controls_KeyControl_TypeInfo);
    FUN_02d965b8(System_Data_InvalidConstraintException_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_KeyDownEvent_TypeInfo);
    FUN_02d965b8(UnityEngine_InputForUI_KeyEvent_TypeInfo);
    DAT_06dc04a7 = 1;
  }
  puVar1 = PTR_DAT_06a13830;
  plVar12 = (long *)(param_5 + 0x30);
  if (*plVar12 != 0) {
    FUN_05378f70(*plVar12,0,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06db9bc9 == '\0') {
      FUN_02d965b8(PTR_DAT_06a13830);
      DAT_06db9bc9 = '\x01';
    }
    puVar2 = System_Func<MouseLeaveEvent>_TypeInfo;
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar5 = *(long *)puVar1;
    }
    local_88 = *(undefined8 *)puVar2;
    uVar15 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x10);
    uStack_80 = 0xffffffffffffffff;
    local_78 = uVar15;
    uVar6 = FUN_0551e574(&local_88,0);
    if (*plVar12 != 0) {
      FUN_0537ab70(*plVar12,*(undefined8 *)
                             System_Linq_Expressions_Interpreter_InterpretedFrame_TypeInfo,uVar6,0);
      if (DAT_06dc0478 == '\0') {
        FUN_02d965b8(PTR_DAT_06a13830);
        DAT_06dc0478 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar1;
      }
      local_a0 = *(undefined8 *)puVar2;
      local_90 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x14);
      uStack_98 = 0xffffffffffffffff;
      uVar6 = FUN_0551e574(&local_a0,0);
      puVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo;
      if (*plVar12 != 0) {
        FUN_0537ab70(*plVar12,*(undefined8 *)
                               System_Runtime_Remoting_InternalRemotingServices_TypeInfo,uVar6,0);
        lVar5 = *plVar12;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if ((lVar5 != 0) &&
           (FUN_0537ab70(lVar5,*(undefined8 *)System_Data_InvalidConstraintException_TypeInfo,
                         **(undefined8 **)(*(long *)puVar1 + 0xb8),0),
           *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) != 0)) {
          FUN_057e8df4();
          lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          if (lVar5 != 0) {
            FUN_057e8e84(lVar5,plVar12);
            **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar6;
            LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar6);
            local_a4 = FUN_057486c4(uVar15,0);
            puVar1 = PTR_DAT_069fb9c0;
            lVar5 = *plVar12;
            uVar17 = param_3;
            uVar16 = param_2;
            uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x78),&local_a4);
            local_a8 = param_2;
            uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x78),&local_a8);
            local_ac = param_3;
            uVar8 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x78),&local_ac);
            puVar2 = PTR_DAT_069fc180;
            if (lVar5 != 0) {
              FUN_0537b6ac(lVar5,*(undefined8 *)Oculus_Avatar2_InterpolatingJoint_TypeInfo,uVar6,
                           uVar7,uVar8,0);
              uVar15 = FUN_05749184(uVar15,0);
              lVar14 = *plVar12;
              plVar9 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,4);
              local_b0 = uVar15;
              lVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x78),&local_b0);
              if (plVar9 != (long *)0x0) {
                if ((lVar5 != 0) &&
                   (lVar10 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)
                   ) {
LAB_057e8de8:
                  uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                  FUN_02d96724(uVar6,0);
                }
                if ((int)plVar9[3] != 0) {
                  plVar9[4] = lVar5;
                  LeanTween__value(plVar9 + 4,lVar5);
                  local_b4 = uVar16;
                  lVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x78),&local_b4);
                  if ((lVar5 != 0) &&
                     (lVar10 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar10 == 0)) goto LAB_057e8de8;
                  if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
                    plVar9[5] = lVar5;
                    LeanTween__value(plVar9 + 5,lVar5);
                    local_b8 = uVar17;
                    lVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x78),&local_b8);
                    if ((lVar5 != 0) &&
                       (lVar10 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar10 == 0)) goto LAB_057e8de8;
                    if (2 < *(uint *)(plVar9 + 3)) {
                      plVar9[6] = lVar5;
                      LeanTween__value(plVar9 + 6,lVar5);
                      local_bc = param_4;
                      lVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x78),&local_bc);
                      if ((lVar5 != 0) &&
                         (lVar10 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar9 + 0x40)),
                         lVar10 == 0)) goto LAB_057e8de8;
                      if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
                        plVar9[7] = lVar5;
                        LeanTween__value(plVar9 + 7,lVar5);
                        puVar2 = PTR_DAT_06a00f70;
                        if (lVar14 != 0) {
                          FUN_0537b70c(lVar14,*(undefined8 *)
                                               Unity_Services_Relay_InternalRelayService_TypeInfo,
                                       plVar9,0);
                          lVar5 = *plVar12;
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          local_c0[0] = FUN_05774658(0);
                          local_c0[0] = local_c0[0] & 1;
                          uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x28),local_c0);
                          if (lVar5 != 0) {
                            FUN_0537ab70(lVar5,*(undefined8 *)
                                                Newtonsoft_Json_Serialization_JsonStringContract_TypeInfo
                                         ,uVar6,0);
                            local_c4[0] = FUN_057747e0(0xffffffff,0,param_5 + 0x38,0);
                            local_c4[0] = local_c4[0] & 1;
                            lVar5 = *(long *)(param_5 + 0x30);
                            uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x28),local_c4);
                            puVar2 = Newtonsoft_Json_JsonReaderException_TypeInfo;
                            if (lVar5 != 0) {
                              FUN_0537ab70(lVar5,*(undefined8 *)
                                                  Newtonsoft_Json_JsonTextWriter_TypeInfo,uVar6,0);
                              local_c8 = *(undefined4 *)(param_5 + 0x38);
                              lVar5 = *plVar12;
                              uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2,&local_c8);
                              puVar3 = PTR_DAT_06a0fd00;
                              if (lVar5 != 0) {
                                FUN_0537ab70(lVar5,*(undefined8 *)
                                                    Newtonsoft_Json_JsonWriter_TypeInfo,uVar6,0);
                                local_f0 = *(undefined8 *)(param_5 + 0x3c);
                                uStack_dc = *(undefined8 *)(param_5 + 0x50);
                                lVar5 = *(long *)(param_5 + 0x30);
                                uStack_e8 = (undefined4)*(undefined8 *)(param_5 + 0x44);
                                uStack_e4 = (undefined4)*(undefined8 *)(param_5 + 0x48);
                                uStack_e0 = (undefined4)
                                            ((ulong)*(undefined8 *)(param_5 + 0x48) >> 0x20);
                                uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar3,&local_f0);
                                puVar4 = Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo;
                                if (lVar5 != 0) {
                                  FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                            
                                                  Unity_Services_Authentication_JwtDecoder_TypeInfo,
                                               uVar6,0);
                                  local_f4 = *(undefined4 *)(param_5 + 0x98);
                                  lVar5 = *(long *)(param_5 + 0x30);
                                  uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar4,&local_f4);
                                  if (lVar5 != 0) {
                                    FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                                
                                                  Unity_Services_Authentication_PlayerAccounts_JwtDecoder_TypeInfo
                                                 ,uVar6,0);
                                    local_f8[0] = FUN_057747e0(0xffffffff,1,param_5 + 0xb8,0);
                                    local_f8[0] = local_f8[0] & 1;
                                    lVar5 = *(long *)(param_5 + 0x30);
                                    uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x28),
                                                               local_f8);
                                    if (lVar5 != 0) {
                                      FUN_0537ab70(lVar5,*(undefined8 *)TMPro_KerningPair_TypeInfo,
                                                   uVar6,0);
                                      local_fc = *(undefined4 *)(param_5 + 0xb8);
                                      lVar5 = *plVar12;
                                      uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2,&local_fc);
                                      if (lVar5 != 0) {
                                        FUN_0537ab70(lVar5,*(undefined8 *)
                                                            UnityEngine_KeyCode_TypeInfo,uVar6,0);
                                        local_120 = *(undefined8 *)(param_5 + 0xbc);
                                        uStack_10c = *(undefined8 *)(param_5 + 0xd0);
                                        lVar5 = *(long *)(param_5 + 0x30);
                                        uStack_118 = (undefined4)*(undefined8 *)(param_5 + 0xc4);
                                        uStack_114 = (undefined4)*(undefined8 *)(param_5 + 200);
                                        uStack_110 = (undefined4)
                                                     ((ulong)*(undefined8 *)(param_5 + 200) >> 0x20)
                                        ;
                                        uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar3,&local_120)
                                        ;
                                        if (lVar5 != 0) {
                                          FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                                            
                                                  Mono_Security_Cryptography_KeyBuilder_TypeInfo,
                                                  uVar6,0);
                                          local_124 = *(undefined4 *)(param_5 + 0x118);
                                          lVar5 = *(long *)(param_5 + 0x30);
                                          uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar4,
                                                                     &local_124);
                                          if (lVar5 != 0) {
                                            FUN_0537ab70(lVar5,*(undefined8 *)Mtree_KDTree_TypeInfo,
                                                         uVar6,0);
                                            local_128[0] = *(undefined1 *)(param_5 + 0x188);
                                            lVar5 = *(long *)(param_5 + 0x30);
                                            uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                        (puVar1 + 0x28),local_128);
                                            puVar2 = 
                                            Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo
                                            ;
                                            if (lVar5 != 0) {
                                              FUN_0537ab70(lVar5,*(undefined8 *)
                                                                  Newtonsoft_Json_JsonToken_TypeInfo
                                                           ,uVar6,0);
                                              local_12c = *(undefined4 *)(param_5 + 0x138);
                                              lVar5 = *(long *)(param_5 + 0x30);
                                              uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2,
                                                                         &local_12c);
                                              if (lVar5 != 0) {
                                                FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                                                        
                                                  Newtonsoft_Json_JsonWriterException_TypeInfo,uVar6
                                                  ,0);
                                                local_130 = *(undefined4 *)(param_5 + 0x13c);
                                                lVar5 = *(long *)(param_5 + 0x30);
                                                uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                            (puVar1 + 0x50),
                                                                           &local_130);
                                                if (lVar5 != 0) {
                                                  FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Newtonsoft_Json_JsonSerializerSettings_TypeInfo,
                                                  uVar6,0);
                                                  local_134[0] = *(undefined1 *)(param_5 + 0x189);
                                                  lVar5 = *(long *)(param_5 + 0x30);
                                                  uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                              (puVar1 + 0x28),
                                                                             local_134);
                                                  if (lVar5 != 0) {
                                                    FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  UnityEngine_UIElements_KeyDownEvent_TypeInfo,uVar6
                                                  ,0);
                                                  local_138 = *(undefined4 *)(param_5 + 0x158);
                                                  lVar5 = *(long *)(param_5 + 0x30);
                                                  uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2,
                                                                             &local_138);
                                                  if (lVar5 != 0) {
                                                    FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  UnityEngine_InputForUI_KeyEvent_TypeInfo,uVar6,0);
                                                  local_13c = *(undefined4 *)(param_5 + 0x15c);
                                                  lVar5 = *(long *)(param_5 + 0x30);
                                                  uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                              (puVar1 + 0x50),
                                                                             &local_13c);
                                                  if (lVar5 != 0) {
                                                    FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  UnityEngine_InputSystem_Controls_KeyControl_TypeInfo
                                                  ,uVar6,0);
                                                  local_140[0] = *(undefined1 *)(param_5 + 0x18a);
                                                  lVar5 = *(long *)(param_5 + 0x30);
                                                  uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                              (puVar1 + 0x28),
                                                                             local_140);
                                                  if (lVar5 != 0) {
                                                    FUN_0537ab70(lVar5,*(undefined8 *)
                                                                        TMPro_KerningTable_TypeInfo,
                                                                 uVar6,0);
                                                    puVar2 = 
                                                  Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo
                                                  ;
                                                  if (*(long *)(param_5 + 0x178) != 0) {
                                                    local_144 = *(undefined4 *)
                                                                 (*(long *)(param_5 + 0x178) + 0x10)
                                                    ;
                                                    lVar5 = *(long *)(param_5 + 0x30);
                                                    uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                                                                                                                
                                                  Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo
                                                  ,&local_144);
                                                  if (lVar5 != 0) {
                                                    FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  Newtonsoft_Json_JsonTextReader_TypeInfo,uVar6,0);
                                                  if (*(long *)(param_5 + 0x178) != 0) {
                                                    local_148 = *(undefined4 *)
                                                                 (*(long *)(param_5 + 0x178) + 0x14)
                                                    ;
                                                    lVar5 = *(long *)(param_5 + 0x30);
                                                    uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                                (puVar1 + 0x50),
                                                                               &local_148);
                                                    if (lVar5 != 0) {
                                                      FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                                                                    
                                                  Mono_Security_Cryptography_KeyBuilder_TypeInfo,
                                                  uVar6,0);
                                                  local_14c[0] = *(undefined1 *)(param_5 + 0x18b);
                                                  lVar5 = *(long *)(param_5 + 0x30);
                                                  uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                              (puVar1 + 0x28),
                                                                             local_14c);
                                                  if (lVar5 != 0) {
                                                    FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  Newtonsoft_Json_Serialization_JsonTypeReflector_TypeInfo
                                                  ,uVar6,0);
                                                  if (*(long *)(param_5 + 0x180) != 0) {
                                                    local_150 = *(undefined4 *)
                                                                 (*(long *)(param_5 + 0x180) + 0x10)
                                                    ;
                                                    lVar5 = *(long *)(param_5 + 0x30);
                                                    uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2
                                                                               ,&local_150);
                                                    if (lVar5 != 0) {
                                                      FUN_0537ab70(lVar5,*(undefined8 *)
                                                                                                                                                    
                                                  System_Xml_Schema_KSStruct_TypeInfo,uVar6,0);
                                                  if (*(long *)(param_5 + 0x180) != 0) {
                                                    local_154 = *(undefined4 *)
                                                                 (*(long *)(param_5 + 0x180) + 0x14)
                                                    ;
                                                    lVar5 = *(long *)(param_5 + 0x30);
                                                    uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                                (puVar1 + 0x50),
                                                                               &local_154);
                                                    if (lVar5 != 0) {
                                                      FUN_0537ab70(lVar5,*(undefined8 *)
                                                                          Mtree_KDTreeNode_TypeInfo,
                                                                   uVar6,0);
                                                      puVar2 = 
                                                  Newtonsoft_Json_JsonSerializer_TypeInfo;
                                                  puVar1 = PTR_DAT_069fb990;
                                                  lVar5 = *(long *)(param_5 + 0x28);
                                                  if (lVar5 != 0) {
                                                    iVar13 = 0;
                                                    while (iVar13 < *(int *)(lVar5 + 0x18)) {
                                                      lVar5 = FUN_0400ff1c(lVar5,iVar13,
                                                                           *(undefined8 *)puVar2);
                                                      if (lVar5 == 0) goto LAB_057e8d60;
                                                      FUN_057e8df4();
                                                      if ((*(long *)(param_5 + 0x28) == 0) ||
                                                         (lVar5 = FUN_0400ff1c(*(long *)(param_5 +
                                                                                        0x28),iVar13
                                                                               ,*(undefined8 *)
                                                                                 puVar2), lVar5 == 0
                                                         )) goto LAB_057e8d60;
                                                      FUN_057e8e84(lVar5,plVar12);
                                                      lVar5 = *(long *)(param_5 + 0x28);
                                                      iVar13 = iVar13 + 1;
                                                      if (lVar5 == 0) goto LAB_057e8d60;
                                                    }
                                                    uVar6 = *(undefined8 *)(param_5 + 0x20);
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                    }
                                                    uVar11 = FUN_0634eb94(uVar6,0,0);
                                                    if ((uVar11 & 1) == 0) {
                                                      return;
                                                    }
                                                    plVar12 = *(long **)(param_5 + 0x30);
                                                    if (plVar12 != (long *)0x0) {
                                                      plVar9 = *(long **)(param_5 + 0x20);
                                                      uVar6 = (**(code **)(*plVar12 + 0x168))
                                                                        (plVar12,*(undefined8 *)
                                                                                  (*plVar12 + 0x170)
                                                                        );
                                                      if (plVar9 != (long *)0x0) {
                                                        (**(code **)(*plVar9 + 0x5e8))
                                                                  (plVar9,uVar6,
                                                                   *(undefined8 *)(*plVar9 + 0x5f0))
                                                        ;
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
                        goto LAB_057e8d60;
                      }
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
            }
          }
        }
      }
    }
  }
LAB_057e8d60:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


