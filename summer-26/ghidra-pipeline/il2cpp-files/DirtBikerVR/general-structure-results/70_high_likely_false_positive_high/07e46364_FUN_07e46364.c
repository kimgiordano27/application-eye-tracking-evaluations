/*
FUNCTION_NAME: FUN_07e46364
ENTRY_POINT: 07e46364
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07e46d28) */

void FUN_07e46364(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,long param_5
                 ,long *param_6,long *param_7,long *param_8,long *param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  uint uVar20;
  float fVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_bc [4];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  
  puVar9 = 
  Unity_Collections_AllocatorManager_StackAllocator_Try_000000AB_PostfixBurstDelegate_TypeInfo;
                    /* try { // try from 07e46370 to 07f4637b has its CatchHandler @ 07e464b8 */
                    /* try { // try from 07e46394 to 07f4639b has its CatchHandler @ 07e464a8 */
                    /* try { // try from 07e463a8 to 07f463c7 has its CatchHandler @ 07e464bc */
  local_68 = param_4;
  if ((DAT_0899a72c & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486be8);
    FUN_03a8a718(PTR_DAT_0848e8b0);
                    /* try { // try from 07e463c8 to 07f463d3 has its CatchHandler @ 07e464b0 */
    FUN_03a8a718(System_Xml_Schema_XdrBuilder_XdrEntry_TypeInfo);
                    /* try { // try from 07e463d8 to 07f463e3 has its CatchHandler @ 07e464ac */
    FUN_03a8a718(System_Xml_Schema_XdrBuilder_XdrInitFunction_TypeInfo);
    FUN_03a8a718(System_Xml_Schema_XmlAtomicValue_NamespacePrefixForQName_TypeInfo);
    FUN_03a8a718(System_Xml_XmlBaseReader_NamespaceManager_TypeInfo);
    FUN_03a8a718(System_Xml_XmlBaseReader_QuotaNameTable_TypeInfo);
                    /* try { // try from 07e46404 to 07f4640b has its CatchHandler @ 07e46460 */
    FUN_03a8a718(System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_Cursor_PropertyBag_DefaultCursorIdProperty_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_Cursor_PropertyBag_HotspotProperty_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_Cursor_PropertyBag_TextureProperty_TypeInfo);
    FUN_03a8a718(
                UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker_HierarchicalBindingsSorter_TypeInfo
                );
    FUN_03a8a718(System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
    FUN_03a8a718(System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo);
    FUN_03a8a718(
                Unity_Collections_AllocatorManager_StackAllocator_Try_000000AB_PostfixBurstDelegate_TypeInfo
                );
    DAT_0899a72c = 1;
  }
  lVar12 = *(long *)puVar9;
  local_b8 = 0;
  local_bc[0] = '\0';
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar12 = *(long *)puVar9;
  }
  local_a8 = local_bc;
  local_bc[0] = '\0';
  local_b0 = 0;
  local_b8 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x28);
  local_a0 = &local_b8;
  FUN_067b43ac(local_b8,local_bc,0);
  lVar12 = *(long *)puVar9;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar12 = *(long *)puVar9;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar12 = FUN_03c9bc30(lVar12,*(undefined8 *)
                                UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker_HierarchicalBindingsSorter_TypeInfo
                       );
  *param_6 = lVar12;
  thunk_FUN_03afed3c();
  lVar12 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x38);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar12 = FUN_03c9bc30(lVar12,*(undefined8 *)
                                UnityEngine_UIElements_Cursor_PropertyBag_HotspotProperty_TypeInfo);
  *param_7 = lVar12;
  thunk_FUN_03afed3c();
  lVar12 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x40);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar12 = FUN_03c9bc30(lVar12,*(undefined8 *)
                                UnityEngine_UIElements_Cursor_PropertyBag_DefaultCursorIdProperty_TypeInfo
                       );
  *param_8 = lVar12;
  thunk_FUN_03afed3c();
  lVar12 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x30);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar12 = FUN_03c9bc30(lVar12,*(undefined8 *)
                                UnityEngine_UIElements_Cursor_PropertyBag_TextureProperty_TypeInfo);
  *param_9 = lVar12;
  thunk_FUN_03afed3c();
  if (local_bc[0] != '\0') {
    thunk_FUN_03a98474(*local_a0,0);
  }
  if (param_5 != 0) {
    fVar27 = (float)FUN_07e06150(param_5,0);
    fVar28 = (float)FUN_07e051cc(param_5,0);
    if (*(long *)(param_5 + 0x2e8) != 0) {
      lVar12 = FUN_07d92780(*(long *)(param_5 + 0x2e8),0);
      if (lVar12 != 0) {
        cVar6 = *(char *)(lVar12 + 0x68);
        lVar12 = *(long *)(param_5 + 0x88);
        if (cVar6 == '\0') {
          if (lVar12 == 0) goto LAB_07e46d24;
          uVar20 = *(uint *)(lVar12 + 0x68) & 0xfffffffd;
        }
        else {
          if (lVar12 == 0) goto LAB_07e46d24;
          uVar20 = *(uint *)(lVar12 + 0x68) | 2;
        }
        *(uint *)(lVar12 + 0x68) = uVar20;
        puVar9 = System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo;
        if (param_3 != 0) {
          if (0 < (int)*(ulong *)(param_3 + 0x18)) {
            uVar22 = 0;
            uVar16 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
            fVar28 = 1.0 / fVar28;
            plVar24 = (long *)PTR_DAT_08486be8;
            do {
              if (uVar16 <= uVar22) {
LAB_07e46d20:
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              lVar17 = param_3 + uVar22 * 0x28;
              lVar12 = *(long *)(lVar17 + 0x28);
              uVar4 = *(undefined8 *)(lVar17 + 0x30);
              uVar20 = *(uint *)(lVar17 + 0x20);
              bVar7 = *(byte *)(lVar17 + 0x3c);
              iVar5 = *(int *)(lVar17 + 0x40);
              if (*(int *)(*plVar24 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07c502e0((uVar20 & 3) == 0,0);
              if (*(int *)(*(long *)System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo + 0xe4)
                  == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar10 = FUN_07e91890(0);
              if (0 < (int)uVar20) {
                lVar17 = lVar12 + 0x20;
                iVar2 = 0;
                do {
                  lVar13 = *param_6;
                  uVar3 = uVar20;
                  if ((int)(uVar10 & 0xfffffffc) <= (int)uVar20) {
                    uVar3 = uVar10 & 0xfffffffc;
                  }
                  if (lVar13 == 0) goto LAB_07e46d24;
                  lVar18 = *(long *)(lVar13 + 0x10);
                  lVar23 = *(long *)PTR_DAT_0848e8b0;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar18 == 0) goto LAB_07e46d24;
                  uVar11 = *(uint *)(lVar13 + 0x18);
                  if (uVar11 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar11 + 1;
                    puVar19 = (undefined8 *)(lVar18 + (long)(int)uVar11 * 8 + 0x20);
                    *puVar19 = uVar4;
                    thunk_FUN_03afed3c(puVar19);
                  }
                  else {
                    FUN_04de85b0(lVar13,uVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar13 = *param_9;
                  if (lVar13 == 0) goto LAB_07e46d24;
                  lVar18 = *(long *)(lVar13 + 0x10);
                  lVar23 = *(long *)System_Xml_Schema_XdrBuilder_XdrInitFunction_TypeInfo;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar18 == 0) goto LAB_07e46d24;
                  uVar11 = *(uint *)(lVar13 + 0x18);
                  if (uVar11 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar11 + 1;
                    *(int *)(lVar18 + (long)(int)uVar11 * 4 + 0x20) = iVar5;
                  }
                  else {
                    FUN_04d8e9d4(lVar13,iVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if ((bVar7 & 1) == 0 || cVar6 != '\0') {
                    uVar11 = 0;
                  }
                  else {
                    if (*(int *)(*(long *)System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo + 0xe4)
                        == 0) {
                      thunk_FUN_03ae8be4();
                    }
                    uVar16 = FUN_07e81b44(param_5,0);
                    if ((uVar16 & 1) == 0) {
                      uVar11 = 0;
                      if ((iVar5 != 0x1015) && (iVar5 != 0x11014)) {
                        if (*(int *)(*(long *)System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo +
                                    0xe4) == 0) {
                          thunk_FUN_03ae8be4();
                        }
                        uVar11 = FUN_07e838cc(param_5,0);
                      }
                    }
                    else {
                      uVar11 = 1;
                    }
                  }
                  FUN_07f67740(&local_68,uVar3,((int)uVar3 >> 2) * 6,&local_d0,&local_e0,0);
                  if (0 < (int)uVar3) {
                    uVar14 = 0x2000000;
                    if ((uVar11 & 1) == 0) {
                      uVar14 = 0;
                    }
                    if (lVar12 == 0) goto LAB_07e46d24;
                    iVar26 = 0;
                    iVar1 = 0;
                    do {
                      iVar15 = iVar1;
                      if (*(int *)(*(long *)System_Xml_XmlBaseReader_NamespaceManager_TypeInfo +
                                  0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      uVar11 = iVar2 + iVar15;
                      if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_07e46d20;
                      puVar19 = (undefined8 *)(lVar17 + (long)(int)uVar11 * 0x20);
                      local_a0._4_4_ = *(undefined4 *)((long)puVar19 + 0x14);
                      fVar25 = 255.0;
                      local_a8._0_4_ = 0;
                      local_98 = 0;
                      fVar21 = fVar25;
                      if (0.0 <= *(float *)((long)puVar19 + 0x1c)) {
                        fVar21 = 0.0;
                      }
                      local_8c = 0;
                      local_7c = 0;
                      local_84 = 0;
                      local_a8._4_4_ = (undefined4)*(undefined8 *)((long)puVar19 + 0xc);
                      local_a0._0_4_ =
                           (undefined4)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20);
                      local_74 = 0;
                      local_b0 = CONCAT44(param_2 + (float)((ulong)*puVar19 >> 0x20) * fVar28,
                                          fVar27 + (float)*puVar19 * fVar28);
                      local_90 = uVar14 | (int)fVar21 << 8;
                      FUN_05269014(&local_d0,iVar15,&local_b0,*(undefined8 *)puVar9);
                      if (*(uint *)(lVar12 + 0x18) <= uVar11 + 1) goto LAB_07e46d20;
                      puVar19 = (undefined8 *)(lVar17 + (long)(iVar2 + iVar15 + 1) * 0x20);
                      local_a0._4_4_ = *(undefined4 *)((long)puVar19 + 0x14);
                      local_a8._0_4_ = 0;
                      local_98 = 0;
                      if (0.0 <= *(float *)((long)puVar19 + 0x1c)) {
                        fVar25 = 0.0;
                      }
                      local_8c = 0;
                      local_7c = 0;
                      local_84 = 0;
                      local_a8._4_4_ = (undefined4)*(undefined8 *)((long)puVar19 + 0xc);
                      local_a0._0_4_ =
                           (undefined4)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20);
                      local_74 = 0;
                      local_b0 = CONCAT44(param_2 + (float)((ulong)*puVar19 >> 0x20) * fVar28,
                                          fVar27 + (float)*puVar19 * fVar28);
                      local_90 = uVar14 | (int)fVar25 << 8;
                      FUN_05269014(&local_d0,iVar15 + 1,&local_b0,*(undefined8 *)puVar9);
                      if (*(uint *)(lVar12 + 0x18) <= uVar11 + 2) goto LAB_07e46d20;
                      iVar1 = iVar15 + 2;
                      puVar19 = (undefined8 *)(lVar17 + (long)(iVar2 + iVar15 + 2) * 0x20);
                      local_a0._4_4_ = *(undefined4 *)((long)puVar19 + 0x14);
                      fVar21 = 255.0;
                      local_a8._0_4_ = 0;
                      local_98 = 0;
                      if (0.0 <= *(float *)((long)puVar19 + 0x1c)) {
                        fVar21 = 0.0;
                      }
                      local_8c = 0;
                      local_7c = 0;
                      local_84 = 0;
                      local_a8._4_4_ = (undefined4)*(undefined8 *)((long)puVar19 + 0xc);
                      local_a0._0_4_ =
                           (undefined4)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20);
                      local_74 = 0;
                      local_b0 = CONCAT44(param_2 + (float)((ulong)*puVar19 >> 0x20) * fVar28,
                                          fVar27 + (float)*puVar19 * fVar28);
                      local_90 = uVar14 | (int)fVar21 << 8;
                      FUN_05269014(&local_d0,iVar1,&local_b0,*(undefined8 *)puVar9);
                      if (*(uint *)(lVar12 + 0x18) <= uVar11 + 3) goto LAB_07e46d20;
                      puVar19 = (undefined8 *)(lVar17 + (long)(iVar2 + iVar15 + 3) * 0x20);
                      fVar21 = 255.0;
                      local_a0._4_4_ = *(undefined4 *)((long)puVar19 + 0x14);
                      local_a8._0_4_ = 0;
                      local_98 = 0;
                      if (0.0 <= *(float *)((long)puVar19 + 0x1c)) {
                        fVar21 = 0.0;
                      }
                      local_8c = 0;
                      local_7c = 0;
                      local_84 = 0;
                      local_a8._4_4_ = (undefined4)*(undefined8 *)((long)puVar19 + 0xc);
                      local_a0._0_4_ =
                           (undefined4)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20);
                      local_74 = 0;
                      local_b0 = CONCAT44(param_2 + (float)((ulong)*puVar19 >> 0x20) * fVar28,
                                          fVar27 + (float)*puVar19 * fVar28);
                      local_90 = uVar14 | (int)fVar21 << 8;
                      FUN_05269014(&local_d0,iVar15 + 3,&local_b0,*(undefined8 *)puVar9);
                      puVar8 = System_Xml_XmlBaseReader_QuotaNameTable_TypeInfo;
                      FUN_05267f5c(&local_e0,iVar26,iVar15,
                                   *(undefined8 *)System_Xml_XmlBaseReader_QuotaNameTable_TypeInfo);
                      FUN_05267f5c(&local_e0,iVar26 + 1,iVar15 + 1,*(undefined8 *)puVar8);
                      FUN_05267f5c(&local_e0,iVar26 + 2,iVar1,*(undefined8 *)puVar8);
                      FUN_05267f5c(&local_e0,iVar26 + 3,iVar1,*(undefined8 *)puVar8);
                      FUN_05267f5c(&local_e0,iVar26 + 4,iVar15 + 3,*(undefined8 *)puVar8);
                      FUN_05267f5c(&local_e0,iVar26 + 5,iVar15,*(undefined8 *)puVar8);
                      iVar26 = iVar26 + 6;
                      iVar1 = iVar15 + 4;
                    } while (iVar15 + 4 < (int)uVar3);
                    iVar2 = iVar2 + iVar15 + 4;
                  }
                  lVar13 = *param_7;
                  if (lVar13 == 0) goto LAB_07e46d24;
                  lVar18 = *(long *)(lVar13 + 0x10);
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar18 == 0) goto LAB_07e46d24;
                  uVar11 = *(uint *)(lVar13 + 0x18);
                  if (uVar11 < *(uint *)(lVar18 + 0x18)) {
                    lVar18 = lVar18 + (long)(int)uVar11 * 0x10;
                    *(uint *)(lVar13 + 0x18) = uVar11 + 1;
                    *(undefined8 *)(lVar18 + 0x20) = local_d0;
                    *(undefined8 *)(lVar18 + 0x28) = uStack_c8;
                  }
                  else {
                    FUN_04c5a634();
                  }
                  lVar13 = *param_8;
                  if (lVar13 == 0) goto LAB_07e46d24;
                  lVar18 = *(long *)(lVar13 + 0x10);
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar18 == 0) goto LAB_07e46d24;
                  uVar11 = *(uint *)(lVar13 + 0x18);
                  if (uVar11 < *(uint *)(lVar18 + 0x18)) {
                    lVar18 = lVar18 + (long)(int)uVar11 * 0x10;
                    *(uint *)(lVar13 + 0x18) = uVar11 + 1;
                    *(undefined8 *)(lVar18 + 0x20) = local_e0;
                    *(undefined8 *)(lVar18 + 0x28) = uStack_d8;
                  }
                  else {
                    FUN_04c57d90();
                  }
                  uVar20 = uVar20 - uVar3;
                } while (0 < (int)uVar20);
              }
              plVar24 = (long *)PTR_DAT_08486be8;
              if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07c502e0(uVar20 == 0,0);
              uVar16 = (ulong)*(uint *)(param_3 + 0x18);
              uVar22 = uVar22 + 1;
            } while ((long)uVar22 < (long)(int)*(uint *)(param_3 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_07e46d24:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


