/*
FUNCTION_NAME: FUN_013ea64c
ENTRY_POINT: 013ea64c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_013ea64c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_68;
  
  if ((DAT_03776867 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5290);
    thunk_FUN_00d48444(PTR_DAT_033f20c0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection<XmlQualifiedName,_SchemaEntity>_GetEnumerator__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f2ef8);
    thunk_FUN_00d48444(StringLiteral_1333);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SimpleTuple<Face,_Edge>>__ctor__);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass9_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ef200);
    thunk_FUN_00d48444(StringLiteral_14215);
    thunk_FUN_00d48444(OVRPlugin_Vector3f_var);
    thunk_FUN_00d48444(PTR_DAT_033f0ac8);
    thunk_FUN_00d48444(System_Dynamic_IDynamicMetaObjectProvider_var);
    thunk_FUN_00d48444(System_Xml_Serialization_XmlNodeEventArgs_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11371);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Linq_JsonLoadSettings_set_DuplicatePropertyNameHandling__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_get_Current__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f6810);
    DAT_03776867 = 1;
  }
  puVar2 = Newtonsoft_Json_Linq_JToken_TypeInfo;
  local_d8 = 0;
  local_d0 = 0.0;
  local_68 = 0.0;
  local_80 = 0.0;
  local_78 = 0.0;
  local_90 = 0.0;
  local_88 = 0.0;
  local_a0 = 0.0;
  local_98 = 0.0;
  local_b0 = 0.0;
  local_a8 = 0.0;
  local_c0 = 0.0;
  local_b8 = 0.0;
  local_c8 = 0.0;
  lVar17 = *(long *)(param_1 + 0x58);
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x90) != 0)) {
    local_d8 = FUN_02040648(*(long *)(lVar17 + 0x90),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    local_68 = (double)FUN_01788a00(&local_d8,0);
    local_68 = local_68 + 0.0;
    if (*(long *)(lVar17 + 0x98) != 0) {
      local_d8 = FUN_02040648(*(long *)(lVar17 + 0x98),0);
      local_78 = (double)FUN_01788a00(&local_d8,0);
      local_78 = local_78 + 0.0;
      if (*(long *)(lVar17 + 0xa0) != 0) {
        local_d8 = FUN_02040648(*(long *)(lVar17 + 0xa0),0);
        local_a0 = (double)FUN_01788a00(&local_d8,0);
        local_a0 = local_a0 + 0.0;
        if (*(long *)(lVar17 + 0xa8) != 0) {
          local_d8 = FUN_02040648(*(long *)(lVar17 + 0xa8),0);
          local_a8 = (double)FUN_01788a00(&local_d8,0);
          local_a8 = local_a8 + 0.0;
          if (*(long *)(lVar17 + 0xb0) != 0) {
            local_d8 = FUN_02040648(*(long *)(lVar17 + 0xb0),0);
            local_b0 = (double)FUN_01788a00(&local_d8,0);
            local_b0 = local_b0 + 0.0;
            if (*(long *)(lVar17 + 0xb8) != 0) {
              local_d8 = FUN_02040648(*(long *)(lVar17 + 0xb8),0);
              local_b8 = (double)FUN_01788a00(&local_d8,0);
              local_b8 = local_b8 + 0.0;
              if (*(long *)(lVar17 + 0xc0) != 0) {
                local_d8 = FUN_02040648(*(long *)(lVar17 + 0xc0),0);
                local_80 = (double)FUN_01788a00(&local_d8,0);
                local_80 = local_80 + 0.0;
                if (*(long *)(lVar17 + 200) != 0) {
                  local_d8 = FUN_02040648(*(long *)(lVar17 + 200),0);
                  local_88 = (double)FUN_01788a00(&local_d8,0);
                  local_88 = local_88 + 0.0;
                  if (*(long *)(lVar17 + 0xd0) != 0) {
                    local_d8 = FUN_02040648(*(long *)(lVar17 + 0xd0),0);
                    local_90 = (double)FUN_01788a00(&local_d8,0);
                    local_90 = local_90 + 0.0;
                    if (*(long *)(lVar17 + 0xd8) != 0) {
                      local_d8 = FUN_02040648(*(long *)(lVar17 + 0xd8),0);
                      local_98 = (double)FUN_01788a00(&local_d8,0);
                      local_98 = local_98 + 0.0;
                      if (*(long *)(lVar17 + 0xe0) != 0) {
                        local_d8 = FUN_02040648(*(long *)(lVar17 + 0xe0),0);
                        local_c0 = (double)FUN_01788a00(&local_d8,0);
                        local_c0 = local_c0 + 0.0;
                        if (*(long *)(lVar17 + 0xe8) != 0) {
                          local_d8 = FUN_02040648(*(long *)(lVar17 + 0xe8),0);
                          local_c8 = (double)FUN_01788a00(&local_d8,0);
                          puVar2 = 
                          Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                          ;
                          local_c8 = local_c8 + 0.0;
                          if (*(long *)(lVar17 + 0xf0) != 0) {
                            local_d8 = FUN_02040648(*(long *)(lVar17 + 0xf0),0);
                            local_d0 = (double)FUN_01788a00(&local_d8,0);
                            local_d0 = local_d0 + 0.0;
                            plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
                            if (plVar11 != (long *)0x0) {
                              FUN_0160aa4c(plVar11,0);
                              if ((*(long *)(param_1 + 0x58) != 0) &&
                                 (plVar12 = (long *)FUN_013eae18(), puVar9 = StringLiteral_11371,
                                 puVar1 = (undefined8 *)StringLiteral_1333,
                                 puVar8 = StringLiteral_302,
                                 puVar7 = 
                                 Method_Newtonsoft_Json_Linq_JsonLoadSettings_set_DuplicatePropertyNameHandling__
                                 , puVar6 = 
                                   Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_get_Current__
                                 , puVar5 = 
                                   DG_Tweening_ShortcutExtensions_<>c__DisplayClass9_0_TypeInfo,
                                 puVar4 = System_Xml_Serialization_XmlNodeEventArgs_TypeInfo,
                                 puVar3 = OVRPlugin_Vector3f_var, puVar2 = PTR_DAT_033f0ac8,
                                 plVar12 != (long *)0x0)) {
                                lVar17 = *plVar12;
                                uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
                                if (uVar15 != 0) {
                                  piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar16 + -2) ==
                                        *(long *)
                                         Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                                       ) {
                                      puVar13 = (undefined8 *)
                                                (lVar17 + (long)(*piVar16 + 0x2c) * 0x10 + 0x138);
                                      goto LAB_013eaabc;
                                    }
                                    uVar15 = uVar15 - 1;
                                    piVar16 = piVar16 + 4;
                                  } while (uVar15 != 0);
                                }
                                puVar13 = (undefined8 *)
                                          FUN_00d59724(plVar12,*(long *)
                                                  Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                                                  ,0x2c);
LAB_013eaabc:
                                iVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                                if (iVar10 != 1) {
                                  puVar1 = (undefined8 *)puVar2;
                                }
                                uVar14 = FUN_015f5b28(*(undefined8 *)puVar7,*puVar1,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_68,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)puVar5,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_78,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)puVar6,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_a0,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033f5290,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_a8,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)StringLiteral_14215,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_b0,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033ef200,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_b8,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary_ValueCollection<XmlQualifiedName,_SchemaEntity>_GetEnumerator__
                                                  ,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_80,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033f2ef8,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_88,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)
                                                       System_Dynamic_IDynamicMetaObjectProvider_var
                                                      ,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_90,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_List<SimpleTuple<Face,_Edge>>__ctor__
                                                  ,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_98,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033f20c0,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                FUN_0160c8e8(plVar11,*(undefined8 *)PTR_DAT_033f6810,0);
                                uVar14 = FUN_01756270(&local_c0,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)puVar4,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_c8,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)puVar9,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = FUN_01756270(&local_d0,0);
                                uVar14 = FUN_015f5b28(*(undefined8 *)puVar3,uVar14,0);
                                FUN_0160c8e8(plVar11,uVar14,0);
                                uVar14 = (**(code **)(*plVar11 + 0x168))
                                                   (plVar11,*(undefined8 *)(*plVar11 + 0x170));
                                if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                                  thunk_FUN_00d32864(*(long *)puVar8);
                                }
                                FUN_02660dac(uVar14,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


