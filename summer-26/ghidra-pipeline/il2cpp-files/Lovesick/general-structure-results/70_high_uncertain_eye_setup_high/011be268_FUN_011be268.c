/*
FUNCTION_NAME: FUN_011be268
ENTRY_POINT: 011be268
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x011bf1f0) */
/* WARNING: Removing unreachable block (ram,0x011bf1e8) */
/* WARNING: Removing unreachable block (ram,0x011bf1d4) */
/* WARNING: Removing unreachable block (ram,0x011be8c0) */
/* WARNING: Removing unreachable block (ram,0x011bebcc) */
/* WARNING: Removing unreachable block (ram,0x011bf200) */
/* WARNING: Removing unreachable block (ram,0x011bf1cc) */
/* WARNING: Removing unreachable block (ram,0x011bf1dc) */
/* WARNING: Removing unreachable block (ram,0x011bf1f8) */
/* WARNING: Removing unreachable block (ram,0x011beea8) */
/* WARNING: Removing unreachable block (ram,0x011bebec) */
/* WARNING: Removing unreachable block (ram,0x011be8e0) */
/* WARNING: Removing unreachable block (ram,0x011bee80) */
/* WARNING: Removing unreachable block (ram,0x011beec8) */

void FUN_011be268(long *param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  void *__s;
  undefined8 uVar13;
  uint uVar14;
  void *__s_00;
  undefined8 uVar15;
  ulong __n;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  void *__s_01;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  long local_200 [4];
  ulong local_1e0;
  long *plStack_1d8;
  undefined8 *local_1d0;
  undefined8 *puStack_1c8;
  long **local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 *local_188;
  ulong local_180;
  long *plStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  long **local_160;
  long *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [8];
  ulong local_130;
  long *plStack_128;
  undefined8 *local_120;
  undefined8 *puStack_118;
  long **local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 local_f0 [8];
  long local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 **ppuStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  char local_94 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  long local_70;
  
                    /* try { // try from 011be270 to 012be277 has its CatchHandler @ 011be278 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 011be270 with catch @ 011be278
                       try { // try from 011be278 to 012be29b has its CatchHandler @ 011bdb34 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 011be258 with catch @ 011be27c
                        */
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
                    /* try { // try from 011be29c to 012be29f has its CatchHandler @ 011be460 */
                    /* try { // try from 011be2a0 to 012be457 has its CatchHandler @ 011bdb34 */
  local_e8 = param_2;
  local_e0 = param_1;
  if ((DAT_037763cb & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_Internal_MainLightShadowCasterPass_OnCameraCleanup__
                      );
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlXmlStreamWrapper_Read__);
    thunk_FUN_00d48444(StringLiteral_10288);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2868);
    thunk_FUN_00d48444(StringLiteral_343);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_9455);
    DAT_037763cb = 1;
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x130);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0x28) < 0) {
    iVar6 = thunk_FUN_00d42afc();
    uVar12 = iVar6 - 0x10;
  }
  else {
    uVar12 = 8;
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x148);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0x28) < 0) {
    iVar6 = thunk_FUN_00d42afc();
    uVar14 = iVar6 - 0x10;
  }
  else {
    uVar14 = 8;
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x130);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0x28) < 0) {
    uVar8 = thunk_FUN_00d42afc();
  }
  else {
    uVar8 = 0x18;
  }
  lVar11 = (long)local_200 - ((uVar8 & 0xffffffff) + 0xf & 0x1fffffff0);
  lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x130);
  local_200[1] = lVar11;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  local_200[3] = lVar10;
  if (*(int *)(lVar7 + 0x28) < 0) {
    uVar8 = thunk_FUN_00d42afc();
  }
  else {
    uVar8 = 0x18;
  }
  local_200[0] = lVar11 - ((uVar8 & 0xffffffff) + 0xf & 0x1fffffff0);
  __n = (ulong)uVar14;
  uVar18 = __n + 0xf & 0x1fffffff0;
  puVar16 = (undefined8 *)(local_200[0] - uVar18);
  puVar17 = (undefined8 *)((long)puVar16 - uVar18);
  local_200[2] = (long)uVar12;
  uVar8 = local_200[2] + 0xfU & 0x1fffffff0;
  puVar20 = (undefined8 *)((long)puVar17 - uVar8);
  __s_00 = (void *)((long)puVar20 - uVar8);
  local_f0[0] = 0;
  local_100 = 0;
  local_138[0] = 0;
  puStack_118 = (undefined8 *)0x0;
  local_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  local_110 = (long **)0x0;
  plStack_128 = (long *)0x0;
  local_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  memset(__s_00,0,local_200[2]);
  __s = (void *)((long)__s_00 - uVar18);
  memset(__s,0,__n);
  __s_01 = (void *)((long)__s - uVar18);
  memset(__s_01,0,__n);
  local_158 = (long *)0x0;
  uStack_150 = 0;
  local_160 = (long **)0x0;
  plStack_178 = (long *)0x0;
  local_180 = 0;
  puStack_168 = (undefined8 *)0x0;
  puStack_170 = (undefined8 *)0x0;
  local_190 = 0;
  local_188 = (undefined8 *)0x0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1a8 = 0;
  if (param_1 == (long *)0x0) goto LAB_011bf1b8;
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xb8);
  (*(code *)puVar9[2])(*puVar9,puVar9,param_1,0,&local_1e0);
  if (local_1e0 == 0) goto LAB_011bf174;
  if (local_e0 == (long *)0x0) {
LAB_011bf1b8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0xb8);
  (*(code *)puVar9[2])(*puVar9,puVar9,local_e0,0,&local_1e0);
  if (local_1e0 == 0) goto LAB_011bf1b8;
  if (*(char *)(local_1e0 + 0x10) == '\0') goto LAB_011bf174;
  FUN_0255f6d0(local_f0,*(undefined8 *)
                         Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
               ,0);
  if (local_e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0xb8);
  (*(code *)puVar9[2])(*puVar9,puVar9,local_e0,0,local_80);
  uVar13 = local_80._0_8_;
  if ((long *)local_80._0_8_ == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_80._0_4_ = 2;
  local_c0 = (undefined8 *)local_80;
  lVar10 = *(long *)(*(long *)uVar13 + 0x220);
  (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,uVar13,&local_c0,&local_1e0);
  uStack_108 = uStack_1b8;
  local_110 = local_1c0;
  plStack_128 = plStack_1d8;
  local_130 = local_1e0;
  puStack_118 = puStack_1c8;
  local_120 = local_1d0;
  local_100 = local_1b0;
  local_1e0 = local_1e0 & 0xffffffffffffff00;
  FUN_0255f6d0(&local_1e0,*(undefined8 *)StringLiteral_9455,0);
  local_138[0] = (undefined1)local_1e0;
  lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = *(long *)(*(long *)(local_e8 + 0x20) + 0xc0);
  lVar10 = *(long *)(lVar7 + 8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
    lVar7 = *(long *)(*(long *)(local_e8 + 0x20) + 0xc0);
  }
  puVar9 = *(undefined8 **)(lVar7 + 0xf8);
  puVar19 = *(undefined8 **)(*(long *)(lVar10 + 0xb8) + 8);
  (*(code *)puVar9[2])(*puVar9,puVar9,&local_130,0,&local_a8);
  uStack_140 = uStack_a0;
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x110);
  (*(code *)puVar9[2])(*puVar9,puVar9,&local_148,0,&local_a8);
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x120);
  local_b8 = puVar19;
  ppuStack_b0 = (undefined8 **)&local_a8;
  (*(code *)puVar9[2])(*puVar9,puVar9,0,&local_b8,&local_a8);
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0xf8);
  (*(code *)puVar9[2])(*puVar9,puVar9,&local_130,0,&local_a8);
  uStack_140 = uStack_a0;
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x128);
  local_c0 = puVar20;
  (*(code *)puVar9[2])(*puVar9,puVar9,&local_148,&local_c0,puVar20);
  memcpy(__s_00,puVar20,local_200[2]);
  while( true ) {
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x160);
    (*(code *)puVar9[2])(*puVar9,puVar9,__s_00,0,&local_a8);
    if ((char)local_a8 == '\0') break;
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x138);
    local_c0 = puVar16;
    (*(code *)puVar9[2])(*puVar9,puVar9,__s_00,&local_c0,puVar16);
    memcpy(__s,puVar16,__n);
    lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    lVar7 = local_e8;
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    memcpy(puVar17,__s,__n);
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x150);
    local_c0 = puVar17;
    (*(code *)puVar9[2])(*puVar9,puVar9,local_e0,&local_c0,&local_a8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_c0 = (undefined8 *)CONCAT44(uStack_a4,local_a8);
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x158);
    (*(code *)puVar9[2])(*puVar9,puVar9,lVar10,&local_c0);
  }
  lVar7 = *(long *)(*(long *)(local_e8 + 0x20) + 0xc0);
  lVar10 = *(long *)(lVar7 + 0x130);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
    lVar7 = *(long *)(*(long *)(local_e8 + 0x20) + 0xc0);
  }
  FUN_00da59dc(lVar10,*(undefined8 *)(lVar7 + 0x168),local_200[1],__s_00,0,0);
  FUN_0255f6d8(local_138,0);
  local_1e0 = local_1e0 & 0xffffffffffffff00;
  FUN_0255f6d0(&local_1e0,*(undefined8 *)StringLiteral_343,0);
  local_138[0] = (undefined1)local_1e0;
  lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = *(long *)(*(long *)(local_e8 + 0x20) + 0xc0);
  lVar10 = *(long *)(lVar7 + 8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
    lVar7 = *(long *)(*(long *)(local_e8 + 0x20) + 0xc0);
  }
  puVar9 = *(undefined8 **)(lVar7 + 0x170);
  puVar19 = *(undefined8 **)(*(long *)(lVar10 + 0xb8) + 0x10);
  (*(code *)puVar9[2])(*puVar9,puVar9,&local_130,0,&local_90);
  uStack_140 = uStack_88;
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x110);
  (*(code *)puVar9[2])(*puVar9,puVar9,&local_148,0,&local_90);
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x120);
  local_b8 = puVar19;
  ppuStack_b0 = (undefined8 **)&local_90;
  (*(code *)puVar9[2])(*puVar9,puVar9,0,&local_b8,&local_90);
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x170);
  (*(code *)puVar9[2])(*puVar9,puVar9,&local_130,0,&local_90);
  local_148 = CONCAT44(uStack_8c,local_90);
  uStack_140 = uStack_88;
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x128);
  local_c0 = puVar20;
  (*(code *)puVar9[2])(*puVar9,puVar9,&local_148,&local_c0,puVar20);
  memcpy(__s_00,puVar20,local_200[2]);
  while( true ) {
    puVar20 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x160);
    (*(code *)puVar20[2])(*puVar20,puVar20,__s_00,0,&local_90);
    if ((char)local_90 == '\0') break;
    puVar20 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x138);
    local_c0 = puVar16;
    (*(code *)puVar20[2])(*puVar20,puVar20,__s_00,&local_c0,puVar16);
    memcpy(__s_01,puVar16,__n);
    lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    lVar7 = local_e8;
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
    memcpy(puVar17,__s_01,__n);
    puVar20 = *(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x150);
    local_c0 = puVar17;
    (*(code *)puVar20[2])(*puVar20,puVar20,local_e0,&local_c0,&local_90);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_c0 = (undefined8 *)CONCAT44(uStack_8c,local_90);
    puVar20 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x158);
    (*(code *)puVar20[2])(*puVar20,puVar20,lVar10,&local_c0);
  }
  lVar7 = *(long *)(*(long *)(local_e8 + 0x20) + 0xc0);
  lVar10 = *(long *)(lVar7 + 0x130);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
    lVar7 = *(long *)(*(long *)(local_e8 + 0x20) + 0xc0);
  }
  FUN_00da59dc(lVar10,*(undefined8 *)(lVar7 + 0x168),local_200[0],__s_00,0,0);
  FUN_0255f6d8(local_138,0);
  local_1e0 = local_1e0 & 0xffffffffffffff00;
  FUN_0255f6d0(&local_1e0,*(undefined8 *)StringLiteral_2868,0);
  local_138[0] = (undefined1)local_1e0;
  lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = *(long *)(*(long *)(local_e8 + 0x20) + 0xc0);
  lVar10 = *(long *)(lVar7 + 8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
    lVar7 = *(long *)(*(long *)(local_e8 + 0x20) + 0xc0);
  }
  puVar16 = *(undefined8 **)(lVar7 + 0x178);
  puVar17 = *(undefined8 **)(*(long *)(lVar10 + 0xb8) + 0x18);
  (*(code *)puVar16[2])(*puVar16,puVar16,&local_130,0,local_80);
  local_158 = (long *)local_80._0_8_;
  uStack_150 = local_80._8_8_;
  puVar16 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x120);
  local_80._0_4_ = (int)local_80._8_8_;
  local_b8 = puVar17;
  ppuStack_b0 = (undefined8 **)local_80;
  (*(code *)puVar16[2])(*puVar16,puVar16,0,&local_b8,local_80);
  puVar16 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x178);
  (*(code *)puVar16[2])(*puVar16,puVar16,&local_130,0,local_80);
  local_158 = (long *)local_80._0_8_;
  uStack_150 = local_80._8_8_;
  FUN_01342ff4(&local_158,&local_1e0,*(undefined8 *)StringLiteral_10288);
  puVar5 = Method_System_Data_SqlTypes_SqlXmlStreamWrapper_Read__;
  puVar4 = 
  Method_UnityEngine_Rendering_Universal_Internal_MainLightShadowCasterPass_OnCameraCleanup__;
  puVar3 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__;
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  plStack_178 = plStack_1d8;
  local_180 = local_1e0;
  puStack_168 = puStack_1c8;
  puStack_170 = local_1d0;
  local_160 = local_1c0;
  while( true ) {
    uVar8 = FUN_00adfb40(&local_180,*(undefined8 *)puVar4);
    if ((uVar8 & 1) == 0) break;
    auVar21 = FUN_00adf9fc(&local_180,*(undefined8 *)puVar5);
    if (local_e0[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    puVar16 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x180);
    local_b8 = (undefined8 *)local_80;
    ppuStack_b0 = &local_188;
    local_80 = auVar21;
    (*(code *)puVar16[2])(*puVar16,puVar16,local_e0[5],&local_b8,local_94);
    if (local_94[0] != '\0') {
      if (local_e0[5] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      puVar16 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 400);
      local_c0 = (undefined8 *)local_80;
      local_80 = auVar21;
      (*(code *)puVar16[2])(*puVar16,puVar16,local_e0[5],&local_c0,&local_b8);
      puVar16 = local_188;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_0268b5e4(puVar16,0);
      if ((uVar8 & 1) != 0) {
        lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_00d5941c();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_00d5941c();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        puVar16 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x158);
        local_c0 = local_188;
        (*(code *)puVar16[2])(*puVar16,puVar16,lVar10,&local_c0);
      }
    }
  }
  FUN_012b4c54(&local_180,*(undefined8 *)puVar3);
  FUN_0255f6d8(local_138,0);
  FUN_013cd038(&local_130,*(undefined8 *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x198));
  FUN_0255f6d8(local_f0,0);
  plStack_1d8 = &local_e8;
  local_1d0 = &local_1a0;
  puStack_1c8 = &local_1a8;
  local_1e0 = 0;
  local_1c0 = &local_e0;
  lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  puVar16 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x1a0);
  (*(code *)puVar16[2])(*puVar16,puVar16,lVar10,0,&local_d8);
  if ((int)local_d8 < 1) {
    lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    puVar16 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x1a0);
    (*(code *)puVar16[2])(*puVar16,puVar16,lVar10,0,&local_d8);
    if (0 < (int)local_d8) goto LAB_011bf0a0;
    lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    puVar16 = *(undefined8 **)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 0x1a0);
    (*(code *)puVar16[2])(*puVar16,puVar16,lVar10,0,&local_d8);
    if (0 < (int)local_d8) goto LAB_011bf0a0;
  }
  else {
LAB_011bf0a0:
    lVar10 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
    uVar1 = *(ushort *)(lVar7 + 0x132);
    lVar10 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_00d5941c();
      lVar7 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
      uVar1 = *(ushort *)(lVar7 + 0x132);
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
    lVar10 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_00d5941c();
      lVar7 = *(long *)(*(long *)(*(long *)(local_e8 + 0x20) + 0xc0) + 8);
      uVar1 = *(ushort *)(lVar7 + 0x132);
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    local_c8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
    lVar10 = *(long *)(*local_e0 + 0x210);
    local_d8 = uVar13;
    uStack_d0 = uVar15;
    (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,local_e0,&local_d8);
  }
  FUN_00adfe40(&local_1e0);
LAB_011bf174:
  if (*(long *)(local_200[3] + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


