/*
FUNCTION_NAME: FUN_03696830
ENTRY_POINT: 03696830
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 135
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
FUN_03696830(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulong local_140;
  undefined4 uStack_138;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  ulong local_e0 [4];
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_04833ef5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRSpaceQuery_Options_ValidateSingleFilter__);
    thunk_FUN_01efb3a4(Method_OVRSpaceQuery_Options_set_UuidFilter__);
    thunk_FUN_01efb3a4(Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__);
    thunk_FUN_01efb3a4(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    thunk_FUN_01efb3a4(Method_OVRSpatialAnchor_LoadOptions_set_Uuids__);
    thunk_FUN_01efb3a4(Method_OVRSpatialAnchor_UnboundAnchor_BindTo__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_RectiPair_get_Item__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    DAT_04833ef5 = 1;
  }
  local_70 = 0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_e0[2] = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_e8 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  local_98 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_c0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_a0 = param_4;
  thunk_FUN_01f51358(&local_a0,param_4);
  FUN_03695c0c(&local_1a0,param_4);
  puVar1 = Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__;
  uVar13 = CONCAT44(uStack_190,uStack_194);
  local_c0 = local_1a0;
  uStack_a4 = 0x7f800000;
  plVar10 = *(long **)(param_4 + 0x138);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__
           ) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03696998;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__,0);
LAB_03696998:
    iVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_036969f8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,1);
LAB_036969f8:
    puVar1 = Method_OVRPlugin_RectiPair_get_Item__;
    uVar12 = (*(code *)*puVar6)(plVar10,iVar5 + -1,puVar6[1]);
    local_98 = 0;
    thunk_FUN_01f51358(&local_98,0);
    if (DAT_0482ee19 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee19 = '\x01';
    }
    puVar2 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
    lVar7 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
    uStack_198 = 0;
    uStack_194 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    local_180 = 0;
    FUN_03694ee0(uVar12,uVar13,param_3,*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                 *(undefined4 *)(lVar7 + 0x20),0,&local_1a0,0);
    uStack_88 = CONCAT44(uStack_194,uStack_198);
    uStack_78 = CONCAT44(uStack_184,uStack_188);
    uStack_80 = CONCAT44(uStack_18c,uStack_190);
    local_90 = local_1a0;
    local_70 = local_180;
    thunk_FUN_01f51358(&local_90,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar11 = *(long *)puVar2;
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
    plVar10 = (long *)**(long **)(lVar7 + 0xb8);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x198))(&local_140,plVar10,param_4,*(undefined8 *)(*plVar10 + 0x1a0));
      local_e0[0] = local_140;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      puVar1 = Method_OVRSpatialAnchor_LoadOptions_set_Uuids__;
      FUN_0407bc90(&local_140,0);
      uStack_f8 = uStack_138;
      local_100 = local_140;
      plVar10 = *(long **)(param_4 + 0x128);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03696be4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar10,*(long *)
                                       Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__
                              ,0);
LAB_03696be4:
        (*(code *)*puVar6)(plVar10,&local_100,puVar6[1]);
      }
      puVar4 = Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__;
      puVar3 = Method_OVRSpaceQuery_Options_set_UuidFilter__;
      puVar2 = Method_OVRSpaceQuery_Options_ValidateSingleFilter__;
      FUN_02f4400c(&local_1a0,local_e0,*(undefined8 *)puVar1);
      uStack_118 = CONCAT44(uStack_194,uStack_198);
      uStack_108 = CONCAT44(uStack_184,uStack_188);
      uStack_110 = CONCAT44(uStack_18c,uStack_190);
      local_120 = local_1a0;
      while( true ) {
        uVar8 = FUN_02cea124(&local_120,*(undefined8 *)puVar3);
        if ((uVar8 & 1) == 0) {
          FUN_02cea3c0(&local_120,*(undefined8 *)puVar2);
          FUN_02f4400c(&local_1a0,local_e0,*(undefined8 *)puVar1);
          uStack_118 = CONCAT44(uStack_194,uStack_198);
          uStack_108 = CONCAT44(uStack_184,uStack_188);
          uStack_110 = CONCAT44(uStack_18c,uStack_190);
          local_120 = local_1a0;
          while( true ) {
            uVar8 = FUN_02cea124(&local_120,*(undefined8 *)puVar3);
            if ((uVar8 & 1) == 0) {
              FUN_02cea3c0(&local_120,*(undefined8 *)puVar2);
              memcpy(&local_1a0,&local_c0,0x58);
              *(undefined8 *)(param_4 + 0x150) = uStack_168;
              *(undefined8 *)(param_4 + 0x148) = local_170;
              *(undefined8 *)(param_4 + 0x160) = uStack_158;
              *(undefined8 *)(param_4 + 0x158) = uStack_160;
              *(undefined8 *)(param_4 + 0x168) = local_150;
              thunk_FUN_01f51358((undefined8 *)(param_4 + 0x148),0);
              return local_98;
            }
            lVar7 = FUN_02ce9fe0(&local_120,*(undefined8 *)puVar4);
            if (lVar7 == 0) break;
            if (*(char *)(lVar7 + 0xb0) != '\0') {
              FUN_03697024(param_4,lVar7,&local_c0);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = FUN_02ce9fe0(&local_120,*(undefined8 *)puVar4);
        if (lVar7 == 0) break;
        if (*(char *)(lVar7 + 0xb0) == '\0') {
          if (*(long *)(param_4 + 0x128) != 0) {
            FUN_03696e28(local_100 & 0xffffffff,local_100._4_4_,uStack_f8,param_4,lVar7,&local_c0);
          }
          FUN_03697024(param_4,lVar7,&local_c0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


