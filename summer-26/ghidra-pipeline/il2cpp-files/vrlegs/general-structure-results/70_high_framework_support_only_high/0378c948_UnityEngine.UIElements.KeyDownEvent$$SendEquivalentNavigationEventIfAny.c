/*
FUNCTION_NAME: UnityEngine.UIElements.KeyDownEvent$$SendEquivalentNavigationEventIfAny
ENTRY_POINT: 0378c948
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_UIElements_KeyDownEvent__SendEquivalentNavigationEventIfAny(undefined4 param_1)

{
  uint *puVar1;
  void *__src;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uVar31;
  long lVar32;
  long *plVar33;
  ulong uVar34;
  undefined1 *puVar35;
  undefined1 uVar36;
  char cVar37;
  uint uVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  float *pfVar42;
  ulong uVar43;
  long lVar44;
  float *pfVar45;
  float *pfVar46;
  long *plVar47;
  long *plVar48;
  long lVar49;
  long lVar50;
  uint uVar51;
  long lVar52;
  long unaff_x19;
  char cVar53;
  int unaff_w20;
  undefined8 *unaff_x21;
  int unaff_w22;
  uint uVar54;
  long *plVar55;
  char *unaff_x24;
  long *plVar56;
  long lVar57;
  long *unaff_x29;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  undefined4 uVar77;
  float fVar78;
  undefined8 uVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined4 uVar83;
  float unaff_s8;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float unaff_s12;
  float unaff_s13;
  float fVar92;
  float unaff_s14;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  int iStack0000000000000028;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  int iStack00000000000000c0;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  float fStack00000000000000ec;
  long in_stack_00000110;
  undefined8 uStack0000000000000118;
  float fStack0000000000000120;
  undefined4 uStack0000000000000124;
  float in_stack_00000128;
  float fStack000000000000012c;
  undefined8 in_stack_00000140;
  undefined8 uStack0000000000000148;
  float in_stack_00000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  uint uStack0000000000000168;
  undefined4 uStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  int iStack0000000000000178;
  float fStack000000000000017c;
  long *in_stack_00000190;
  long lStack00000000000001a8;
  float fStack00000000000001bc;
  long in_stack_000001c0;
  long *in_stack_000001c8;
  int iStack00000000000001dc;
  long in_stack_000001e0;
  uint in_stack_000015dc;
  undefined8 in_stack_00001688;
  float fVar97;
  uint in_stack_0000169c;
  ulong in_stack_000016a0;
  long in_stack_00001a38;
  
  *(undefined4 *)(unaff_x19 + 0x1b4) = param_1;
  puVar10 = Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__;
                    /* try { // try from 0378c968 to 0388c983 has its CatchHandler @ 0378c9ec */
  FUN_020aa864(unaff_x19 + 0x1b8,&stack0x000016a0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__);
  FUN_020aa864(unaff_x19 + 0x1d8,&stack0x000016a0,*(undefined8 *)puVar10);
                    /* try { // try from 0378c990 to 0388c993 has its CatchHandler @ 0378c9e8 */
                    /* try { // try from 0378c994 to 0388ca07 has its CatchHandler @ 0378c8e0 */
  FUN_020aa864(unaff_x19 + 0x1f8,&stack0x000016a0,*(undefined8 *)puVar10);
  uVar77 = *(undefined4 *)(unaff_x19 + 0x1ac);
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_037a1df8(0);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0378c990 with catch @ 0378c9e8
                        */
  FUN_037a1fc8(&stack0x00000978,uVar77,0);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0378c968 with catch @ 0378c9ec
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0378c944 with catch @ 0378c9f0
                        */
                    /* try { // try from 0378ca08 to 0388ca0b has its CatchHandler @ 0378ca18 */
  FUN_020aa864(unaff_x19 + 0x238,&stack0x00000960,
               *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Clear__);
                    /* catch() { ... } // from try @ 0378ca08 with catch @ 0378ca18 */
  *(undefined8 *)(unaff_x19 + 0x288) = 0;
                    /* try { // try from 0378ca24 to 0388ca43 has its CatchHandler @ 0378ca58 */
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x288,0);
  FUN_020aa864(unaff_x19 + 0x290,0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_Texture2D>_set_Item__);
                    /* try { // try from 0378ca44 to 0388ca4f has its CatchHandler @ 0378c8e0 */
  if (*(long *)(unaff_x19 + 0x68) == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* try { // try from 0378ca50 to 0388ca57 has its CatchHandler @ 0378ca58 */
  uVar19 = FUN_03779d3c(*(long *)(unaff_x19 + 0x68),0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0378ca24 with catch @ 0378ca58
                       catch(type#2 @ 00000000) { ... } // from try @ 0378ca50 with catch @ 0378ca58
                        */
  *(uint *)(unaff_x19 + 0x19a4) = uVar19 & 0xff;
  FUN_020aa864(unaff_x19 + 0x268,&stack0x000016a0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_TextStyle>_ContainsKey__);
                    /* try { // try from 0378ca84 to 0388cafb has its CatchHandler @ 0378ca84
                       catch() { ... } // from try @ 0378ca84 with catch @ 0378ca84
                       catch() { ... } // from try @ 0378cb88 with catch @ 0378ca84
                       catch() { ... } // from try @ 0378cbe4 with catch @ 0378ca84
                       catch() { ... } // from try @ 0378cc54 with catch @ 0378ca84 */
  FUN_020aa7ec(unaff_x19 + 0x2c0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_Add__);
  plVar55 = (long *)PTR_DAT_03cbe438;
  if (DAT_0411f16a == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f16a = '\x01';
  }
  uVar77 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 0x14);
  *(undefined8 *)(unaff_x19 + 0x19a8) =
       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 0xc);
  *(undefined4 *)(unaff_x19 + 0x19b0) = uVar77;
  if (DAT_0411f169 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbdeb8);
                    /* try { // try from 0378cafc to 0388cb0f has its CatchHandler @ 0378cc00 */
    DAT_0411f169 = '\x01';
  }
  uVar29 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
                    /* try { // try from 0378cb20 to 0388cb3b has its CatchHandler @ 0378cbf8 */
  *(undefined8 *)(unaff_x24 + 0x444) = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
  *(undefined8 *)(unaff_x24 + 0x43c) = uVar29;
  *(undefined8 *)(unaff_x19 + 0x2e0) = DAT_00d37268;
  if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
                    /* try { // try from 0378cb44 to 0388cb57 has its CatchHandler @ 0378cbfc */
  FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
  memcpy(&stack0x00001610,&stack0x000016a0,0x60);
  fVar58 = (float)FUN_03776970(&stack0x00001610,0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                    /* try { // try from 0378cb80 to 0388cb87 has its CatchHandler @ 0378cbf0 */
                    /* try { // try from 0378cb88 to 0388cbdb has its CatchHandler @ 0378ca84 */
  fVar59 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  puVar1 = (uint *)(unaff_x19 + 0x324);
  fVar60 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
  *(undefined8 *)(unaff_x19 + 0x2f4) = 0;
  *(undefined8 *)(unaff_x19 + 0x2ec) = 0;
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  uVar43 = in_stack_000016a0 & 0xffffffff00000000;
  FUN_020aa864(unaff_x19 + 0x300,&stack0x000016a0,*unaff_x21);
  uVar9 = DAT_00d377f0;
  uVar30 = _UNK_00d36c18;
  uVar29 = _DAT_00d36c10;
                    /* try { // try from 0378cbdc to 0388cbdf has its CatchHandler @ 0378cbf4 */
                    /* try { // try from 0378cbe0 to 0388cbe3 has its CatchHandler @ 0378cbec */
                    /* try { // try from 0378cbe4 to 0388cc17 has its CatchHandler @ 0378ca84 */
  *(undefined1 *)(unaff_x19 + 800) = 0;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0378cbe0 with catch @ 0378cbec
                        */
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x19 + 0x32c) = 0;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0378cb80 with catch @ 0378cbf0
                        */
  *(undefined4 *)(unaff_x19 + 0x334) = 0;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0378cbdc with catch @ 0378cbf4
                        */
  *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0378cb20 with catch @ 0378cbf8
                        */
  *(undefined1 *)(unaff_x19 + 0x2e8) = 0;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0378cb44 with catch @ 0378cbfc
                        */
  *(undefined4 *)(unaff_x19 + 0x19c4) = 0x80000000;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0378cafc with catch @ 0378cc00
                        */
  *(undefined8 *)(unaff_x19 + 0x338) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x348) = uVar30;
  *(undefined8 *)(unaff_x19 + 0x340) = uVar29;
  *(undefined4 *)(unaff_x19 + 0x350) = 0;
  if (in_stack_000001c0 == 0) goto LAB_03793c9c;
                    /* try { // try from 0378cc18 to 0388cc1b has its CatchHandler @ 0378cc28 */
  plVar47 = (long *)(in_stack_000001c0 + 0x50);
                    /* catch() { ... } // from try @ 0378cc18 with catch @ 0378cc28 */
  if (*plVar47 == 0) goto LAB_03793c9c;
                    /* try { // try from 0378cc34 to 0388cc53 has its CatchHandler @ 0378cc68 */
  uVar27 = *(int *)(in_stack_000001e0 + 0xf0) - 1;
  uVar19 = *(int *)(*plVar47 + 0x18) - 1;
  if ((int)uVar27 <= (int)uVar19) {
    uVar19 = uVar27;
  }
  uVar3 = 0;
  if (-1 < (int)uVar27) {
    uVar3 = uVar19;
  }
                    /* try { // try from 0378cc54 to 0388cc5f has its CatchHandler @ 0378ca84 */
                    /* try { // try from 0378cc60 to 0388cc67 has its CatchHandler @ 0378cc68 */
  FUN_037a7e30(in_stack_000001c0,0);
  fVar61 = *(float *)(in_stack_000001e0 + 0x28);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0378cc34 with catch @ 0378cc68
                       catch(type#2 @ 00000000) { ... } // from try @ 0378cc60 with catch @ 0378cc68
                        */
  fVar78 = *(float *)(in_stack_000001e0 + 0x2c);
  fVar95 = *(float *)(unaff_x19 + 0x58);
  fVar84 = *(float *)(unaff_x19 + 0x5c);
  fVar62 = *(float *)(in_stack_000001e0 + 0x34);
  pfVar45 = (float *)(unaff_x19 + 0x354);
  *pfVar45 = 0.0;
  *(undefined4 *)(unaff_x19 + 0x358) = 0;
  *(undefined4 *)(unaff_x19 + 0x35c) = 0xbf800000;
  puVar10 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
  lVar28 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
  if (*(int *)(lVar28 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar28 = *(long *)puVar10;
  }
  *(undefined8 *)(unaff_x19 + 0x360) = **(undefined8 **)(lVar28 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0x368) = *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 8);
  FUN_037a7cb4(in_stack_000001c0,0);
  *(undefined4 *)(unaff_x19 + 0x378) = 0;
  *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x370) = 0;
  fVar97 = 0.0;
  bVar14 = false;
  *(undefined2 *)(unaff_x19 + 0x37c) = 0;
  FUN_037a1dd0(&stack0x00001688,0xffffffff,0,0);
  cVar37 = *(char *)(in_stack_000001e0 + 0x78);
  FUN_03796df8();
  FUN_03796df8();
  __src = (void *)(unaff_x19 + 0xab0);
  FUN_03796df8();
  FUN_03796df8();
  FUN_03796df8();
  lVar28 = unaff_x19 + 0x15e8;
  FUN_020aa7ec(lVar28,*(undefined8 *)
                       Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_ContainsKey__
              );
  *(undefined1 *)
   (*(long *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
             0xb8) + 8) = 0;
  fVar81 = DAT_00d38d28;
  fVar94 = DAT_00d38938;
  lVar40 = *(long *)(in_stack_000001e0 + 0x68);
  uVar19 = 0;
  lVar41 = *(long *)(unaff_x19 + 0x20);
  if (lVar41 == 0) goto LAB_03793c9c;
  fVar58 = fVar58 - (fVar59 - fVar60);
  fVar59 = 0.0;
  if (fVar95 <= 0.0) {
    fVar95 = 0.0;
  }
  if (fVar84 <= 0.0) {
    fVar84 = 0.0;
  }
  fVar63 = (unaff_s14 / (float)unaff_w22) * unaff_s8 * unaff_s13;
  plVar2 = (long *)(in_stack_000001c0 + 0x30);
  uVar27 = unaff_w20 - 1;
  plVar56 = (long *)(unaff_x19 + 0x1588);
  fVar95 = fVar95 + DAT_00d3879c;
  fVar80 = fVar84 + DAT_00d3879c;
  fVar64 = unaff_s13 * unaff_s12 * DAT_00d38d28;
  bVar11 = true;
  iStack0000000000000028 = 0;
  bVar16 = false;
  iStack00000000000001dc = 0;
  bVar18 = 1;
  fStack0000000000000174 = fVar95;
  fVar60 = fVar63;
LAB_0378cf04:
  if ((int)*(uint *)(lVar41 + 0x18) <= (int)uVar19) {
LAB_03790fec:
    if ((((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
         (DAT_00d389f8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
        (fVar58 = *_fStack00000000000000d0, fVar58 < *(float *)(in_stack_000001e0 + 0xb0))) &&
       (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
      fVar59 = *(float *)(in_stack_000001e0 + 0x108);
      if (*(float *)(unaff_x19 + 0x1594) < fVar59 / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x1594) = 0;
      }
      fVar60 = (*(float *)(unaff_x19 + 0x1598) - fVar58) * 0.5;
      if (fVar60 <= DAT_00d38b84) {
        fVar60 = DAT_00d38b84;
      }
      *(float *)(unaff_x19 + 0x159c) = fVar58;
      fVar60 = (fVar58 + fVar60) * 20.0 + 0.5;
      fVar58 = DAT_00d38e60;
      if (fVar60 != INFINITY) {
        fVar58 = (float)(int)fVar60 / 20.0;
      }
      if (fVar59 <= fVar58) {
        fVar58 = fVar59;
      }
LAB_037910ac:
      *(float *)(unaff_x19 + 0xec) = fVar58;
      goto LAB_0378c81c;
    }
    unaff_x24[0x30] = '\x01';
    if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
      uVar29 = FUN_0276793c(unaff_x19 + 0x15a0,0);
      uVar30 = FUN_0277fa90(_fStack00000000000000d0,0);
      uVar29 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar29,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar30,0);
      if (*(int *)(*plVar55 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*plVar55);
      }
      FUN_0367a6ec(uVar29,0);
    }
    plVar56 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
    plVar55 = (long *)PTR_DAT_03cbded8;
    if ((*puVar1 == 0) || ((*puVar1 == 1 && (in_stack_0000169c == 3)))) {
      FUN_0379e288(1,in_stack_000001c0,0);
      goto LAB_0378c81c;
    }
    lVar28 = *(long *)(in_stack_000001c0 + 0x58);
    if (lVar28 == 0) goto LAB_03793c9c;
    uVar19 = *(uint *)(unaff_x19 + 0x78);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ + 0xe0) ==
        0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar28 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
    FUN_03785b74(lVar28 + (long)(int)uVar19 * 0x50 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar21 = *(int *)(in_stack_000001e0 + 0x70);
    fStack0000000000000158 = **(float **)(*plVar55 + 0xb8);
    uStack0000000000000148 = *(undefined8 *)(*(float **)(*plVar55 + 0xb8) + 1);
    lVar28 = *(long *)(unaff_x19 + 0x50);
    uStack0000000000000118 = uStack0000000000000148;
    fStack0000000000000120 = fStack0000000000000158;
    if (iVar21 < 0x421) {
      if (iVar21 < 0x205) {
        if (iVar21 < 0x109) {
          if ((iVar21 - 0x101U < 8) && ((1 << (ulong)(iVar21 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_0379144c:
            if (lVar28 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar28 + 0x18) < 2) goto thunk_FUN_01ab6c44;
            uVar29 = *(undefined8 *)(lVar28 + 0x30);
            if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
              lVar40 = *plVar47;
              if (lVar40 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar40 + 0x18) <= uVar3) goto thunk_FUN_01ab6c44;
              fVar58 = *(float *)(lVar40 + (long)(int)uVar3 * 0x14 + 0x28);
            }
            else {
              fVar58 = *(float *)(unaff_x19 + 0x374);
            }
            fStack0000000000000120 = fVar61 + 0.0 + *(float *)(lVar28 + 0x2c);
            fVar62 = (0.0 - fVar58) - fVar78;
            goto LAB_037917ec;
          }
        }
        else if (iVar21 < 0x121) {
          if ((iVar21 == 0x110) || (iVar21 == 0x120)) goto LAB_0379144c;
        }
        else if ((iVar21 - 0x201U < 4) && (iVar21 - 0x201U != 2)) goto LAB_037916dc;
      }
      else {
        if (iVar21 < 0x403) {
          if (iVar21 < 0x211) {
            if ((iVar21 == 0x208) || (iVar21 == 0x210)) goto LAB_037916dc;
            goto LAB_037917fc;
          }
          if (iVar21 != 0x220) {
            if (iVar21 - 0x401U < 2) goto LAB_03791588;
            goto LAB_037917fc;
          }
LAB_037916dc:
          if (lVar28 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
          goto thunk_FUN_01ab6c44;
          fStack0000000000000120 = (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
          uVar29 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar28 + 0x24) +
                            (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar28 = *plVar47;
            if (lVar28 != 0) {
              if (uVar3 < *(uint *)(lVar28 + 0x18)) {
                lVar28 = lVar28 + (long)(int)uVar3 * 0x14;
                fStack0000000000000120 = fVar61 + 0.0 + fStack0000000000000120;
                fVar62 = ((fVar78 + *(float *)(lVar28 + 0x28) + *(float *)(lVar28 + 0x30)) - fVar62)
                         * -0.5 + 0.0;
                goto LAB_037917ec;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          fStack0000000000000120 = fVar61 + 0.0 + fStack0000000000000120;
          fVar62 = ((fVar78 + *(float *)(unaff_x19 + 0x374) + fVar97) - fVar62) * -0.5 + 0.0;
        }
        else {
          if (iVar21 < 0x409) {
            if (iVar21 != 0x404) {
              bVar14 = iVar21 == 0x408;
              goto LAB_03791574;
            }
          }
          else if (iVar21 != 0x410) {
            bVar14 = iVar21 == 0x420;
LAB_03791574:
            if (!bVar14) goto LAB_037917fc;
          }
LAB_03791588:
          if (lVar28 == 0) goto LAB_03793c9c;
          if (*(int *)(lVar28 + 0x18) == 0) goto thunk_FUN_01ab6c44;
          uVar29 = *(undefined8 *)(lVar28 + 0x24);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar40 = *plVar47;
            if (lVar40 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar40 + 0x18) <= uVar3) goto thunk_FUN_01ab6c44;
            fVar97 = *(float *)(lVar40 + (long)(int)uVar3 * 0x14 + 0x30);
          }
          fStack0000000000000120 = fVar61 + 0.0 + *(float *)(lVar28 + 0x20);
          fVar62 = fVar62 + (0.0 - fVar97);
        }
LAB_037917ec:
        uStack0000000000000118 =
             CONCAT44((float)((ulong)uVar29 >> 0x20) + 0.0,(float)uVar29 + fVar62);
      }
    }
    else if (iVar21 < 0x1005) {
      if (iVar21 < 0x809) {
        if ((iVar21 - 0x801U < 8) && ((1 << (ulong)(iVar21 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_037913b0:
          if (lVar28 != 0) {
            if ((*(int *)(lVar28 + 0x18) != 1) && (*(int *)(lVar28 + 0x18) != 0)) {
              uStack0000000000000118 =
                   CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar28 + 0x24) +
                            (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5 + 0.0);
              fStack0000000000000120 =
                   fVar61 + 0.0 + (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
              goto LAB_037917fc;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
      }
      else if (iVar21 < 0x821) {
        if ((iVar21 == 0x810) || (iVar21 == 0x820)) goto LAB_037913b0;
      }
      else if ((iVar21 - 0x1001U < 4) && (iVar21 - 0x1001U != 2)) goto LAB_03791644;
    }
    else if (iVar21 < 0x2003) {
      if (iVar21 < 0x1011) {
        if ((iVar21 == 0x1008) || (iVar21 == 0x1010)) goto LAB_03791644;
      }
      else {
        if (iVar21 == 0x1020) {
LAB_03791644:
          if (lVar28 != 0) {
            if ((*(int *)(lVar28 + 0x18) != 1) && (*(int *)(lVar28 + 0x18) != 0)) {
              uVar29 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar28 + 0x24) +
                                (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5);
              fStack0000000000000120 =
                   fVar61 + 0.0 + (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
              fVar62 = 0.0 - ((fVar78 + *(float *)(unaff_x19 + 0x36c) +
                              *(float *)(unaff_x19 + 0x364)) - fVar62) * 0.5;
              goto LAB_037917ec;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (iVar21 - 0x2001U < 2) goto LAB_037914ec;
      }
    }
    else {
      if (iVar21 < 0x2009) {
        if (iVar21 != 0x2004) {
          iVar25 = 0x2008;
          goto LAB_037914d4;
        }
      }
      else if (iVar21 != 0x2010) {
        iVar25 = 0x2020;
LAB_037914d4:
        if (iVar21 != iVar25) goto LAB_037917fc;
      }
LAB_037914ec:
      if (lVar28 == 0) goto LAB_03793c9c;
      if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto thunk_FUN_01ab6c44;
      uStack0000000000000118 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30))
                    * 0.5 + (0.0 - ((*(float *)(unaff_x19 + 0x370) - fVar78) - fVar62) * 0.5));
      fStack0000000000000120 =
           fVar61 + 0.0 + (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
    }
LAB_037917fc:
    uVar77 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ + 0xe0)
        == 0) {
      thunk_FUN_01a58e78(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                        );
    }
    FUN_037a1df8(0);
    FUN_037a1fc8(&stack0x00001670,0x4000ffff,0);
    fVar58 = DAT_00d38d70;
    uVar19 = *puVar1;
    if ((int)uVar19 < 1) {
      iVar25 = 0;
      iVar21 = 0;
      goto LAB_03793a5c;
    }
    lVar28 = *plVar2;
    if (lVar28 != 0) {
      fStack0000000000000174 = 0.0;
      fStack00000000000000d8 = 0.0;
      fStack00000000000000a8 = 0.0;
      plVar47 = (long *)(in_stack_000001c0 + 0x38);
      fStack00000000000000ec = in_stack_00000128;
      fVar62 = 0.0;
      fStack00000000000000a4 = 0.0;
      uVar31 = (ulong)&stack0x00001670 | 4;
      bVar16 = false;
      fVar78 = 0.0;
      fVar59 = 0.0;
      uVar43 = (ulong)&stack0x000009f0 | 4;
      bVar11 = false;
      bVar14 = false;
      iVar21 = 0;
      uVar27 = 0;
      _uStack0000000000000168 = 0;
      iStack00000000000000c0 = 0;
      iStack0000000000000178 = 0;
      lStack00000000000001a8 = 0x2fc;
      fStack000000000000012c = in_stack_00000128;
      fStack00000000000000c8 = in_stack_00000140._4_4_;
      uStack00000000000000cc = uStack0000000000000124;
      fStack00000000000000d0 = in_stack_00000128;
      uStack00000000000000dc = uStack0000000000000124;
      fStack000000000000015c = DAT_00d38d70;
      uVar20 = 0;
      uVar23 = 1;
      fVar60 = in_stack_00000140._4_4_;
      fVar61 = in_stack_00000140._4_4_;
      goto LAB_0379194c;
    }
    goto LAB_03793c9c;
  }
  if (*(uint *)(lVar41 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
  uVar20 = *(uint *)(lVar41 + (long)(int)uVar19 * 0x10 + 0x24);
  if (uVar20 == 0) goto LAB_03790fec;
  uVar29 = in_stack_00001688;
  if (5 < iStack00000000000001dc) {
    uVar29 = FUN_0278d4e8(&stack0x0000169c,0);
    uVar30 = FUN_0276793c(&stack0x0000160c,0);
    uVar29 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar29,
                          *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar30,0);
    if (*(int *)(*plVar55 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*plVar55);
    }
    FUN_0367ae18(uVar29,0);
    uVar29 = CONCAT44(3,*puVar1);
  }
  in_stack_00001688 = uVar29;
  if (uVar20 == 0x1a) goto LAB_0378d260;
  if ((uVar20 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
    unaff_x24[0] = '\x01';
    unaff_x24[1] = '\x01';
    uVar31 = FUN_037974c0();
    if (((uVar31 & 1) != 0) && (uVar19 = in_stack_000015dc, *unaff_x24 == '\x01'))
    goto LAB_0378d260;
  }
  else {
    lVar41 = *plVar2;
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
    lVar41 = lVar41 + (long)(int)*puVar1 * 0x188;
    *unaff_x24 = *(char *)(lVar41 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar41 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar41 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
  }
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  uVar23 = *(uint *)(unaff_x19 + 0x324);
  if (*(uint *)(lVar41 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
  lVar57 = (long)(int)uVar23;
  uVar77 = *(undefined4 *)(unaff_x19 + 0x78);
  cVar53 = *(char *)(lVar41 + lVar57 * 0x188 + 100);
  unaff_x24[1] = '\0';
  if ((uint)uVar29 == uVar23) {
    uVar20 = (uint)((ulong)uVar29 >> 0x20);
    bVar15 = true;
    *unaff_x24 = '\x01';
    if (uVar20 == 0x2026) {
      *(undefined8 *)(lVar41 + lVar57 * 0x188 + 0x30) = *(undefined8 *)(unaff_x19 + 0x1a00);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar41 = *plVar2;
      if (lVar41 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
      lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188;
      *(undefined1 *)(lVar41 + 0x28) = 1;
      *(undefined8 *)(lVar41 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar41 = *plVar2;
      if (lVar41 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
      *(undefined8 *)(lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188 + 0x58) =
           *(undefined8 *)(unaff_x19 + 0x1a10);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar41 = *plVar2;
      if (lVar41 == 0) goto LAB_03793c9c;
      uVar23 = *puVar1;
      if (*(uint *)(lVar41 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
      bVar15 = true;
      *(undefined4 *)(lVar41 + (long)(int)uVar23 * 0x188 + 0x60) =
           *(undefined4 *)(unaff_x19 + 0x1a18);
      *(undefined1 *)
       (*(long *)(*(long *)
                   Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                 0xb8) + 8) = 1;
      uVar29 = CONCAT44(3,uVar23 + 1);
    }
    else if (uVar20 == 3) {
      if ((*in_stack_000001c8 == 0) || (lVar32 = FUN_03779b3c(*in_stack_000001c8,0), lVar32 == 0))
      goto LAB_03793c9c;
      FUN_0219b634(lVar32,&stack0x00000978,&stack0x000016a0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                  );
      if (*(uint *)(lVar41 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
      *(ulong *)(lVar41 + lVar57 * 0x188 + 0x30) = uVar43;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      bVar15 = true;
      *(undefined1 *)
       (*(long *)(*(long *)
                   Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                 0xb8) + 8) = 1;
      uVar23 = *puVar1;
    }
  }
  else {
    bVar15 = false;
  }
  in_stack_00001688 = uVar29;
  if (((int)uVar23 < *(int *)(in_stack_000001e0 + 0xe4)) && (uVar20 != 3)) {
    lVar41 = *plVar2;
    if (lVar41 != 0) {
      if (uVar23 < *(uint *)(lVar41 + 0x18)) {
        lVar41 = lVar41 + (long)(int)uVar23 * 0x188;
        *(undefined1 *)(lVar41 + 0x1a0) = 0;
        *(undefined2 *)(lVar41 + 0x20) = 0x200b;
        *(undefined4 *)(lVar41 + 0x6c) = 0;
        *puVar1 = uVar23 + 1;
        goto LAB_0378d260;
      }
      goto thunk_FUN_01ab6c44;
    }
    goto LAB_03793c9c;
  }
  cVar6 = *unaff_x24;
  if (cVar6 == '\x01') {
    uVar23 = *(uint *)(unaff_x19 + 0x124);
    if ((uVar23 >> 4 & 1) == 0) {
      if ((uVar23 >> 3 & 1) == 0) {
        fStack000000000000017c = 1.0;
        if ((uVar23 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar31 = FUN_026b812c(uVar20,0);
          if ((uVar31 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_026b8410(uVar20,0);
            uVar20 = uVar20 & 0xffff;
            fStack000000000000017c = fVar94;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar31 = FUN_026b8070(uVar20,0);
        fStack000000000000017c = 1.0;
        if ((uVar31 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b8594(uVar20,0);
          goto LAB_0378d3d0;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar31 = FUN_026b812c(uVar20,0);
      fStack000000000000017c = 1.0;
      if ((uVar31 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b8410(uVar20,0);
LAB_0378d3d0:
        fStack000000000000017c = 1.0;
        uVar20 = uVar20 & 0xffff;
      }
    }
    cVar6 = *unaff_x24;
  }
  else {
    fStack000000000000017c = 1.0;
  }
  if (cVar6 == '\x01') {
    lVar41 = *plVar2;
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
    *plVar56 = *(long *)(lVar41 + (long)(int)*puVar1 * 0x188 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar56);
    if (*plVar56 == 0) goto LAB_0378d260;
    lVar41 = *plVar2;
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
    *in_stack_000001c8 = *(long *)(lVar41 + (long)(int)*puVar1 * 0x188 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
    lVar41 = *plVar2;
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
    *in_stack_00000190 = *(long *)(lVar41 + (long)(int)*puVar1 * 0x188 + 0x58);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar41 = *plVar2;
    if (lVar41 == 0) goto LAB_03793c9c;
    uVar24 = *puVar1;
    uVar23 = *(uint *)(lVar41 + 0x18);
    if (uVar23 <= uVar24) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar41 + (long)(int)uVar24 * 0x188 + 0x60);
    if (bVar15) {
      lVar57 = *(long *)(unaff_x19 + 0x20);
      if (lVar57 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar57 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
      if ((*(int *)(lVar57 + (long)(int)uVar19 * 0x10 + 0x24) != 10) ||
         (uVar24 == *(uint *)(unaff_x19 + 0x328))) goto LAB_0378d570;
      if (uVar23 <= uVar24 - 1) goto thunk_FUN_01ab6c44;
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar59 = *(float *)(lVar41 + (long)(int)(uVar24 - 1) * 0x188 + 0x68);
      iVar21 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
      lVar41 = *in_stack_000001c8;
    }
    else {
LAB_0378d570:
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar59 = *(float *)(unaff_x19 + 0xf4);
      iVar21 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
      lVar41 = *(long *)(unaff_x19 + 0x68);
    }
    if (lVar41 == 0) goto LAB_03793c9c;
    fVar70 = (float)FUN_03776960(lVar41 + 0xb0,0);
    fVar65 = in_stack_00000150;
    if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
      fVar65 = 1.0;
    }
    fStack0000000000000170 = 0.0;
    fVar67 = 0.0;
    if (!(bool)(bVar15 & uVar20 == 0x2026)) {
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar67 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fStack0000000000000170 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
    }
    lVar41 = *(long *)(unaff_x19 + 0x1588);
    if ((lVar41 == 0) || (*(long *)(lVar41 + 0x20) == 0)) goto LAB_03793c9c;
    fVar90 = *(float *)(unaff_x19 + 0xf0);
    fVar66 = *(float *)(lVar41 + 0x2c);
    fVar60 = (float)FUN_03776ea8(*(long *)(lVar41 + 0x20),0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar68 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar92 = *(float *)(unaff_x19 + 0xf0);
    fVar69 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
    lVar41 = *plVar2;
    if (lVar41 == 0) goto LAB_03793c9c;
    uVar23 = *(uint *)(unaff_x19 + 0x324);
    if (*(uint *)(lVar41 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
    lVar57 = lVar41 + (long)(int)uVar23 * 0x188;
    fVar65 = ((fStack000000000000017c * fVar59) / (float)iVar21) * fVar70 * fVar65;
    fVar60 = fVar65 * fVar90 * fVar66 * fVar60;
    *(undefined1 *)(lVar57 + 0x28) = 1;
    *(float *)(lVar57 + 0x16c) = fVar60;
    fVar59 = *(float *)(unaff_x19 + 0xd8);
    fVar69 = fVar65 * fVar68 * fVar92 * fVar69;
LAB_0378db90:
    fVar65 = fVar60;
    if (uVar20 == 3 || uVar20 == 0xad) {
      fVar65 = 0.0;
    }
  }
  else {
    if (cVar6 == '\x02') {
      lVar41 = *plVar2;
      if (lVar41 != 0) {
        if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
        plVar55 = *(long **)(lVar41 + (long)(int)*puVar1 * 0x188 + 0x30);
        if (plVar55 != (long *)0x0) {
          bVar17 = *(byte *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__
                            + 0x130);
          if ((*(byte *)(*plVar55 + 0x130) < bVar17) ||
             (*(long *)(*(long *)(*plVar55 + 200) + (ulong)bVar17 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar55);
          }
          plVar33 = (long *)FUN_03783144(plVar55,0);
          if (plVar33 == (long *)0x0) {
            plVar33 = (long *)0x0;
            *unaff_x29 = 0;
          }
          else {
            lVar41 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
            bVar17 = *(byte *)(lVar41 + 0x130);
            if (*(byte *)(*plVar33 + 0x130) < bVar17) {
              plVar48 = (long *)0x0;
            }
            else {
              plVar48 = plVar33;
              if (*(long *)(*(long *)(*plVar33 + 200) + (ulong)bVar17 * 8 + -8) != lVar41) {
                plVar48 = (long *)0x0;
              }
            }
            *unaff_x29 = (long)plVar48;
            if (*(byte *)(*plVar33 + 0x130) < bVar17) {
              plVar33 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar33 + 200) + (ulong)bVar17 * 8 + -8) != lVar41) {
              plVar33 = (long *)0x0;
            }
          }
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29,plVar33);
          iVar21 = FUN_0377acf0(plVar55,0);
          *(int *)(unaff_x19 + 0x157c) = iVar21;
          if (uVar20 == 0x3c) {
            uVar20 = iVar21 + 0xe000;
          }
          else {
            uVar22 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            *(undefined4 *)(unaff_x19 + 0x1580) = uVar22;
          }
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            fVar59 = *(float *)(unaff_x19 + 0xf4);
            FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
            memcpy(&stack0x00001610,&stack0x000016a0,0x60);
            iVar21 = FUN_03776950(&stack0x00001610,0);
            if (*in_stack_000001c8 != 0) {
              FUN_03779650(&stack0x000016a0,*in_stack_000001c8,0);
              memcpy(&stack0x00001610,&stack0x000016a0,0x60);
              fVar65 = (float)FUN_03776960(&stack0x00001610,0);
              fVar60 = in_stack_00000150;
              if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                fVar60 = 1.0;
              }
              if (*unaff_x29 == 0) goto LAB_03793c9c;
              fVar60 = (fVar59 / (float)iVar21) * fVar65 * fVar60;
              iVar21 = FUN_03776950(*unaff_x29 + 0x48,0);
              fVar59 = *(float *)(unaff_x19 + 0xf4);
              if (iVar21 < 1) {
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                iVar21 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar65 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
                fStack0000000000000170 = in_stack_00000150;
                if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                  fStack0000000000000170 = 1.0;
                }
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar70 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                if (plVar55[4] == 0) goto LAB_03793c9c;
                FUN_03776e6c(&stack0x000016a0,plVar55[4],0);
                fVar90 = (float)FUN_03776c9c(&stack0x000015c0,0);
                if (plVar55[4] == 0) goto LAB_03793c9c;
                fVar66 = *(float *)((long)plVar55 + 0x2c);
                fVar68 = (float)FUN_03776ea8(plVar55[4],0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar67 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar92 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar71 = *(float *)(unaff_x19 + 0xf0);
                fVar69 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
                if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
                fVar69 = fVar60 * fVar92 * fVar71 * fVar69;
                fStack0000000000000170 = (fVar59 / (float)iVar21) * fVar65 * fStack0000000000000170;
                fVar60 = fStack0000000000000170 * (fVar70 / fVar90) * fVar66 * fVar68;
                fStack0000000000000170 = fStack0000000000000170 / fVar60;
                fVar67 = fStack0000000000000170 * fVar67;
                fVar59 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                fStack0000000000000170 = fStack0000000000000170 * fVar59;
              }
              else {
                if (*unaff_x29 == 0) goto LAB_03793c9c;
                iVar21 = FUN_03776950(*unaff_x29 + 0x48,0);
                if (*unaff_x29 == 0) goto LAB_03793c9c;
                fVar65 = (float)FUN_03776960(*unaff_x29 + 0x48,0);
                if (plVar55[4] == 0) goto LAB_03793c9c;
                fVar90 = *(float *)((long)plVar55 + 0x2c);
                fVar70 = in_stack_00000150;
                if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                  fVar70 = 1.0;
                }
                fVar66 = (float)FUN_03776ea8(plVar55[4],0);
                if (*unaff_x29 == 0) goto LAB_03793c9c;
                fVar67 = (float)FUN_03776980(*unaff_x29 + 0x48,0);
                if (*unaff_x29 == 0) goto LAB_03793c9c;
                fVar68 = (float)FUN_037769b0(*unaff_x29 + 0x48,0);
                if (*unaff_x29 == 0) goto LAB_03793c9c;
                fVar92 = *(float *)(unaff_x19 + 0xf0);
                fVar69 = (float)FUN_03776960(*unaff_x29 + 0x48,0);
                if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
                fVar69 = fVar60 * fVar68 * fVar92 * fVar69;
                fVar60 = (fVar59 / (float)iVar21) * fVar65 * fVar70 * fVar90 * fVar66;
                fStack0000000000000170 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
              }
              *plVar56 = (long)plVar55;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar56,plVar55);
              lVar41 = *plVar2;
              if (lVar41 != 0) {
                if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
                lVar41 = lVar41 + (long)(int)*puVar1 * 0x188;
                *(undefined1 *)(lVar41 + 0x28) = 2;
                *(float *)(lVar41 + 0x16c) = fVar60;
                *(long *)(lVar41 + 0x48) = *unaff_x29;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar41 = *plVar2;
                if (lVar41 != 0) {
                  if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
                  *(long *)(lVar41 + (long)(int)*puVar1 * 0x188 + 0x40) = *in_stack_000001c8;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar41 = *plVar2;
                  if (lVar41 != 0) {
                    uVar23 = *puVar1;
                    if (uVar23 < *(uint *)(lVar41 + 0x18)) {
                      *(undefined4 *)(lVar41 + (long)(int)uVar23 * 0x188 + 0x60) =
                           *(undefined4 *)(unaff_x19 + 0x78);
                      *(undefined4 *)(unaff_x19 + 0x78) = uVar77;
                      fVar59 = 0.0;
                      goto LAB_0378db90;
                    }
                    goto thunk_FUN_01ab6c44;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_03793c9c;
    }
    lVar41 = *plVar2;
    fVar69 = 0.0;
    fVar65 = fVar60;
    if (uVar20 == 3 || uVar20 == 0xad) {
      fVar65 = 0.0;
    }
    if (lVar41 == 0) goto LAB_03793c9c;
    uVar23 = *puVar1;
    fVar67 = 0.0;
    fStack0000000000000170 = 0.0;
  }
  if (*(uint *)(lVar41 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
  lVar41 = lVar41 + (long)(int)uVar23 * 0x188;
  *(short *)(lVar41 + 0x20) = (short)uVar20;
  *(undefined4 *)(lVar41 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
  *(undefined4 *)(lVar41 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188 + 0x174) =
       *(undefined4 *)(unaff_x19 + 0x1b0);
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188 + 0x17c) =
       *(undefined4 *)(unaff_x19 + 0x1b4);
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  uVar30 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar43 = *(ulong *)(unaff_x19 + 0x38);
  if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188;
  *(undefined4 *)(lVar41 + 0x198) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined8 *)(lVar41 + 400) = uVar30;
  *(ulong *)(lVar41 + 0x188) = uVar43;
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  lVar41 = lVar41 + (long)(int)*puVar1 * 0x188;
  lVar57 = *(long *)(lVar41 + 0x38);
  *(undefined4 *)(lVar41 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
  if ((lVar57 == 0) && ((*plVar56 == 0 || (lVar57 = *(long *)(*plVar56 + 0x20), lVar57 == 0))))
  goto LAB_03793c9c;
  FUN_03776e6c(&stack0x000016a0,lVar57,0);
  if (uVar20 >> 0x10 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar23 = FUN_026b63d8(uVar20,0);
    uVar23 = uVar23 & 1;
  }
  else {
    uVar23 = 0;
  }
  uVar77 = 0;
  fVar70 = *(float *)(in_stack_000001e0 + 0xc0);
  if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
    if (*plVar56 == 0) goto LAB_03793c9c;
    uVar24 = *puVar1;
    uVar4 = *(uint *)(*plVar56 + 0x28);
    if ((int)uVar24 < (int)uVar27) {
      lVar41 = *plVar2;
      if (lVar41 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar41 + 0x18) <= uVar24 + 1) goto thunk_FUN_01ab6c44;
      lVar41 = *(long *)(lVar41 + (long)(int)(uVar24 + 1) * 0x188 + 0x30);
      if ((((lVar41 == 0) || (*in_stack_000001c8 == 0)) ||
          (lVar57 = *(long *)(*in_stack_000001c8 + 0x170), lVar57 == 0)) ||
         (lVar57 = *(long *)(lVar57 + 0x40), lVar57 == 0)) goto LAB_03793c9c;
      uVar43 = CONCAT44((int)(uVar43 >> 0x20),uVar4 | *(int *)(lVar41 + 0x28) << 0x10);
      uVar31 = FUN_0219f8b8(lVar57,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar31 & 1) != 0) {
        FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
        uVar77 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                           (&stack0x00001570,0);
        uVar31 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar31 & 0x100) != 0) {
          fVar70 = 0.0;
        }
      }
      uVar24 = *puVar1;
    }
    if (0 < (int)uVar24) {
      lVar41 = *plVar2;
      if (lVar41 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar41 + 0x18) <= uVar24 - 1) goto thunk_FUN_01ab6c44;
      lVar41 = *(long *)(lVar41 + (ulong)(uVar24 - 1) * 0x188 + 0x30);
      if (((lVar41 == 0) || (*in_stack_000001c8 == 0)) ||
         ((lVar57 = *(long *)(*in_stack_000001c8 + 0x170), lVar57 == 0 ||
          (lVar57 = *(long *)(lVar57 + 0x40), lVar57 == 0)))) goto LAB_03793c9c;
      uVar43 = CONCAT44((int)(uVar43 >> 0x20),*(uint *)(lVar41 + 0x28) | uVar4 << 0x10);
      uVar31 = FUN_0219f8b8(lVar57,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar31 & 1) != 0) {
        FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
        UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent(&stack0x00001570,0);
        FUN_03778e8c(uVar77,0);
        uVar31 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar31 & 0x100) != 0) {
          fVar70 = 0.0;
        }
      }
    }
  }
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  uVar24 = *puVar1;
  uVar77 = FUN_03778e7c(&stack0x000015e0,0);
  if (*(uint *)(lVar41 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar41 + (long)(int)uVar24 * 0x188 + 0x160) = uVar77;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  uVar31 = FUN_037a5c04(uVar20,0);
  uVar24 = *puVar1;
  if ((uVar31 & 1) == 0) {
    if ((uVar31 & 1) == 0 && 0 < (int)uVar24) {
      uVar4 = *(uint *)(unaff_x19 + 0x19c4);
      if ((uVar4 == 0x80000000) || (uVar4 != uVar24 - 1)) {
        do {
          uVar4 = uVar24 - 1;
          uVar77 = (undefined4)(uVar43 >> 0x20);
          if (((int)uVar24 < 1) || (uVar4 == *(uint *)(unaff_x19 + 0x19c4))) {
            uVar24 = *(uint *)(unaff_x19 + 0x19c4);
            if (uVar24 == 0x80000000) goto LAB_0378dfc4;
            lVar41 = *plVar2;
            if (lVar41 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar41 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
            lVar41 = *(long *)(lVar41 + (long)(int)uVar24 * 0x188 + 0x30);
            if ((lVar41 == 0) || (lVar41 = FUN_03787a68(lVar41,0), lVar41 == 0)) goto LAB_03793c9c;
            uVar24 = FUN_03776e5c(lVar41,0);
            if (*plVar56 == 0) goto LAB_03793c9c;
            iVar21 = FUN_0377acf0(*plVar56,0);
            if (((*in_stack_000001c8 == 0) ||
                (lVar41 = FUN_03779cb4(*in_stack_000001c8,0), lVar41 == 0)) ||
               (*(long *)(lVar41 + 0x48) == 0)) goto LAB_03793c9c;
            uVar43 = CONCAT44(uVar77,uVar24 | iVar21 << 0x10);
            uVar34 = FUN_0219f8b8(*(long *)(lVar41 + 0x48),&stack0x000016a0,&stack0x00001518,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__)
            ;
            if ((uVar34 & 1) == 0) goto LAB_0378dfc4;
            lVar41 = *plVar2;
            if (lVar41 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
            fVar70 = *(float *)(lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * 0x188 + 0x148);
            fVar68 = *(float *)(unaff_x19 + 0x2f4);
            FUN_037793b0(&stack0x00001518,0);
            fVar90 = (float)FUN_03779388(&stack0x00001550,0);
            FUN_037793c0(&stack0x00001518,0);
            fVar66 = (float)FUN_03779398(&stack0x00001548,0);
            FUN_03778e64(((fVar70 - fVar68) / fVar65 + fVar90) - fVar66,&stack0x000015e0,0);
            FUN_037793b0(&stack0x00001518,0);
            fVar70 = (float)FUN_03779390(&stack0x00001550,0);
            puVar35 = &stack0x00001518;
            goto LAB_0378f5a8;
          }
          lVar41 = *plVar2;
          if (lVar41 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar41 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
          lVar41 = *(long *)(lVar41 + (ulong)uVar4 * 0x188 + 0x30);
          if ((lVar41 == 0) || (lVar41 = FUN_03787a68(lVar41,0), lVar41 == 0)) goto LAB_03793c9c;
          uVar24 = FUN_03776e5c(lVar41,0);
          if (*plVar56 == 0) goto LAB_03793c9c;
          iVar21 = FUN_0377acf0(*plVar56,0);
          if (((*in_stack_000001c8 == 0) ||
              (lVar41 = FUN_03779cb4(*in_stack_000001c8,0), lVar41 == 0)) ||
             (*(long *)(lVar41 + 0x50) == 0)) goto LAB_03793c9c;
          uVar43 = CONCAT44(uVar77,uVar24 | iVar21 << 0x10);
          uVar34 = FUN_0219f8b8(*(long *)(lVar41 + 0x50),&stack0x000016a0,&stack0x00001530,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__);
          uVar24 = uVar4;
        } while ((uVar34 & 1) == 0);
        lVar41 = *plVar2;
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        fVar68 = *(float *)(unaff_x19 + 0x2e0);
        fVar92 = *(float *)(unaff_x19 + 0x180);
        lVar41 = lVar41 + (ulong)uVar4 * 0x188;
        fVar70 = *(float *)(unaff_x19 + 0x2f4);
        fVar71 = *(float *)(lVar41 + 0x148);
        fVar72 = *(float *)(lVar41 + 0x150);
        FUN_037793d0(&stack0x00001530,0);
        fVar90 = (float)FUN_03779388(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar66 = (float)FUN_03779398(&stack0x00001548,0);
        FUN_03778e64(((fVar71 - fVar70) / fVar65 + fVar90) - fVar66,&stack0x000015e0,0);
        FUN_037793d0(&stack0x00001530,0);
        fVar70 = (float)FUN_03779390(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar90 = (float)FUN_037793a0(&stack0x00001548,0);
        FUN_03778e74(((fVar72 - ((fVar69 - fVar68) + fVar92)) / fVar65 + fVar70) - fVar90,
                     &stack0x000015e0,0);
        fVar70 = 0.0;
      }
      else {
        lVar41 = *plVar2;
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        lVar41 = *(long *)(lVar41 + (long)(int)uVar4 * 0x188 + 0x30);
        if ((lVar41 == 0) || (lVar41 = FUN_03787a68(lVar41,0), lVar41 == 0)) goto LAB_03793c9c;
        uVar24 = FUN_03776e5c(lVar41,0);
        if (*plVar56 == 0) goto LAB_03793c9c;
        iVar21 = FUN_0377acf0(*plVar56,0);
        if (((*in_stack_000001c8 == 0) || (lVar41 = FUN_03779cb4(*in_stack_000001c8,0), lVar41 == 0)
            ) || (*(long *)(lVar41 + 0x48) == 0)) goto LAB_03793c9c;
        uVar43 = CONCAT44((int)(uVar43 >> 0x20),uVar24 | iVar21 << 0x10);
        uVar34 = FUN_0219f8b8(*(long *)(lVar41 + 0x48),&stack0x000016a0,&stack0x00001558,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
        if ((uVar34 & 1) != 0) {
          lVar41 = *plVar2;
          if (lVar41 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
          fVar70 = *(float *)(lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * 0x188 + 0x148);
          fVar68 = *(float *)(unaff_x19 + 0x2f4);
          FUN_037793b0(&stack0x00001558,0);
          fVar90 = (float)FUN_03779388(&stack0x00001550,0);
          FUN_037793c0(&stack0x00001558,0);
          fVar66 = (float)FUN_03779398(&stack0x00001548,0);
          FUN_03778e64(((fVar70 - fVar68) / fVar65 + fVar90) - fVar66,&stack0x000015e0,0);
          FUN_037793b0(&stack0x00001558,0);
          fVar70 = (float)FUN_03779390(&stack0x00001550,0);
          puVar35 = &stack0x00001558;
LAB_0378f5a8:
          FUN_037793c0(puVar35,0);
          fVar90 = (float)FUN_037793a0(&stack0x00001548,0);
          FUN_03778e74(fVar70 - fVar90,&stack0x000015e0,0);
          fVar70 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x19c4) = uVar24;
  }
LAB_0378dfc4:
  fVar90 = (float)FUN_03778e6c(&stack0x000015e0,0);
  fVar66 = (float)FUN_03778e6c(&stack0x000015e0,0);
  if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
    fVar92 = *(float *)(unaff_x19 + 0x2f4);
    fVar68 = (float)FUN_03776cb4(&stack0x000015f0,0);
    fVar92 = fVar92 - fVar65 * fVar68 * (1.0 - *(float *)(unaff_x19 + 0x1594));
    *(float *)(unaff_x19 + 0x2f4) = fVar92;
    if ((uVar23 != 0) || (uVar20 == 0x200b)) {
      *(float *)(unaff_x19 + 0x2f4) = fVar92 - fVar64 * *(float *)(in_stack_000001e0 + 0xc4);
    }
  }
  fVar68 = *(float *)(unaff_x19 + 0x2f0);
  if (fVar68 == 0.0) {
    fVar68 = 0.0;
  }
  else {
    fVar92 = (float)FUN_03776c94(&stack0x000015f0,0);
    fVar71 = (float)FUN_03776ca4(&stack0x000015f0,0);
    fVar68 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (fVar68 * 0.5 - fVar65 * (fVar92 * 0.5 + fVar71));
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + fVar68;
  }
  uVar24 = 0;
  if ((cVar53 == '\0') && (*unaff_x24 == '\x01')) {
    uVar24 = *(uint *)(unaff_x19 + 0x124) & 1;
  }
  lVar41 = *in_stack_00000190;
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar34 = FUN_036cee6c(lVar41,0,0);
  puVar10 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
  if (uVar24 == 0) {
    fVar92 = 0.0;
    if ((uVar34 & 1) != 0) {
      lVar41 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar41 == 0) goto LAB_03793c9c;
      uVar34 = FUN_03699d3c(lVar41,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x6c),0);
      if ((uVar34 & 1) != 0) {
        lVar41 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar41 == 0) goto LAB_03793c9c;
        uVar34 = FUN_03699d3c(lVar41,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe4),0);
        if ((uVar34 & 1) != 0) {
          lVar41 = *in_stack_00000190;
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar41 != 0) {
            fVar71 = (float)FUN_0369e060(lVar41,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar10 + 0xb8) + 0x6c),0);
            plVar55 = (long *)PTR_DAT_03cbe438;
            if ((*in_stack_000001c8 != 0) && (*in_stack_00000190 != 0)) {
              fVar73 = *(float *)(*in_stack_000001c8 + 0x188);
              fVar72 = (float)FUN_0369e060(*in_stack_00000190,
                                           *(undefined4 *)
                                            (*(long *)(*(long *)puVar10 + 0xb8) + 0xe4),0);
              fVar72 = fVar72 * fVar71 * fVar73 * 0.25;
              if (fVar71 < fVar59 + fVar72) {
                fVar59 = fVar71 - fVar72;
              }
              goto LAB_0378e344;
            }
          }
          goto LAB_03793c9c;
        }
      }
    }
    fVar72 = 0.0;
    plVar55 = (long *)PTR_DAT_03cbe438;
  }
  else {
    fVar72 = 0.0;
    plVar55 = (long *)PTR_DAT_03cbe438;
    if ((uVar34 & 1) != 0) {
      lVar41 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar41 == 0) goto LAB_03793c9c;
      uVar34 = FUN_03699d3c(lVar41,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x6c),0);
      plVar55 = (long *)PTR_DAT_03cbe438;
      if ((uVar34 & 1) != 0) {
        lVar41 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar41 == 0) goto LAB_03793c9c;
        fVar92 = (float)FUN_0369e060(lVar41,*(undefined4 *)
                                             (*(long *)(*(long *)puVar10 + 0xb8) + 0x6c),0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar71 = (float)FUN_03779d1c(*in_stack_000001c8,0);
        plVar55 = (long *)PTR_DAT_03cbe438;
        if (*in_stack_00000190 == 0) goto LAB_03793c9c;
        fVar72 = (float)FUN_0369e060(*in_stack_00000190,
                                     *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe4),0);
        fVar72 = fVar92 * fVar71 * 0.25 * fVar72;
        if (fVar92 < fVar59 + fVar72) {
          fVar59 = fVar92 - fVar72;
        }
      }
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar92 = (float)FUN_03779d2c(*in_stack_000001c8,0);
  }
LAB_0378e344:
  fVar86 = *(float *)(unaff_x19 + 0x2f4);
  fVar71 = (float)FUN_03776ca4(&stack0x000015f0,0);
  fVar89 = *(float *)(unaff_x19 + 0x19a8);
  fVar73 = (float)FUN_03778e5c(&stack0x000015e0,0);
  fVar86 = fVar86 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    fVar65 * (fVar73 + ((fVar71 * fVar89 - fVar59) - fVar72));
  fVar71 = (float)FUN_03776cac(&stack0x000015f0,0);
  fVar73 = (float)FUN_03778e6c(&stack0x000015e0,0);
  fStack00000000000001bc =
       *(float *)(unaff_x19 + 0x180) +
       ((fVar69 + fVar65 * (fVar59 + fVar71 + fVar73)) - *(float *)(unaff_x19 + 0x2e0));
  fVar71 = (float)FUN_03776c9c(&stack0x000015f0,0);
  fVar89 = fStack00000000000001bc - fVar65 * (fVar59 + fVar59 + fVar71);
  fVar71 = (float)FUN_03776c94(&stack0x000015f0,0);
  fVar82 = fVar86 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    fVar65 * (fVar72 + fVar72 +
                             fVar59 + fVar59 + fVar71 * *(float *)(unaff_x19 + 0x19a8));
  fVar71 = fVar86;
  fVar73 = fVar82;
  if (((cVar53 == '\0') && (*unaff_x24 == '\x01')) && ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)
     ) {
    if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
    iVar21 = *(int *)(unaff_x19 + 0x19a4);
    fVar71 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar73 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar96 = *(float *)(unaff_x19 + 0xf0);
    fVar75 = *(float *)(unaff_x19 + 0x180);
    fVar87 = (float)iVar21 * fVar81;
    fVar74 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
    fVar74 = fVar74 * fVar96 * (fVar71 - (fVar73 + fVar75)) * 0.5;
    fVar71 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar73 = fVar87 * fVar65 * ((fVar72 + fVar59 + fVar71) - fVar74);
    fVar96 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar75 = (float)FUN_03776c9c(&stack0x000015f0,0);
    fStack00000000000001bc = fStack00000000000001bc + 0.0;
    fVar71 = fVar86 + fVar73;
    fVar89 = fVar89 + 0.0;
    fVar73 = fVar82 + fVar73;
    fVar87 = fVar87 * fVar65 * ((((fVar96 - fVar75) - fVar59) - fVar72) - fVar74);
    fVar86 = fVar86 + fVar87;
    fVar82 = fVar82 + fVar87;
  }
  uVar30 = *(undefined8 *)(unaff_x24 + 0x43c);
  uVar88 = *(undefined8 *)(unaff_x24 + 0x444);
  if (DAT_0411f169 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbdeb8);
    DAT_0411f169 = '\x01';
  }
  uVar76 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
  uVar79 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
  fVar72 = 0.0;
  if (DAT_00d38b04 <
      (float)((ulong)uVar88 >> 0x20) * (float)((ulong)uVar79 >> 0x20) +
      (float)uVar88 * (float)uVar79 +
      (float)uVar30 * (float)uVar76 +
      (float)((ulong)uVar30 >> 0x20) * (float)((ulong)uVar76 >> 0x20)) {
    fVar85 = 0.0;
    fVar87 = 0.0;
    fVar75 = 0.0;
    fVar74 = fStack00000000000001bc;
    fVar96 = fVar89;
  }
  else {
    FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                 *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                 *(undefined4 *)(unaff_x19 + 0x19c0),0);
    fVar91 = (fVar73 + fVar86) * 0.5;
    fVar93 = (fVar89 + fStack00000000000001bc) * 0.5;
    fStack00000000000001bc = fStack00000000000001bc - fVar93;
    fVar75 = 0.0;
    fVar74 = fStack00000000000001bc;
    fVar71 = (float)FUN_036bdd2c(fVar71 - fVar91,&stack0x000014d0,0);
    fVar71 = fVar91 + fVar71;
    fVar75 = fVar75 + 0.0;
    fVar96 = fVar89 - fVar93;
    fVar87 = 0.0;
    fVar89 = fVar96;
    fVar86 = (float)FUN_036bdd2c(fVar86 - fVar91,&stack0x000014d0,0);
    fVar86 = fVar91 + fVar86;
    fVar89 = fVar93 + fVar89;
    fVar87 = fVar87 + 0.0;
    fVar85 = 0.0;
    fVar73 = (float)FUN_036bdd2c(fVar73 - fVar91,&stack0x000014d0,0);
    fVar73 = fVar91 + fVar73;
    fStack00000000000001bc = fVar93 + fStack00000000000001bc;
    fVar85 = fVar85 + 0.0;
    fVar72 = 0.0;
    fVar82 = (float)FUN_036bdd2c(fVar82 - fVar91,&stack0x000014d0,0);
    fVar82 = fVar91 + fVar82;
    fVar72 = fVar72 + 0.0;
    fVar74 = fVar93 + fVar74;
    fVar96 = fVar93 + fVar96;
  }
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  lVar41 = lVar41 + (long)(int)*puVar1 * 0x188;
  *(float *)(lVar41 + 0x124) = fVar86;
  *(float *)(lVar41 + 0x128) = fVar89;
  *(float *)(lVar41 + 300) = fVar87;
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  lVar41 = lVar41 + (long)(int)*puVar1 * 0x188;
  *(float *)(lVar41 + 0x118) = fVar71;
  *(float *)(lVar41 + 0x11c) = fVar74;
  *(float *)(lVar41 + 0x120) = fVar75;
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  lVar41 = lVar41 + (long)(int)*puVar1 * 0x188;
  *(float *)(lVar41 + 0x138) = fVar85;
  *(float *)(lVar41 + 0x130) = fVar73;
  *(float *)(lVar41 + 0x134) = fStack00000000000001bc;
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  lVar41 = lVar41 + (long)(int)*puVar1 * 0x188;
  *(float *)(lVar41 + 0x13c) = fVar82;
  *(float *)(lVar41 + 0x140) = fVar96;
  *(float *)(lVar41 + 0x144) = fVar72;
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  uVar24 = *puVar1;
  fVar72 = *(float *)(unaff_x19 + 0x2f4);
  fVar71 = (float)FUN_03778e5c(&stack0x000015e0,0);
  if (*(uint *)(lVar41 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
  *(float *)(lVar41 + (long)(int)uVar24 * 0x188 + 0x148) = fVar72 + fVar65 * fVar71;
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  uVar24 = *puVar1;
  fVar82 = *(float *)(unaff_x19 + 0x2e0);
  fVar72 = *(float *)(unaff_x19 + 0x180);
  fVar71 = (float)FUN_03778e6c(&stack0x000015e0,0);
  if (*(uint *)(lVar41 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
  *(float *)(lVar41 + (long)(int)uVar24 * 0x188 + 0x150) =
       (fVar69 - fVar82) + fVar72 + fVar65 * fVar71;
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  uVar24 = *puVar1;
  lVar57 = (long)(int)uVar24;
  if (*(uint *)(lVar41 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
  *(float *)(lVar41 + lVar57 * 0x188 + 0x168) = (fVar73 - fVar86) / (fVar74 - fVar89);
  fVar67 = fVar65 * (fVar67 + fVar90);
  if (*unaff_x24 == '\x01') {
    fVar67 = fVar67 / fStack000000000000017c;
    fVar90 = (fVar65 * (fStack0000000000000170 + fVar66)) / fStack000000000000017c;
  }
  else {
    fVar90 = fVar65 * (fStack0000000000000170 + fVar66);
  }
  uVar4 = *(uint *)(unaff_x19 + 0x328);
  fVar66 = *(float *)(unaff_x19 + 0x180);
  bVar12 = uVar24 == uVar4;
  bVar13 = uVar23 == 0;
  fVar67 = fVar66 + fVar67;
  if (bVar13 || bVar12) {
    fVar90 = fVar66 + fVar90;
    fVar69 = fVar67;
    fVar71 = fVar90;
    if (fVar66 != 0.0) {
      fVar69 = (fVar67 - fVar66) / *(float *)(unaff_x19 + 0xf0);
      fVar71 = (fVar90 - fVar66) / *(float *)(unaff_x19 + 0xf0);
      if (fVar69 <= fVar67) {
        fVar69 = fVar67;
      }
      if (fVar90 <= fVar71) {
        fVar71 = fVar90;
      }
    }
    lVar32 = lVar41 + lVar57 * 0x188;
    fVar66 = fVar69;
    if (fVar69 <= *(float *)(unaff_x19 + 0x338)) {
      fVar66 = *(float *)(unaff_x19 + 0x338);
    }
    fVar72 = fVar71;
    if (*(float *)(unaff_x19 + 0x33c) <= fVar71) {
      fVar72 = *(float *)(unaff_x19 + 0x33c);
    }
    *(float *)(unaff_x19 + 0x338) = fVar66;
    *(float *)(unaff_x19 + 0x33c) = fVar72;
    *(float *)(lVar32 + 0x158) = fVar69;
    *(float *)(lVar32 + 0x15c) = fVar71;
    fVar69 = *(float *)(unaff_x19 + 0x2e0);
    fVar71 = fVar67 - fVar69;
  }
  else {
    fVar66 = *(float *)(unaff_x19 + 0x338);
    lVar32 = lVar41 + lVar57 * 0x188;
    *(float *)(lVar32 + 0x158) = fVar66;
    fVar90 = *(float *)(unaff_x19 + 0x33c);
    *(float *)(lVar32 + 0x15c) = fVar90;
    fVar69 = *(float *)(unaff_x19 + 0x2e0);
    fVar71 = fVar66 - fVar69;
  }
  *(float *)(lVar32 + 0x14c) = fVar71;
  *(float *)(lVar41 + lVar57 * 0x188 + 0x154) = fVar90 - fVar69;
  *(float *)(unaff_x19 + 0x378) = fVar90 - fVar69;
  if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
    if (bVar13 || bVar12) {
      *(float *)(unaff_x19 + 0x374) = fVar66;
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
      fVar90 = *(float *)(unaff_x19 + 0x370);
      fVar66 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      fVar69 = *(float *)(unaff_x19 + 0x2e0);
      fStack000000000000017c = (fVar65 * fVar66) / fStack000000000000017c;
      if (fVar90 <= fStack000000000000017c) {
        fVar90 = fStack000000000000017c;
      }
      *(float *)(unaff_x19 + 0x370) = fVar90;
      if (fVar69 == 0.0) goto LAB_0378ee0c;
    }
  }
  else if ((bVar13 || bVar12) && fVar69 == 0.0) {
LAB_0378ee0c:
    fVar90 = *(float *)(unaff_x19 + 0x19c8);
    if (*(float *)(unaff_x19 + 0x19c8) <= fVar67) {
      fVar90 = fVar67;
    }
    *(float *)(unaff_x19 + 0x19c8) = fVar90;
  }
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  uVar54 = *puVar1;
  if (*(uint *)(lVar41 + 0x18) <= uVar54) goto thunk_FUN_01ab6c44;
  lVar41 = lVar41 + (long)(int)uVar54 * 0x188;
  *(undefined1 *)(lVar41 + 0x1a0) = 0;
  uVar51 = *(uint *)(unaff_x19 + 0x158) & 0x18;
  if ((uVar20 == 9) ||
     ((((uVar23 == 0 && (uVar20 != 3)) && ((uVar20 != 0x200b && (uVar20 != 0xad)))) ||
      (((bool)(uVar20 == 0xad & (bVar16 ^ 1U)) || (*unaff_x24 == '\x02')))))) {
    *(undefined1 *)(lVar41 + 0x1a0) = 1;
    pfVar42 = (float *)(unaff_x19 + 0x358);
    pfVar46 = pfVar45;
    if (bVar15) {
      lVar41 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar41 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      pfVar46 = (float *)(lVar41 + 100);
      pfVar42 = (float *)(lVar41 + 0x68);
    }
    fVar66 = *pfVar46;
    fVar90 = *pfVar42;
    fVar67 = *(float *)(unaff_x19 + 0x35c);
    fVar71 = *(float *)(unaff_x19 + 0x2f4);
    fStack0000000000000174 = (fVar95 - fVar66) - fVar90;
    bVar12 = true;
    if ((fVar67 <= fStack0000000000000174) && (bVar12 = false, !NAN(fVar67))) {
      bVar12 = fVar67 == -1.0;
    }
    if (!bVar12) {
      fStack0000000000000174 = fVar67;
    }
    fVar67 = 0.0;
    fVar72 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      fVar72 = (float)FUN_03776cb4(&stack0x000015f0,0);
      fVar69 = *(float *)(unaff_x19 + 0x2e0);
    }
    fVar73 = *(float *)(unaff_x19 + 0x1594);
    fVar89 = *(float *)(unaff_x19 + 0x33c);
    if (uVar20 != 0xad) {
      fVar60 = fVar65;
    }
    if ((0.0 < fVar69) && (fVar67 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar67 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    uVar54 = *puVar1;
    fVar67 = (*(float *)(unaff_x19 + 0x374) - (fVar89 - fVar69)) + fVar67;
    if (fVar67 <= fVar80) goto switchD_0378f0dc_caseD_2;
    if (*(int *)(unaff_x19 + 0x34c) == -1) {
      *(uint *)(unaff_x19 + 0x34c) = uVar54;
    }
    in_stack_00001688 = DAT_00d37868;
    if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
      fVar86 = *(float *)(in_stack_000001e0 + 0xd0);
      if (((*(float *)(unaff_x19 + 0x15b0) <= fVar86) || (fVar69 <= 0.0)) ||
         (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
        fVar69 = *_fStack00000000000000d0;
        fVar67 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar69 <= fVar67) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
        goto LAB_0378f0b8;
        fVar58 = (fVar69 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
        if (fVar58 <= DAT_00d38b84) {
          fVar58 = DAT_00d38b84;
        }
        fVar59 = (fVar69 - fVar58) * 20.0 + 0.5;
        fVar58 = DAT_00d38e60;
        if (fVar59 != INFINITY) {
          fVar58 = (float)(int)fVar59 / 20.0;
        }
        if (fVar58 <= fVar67) {
          fVar58 = fVar67;
        }
        *(float *)(unaff_x19 + 0x1598) = fVar69;
        goto LAB_037910ac;
      }
      fVar58 = *(float *)(unaff_x19 + 0x15b0) +
               ((fVar84 - fVar67) / (float)*(int *)(unaff_x19 + 0x340)) / fVar63;
      if (fVar58 <= fVar86) {
        fVar58 = fVar86;
      }
LAB_03793b50:
      *(float *)(unaff_x19 + 0x15b0) = fVar58;
      goto LAB_0378c81c;
    }
LAB_0378f0b8:
    switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
    case 1:
      if (*(int *)(unaff_x19 + 0x340) < 1) goto switchD_0378f0dc_caseD_2;
      iVar21 = FUN_020aa428(lVar28,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                           );
      in_stack_00001688 = DAT_00d37868;
      if (iVar21 == 0) {
        uVar19 = 0xffffffff;
        puVar1[0] = 0;
        puVar1[1] = 0;
        fVar60 = fVar65;
      }
      else {
        FUN_020ab640(lVar28,&stack0x000016a0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
        memcpy(&stack0x00001138,&stack0x000016a0,0x398);
        iVar21 = FUN_03797154();
        uVar19 = iVar21 - 1;
        iVar21 = *(int *)(unaff_x19 + 0x324) + -1;
        *(int *)(unaff_x19 + 0x324) = iVar21;
        in_stack_00001688 = CONCAT44(0x2026,iVar21);
        iStack00000000000001dc = iStack00000000000001dc + 1;
        fVar60 = fVar65;
      }
      break;
    default:
switchD_0378f0dc_caseD_2:
      if ((uVar31 & 1) == 0) {
LAB_0378f1e0:
        if (uVar23 == 0) {
          if (uVar20 != 0xad) {
            if (*unaff_x24 == '\x02') {
              FUN_0379c8ac();
            }
            else if (*unaff_x24 == '\x01') {
              FUN_0379bd40(fVar59);
            }
            if (bVar11) {
              *(uint *)(unaff_x19 + 0x330) = *puVar1;
            }
            *(uint *)(unaff_x19 + 0x334) = *puVar1;
            *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
            lVar41 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar41 != 0) {
              if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar41 + 0x18)) {
                lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                bVar11 = false;
                *(float *)(lVar41 + 100) = fVar66;
                *(float *)(lVar41 + 0x68) = fVar90;
                goto LAB_0378f884;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar41 = *plVar2;
          if (lVar41 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar41 + 0x18) <= uVar54) goto thunk_FUN_01ab6c44;
          *(undefined1 *)(lVar41 + (long)(int)uVar54 * 0x188 + 0x1a0) = 0;
        }
        else {
          lVar41 = *plVar2;
          if (lVar41 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar41 + 0x18) <= uVar54) goto thunk_FUN_01ab6c44;
          *(undefined1 *)(lVar41 + (long)(int)uVar54 * 0x188 + 0x1a0) = 0;
          *(uint *)(unaff_x19 + 0x334) = uVar54;
          lVar41 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar41 == 0) goto LAB_03793c9c;
          uVar54 = *(uint *)(lVar41 + 0x18);
          if (uVar54 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar57 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          iVar21 = *(int *)(lVar57 + 0x2c) + 1;
          *(int *)(lVar57 + 0x2c) = iVar21;
          *(int *)(unaff_x19 + 0x348) = iVar21;
          if (uVar54 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(float *)(lVar41 + 100) = fVar66;
          *(float *)(lVar41 + 0x68) = fVar90;
          *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
        }
        goto LAB_0378f884;
      }
      fVar67 = ABS(fVar71) + fVar72 * (1.0 - fVar73) * fVar60;
      fVar60 = 1.0;
      if (uVar51 != 0) {
        fVar60 = DAT_00d38acc;
      }
      if (fVar67 <= fVar60 * fStack0000000000000174) goto LAB_0378f1e0;
      if ((cVar37 == '\0') || (uVar54 == *(uint *)(unaff_x19 + 0x328))) {
        if ((*(char *)(in_stack_000001e0 + 0xa8) == '\0') ||
           (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_0378f2f0:
          iVar21 = *(int *)(in_stack_000001e0 + 0x74);
          if (iVar21 == 1) {
            iVar21 = FUN_020aa428(lVar28,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                 );
            in_stack_00001688 = DAT_00d37868;
            if (iVar21 == 0) {
              uVar19 = 0xffffffff;
              puVar1[0] = 0;
              puVar1[1] = 0;
              fVar60 = fVar65;
            }
            else {
              FUN_020ab640(lVar28,&stack0x000016a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
              memcpy(&stack0x00000a08,&stack0x000016a0,0x398);
              iVar21 = FUN_03797154();
              uVar19 = iVar21 - 1;
              iVar21 = *(int *)(unaff_x19 + 0x324) + -1;
              *(int *)(unaff_x19 + 0x324) = iVar21;
              iStack00000000000001dc = iStack00000000000001dc + 1;
              in_stack_00001688 = CONCAT44(0x2026,iVar21);
              fVar60 = fVar65;
            }
            break;
          }
          if (iVar21 == 6) {
            uVar19 = FUN_03797154();
            uVar54 = *(uint *)(unaff_x19 + 0x324);
          }
          else {
            if (iVar21 != 3) goto LAB_0378f1e0;
            uVar19 = FUN_03797154();
          }
          goto LAB_037909d0;
        }
        fVar69 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if (fVar69 <= fVar73) {
          fVar69 = *(float *)(in_stack_000001e0 + 0xac);
          fVar71 = *_fStack00000000000000d0;
          if (fVar71 <= fVar69) goto LAB_0378f2f0;
LAB_03793bbc:
          fVar58 = (fVar71 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
          if (fVar58 <= DAT_00d38b84) {
            fVar58 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x1598) = fVar71;
          fVar59 = (fVar71 - fVar58) * 20.0 + 0.5;
          fVar58 = DAT_00d38e60;
          if (fVar59 != INFINITY) {
            fVar58 = (float)(int)fVar59 / 20.0;
          }
          if (fVar58 <= fVar69) {
            fVar58 = fVar69;
          }
          goto LAB_037910ac;
        }
        fVar58 = fVar67 / (1.0 - fVar73);
        if (fVar73 <= 0.0) {
          fVar58 = fVar67;
        }
        fVar73 = fVar73 + (fVar67 - fVar60 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar58;
FUN_03793c4c:
        if (fVar69 <= fVar73) {
          fVar73 = fVar69;
        }
        *(float *)(unaff_x19 + 0x1594) = fVar73;
        goto LAB_0378c81c;
      }
      uVar19 = FUN_03797154();
      if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
        lVar41 = *plVar2;
        if (lVar41 == 0) goto LAB_03793c9c;
        uVar38 = *puVar1;
        if (*(uint *)(lVar41 + 0x18) <= uVar38) goto thunk_FUN_01ab6c44;
        fVar71 = *(float *)(unaff_x19 + 0x2e0);
        fVar69 = 0.0;
        if ((0.0 < fVar71) && (fVar69 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar69 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        fVar69 = fVar64 * *(float *)(in_stack_000001e0 + 200) +
                 *(float *)(lVar41 + (long)(int)uVar38 * 0x188 + 0x158) +
                 (fVar69 - *(float *)(unaff_x19 + 0x33c)) +
                 fVar63 * (fVar58 + *(float *)(unaff_x19 + 0x15b0));
      }
      else {
        fVar69 = *(float *)(in_stack_000001e0 + 200);
        *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
        lVar41 = *plVar2;
        if (lVar41 == 0) goto LAB_03793c9c;
        fVar71 = *(float *)(unaff_x19 + 0x2e0);
        uVar38 = *(uint *)(unaff_x19 + 0x324);
        fVar69 = *(float *)(unaff_x19 + 0x2e4) + fVar64 * fVar69;
      }
      if ((*(uint *)(lVar41 + 0x18) <= uVar38) ||
         (uVar39 = uVar38 - 1, *(uint *)(lVar41 + 0x18) <= uVar39)) goto thunk_FUN_01ab6c44;
      fVar72 = (fVar69 + *(float *)(unaff_x19 + 0x374) + fVar71) -
               *(float *)(lVar41 + (long)(int)uVar38 * 0x188 + 0x15c);
      if ((!bVar16 && *(short *)(lVar41 + (long)(int)uVar39 * 0x188 + 0x20) == 0xad) &&
         ((fVar72 < fVar80 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
        uVar19 = uVar19 - 1;
        bVar16 = false;
        *puVar1 = uVar39;
        in_stack_00001688 = CONCAT44(0x2d,uVar39);
        fVar60 = fVar65;
        break;
      }
      if (*(short *)(lVar41 + (long)(int)uVar38 * 0x188 + 0x20) == 0xad) {
        bVar16 = true;
        in_stack_00001688 = uVar29;
        fVar60 = fVar65;
        break;
      }
      if ((bVar18 & *(byte *)(in_stack_000001e0 + 0xa8)) != 0) {
        fVar73 = *(float *)(unaff_x19 + 0x1594);
        fVar69 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if ((fVar69 <= fVar73) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
          fVar71 = *_fStack00000000000000d0;
          fVar69 = *(float *)(in_stack_000001e0 + 0xac);
          if ((fVar69 < fVar71) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
          goto LAB_03793bbc;
          goto LAB_03790b7c;
        }
LAB_03793c60:
        fVar58 = fVar67;
        if (0.0 < fVar73) {
          fVar58 = fVar67 / (1.0 - fVar73);
        }
        fVar73 = fVar73 + (fVar67 - fVar60 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar58;
        goto FUN_03793c4c;
      }
LAB_03790b7c:
      iVar21 = *(int *)(unaff_x19 + 0x11e0);
      if ((iVar21 != iStack0000000000000028) && ((bVar18 & iVar21 != -1) != 0)) {
        uVar19 = FUN_03797154();
        plVar55 = (long *)PTR_DAT_03cbe438;
        lVar41 = *(long *)(in_stack_000001c0 + 0x30);
        if (lVar41 == 0) goto LAB_03793c9c;
        uVar38 = *puVar1;
        uVar39 = uVar38 - 1;
        if (*(uint *)(lVar41 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
        iStack0000000000000028 = iVar21;
        if (*(short *)(lVar41 + (long)(int)uVar39 * 0x188 + 0x20) == 0xad) {
          uVar19 = uVar19 - 1;
          bVar16 = false;
          *puVar1 = uVar39;
          in_stack_00001688 = CONCAT44(0x2d,uVar39);
          fVar60 = fVar65;
          break;
        }
      }
      if (fVar72 <= fVar80) {
        FUN_037a1530(fVar63);
        bVar18 = 1;
        bVar16 = false;
        bVar11 = true;
        in_stack_00001688 = uVar29;
        fVar60 = fVar65;
        break;
      }
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar38;
      }
      if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
        fVar69 = *(float *)(in_stack_000001e0 + 0xd0);
        if ((fVar69 < *(float *)(unaff_x19 + 0x15b0)) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar58 = *(float *)(unaff_x19 + 0x15b0) +
                   ((fVar84 - fVar72) / (float)(*(int *)(unaff_x19 + 0x340) + 1)) / fVar63;
          if (fVar58 <= fVar69) {
            fVar58 = fVar69;
          }
          goto LAB_03793b50;
        }
        fVar73 = *(float *)(unaff_x19 + 0x1594);
        fVar69 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if ((fVar73 < fVar69) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03793c60;
        fVar71 = *_fStack00000000000000d0;
        fVar69 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar69 < fVar71) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03793bbc;
      }
      switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
      case 0:
      case 2:
      case 4:
        FUN_037a1530(fVar63);
        break;
      case 1:
        iVar21 = FUN_020aa428(lVar28,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                             );
        in_stack_00001688 = DAT_00d37868;
        if (iVar21 == 0) {
          bVar16 = false;
          puVar1[0] = 0;
          puVar1[1] = 0;
          uVar19 = 0xffffffff;
          fVar60 = fVar65;
        }
        else {
          FUN_020ab640(lVar28,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(&stack0x00000da0,&stack0x000016a0,0x398);
          iVar25 = FUN_03797154();
          bVar16 = false;
          iVar21 = *(int *)(unaff_x19 + 0x324) + -1;
          *(int *)(unaff_x19 + 0x324) = iVar21;
          iStack00000000000001dc = iStack00000000000001dc + 1;
          uVar19 = iVar25 - 1;
          in_stack_00001688 = CONCAT44(0x2026,iVar21);
          fVar60 = fVar65;
        }
        goto LAB_0378d260;
      case 3:
        uVar19 = FUN_03797154();
        bVar16 = false;
        goto LAB_037909d0;
      case 5:
        *(undefined1 *)(unaff_x19 + 0x37c) = 1;
        FUN_037a1530(fVar63);
        *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
        *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
        *(undefined4 *)(unaff_x19 + 0x374) = 0;
        *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
        *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
        break;
      case 6:
        bVar16 = false;
        uVar54 = uVar38;
LAB_037909d0:
        in_stack_00001688 = CONCAT44(3,uVar54);
        fVar60 = fVar65;
        goto LAB_0378d260;
      default:
        bVar16 = false;
        uVar54 = uVar38;
        goto LAB_0378f1e0;
      }
      bVar16 = false;
LAB_0379053c:
      bVar18 = 1;
      bVar11 = true;
      in_stack_00001688 = uVar29;
      fVar60 = fVar65;
      break;
    case 3:
      uVar19 = FUN_03797154();
      in_stack_00001688 = CONCAT44((int)((ulong)uVar29 >> 0x20),uVar54);
      fVar60 = fVar65;
      break;
    case 5:
      if (uVar54 == 0 || (int)uVar19 < 0) {
        uVar19 = 0xffffffff;
        *puVar1 = 0;
        fVar60 = fVar65;
      }
      else {
        fVar60 = *(float *)(unaff_x19 + 0x338);
        uVar19 = FUN_03797154();
        if (fVar80 < fVar60 - fVar89) goto LAB_0378f7e8;
        *(undefined4 *)(unaff_x19 + 0x328) = *(undefined4 *)(unaff_x19 + 0x324);
        *(undefined8 *)(unaff_x19 + 0x338) = uVar9;
        *(int *)(unaff_x19 + 0x340) = *(int *)(unaff_x19 + 0x340) + 1;
        *(undefined1 *)(unaff_x19 + 0x37c) = 1;
        *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
        *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
        *(undefined4 *)(unaff_x19 + 0x374) = 0;
        *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
        *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
        *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
        in_stack_00001688 = uVar29;
        fVar60 = fVar65;
      }
      break;
    case 6:
      uVar19 = FUN_03797154();
      in_stack_00001688 = CONCAT44(3,uVar54);
      fVar60 = fVar65;
    }
LAB_0378d260:
    uVar19 = uVar19 + 1;
    lVar41 = *(long *)(unaff_x19 + 0x20);
    in_stack_0000169c = uVar20;
    if (lVar41 == 0) goto LAB_03793c9c;
    goto LAB_0378cf04;
  }
  if (((uVar20 & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
    fVar60 = 0.0;
    if ((0.0 < fVar69) && (fVar60 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar60 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    if (fVar80 < (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar69)) + fVar60
       ) {
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar54;
      }
      uVar19 = FUN_03797154();
LAB_0378f7e8:
      in_stack_00001688 = CONCAT44(3,uVar54);
      fVar60 = fVar65;
      goto LAB_0378d260;
    }
  }
  if ((((uVar20 - 0x2007 < 0x23) && ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x600000001U) != 0))
      || (uVar20 - 10 < 2)) || (uVar20 == 0xa0)) {
LAB_0378f700:
    if ((uVar20 == 0xad) || (uVar20 == 0x200b)) goto LAB_0378f884;
    if (uVar20 != 0x2060) {
      lVar41 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar41 != 0) {
        if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar41 + 0x18)) {
          lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(int *)(lVar41 + 0x2c) = *(int *)(lVar41 + 0x2c) + 1;
          *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
          goto LAB_0378f760;
        }
        goto thunk_FUN_01ab6c44;
      }
      goto LAB_03793c9c;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar31 = FUN_026b97f8(uVar20,0);
    if ((uVar31 & 1) != 0) goto LAB_0378f700;
  }
LAB_0378f760:
  if (uVar20 == 0xa0) {
    lVar41 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(int *)(lVar41 + 0x20) = *(int *)(lVar41 + 0x20) + 1;
  }
LAB_0378f884:
  bVar12 = *(int *)(in_stack_000001e0 + 0x74) == 1;
  if (bVar12 && bVar15) {
    bVar12 = uVar20 == 0x2d;
  }
  if (bVar12) {
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar60 = *(float *)(unaff_x19 + 0xf4);
    iVar21 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar90 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    lVar41 = *(long *)(unaff_x19 + 0x1a00);
    fVar67 = in_stack_00000150;
    if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
      fVar67 = 1.0;
    }
    if ((lVar41 == 0) || (*(long *)(lVar41 + 0x20) == 0)) goto LAB_03793c9c;
    fVar69 = *(float *)(unaff_x19 + 0xf0);
    fVar72 = *(float *)(lVar41 + 0x2c);
    fVar66 = (float)FUN_03776ea8(*(long *)(lVar41 + 0x20),0);
    fVar71 = *pfVar45;
    fVar66 = fVar69 * (fVar60 / (float)iVar21) * fVar90 * fVar67 * fVar72 * fVar66;
    fVar60 = *(float *)(unaff_x19 + 0x358);
    if ((uVar20 == 10) && (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
      lVar41 = *plVar2;
      if (lVar41 == 0) goto LAB_03793c9c;
      uVar54 = *(int *)(unaff_x19 + 0x324) - 1;
      if (*(uint *)(lVar41 + 0x18) <= uVar54) goto thunk_FUN_01ab6c44;
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar67 = *(float *)(lVar41 + (long)(int)uVar54 * 0x188 + 0x68);
      iVar21 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar69 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      lVar41 = *(long *)(unaff_x19 + 0x1a00);
      fVar90 = in_stack_00000150;
      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
        fVar90 = 1.0;
      }
      if ((lVar41 == 0) || (*(long *)(lVar41 + 0x20) == 0)) goto LAB_03793c9c;
      fVar72 = *(float *)(unaff_x19 + 0xf0);
      fVar73 = *(float *)(lVar41 + 0x2c);
      fVar66 = (float)FUN_03776ea8(*(long *)(lVar41 + 0x20),0);
      lVar41 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar41 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      fVar71 = *(float *)(lVar41 + 100);
      fVar60 = *(float *)(lVar41 + 0x68);
      fVar66 = fVar72 * (fVar67 / (float)iVar21) * fVar69 * fVar90 * fVar73 * fVar66;
    }
    fVar90 = *(float *)(unaff_x19 + 0x2f4);
    fVar67 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
         (lVar41 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar41 == 0)) goto LAB_03793c9c;
      FUN_03776e6c(&stack0x000016a0,lVar41,0);
      fVar67 = (float)FUN_03776cb4(&stack0x000015c0,0);
    }
    fVar69 = *(float *)(unaff_x19 + 0x35c);
    fVar60 = (fVar95 - fVar71) - fVar60;
    bVar12 = true;
    if ((fVar69 <= fVar60) && (bVar12 = false, !NAN(fVar69))) {
      bVar12 = fVar69 == -1.0;
    }
    if (!bVar12) {
      fVar60 = fVar69;
    }
    fVar69 = 1.0;
    if (uVar51 != 0) {
      fVar69 = DAT_00d38acc;
    }
    if (ABS(fVar90) + fVar66 * fVar67 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar69 * fVar60) {
      FUN_03796df8();
      memcpy(&stack0x000005c8,__src,0x398);
      FUN_020ab0d8(lVar28,&stack0x000005c8,
                   *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__
                  );
    }
  }
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar41 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  uVar54 = *(uint *)(unaff_x19 + 0x340);
  lVar41 = lVar41 + (long)(int)*puVar1 * 0x188;
  *(uint *)(lVar41 + 0x6c) = uVar54;
  *(undefined4 *)(lVar41 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
  if ((bVar15) || ((uVar20 < 0xe && ((1 << (ulong)(uVar20 & 0x1f) & 0x2c00U) != 0)))) {
    lVar41 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= uVar54) goto thunk_FUN_01ab6c44;
    if (*(int *)(lVar41 + (long)(int)uVar54 * 0x60 + 0x24) == 1) goto LAB_0378fbcc;
  }
  else {
    lVar41 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar41 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
    if (*(uint *)(lVar41 + 0x18) <= uVar54) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(lVar41 + (long)(int)uVar54 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  }
  if (uVar20 != 0x200b) {
    if (uVar20 == 9) {
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar60 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      bVar17 = FUN_03779d4c(*in_stack_000001c8,0);
      fVar67 = *(float *)(unaff_x19 + 0x2f4);
      fVar90 = fVar65 * fVar60 * (float)bVar17;
      fVar60 = fVar90 * (float)(int)(fVar67 / fVar90);
      if (fVar60 <= fVar67) {
        fVar60 = fVar67 + fVar90;
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar60;
    }
    else {
      fVar60 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar60 == 0.0) {
        fVar67 = *(float *)(unaff_x19 + 0x2f4);
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fVar60 = (float)FUN_03776cb4(&stack0x000015f0,0);
          fVar66 = *(float *)(unaff_x19 + 0x19a8);
          fVar90 = (float)FUN_03778e7c(&stack0x000015e0,0);
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            fVar68 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
            fVar67 = fVar67 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              fVar65 * (fVar60 * fVar66 + fVar90) +
                              fVar64 * (fVar92 + fVar70 + fVar68));
            goto UnityEngine_UIElements_WheelEvent___ctor;
          }
          goto LAB_03793c9c;
        }
        fVar60 = (float)FUN_03778e7c(&stack0x000015e0,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar90 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        fVar67 = fVar67 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          fVar65 * fVar60 + fVar64 * (fVar92 + fVar70 + fVar90));
        *(float *)(unaff_x19 + 0x2f4) = fVar67;
        if ((uVar23 == 0) && (uVar20 != 0x200b)) goto FUN_0378fd94;
        fVar67 = fVar67 - fVar64 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      else {
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar67 = *(float *)(unaff_x19 + 0x2f4);
        fVar90 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        fVar67 = fVar67 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          (fVar60 - fVar68) + fVar64 * (fVar70 + fVar90));
UnityEngine_UIElements_WheelEvent___ctor:
        *(float *)(unaff_x19 + 0x2f4) = fVar67;
        if ((uVar23 == 0) && (uVar20 != 0x200b)) goto FUN_0378fd94;
        fVar67 = fVar67 + fVar64 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar67;
    }
  }
FUN_0378fd94:
  lVar41 = *plVar2;
  if (lVar41 == 0) goto LAB_03793c9c;
  uVar54 = *puVar1;
  if (*(uint *)(lVar41 + 0x18) <= uVar54) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar41 + (long)(int)uVar54 * 0x188 + 0x164) = *(undefined4 *)(unaff_x19 + 0x2f4);
  if (uVar20 == 0xd) {
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
  }
  if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
     (((0xd < uVar20 || ((1 << (ulong)(uVar20 & 0x1f) & 0x2c00U) == 0)) && (1 < uVar20 - 0x2028))))
  {
    lVar41 = *plVar47;
    if (lVar41 == 0) goto LAB_03793c9c;
    uVar51 = *(uint *)(unaff_x19 + 0x350);
    if (*(int *)(lVar41 + 0x18) < (int)(uVar51 + 1)) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff3814(plVar47,uVar51 + 1,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__);
      lVar41 = *plVar47;
      if (lVar41 == 0) goto LAB_03793c9c;
      uVar51 = *(uint *)(unaff_x19 + 0x350);
    }
    if (*(uint *)(lVar41 + 0x18) <= uVar51) goto thunk_FUN_01ab6c44;
    lVar57 = lVar41 + (long)(int)uVar51 * 0x14;
    *(undefined4 *)(lVar57 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
    fVar60 = *(float *)(unaff_x19 + 0x378);
    if (*(float *)(lVar57 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
      fVar60 = *(float *)(lVar57 + 0x30);
    }
    *(float *)(lVar57 + 0x30) = fVar60;
    if (*(char *)(unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar41 + (long)(int)uVar51 * 0x14 + 0x20) = *(undefined4 *)(unaff_x19 + 0x324)
      ;
    }
    uVar54 = *puVar1;
    *(uint *)(lVar41 + (long)(int)uVar51 * 0x14 + 0x24) = uVar54;
  }
  if (((uVar20 < 0xc) && ((1 << (ulong)(uVar20 & 0x1f) & 0xc08U) != 0)) ||
     ((uVar20 - 0x2028 < 2 || (((bool)(bVar15 & uVar20 == 0x2d) || (uVar54 == uVar27)))))) {
    if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
      fVar60 = *(float *)(unaff_x19 + 0x338);
      fVar67 = *(float *)(unaff_x19 + 0x15ac);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar60 = fVar60 - fVar67;
      if (((fVar81 < ABS(fVar60)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
         (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
        uVar77 = *(undefined4 *)(unaff_x19 + 0x328);
        uVar22 = *(undefined4 *)(unaff_x19 + 0x324);
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_037a5574(fVar60,uVar77,uVar22,in_stack_000001c0,0);
        *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar60;
        *(float *)(unaff_x19 + 0x2e0) = fVar60 + *(float *)(unaff_x19 + 0x2e0);
        plVar55 = (long *)PTR_DAT_03cbe438;
        if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
          FUN_020ab640(lVar28,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(__src,&stack0x000016a0,0x398);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xb28,0);
          *(float *)(unaff_x19 + 0xaf0) = fVar60 + *(float *)(unaff_x19 + 0xaf0);
          *(float *)(unaff_x19 + 0xb24) = fVar60 + *(float *)(unaff_x19 + 0xb24);
          memcpy(&stack0x00000230,__src,0x398);
          FUN_020ab0d8(lVar28,&stack0x00000230,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
        }
      }
    }
    fVar67 = *(float *)(unaff_x19 + 0x2e0);
    *(undefined1 *)(unaff_x19 + 0x37c) = 0;
    fVar90 = *(float *)(unaff_x19 + 0x33c) - fVar67;
    fVar60 = *(float *)(unaff_x19 + 0x378);
    if (fVar90 <= *(float *)(unaff_x19 + 0x378)) {
      fVar60 = fVar90;
    }
    *(float *)(unaff_x19 + 0x378) = fVar60;
    fVar66 = *(float *)(unaff_x19 + 0x338);
    if (!bVar14) {
      fVar97 = fVar60;
    }
    if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
       ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*puVar1 ||
        (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
      bVar14 = true;
    }
    lVar41 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar41 == 0) goto LAB_03793c9c;
    uVar54 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar41 + 0x18) <= uVar54) goto thunk_FUN_01ab6c44;
    iVar21 = *(int *)(unaff_x19 + 0x328);
    lVar57 = lVar41 + (long)(int)uVar54 * 0x60;
    *(int *)(lVar57 + 0x38) = iVar21;
    uVar51 = *(uint *)(unaff_x19 + 0x328);
    if (iVar21 <= (int)*(uint *)(unaff_x19 + 0x330)) {
      uVar51 = *(uint *)(unaff_x19 + 0x330);
    }
    *(uint *)(unaff_x19 + 0x330) = uVar51;
    *(uint *)(lVar57 + 0x3c) = uVar51;
    iVar26 = *(int *)(unaff_x19 + 0x324);
    *(int *)(unaff_x19 + 0x32c) = iVar26;
    *(int *)(lVar57 + 0x40) = iVar26;
    iVar25 = *(int *)(unaff_x19 + 0x330);
    if ((int)uVar51 <= *(int *)(unaff_x19 + 0x334)) {
      iVar25 = *(int *)(unaff_x19 + 0x334);
    }
    *(int *)(unaff_x19 + 0x334) = iVar25;
    *(int *)(lVar57 + 0x44) = iVar25;
    *(int *)(lVar57 + 0x24) = (iVar26 - iVar21) + 1;
    *(undefined4 *)(lVar57 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
    *(undefined4 *)(lVar57 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
    lVar57 = *plVar2;
    if (lVar57 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar57 + 0x18) <= uVar51) goto thunk_FUN_01ab6c44;
    uVar77 = *(undefined4 *)(lVar57 + (long)(int)uVar51 * 0x188 + 0x124);
    lVar41 = lVar41 + (long)(int)uVar54 * 0x60;
    *(float *)(lVar41 + 0x74) = fVar90;
    *(undefined4 *)(lVar41 + 0x70) = uVar77;
    lVar41 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar57 = *plVar2;
    if (lVar57 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar57 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    uVar77 = *(undefined4 *)(lVar57 + (long)(int)*(uint *)(unaff_x19 + 0x334) * 0x188 + 0x130);
    fVar66 = fVar66 - fVar67;
    lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(float *)(lVar41 + 0x7c) = fVar66;
    *(undefined4 *)(lVar41 + 0x78) = uVar77;
    lVar41 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar41 == 0) goto LAB_03793c9c;
    uVar54 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar41 + 0x18) <= uVar54) goto thunk_FUN_01ab6c44;
    lVar57 = lVar41 + (long)(int)uVar54 * 0x60;
    *(float *)(lVar57 + 0x48) = *(float *)(lVar57 + 0x78) - fVar65 * fVar59;
    *(float *)(lVar57 + 0x60) = fStack0000000000000174;
    if (*(int *)(lVar57 + 0x24) == 1) {
      *(undefined4 *)(lVar41 + (long)(int)uVar54 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158)
      ;
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar60 = (float)FUN_03779d0c(*in_stack_000001c8,0);
    lVar41 = *plVar2;
    if (lVar41 == 0) goto LAB_03793c9c;
    lVar57 = (long)(int)*(uint *)(unaff_x19 + 0x334);
    if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto LAB_03793c9c;
    uVar54 = *(uint *)(unaff_x19 + 0x340);
    if (((*(char *)(lVar41 + lVar57 * 0x188 + 0x1a0) == '\0') &&
        (lVar57 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
        *(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
       (uVar51 = (uint)*(undefined8 *)(lVar32 + 0x18), uVar51 <= uVar54)) goto thunk_FUN_01ab6c44;
    fVar70 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (*(float *)(unaff_x19 + 0x2ec) + fVar64 * (fVar92 + fVar70 + fVar60));
    fVar60 = -fVar70;
    if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
      fVar60 = fVar70;
    }
    *(float *)(lVar32 + (long)(int)uVar54 * 0x60 + 0x5c) =
         *(float *)(lVar41 + lVar57 * 0x188 + 0x164) + fVar60;
    if (uVar51 <= uVar54) goto thunk_FUN_01ab6c44;
    lVar32 = lVar32 + (long)(int)uVar54 * 0x60;
    *(float *)(lVar32 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
    *(float *)(lVar32 + 0x58) = fVar90;
    *(float *)(lVar32 + 0x4c) = fVar63 * fVar58 + (fVar66 - fVar90);
    *(float *)(lVar32 + 0x50) = fVar66;
    if (0x2c < (int)uVar20) {
      if ((uVar20 - 0x2028 < 2) || (uVar20 == 0x2d)) goto LAB_03790360;
      goto LAB_03790574;
    }
    if (uVar20 - 10 < 2) {
LAB_03790360:
      FUN_03796df8();
      uVar23 = *(uint *)(unaff_x19 + 0x324);
      iVar21 = *(int *)(unaff_x19 + 0x340) + 1;
      *(int *)(unaff_x19 + 0x340) = iVar21;
      *(uint *)(unaff_x19 + 0x328) = uVar23 + 1;
      *(undefined8 *)(unaff_x19 + 0x344) = 0;
      if (*(long *)(in_stack_000001c0 + 0x48) != 0) {
        if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar21) {
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_037a56f4(iVar21,in_stack_000001c0,0);
          uVar23 = *puVar1;
        }
        lVar41 = *plVar2;
        if (lVar41 != 0) {
          if (uVar23 < *(uint *)(lVar41 + 0x18)) {
            fVar60 = *(float *)(lVar41 + (long)(int)uVar23 * 0x188 + 0x158);
            if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
              if ((uVar20 == 0x2029) || (fVar70 = 0.0, uVar20 == 10)) {
                fVar70 = *(float *)(in_stack_000001e0 + 0xcc);
              }
              uVar36 = 0;
              fVar70 = fVar60 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                       fVar63 * (fVar58 + *(float *)(unaff_x19 + 0x15b0)) +
                       fVar64 * (*(float *)(in_stack_000001e0 + 200) + fVar70) +
                       *(float *)(unaff_x19 + 0x2e0);
            }
            else {
              if ((uVar20 == 0x2029) || (fVar70 = 0.0, uVar20 == 10)) {
                fVar70 = *(float *)(in_stack_000001e0 + 0xcc);
              }
              uVar36 = 1;
              fVar70 = *(float *)(unaff_x19 + 0x2e0) +
                       *(float *)(unaff_x19 + 0x2e4) +
                       fVar64 * (*(float *)(in_stack_000001e0 + 200) + fVar70);
            }
            *(float *)(unaff_x19 + 0x2e0) = fVar70;
            *(float *)(unaff_x19 + 0x15ac) = fVar60;
            *(undefined1 *)(unaff_x19 + 0x2e8) = uVar36;
            *(undefined8 *)(unaff_x19 + 0x338) = uVar9;
            *(float *)(unaff_x19 + 0x2f4) =
                 *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
            FUN_03796df8();
            FUN_03796df8();
            *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
            goto LAB_0379053c;
          }
          goto thunk_FUN_01ab6c44;
        }
      }
      goto LAB_03793c9c;
    }
    if (uVar20 == 3) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar19 = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
        goto LAB_03790574;
      }
      goto LAB_03793c9c;
    }
  }
  else {
    lVar41 = *plVar2;
    if (lVar41 == 0) goto LAB_03793c9c;
  }
LAB_03790574:
  uVar54 = *puVar1;
  if (*(uint *)(lVar41 + 0x18) <= uVar54) goto thunk_FUN_01ab6c44;
  if (*(char *)(lVar41 + (long)(int)uVar54 * 0x188 + 0x1a0) != '\0') {
    lVar41 = lVar41 + (long)(int)uVar54 * 0x188;
    uVar31 = *(ulong *)(unaff_x19 + 0x360);
    uVar34 = *(ulong *)(lVar41 + 0x124);
    *(ulong *)(unaff_x19 + 0x360) =
         uVar31 ^ (uVar31 ^ uVar34) &
                  ~CONCAT44(-(uint)((float)(uVar31 >> 0x20) < (float)(uVar34 >> 0x20)),
                            -(uint)((float)uVar31 < (float)uVar34));
    uVar31 = *(ulong *)(unaff_x19 + 0x368);
    uVar34 = *(ulong *)(lVar41 + 0x130);
    *(ulong *)(unaff_x19 + 0x368) =
         uVar31 ^ (uVar31 ^ uVar34) &
                  ~CONCAT44(-(uint)((float)(uVar34 >> 0x20) < (float)(uVar31 >> 0x20)),
                            -(uint)((float)uVar34 < (float)uVar31));
  }
  if ((cVar37 != '\0') ||
     ((*(uint *)(in_stack_000001e0 + 0x74) < 7 &&
      ((1 << (ulong)(*(uint *)(in_stack_000001e0 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
    if ((uVar23 == 0) && (((uVar20 != 0x2d && (uVar20 != 0x200b)) && (uVar20 != 0xad)))) {
      if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03790684:
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar31 = FUN_037a5f20(uVar20,0);
        if ((uVar31 & 1) == 0) {
LAB_037906cc:
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar31 = FUN_037a5f90(uVar20,0);
          if ((uVar31 & 1) == 0) goto LAB_037907cc;
          if (lVar40 == 0) goto LAB_03793c9c;
        }
        else {
          if ((lVar40 == 0) || (lVar41 = FUN_037a8a5c(lVar40,0), lVar41 == 0)) goto LAB_03793c9c;
          if (*(char *)(lVar41 + 0x28) != '\0') goto LAB_037906cc;
        }
        lVar41 = FUN_037a8a5c(lVar40,0);
        if ((lVar41 == 0) || (lVar41 = FUN_037aad04(lVar41,0), lVar41 == 0)) goto LAB_03793c9c;
        uVar77 = (undefined4)(uVar43 >> 0x20);
        uVar43 = CONCAT44(uVar77,uVar20);
        uVar31 = FUN_021e4dc4(lVar41,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
        if ((int)*puVar1 < (int)uVar27) {
          lVar41 = FUN_037a8a5c(lVar40,0);
          if (lVar41 == 0) goto LAB_03793c9c;
          lVar41 = FUN_037aaf28(lVar41,0);
          lVar57 = *plVar2;
          if (lVar57 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar57 + 0x18) <= *puVar1 + 1) goto thunk_FUN_01ab6c44;
          if (lVar41 == 0) goto LAB_03793c9c;
          uVar43 = CONCAT44(uVar77,(uint)*(ushort *)
                                          (lVar57 + (long)(int)(*puVar1 + 1) * 0x188 + 0x20));
          uVar34 = FUN_021e4dc4(lVar41,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
          if ((uVar31 & 1) != 0) goto LAB_037909e8;
          if ((uVar34 & 1) == 0) goto LAB_03790cd4;
          if (bVar18 == 0) goto LAB_03790854;
        }
        else {
          if ((uVar31 & 1) == 0) {
LAB_03790cd4:
            FUN_03796df8();
            bVar18 = 0;
            goto LAB_03790864;
          }
LAB_037909e8:
          if (uVar24 != uVar4 || ((bVar18 ^ 0xff) & 1) != 0) goto LAB_03790864;
        }
        if (uVar23 != 0) {
          FUN_03796df8();
        }
      }
      else {
LAB_037907cc:
        if (bVar18 == 0) {
LAB_03790854:
          bVar18 = 0;
          goto LAB_03790864;
        }
        if ((uVar23 != 0 && uVar20 != 0xa0) || (!bVar16 && uVar20 == 0xad)) {
          FUN_03796df8();
        }
      }
      FUN_03796df8();
      bVar18 = 1;
    }
    else {
      if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_037907cc;
      if (((uVar20 - 0x2007 < 0x29) &&
          ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((uVar20 == 0xa0 || (uVar20 == 0x2060)))) goto LAB_03790684;
      FUN_03796df8();
      bVar18 = 0;
      *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
    }
  }
LAB_03790864:
  FUN_03796df8();
  *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
  in_stack_00001688 = uVar29;
  fVar60 = fVar65;
  goto LAB_0378d260;
LAB_0379194c:
  do {
    uVar19 = uVar23 - 1;
    if (*(uint *)(lVar28 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
    lVar57 = (long)(int)uVar19;
    lVar40 = lVar28 + lVar57 * 0x188;
    lVar41 = *(long *)(lVar40 + 0x40);
    uVar7 = *(ushort *)(lVar40 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar18 = FUN_026b63d8(uVar7,0);
    if (*(uint *)(lVar28 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
    lVar40 = *(long *)(in_stack_000001c0 + 0x48);
    uVar24 = (uint)uVar7;
    if (lVar40 == 0) goto LAB_03793c9c;
    uVar4 = *(uint *)(lVar28 + lVar57 * 0x188 + 0x6c);
    if (*(uint *)(lVar40 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
    lVar32 = (long)(int)uVar4;
    lVar40 = lVar40 + lVar32 * 0x60;
    uVar51 = *(uint *)(lVar40 + 0x40);
    uVar54 = *(uint *)(lVar40 + 0x6c);
    iVar5 = *(int *)(lVar40 + 0x20);
    iVar25 = *(int *)(lVar40 + 0x28);
    iVar26 = *(int *)(lVar40 + 0x2c);
    uVar38 = *(uint *)(lVar40 + 0x44);
    lVar49 = (long)(int)uVar38;
    fVar81 = *(float *)(lVar40 + 0x50);
    fVar63 = *(float *)(lVar40 + 0x58);
    fVar95 = *(float *)(lVar40 + 0x5c);
    fVar84 = *(float *)(lVar40 + 0x60);
    fVar80 = *(float *)(lVar40 + 100);
    fVar64 = *(float *)(lVar40 + 0x70);
    fVar65 = *(float *)(lVar40 + 0x74);
    fVar94 = *(float *)(lVar40 + 0x78);
    fVar97 = *(float *)(lVar40 + 0x7c);
    if ((int)uVar54 < 0x421) {
      if ((int)uVar54 < 0x209) {
        if ((int)uVar54 < 0x111) {
          switch(uVar54) {
          case 0x101:
            goto switchD_03791aa4_caseD_1001;
          case 0x102:
            goto switchD_03791aa4_caseD_1002;
          case 0x103:
          case 0x105:
          case 0x106:
          case 0x107:
            break;
          case 0x104:
            goto switchD_03791aa4_caseD_1004;
          case 0x108:
            goto switchD_03791aa4_caseD_1008;
          default:
            if (uVar54 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar54) {
          case 0x201:
            goto switchD_03791aa4_caseD_1001;
          case 0x202:
            goto switchD_03791aa4_caseD_1002;
          case 0x203:
          case 0x205:
          case 0x206:
          case 0x207:
            break;
          case 0x204:
            goto switchD_03791aa4_caseD_1004;
          case 0x208:
            goto switchD_03791aa4_caseD_1008;
          default:
            if (uVar54 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar54 < 0x405) {
        if ((int)uVar54 < 0x401) {
          if (uVar54 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar54 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar54 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar54 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar54 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar54 == 0x408) || (uVar54 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar54 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar54) {
      if ((int)uVar54 < 0x2005) {
        if (0x2000 < (int)uVar54) {
          if (uVar54 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar54 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar54 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar54 != 0x1010) {
          uVar39 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar54 != 0x2008) && (uVar54 != 0x2010)) {
        uVar39 = 0x2020;
LAB_03791bc8:
        if (uVar54 != uVar39) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar95 = fVar64 + fVar94;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar54 < 0x811) {
      switch(uVar54) {
      case 0x801:
        goto switchD_03791aa4_caseD_1001;
      case 0x802:
        goto switchD_03791aa4_caseD_1002;
      case 0x803:
      case 0x805:
      case 0x806:
      case 0x807:
        break;
      case 0x804:
        goto switchD_03791aa4_caseD_1004;
      case 0x808:
switchD_03791aa4_caseD_1008:
        if ((int)uVar19 <= (int)uVar38) {
          if (uVar24 < 0xad) {
            if ((uVar24 != 3) && (uVar24 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar24 != 0xad) && ((uVar24 != 0x200b && (uVar24 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(lVar28 + 0x18) <= uVar51) goto thunk_FUN_01ab6c44;
            uVar8 = *(undefined2 *)(lVar28 + (long)(int)uVar51 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar55 = (long *)PTR_DAT_03cbded8;
            }
            uVar34 = FUN_026b8cc4(uVar8,0);
            if ((uVar34 & 1) == 0) {
              bVar15 = (int)uVar4 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar15 = false;
            }
            if ((fVar95 <= fVar84) && (!bVar15 && (uVar54 >> 4 & 1) == 0)) {
              fStack0000000000000158 = fVar80;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                fStack0000000000000158 = fVar84 + fVar80;
              }
              goto LAB_03791c20;
            }
            if ((uVar23 == 1) || (uVar4 != uVar20)) {
              cVar37 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar37 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar19 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar26 = (iVar26 - iVar5) - (uVar27 & 1);
                fVar80 = -fVar95;
                if (cVar37 != '\0') {
                  fVar80 = fVar95;
                }
                if (iVar26 < 1) {
                  fVar95 = 1.0;
                }
                else {
                  fVar95 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar26 < 2) {
                  iVar26 = 1;
                }
                fVar84 = fVar84 + fVar80;
                if (uVar24 == 9) {
LAB_037939d0:
                  if (cVar37 != '\0') {
                    fVar84 = fVar84 * (1.0 - fVar95);
                    fVar80 = (float)iVar26;
LAB_03793a0c:
                    fStack0000000000000158 = fStack0000000000000158 - fVar84 / fVar80;
                    break;
                  }
                  fVar80 = (float)iVar26;
                  fVar84 = fVar84 * (1.0 - fVar95);
                }
                else {
                  if (uVar24 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar34 = FUN_026b97f8(uVar24,0);
                    cVar37 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar34 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar84 = fVar84 * fVar95;
                  fVar80 = (float)(int)((iVar5 - (~uVar27 & 1)) + iVar25);
                  if (cVar37 != '\0') goto LAB_03793a0c;
                }
                fStack0000000000000158 = fStack0000000000000158 + fVar84 / fVar80;
                uStack0000000000000148 =
                     CONCAT44((float)((ulong)uStack0000000000000148 >> 0x20) + 0.0,
                              (float)uStack0000000000000148 + 0.0);
                break;
              }
            }
            fStack0000000000000158 = fVar80;
            if (cVar37 != '\0') {
              fStack0000000000000158 = fVar84 + fVar80;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar27 = FUN_026b97f8(uVar24,0);
            uStack0000000000000148 = 0;
          }
        }
        break;
      default:
        if (uVar54 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar54) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fStack0000000000000158 = fVar80 + 0.0;
        }
        else {
          fStack0000000000000158 = 0.0 - fVar95;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        fStack0000000000000158 = (fVar80 + fVar84 * 0.5) - fVar95 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        fStack0000000000000158 = (fVar84 + fVar80) - fVar95;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          fStack0000000000000158 = fVar84 + fVar80;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar54 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      uStack0000000000000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar54 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar54 <= uVar19) goto thunk_FUN_01ab6c44;
    lVar40 = lVar28 + lVar57 * 0x188;
    fVar80 = fStack0000000000000120 + fStack0000000000000158;
    fVar95 = (float)uStack0000000000000118 + (float)uStack0000000000000148;
    fVar84 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)uStack0000000000000148 >> 0x20);
    if (*(char *)(lVar40 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar37 = *(char *)(lVar28 + lVar57 * 0x188 + 0x28);
    if (cVar37 != '\x01') goto LAB_0379225c;
    fVar78 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar4,1.0);
    plVar55 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar78 = 1.0;
      lVar44 = lVar28 + lVar57 * 0x188;
      *(undefined4 *)(lVar44 + 0xbc) = 0;
      *(undefined4 *)(lVar44 + 0x94) = 0;
      *(undefined4 *)(lVar44 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar97 = *(float *)(lVar28 + lVar57 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar44 = lVar28 + lVar57 * 0x188;
        fVar94 = (fStack0000000000000158 + fVar97) - *(float *)(unaff_x19 + 0x360);
        fVar97 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar44 = lVar28 + lVar57 * 0x188;
      fVar94 = fVar94 - fVar64;
      *(float *)(lVar44 + 0xbc) = fVar78 + (fVar97 - fVar64) / fVar94;
      *(float *)(lVar44 + 0x94) = fVar78 + (*(float *)(lVar44 + 0x78) - fVar64) / fVar94;
      *(float *)(lVar44 + 0xe4) = fVar78 + (*(float *)(lVar44 + 200) - fVar64) / fVar94;
      fVar78 = fVar78 + (*(float *)(lVar44 + 0xf0) - fVar64) / fVar94;
      break;
    case 2:
      lVar44 = lVar28 + lVar57 * 0x188;
      fVar97 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar94 = (fStack0000000000000158 + *(float *)(lVar44 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar44 + 0xbc) = fVar78 + fVar94 / fVar97;
      *(float *)(lVar44 + 0x94) =
           fVar78 + ((fStack0000000000000158 + *(float *)(lVar44 + 0x78)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar44 + 0xe4) =
           fVar78 + ((fStack0000000000000158 + *(float *)(lVar44 + 200)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar78 = fVar78 + ((fStack0000000000000158 + *(float *)(lVar44 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar44 = lVar28 + lVar57 * 0x188;
        *(undefined4 *)(lVar44 + 0xc0) = 0;
        *(undefined4 *)(lVar44 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar44 + 0xe8) = 0;
        *(undefined4 *)(lVar44 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar97 = fVar97 - fVar65;
        lVar44 = lVar28 + lVar57 * 0x188;
        fVar94 = fVar78 + (*(float *)(lVar44 + 0xa4) - fVar65) / fVar97;
        fVar97 = fVar78 + (*(float *)(lVar44 + 0x7c) - fVar65) / fVar97;
        *(float *)(lVar44 + 0xc0) = fVar94;
        *(float *)(lVar44 + 0x98) = fVar97;
        *(float *)(lVar44 + 0xe8) = fVar94;
        *(float *)(lVar44 + 0x110) = fVar97;
        break;
      case 2:
        lVar44 = lVar28 + lVar57 * 0x188;
        fVar94 = fVar78 + (*(float *)(lVar44 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar44 + 0xc0) = fVar94;
        fVar97 = *(float *)(unaff_x19 + 0x364);
        fVar64 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar44 + 0xe8) = fVar94;
        fVar94 = fVar78 + (*(float *)(lVar44 + 0x7c) - fVar97) / (fVar64 - fVar97);
        *(float *)(lVar44 + 0x98) = fVar94;
        *(float *)(lVar44 + 0x110) = fVar94;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar54 = (uint)*(undefined8 *)(lVar28 + 0x18);
      }
      if (uVar54 <= uVar19) goto thunk_FUN_01ab6c44;
      lVar44 = lVar28 + lVar57 * 0x188;
      fVar94 = *(float *)(lVar44 + 0x168);
      fVar97 = (1.0 - (*(float *)(lVar44 + 0xc0) + *(float *)(lVar44 + 0x98)) * fVar94) * 0.5;
      fVar64 = fVar78 + *(float *)(lVar44 + 0xc0) * fVar94 + fVar97;
      fVar78 = fVar78 + *(float *)(lVar44 + 0x98) * fVar94 + fVar97;
      *(float *)(lVar44 + 0xbc) = fVar64;
      *(float *)(lVar44 + 0x94) = fVar64;
      *(float *)(lVar44 + 0xe4) = fVar78;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(lVar28 + lVar57 * 0x188 + 0x10c) = fVar78;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar54 <= uVar19) goto thunk_FUN_01ab6c44;
      lVar44 = lVar28 + lVar57 * 0x188;
      *(undefined4 *)(lVar44 + 0xc0) = 0;
      *(undefined4 *)(lVar44 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar44 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar44 + 0x110) = 0;
      break;
    case 1:
      if (uVar19 < uVar54) {
        fVar81 = fVar81 - fVar63;
        lVar44 = lVar28 + lVar57 * 0x188;
        fVar78 = (*(float *)(lVar44 + 0xa4) - fVar63) / fVar81;
        fVar81 = (*(float *)(lVar44 + 0x7c) - fVar63) / fVar81;
        *(float *)(lVar44 + 0xc0) = fVar78;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar54 <= uVar19) goto thunk_FUN_01ab6c44;
      lVar44 = lVar28 + lVar57 * 0x188;
      fVar78 = (*(float *)(lVar44 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar44 + 0xc0) = fVar78;
      fVar81 = (*(float *)(lVar44 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar44 + 0x98) = fVar81;
      *(float *)(lVar44 + 0xe8) = fVar81;
      *(float *)(lVar44 + 0x110) = fVar78;
      break;
    case 3:
      if (uVar54 <= uVar19) goto thunk_FUN_01ab6c44;
      lVar44 = lVar28 + lVar57 * 0x188;
      fVar81 = *(float *)(lVar44 + 0x168);
      fVar94 = (1.0 - (*(float *)(lVar44 + 0xbc) + *(float *)(lVar44 + 0xe4)) / fVar81) * 0.5;
      fVar78 = *(float *)(lVar44 + 0xbc) / fVar81 + fVar94;
      fVar94 = *(float *)(lVar44 + 0xe4) / fVar81 + fVar94;
      *(float *)(lVar44 + 0xc0) = fVar78;
      *(float *)(lVar44 + 0x98) = fVar94;
      *(float *)(lVar44 + 0x110) = fVar78;
      *(float *)(lVar44 + 0xe8) = fVar94;
    }
    if (uVar54 <= uVar19) goto thunk_FUN_01ab6c44;
    lVar44 = lVar28 + lVar57 * 0x188;
    fVar78 = *(float *)(lVar44 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar44 + 100) == '\0') && ((*(byte *)(lVar28 + lVar57 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar78 = -fVar78;
    }
    lVar44 = lVar28 + lVar57 * 0x188;
    *(float *)(lVar44 + 0xb8) = fVar78;
    *(float *)(lVar44 + 0x90) = fVar78;
    *(float *)(lVar44 + 0xe0) = fVar78;
    *(float *)(lVar44 + 0x108) = fVar78;
    *(undefined4 *)(lVar44 + 0xbc) = 0x3f800000;
    *(float *)(lVar44 + 0xc0) = fVar78;
    *(undefined4 *)(lVar44 + 0x94) = 0x3f800000;
    *(float *)(lVar44 + 0x98) = fVar78;
    *(undefined4 *)(lVar44 + 0xe4) = 0x3f800000;
    *(float *)(lVar44 + 0xe8) = fVar78;
    *(undefined4 *)(lVar44 + 0x10c) = 0x3f800000;
    *(float *)(lVar44 + 0x110) = fVar78;
LAB_0379225c:
    if (((int)uVar19 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iVar21 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar4) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar4) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (uVar19 < uVar54) {
          bVar15 = *(uint *)(lVar28 + lVar57 * 0x188 + 0x70) == uVar3;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar54 <= uVar19) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar40 = lVar28 + lVar57 * 0x188;
      *(ulong *)(lVar40 + 0xa0) =
           CONCAT44(fVar95 + (float)((ulong)*(undefined8 *)(lVar40 + 0xa0) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar40 + 0xa0));
      *(float *)(lVar40 + 0xa8) = fVar84 + *(float *)(lVar40 + 0xa8);
      *(ulong *)(lVar40 + 0x78) =
           CONCAT44(fVar95 + (float)((ulong)*(undefined8 *)(lVar40 + 0x78) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar40 + 0x78));
      *(float *)(lVar40 + 0x80) = fVar84 + *(float *)(lVar40 + 0x80);
      *(ulong *)(lVar40 + 200) =
           CONCAT44(fVar95 + (float)((ulong)*(undefined8 *)(lVar40 + 200) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar40 + 200));
      *(float *)(lVar40 + 0xd0) = fVar84 + *(float *)(lVar40 + 0xd0);
      *(ulong *)(lVar40 + 0xf0) =
           CONCAT44(fVar95 + (float)((ulong)*(undefined8 *)(lVar40 + 0xf0) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar40 + 0xf0));
      *(float *)(lVar40 + 0xf8) = fVar84 + *(float *)(lVar40 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar15 = false;
LAB_037922d8:
      if (uVar54 <= uVar19) goto thunk_FUN_01ab6c44;
      if (bVar15) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar55);
        DAT_0411f172 = '\x01';
        uVar54 = *(uint *)(lVar28 + 0x18);
      }
      uVar22 = *(undefined4 *)(*(undefined8 **)(*plVar55 + 0xb8) + 1);
      lVar44 = lVar28 + lVar57 * 0x188;
      *(undefined8 *)(lVar44 + 0xa0) = **(undefined8 **)(*plVar55 + 0xb8);
      *(undefined4 *)(lVar44 + 0xa8) = uVar22;
      if (uVar54 <= uVar19) goto thunk_FUN_01ab6c44;
      uVar22 = *(undefined4 *)(*(undefined8 **)(*plVar55 + 0xb8) + 1);
      lVar44 = lVar28 + lVar57 * 0x188;
      *(undefined8 *)(lVar44 + 0x78) = **(undefined8 **)(*plVar55 + 0xb8);
      *(undefined4 *)(lVar44 + 0x80) = uVar22;
      uVar22 = *(undefined4 *)(*(undefined8 **)(*plVar55 + 0xb8) + 1);
      *(undefined8 *)(lVar44 + 200) = **(undefined8 **)(*plVar55 + 0xb8);
      *(undefined4 *)(lVar44 + 0xd0) = uVar22;
      uVar22 = *(undefined4 *)(*(undefined8 **)(*plVar55 + 0xb8) + 1);
      *(undefined8 *)(lVar44 + 0xf0) = **(undefined8 **)(*plVar55 + 0xb8);
      *(undefined4 *)(lVar44 + 0xf8) = uVar22;
      *(undefined1 *)(lVar40 + 0x1a0) = 0;
    }
    iVar25 = FUN_0368e42c(0);
    if (iVar25 == 1) {
      cVar53 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar53 = '\0';
    }
    if (cVar37 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar19,cVar53 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar37 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar19,cVar53 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar40 = *plVar2;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
    lVar40 = lVar40 + lVar57 * 0x188;
    uVar29 = *(undefined8 *)(lVar40 + 0x124);
    *(undefined8 *)(lVar40 + 0x124) =
         CONCAT44(fVar95 + (float)((ulong)uVar29 >> 0x20),fVar80 + (float)uVar29);
    *(float *)(lVar40 + 300) = fVar84 + *(float *)(lVar40 + 300);
    lVar40 = *plVar2;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
    lVar40 = lVar40 + lVar57 * 0x188;
    *(ulong *)(lVar40 + 0x118) =
         CONCAT44(fVar95 + (float)((ulong)*(undefined8 *)(lVar40 + 0x118) >> 0x20),
                  fVar80 + (float)*(undefined8 *)(lVar40 + 0x118));
    *(float *)(lVar40 + 0x120) = fVar84 + *(float *)(lVar40 + 0x120);
    lVar40 = *plVar2;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
    lVar40 = lVar40 + lVar57 * 0x188;
    *(ulong *)(lVar40 + 0x130) =
         CONCAT44(fVar95 + (float)((ulong)*(undefined8 *)(lVar40 + 0x130) >> 0x20),
                  fVar80 + (float)*(undefined8 *)(lVar40 + 0x130));
    *(float *)(lVar40 + 0x138) = fVar84 + *(float *)(lVar40 + 0x138);
    lVar40 = *plVar2;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
    lVar40 = lVar40 + lVar57 * 0x188;
    *(float *)(lVar40 + 0x13c) = fVar80 + *(float *)(lVar40 + 0x13c);
    *(ulong *)(lVar40 + 0x140) =
         CONCAT44(fVar84 + (float)((ulong)*(undefined8 *)(lVar40 + 0x140) >> 0x20),
                  fVar95 + (float)*(undefined8 *)(lVar40 + 0x140));
    lVar40 = *plVar2;
    if (lVar40 == 0) goto LAB_03793c9c;
    uVar54 = *(uint *)(lVar40 + 0x18);
    if (uVar54 <= uVar19) goto thunk_FUN_01ab6c44;
    lVar44 = lVar40 + lVar57 * 0x188;
    *(float *)(lVar44 + 0x148) = fVar80 + *(float *)(lVar44 + 0x148);
    *(float *)(lVar44 + 0x164) = fVar80 + *(float *)(lVar44 + 0x164);
    *(float *)(lVar44 + 0x154) = fVar95 + *(float *)(lVar44 + 0x154);
    uVar29 = *(undefined8 *)(lVar44 + 0x14c);
    *(undefined8 *)(lVar44 + 0x14c) =
         CONCAT44(fVar95 + (float)((ulong)uVar29 >> 0x20),fVar95 + (float)uVar29);
    if (uVar4 == uVar20) {
      uVar20 = *puVar1 - 1;
      if (uVar19 == uVar20) goto LAB_037926b4;
    }
    else {
      lVar44 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar44 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar44 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
      lVar50 = (long)(int)uVar20;
      lVar52 = lVar44 + lVar50 * 0x60;
      fVar84 = fVar95 + *(float *)(lVar52 + 0x58);
      *(ulong *)(lVar52 + 0x50) =
           CONCAT44(fVar95 + (float)((ulong)*(undefined8 *)(lVar52 + 0x50) >> 0x20),
                    fVar95 + (float)*(undefined8 *)(lVar52 + 0x50));
      *(float *)(lVar52 + 0x58) = fVar84;
      *(float *)(lVar52 + 0x5c) = fVar80 + *(float *)(lVar52 + 0x5c);
      if (uVar54 <= *(uint *)(lVar52 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar22 = *(undefined4 *)(lVar40 + (long)(int)*(uint *)(lVar52 + 0x38) * 0x188 + 0x124);
      lVar44 = lVar44 + lVar50 * 0x60;
      *(float *)(lVar44 + 0x74) = fVar84;
      *(undefined4 *)(lVar44 + 0x70) = uVar22;
      lVar40 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar40 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar40 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
      lVar44 = *plVar2;
      if (lVar44 == 0) goto LAB_03793c9c;
      uVar20 = *(uint *)(lVar40 + lVar50 * 0x60 + 0x44);
      if (*(uint *)(lVar44 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
      lVar40 = lVar40 + lVar50 * 0x60;
      *(undefined4 *)(lVar40 + 0x78) = *(undefined4 *)(lVar44 + (long)(int)uVar20 * 0x188 + 0x130);
      *(undefined4 *)(lVar40 + 0x7c) = *(undefined4 *)(lVar40 + 0x50);
      uVar20 = *puVar1 - 1;
LAB_037926b4:
      if (uVar19 == uVar20) {
        lVar40 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        lVar44 = lVar40 + lVar32 * 0x60;
        fVar84 = fVar95 + *(float *)(lVar44 + 0x58);
        *(ulong *)(lVar44 + 0x50) =
             CONCAT44(fVar95 + (float)((ulong)*(undefined8 *)(lVar44 + 0x50) >> 0x20),
                      fVar95 + (float)*(undefined8 *)(lVar44 + 0x50));
        *(float *)(lVar44 + 0x58) = fVar84;
        *(float *)(lVar44 + 0x5c) = fVar80 + *(float *)(lVar44 + 0x5c);
        lVar50 = *plVar2;
        if (lVar50 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar50 + 0x18) <= *(uint *)(lVar44 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar22 = *(undefined4 *)(lVar50 + (long)(int)*(uint *)(lVar44 + 0x38) * 0x188 + 0x124);
        lVar40 = lVar40 + lVar32 * 0x60;
        *(float *)(lVar40 + 0x74) = fVar84;
        *(undefined4 *)(lVar40 + 0x70) = uVar22;
        lVar40 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        lVar44 = *plVar2;
        if (lVar44 == 0) goto LAB_03793c9c;
        uVar20 = *(uint *)(lVar40 + lVar32 * 0x60 + 0x44);
        if (*(uint *)(lVar44 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar32 * 0x60;
        *(undefined4 *)(lVar40 + 0x78) = *(undefined4 *)(lVar44 + (long)(int)uVar20 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar40 + 0x7c) = *(undefined4 *)(lVar40 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar34 = FUN_026b82c4(uVar24,0);
    if (((((uVar34 & 1) == 0) && (1 < uVar24 - 0x2010)) && (uVar24 != 0xad)) && (uVar24 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar23 == 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar17 = FUN_026b81f8(uVar24,0);
          if (((uVar24 == 0x200b) || (((bVar18 | bVar17 ^ 1) & 1) != 0)) || (*puVar1 == 1))
          goto LAB_037930d8;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar23 != 1) && ((int)uVar19 < (int)(*(uint *)(lVar28 + 0x18) - 1))) &&
           (((int)uVar19 < (int)*puVar1 && ((uVar24 == 0x2019 || (uVar24 == 0x27)))))) {
          if (*(uint *)(lVar28 + 0x18) <= uVar23 - 2) goto thunk_FUN_01ab6c44;
          uVar8 = *(undefined2 *)(lVar28 + lStack00000000000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar34 = FUN_026b82c4(uVar8,0);
          if ((uVar34 & 1) != 0) {
            if (*(uint *)(lVar28 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
            uVar8 = *(undefined2 *)(lVar28 + lStack00000000000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar34 = FUN_026b82c4(uVar8,0);
            if ((uVar34 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (uVar19 == *puVar1 - 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar34 = FUN_026b82c4(uVar24,0);
          fStack0000000000000170 = (float)uVar19;
          if ((uVar34 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar40 = *plVar47;
        if (lVar40 == 0) goto LAB_03793c9c;
        uVar20 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar25 = *(int *)(lVar40 + 0x18);
        if (iVar25 < (int)(uVar20 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar47,iVar25 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar40 = *plVar47;
          if (lVar40 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar40 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + (long)(int)uVar20 * 0xc;
        *(uint *)(lVar40 + 0x20) = uStack0000000000000168;
        *(float *)(lVar40 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar40 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar40 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar32 * 0x60;
        uStack000000000000016c = 0;
        iVar21 = iVar21 + 1;
        *(int *)(lVar40 + 0x34) = *(int *)(lVar40 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar19;
      }
      if (uVar19 == *puVar1 - 1) {
        lVar40 = *plVar47;
        if (lVar40 == 0) goto LAB_03793c9c;
        uVar20 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar25 = *(int *)(lVar40 + 0x18);
        if (iVar25 < (int)(uVar20 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar47,iVar25 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar40 = *plVar47;
          if (lVar40 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar40 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + (long)(int)uVar20 * 0xc;
        *(uint *)(lVar40 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar40 + 0x24) = uVar19;
        *(uint *)(lVar40 + 0x28) = uVar23 - uStack0000000000000168;
        lVar40 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar32 * 0x60;
        iVar21 = iVar21 + 1;
        *(int *)(lVar40 + 0x34) = *(int *)(lVar40 + 0x34) + 1;
      }
LAB_0379289c:
      uStack000000000000016c = 1;
    }
    lVar40 = *plVar2;
    if (lVar40 == 0) goto LAB_03793c9c;
    uVar20 = *(uint *)(lVar40 + 0x18);
    if (uVar20 <= uVar19) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar40 + lVar57 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar11) {
LAB_037928d0:
        if (uVar23 - 2 < uVar20) {
          uVar22 = *(undefined4 *)(lVar40 + lStack00000000000001a8 + -0x354);
          uVar83 = *(undefined4 *)(lVar40 + lStack00000000000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      bVar11 = false;
    }
    else {
      lVar32 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar25 = *(int *)(lVar40 + lVar57 * 0x188 + 0x70);
      *(int *)(lVar40 + lVar57 * 0x188 + 0x178) =
           *(int *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar19) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar4)) {
        bVar15 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar15 = iVar25 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar15 = false;
      }
      if (uVar24 != 0x200b && (bVar18 & 1) == 0) {
        fVar84 = *(float *)(lVar40 + lVar57 * 0x188 + 0x16c);
        if (fVar59 <= fVar84) {
          fVar59 = fVar84;
        }
        if (iVar25 != iStack00000000000000c0) {
          fStack000000000000015c = fVar58;
        }
        if (lVar41 == 0) goto LAB_03793c9c;
        fVar84 = *(float *)(lVar40 + lVar57 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar78)) {
          fStack0000000000000174 = ABS(fVar78);
        }
        FUN_03779650(&stack0x000016a0,lVar41,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar94 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar84 = fVar84 + fVar59 * fVar94;
        iStack00000000000000c0 = iVar25;
        if (fVar84 <= fStack000000000000015c) {
          fStack000000000000015c = fVar84;
        }
      }
      if ((((uVar24 == 0xd) || ((uVar24 & 0xfffe) == 10)) || ((int)uVar38 < (int)uVar19)) ||
         (bVar11 || bVar15)) {
LAB_03792a80:
        if (!bVar11) goto LAB_03792a8c;
      }
      else {
        if (uVar19 == uVar38) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar34 = FUN_026b97f8(uVar24,0);
          if ((uVar34 & 1) != 0) goto LAB_03792a80;
        }
        lVar40 = *plVar2;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar57 * 0x188;
        fStack00000000000000d8 = *(float *)(lVar40 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar40 + 0x124);
        bVar11 = fVar59 != 0.0;
        fVar84 = fStack00000000000000d8;
        if (bVar11) {
          fVar84 = fVar59;
        }
        fVar59 = fVar84;
        uVar77 = *(undefined4 *)(lVar40 + 0x174);
        uStack00000000000000cc = 0;
        fVar84 = fVar78;
        if (bVar11) {
          fVar84 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar84;
      }
      if (*puVar1 == 1) {
        lVar40 = *plVar2;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar57 * 0x188;
        uVar22 = *(undefined4 *)(lVar40 + 0x130);
        uVar83 = *(undefined4 *)(lVar40 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar22,
                     fStack000000000000015c,0,fStack00000000000000d8,uVar83);
      }
      else {
        if ((uVar19 == uVar51) || ((int)uVar38 <= (int)uVar19)) {
          lVar40 = *plVar2;
          if (lVar40 != 0) {
            lVar32 = lVar57;
            uVar20 = uVar19;
            if (uVar24 == 0x200b || (bVar18 & 1) != 0) {
              lVar32 = lVar49;
              uVar20 = uVar38;
            }
            if (uVar20 < *(uint *)(lVar40 + 0x18)) {
              lVar40 = lVar40 + lVar32 * 0x188;
              uVar22 = *(undefined4 *)(lVar40 + 0x130);
              uVar83 = *(undefined4 *)(lVar40 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar15) {
          lVar40 = *plVar2;
          if (lVar40 != 0) {
            uVar20 = *(uint *)(lVar40 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)(*puVar1 - 1) <= (int)uVar19) {
LAB_03793294:
          bVar11 = true;
          goto LAB_03792b70;
        }
        lVar40 = *plVar2;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
        uVar34 = FUN_03779528(uVar77,*(undefined4 *)(lVar40 + lStack00000000000001a8),0);
        if ((uVar34 & 1) != 0) goto LAB_03793294;
        lVar40 = *plVar2;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar57 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar40 + 0x130),fStack000000000000015c,0,fStack00000000000000d8
                     ,*(undefined4 *)(lVar40 + 0x16c));
      }
      fVar59 = 0.0;
      bVar11 = false;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar40 = *plVar2;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
    if (lVar41 == 0) goto LAB_03793c9c;
    uVar20 = *(uint *)(lVar40 + lVar57 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar41,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar84 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar20 >> 6 & 1) == 0) {
      if (bVar14) {
        lVar40 = *plVar2;
        if (lVar40 != 0) {
          if (uVar23 - 2 < *(uint *)(lVar40 + 0x18)) {
            fVar95 = *(float *)(lVar40 + lStack00000000000001a8 + -0x334);
            uVar22 = *(undefined4 *)(lVar40 + lStack00000000000001a8 + -0x354);
            goto LAB_037932fc;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
LAB_03792cf8:
      bVar14 = false;
    }
    else {
      lVar40 = *plVar2;
      if ((lVar40 == 0) || (lVar32 = *(long *)(unaff_x19 + 0x15b8), lVar32 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar40 + 0x18) <= uVar19)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar40 + lVar57 * 0x188 + 0x180) =
           *(int *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar19) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar4)) {
        bVar15 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar15 = *(int *)(lVar40 + lVar57 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar15 = false;
      }
      if ((((uVar24 == 0xd) || ((uVar24 & 0xfffe) == 10)) || ((int)uVar38 < (int)uVar19)) ||
         (!(bool)(~bVar14 & (bVar15 ^ 1U)))) {
LAB_03792cf0:
        if (!bVar14) goto LAB_03792cf8;
      }
      else {
        if (uVar19 == uVar38) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar34 = FUN_026b97f8(uVar24,0);
          if ((uVar34 & 1) != 0) goto LAB_03792cf0;
          lVar40 = *plVar2;
          if (lVar40 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar40 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar57 * 0x188;
        fVar62 = *(float *)(lVar40 + 0x16c);
        fStack00000000000000ec = *(float *)(lVar40 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar40 + 0x68);
        fStack00000000000000a4 = *(float *)(lVar40 + 0x150);
        fVar61 = fVar84 * fVar62 + fStack00000000000000a4;
        uStack00000000000000dc = 0;
      }
      uVar20 = *puVar1;
      if (uVar20 == 1) {
LAB_03792ef4:
        lVar32 = *plVar2;
        if (lVar32 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar32 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
        lVar32 = lVar32 + lVar57 * 0x188;
      }
      else {
        lVar40 = lVar57;
        if (uVar19 == uVar51) {
          lVar32 = *plVar2;
          if (lVar32 == 0) goto LAB_03793c9c;
          uVar20 = uVar19;
          if ((uVar24 != 0x200b & (bVar18 ^ 1)) == 0) {
            lVar40 = lVar49;
            uVar20 = uVar38;
          }
          if (*(uint *)(lVar32 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)uVar20 <= (int)uVar19) {
LAB_03792fdc:
            if ((int)uVar19 < (int)uVar20) {
              iVar25 = FUN_036d3364(lVar41,0);
              if (*(uint *)(lVar28 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
              lVar40 = *(long *)(lVar28 + lStack00000000000001a8 + -0x134);
              if (lVar40 == 0) goto LAB_03793c9c;
              iVar26 = FUN_036d3364(lVar40,0);
              if (iVar25 != iVar26) goto LAB_03792ef4;
            }
            if (!bVar15) {
              bVar14 = true;
              goto LAB_03793338;
            }
            lVar40 = *plVar2;
            if (lVar40 != 0) {
              if (uVar23 - 2 < *(uint *)(lVar40 + 0x18)) {
                fVar95 = *(float *)(lVar40 + lStack00000000000001a8 + -0x334);
                uVar22 = *(undefined4 *)(lVar40 + lStack00000000000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar32 = *plVar2;
          if (lVar32 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar32 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar32 + lStack00000000000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar94 = *(float *)(lVar32 + lStack00000000000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar34 = FUN_037a2200(fVar95 + fVar94,fStack00000000000000a4,0);
            if ((uVar34 & 1) != 0) {
              uVar20 = *puVar1;
              goto LAB_03792fdc;
            }
            lVar32 = *plVar2;
            if (lVar32 == 0) goto LAB_03793c9c;
          }
          uVar20 = uVar19;
          if ((int)uVar38 < (int)uVar19) {
            lVar40 = lVar49;
            uVar20 = uVar38;
          }
          if (*(uint *)(lVar32 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        }
        lVar32 = lVar32 + lVar40 * 0x188;
      }
      fVar95 = *(float *)(lVar32 + 0x150);
      uVar22 = *(undefined4 *)(lVar32 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(fStack00000000000000ec,fVar61,uStack00000000000000dc,uVar22,
                   fVar62 * fVar84 + fVar95,0,fVar62,fVar62);
      bVar14 = false;
    }
LAB_03793338:
    lVar40 = *plVar2;
    if (lVar40 == 0) goto LAB_03793c9c;
    uVar20 = (uint)*(undefined8 *)(lVar40 + 0x18);
    if (uVar20 <= uVar19) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar40 + lVar57 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar16) {
        FUN_0379dd0c(in_stack_00000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fVar60,uStack0000000000000124);
      }
LAB_03793428:
      bVar16 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar19) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar4)) {
        bVar15 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar15 = *(int *)(lVar40 + lVar57 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar15 = false;
      }
      if (!bVar16) {
        if (((uVar24 == 0xd) || ((uVar24 & 0xfffe) == 10)) ||
           (((int)uVar38 < (int)uVar19 || (bVar15)))) goto LAB_03793428;
        if (uVar19 == uVar38) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar34 = FUN_026b97f8(uVar24,0);
          if ((uVar34 & 1) != 0) goto LAB_03793428;
        }
        puVar10 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar41 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar41 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar41 = *(long *)puVar10;
        }
        lVar40 = *plVar2;
        if (lVar40 == 0) goto LAB_03793c9c;
        uVar20 = (uint)*(undefined8 *)(lVar40 + 0x18);
        if (uVar20 <= uVar19) goto thunk_FUN_01ab6c44;
        pfVar45 = *(float **)(lVar41 + 0xb8);
        in_stack_00000128 = *pfVar45;
        in_stack_00000140._4_4_ = pfVar45[1];
        fStack000000000000012c = pfVar45[2];
        fVar60 = pfVar45[3];
        uStack0000000000000124 = 0;
      }
      if (uVar20 <= uVar19) goto thunk_FUN_01ab6c44;
      lVar40 = lVar40 + lVar57 * 0x188;
      fVar94 = *(float *)(lVar40 + 0x130);
      fVar63 = *(float *)(lVar40 + 0x124);
      fVar95 = *(float *)(lVar40 + 0x148);
      fVar81 = *(float *)(lVar40 + 0x14c);
      fVar97 = *(float *)(lVar40 + 0x154);
      fVar84 = *(float *)(lVar40 + 0x164);
      uVar34 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      lVar40 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar34 & 1) == 0) {
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar40);
        }
        fVar64 = (float)FUN_037a1dd8(uVar31,0);
        bVar16 = (bVar18 & 1) == 0;
        if (bVar16) {
          fVar95 = fVar63;
        }
        if (bVar16) {
          fVar84 = fVar94;
        }
        if (fVar95 - fVar64 <= in_stack_00000128) {
          in_stack_00000128 = fVar95 - fVar64;
        }
        fVar95 = (float)FUN_037a1de0(uVar31,0);
        if (fStack000000000000012c <= fVar84 + fVar95) {
          fStack000000000000012c = fVar84 + fVar95;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar95 = (float)FUN_037a1df0(uVar31,0);
        if (fVar97 - fVar95 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar97 - fVar95;
        }
        fVar95 = (float)FUN_037a1de8(uVar31,0);
        if (fVar60 <= fVar81 + fVar95) {
          fVar60 = fVar81 + fVar95;
        }
      }
      else {
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar40);
        }
        fVar64 = (float)FUN_037a1de0(uVar31,0);
        if ((bVar18 & 1) == 0) {
          fVar95 = fVar63;
        }
        if (fVar97 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar97;
        }
        fVar95 = (fVar95 + (fStack000000000000012c - fVar64)) * 0.5;
        if (fVar60 <= fVar81) {
          fVar60 = fVar81;
        }
        FUN_0379dd0c(in_stack_00000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar95,fVar60,
                     uStack0000000000000124);
        puVar10 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = (float)FUN_037a1df0(uVar43,0);
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar97 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_037a1de0(uVar43,0);
        fVar60 = (float)FUN_037a1de8(uVar43,0);
        if ((bVar18 & 1) == 0) {
          fVar84 = fVar94;
        }
        fStack000000000000012c = fVar84 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        in_stack_00000128 = fVar95;
        fVar60 = fVar81 + fVar60;
      }
      if ((((*puVar1 == 1) || (uVar19 == uVar51)) || ((int)uVar38 <= (int)uVar19)) || (bVar15)) {
        FUN_0379dd0c(in_stack_00000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fVar60,uStack0000000000000124);
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
    }
    uVar19 = *puVar1;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    lStack00000000000001a8 = lStack00000000000001a8 + 0x188;
    bVar15 = (int)uVar23 < (int)uVar19;
    uVar20 = uVar4;
    uVar23 = uVar23 + 1;
  } while (bVar15);
  iVar25 = uVar4 + 1;
  plVar56 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
LAB_03793a5c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar19;
  uVar77 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar25;
  if ((int)uVar19 < 1 || iVar21 == 0) {
    iVar21 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iVar21;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar77;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar43 = 1;
    lVar28 = 0x70;
    do {
      lVar40 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar40 == 0) goto LAB_03793c9c;
      if (*(int *)(*plVar56 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar40 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar40 + lVar28,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar40 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar56 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar40 + 0x18) <= uVar43) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03785bdc(lVar40 + lVar28,1,0);
      }
      uVar43 = uVar43 + 1;
      lVar28 = lVar28 + 0x50;
    } while ((long)uVar43 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


