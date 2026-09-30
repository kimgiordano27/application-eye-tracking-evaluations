/*
FUNCTION_NAME: FUN_03823db4
ENTRY_POINT: 03823db4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_03823db4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  undefined8 *__src;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 auStack_270 [80];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [80];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [80];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [80];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((DAT_04137dd5 & 1) == 0) {
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<TimeReporter_TimerType,_string>_Add__)
    ;
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<Type,_IQcSerializer>_get_Item__);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_TryGetValue__
                );
                    /* try { // try from 03823e2c to 03923e87 has its CatchHandler @ 03823e2c
                       catch() { ... } // from try @ 03823e2c with catch @ 03823e2c
                       catch() { ... } // from try @ 03823f80 with catch @ 03823e2c
                       catch() { ... } // from try @ 03823fd4 with catch @ 03823e2c
                       catch() { ... } // from try @ 03824040 with catch @ 03823e2c */
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<Type,_string>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__);
    FUN_01ab69ac(PTR_DAT_03cc0590);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<PlayerRef,_NetworkObject>_GetEnumerator__
                );
    DAT_04137dd5 = 1;
  }
  puVar5 = Method_System_Collections_Generic_Dictionary<TimeReporter_TimerType,_string>_Add__;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
  ;
  puVar3 = Method_System_Collections_Generic_Dictionary<Type,_IQcSerializer>_get_Item__;
  puVar2 = Method_System_Collections_Generic_Dictionary<PlayerRef,_NetworkObject>_GetEnumerator__;
  puVar1 = PTR_DAT_03cc0590;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (param_4 != 0) {
    if (0 < *(int *)(param_4 + 0x2c)) {
                    /* try { // try from 03823e88 to 03923e93 has its CatchHandler @ 03823fe0 */
      lVar15 = 0;
      uVar16 = 0;
      __src = (undefined8 *)(param_3 + 0x30);
                    /* try { // try from 03823ec0 to 03923edb has its CatchHandler @ 03823fdc */
      puVar13 = (undefined8 *)((ulong)&local_a0 | 8);
      do {
        lVar14 = *(long *)(param_4 + 0x58);
        if (lVar14 == 0) goto LAB_03824398;
        if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_0382439c;
        if (*(int *)(lVar14 + lVar15 + 0x20) != 0) {
          uVar18 = NEON_rev64(*(undefined8 *)(param_3 + 0xb8),4);
          *(undefined8 *)(param_3 + 0x68) = *(undefined8 *)(param_3 + 0xc0);
          *(undefined8 *)(param_3 + 0x78) = uVar18;
          lVar14 = *(long *)(param_4 + 0x58);
          if (lVar14 == 0) goto LAB_03824398;
                    /* try { // try from 03823f08 to 03923f37 has its CatchHandler @ 03823fd8 */
          if (*(uint *)(lVar14 + 0x18) <= uVar16) {
LAB_0382439c:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar14 = *(long *)(lVar14 + lVar15 + 0x60);
          if ((lVar14 == 0) || (plVar9 = (long *)FUN_03699628(lVar14,0), plVar9 == (long *)0x0))
          goto LAB_03824398;
          if (*plVar9 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0();
          }
          iVar6 = FUN_036ad5f8(plVar9,0);
          lVar14 = *(long *)(param_4 + 0x58);
          if (lVar14 == 0) goto LAB_03824398;
                    /* try { // try from 03823f50 to 03923f57 has its CatchHandler @ 03823fd4 */
          if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_0382439c;
                    /* try { // try from 03823f58 to 03923f7f has its CatchHandler @ 03823fe4 */
          lVar14 = *(long *)(lVar14 + lVar15 + 0x60);
          if (lVar14 == 0) goto LAB_03824398;
          uVar18 = FUN_03699628(lVar14,0);
          if (iVar6 == 1) {
            lVar14 = *(long *)(param_4 + 0x58);
                    /* try { // try from 03823f80 to 03923fcf has its CatchHandler @ 03823e2c */
            if (lVar14 == 0) goto LAB_03824398;
            if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_0382439c;
            uVar17 = *(undefined4 *)(lVar14 + lVar15 + 0x68);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
                    /* try { // try from 03823fd0 to 03923fd3 has its CatchHandler @ 03823fe0 */
            uVar10 = FUN_037a5bc4(uVar17,0);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03823f50 with catch @ 03823fd4
                       try { // try from 03823fd4 to 03923ffb has its CatchHandler @ 03823e2c */
            uVar17 = 0;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03823f08 with catch @ 03823fd8
                        */
            if ((uVar10 & 1) == 0) {
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03823ec0 with catch @ 03823fdc
                        */
              lVar14 = *(long *)(param_4 + 0x58);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03823e88 with catch @ 03823fe0
                       catch(type#1 @ 03abd138) { ... } // from try @ 03823fd0 with catch @ 03823fe0
                        */
              if (lVar14 == 0) goto LAB_03824398;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03823f58 with catch @ 03823fe4
                        */
              if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_0382439c;
                    /* try { // try from 03823ffc to 03923fff has its CatchHandler @ 0382400c */
              lVar14 = *(long *)(lVar14 + lVar15 + 0x60);
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                          0xe0) == 0) {
                    /* catch() { ... } // from try @ 03823ffc with catch @ 0382400c */
                thunk_FUN_01a58e78();
              }
              if (lVar14 == 0) goto LAB_03824398;
                    /* try { // try from 0382401c to 0392403f has its CatchHandler @ 03824054 */
              uVar17 = FUN_0369e060(lVar14,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__
                                                  + 0xb8) + 0x6c),0);
            }
            *(undefined1 *)(param_3 + 0x75) = 1;
            *(undefined4 *)(param_3 + 0x58) = uVar17;
                    /* try { // try from 03824040 to 0392404b has its CatchHandler @ 03823e2c */
                    /* try { // try from 0382404c to 03924053 has its CatchHandler @ 03824054 */
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0382401c with catch @ 03824054
                       catch(type#2 @ 00000000) { ... } // from try @ 0382404c with catch @ 03824054
                        */
            if (DAT_04137a3d == '\0') {
              FUN_01ab69ac(puVar2);
              DAT_04137a3d = '\x01';
            }
            lVar14 = *(long *)puVar2;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)puVar2;
            }
            if (**(long **)(lVar14 + 0xb8) == 0) goto LAB_03824398;
            uVar17 = FUN_038ca45c(**(long **)(lVar14 + 0xb8),uVar18,0);
            *(undefined4 *)(param_3 + 0x5c) = uVar17;
            if (*(long *)(param_3 + 0x10) == 0) goto LAB_03824398;
            FUN_0380caa8(*(long *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x110),uVar18,uVar17,0,
                         0);
            uVar7 = 0;
            if ((param_5 & 1) != 0) {
              uVar18 = *(undefined8 *)(param_3 + 0x110);
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<Type,_string>__ctor__ +
                          0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar7 = FUN_038206cc(uVar18);
              uVar7 = uVar7 & 1;
            }
            lVar14 = *(long *)(param_4 + 0x58);
            if (lVar14 == 0) goto LAB_03824398;
            if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_0382439c;
            memcpy(auStack_f0,(void *)(lVar14 + lVar15 + 0x20),0x50);
            puVar13[1] = 0;
            *puVar13 = 0;
            puVar13[3] = 0;
            puVar13[2] = 0;
            puVar13[4] = 0;
            local_a0 = *(undefined8 *)(param_3 + 0xf8);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_a0);
            uStack_108 = uStack_88;
            local_110 = local_90;
            uStack_f8 = uStack_78;
            local_100 = uStack_80;
            uStack_118 = uStack_98;
            local_120 = local_a0;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            memcpy(auStack_1f0,auStack_f0,0x50);
            puVar11 = auStack_1f0;
            puVar12 = &local_220;
            uStack_218 = uStack_118;
            local_220 = local_120;
            uStack_208 = uStack_108;
            uStack_210 = local_110;
            uVar18 = 1;
            uStack_1f8 = uStack_f8;
            local_200 = local_100;
          }
          else {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (DAT_04137a3d == '\0') {
              FUN_01ab69ac(puVar2);
              DAT_04137a3d = '\x01';
            }
            lVar14 = *(long *)puVar2;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)puVar2;
            }
            if (**(long **)(lVar14 + 0xb8) == 0) goto LAB_03824398;
            uVar17 = FUN_038ca45c(**(long **)(lVar14 + 0xb8),uVar18,0);
            *(undefined4 *)(param_3 + 0x5c) = uVar17;
            if (*(long *)(param_3 + 0x10) == 0) goto LAB_03824398;
            FUN_0380caa8(*(long *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x110),uVar18,uVar17,0,
                         0);
            lVar14 = *(long *)(param_4 + 0x58);
            if (lVar14 == 0) goto LAB_03824398;
            if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_0382439c;
            memcpy(auStack_f0,(void *)(lVar14 + lVar15 + 0x20),0x50);
            puVar13[1] = 0;
            *puVar13 = 0;
            puVar13[3] = 0;
            puVar13[2] = 0;
            puVar13[4] = 0;
            local_a0 = *(undefined8 *)(param_3 + 0xf8);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_a0);
            uStack_108 = uStack_88;
            local_110 = local_90;
            uStack_f8 = uStack_78;
            local_100 = uStack_80;
            uStack_118 = uStack_98;
            local_120 = local_a0;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            memcpy(auStack_170,auStack_f0,0x50);
            puVar11 = auStack_170;
            puVar12 = &local_1a0;
            uStack_198 = uStack_118;
            local_1a0 = local_120;
            uStack_188 = uStack_108;
            uStack_190 = local_110;
            uStack_178 = uStack_f8;
            local_180 = local_100;
            uVar18 = 2;
            uVar7 = 0;
          }
          FUN_03807d1c(param_1,param_2,puVar11,puVar12,uVar18,uVar7,0);
          lVar14 = *(long *)(param_3 + 0x18);
          memcpy(auStack_f0,__src,0x50);
          if (lVar14 == 0) goto LAB_03824398;
          memcpy(auStack_270,auStack_f0,0x50);
          FUN_01b5f01c(lVar14,auStack_270,*(undefined8 *)puVar5);
          iVar6 = *(int *)(param_3 + 0x118);
          iVar8 = FUN_022337d8(__src,*(undefined8 *)puVar4);
          *(int *)(param_3 + 0x118) = iVar8 + iVar6;
          iVar6 = *(int *)(param_3 + 0x11c);
          iVar8 = FUN_022337d8(param_3 + 0x40,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_TryGetValue__
                              );
          *(int *)(param_3 + 0x11c) = iVar8 + iVar6;
          *(undefined8 *)(param_3 + 0x38) = 0;
          *__src = 0;
          *(undefined8 *)(param_3 + 0x48) = 0;
          *(undefined8 *)(param_3 + 0x40) = 0;
          *(undefined8 *)(param_3 + 0x58) = 0;
          *(undefined8 *)(param_3 + 0x50) = 0;
          *(undefined8 *)(param_3 + 0x68) = 0;
          *(undefined8 *)(param_3 + 0x60) = 0;
          *(undefined8 *)(param_3 + 0x78) = 0;
          *(undefined8 *)(param_3 + 0x70) = 0;
        }
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 0x50;
      } while ((long)uVar16 < (long)*(int *)(param_4 + 0x2c));
    }
    return;
  }
LAB_03824398:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


