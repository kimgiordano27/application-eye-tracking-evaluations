/*
FUNCTION_NAME: FUN_056fd3b4
ENTRY_POINT: 056fd3b4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056fd8c0) */
/* WARNING: Removing unreachable block (ram,0x056fd7b8) */

void FUN_056fd3b4(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  long local_198;
  long *plStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_168;
  undefined8 *local_160;
  long local_158;
  long *local_150;
  long **local_148;
  long *local_140;
  undefined8 *local_138;
  long local_130;
  long *plStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar2 = System_Threading_WaitHandle___TypeInfo;
  local_80 = param_1;
  local_78 = param_2;
  if ((DAT_06dbeb97 & 1) == 0) {
    FUN_02d965b8(UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo___TypeInfo);
    FUN_02d965b8(System_TimeZoneInfo_AdjustmentRule___TypeInfo);
    FUN_02d965b8(System_TimeZoneInfo_TZifType___TypeInfo);
    FUN_02d965b8(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
    FUN_02d965b8(Unity_Services_Lobbies_Models_TokenRequest_TokenTypeOptions___TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_UIRAtlasAllocator_Row___TypeInfo);
    FUN_02d965b8(UnityEngine_Vector4___TypeInfo);
    FUN_02d965b8(System_Globalization_UmAlQuraCalendar_DateMapping___TypeInfo);
    FUN_02d965b8(Mono_Unity_UnityTls_unitytls_ciphersuite___TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_Vertex___TypeInfo);
    FUN_02d965b8(System_Net_WebHeaderCollection_RfcChar___TypeInfo);
    FUN_02d965b8(PTR_DAT_06a00f70);
    FUN_02d965b8(System_Data_XDRSchema_NameType___TypeInfo);
    FUN_02d965b8(MS_Internal_Xml_XPath_Operator_Op___TypeInfo);
    FUN_02d965b8(System_Data_XSDSchema_NameType___TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XdrBuilder_XdrAttributeEntry___TypeInfo);
    FUN_02d965b8(System_Threading_WaitHandle___TypeInfo);
    FUN_02d965b8(UnityEngine_TextCore_Text_WordInfo___TypeInfo);
    DAT_06dbeb97 = 1;
  }
  local_150 = &local_a0;
  local_140 = &local_a8;
  local_158 = 0;
  local_148 = &local_100;
  local_138 = &local_80;
  local_b0 = 0;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
                    /* try { // try from 056fd504 to 057fd56f has its CatchHandler @ 056fd504
                       catch() { ... } // from try @ 056fd504 with catch @ 056fd504
                       catch() { ... } // from try @ 056fd5e0 with catch @ 056fd504
                       catch() { ... } // from try @ 056fd62c with catch @ 056fd504
                       catch() { ... } // from try @ 056fd668 with catch @ 056fd504
                       catch() { ... } // from try @ 056fd69c with catch @ 056fd504 */
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_100 = (long *)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  plStack_128 = (long *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  plStack_98 = (long *)0x0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_056fd9c4(&local_198,0x9b83c86,param_1,(long)(int)param_2);
  uVar12 = local_80;
  plStack_98 = plStack_190;
  local_a0 = local_198;
  local_88 = uStack_180;
  uStack_90 = local_188;
  uVar8 = FUN_0376a080(local_80,&uStack_b8,
                       *(undefined8 *)System_Xml_Schema_XdrBuilder_XdrAttributeEntry___TypeInfo);
  puVar2 = System_Globalization_UmAlQuraCalendar_DateMapping___TypeInfo;
  if ((uVar8 & 1) != 0) {
                    /* try { // try from 056fd570 to 057fd5ab has its CatchHandler @ 056fd638 */
    local_198 = 0;
    FUN_043301b0(&local_198,local_78 & 0xffffffff,
                 *(undefined8 *)System_Globalization_UmAlQuraCalendar_DateMapping___TypeInfo);
    local_a8 = local_198;
    if (-1 < (int)local_78) {
      if (*(int *)(*(long *)MS_Internal_Xml_XPath_Operator_Op___TypeInfo + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
                    /* try { // try from 056fd5b4 to 057fd5bf has its CatchHandler @ 056fd634 */
                    /* try { // try from 056fd5c4 to 057fd5c7 has its CatchHandler @ 056fd62c */
      bVar6 = FUN_0336f1c4(&uStack_b8,&local_c0,
                           *(undefined8 *)System_Data_XDRSchema_NameType___TypeInfo);
                    /* try { // try from 056fd5d0 to 057fd5df has its CatchHandler @ 056fd630 */
      if ((bVar6 & local_c0 != (long *)0x0) == 0) {
        local_198 = 0;
        FUN_043301b0(&local_198,0xfffffc10,*(undefined8 *)puVar2);
      }
      else {
                    /* try { // try from 056fd5e0 to 057fd623 has its CatchHandler @ 056fd504 */
        if (*(int *)(*(long *)PTR_DAT_06a00f70 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar8 = FUN_0577ef1c(uVar12,&local_d0,2,0);
        if ((uVar8 & 1) != 0) {
          local_160 = &local_e0;
          local_168 = 0;
          uStack_d8 = uStack_c8;
          local_e0 = local_d0;
                    /* try { // try from 056fd624 to 057fd627 has its CatchHandler @ 056fd634 */
          if ((char)local_a0 != '\0') {
                    /* try { // try from 056fd628 to 057fd62b has its CatchHandler @ 056fd630 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 056fd5c4 with catch @ 056fd62c
                       try { // try from 056fd62c to 057fd64f has its CatchHandler @ 056fd504 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 056fd5d0 with catch @ 056fd630
                       catch(type#1 @ 066567d8) { ... } // from try @ 056fd628 with catch @ 056fd630
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 056fd5b4 with catch @ 056fd634
                       catch(type#1 @ 066567d8) { ... } // from try @ 056fd624 with catch @ 056fd634
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 056fd570 with catch @ 056fd638
                        */
            uStack_f8 = uStack_90;
            local_100 = plStack_98;
            local_f0 = local_88;
                    /* try { // try from 056fd650 to 057fd667 has its CatchHandler @ 056fd694 */
            FUN_057cdbf8(&local_198,&local_100,
                         *(undefined8 *)UnityEngine_TextCore_Text_WordInfo___TypeInfo,
                         (long)(int)uStack_c8,0);
          }
                    /* try { // try from 056fd668 to 057fd683 has its CatchHandler @ 056fd504 */
          FUN_042a00e8(&local_198,&local_d0,
                       *(undefined8 *)UnityEngine_UIElements_UIRAtlasAllocator_Row___TypeInfo);
          puVar4 = System_TimeZoneInfo_AdjustmentRule___TypeInfo;
          puVar3 = OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo;
          uStack_108 = uStack_170;
          uStack_110 = local_178;
                    /* try { // try from 056fd684 to 057fd693 has its CatchHandler @ 056fd694 */
          plStack_128 = plStack_190;
          plVar11 = plStack_128;
          local_130 = local_198;
          local_118 = uStack_180;
          local_120._0_4_ = (int)local_188;
                    /* catch() { ... } // from try @ 056fd650 with catch @ 056fd694
                       catch() { ... } // from try @ 056fd684 with catch @ 056fd694 */
          plStack_128._0_4_ = (int)plStack_190;
                    /* try { // try from 056fd698 to 057fd69b has its CatchHandler @ 056fd6a4 */
          local_198 = 0;
                    /* try { // try from 056fd69c to 057fd6a7 has its CatchHandler @ 056fd504 */
          iVar14 = (int)local_120 + 1;
          lVar9 = *(long *)System_TimeZoneInfo_AdjustmentRule___TypeInfo;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 056fd698 with catch @ 056fd6a4
                        */
          local_120._4_4_ = (undefined4)((ulong)local_188 >> 0x20);
          local_120 = CONCAT44(local_120._4_4_,iVar14);
          bVar1 = iVar14 < (int)plStack_128;
          plStack_190 = &local_130;
          plStack_128 = plVar11;
          if (bVar1) {
            do {
              lVar5 = local_130;
              if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18();
              }
              plVar11 = local_c0;
              puVar10 = (undefined8 *)(lVar5 + (long)iVar14 * 0x18);
              uVar12 = puVar10[2];
              uVar17 = puVar10[1];
              uVar15 = *puVar10;
              local_118 = uVar15;
              uStack_110 = uVar17;
              uStack_108 = uVar12;
              if (local_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar9 = *local_c0;
              uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar8 != 0) {
                piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    puVar10 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                    goto LAB_056fd74c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 != 0);
              }
              puVar10 = (undefined8 *)FUN_02dd004c(local_c0,*(long *)puVar3,2);
LAB_056fd74c:
              local_70 = uVar15;
              uStack_68 = uVar17;
              local_60 = uVar12;
              (*(code *)*puVar10)(plVar11,&local_70,puVar10[1]);
              iVar14 = (int)local_120 + 1;
              lVar9 = *(long *)puVar4;
              local_120 = CONCAT44(local_120._4_4_,iVar14);
              bVar1 = iVar14 < (int)plStack_128;
            } while (bVar1);
          }
          local_118 = 0;
          uStack_110 = 0;
          uStack_108 = 0;
          FUN_05191da8(&local_130,
                       *(undefined8 *)UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo___TypeInfo)
          ;
          local_198 = 0;
          FUN_043301b0(&local_198,local_78 & 0xffffffff,*(undefined8 *)puVar2);
          local_a8 = local_198;
          FUN_0429fd68(local_160,
                       *(undefined8 *)
                        Unity_Services_Lobbies_Models_TokenRequest_TokenTypeOptions___TypeInfo);
          if (local_168 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96858();
          }
          goto LAB_056fd82c;
        }
        local_198 = 0;
        FUN_043301b0(&local_198,0xfffffc12,*(undefined8 *)puVar2);
      }
      local_a8 = local_198;
    }
  }
LAB_056fd82c:
  if ((char)*local_150 != '\0') {
    plVar16 = (long *)local_150[1];
    plVar11 = (long *)local_150[3];
    local_148[1] = (long *)local_150[2];
    *local_148 = plVar16;
    local_148[2] = plVar11;
    FUN_057ccbb8(&local_198,local_148,0);
  }
  puVar2 = System_Data_XSDSchema_NameType___TypeInfo;
  if ((char)*local_140 != '\0') {
    uVar12 = *local_138;
    uVar7 = FUN_043301c8(local_140,*(undefined8 *)System_Net_WebHeaderCollection_RfcChar___TypeInfo)
    ;
    FUN_03769ac4(uVar12,uVar7,*(undefined8 *)puVar2);
  }
  if (local_158 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


