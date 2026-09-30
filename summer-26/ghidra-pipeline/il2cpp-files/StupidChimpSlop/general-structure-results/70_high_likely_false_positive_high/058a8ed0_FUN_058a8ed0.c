/*
FUNCTION_NAME: FUN_058a8ed0
ENTRY_POINT: 058a8ed0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4
*/


void FUN_058a8ed0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float in_s3;
  float fVar25;
  undefined8 local_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 *puStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long local_170;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  if ((DAT_06a55e64 & 1) == 0) {
    FUN_02d4dc40(
                Method_System_Collections_Generic_List<PhotonAnimatorView_SynchronizedParameter>_get_Item__
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_List<PhotonVRCosmeticsChanger_PhotonVRCosmeticTest>__ctor__
                );
    FUN_02d4dc40(Method_System_Collections_Generic_List<PhotonVRPlayer_CosmeticSlot>__ctor__);
    FUN_02d4dc40(Method_System_Collections_Generic_List<PhotonVRPlayer_CosmeticSlot>_GetEnumerator__
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>__ctor__
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Add__
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Remove__
                );
    FUN_02d4dc40(Method_System_Collections_Generic_List<PointerInputModule_ButtonState>__ctor__);
    FUN_02d4dc40(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_Add__
                );
    FUN_02d4dc40(Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ctor__);
    FUN_02d4dc40(Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_Add__);
    FUN_02d4dc40(Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Count__)
    ;
    FUN_02d4dc40(Method_System_Collections_Generic_List<PhotonAnimatorView_SynchronizedLayer>_Add__)
    ;
    DAT_06a55e64 = 1;
  }
  puVar4 = Method_System_Collections_Generic_List<PointerInputModule_ButtonState>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<PhotonAnimatorView_SynchronizedLayer>_Add__;
  puVar2 = Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_Add__;
  puVar1 = Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ctor__;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  if (*(int *)(param_1 + 0x28) == 2) {
    uVar7 = FUN_0319dbc8(param_1,*(undefined8 *)
                                  Method_System_Collections_Generic_List<PhotonAnimatorView_SynchronizedParameter>_get_Item__
                        );
    lVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                    /* try { // try from 058a9018 to 059a9057 has its CatchHandler @ 058a9018
                       catch() { ... } // from try @ 058a9018 with catch @ 058a9018
                       catch() { ... } // from try @ 058a9098 with catch @ 058a9018
                       catch() { ... } // from try @ 058a90d0 with catch @ 058a9018
                       catch() { ... } // from try @ 058a9110 with catch @ 058a9018 */
    FUN_036a56dc(lVar8,uVar7,*(undefined8 *)puVar4);
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar9 = *(long *)puVar3;
    }
    puVar12 = *(undefined8 **)(lVar9 + 0xb8);
    lVar13 = puVar12[1];
    if (lVar13 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
                    /* try { // try from 058a9058 to 059a906b has its CatchHandler @ 058a90a0 */
      uVar7 = *puVar12;
      lVar13 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_Add__
                                 );
                    /* try { // try from 058a9078 to 059a9083 has its CatchHandler @ 058a9098 */
      FUN_03a1f72c(lVar13,uVar7,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Count__
                   ,0);
                    /* try { // try from 058a9094 to 059a9097 has its CatchHandler @ 058a909c */
      plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar10 = lVar13;
                    /* catch(type#1 @ 06204328) { ... } // from try @ 058a9078 with catch @ 058a9098
                       try { // try from 058a9098 to 059a90cb has its CatchHandler @ 058a9018 */
      thunk_FUN_02dc1ef0(plVar10,lVar13);
    }
                    /* catch(type#1 @ 06204328) { ... } // from try @ 058a9094 with catch @ 058a909c
                        */
    if (lVar8 == 0) {
LAB_058a9400:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
                    /* catch(type#1 @ 06204328) { ... } // from try @ 058a9058 with catch @ 058a90a0
                        */
    FUN_036a732c(lVar8,lVar13,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Remove__
                );
  }
  else {
                    /* try { // try from 058a90cc to 059a90cf has its CatchHandler @ 058a9108 */
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ctor__ +
                0xe4) == 0) {
                    /* try { // try from 058a90d0 to 059a90f7 has its CatchHandler @ 058a9018 */
      thunk_FUN_02dabd98();
    }
    if (DAT_06a55e6d == '\0') {
      FUN_02d4dc40(Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ctor__);
      DAT_06a55e6d = '\x01';
    }
    lVar8 = *(long *)puVar1;
                    /* try { // try from 058a90f8 to 059a9107 has its CatchHandler @ 058a9108 */
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar8 = *(long *)puVar1;
    }
                    /* catch() { ... } // from try @ 058a90cc with catch @ 058a9108
                       catch() { ... } // from try @ 058a90f8 with catch @ 058a9108 */
                    /* try { // try from 058a910c to 059a910f has its CatchHandler @ 058a9118 */
    lVar8 = **(long **)(lVar8 + 0xb8);
                    /* try { // try from 058a9110 to 059a911b has its CatchHandler @ 058a9018 */
    if (lVar8 == 0) goto LAB_058a9400;
  }
  puVar4 = 
  Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>__ctor__
  ;
  puVar3 = Method_System_Collections_Generic_List<PhotonVRPlayer_CosmeticSlot>__ctor__;
  puVar2 = 
  Method_System_Collections_Generic_List<PhotonVRCosmeticsChanger_PhotonVRCosmeticTest>__ctor__;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 058a910c with catch @ 058a9118
                        */
                    /* try { // try from 058a911c to 059a915b has its CatchHandler @ 058a911c
                       catch() { ... } // from try @ 058a911c with catch @ 058a911c
                       catch() { ... } // from try @ 058a91a0 with catch @ 058a911c
                       catch() { ... } // from try @ 058a91d8 with catch @ 058a911c
                       catch() { ... } // from try @ 058a9218 with catch @ 058a911c */
  FUN_036a68ac(&local_100,lVar8,
               *(undefined8 *)
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Add__
              );
  puVar1 = PTR_DAT_066463e8;
  puStack_1e8 = &local_180;
                    /* try { // try from 058a915c to 059a9173 has its CatchHandler @ 058a91a8 */
  uStack_178 = uStack_f8;
  local_180 = local_100;
  local_170 = local_f0;
  local_1f0 = 0;
  while( true ) {
    do {
      uVar11 = FUN_049c6928(&local_180,*(undefined8 *)puVar3);
      lVar8 = local_170;
      if ((uVar11 & 1) == 0) {
        FUN_049c6924(&local_180,*(undefined8 *)puVar2);
        return;
      }
                    /* try { // try from 058a9180 to 059a918b has its CatchHandler @ 058a91a0 */
      uVar5 = FUN_05ee288c(*(undefined4 *)(param_1 + 0x44),0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
                    /* try { // try from 058a919c to 059a919f has its CatchHandler @ 058a91a4 */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 058a9180 with catch @ 058a91a0
                       try { // try from 058a91a0 to 059a91d3 has its CatchHandler @ 058a911c */
      lVar9 = FUN_05eddc40(lVar8,0);
                    /* catch(type#1 @ 06204328) { ... } // from try @ 058a919c with catch @ 058a91a4
                        */
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
                    /* catch(type#1 @ 06204328) { ... } // from try @ 058a915c with catch @ 058a91a8
                        */
      uVar6 = FUN_05ee1944(lVar9,0);
    } while (((uVar5 >> (ulong)(uVar6 & 0x1f) & 1) == 0) ||
            (uVar11 = FUN_058a6d50(lVar8,*(undefined4 *)(param_1 + 0x24)), (uVar11 & 1) == 0));
    lVar9 = FUN_05eddb70(lVar8,0);
                    /* try { // try from 058a91d4 to 059a91d7 has its CatchHandler @ 058a9210 */
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
                    /* try { // try from 058a91d8 to 059a91ff has its CatchHandler @ 058a911c */
    fVar17 = *(float *)(lVar8 + 0x34);
    fVar21 = *(float *)(lVar8 + 0x38);
    uVar14 = FUN_05eee40c(*(undefined4 *)(lVar8 + 0x30),lVar9,0);
    fVar18 = fVar17;
    fVar22 = fVar21;
    lVar9 = FUN_05eddb70(lVar8,0);
                    /* try { // try from 058a9200 to 059a920f has its CatchHandler @ 058a9210 */
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    fVar15 = (float)FUN_05ef2218(lVar9,0);
                    /* catch() { ... } // from try @ 058a91d4 with catch @ 058a9210
                       catch() { ... } // from try @ 058a9200 with catch @ 058a9210 */
                    /* try { // try from 058a9214 to 059a9217 has its CatchHandler @ 058a9220 */
                    /* try { // try from 058a9218 to 059a9223 has its CatchHandler @ 058a911c */
    fVar25 = *(float *)(lVar8 + 0x24);
    fVar23 = *(float *)(lVar8 + 0x28);
    fVar19 = *(float *)(lVar8 + 0x2c);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 058a9214 with catch @ 058a9220
                        */
                    /* try { // try from 058a9224 to 059a9263 has its CatchHandler @ 058a9224
                       catch() { ... } // from try @ 058a9224 with catch @ 058a9224
                       catch() { ... } // from try @ 058a92a8 with catch @ 058a9224
                       catch() { ... } // from try @ 058a92e0 with catch @ 058a9224
                       catch() { ... } // from try @ 058a9320 with catch @ 058a9224 */
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    fVar20 = fVar19;
    fVar24 = fVar23;
    FUN_05e715b8(&local_1e0,5,0);
    lVar9 = FUN_05eddb70(lVar8,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar16 = FUN_05eee4a8(lVar9,0);
                    /* try { // try from 058a9264 to 059a927b has its CatchHandler @ 058a92b0 */
    if (DAT_06a494dd == '\0') {
      FUN_02d4dc40(puVar1);
      DAT_06a494dd = '\x01';
    }
    FUN_05ecd198(&local_100,uVar14,fVar17,fVar21,uVar16,fVar20,fVar24,in_s3,0);
    uStack_228 = uStack_f8;
    local_230 = local_100;
    uStack_218 = uStack_e8;
    lStack_220 = local_f0;
    uStack_208 = uStack_d8;
    local_210 = local_e0;
    uStack_1f8 = uStack_c8;
    uStack_200 = uStack_d0;
    FUN_05e71584(&local_1e0,&local_230,0);
    FUN_05e715a4(ABS(fVar15) * fVar25,ABS(fVar18) * fVar23,ABS(fVar22) * fVar19,&local_1e0,0);
    FUN_05e715c0(&local_1e0,*(undefined4 *)(lVar8 + 0x3c),0);
    lVar8 = *param_2;
    if (lVar8 == 0) break;
    memcpy(auStack_160,&local_1e0,0x60);
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar13 = *(long *)puVar4;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar5 = *(uint *)(lVar8 + 0x18);
    if (uVar5 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar5 + 1;
      memcpy((void *)(lVar9 + (long)(int)uVar5 * 0x60 + 0x20),auStack_160,0x60);
      in_s3 = fVar19;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
      memcpy(&local_100,auStack_160,0x60);
      FUN_036a32e4(lVar8,&local_100,uVar7);
      in_s3 = fVar19;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


