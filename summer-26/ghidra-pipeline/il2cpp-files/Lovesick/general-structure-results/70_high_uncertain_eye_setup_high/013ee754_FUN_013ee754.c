/*
FUNCTION_NAME: FUN_013ee754
ENTRY_POINT: 013ee754
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


void FUN_013ee754(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 local_c8;
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
  long local_68;
  
  if ((DAT_03776883 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(OVR_OpenVR_IVRResources__GetResourceFullPath_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13354);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5290);
    thunk_FUN_00d48444(PTR_DAT_033f20c0);
    thunk_FUN_00d48444(PTR_DAT_033f2ef8);
    thunk_FUN_00d48444(StringLiteral_1333);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SimpleTuple<Face,_Edge>>__ctor__);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass9_0_TypeInfo);
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
    DAT_03776883 = 1;
  }
  puVar8 = StringLiteral_13354;
  puVar1 = (undefined8 *)StringLiteral_1333;
  puVar7 = Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__;
  puVar6 = Method_Newtonsoft_Json_Linq_JsonLoadSettings_set_DuplicatePropertyNameHandling__;
  puVar5 = 
  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
  puVar4 = DG_Tweening_ShortcutExtensions_<>c__DisplayClass9_0_TypeInfo;
  puVar3 = Newtonsoft_Json_Linq_JToken_TypeInfo;
  puVar2 = PTR_DAT_033f0ac8;
  local_c8 = 0;
  local_c0 = 0.0;
  local_80 = 0.0;
  local_78 = 0.0;
  local_90 = 0.0;
  local_88 = 0.0;
  local_a0 = 0.0;
  local_98 = 0.0;
  local_b0 = 0.0;
  local_a8 = 0.0;
  local_b8 = 0.0;
  lVar16 = *(long *)(param_1 + 0x58);
  if (lVar16 != 0) {
    iVar11 = 0;
    while (lVar16 = *(long *)(lVar16 + 0x98), lVar16 != 0) {
      if (*(int *)(lVar16 + 0x18) <= iVar11) {
        plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if (((plVar12 != (long *)0x0) && (FUN_0160aa4c(plVar12,0), *(long *)(param_1 + 0x58) != 0))
           && (plVar13 = (long *)FUN_013eae18(), plVar13 != (long *)0x0)) {
          lVar16 = *plVar13;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 == 0) goto LAB_013eeb4c;
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_013eeb34;
        }
        break;
      }
      FUN_0132138c(lVar16,iVar11,&local_68,*(undefined8 *)puVar8);
      dVar10 = local_78;
      if (((local_68 == 0) || (lVar16 = *(long *)(local_68 + 0x10), lVar16 == 0)) ||
         (*(long *)(lVar16 + 0x90) == 0)) break;
      local_c8 = FUN_02040648(*(long *)(lVar16 + 0x90),0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      local_78 = (double)FUN_01788a00(&local_c8,0);
      dVar9 = local_80;
      local_78 = dVar10 + local_78;
      if (*(long *)(lVar16 + 0x98) == 0) break;
      local_c8 = FUN_02040648(*(long *)(lVar16 + 0x98),0);
      local_80 = (double)FUN_01788a00(&local_c8,0);
      dVar10 = local_a8;
      local_80 = dVar9 + local_80;
      if (*(long *)(lVar16 + 0xa0) == 0) break;
      local_c8 = FUN_02040648(*(long *)(lVar16 + 0xa0),0);
      local_a8 = (double)FUN_01788a00(&local_c8,0);
      dVar9 = local_88;
      local_a8 = dVar10 + local_a8;
      if (*(long *)(lVar16 + 0xc0) == 0) break;
      local_c8 = FUN_02040648(*(long *)(lVar16 + 0xc0),0);
      local_88 = (double)FUN_01788a00(&local_c8,0);
      dVar10 = local_90;
      local_88 = dVar9 + local_88;
      if (*(long *)(lVar16 + 200) == 0) break;
      local_c8 = FUN_02040648(*(long *)(lVar16 + 200),0);
      local_90 = (double)FUN_01788a00(&local_c8,0);
      dVar9 = local_98;
      local_90 = dVar10 + local_90;
      if (*(long *)(lVar16 + 0xd0) == 0) break;
      local_c8 = FUN_02040648(*(long *)(lVar16 + 0xd0),0);
      local_98 = (double)FUN_01788a00(&local_c8,0);
      dVar10 = local_a0;
      local_98 = dVar9 + local_98;
      if (*(long *)(lVar16 + 0xd8) == 0) break;
      local_c8 = FUN_02040648(*(long *)(lVar16 + 0xd8),0);
      local_a0 = (double)FUN_01788a00(&local_c8,0);
      dVar9 = local_b0;
      local_a0 = dVar10 + local_a0;
      if (*(long *)(lVar16 + 0xe0) == 0) break;
      local_c8 = FUN_02040648(*(long *)(lVar16 + 0xe0),0);
      local_b0 = (double)FUN_01788a00(&local_c8,0);
      dVar10 = local_b8;
      local_b0 = dVar9 + local_b0;
      if (*(long *)(lVar16 + 0xe8) == 0) break;
      local_c8 = FUN_02040648(*(long *)(lVar16 + 0xe8),0);
      local_b8 = (double)FUN_01788a00(&local_c8,0);
      dVar9 = local_c0;
      local_b8 = dVar10 + local_b8;
      if (*(long *)(lVar16 + 0xf0) == 0) break;
      local_c8 = FUN_02040648(*(long *)(lVar16 + 0xf0),0);
      local_c0 = (double)FUN_01788a00(&local_c8,0);
      local_c0 = dVar9 + local_c0;
      lVar16 = *(long *)(param_1 + 0x58);
      iVar11 = iVar11 + 1;
      if (lVar16 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_013eeb34:
    if (*(long *)(piVar18 + -2) == *(long *)puVar7) {
      puVar14 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x2c) * 0x10 + 0x138);
      goto LAB_013eeb6c;
    }
  }
LAB_013eeb4c:
  puVar14 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar7,0x2c);
LAB_013eeb6c:
  iVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  if (iVar11 != 1) {
    puVar1 = (undefined8 *)puVar2;
  }
  uVar15 = FUN_015f5b28(*(undefined8 *)puVar6,*puVar1,0);
  FUN_0160c8e8(plVar12,uVar15,0);
  uVar15 = FUN_01756270(&local_78,0);
  uVar15 = FUN_015f5b28(*(undefined8 *)puVar4,uVar15,0);
  FUN_0160c8e8(plVar12,uVar15,0);
  uVar15 = FUN_01756270(&local_80,0);
  uVar15 = FUN_015f5b28(*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_get_Current__
                        ,uVar15,0);
  FUN_0160c8e8(plVar12,uVar15,0);
  uVar15 = FUN_01756270(&local_a8,0);
  uVar15 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033f5290,uVar15,0);
  FUN_0160c8e8(plVar12,uVar15,0);
  uVar15 = FUN_01756270(&local_88,0);
  uVar15 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033f2ef8,uVar15,0);
  FUN_0160c8e8(plVar12,uVar15,0);
  uVar15 = FUN_01756270(&local_90,0);
  uVar15 = FUN_015f5b28(*(undefined8 *)System_Dynamic_IDynamicMetaObjectProvider_var,uVar15,0);
  FUN_0160c8e8(plVar12,uVar15,0);
  uVar15 = FUN_01756270(&local_98,0);
  uVar15 = FUN_015f5b28(*(undefined8 *)
                         Method_System_Collections_Generic_List<SimpleTuple<Face,_Edge>>__ctor__,
                        uVar15,0);
  FUN_0160c8e8(plVar12,uVar15,0);
  uVar15 = FUN_01756270(&local_a0,0);
  uVar15 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033f20c0,uVar15,0);
  FUN_0160c8e8(plVar12,uVar15,0);
  FUN_0160c8e8(plVar12,*(undefined8 *)PTR_DAT_033f6810,0);
  uVar15 = FUN_01756270(&local_b0,0);
  uVar15 = FUN_015f5b28(*(undefined8 *)System_Xml_Serialization_XmlNodeEventArgs_TypeInfo,uVar15,0);
  FUN_0160c8e8(plVar12,uVar15,0);
  uVar15 = FUN_01756270(&local_b8,0);
  uVar15 = FUN_015f5b28(*(undefined8 *)StringLiteral_11371,uVar15,0);
  FUN_0160c8e8(plVar12,uVar15,0);
  uVar15 = FUN_01756270(&local_c0,0);
  uVar15 = FUN_015f5b28(*(undefined8 *)OVRPlugin_Vector3f_var,uVar15,0);
  FUN_0160c8e8(plVar12,uVar15,0);
  uVar15 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)StringLiteral_302);
  }
  FUN_02660dac(uVar15,0);
  return;
}


