/*
FUNCTION_NAME: FUN_01340790
ENTRY_POINT: 01340790
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01340790(long *param_1,undefined8 *****param_2,uint param_3,long param_4)

{
  undefined8 *****pppppuVar1;
  ushort uVar2;
  undefined *puVar3;
  byte bVar4;
  long ****pppplVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long ***ppplVar12;
  long ***ppplVar13;
  long *plVar14;
  uint uVar15;
  long ****pppplVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  byte bVar20;
  long *plVar21;
  long ****pppplVar22;
  undefined8 uVar23;
  long ****pppplVar24;
  uint uVar25;
  long **pplVar26;
  long *****ppppplVar27;
  long *****ppppplVar28;
  void *__s;
  long *****ppppplVar29;
  ulong __n;
  long ***local_c0;
  long local_b8;
  long local_b0;
  uint local_a4;
  ulong local_a0;
  long ****local_98;
  long *local_90;
  undefined8 ****local_88;
  long ****local_80;
  long ****local_78;
  long ****pppplStack_70;
  long *local_68;
  
  ppplVar12 = (long ***)tpidr_el0;
  local_68 = (long *)ppplVar12[5];
  local_a4 = param_3;
  local_88 = param_2;
  if ((DAT_037766f1 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(Method_System_Xml_XmlLoader_LoadDocumentType__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_44__);
    DAT_037766f1 = 1;
  }
  plVar21 = (long *)(param_4 + 0x20);
  lVar7 = *(long *)(*(long *)(*plVar21 + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0x28) < 0) {
    iVar6 = thunk_FUN_00d42afc();
    uVar15 = iVar6 - 0x10;
  }
  else {
    uVar15 = 8;
  }
  lVar7 = *(long *)(*(long *)(*plVar21 + 0xc0) + 0x40);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  local_90 = param_1;
  if (*(int *)(lVar7 + 0x28) < 0) {
    iVar6 = thunk_FUN_00d42afc();
    uVar25 = iVar6 - 0x10;
  }
  else {
    uVar25 = 8;
  }
  lVar7 = *(long *)(*(long *)(*plVar21 + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0x28) < 0) {
    uVar8 = thunk_FUN_00d42afc();
  }
  else {
    uVar8 = 0x18;
  }
  lVar17 = (long)&local_c0 - ((uVar8 & 0xffffffff) + 0xf & 0x1fffffff0);
  lVar7 = *(long *)(*(long *)(*plVar21 + 0xc0) + 0x40);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0x28) < 0) {
    uVar8 = thunk_FUN_00d42afc();
  }
  else {
    uVar8 = 0x18;
  }
  lVar18 = lVar17 - ((uVar8 & 0xffffffff) + 0xf & 0x1fffffff0);
  lVar7 = *(long *)(*(long *)(*plVar21 + 0xc0) + 0x28);
  local_b8 = lVar18;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0x28) < 0) {
    uVar8 = thunk_FUN_00d42afc();
  }
  else {
                    /* try { // try from 01340914 to 01440927 has its CatchHandler @ 01340c10 */
    uVar8 = 0x18;
  }
  local_b0 = lVar18 - ((uVar8 & 0xffffffff) + 0xf & 0x1fffffff0);
  __n = (ulong)uVar15;
  uVar8 = __n + 0xf & 0x1fffffff0;
  pppplVar22 = (long ****)(local_b0 - uVar8);
  pppplVar24 = (long ****)((long)pppplVar22 - uVar8);
                    /* try { // try from 01340960 to 0144098b has its CatchHandler @ 01340b44 */
  local_a0 = (ulong)uVar25;
  uVar19 = local_a0 + 0xf & 0x1fffffff0;
  local_98 = (long ****)((long)pppplVar24 - uVar19);
  ppppplVar28 = (long *****)((long)local_98 - uVar19);
  __s = (void *)((long)ppppplVar28 - uVar8);
                    /* try { // try from 013409a0 to 014409bb has its CatchHandler @ 01340b40 */
  memset(__s,0,__n);
  plVar14 = local_90;
  if (local_90 == (long *)0x0) goto LAB_01341798;
                    /* try { // try from 013409bc to 01440a2f has its CatchHandler @ 01340094 */
  puVar11 = *(undefined8 **)(*(long *)(*plVar21 + 0xc0) + 200);
  (*(code *)puVar11[2])(*puVar11,puVar11,local_90,0,&local_78);
  if ((byte)local_78 == '\0') goto LAB_013416d4;
  if ((local_a4 & 1) != 0) {
    lVar7 = **(long **)(*plVar21 + 0xc0);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    pcVar9 = (char *)thunk_FUN_00d32ed4(plVar14,*(long *)(lVar7 + 0x80) + 0x40);
    if (*pcVar9 != '\0') goto LAB_013416d4;
    lVar7 = **(long **)(*plVar21 + 0xc0);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
                    /* try { // try from 01340a30 to 01440a3f has its CatchHandler @ 01340a54 */
    lVar7 = *(long *)(lVar7 + 0x80) + 0x40;
    FUN_00da4f60(lVar7,1);
    plVar14 = local_90;
                    /* try { // try from 01340a40 to 01440a43 has its CatchHandler @ 01340094 */
                    /* try { // try from 01340a44 to 01440a47 has its CatchHandler @ 01340b44 */
                    /* try { // try from 01340a48 to 01440a4b has its CatchHandler @ 01340a50 */
                    /* try { // try from 01340a4c to 01440a4f has its CatchHandler @ 01340a68 */
    puVar10 = (undefined1 *)thunk_FUN_00d32ed4(local_90,lVar7);
                    /* catch() { ... } // from try @ 01340a48 with catch @ 01340a50 */
                    /* catch() { ... } // from try @ 01340a30 with catch @ 01340a54 */
    *puVar10 = 1;
  }
                    /* catch() { ... } // from try @ 01340708 with catch @ 01340a58 */
  lVar18 = *plVar21;
                    /* try { // try from 01340a5c to 01440a5f has its CatchHandler @ 01340cdc */
                    /* try { // try from 01340a60 to 01440a8f has its CatchHandler @ 01340094 */
  lVar7 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x40);
                    /* catch() { ... } // from try @ 01340408 with catch @ 01340a68
                       catch() { ... } // from try @ 01340a4c with catch @ 01340a68 */
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    /* catch() { ... } // from try @ 013404ec with catch @ 01340a6c */
    lVar7 = FUN_00d5941c();
                    /* catch() { ... } // from try @ 01340498 with catch @ 01340a70 */
    lVar18 = *plVar21;
  }
                    /* catch() { ... } // from try @ 013403d8 with catch @ 01340a74 */
                    /* catch() { ... } // from try @ 01340414 with catch @ 01340a78 */
  pppppuVar1 = (undefined8 *****)local_88;
  if (-1 < *(int *)(lVar7 + 0x28)) {
    pppppuVar1 = &local_88;
  }
  memcpy(local_98,pppppuVar1,local_a0);
                    /* try { // try from 01340a90 to 01440aa7 has its CatchHandler @ 01340b34 */
  lVar7 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x40);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
                    /* try { // try from 01340aa8 to 01440b1f has its CatchHandler @ 01340094 */
  uVar8 = FUN_00da5124(lVar7,local_98);
  if ((uVar8 & 1) == 0) {
    if ((local_a4 & 1) == 0) goto LAB_013416d4;
    ppppplVar29 = *(long ******)Method_OVRPlugin_<>c_<_cctor>b__796_44__;
    lVar7 = *plVar14;
LAB_013416c0:
    lVar7 = *(long *)(lVar7 + 0x270);
    ppppplVar28 = &local_80;
    local_80 = (long ****)ppppplVar29;
  }
  else {
    lVar7 = *(long *)(*plVar14 + 0x400);
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,0,&local_78);
    pppplVar5 = local_78;
    if ((long *****)local_78 != (long *****)0x0) {
      lVar18 = *plVar21;
      lVar7 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x40);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
        lVar18 = *plVar21;
      }
      pppppuVar1 = (undefined8 *****)local_88;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pppppuVar1 = &local_88;
      }
      memcpy(local_98,pppppuVar1,local_a0);
      lVar7 = *(long *)(lVar18 + 0xc0);
      pplVar26 = *(long ***)(lVar7 + 0xc0);
      if ((*(byte *)((long)pplVar26 + 0x132) & 1) == 0) {
                    /* try { // try from 01340b20 to 01440b2f has its CatchHandler @ 01340b34 */
        pplVar26 = (long **)FUN_00d5941c(pplVar26);
        lVar7 = *(long *)(*plVar21 + 0xc0);
      }
      lVar7 = *(long *)(lVar7 + 0x40);
                    /* catch() { ... } // from try @ 01340a90 with catch @ 01340b34
                       catch() { ... } // from try @ 01340b20 with catch @ 01340b34 */
                    /* try { // try from 01340b38 to 01440b3b has its CatchHandler @ 01340cdc */
                    /* try { // try from 01340b3c to 01440b5f has its CatchHandler @ 01340094 */
      local_c0 = ppplVar12;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    /* catch() { ... } // from try @ 013409a0 with catch @ 01340b40 */
        lVar7 = FUN_00d5941c();
      }
                    /* catch() { ... } // from try @ 01340960 with catch @ 01340b44
                       catch() { ... } // from try @ 01340a44 with catch @ 01340b44 */
                    /* catch() { ... } // from try @ 0134052c with catch @ 01340b48 */
      ppppplVar29 = (long *****)local_98;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        ppppplVar29 = (long *****)*local_98;
      }
      pppplVar16 = (long ****)*pppplVar5;
      uVar8 = (ulong)*(ushort *)((long)pppplVar16 + 0x12a);
                    /* try { // try from 01340b60 to 01440b77 has its CatchHandler @ 01340c04 */
      if (uVar8 != 0) {
        ppplVar12 = pppplVar16[0x16] + 1;
        do {
          if (ppplVar12[-1] == pplVar26) {
            pppplVar16 = pppplVar16 + (long)(*(int *)ppplVar12 + 2) * 2 + 0x27;
            goto LAB_01340bc8;
          }
                    /* try { // try from 01340b78 to 01440bef has its CatchHandler @ 01340094 */
          uVar8 = uVar8 - 1;
          ppplVar12 = ppplVar12 + 2;
        } while (uVar8 != 0);
      }
      pppplVar16 = (long ****)FUN_00d59724(pppplVar5,pplVar26,2);
LAB_01340bc8:
      ppplVar12 = pppplVar16[1];
      local_80 = (long ****)ppppplVar29;
      (*(code *)ppplVar12[2])(ppplVar12[1],ppplVar12,pppplVar5,&local_80,&local_78);
      plVar14 = local_90;
      ppplVar12 = local_c0;
    }
                    /* try { // try from 01340bf0 to 01440bff has its CatchHandler @ 01340c04 */
    ppppplVar29 = (long *****)local_78;
    uVar8 = FUN_015ff8a0(local_78,0);
    if ((uVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 01340c28 with catch @ 01340cd0
                       catch() { ... } // from try @ 01340cbc with catch @ 01340cd0 */
                    /* try { // try from 01340cd4 to 01440cd7 has its CatchHandler @ 01340cdc */
                    /* catch() { ... } // from try @ 01340a5c with catch @ 01340cdc
                       catch() { ... } // from try @ 01340b38 with catch @ 01340cdc
                       catch() { ... } // from try @ 01340c08 with catch @ 01340cdc
                       catch() { ... } // from try @ 01340cd4 with catch @ 01340cdc */
      lVar7 = *(long *)(*plVar14 + 0x400);
                    /* try { // try from 01340ce0 to 01440e8b has its CatchHandler @ 01340ce0
                       catch() { ... } // from try @ 01340ce0 with catch @ 01340ce0
                       catch() { ... } // from try @ 01340f58 with catch @ 01340ce0
                       catch() { ... } // from try @ 01340fa0 with catch @ 01340ce0
                       catch() { ... } // from try @ 01341060 with catch @ 01340ce0
                       catch() { ... } // from try @ 01341164 with catch @ 01340ce0
                       catch() { ... } // from try @ 013411d0 with catch @ 01340ce0
                       catch() { ... } // from try @ 01341310 with catch @ 01340ce0
                       catch() { ... } // from try @ 01341358 with catch @ 01340ce0
                       catch() { ... } // from try @ 01341414 with catch @ 01340ce0
                       catch() { ... } // from try @ 01341438 with catch @ 01340ce0
                       catch() { ... } // from try @ 0134145c with catch @ 01340ce0
                       catch() { ... } // from try @ 013414a0 with catch @ 01340ce0
                       catch() { ... } // from try @ 01341534 with catch @ 01340ce0
                       catch() { ... } // from try @ 01341568 with catch @ 01340ce0 */
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,0,&local_78);
      if ((long *****)local_78 == (long *****)0x0) {
        local_78._0_4_ = 0xffffffff;
      }
      else {
        lVar7 = *(long *)(*plVar14 + 0x400);
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,0,&local_78);
        pppplVar22 = local_78;
        lVar7 = *(long *)(*(long *)(*plVar21 + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        ppppplVar28 = (long *****)local_98;
        pppppuVar1 = (undefined8 *****)local_88;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          pppppuVar1 = &local_88;
        }
        memcpy(local_98,pppppuVar1,local_a0);
        if ((long *****)pppplVar22 == (long *****)0x0) goto LAB_01341798;
        lVar7 = *(long *)(*plVar21 + 0xc0);
        pplVar26 = *(long ***)(lVar7 + 0xc0);
        if ((*(byte *)((long)pplVar26 + 0x132) & 1) == 0) {
          pplVar26 = (long **)FUN_00d5941c(pplVar26);
          lVar7 = *(long *)(*plVar21 + 0xc0);
        }
        lVar7 = *(long *)(lVar7 + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        if (-1 < *(int *)(lVar7 + 0x28)) {
          ppppplVar28 = (long *****)*ppppplVar28;
        }
        pppplVar24 = (long ****)*pppplVar22;
        uVar8 = (ulong)*(ushort *)((long)pppplVar24 + 0x12a);
        if (uVar8 != 0) {
          ppplVar13 = pppplVar24[0x16] + 1;
          do {
            if (ppplVar13[-1] == pplVar26) {
              pppplVar24 = pppplVar24 + (long)(*(int *)ppplVar13 + 1) * 2 + 0x27;
              goto LAB_0134100c;
            }
            uVar8 = uVar8 - 1;
            ppplVar13 = ppplVar13 + 2;
          } while (uVar8 != 0);
        }
        pppplVar24 = (long ****)FUN_00d59724(pppplVar22,pplVar26,1);
LAB_0134100c:
        ppplVar13 = pppplVar24[1];
        local_80 = (long ****)ppppplVar28;
        (*(code *)ppplVar13[2])(ppplVar13[1],ppplVar13,pppplVar22,&local_80,&local_78);
      }
      local_80 = (long ****)CONCAT44(local_80._4_4_,local_78._0_4_);
      local_78 = (long ****)&local_80;
      pppplStack_70 = (long ****)ppppplVar29;
      ppppplVar28 = &local_78;
      lVar7 = *(long *)(*plVar14 + 0x280);
    }
    else {
                    /* catch() { ... } // from try @ 01340b60 with catch @ 01340c04
                       catch() { ... } // from try @ 01340bf0 with catch @ 01340c04 */
                    /* try { // try from 01340c08 to 01440c0b has its CatchHandler @ 01340cdc */
                    /* try { // try from 01340c0c to 01440c27 has its CatchHandler @ 01340094 */
                    /* catch() { ... } // from try @ 01340914 with catch @ 01340c10 */
      puVar11 = *(undefined8 **)(*(long *)(*plVar21 + 0xc0) + 0x20);
      local_80 = pppplVar22;
      (*(code *)puVar11[2])(*puVar11,puVar11,plVar14,&local_80,pppplVar22);
                    /* try { // try from 01340c28 to 01440c3f has its CatchHandler @ 01340cd0 */
      memcpy(__s,pppplVar22,__n);
      lVar18 = *(long *)(*plVar21 + 0xc0);
                    /* try { // try from 01340c40 to 01440cbb has its CatchHandler @ 01340094 */
      lVar7 = *(long *)(lVar18 + 0x28);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
        lVar18 = *(long *)(*plVar21 + 0xc0);
      }
      local_80 = local_98;
      FUN_00da59dc(lVar7,*(undefined8 *)(lVar18 + 0x38),lVar17,__s,&local_80);
      lVar7 = *(long *)(*(long *)(*plVar21 + 0xc0) + 0x40);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      pppplVar22 = (long ****)thunk_FUN_00d61fa0(lVar7,local_98);
      lVar18 = *(long *)(*plVar21 + 0xc0);
      lVar17 = *(long *)(lVar18 + 0x40);
      uVar2 = *(ushort *)(lVar17 + 0x132);
      lVar7 = lVar17;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar17);
                    /* try { // try from 01340cbc to 01440ccb has its CatchHandler @ 01340cd0 */
        lVar18 = *(long *)(*plVar21 + 0xc0);
        lVar17 = *(long *)(lVar18 + 0x40);
        uVar2 = *(ushort *)(lVar17 + 0x132);
      }
      uVar23 = *(undefined8 *)(lVar18 + 0x158);
      if ((uVar2 & 1) == 0) {
        lVar17 = FUN_00d5941c(lVar17);
      }
      pppppuVar1 = (undefined8 *****)local_88;
      if (-1 < *(int *)(lVar17 + 0x28)) {
        pppppuVar1 = &local_88;
      }
      local_80 = pppplVar22;
      FUN_00da59dc(lVar7,uVar23,local_b8,pppppuVar1,&local_80,&local_78);
      bVar4 = (byte)local_78;
      puVar11 = *(undefined8 **)(*(long *)(*plVar21 + 0xc0) + 0x20);
      local_80 = pppplVar24;
      (*(code *)puVar11[2])(*puVar11,puVar11,local_90,&local_80,pppplVar24);
      memcpy(__s,pppplVar24,__n);
      lVar17 = *plVar21;
      lVar7 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
        lVar17 = *plVar21;
      }
      ppppplVar29 = (long *****)local_98;
      pppppuVar1 = (undefined8 *****)local_88;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pppppuVar1 = &local_88;
      }
                    /* try { // try from 01340e8c to 01440e9b has its CatchHandler @ 01340f6c */
      memcpy(ppppplVar28,pppppuVar1,local_a0);
      lVar17 = *(long *)(lVar17 + 0xc0);
      lVar7 = *(long *)(lVar17 + 0x28);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
                    /* try { // try from 01340eb0 to 01440eb3 has its CatchHandler @ 01340f68 */
        lVar17 = *(long *)(*plVar21 + 0xc0);
      }
      plVar14 = local_90;
      lVar18 = *(long *)(lVar17 + 0x40);
      uVar23 = *(undefined8 *)(lVar17 + 0x160);
      if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
        lVar18 = FUN_00d5941c();
      }
      if (-1 < *(int *)(lVar18 + 0x28)) {
        ppppplVar28 = (long *****)*ppppplVar28;
      }
      local_80 = (long ****)ppppplVar28;
      FUN_00da59dc(lVar7,uVar23,local_b0,__s,&local_80,ppppplVar28);
                    /* try { // try from 01340efc to 01440f33 has its CatchHandler @ 01340f70 */
      lVar7 = *(long *)(*plVar14 + 0x400);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,0,&local_78);
      pppplVar22 = local_78;
      if ((long *****)local_78 == (long *****)0x0) {
        ppppplVar28 = (long *****)0x0;
      }
      else {
        lVar17 = *plVar21;
        lVar7 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    /* try { // try from 01340f3c to 01440f3f has its CatchHandler @ 01340f64 */
          lVar7 = FUN_00d5941c();
          lVar17 = *plVar21;
        }
                    /* try { // try from 01340f44 to 01440f47 has its CatchHandler @ 01340f60 */
                    /* try { // try from 01340f4c to 01440f4f has its CatchHandler @ 01340f5c */
                    /* try { // try from 01340f54 to 01440f57 has its CatchHandler @ 01340f70 */
                    /* try { // try from 01340f58 to 01440f87 has its CatchHandler @ 01340ce0 */
        pppppuVar1 = (undefined8 *****)local_88;
                    /* catch() { ... } // from try @ 01340f4c with catch @ 01340f5c */
        if (-1 < *(int *)(lVar7 + 0x28)) {
          pppppuVar1 = &local_88;
        }
                    /* catch() { ... } // from try @ 01340f44 with catch @ 01340f60 */
        memcpy(ppppplVar29,pppppuVar1,local_a0);
                    /* catch() { ... } // from try @ 01340f3c with catch @ 01340f64 */
        lVar7 = *(long *)(lVar17 + 0xc0);
                    /* catch() { ... } // from try @ 01340eb0 with catch @ 01340f68 */
        pplVar26 = *(long ***)(lVar7 + 0xc0);
                    /* catch() { ... } // from try @ 01340e8c with catch @ 01340f6c */
                    /* catch() { ... } // from try @ 01340efc with catch @ 01340f70
                       catch() { ... } // from try @ 01340f54 with catch @ 01340f70 */
        if ((*(byte *)((long)pplVar26 + 0x132) & 1) == 0) {
          pplVar26 = (long **)FUN_00d5941c(pplVar26);
          lVar7 = *(long *)(*plVar21 + 0xc0);
        }
                    /* try { // try from 01340f88 to 01440f9f has its CatchHandler @ 01341454 */
        lVar7 = *(long *)(lVar7 + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
                    /* try { // try from 01340fa0 to 0144105b has its CatchHandler @ 01340ce0 */
        ppppplVar28 = ppppplVar29;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          ppppplVar28 = (long *****)*ppppplVar29;
        }
        pppplVar24 = (long ****)*pppplVar22;
        uVar8 = (ulong)*(ushort *)((long)pppplVar24 + 0x12a);
        if (uVar8 != 0) {
          ppplVar13 = pppplVar24[0x16] + 1;
          do {
            if (ppplVar13[-1] == pplVar26) {
                    /* try { // try from 0134105c to 0144105f has its CatchHandler @ 01341464 */
                    /* try { // try from 01341060 to 01441093 has its CatchHandler @ 01340ce0 */
              pppplVar24 = pppplVar24 + (long)(*(int *)ppplVar13 + 4) * 2 + 0x27;
              goto LAB_01341064;
            }
            uVar8 = uVar8 - 1;
            ppplVar13 = ppplVar13 + 2;
          } while (uVar8 != 0);
        }
        pppplVar24 = (long ****)FUN_00d59724(pppplVar22,pplVar26,4);
LAB_01341064:
        ppplVar13 = pppplVar24[1];
        local_80 = (long ****)ppppplVar28;
        (*(code *)ppplVar13[2])(ppplVar13[1],ppplVar13,pppplVar22,&local_80,&local_78);
        ppppplVar28 = (long *****)local_78;
      }
                    /* try { // try from 01341094 to 014410bb has its CatchHandler @ 01341538 */
      lVar7 = *(long *)(*plVar14 + 0x400);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,0,&local_78);
      if ((long *****)local_78 == (long *****)0x0) {
        bVar20 = 0;
      }
      else {
        lVar7 = *(long *)(*plVar14 + 0x400);
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,0,&local_78);
        pppplVar22 = local_78;
        lVar7 = *(long *)(*(long *)(*plVar21 + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        pppppuVar1 = (undefined8 *****)local_88;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          pppppuVar1 = &local_88;
        }
        memcpy(ppppplVar29,pppppuVar1,local_a0);
        if ((long *****)pppplVar22 == (long *****)0x0) goto LAB_01341798;
        lVar7 = *(long *)(*plVar21 + 0xc0);
        pplVar26 = *(long ***)(lVar7 + 0xc0);
        if ((*(byte *)((long)pplVar26 + 0x132) & 1) == 0) {
          pplVar26 = (long **)FUN_00d5941c(pplVar26);
          lVar7 = *(long *)(*plVar21 + 0xc0);
        }
        lVar7 = *(long *)(lVar7 + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        ppppplVar27 = ppppplVar29;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          ppppplVar27 = (long *****)*ppppplVar29;
        }
        pppplVar24 = (long ****)*pppplVar22;
        uVar8 = (ulong)*(ushort *)((long)pppplVar24 + 0x12a);
        if (uVar8 != 0) {
          ppplVar13 = pppplVar24[0x16] + 1;
          do {
            if (ppplVar13[-1] == pplVar26) {
              pppplVar24 = pppplVar24 + (long)(*(int *)ppplVar13 + 5) * 2 + 0x27;
              goto LAB_013411a4;
            }
            uVar8 = uVar8 - 1;
            ppplVar13 = ppplVar13 + 2;
          } while (uVar8 != 0);
        }
        pppplVar24 = (long ****)FUN_00d59724(pppplVar22,pplVar26,5);
LAB_013411a4:
        ppplVar13 = pppplVar24[1];
        local_80 = (long ****)ppppplVar27;
        (*(code *)ppplVar13[2])(ppplVar13[1],ppplVar13,pppplVar22,&local_80,&local_78);
        bVar20 = (byte)local_78;
      }
      plVar14 = local_90;
      lVar7 = *(long *)(*local_90 + 0x400);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,local_90,0,&local_78);
      uVar15 = 0;
      if ((long *****)local_78 != (long *****)0x0) {
        lVar7 = *(long *)(*plVar14 + 0x400);
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,0,&local_78);
        pppplVar22 = local_78;
        lVar7 = *(long *)(*(long *)(*plVar21 + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        pppppuVar1 = (undefined8 *****)local_88;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          pppppuVar1 = &local_88;
        }
        memcpy(ppppplVar29,pppppuVar1,local_a0);
        if ((long *****)pppplVar22 == (long *****)0x0) goto LAB_01341798;
        lVar7 = *(long *)(*plVar21 + 0xc0);
        pplVar26 = *(long ***)(lVar7 + 0xc0);
        if ((*(byte *)((long)pplVar26 + 0x132) & 1) == 0) {
          pplVar26 = (long **)FUN_00d5941c(pplVar26);
          lVar7 = *(long *)(*plVar21 + 0xc0);
        }
        lVar7 = *(long *)(lVar7 + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        ppppplVar27 = ppppplVar29;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          ppppplVar27 = (long *****)*ppppplVar29;
        }
        pppplVar24 = (long ****)*pppplVar22;
        uVar8 = (ulong)*(ushort *)((long)pppplVar24 + 0x12a);
        if (uVar8 != 0) {
          ppplVar13 = pppplVar24[0x16] + 1;
          do {
            if (ppplVar13[-1] == pplVar26) {
              pppplVar24 = pppplVar24 + (long)(*(int *)ppplVar13 + 6) * 2 + 0x27;
              goto LAB_013412e0;
            }
            uVar8 = uVar8 - 1;
            ppplVar13 = ppplVar13 + 2;
          } while (uVar8 != 0);
        }
        pppplVar24 = (long ****)FUN_00d59724(pppplVar22,pplVar26,6);
LAB_013412e0:
        ppplVar13 = pppplVar24[1];
        local_80 = (long ****)ppppplVar27;
        (*(code *)ppplVar13[2])(ppplVar13[1],ppplVar13,pppplVar22,&local_80,&local_78);
        uVar15 = (uint)local_78 & 0xff;
      }
      plVar14 = local_90;
      if ((bVar20 & (bVar4 ^ 1)) != 0) {
        local_80 = (long ****)CONCAT71(local_80._1_7_,uVar15 != 0);
        pppplStack_70 = (long ****)&local_80;
        lVar7 = *(long *)(*local_90 + 0x330);
        local_78 = (long ****)ppppplVar28;
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,local_90,&local_78,&local_80);
      }
      lVar7 = *(long *)(*plVar14 + 0x400);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,0,&local_78);
      if ((long *****)local_78 == (long *****)0x0) {
        bVar20 = 0;
      }
      else {
        lVar7 = *(long *)(*plVar14 + 0x400);
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,0,&local_78);
        pppplVar22 = local_78;
        lVar7 = *(long *)(*(long *)(*plVar21 + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        pppppuVar1 = (undefined8 *****)local_88;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          pppppuVar1 = &local_88;
        }
        memcpy(ppppplVar29,pppppuVar1,local_a0);
        if ((long *****)pppplVar22 == (long *****)0x0) goto LAB_01341798;
        lVar7 = *(long *)(*plVar21 + 0xc0);
        pplVar26 = *(long ***)(lVar7 + 0xc0);
        if ((*(byte *)((long)pplVar26 + 0x132) & 1) == 0) {
          pplVar26 = (long **)FUN_00d5941c(pplVar26);
          lVar7 = *(long *)(*plVar21 + 0xc0);
        }
        lVar7 = *(long *)(lVar7 + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        ppppplVar28 = ppppplVar29;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          ppppplVar28 = (long *****)*ppppplVar29;
        }
        pppplVar24 = (long ****)*pppplVar22;
        uVar8 = (ulong)*(ushort *)((long)pppplVar24 + 0x12a);
        if (uVar8 != 0) {
          ppplVar13 = pppplVar24[0x16] + 1;
          do {
            if (ppplVar13[-1] == pplVar26) {
              pppplVar24 = pppplVar24 + (long)(*(int *)ppplVar13 + 3) * 2 + 0x27;
              goto LAB_0134145c;
            }
            uVar8 = uVar8 - 1;
            ppplVar13 = ppplVar13 + 2;
          } while (uVar8 != 0);
        }
        pppplVar24 = (long ****)FUN_00d59724(pppplVar22,pplVar26,3);
LAB_0134145c:
        ppplVar13 = pppplVar24[1];
        local_80 = (long ****)ppppplVar28;
        (*(code *)ppplVar13[2])(ppplVar13[1],ppplVar13,pppplVar22,&local_80,&local_78);
        bVar20 = (byte)local_78;
      }
      if ((bVar20 & (bVar4 ^ 1)) != 0) {
        lVar17 = *plVar21;
        lVar7 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
          lVar17 = *plVar21;
        }
        pppppuVar1 = (undefined8 *****)local_88;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          pppppuVar1 = &local_88;
        }
        memcpy(ppppplVar29,pppppuVar1,local_a0);
        lVar7 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        if (-1 < *(int *)(lVar7 + 0x28)) {
          ppppplVar29 = (long *****)*ppppplVar29;
        }
        lVar7 = *(long *)(*plVar14 + 0x460);
        local_80 = (long ****)ppppplVar29;
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,&local_80);
      }
      ppppplVar28 = (long *****)local_98;
      puVar3 = 
      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
      if ((local_a4 & 1) == 0) goto LAB_013416d4;
      if (bVar20 == 0) {
        lVar17 = *plVar21;
        lVar7 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
          lVar17 = *plVar21;
        }
        pppppuVar1 = (undefined8 *****)local_88;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          pppppuVar1 = &local_88;
        }
        memcpy(ppppplVar28,pppppuVar1,local_a0);
        lVar7 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        local_80 = (long ****)ppppplVar28;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          local_80 = *ppppplVar28;
        }
        lVar7 = *(long *)(*plVar14 + 0x460);
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,&local_80);
      }
      ppppplVar29 = (long *****)thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (ppppplVar29 == (long *****)0x0) {
LAB_01341798:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0160aa4c(ppppplVar29,0);
      puVar11 = *(undefined8 **)(*(long *)(*plVar21 + 0xc0) + 0x1a0);
      (*(code *)puVar11[2])(*puVar11,puVar11,plVar14,0,&local_78);
      if ((long *****)local_78 == (long *****)0x0) goto LAB_01341798;
      puVar11 = *(undefined8 **)(*(long *)(*plVar21 + 0xc0) + 0x1b0);
      (*(code *)puVar11[2])(*puVar11,puVar11,local_78,0,&local_78);
      pppplVar22 = local_78;
      if ((long *****)local_78 != (long *****)0x0) {
        lVar17 = *plVar21;
        lVar7 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
          lVar17 = *plVar21;
        }
        pppppuVar1 = (undefined8 *****)local_88;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          pppppuVar1 = &local_88;
        }
        memcpy(ppppplVar28,pppppuVar1,local_a0);
        lVar7 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
        puVar11 = *(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x1c0);
        uVar23 = *puVar11;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        local_78 = (long ****)ppppplVar28;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          local_78 = *ppppplVar28;
        }
        pppplStack_70 = (long ****)ppppplVar29;
        (*(code *)puVar11[2])(uVar23,puVar11,pppplVar22,&local_78,ppppplVar29);
      }
      iVar6 = FUN_0160b5d0(ppppplVar29,0);
      if (0 < iVar6) {
        ppppplVar29 = (long *****)
                      FUN_015f6780(*(undefined8 *)Method_System_Xml_XmlLoader_LoadDocumentType__,
                                   ppppplVar29,0);
        lVar7 = *plVar14;
        goto LAB_013416c0;
      }
      lVar17 = *plVar21;
      lVar7 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
        lVar17 = *plVar21;
      }
      pppppuVar1 = (undefined8 *****)local_88;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        pppppuVar1 = &local_88;
      }
      memcpy(ppppplVar28,pppppuVar1,local_a0);
      lVar7 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if (-1 < *(int *)(lVar7 + 0x28)) {
        ppppplVar28 = (long *****)*ppppplVar28;
      }
      lVar7 = *(long *)(*plVar14 + 0x470);
      local_80 = (long ****)ppppplVar28;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,&local_80,ppppplVar28);
      ppppplVar28 = (long *****)0x0;
      ppppplVar29 = (long *****)0x0;
      lVar7 = *(long *)(*plVar14 + 0x2b0);
    }
  }
  (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,ppppplVar28,ppppplVar29);
LAB_013416d4:
  if (ppplVar12[5] == (long **)local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


