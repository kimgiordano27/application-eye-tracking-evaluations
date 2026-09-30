/*
FUNCTION_NAME: FUN_01a97884
ENTRY_POINT: 01a97884
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x01a97d44) */
/* WARNING: Removing unreachable block (ram,0x01a97cd4) */
/* WARNING: Removing unreachable block (ram,0x01a97d04) */
/* WARNING: Removing unreachable block (ram,0x01a97d4c) */

void FUN_01a97884(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 *puStack_150;
  undefined8 *local_148;
  undefined8 *puStack_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
  ;
  local_78 = param_1;
  local_70 = param_2;
  if ((DAT_0377cd4b & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Security_Cryptography_RandomNumberGenerator_GetBytes__);
    thunk_FUN_00d48444(OVRPlugin_BoneCapsule___TypeInfo);
    thunk_FUN_00d48444(FullSerializer_Internal_fsForwardConverter_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f2370);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f5bf8);
    thunk_FUN_00d48444(Method_System_String_Replace__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<List<List<STMTextInfo>>>_get_Item__);
    thunk_FUN_00d48444(Method_System_Data_DataColumn_set_Prefix__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubw_high_s16__);
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Volume>_ToArray__);
    thunk_FUN_00d48444(StringLiteral_4331);
    thunk_FUN_00d48444(Method_System_Xml_Schema_Datatype_QNameXdr_ParseValue__);
    thunk_FUN_00d48444(DG_Tweening_Core_DOTweenSettings_ModulesSetup_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_Add__);
    DAT_0377cd4b = 1;
  }
  puStack_150 = &local_a0;
  local_148 = &local_100;
  puStack_140 = &local_a8;
  local_158 = 0;
  local_138 = &local_78;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  local_c0 = (long *)0x0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_100 = 0;
  local_a8 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01a97e80(&local_188,0x9b83c86,param_1,(long)(int)param_2);
  uVar7 = local_78;
  uStack_98 = uStack_180;
  local_a0 = local_188;
  uStack_88 = uStack_170;
  uStack_90 = local_178;
  uVar10 = FUN_0112d330(local_78,&local_b8,
                        *(undefined8 *)DG_Tweening_Core_DOTweenSettings_ModulesSetup_TypeInfo);
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_get_Current__;
  if ((uVar10 & 1) != 0) {
    local_188 = 0;
    local_190 = CONCAT44(local_190._4_4_,(int)local_70);
    FUN_01347274(&local_188,&local_190,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_get_Current__
                );
    local_a8 = local_188;
    if (-1 < (int)local_70) {
      if (*(int *)(*(long *)StringLiteral_4331 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_010a0568(&local_b8,&local_c0,
                           *(undefined8 *)Method_System_Collections_Generic_List<Volume>_ToArray__);
      if ((local_c0 == (long *)0x0) || (((uVar9 ^ 1) & 1) != 0)) {
        local_188 = 0;
        local_190 = CONCAT44(local_190._4_4_,0xfffffc10);
        FUN_01347274(&local_188,&local_190,*(undefined8 *)puVar4);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_033f02a8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_01b2bd64(uVar7,&local_d0,2,0);
        puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
        if ((uVar10 & 1) != 0) {
          uStack_d8 = uStack_c8;
          local_e0 = local_d0;
          lVar11 = *(long *)(*(long *)Method_System_Data_DataColumn_set_Prefix__ + 0x20);
          if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
            lVar11 = FUN_00d5941c();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
          if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
            lVar11 = FUN_00d5941c();
          }
          pcVar12 = (char *)thunk_FUN_00d32ed4(&local_a0,*(undefined8 *)(lVar11 + 0x80));
          if (*pcVar12 != '\0') {
            FUN_00c075a0(&local_188,&local_a0,*(undefined8 *)Method_System_String_Replace__);
            uStack_f8 = uStack_180;
            local_100 = local_188;
            local_f0 = local_178;
            FUN_01b7b498(&local_188,&local_100,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_Add__
                         ,(long)(int)uStack_c8,0,0);
          }
          FUN_01342ff4(&local_d0,&local_188,*(undefined8 *)PTR_DAT_033f5bf8);
          puVar6 = Method_System_Security_Cryptography_RandomNumberGenerator_GetBytes__;
          puVar3 = FullSerializer_Internal_fsForwardConverter_TypeInfo;
          puVar2 = OVRPlugin_BoneCapsule___TypeInfo;
          puVar1 = PTR_DAT_033f2370;
          uStack_128 = uStack_180;
          local_130 = local_188;
          uStack_118 = uStack_170;
          local_120 = local_178;
          uStack_108 = uStack_160;
          local_110 = local_168;
          while (uVar10 = FUN_00c092c4(&local_130,*(undefined8 *)puVar2), (uVar10 & 1) != 0) {
            FUN_00c09180(&local_188,&local_130,*(undefined8 *)puVar3);
            plVar8 = local_c0;
            uVar7 = local_188;
            if (local_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar11 = *local_c0;
            uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar10 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                  puVar13 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto LAB_01a97c4c;
                }
                uVar10 = uVar10 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_00d59724(local_c0,*(long *)puVar1,2);
LAB_01a97c4c:
            local_188 = uVar7;
            (*(code *)*puVar13)(plVar8,&local_188,puVar13[1]);
          }
          FUN_012b4c54(&local_130,*(undefined8 *)puVar6);
          local_190 = 0;
          local_64 = (int)local_70;
          FUN_01347274(&local_190,&local_64,*(undefined8 *)puVar4);
          local_a8 = local_190;
          FUN_01342a94(&local_e0,*(undefined8 *)puVar5);
          goto LAB_01a97d18;
        }
        local_188 = 0;
        local_190 = CONCAT44(local_190._4_4_,0xfffffc12);
        FUN_01347274(&local_188,&local_190,*(undefined8 *)puVar4);
      }
      local_a8 = local_188;
    }
  }
LAB_01a97d18:
  FUN_00c095c4(&local_158);
  return;
}


