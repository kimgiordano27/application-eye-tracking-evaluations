/*
FUNCTION_NAME: UnityEngine.UIElements.KeyDownEvent$$GetEquivalentImguiEvent
ENTRY_POINT: 0378c788
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

void UnityEngine_UIElements_KeyDownEvent__GetEquivalentImguiEvent(float param_1)

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
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  ulong uVar32;
  long lVar33;
  long *plVar34;
  ulong uVar35;
  undefined1 *puVar36;
  undefined1 uVar37;
  char cVar38;
  int in_w8;
  uint uVar39;
  uint uVar40;
  float *pfVar41;
  long lVar42;
  long lVar43;
  float *pfVar44;
  ulong uVar45;
  long lVar46;
  long in_x9;
  float *pfVar47;
  long *plVar48;
  long *plVar49;
  long lVar50;
  long lVar51;
  uint uVar52;
  long lVar53;
  long unaff_x19;
  char cVar54;
  int unaff_w20;
  undefined8 *unaff_x21;
  int unaff_w22;
  uint uVar55;
  long *plVar56;
  long unaff_x23;
  char *unaff_x24;
  long *plVar57;
  long unaff_x25;
  long unaff_x26;
  long lVar58;
  long *unaff_x29;
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
  float fVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined4 uVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float unaff_s12;
  float fVar94;
  float unaff_s14;
  float fVar95;
  float fVar96;
  float fVar97;
  int iStack0000000000000028;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  int iStack00000000000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  float fStack00000000000000ec;
  undefined8 uStack0000000000000118;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000144;
  undefined8 uStack0000000000000148;
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
  long *in_stack_000001c8;
  int iStack00000000000001dc;
  uint in_stack_000015dc;
  undefined8 in_stack_00001688;
  float fVar98;
  ulong in_stack_000016a0;
  long in_stack_00001a38;
  
  fVar78 = *(float *)(in_x9 + 0x9a8);
  fVar65 = fVar78;
  if (in_w8 != 0) {
    fVar65 = 1.0;
  }
  FUN_020aa864(unaff_x19 + 0xf8,&stack0x000016a0,*unaff_x21);
  uVar20 = *(uint *)(unaff_x26 + 0x60);
  *(uint *)(unaff_x19 + 0x124) = uVar20;
  if ((uVar20 & 1) == 0) {
    uVar19 = *(undefined4 *)(unaff_x26 + 0xec);
  }
  else {
    uVar19 = 700;
  }
  *(undefined4 *)(unaff_x19 + 0x134) = uVar19;
  FUN_020aa864(unaff_x19 + 0x138,&stack0x000016a0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>__ctor__);
  FUN_037a7f44(unaff_x19 + 0x128,0);
  *(undefined4 *)(unaff_x19 + 0x158) = *(undefined4 *)(unaff_x26 + 0x70);
  FUN_020aa864(unaff_x19 + 0x160,&stack0x000016a0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_TextStyle>_TryGetValue__);
  *(undefined4 *)(unaff_x19 + 0x180) = 0;
  FUN_020aa7ec(unaff_x19 + 0x188,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_TryGetValue__);
                    /* try { // try from 0378c8e0 to 0388c943 has its CatchHandler @ 0378c8e0
                       catch() { ... } // from try @ 0378c8e0 with catch @ 0378c8e0
                       catch() { ... } // from try @ 0378c994 with catch @ 0378c8e0
                       catch() { ... } // from try @ 0378ca44 with catch @ 0378c8e0 */
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
  }
  pfVar41 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  fStack00000000000000ec = *pfVar41;
  fStack0000000000000144 = pfVar41[1];
  fStack0000000000000124 = pfVar41[2];
  uVar19 = FUN_01b6d7fc(*(undefined4 *)(unaff_x26 + 0x80),*(undefined4 *)(unaff_x26 + 0x84),
                        *(undefined4 *)(unaff_x26 + 0x88),*(undefined4 *)(unaff_x26 + 0x8c),0);
  *(undefined4 *)(unaff_x19 + 0x1a8) = uVar19;
  *(undefined4 *)(unaff_x19 + 0x1ac) = uVar19;
                    /* try { // try from 0378c944 to 0388c957 has its CatchHandler @ 0378c9f0 */
  *(undefined4 *)(unaff_x19 + 0x1b0) = uVar19;
  *(undefined4 *)(unaff_x19 + 0x1b4) = uVar19;
  puVar10 = Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__;
  FUN_020aa864(unaff_x19 + 0x1b8,&stack0x000016a0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__);
  FUN_020aa864(unaff_x19 + 0x1d8,&stack0x000016a0,*(undefined8 *)puVar10);
  FUN_020aa864(unaff_x19 + 0x1f8,&stack0x000016a0,*(undefined8 *)puVar10);
  uVar19 = *(undefined4 *)(unaff_x19 + 0x1ac);
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_037a1df8(0);
  FUN_037a1fc8(&stack0x00000978,uVar19,0);
  FUN_020aa864(unaff_x19 + 0x238,&stack0x00000960,
               *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Clear__);
  *(undefined8 *)(unaff_x19 + 0x288) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x288,0);
  FUN_020aa864(unaff_x19 + 0x290,0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_Texture2D>_set_Item__);
  if (*(long *)(unaff_x19 + 0x68) == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar20 = FUN_03779d3c(*(long *)(unaff_x19 + 0x68),0);
  *(uint *)(unaff_x19 + 0x19a4) = uVar20 & 0xff;
  FUN_020aa864(unaff_x19 + 0x268,&stack0x000016a0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_TextStyle>_ContainsKey__);
  FUN_020aa7ec(unaff_x19 + 0x2c0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_Add__);
  plVar56 = (long *)PTR_DAT_03cbe438;
  if (DAT_0411f16a == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f16a = '\x01';
  }
  uVar19 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 0x14);
  *(undefined8 *)(unaff_x19 + 0x19a8) =
       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 0xc);
  *(undefined4 *)(unaff_x19 + 0x19b0) = uVar19;
  if (DAT_0411f169 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbdeb8);
    DAT_0411f169 = '\x01';
  }
  uVar30 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
  *(undefined8 *)(unaff_x24 + 0x444) = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
  *(undefined8 *)(unaff_x24 + 0x43c) = uVar30;
  *(undefined8 *)(unaff_x19 + 0x2e0) = DAT_00d37268;
  if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
  FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
  memcpy(&stack0x00001610,&stack0x000016a0,0x60);
  fVar59 = (float)FUN_03776970(&stack0x00001610,0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar60 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  puVar1 = (uint *)(unaff_x19 + 0x324);
  fVar61 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
  *(undefined8 *)(unaff_x19 + 0x2f4) = 0;
  *(undefined8 *)(unaff_x19 + 0x2ec) = 0;
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  uVar45 = in_stack_000016a0 & 0xffffffff00000000;
  FUN_020aa864(unaff_x19 + 0x300,&stack0x000016a0,*unaff_x21);
  uVar9 = DAT_00d377f0;
  uVar31 = _UNK_00d36c18;
  uVar30 = _DAT_00d36c10;
  *(undefined1 *)(unaff_x19 + 800) = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x19 + 0x32c) = 0;
  *(undefined4 *)(unaff_x19 + 0x334) = 0;
  *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
  *(undefined1 *)(unaff_x19 + 0x2e8) = 0;
  *(undefined4 *)(unaff_x19 + 0x19c4) = 0x80000000;
  *(undefined8 *)(unaff_x19 + 0x338) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x348) = uVar31;
  *(undefined8 *)(unaff_x19 + 0x340) = uVar30;
  *(undefined4 *)(unaff_x19 + 0x350) = 0;
  if (unaff_x25 == 0) goto LAB_03793c9c;
  plVar48 = (long *)(unaff_x25 + 0x50);
  if (*plVar48 == 0) goto LAB_03793c9c;
  uVar28 = *(int *)(unaff_x26 + 0xf0) - 1;
  uVar20 = *(int *)(*plVar48 + 0x18) - 1;
  if ((int)uVar28 <= (int)uVar20) {
    uVar20 = uVar28;
  }
  uVar3 = 0;
  if (-1 < (int)uVar28) {
    uVar3 = uVar20;
  }
  FUN_037a7e30(unaff_x25,0);
  fVar62 = *(float *)(unaff_x26 + 0x28);
  fVar79 = *(float *)(unaff_x26 + 0x2c);
  fVar96 = *(float *)(unaff_x19 + 0x58);
  fVar86 = *(float *)(unaff_x19 + 0x5c);
  fVar63 = *(float *)(unaff_x26 + 0x34);
  pfVar41 = (float *)(unaff_x19 + 0x354);
  *pfVar41 = 0.0;
  *(undefined4 *)(unaff_x19 + 0x358) = 0;
  *(undefined4 *)(unaff_x19 + 0x35c) = 0xbf800000;
  puVar10 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
  lVar29 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
  if (*(int *)(lVar29 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar29 = *(long *)puVar10;
  }
  *(undefined8 *)(unaff_x19 + 0x360) = **(undefined8 **)(lVar29 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0x368) = *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 8);
  FUN_037a7cb4(unaff_x25,0);
  *(undefined4 *)(unaff_x19 + 0x378) = 0;
  *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x370) = 0;
  fVar98 = 0.0;
  bVar14 = false;
  *(undefined2 *)(unaff_x19 + 0x37c) = 0;
  FUN_037a1dd0(&stack0x00001688,0xffffffff,0,0);
  cVar38 = *(char *)(unaff_x26 + 0x78);
  FUN_03796df8();
  FUN_03796df8();
  __src = (void *)(unaff_x19 + 0xab0);
  FUN_03796df8();
  FUN_03796df8();
  FUN_03796df8();
  lVar29 = unaff_x19 + 0x15e8;
  FUN_020aa7ec(lVar29,*(undefined8 *)
                       Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_ContainsKey__
              );
  *(undefined1 *)
   (*(long *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
             0xb8) + 8) = 0;
  fVar83 = DAT_00d38d28;
  fVar84 = DAT_00d38938;
  lVar42 = *(long *)(unaff_x26 + 0x68);
  uVar20 = 0;
  lVar43 = *(long *)(unaff_x19 + 0x20);
  if (lVar43 == 0) goto LAB_03793c9c;
  fVar59 = fVar59 - (fVar60 - fVar61);
  fVar60 = 0.0;
  if (fVar96 <= 0.0) {
    fVar96 = 0.0;
  }
  if (fVar86 <= 0.0) {
    fVar86 = 0.0;
  }
  fVar64 = (unaff_s14 / (float)unaff_w22) * param_1 * fVar65;
  plVar2 = (long *)(unaff_x25 + 0x30);
  uVar28 = unaff_w20 - 1;
  plVar57 = (long *)(unaff_x19 + 0x1588);
  fVar96 = fVar96 + DAT_00d3879c;
  fVar81 = fVar86 + DAT_00d3879c;
  fVar65 = fVar65 * unaff_s12 * DAT_00d38d28;
  bVar11 = true;
  iStack0000000000000028 = 0;
  bVar16 = false;
  iStack00000000000001dc = 0;
  bVar18 = 1;
  fStack0000000000000174 = fVar96;
  uVar24 = 0;
  fVar61 = fVar64;
LAB_0378cf04:
  if ((int)*(uint *)(lVar43 + 0x18) <= (int)uVar20) {
LAB_03790fec:
    if ((((*(char *)(unaff_x26 + 0xa8) != '\0') &&
         (DAT_00d389f8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
        (fVar65 = *_fStack00000000000000d0, fVar65 < *(float *)(unaff_x26 + 0xb0))) &&
       (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
      fVar78 = *(float *)(unaff_x26 + 0x108);
      if (*(float *)(unaff_x19 + 0x1594) < fVar78 / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x1594) = 0;
      }
      fVar59 = (*(float *)(unaff_x19 + 0x1598) - fVar65) * 0.5;
      if (fVar59 <= DAT_00d38b84) {
        fVar59 = DAT_00d38b84;
      }
      *(float *)(unaff_x19 + 0x159c) = fVar65;
      fVar59 = (fVar65 + fVar59) * 20.0 + 0.5;
      fVar65 = DAT_00d38e60;
      if (fVar59 != INFINITY) {
        fVar65 = (float)(int)fVar59 / 20.0;
      }
      if (fVar78 <= fVar65) {
        fVar65 = fVar78;
      }
LAB_037910ac:
      *(float *)(unaff_x19 + 0xec) = fVar65;
      goto LAB_0378c81c;
    }
    unaff_x24[0x30] = '\x01';
    if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
      uVar30 = FUN_0276793c(unaff_x19 + 0x15a0,0);
      uVar31 = FUN_0277fa90(_fStack00000000000000d0,0);
      uVar30 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar30,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar31,0);
      if (*(int *)(*plVar56 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*plVar56);
      }
      FUN_0367a6ec(uVar30,0);
    }
    plVar57 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
    plVar56 = (long *)PTR_DAT_03cbded8;
    if ((*puVar1 == 0) || ((*puVar1 == 1 && (uVar24 == 3)))) {
      FUN_0379e288(1,unaff_x25,0);
      goto LAB_0378c81c;
    }
    lVar29 = *(long *)(unaff_x25 + 0x58);
    if (lVar29 == 0) goto LAB_03793c9c;
    uVar20 = *(uint *)(unaff_x19 + 0x78);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ + 0xe0) ==
        0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar29 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
    FUN_03785b74(lVar29 + (long)(int)uVar20 * 0x50 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar22 = *(int *)(unaff_x26 + 0x70);
    fStack0000000000000158 = **(float **)(*plVar56 + 0xb8);
    uStack0000000000000148 = *(undefined8 *)(*(float **)(*plVar56 + 0xb8) + 1);
    lVar29 = *(long *)(unaff_x19 + 0x50);
    uStack0000000000000118 = uStack0000000000000148;
    fStack0000000000000120 = fStack0000000000000158;
    if (iVar22 < 0x421) {
      if (iVar22 < 0x205) {
        if (iVar22 < 0x109) {
          if ((iVar22 - 0x101U < 8) && ((1 << (ulong)(iVar22 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_0379144c:
            if (lVar29 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar29 + 0x18) < 2) goto thunk_FUN_01ab6c44;
            uVar30 = *(undefined8 *)(lVar29 + 0x30);
            if (*(int *)(unaff_x26 + 0x74) == 5) {
              lVar42 = *plVar48;
              if (lVar42 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar42 + 0x18) <= uVar3) goto thunk_FUN_01ab6c44;
              fVar65 = *(float *)(lVar42 + (long)(int)uVar3 * 0x14 + 0x28);
            }
            else {
              fVar65 = *(float *)(unaff_x19 + 0x374);
            }
            fStack0000000000000120 = fVar62 + 0.0 + *(float *)(lVar29 + 0x2c);
            fVar63 = (0.0 - fVar65) - fVar79;
            goto LAB_037917ec;
          }
        }
        else if (iVar22 < 0x121) {
          if ((iVar22 == 0x110) || (iVar22 == 0x120)) goto LAB_0379144c;
        }
        else if ((iVar22 - 0x201U < 4) && (iVar22 - 0x201U != 2)) goto LAB_037916dc;
      }
      else {
        if (iVar22 < 0x403) {
          if (iVar22 < 0x211) {
            if ((iVar22 == 0x208) || (iVar22 == 0x210)) goto LAB_037916dc;
            goto LAB_037917fc;
          }
          if (iVar22 != 0x220) {
            if (iVar22 - 0x401U < 2) goto LAB_03791588;
            goto LAB_037917fc;
          }
LAB_037916dc:
          if (lVar29 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
          goto thunk_FUN_01ab6c44;
          fStack0000000000000120 = (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
          uVar30 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar29 + 0x24) +
                            (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5);
          if (*(int *)(unaff_x26 + 0x74) == 5) {
            lVar29 = *plVar48;
            if (lVar29 != 0) {
              if (uVar3 < *(uint *)(lVar29 + 0x18)) {
                lVar29 = lVar29 + (long)(int)uVar3 * 0x14;
                fStack0000000000000120 = fVar62 + 0.0 + fStack0000000000000120;
                fVar63 = ((fVar79 + *(float *)(lVar29 + 0x28) + *(float *)(lVar29 + 0x30)) - fVar63)
                         * -0.5 + 0.0;
                goto LAB_037917ec;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          fStack0000000000000120 = fVar62 + 0.0 + fStack0000000000000120;
          fVar63 = ((fVar79 + *(float *)(unaff_x19 + 0x374) + fVar98) - fVar63) * -0.5 + 0.0;
        }
        else {
          if (iVar22 < 0x409) {
            if (iVar22 != 0x404) {
              bVar14 = iVar22 == 0x408;
              goto LAB_03791574;
            }
          }
          else if (iVar22 != 0x410) {
            bVar14 = iVar22 == 0x420;
LAB_03791574:
            if (!bVar14) goto LAB_037917fc;
          }
LAB_03791588:
          if (lVar29 == 0) goto LAB_03793c9c;
          if (*(int *)(lVar29 + 0x18) == 0) goto thunk_FUN_01ab6c44;
          uVar30 = *(undefined8 *)(lVar29 + 0x24);
          if (*(int *)(unaff_x26 + 0x74) == 5) {
            lVar42 = *plVar48;
            if (lVar42 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar42 + 0x18) <= uVar3) goto thunk_FUN_01ab6c44;
            fVar98 = *(float *)(lVar42 + (long)(int)uVar3 * 0x14 + 0x30);
          }
          fStack0000000000000120 = fVar62 + 0.0 + *(float *)(lVar29 + 0x20);
          fVar63 = fVar63 + (0.0 - fVar98);
        }
LAB_037917ec:
        uStack0000000000000118 =
             CONCAT44((float)((ulong)uVar30 >> 0x20) + 0.0,(float)uVar30 + fVar63);
      }
    }
    else if (iVar22 < 0x1005) {
      if (iVar22 < 0x809) {
        if ((iVar22 - 0x801U < 8) && ((1 << (ulong)(iVar22 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_037913b0:
          if (lVar29 != 0) {
            if ((*(int *)(lVar29 + 0x18) != 1) && (*(int *)(lVar29 + 0x18) != 0)) {
              uStack0000000000000118 =
                   CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar29 + 0x24) +
                            (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5 + 0.0);
              fStack0000000000000120 =
                   fVar62 + 0.0 + (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
              goto LAB_037917fc;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
      }
      else if (iVar22 < 0x821) {
        if ((iVar22 == 0x810) || (iVar22 == 0x820)) goto LAB_037913b0;
      }
      else if ((iVar22 - 0x1001U < 4) && (iVar22 - 0x1001U != 2)) goto LAB_03791644;
    }
    else if (iVar22 < 0x2003) {
      if (iVar22 < 0x1011) {
        if ((iVar22 == 0x1008) || (iVar22 == 0x1010)) goto LAB_03791644;
      }
      else {
        if (iVar22 == 0x1020) {
LAB_03791644:
          if (lVar29 != 0) {
            if ((*(int *)(lVar29 + 0x18) != 1) && (*(int *)(lVar29 + 0x18) != 0)) {
              uVar30 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar29 + 0x24) +
                                (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5);
              fStack0000000000000120 =
                   fVar62 + 0.0 + (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
              fVar63 = 0.0 - ((fVar79 + *(float *)(unaff_x19 + 0x36c) +
                              *(float *)(unaff_x19 + 0x364)) - fVar63) * 0.5;
              goto LAB_037917ec;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (iVar22 - 0x2001U < 2) goto LAB_037914ec;
      }
    }
    else {
      if (iVar22 < 0x2009) {
        if (iVar22 != 0x2004) {
          iVar26 = 0x2008;
          goto LAB_037914d4;
        }
      }
      else if (iVar22 != 0x2010) {
        iVar26 = 0x2020;
LAB_037914d4:
        if (iVar22 != iVar26) goto LAB_037917fc;
      }
LAB_037914ec:
      if (lVar29 == 0) goto LAB_03793c9c;
      if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0)) goto thunk_FUN_01ab6c44;
      uStack0000000000000118 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar29 + 0x24) + (float)*(undefined8 *)(lVar29 + 0x30))
                    * 0.5 + (0.0 - ((*(float *)(unaff_x19 + 0x370) - fVar79) - fVar63) * 0.5));
      fStack0000000000000120 =
           fVar62 + 0.0 + (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
    }
LAB_037917fc:
    uVar19 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ + 0xe0)
        == 0) {
      thunk_FUN_01a58e78(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                        );
    }
    FUN_037a1df8(0);
    FUN_037a1fc8(&stack0x00001670,0x4000ffff,0);
    fVar65 = DAT_00d38d70;
    uVar20 = *puVar1;
    if ((int)uVar20 < 1) {
      iVar26 = 0;
      iVar22 = 0;
      goto LAB_03793a5c;
    }
    lVar29 = *plVar2;
    if (lVar29 != 0) {
      fStack0000000000000174 = 0.0;
      fStack00000000000000d8 = 0.0;
      fStack00000000000000a8 = 0.0;
      plVar48 = (long *)(unaff_x25 + 0x38);
      fVar61 = 0.0;
      fStack00000000000000a4 = 0.0;
      uVar32 = (ulong)&stack0x00001670 | 4;
      bVar16 = false;
      fVar62 = 0.0;
      fVar78 = 0.0;
      uVar45 = (ulong)&stack0x000009f0 | 4;
      bVar11 = false;
      bVar14 = false;
      iVar22 = 0;
      uVar28 = 0;
      _uStack0000000000000168 = 0;
      iStack00000000000000c0 = 0;
      iStack0000000000000178 = 0;
      lStack00000000000001a8 = 0x2fc;
      fStack00000000000000c8 = fStack0000000000000144;
      fStack00000000000000cc = fStack0000000000000124;
      fStack00000000000000dc = fStack0000000000000124;
      fStack000000000000015c = DAT_00d38d70;
      uVar24 = 0;
      uVar21 = 1;
      fStack00000000000000d0 = fStack00000000000000ec;
      fStack0000000000000128 = fStack00000000000000ec;
      fStack000000000000012c = fStack00000000000000ec;
      fVar59 = fStack0000000000000144;
      fVar60 = fStack0000000000000144;
      goto LAB_0379194c;
    }
    goto LAB_03793c9c;
  }
  if (*(uint *)(lVar43 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
  uVar21 = *(uint *)(lVar43 + (long)(int)uVar20 * 0x10 + 0x24);
  if (uVar21 == 0) goto LAB_03790fec;
  uVar30 = in_stack_00001688;
  if (5 < iStack00000000000001dc) {
    uVar30 = FUN_0278d4e8(&stack0x0000169c,0);
    uVar31 = FUN_0276793c(&stack0x0000160c,0);
    uVar30 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar30,
                          *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar31,0);
    if (*(int *)(*plVar56 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*plVar56);
    }
    FUN_0367ae18(uVar30,0);
    uVar30 = CONCAT44(3,*puVar1);
  }
  in_stack_00001688 = uVar30;
  if (uVar21 == 0x1a) goto LAB_0378d260;
  if ((uVar21 == 0x3c) && (*(char *)(unaff_x26 + 0xb5) != '\0')) {
    unaff_x24[0] = '\x01';
    unaff_x24[1] = '\x01';
    uVar32 = FUN_037974c0();
    if (((uVar32 & 1) != 0) && (uVar20 = in_stack_000015dc, *unaff_x24 == '\x01'))
    goto LAB_0378d260;
  }
  else {
    lVar43 = *plVar2;
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
    lVar43 = lVar43 + (long)(int)*puVar1 * 0x188;
    *unaff_x24 = *(char *)(lVar43 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar43 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar43 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
  }
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar24 = *(uint *)(unaff_x19 + 0x324);
  if (*(uint *)(lVar43 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
  lVar58 = (long)(int)uVar24;
  uVar19 = *(undefined4 *)(unaff_x19 + 0x78);
  cVar54 = *(char *)(lVar43 + lVar58 * 0x188 + 100);
  unaff_x24[1] = '\0';
  if ((uint)uVar30 == uVar24) {
    uVar21 = (uint)((ulong)uVar30 >> 0x20);
    bVar15 = true;
    *unaff_x24 = '\x01';
    if (uVar21 == 0x2026) {
      *(undefined8 *)(lVar43 + lVar58 * 0x188 + 0x30) = *(undefined8 *)(unaff_x19 + 0x1a00);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar43 = *plVar2;
      if (lVar43 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
      lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188;
      *(undefined1 *)(lVar43 + 0x28) = 1;
      *(undefined8 *)(lVar43 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar43 = *plVar2;
      if (lVar43 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
      *(undefined8 *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188 + 0x58) =
           *(undefined8 *)(unaff_x19 + 0x1a10);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar43 = *plVar2;
      if (lVar43 == 0) goto LAB_03793c9c;
      uVar24 = *puVar1;
      if (*(uint *)(lVar43 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
      bVar15 = true;
      *(undefined4 *)(lVar43 + (long)(int)uVar24 * 0x188 + 0x60) =
           *(undefined4 *)(unaff_x19 + 0x1a18);
      *(undefined1 *)
       (*(long *)(*(long *)
                   Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                 0xb8) + 8) = 1;
      uVar30 = CONCAT44(3,uVar24 + 1);
    }
    else if (uVar21 == 3) {
      if ((*in_stack_000001c8 == 0) || (lVar33 = FUN_03779b3c(*in_stack_000001c8,0), lVar33 == 0))
      goto LAB_03793c9c;
      FUN_0219b634(lVar33,&stack0x00000978,&stack0x000016a0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                  );
      if (*(uint *)(lVar43 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
      *(ulong *)(lVar43 + lVar58 * 0x188 + 0x30) = uVar45;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      bVar15 = true;
      *(undefined1 *)
       (*(long *)(*(long *)
                   Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                 0xb8) + 8) = 1;
      uVar24 = *puVar1;
    }
  }
  else {
    bVar15 = false;
  }
  in_stack_00001688 = uVar30;
  if (((int)uVar24 < *(int *)(unaff_x26 + 0xe4)) && (uVar21 != 3)) {
    lVar43 = *plVar2;
    if (lVar43 != 0) {
      if (uVar24 < *(uint *)(lVar43 + 0x18)) {
        lVar43 = lVar43 + (long)(int)uVar24 * 0x188;
        *(undefined1 *)(lVar43 + 0x1a0) = 0;
        *(undefined2 *)(lVar43 + 0x20) = 0x200b;
        *(undefined4 *)(lVar43 + 0x6c) = 0;
        *puVar1 = uVar24 + 1;
        goto LAB_0378d260;
      }
      goto thunk_FUN_01ab6c44;
    }
    goto LAB_03793c9c;
  }
  cVar6 = *unaff_x24;
  if (cVar6 == '\x01') {
    uVar24 = *(uint *)(unaff_x19 + 0x124);
    if ((uVar24 >> 4 & 1) == 0) {
      if ((uVar24 >> 3 & 1) == 0) {
        fStack000000000000017c = 1.0;
        if ((uVar24 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar32 = FUN_026b812c(uVar21,0);
          if ((uVar32 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar21 = FUN_026b8410(uVar21,0);
            uVar21 = uVar21 & 0xffff;
            fStack000000000000017c = fVar84;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar32 = FUN_026b8070(uVar21,0);
        fStack000000000000017c = 1.0;
        if ((uVar32 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b8594(uVar21,0);
          goto LAB_0378d3d0;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar32 = FUN_026b812c(uVar21,0);
      fStack000000000000017c = 1.0;
      if ((uVar32 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b8410(uVar21,0);
LAB_0378d3d0:
        fStack000000000000017c = 1.0;
        uVar21 = uVar21 & 0xffff;
      }
    }
    cVar6 = *unaff_x24;
  }
  else {
    fStack000000000000017c = 1.0;
  }
  if (cVar6 == '\x01') {
    lVar43 = *plVar2;
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
    *plVar57 = *(long *)(lVar43 + (long)(int)*puVar1 * 0x188 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar57);
    if (*plVar57 == 0) goto LAB_0378d260;
    lVar43 = *plVar2;
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
    *in_stack_000001c8 = *(long *)(lVar43 + (long)(int)*puVar1 * 0x188 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
    lVar43 = *plVar2;
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
    *in_stack_00000190 = *(long *)(lVar43 + (long)(int)*puVar1 * 0x188 + 0x58);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar43 = *plVar2;
    if (lVar43 == 0) goto LAB_03793c9c;
    uVar25 = *puVar1;
    uVar24 = *(uint *)(lVar43 + 0x18);
    if (uVar24 <= uVar25) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar43 + (long)(int)uVar25 * 0x188 + 0x60);
    if (bVar15) {
      lVar58 = *(long *)(unaff_x19 + 0x20);
      if (lVar58 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar58 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
      if ((*(int *)(lVar58 + (long)(int)uVar20 * 0x10 + 0x24) != 10) ||
         (uVar25 == *(uint *)(unaff_x19 + 0x328))) goto LAB_0378d570;
      if (uVar24 <= uVar25 - 1) goto thunk_FUN_01ab6c44;
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar60 = *(float *)(lVar43 + (long)(int)(uVar25 - 1) * 0x188 + 0x68);
      iVar22 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
      lVar43 = *in_stack_000001c8;
    }
    else {
LAB_0378d570:
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar60 = *(float *)(unaff_x19 + 0xf4);
      iVar22 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
      lVar43 = *(long *)(unaff_x19 + 0x68);
    }
    if (lVar43 == 0) goto LAB_03793c9c;
    fVar71 = (float)FUN_03776960(lVar43 + 0xb0,0);
    fVar66 = fVar78;
    if (*(char *)(unaff_x26 + 0xbd) != '\0') {
      fVar66 = 1.0;
    }
    fStack0000000000000170 = 0.0;
    fVar68 = 0.0;
    if (!(bool)(bVar15 & uVar21 == 0x2026)) {
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar68 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fStack0000000000000170 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
    }
    lVar43 = *(long *)(unaff_x19 + 0x1588);
    if ((lVar43 == 0) || (*(long *)(lVar43 + 0x20) == 0)) goto LAB_03793c9c;
    fVar92 = *(float *)(unaff_x19 + 0xf0);
    fVar67 = *(float *)(lVar43 + 0x2c);
    fVar61 = (float)FUN_03776ea8(*(long *)(lVar43 + 0x20),0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar69 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar94 = *(float *)(unaff_x19 + 0xf0);
    fVar70 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
    lVar43 = *plVar2;
    if (lVar43 == 0) goto LAB_03793c9c;
    uVar24 = *(uint *)(unaff_x19 + 0x324);
    if (*(uint *)(lVar43 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
    lVar58 = lVar43 + (long)(int)uVar24 * 0x188;
    fVar66 = ((fStack000000000000017c * fVar60) / (float)iVar22) * fVar71 * fVar66;
    fVar61 = fVar66 * fVar92 * fVar67 * fVar61;
    *(undefined1 *)(lVar58 + 0x28) = 1;
    *(float *)(lVar58 + 0x16c) = fVar61;
    fVar60 = *(float *)(unaff_x19 + 0xd8);
    fVar70 = fVar66 * fVar69 * fVar94 * fVar70;
LAB_0378db90:
    fVar66 = fVar61;
    if (uVar21 == 3 || uVar21 == 0xad) {
      fVar66 = 0.0;
    }
  }
  else {
    if (cVar6 == '\x02') {
      lVar43 = *plVar2;
      if (lVar43 != 0) {
        if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
        plVar56 = *(long **)(lVar43 + (long)(int)*puVar1 * 0x188 + 0x30);
        if (plVar56 != (long *)0x0) {
          bVar17 = *(byte *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__
                            + 0x130);
          if ((*(byte *)(*plVar56 + 0x130) < bVar17) ||
             (*(long *)(*(long *)(*plVar56 + 200) + (ulong)bVar17 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar56);
          }
          plVar34 = (long *)FUN_03783144(plVar56,0);
          if (plVar34 == (long *)0x0) {
            plVar34 = (long *)0x0;
            *unaff_x29 = 0;
          }
          else {
            lVar43 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
            bVar17 = *(byte *)(lVar43 + 0x130);
            if (*(byte *)(*plVar34 + 0x130) < bVar17) {
              plVar49 = (long *)0x0;
            }
            else {
              plVar49 = plVar34;
              if (*(long *)(*(long *)(*plVar34 + 200) + (ulong)bVar17 * 8 + -8) != lVar43) {
                plVar49 = (long *)0x0;
              }
            }
            *unaff_x29 = (long)plVar49;
            if (*(byte *)(*plVar34 + 0x130) < bVar17) {
              plVar34 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar34 + 200) + (ulong)bVar17 * 8 + -8) != lVar43) {
              plVar34 = (long *)0x0;
            }
          }
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29,plVar34);
          iVar22 = FUN_0377acf0(plVar56,0);
          *(int *)(unaff_x19 + 0x157c) = iVar22;
          if (uVar21 == 0x3c) {
            uVar21 = iVar22 + 0xe000;
          }
          else {
            uVar23 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            *(undefined4 *)(unaff_x19 + 0x1580) = uVar23;
          }
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            fVar60 = *(float *)(unaff_x19 + 0xf4);
            FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
            memcpy(&stack0x00001610,&stack0x000016a0,0x60);
            iVar22 = FUN_03776950(&stack0x00001610,0);
            if (*in_stack_000001c8 != 0) {
              FUN_03779650(&stack0x000016a0,*in_stack_000001c8,0);
              memcpy(&stack0x00001610,&stack0x000016a0,0x60);
              fVar66 = (float)FUN_03776960(&stack0x00001610,0);
              fVar61 = fVar78;
              if (*(char *)(unaff_x26 + 0xbd) != '\0') {
                fVar61 = 1.0;
              }
              if (*unaff_x29 == 0) goto LAB_03793c9c;
              fVar61 = (fVar60 / (float)iVar22) * fVar66 * fVar61;
              iVar22 = FUN_03776950(*unaff_x29 + 0x48,0);
              fVar60 = *(float *)(unaff_x19 + 0xf4);
              if (iVar22 < 1) {
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                iVar22 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar66 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
                fStack0000000000000170 = fVar78;
                if (*(char *)(unaff_x26 + 0xbd) != '\0') {
                  fStack0000000000000170 = 1.0;
                }
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar71 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                if (plVar56[4] == 0) goto LAB_03793c9c;
                FUN_03776e6c(&stack0x000016a0,plVar56[4],0);
                fVar92 = (float)FUN_03776c9c(&stack0x000015c0,0);
                if (plVar56[4] == 0) goto LAB_03793c9c;
                fVar67 = *(float *)((long)plVar56 + 0x2c);
                fVar69 = (float)FUN_03776ea8(plVar56[4],0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar68 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar94 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar72 = *(float *)(unaff_x19 + 0xf0);
                fVar70 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
                if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
                fVar70 = fVar61 * fVar94 * fVar72 * fVar70;
                fStack0000000000000170 = (fVar60 / (float)iVar22) * fVar66 * fStack0000000000000170;
                fVar61 = fStack0000000000000170 * (fVar71 / fVar92) * fVar67 * fVar69;
                fStack0000000000000170 = fStack0000000000000170 / fVar61;
                fVar68 = fStack0000000000000170 * fVar68;
                fVar60 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                fStack0000000000000170 = fStack0000000000000170 * fVar60;
              }
              else {
                if (*unaff_x29 == 0) goto LAB_03793c9c;
                iVar22 = FUN_03776950(*unaff_x29 + 0x48,0);
                if (*unaff_x29 == 0) goto LAB_03793c9c;
                fVar66 = (float)FUN_03776960(*unaff_x29 + 0x48,0);
                if (plVar56[4] == 0) goto LAB_03793c9c;
                fVar92 = *(float *)((long)plVar56 + 0x2c);
                fVar71 = fVar78;
                if (*(char *)(unaff_x26 + 0xbd) != '\0') {
                  fVar71 = 1.0;
                }
                fVar67 = (float)FUN_03776ea8(plVar56[4],0);
                if (*unaff_x29 == 0) goto LAB_03793c9c;
                fVar68 = (float)FUN_03776980(*unaff_x29 + 0x48,0);
                if (*unaff_x29 == 0) goto LAB_03793c9c;
                fVar69 = (float)FUN_037769b0(*unaff_x29 + 0x48,0);
                if (*unaff_x29 == 0) goto LAB_03793c9c;
                fVar94 = *(float *)(unaff_x19 + 0xf0);
                fVar70 = (float)FUN_03776960(*unaff_x29 + 0x48,0);
                if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
                fVar70 = fVar61 * fVar69 * fVar94 * fVar70;
                fVar61 = (fVar60 / (float)iVar22) * fVar66 * fVar71 * fVar92 * fVar67;
                fStack0000000000000170 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
              }
              *plVar57 = (long)plVar56;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar57,plVar56);
              lVar43 = *plVar2;
              if (lVar43 != 0) {
                if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
                lVar43 = lVar43 + (long)(int)*puVar1 * 0x188;
                *(undefined1 *)(lVar43 + 0x28) = 2;
                *(float *)(lVar43 + 0x16c) = fVar61;
                *(long *)(lVar43 + 0x48) = *unaff_x29;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar43 = *plVar2;
                if (lVar43 != 0) {
                  if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
                  *(long *)(lVar43 + (long)(int)*puVar1 * 0x188 + 0x40) = *in_stack_000001c8;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar43 = *plVar2;
                  if (lVar43 != 0) {
                    uVar24 = *puVar1;
                    if (uVar24 < *(uint *)(lVar43 + 0x18)) {
                      *(undefined4 *)(lVar43 + (long)(int)uVar24 * 0x188 + 0x60) =
                           *(undefined4 *)(unaff_x19 + 0x78);
                      *(undefined4 *)(unaff_x19 + 0x78) = uVar19;
                      fVar60 = 0.0;
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
    lVar43 = *plVar2;
    fVar70 = 0.0;
    fVar66 = fVar61;
    if (uVar21 == 3 || uVar21 == 0xad) {
      fVar66 = 0.0;
    }
    if (lVar43 == 0) goto LAB_03793c9c;
    uVar24 = *puVar1;
    fVar68 = 0.0;
    fStack0000000000000170 = 0.0;
  }
  if (*(uint *)(lVar43 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
  lVar43 = lVar43 + (long)(int)uVar24 * 0x188;
  *(short *)(lVar43 + 0x20) = (short)uVar21;
  *(undefined4 *)(lVar43 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
  *(undefined4 *)(lVar43 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188 + 0x174) =
       *(undefined4 *)(unaff_x19 + 0x1b0);
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188 + 0x17c) =
       *(undefined4 *)(unaff_x19 + 0x1b4);
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar31 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar45 = *(ulong *)(unaff_x19 + 0x38);
  if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188;
  *(undefined4 *)(lVar43 + 0x198) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined8 *)(lVar43 + 400) = uVar31;
  *(ulong *)(lVar43 + 0x188) = uVar45;
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  lVar43 = lVar43 + (long)(int)*puVar1 * 0x188;
  lVar58 = *(long *)(lVar43 + 0x38);
  *(undefined4 *)(lVar43 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
  if ((lVar58 == 0) && ((*plVar57 == 0 || (lVar58 = *(long *)(*plVar57 + 0x20), lVar58 == 0))))
  goto LAB_03793c9c;
  FUN_03776e6c(&stack0x000016a0,lVar58,0);
  if (uVar21 >> 0x10 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar24 = FUN_026b63d8(uVar21,0);
    uVar24 = uVar24 & 1;
  }
  else {
    uVar24 = 0;
  }
  uVar19 = 0;
  fVar71 = *(float *)(unaff_x26 + 0xc0);
  if (*(char *)(unaff_x26 + 0xb4) != '\0') {
    if (*plVar57 == 0) goto LAB_03793c9c;
    uVar25 = *puVar1;
    uVar4 = *(uint *)(*plVar57 + 0x28);
    if ((int)uVar25 < (int)uVar28) {
      lVar43 = *plVar2;
      if (lVar43 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar43 + 0x18) <= uVar25 + 1) goto thunk_FUN_01ab6c44;
      lVar43 = *(long *)(lVar43 + (long)(int)(uVar25 + 1) * 0x188 + 0x30);
      if ((((lVar43 == 0) || (*in_stack_000001c8 == 0)) ||
          (lVar58 = *(long *)(*in_stack_000001c8 + 0x170), lVar58 == 0)) ||
         (lVar58 = *(long *)(lVar58 + 0x40), lVar58 == 0)) goto LAB_03793c9c;
      uVar45 = CONCAT44((int)(uVar45 >> 0x20),uVar4 | *(int *)(lVar43 + 0x28) << 0x10);
      uVar32 = FUN_0219f8b8(lVar58,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar32 & 1) != 0) {
        FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
        uVar19 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                           (&stack0x00001570,0);
        uVar32 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar32 & 0x100) != 0) {
          fVar71 = 0.0;
        }
      }
      uVar25 = *puVar1;
    }
    if (0 < (int)uVar25) {
      lVar43 = *plVar2;
      if (lVar43 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar43 + 0x18) <= uVar25 - 1) goto thunk_FUN_01ab6c44;
      lVar43 = *(long *)(lVar43 + (ulong)(uVar25 - 1) * 0x188 + 0x30);
      if (((lVar43 == 0) || (*in_stack_000001c8 == 0)) ||
         ((lVar58 = *(long *)(*in_stack_000001c8 + 0x170), lVar58 == 0 ||
          (lVar58 = *(long *)(lVar58 + 0x40), lVar58 == 0)))) goto LAB_03793c9c;
      uVar45 = CONCAT44((int)(uVar45 >> 0x20),*(uint *)(lVar43 + 0x28) | uVar4 << 0x10);
      uVar32 = FUN_0219f8b8(lVar58,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar32 & 1) != 0) {
        FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
        UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent(&stack0x00001570,0);
        FUN_03778e8c(uVar19,0);
        uVar32 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar32 & 0x100) != 0) {
          fVar71 = 0.0;
        }
      }
    }
  }
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar25 = *puVar1;
  uVar19 = FUN_03778e7c(&stack0x000015e0,0);
  if (*(uint *)(lVar43 + 0x18) <= uVar25) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar43 + (long)(int)uVar25 * 0x188 + 0x160) = uVar19;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  uVar32 = FUN_037a5c04(uVar21,0);
  uVar25 = *puVar1;
  if ((uVar32 & 1) == 0) {
    if ((uVar32 & 1) == 0 && 0 < (int)uVar25) {
      uVar4 = *(uint *)(unaff_x19 + 0x19c4);
      if ((uVar4 == 0x80000000) || (uVar4 != uVar25 - 1)) {
        do {
          uVar4 = uVar25 - 1;
          uVar19 = (undefined4)(uVar45 >> 0x20);
          if (((int)uVar25 < 1) || (uVar4 == *(uint *)(unaff_x19 + 0x19c4))) {
            uVar25 = *(uint *)(unaff_x19 + 0x19c4);
            if (uVar25 == 0x80000000) goto LAB_0378dfc4;
            lVar43 = *plVar2;
            if (lVar43 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar43 + 0x18) <= uVar25) goto thunk_FUN_01ab6c44;
            lVar43 = *(long *)(lVar43 + (long)(int)uVar25 * 0x188 + 0x30);
            if ((lVar43 == 0) || (lVar43 = FUN_03787a68(lVar43,0), lVar43 == 0)) goto LAB_03793c9c;
            uVar25 = FUN_03776e5c(lVar43,0);
            if (*plVar57 == 0) goto LAB_03793c9c;
            iVar22 = FUN_0377acf0(*plVar57,0);
            if (((*in_stack_000001c8 == 0) ||
                (lVar43 = FUN_03779cb4(*in_stack_000001c8,0), lVar43 == 0)) ||
               (*(long *)(lVar43 + 0x48) == 0)) goto LAB_03793c9c;
            uVar45 = CONCAT44(uVar19,uVar25 | iVar22 << 0x10);
            uVar35 = FUN_0219f8b8(*(long *)(lVar43 + 0x48),&stack0x000016a0,&stack0x00001518,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__)
            ;
            if ((uVar35 & 1) == 0) goto LAB_0378dfc4;
            lVar43 = *plVar2;
            if (lVar43 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
            fVar71 = *(float *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * 0x188 + 0x148);
            fVar69 = *(float *)(unaff_x19 + 0x2f4);
            FUN_037793b0(&stack0x00001518,0);
            fVar92 = (float)FUN_03779388(&stack0x00001550,0);
            FUN_037793c0(&stack0x00001518,0);
            fVar67 = (float)FUN_03779398(&stack0x00001548,0);
            FUN_03778e64(((fVar71 - fVar69) / fVar66 + fVar92) - fVar67,&stack0x000015e0,0);
            FUN_037793b0(&stack0x00001518,0);
            fVar71 = (float)FUN_03779390(&stack0x00001550,0);
            puVar36 = &stack0x00001518;
            goto LAB_0378f5a8;
          }
          lVar43 = *plVar2;
          if (lVar43 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar43 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
          lVar43 = *(long *)(lVar43 + (ulong)uVar4 * 0x188 + 0x30);
          if ((lVar43 == 0) || (lVar43 = FUN_03787a68(lVar43,0), lVar43 == 0)) goto LAB_03793c9c;
          uVar25 = FUN_03776e5c(lVar43,0);
          if (*plVar57 == 0) goto LAB_03793c9c;
          iVar22 = FUN_0377acf0(*plVar57,0);
          if (((*in_stack_000001c8 == 0) ||
              (lVar43 = FUN_03779cb4(*in_stack_000001c8,0), lVar43 == 0)) ||
             (*(long *)(lVar43 + 0x50) == 0)) goto LAB_03793c9c;
          uVar45 = CONCAT44(uVar19,uVar25 | iVar22 << 0x10);
          uVar35 = FUN_0219f8b8(*(long *)(lVar43 + 0x50),&stack0x000016a0,&stack0x00001530,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__);
          uVar25 = uVar4;
        } while ((uVar35 & 1) == 0);
        lVar43 = *plVar2;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        fVar69 = *(float *)(unaff_x19 + 0x2e0);
        fVar94 = *(float *)(unaff_x19 + 0x180);
        lVar43 = lVar43 + (ulong)uVar4 * 0x188;
        fVar71 = *(float *)(unaff_x19 + 0x2f4);
        fVar72 = *(float *)(lVar43 + 0x148);
        fVar73 = *(float *)(lVar43 + 0x150);
        FUN_037793d0(&stack0x00001530,0);
        fVar92 = (float)FUN_03779388(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar67 = (float)FUN_03779398(&stack0x00001548,0);
        FUN_03778e64(((fVar72 - fVar71) / fVar66 + fVar92) - fVar67,&stack0x000015e0,0);
        FUN_037793d0(&stack0x00001530,0);
        fVar71 = (float)FUN_03779390(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar92 = (float)FUN_037793a0(&stack0x00001548,0);
        FUN_03778e74(((fVar73 - ((fVar70 - fVar69) + fVar94)) / fVar66 + fVar71) - fVar92,
                     &stack0x000015e0,0);
        fVar71 = 0.0;
      }
      else {
        lVar43 = *plVar2;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        lVar43 = *(long *)(lVar43 + (long)(int)uVar4 * 0x188 + 0x30);
        if ((lVar43 == 0) || (lVar43 = FUN_03787a68(lVar43,0), lVar43 == 0)) goto LAB_03793c9c;
        uVar25 = FUN_03776e5c(lVar43,0);
        if (*plVar57 == 0) goto LAB_03793c9c;
        iVar22 = FUN_0377acf0(*plVar57,0);
        if (((*in_stack_000001c8 == 0) || (lVar43 = FUN_03779cb4(*in_stack_000001c8,0), lVar43 == 0)
            ) || (*(long *)(lVar43 + 0x48) == 0)) goto LAB_03793c9c;
        uVar45 = CONCAT44((int)(uVar45 >> 0x20),uVar25 | iVar22 << 0x10);
        uVar35 = FUN_0219f8b8(*(long *)(lVar43 + 0x48),&stack0x000016a0,&stack0x00001558,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
        if ((uVar35 & 1) != 0) {
          lVar43 = *plVar2;
          if (lVar43 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
          fVar71 = *(float *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * 0x188 + 0x148);
          fVar69 = *(float *)(unaff_x19 + 0x2f4);
          FUN_037793b0(&stack0x00001558,0);
          fVar92 = (float)FUN_03779388(&stack0x00001550,0);
          FUN_037793c0(&stack0x00001558,0);
          fVar67 = (float)FUN_03779398(&stack0x00001548,0);
          FUN_03778e64(((fVar71 - fVar69) / fVar66 + fVar92) - fVar67,&stack0x000015e0,0);
          FUN_037793b0(&stack0x00001558,0);
          fVar71 = (float)FUN_03779390(&stack0x00001550,0);
          puVar36 = &stack0x00001558;
LAB_0378f5a8:
          FUN_037793c0(puVar36,0);
          fVar92 = (float)FUN_037793a0(&stack0x00001548,0);
          FUN_03778e74(fVar71 - fVar92,&stack0x000015e0,0);
          fVar71 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x19c4) = uVar25;
  }
LAB_0378dfc4:
  fVar92 = (float)FUN_03778e6c(&stack0x000015e0,0);
  fVar67 = (float)FUN_03778e6c(&stack0x000015e0,0);
  if (*(char *)(unaff_x26 + 0xb6) != '\0') {
    fVar94 = *(float *)(unaff_x19 + 0x2f4);
    fVar69 = (float)FUN_03776cb4(&stack0x000015f0,0);
    fVar94 = fVar94 - fVar66 * fVar69 * (1.0 - *(float *)(unaff_x19 + 0x1594));
    *(float *)(unaff_x19 + 0x2f4) = fVar94;
    if ((uVar24 != 0) || (uVar21 == 0x200b)) {
      *(float *)(unaff_x19 + 0x2f4) = fVar94 - fVar65 * *(float *)(unaff_x26 + 0xc4);
    }
  }
  fVar69 = *(float *)(unaff_x19 + 0x2f0);
  if (fVar69 == 0.0) {
    fVar69 = 0.0;
  }
  else {
    fVar94 = (float)FUN_03776c94(&stack0x000015f0,0);
    fVar72 = (float)FUN_03776ca4(&stack0x000015f0,0);
    fVar69 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (fVar69 * 0.5 - fVar66 * (fVar94 * 0.5 + fVar72));
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + fVar69;
  }
  uVar25 = 0;
  if ((cVar54 == '\0') && (*unaff_x24 == '\x01')) {
    uVar25 = *(uint *)(unaff_x19 + 0x124) & 1;
  }
  lVar43 = *in_stack_00000190;
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar35 = FUN_036cee6c(lVar43,0,0);
  puVar10 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
  if (uVar25 == 0) {
    fVar94 = 0.0;
    if ((uVar35 & 1) != 0) {
      lVar43 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar43 == 0) goto LAB_03793c9c;
      uVar35 = FUN_03699d3c(lVar43,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x6c),0);
      if ((uVar35 & 1) != 0) {
        lVar43 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar43 == 0) goto LAB_03793c9c;
        uVar35 = FUN_03699d3c(lVar43,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe4),0);
        if ((uVar35 & 1) != 0) {
          lVar43 = *in_stack_00000190;
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar43 != 0) {
            fVar72 = (float)FUN_0369e060(lVar43,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar10 + 0xb8) + 0x6c),0);
            plVar56 = (long *)PTR_DAT_03cbe438;
            if ((*in_stack_000001c8 != 0) && (*in_stack_00000190 != 0)) {
              fVar74 = *(float *)(*in_stack_000001c8 + 0x188);
              fVar73 = (float)FUN_0369e060(*in_stack_00000190,
                                           *(undefined4 *)
                                            (*(long *)(*(long *)puVar10 + 0xb8) + 0xe4),0);
              fVar73 = fVar73 * fVar72 * fVar74 * 0.25;
              if (fVar72 < fVar60 + fVar73) {
                fVar60 = fVar72 - fVar73;
              }
              goto LAB_0378e344;
            }
          }
          goto LAB_03793c9c;
        }
      }
    }
    fVar73 = 0.0;
    plVar56 = (long *)PTR_DAT_03cbe438;
  }
  else {
    fVar73 = 0.0;
    plVar56 = (long *)PTR_DAT_03cbe438;
    if ((uVar35 & 1) != 0) {
      lVar43 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar43 == 0) goto LAB_03793c9c;
      uVar35 = FUN_03699d3c(lVar43,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x6c),0);
      plVar56 = (long *)PTR_DAT_03cbe438;
      if ((uVar35 & 1) != 0) {
        lVar43 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar43 == 0) goto LAB_03793c9c;
        fVar94 = (float)FUN_0369e060(lVar43,*(undefined4 *)
                                             (*(long *)(*(long *)puVar10 + 0xb8) + 0x6c),0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar72 = (float)FUN_03779d1c(*in_stack_000001c8,0);
        plVar56 = (long *)PTR_DAT_03cbe438;
        if (*in_stack_00000190 == 0) goto LAB_03793c9c;
        fVar73 = (float)FUN_0369e060(*in_stack_00000190,
                                     *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe4),0);
        fVar73 = fVar94 * fVar72 * 0.25 * fVar73;
        if (fVar94 < fVar60 + fVar73) {
          fVar60 = fVar94 - fVar73;
        }
      }
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar94 = (float)FUN_03779d2c(*in_stack_000001c8,0);
  }
LAB_0378e344:
  fVar88 = *(float *)(unaff_x19 + 0x2f4);
  fVar72 = (float)FUN_03776ca4(&stack0x000015f0,0);
  fVar91 = *(float *)(unaff_x19 + 0x19a8);
  fVar74 = (float)FUN_03778e5c(&stack0x000015e0,0);
  fVar88 = fVar88 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    fVar66 * (fVar74 + ((fVar72 * fVar91 - fVar60) - fVar73));
  fVar72 = (float)FUN_03776cac(&stack0x000015f0,0);
  fVar74 = (float)FUN_03778e6c(&stack0x000015e0,0);
  fStack00000000000001bc =
       *(float *)(unaff_x19 + 0x180) +
       ((fVar70 + fVar66 * (fVar60 + fVar72 + fVar74)) - *(float *)(unaff_x19 + 0x2e0));
  fVar72 = (float)FUN_03776c9c(&stack0x000015f0,0);
  fVar91 = fStack00000000000001bc - fVar66 * (fVar60 + fVar60 + fVar72);
  fVar72 = (float)FUN_03776c94(&stack0x000015f0,0);
  fVar82 = fVar88 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    fVar66 * (fVar73 + fVar73 +
                             fVar60 + fVar60 + fVar72 * *(float *)(unaff_x19 + 0x19a8));
  fVar72 = fVar88;
  fVar74 = fVar82;
  if (((cVar54 == '\0') && (*unaff_x24 == '\x01')) && ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)
     ) {
    if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
    iVar22 = *(int *)(unaff_x19 + 0x19a4);
    fVar72 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar74 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar97 = *(float *)(unaff_x19 + 0xf0);
    fVar76 = *(float *)(unaff_x19 + 0x180);
    fVar89 = (float)iVar22 * fVar83;
    fVar75 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
    fVar75 = fVar75 * fVar97 * (fVar72 - (fVar74 + fVar76)) * 0.5;
    fVar72 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar74 = fVar89 * fVar66 * ((fVar73 + fVar60 + fVar72) - fVar75);
    fVar97 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar76 = (float)FUN_03776c9c(&stack0x000015f0,0);
    fStack00000000000001bc = fStack00000000000001bc + 0.0;
    fVar72 = fVar88 + fVar74;
    fVar91 = fVar91 + 0.0;
    fVar74 = fVar82 + fVar74;
    fVar89 = fVar89 * fVar66 * ((((fVar97 - fVar76) - fVar60) - fVar73) - fVar75);
    fVar88 = fVar88 + fVar89;
    fVar82 = fVar82 + fVar89;
  }
  uVar31 = *(undefined8 *)(unaff_x24 + 0x43c);
  uVar90 = *(undefined8 *)(unaff_x24 + 0x444);
  if (DAT_0411f169 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbdeb8);
    DAT_0411f169 = '\x01';
  }
  uVar77 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
  uVar80 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
  fVar73 = 0.0;
  if (DAT_00d38b04 <
      (float)((ulong)uVar90 >> 0x20) * (float)((ulong)uVar80 >> 0x20) +
      (float)uVar90 * (float)uVar80 +
      (float)uVar31 * (float)uVar77 +
      (float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar77 >> 0x20)) {
    fVar87 = 0.0;
    fVar89 = 0.0;
    fVar76 = 0.0;
    fVar75 = fStack00000000000001bc;
    fVar97 = fVar91;
  }
  else {
    FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                 *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                 *(undefined4 *)(unaff_x19 + 0x19c0),0);
    fVar93 = (fVar74 + fVar88) * 0.5;
    fVar95 = (fVar91 + fStack00000000000001bc) * 0.5;
    fStack00000000000001bc = fStack00000000000001bc - fVar95;
    fVar76 = 0.0;
    fVar75 = fStack00000000000001bc;
    fVar72 = (float)FUN_036bdd2c(fVar72 - fVar93,&stack0x000014d0,0);
    fVar72 = fVar93 + fVar72;
    fVar76 = fVar76 + 0.0;
    fVar97 = fVar91 - fVar95;
    fVar89 = 0.0;
    fVar91 = fVar97;
    fVar88 = (float)FUN_036bdd2c(fVar88 - fVar93,&stack0x000014d0,0);
    fVar88 = fVar93 + fVar88;
    fVar91 = fVar95 + fVar91;
    fVar89 = fVar89 + 0.0;
    fVar87 = 0.0;
    fVar74 = (float)FUN_036bdd2c(fVar74 - fVar93,&stack0x000014d0,0);
    fVar74 = fVar93 + fVar74;
    fStack00000000000001bc = fVar95 + fStack00000000000001bc;
    fVar87 = fVar87 + 0.0;
    fVar73 = 0.0;
    fVar82 = (float)FUN_036bdd2c(fVar82 - fVar93,&stack0x000014d0,0);
    fVar82 = fVar93 + fVar82;
    fVar73 = fVar73 + 0.0;
    fVar75 = fVar95 + fVar75;
    fVar97 = fVar95 + fVar97;
  }
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  lVar43 = lVar43 + (long)(int)*puVar1 * 0x188;
  *(float *)(lVar43 + 0x124) = fVar88;
  *(float *)(lVar43 + 0x128) = fVar91;
  *(float *)(lVar43 + 300) = fVar89;
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  lVar43 = lVar43 + (long)(int)*puVar1 * 0x188;
  *(float *)(lVar43 + 0x118) = fVar72;
  *(float *)(lVar43 + 0x11c) = fVar75;
  *(float *)(lVar43 + 0x120) = fVar76;
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  lVar43 = lVar43 + (long)(int)*puVar1 * 0x188;
  *(float *)(lVar43 + 0x138) = fVar87;
  *(float *)(lVar43 + 0x130) = fVar74;
  *(float *)(lVar43 + 0x134) = fStack00000000000001bc;
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  lVar43 = lVar43 + (long)(int)*puVar1 * 0x188;
  *(float *)(lVar43 + 0x13c) = fVar82;
  *(float *)(lVar43 + 0x140) = fVar97;
  *(float *)(lVar43 + 0x144) = fVar73;
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar25 = *puVar1;
  fVar73 = *(float *)(unaff_x19 + 0x2f4);
  fVar72 = (float)FUN_03778e5c(&stack0x000015e0,0);
  if (*(uint *)(lVar43 + 0x18) <= uVar25) goto thunk_FUN_01ab6c44;
  *(float *)(lVar43 + (long)(int)uVar25 * 0x188 + 0x148) = fVar73 + fVar66 * fVar72;
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar25 = *puVar1;
  fVar82 = *(float *)(unaff_x19 + 0x2e0);
  fVar73 = *(float *)(unaff_x19 + 0x180);
  fVar72 = (float)FUN_03778e6c(&stack0x000015e0,0);
  if (*(uint *)(lVar43 + 0x18) <= uVar25) goto thunk_FUN_01ab6c44;
  *(float *)(lVar43 + (long)(int)uVar25 * 0x188 + 0x150) =
       (fVar70 - fVar82) + fVar73 + fVar66 * fVar72;
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar25 = *puVar1;
  lVar58 = (long)(int)uVar25;
  if (*(uint *)(lVar43 + 0x18) <= uVar25) goto thunk_FUN_01ab6c44;
  *(float *)(lVar43 + lVar58 * 0x188 + 0x168) = (fVar74 - fVar88) / (fVar75 - fVar91);
  fVar68 = fVar66 * (fVar68 + fVar92);
  if (*unaff_x24 == '\x01') {
    fVar68 = fVar68 / fStack000000000000017c;
    fVar92 = (fVar66 * (fStack0000000000000170 + fVar67)) / fStack000000000000017c;
  }
  else {
    fVar92 = fVar66 * (fStack0000000000000170 + fVar67);
  }
  uVar4 = *(uint *)(unaff_x19 + 0x328);
  fVar67 = *(float *)(unaff_x19 + 0x180);
  bVar12 = uVar25 == uVar4;
  bVar13 = uVar24 == 0;
  fVar68 = fVar67 + fVar68;
  if (bVar13 || bVar12) {
    fVar92 = fVar67 + fVar92;
    fVar70 = fVar68;
    fVar72 = fVar92;
    if (fVar67 != 0.0) {
      fVar70 = (fVar68 - fVar67) / *(float *)(unaff_x19 + 0xf0);
      fVar72 = (fVar92 - fVar67) / *(float *)(unaff_x19 + 0xf0);
      if (fVar70 <= fVar68) {
        fVar70 = fVar68;
      }
      if (fVar92 <= fVar72) {
        fVar72 = fVar92;
      }
    }
    lVar33 = lVar43 + lVar58 * 0x188;
    fVar67 = fVar70;
    if (fVar70 <= *(float *)(unaff_x19 + 0x338)) {
      fVar67 = *(float *)(unaff_x19 + 0x338);
    }
    fVar73 = fVar72;
    if (*(float *)(unaff_x19 + 0x33c) <= fVar72) {
      fVar73 = *(float *)(unaff_x19 + 0x33c);
    }
    *(float *)(unaff_x19 + 0x338) = fVar67;
    *(float *)(unaff_x19 + 0x33c) = fVar73;
    *(float *)(lVar33 + 0x158) = fVar70;
    *(float *)(lVar33 + 0x15c) = fVar72;
    fVar70 = *(float *)(unaff_x19 + 0x2e0);
    fVar72 = fVar68 - fVar70;
  }
  else {
    fVar67 = *(float *)(unaff_x19 + 0x338);
    lVar33 = lVar43 + lVar58 * 0x188;
    *(float *)(lVar33 + 0x158) = fVar67;
    fVar92 = *(float *)(unaff_x19 + 0x33c);
    *(float *)(lVar33 + 0x15c) = fVar92;
    fVar70 = *(float *)(unaff_x19 + 0x2e0);
    fVar72 = fVar67 - fVar70;
  }
  *(float *)(lVar33 + 0x14c) = fVar72;
  *(float *)(lVar43 + lVar58 * 0x188 + 0x154) = fVar92 - fVar70;
  *(float *)(unaff_x19 + 0x378) = fVar92 - fVar70;
  if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
    if (bVar13 || bVar12) {
      *(float *)(unaff_x19 + 0x374) = fVar67;
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
      fVar92 = *(float *)(unaff_x19 + 0x370);
      fVar67 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      fVar70 = *(float *)(unaff_x19 + 0x2e0);
      fStack000000000000017c = (fVar66 * fVar67) / fStack000000000000017c;
      if (fVar92 <= fStack000000000000017c) {
        fVar92 = fStack000000000000017c;
      }
      *(float *)(unaff_x19 + 0x370) = fVar92;
      if (fVar70 == 0.0) goto LAB_0378ee0c;
    }
  }
  else if ((bVar13 || bVar12) && fVar70 == 0.0) {
LAB_0378ee0c:
    fVar92 = *(float *)(unaff_x19 + 0x19c8);
    if (*(float *)(unaff_x19 + 0x19c8) <= fVar68) {
      fVar92 = fVar68;
    }
    *(float *)(unaff_x19 + 0x19c8) = fVar92;
  }
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar55 = *puVar1;
  if (*(uint *)(lVar43 + 0x18) <= uVar55) goto thunk_FUN_01ab6c44;
  lVar43 = lVar43 + (long)(int)uVar55 * 0x188;
  *(undefined1 *)(lVar43 + 0x1a0) = 0;
  uVar52 = *(uint *)(unaff_x19 + 0x158) & 0x18;
  if ((uVar21 == 9) ||
     ((((uVar24 == 0 && (uVar21 != 3)) && ((uVar21 != 0x200b && (uVar21 != 0xad)))) ||
      (((bool)(uVar21 == 0xad & (bVar16 ^ 1U)) || (*unaff_x24 == '\x02')))))) {
    *(undefined1 *)(lVar43 + 0x1a0) = 1;
    pfVar44 = (float *)(unaff_x19 + 0x358);
    pfVar47 = pfVar41;
    if (bVar15) {
      lVar43 = *(long *)(unaff_x25 + 0x48);
      if (lVar43 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      pfVar47 = (float *)(lVar43 + 100);
      pfVar44 = (float *)(lVar43 + 0x68);
    }
    fVar67 = *pfVar47;
    fVar92 = *pfVar44;
    fVar68 = *(float *)(unaff_x19 + 0x35c);
    fVar72 = *(float *)(unaff_x19 + 0x2f4);
    fStack0000000000000174 = (fVar96 - fVar67) - fVar92;
    bVar12 = true;
    if ((fVar68 <= fStack0000000000000174) && (bVar12 = false, !NAN(fVar68))) {
      bVar12 = fVar68 == -1.0;
    }
    if (!bVar12) {
      fStack0000000000000174 = fVar68;
    }
    fVar68 = 0.0;
    fVar73 = 0.0;
    if (*(char *)(unaff_x26 + 0xb6) == '\0') {
      fVar73 = (float)FUN_03776cb4(&stack0x000015f0,0);
      fVar70 = *(float *)(unaff_x19 + 0x2e0);
    }
    fVar74 = *(float *)(unaff_x19 + 0x1594);
    fVar91 = *(float *)(unaff_x19 + 0x33c);
    if (uVar21 != 0xad) {
      fVar61 = fVar66;
    }
    if ((0.0 < fVar70) && (fVar68 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar68 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    uVar55 = *puVar1;
    fVar68 = (*(float *)(unaff_x19 + 0x374) - (fVar91 - fVar70)) + fVar68;
    if (fVar68 <= fVar81) goto switchD_0378f0dc_caseD_2;
    if (*(int *)(unaff_x19 + 0x34c) == -1) {
      *(uint *)(unaff_x19 + 0x34c) = uVar55;
    }
    in_stack_00001688 = DAT_00d37868;
    if (*(char *)(unaff_x26 + 0xa8) != '\0') {
      fVar88 = *(float *)(unaff_x26 + 0xd0);
      if (((*(float *)(unaff_x19 + 0x15b0) <= fVar88) || (fVar70 <= 0.0)) ||
         (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
        fVar70 = *_fStack00000000000000d0;
        fVar68 = *(float *)(unaff_x26 + 0xac);
        if ((fVar70 <= fVar68) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
        goto LAB_0378f0b8;
        fVar65 = (fVar70 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
        if (fVar65 <= DAT_00d38b84) {
          fVar65 = DAT_00d38b84;
        }
        fVar78 = (fVar70 - fVar65) * 20.0 + 0.5;
        fVar65 = DAT_00d38e60;
        if (fVar78 != INFINITY) {
          fVar65 = (float)(int)fVar78 / 20.0;
        }
        if (fVar65 <= fVar68) {
          fVar65 = fVar68;
        }
        *(float *)(unaff_x19 + 0x1598) = fVar70;
        goto LAB_037910ac;
      }
      fVar65 = *(float *)(unaff_x19 + 0x15b0) +
               ((fVar86 - fVar68) / (float)*(int *)(unaff_x19 + 0x340)) / fVar64;
      if (fVar65 <= fVar88) {
        fVar65 = fVar88;
      }
LAB_03793b50:
      *(float *)(unaff_x19 + 0x15b0) = fVar65;
      goto LAB_0378c81c;
    }
LAB_0378f0b8:
    switch(*(undefined4 *)(unaff_x26 + 0x74)) {
    case 1:
      if (*(int *)(unaff_x19 + 0x340) < 1) goto switchD_0378f0dc_caseD_2;
      iVar22 = FUN_020aa428(lVar29,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                           );
      in_stack_00001688 = DAT_00d37868;
      if (iVar22 == 0) {
        uVar20 = 0xffffffff;
        puVar1[0] = 0;
        puVar1[1] = 0;
        fVar61 = fVar66;
      }
      else {
        FUN_020ab640(lVar29,&stack0x000016a0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
        memcpy(&stack0x00001138,&stack0x000016a0,0x398);
        iVar22 = FUN_03797154();
        uVar20 = iVar22 - 1;
        iVar22 = *(int *)(unaff_x19 + 0x324) + -1;
        *(int *)(unaff_x19 + 0x324) = iVar22;
        in_stack_00001688 = CONCAT44(0x2026,iVar22);
        iStack00000000000001dc = iStack00000000000001dc + 1;
        fVar61 = fVar66;
      }
      break;
    default:
switchD_0378f0dc_caseD_2:
      if ((uVar32 & 1) == 0) {
LAB_0378f1e0:
        if (uVar24 == 0) {
          if (uVar21 != 0xad) {
            if (*unaff_x24 == '\x02') {
              FUN_0379c8ac();
            }
            else if (*unaff_x24 == '\x01') {
              FUN_0379bd40(fVar60);
            }
            if (bVar11) {
              *(uint *)(unaff_x19 + 0x330) = *puVar1;
            }
            *(uint *)(unaff_x19 + 0x334) = *puVar1;
            *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
            lVar43 = *(long *)(unaff_x25 + 0x48);
            if (lVar43 != 0) {
              if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar43 + 0x18)) {
                lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                bVar11 = false;
                *(float *)(lVar43 + 100) = fVar67;
                *(float *)(lVar43 + 0x68) = fVar92;
                goto LAB_0378f884;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar43 = *plVar2;
          if (lVar43 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar43 + 0x18) <= uVar55) goto thunk_FUN_01ab6c44;
          *(undefined1 *)(lVar43 + (long)(int)uVar55 * 0x188 + 0x1a0) = 0;
        }
        else {
          lVar43 = *plVar2;
          if (lVar43 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar43 + 0x18) <= uVar55) goto thunk_FUN_01ab6c44;
          *(undefined1 *)(lVar43 + (long)(int)uVar55 * 0x188 + 0x1a0) = 0;
          *(uint *)(unaff_x19 + 0x334) = uVar55;
          lVar43 = *(long *)(unaff_x25 + 0x48);
          if (lVar43 == 0) goto LAB_03793c9c;
          uVar55 = *(uint *)(lVar43 + 0x18);
          if (uVar55 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar58 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          iVar22 = *(int *)(lVar58 + 0x2c) + 1;
          *(int *)(lVar58 + 0x2c) = iVar22;
          *(int *)(unaff_x19 + 0x348) = iVar22;
          if (uVar55 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(float *)(lVar43 + 100) = fVar67;
          *(float *)(lVar43 + 0x68) = fVar92;
          *(int *)(unaff_x25 + 0x18) = *(int *)(unaff_x25 + 0x18) + 1;
        }
        goto LAB_0378f884;
      }
      fVar68 = ABS(fVar72) + fVar73 * (1.0 - fVar74) * fVar61;
      fVar61 = 1.0;
      if (uVar52 != 0) {
        fVar61 = DAT_00d38acc;
      }
      if (fVar68 <= fVar61 * fStack0000000000000174) goto LAB_0378f1e0;
      if ((cVar38 == '\0') || (uVar55 == *(uint *)(unaff_x19 + 0x328))) {
        if ((*(char *)(unaff_x26 + 0xa8) == '\0') ||
           (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_0378f2f0:
          iVar22 = *(int *)(unaff_x26 + 0x74);
          if (iVar22 == 1) {
            iVar22 = FUN_020aa428(lVar29,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                 );
            in_stack_00001688 = DAT_00d37868;
            if (iVar22 == 0) {
              uVar20 = 0xffffffff;
              puVar1[0] = 0;
              puVar1[1] = 0;
              fVar61 = fVar66;
            }
            else {
              FUN_020ab640(lVar29,&stack0x000016a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
              memcpy(&stack0x00000a08,&stack0x000016a0,0x398);
              iVar22 = FUN_03797154();
              uVar20 = iVar22 - 1;
              iVar22 = *(int *)(unaff_x19 + 0x324) + -1;
              *(int *)(unaff_x19 + 0x324) = iVar22;
              iStack00000000000001dc = iStack00000000000001dc + 1;
              in_stack_00001688 = CONCAT44(0x2026,iVar22);
              fVar61 = fVar66;
            }
            break;
          }
          if (iVar22 == 6) {
            uVar20 = FUN_03797154();
            uVar55 = *(uint *)(unaff_x19 + 0x324);
          }
          else {
            if (iVar22 != 3) goto LAB_0378f1e0;
            uVar20 = FUN_03797154();
          }
          goto LAB_037909d0;
        }
        fVar70 = *(float *)(unaff_x26 + 0x108) / 100.0;
        if (fVar70 <= fVar74) {
          fVar70 = *(float *)(unaff_x26 + 0xac);
          fVar72 = *_fStack00000000000000d0;
          if (fVar72 <= fVar70) goto LAB_0378f2f0;
LAB_03793bbc:
          fVar65 = (fVar72 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
          if (fVar65 <= DAT_00d38b84) {
            fVar65 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x1598) = fVar72;
          fVar78 = (fVar72 - fVar65) * 20.0 + 0.5;
          fVar65 = DAT_00d38e60;
          if (fVar78 != INFINITY) {
            fVar65 = (float)(int)fVar78 / 20.0;
          }
          if (fVar65 <= fVar70) {
            fVar65 = fVar70;
          }
          goto LAB_037910ac;
        }
        fVar65 = fVar68 / (1.0 - fVar74);
        if (fVar74 <= 0.0) {
          fVar65 = fVar68;
        }
        fVar74 = fVar74 + (fVar68 - fVar61 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar65;
FUN_03793c4c:
        if (fVar70 <= fVar74) {
          fVar74 = fVar70;
        }
        *(float *)(unaff_x19 + 0x1594) = fVar74;
        goto LAB_0378c81c;
      }
      uVar20 = FUN_03797154();
      if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
        lVar43 = *plVar2;
        if (lVar43 == 0) goto LAB_03793c9c;
        uVar39 = *puVar1;
        if (*(uint *)(lVar43 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
        fVar72 = *(float *)(unaff_x19 + 0x2e0);
        fVar70 = 0.0;
        if ((0.0 < fVar72) && (fVar70 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar70 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        fVar70 = fVar65 * *(float *)(unaff_x26 + 200) +
                 *(float *)(lVar43 + (long)(int)uVar39 * 0x188 + 0x158) +
                 (fVar70 - *(float *)(unaff_x19 + 0x33c)) +
                 fVar64 * (fVar59 + *(float *)(unaff_x19 + 0x15b0));
      }
      else {
        fVar70 = *(float *)(unaff_x26 + 200);
        *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
        lVar43 = *plVar2;
        if (lVar43 == 0) goto LAB_03793c9c;
        fVar72 = *(float *)(unaff_x19 + 0x2e0);
        uVar39 = *(uint *)(unaff_x19 + 0x324);
        fVar70 = *(float *)(unaff_x19 + 0x2e4) + fVar65 * fVar70;
      }
      if ((*(uint *)(lVar43 + 0x18) <= uVar39) ||
         (uVar40 = uVar39 - 1, *(uint *)(lVar43 + 0x18) <= uVar40)) goto thunk_FUN_01ab6c44;
      fVar73 = (fVar70 + *(float *)(unaff_x19 + 0x374) + fVar72) -
               *(float *)(lVar43 + (long)(int)uVar39 * 0x188 + 0x15c);
      if ((!bVar16 && *(short *)(lVar43 + (long)(int)uVar40 * 0x188 + 0x20) == 0xad) &&
         ((fVar73 < fVar81 || (*(int *)(unaff_x26 + 0x74) == 0)))) {
        uVar20 = uVar20 - 1;
        bVar16 = false;
        *puVar1 = uVar40;
        in_stack_00001688 = CONCAT44(0x2d,uVar40);
        fVar61 = fVar66;
        break;
      }
      if (*(short *)(lVar43 + (long)(int)uVar39 * 0x188 + 0x20) == 0xad) {
        bVar16 = true;
        in_stack_00001688 = uVar30;
        fVar61 = fVar66;
        break;
      }
      if ((bVar18 & *(byte *)(unaff_x26 + 0xa8)) != 0) {
        fVar74 = *(float *)(unaff_x19 + 0x1594);
        fVar70 = *(float *)(unaff_x26 + 0x108) / 100.0;
        if ((fVar70 <= fVar74) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
          fVar72 = *_fStack00000000000000d0;
          fVar70 = *(float *)(unaff_x26 + 0xac);
          if ((fVar70 < fVar72) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
          goto LAB_03793bbc;
          goto LAB_03790b7c;
        }
LAB_03793c60:
        fVar65 = fVar68;
        if (0.0 < fVar74) {
          fVar65 = fVar68 / (1.0 - fVar74);
        }
        fVar74 = fVar74 + (fVar68 - fVar61 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar65;
        goto FUN_03793c4c;
      }
LAB_03790b7c:
      iVar22 = *(int *)(unaff_x19 + 0x11e0);
      if ((iVar22 != iStack0000000000000028) && ((bVar18 & iVar22 != -1) != 0)) {
        uVar20 = FUN_03797154();
        plVar56 = (long *)PTR_DAT_03cbe438;
        lVar43 = *(long *)(unaff_x25 + 0x30);
        if (lVar43 == 0) goto LAB_03793c9c;
        uVar39 = *puVar1;
        uVar40 = uVar39 - 1;
        if (*(uint *)(lVar43 + 0x18) <= uVar40) goto thunk_FUN_01ab6c44;
        iStack0000000000000028 = iVar22;
        if (*(short *)(lVar43 + (long)(int)uVar40 * 0x188 + 0x20) == 0xad) {
          uVar20 = uVar20 - 1;
          bVar16 = false;
          *puVar1 = uVar40;
          in_stack_00001688 = CONCAT44(0x2d,uVar40);
          fVar61 = fVar66;
          break;
        }
      }
      if (fVar73 <= fVar81) {
        FUN_037a1530(fVar64);
        bVar18 = 1;
        bVar16 = false;
        bVar11 = true;
        in_stack_00001688 = uVar30;
        fVar61 = fVar66;
        break;
      }
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar39;
      }
      if (*(char *)(unaff_x26 + 0xa8) != '\0') {
        fVar70 = *(float *)(unaff_x26 + 0xd0);
        if ((fVar70 < *(float *)(unaff_x19 + 0x15b0)) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar65 = *(float *)(unaff_x19 + 0x15b0) +
                   ((fVar86 - fVar73) / (float)(*(int *)(unaff_x19 + 0x340) + 1)) / fVar64;
          if (fVar65 <= fVar70) {
            fVar65 = fVar70;
          }
          goto LAB_03793b50;
        }
        fVar74 = *(float *)(unaff_x19 + 0x1594);
        fVar70 = *(float *)(unaff_x26 + 0x108) / 100.0;
        if ((fVar74 < fVar70) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03793c60;
        fVar72 = *_fStack00000000000000d0;
        fVar70 = *(float *)(unaff_x26 + 0xac);
        if ((fVar70 < fVar72) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03793bbc;
      }
      switch(*(undefined4 *)(unaff_x26 + 0x74)) {
      case 0:
      case 2:
      case 4:
        FUN_037a1530(fVar64);
        break;
      case 1:
        iVar22 = FUN_020aa428(lVar29,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                             );
        in_stack_00001688 = DAT_00d37868;
        if (iVar22 == 0) {
          bVar16 = false;
          puVar1[0] = 0;
          puVar1[1] = 0;
          uVar20 = 0xffffffff;
          fVar61 = fVar66;
        }
        else {
          FUN_020ab640(lVar29,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(&stack0x00000da0,&stack0x000016a0,0x398);
          iVar26 = FUN_03797154();
          bVar16 = false;
          iVar22 = *(int *)(unaff_x19 + 0x324) + -1;
          *(int *)(unaff_x19 + 0x324) = iVar22;
          iStack00000000000001dc = iStack00000000000001dc + 1;
          uVar20 = iVar26 - 1;
          in_stack_00001688 = CONCAT44(0x2026,iVar22);
          fVar61 = fVar66;
        }
        goto LAB_0378d260;
      case 3:
        uVar20 = FUN_03797154();
        bVar16 = false;
        goto LAB_037909d0;
      case 5:
        *(undefined1 *)(unaff_x19 + 0x37c) = 1;
        FUN_037a1530(fVar64);
        *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
        *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
        *(undefined4 *)(unaff_x19 + 0x374) = 0;
        *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
        *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
        break;
      case 6:
        bVar16 = false;
        uVar55 = uVar39;
LAB_037909d0:
        in_stack_00001688 = CONCAT44(3,uVar55);
        fVar61 = fVar66;
        goto LAB_0378d260;
      default:
        bVar16 = false;
        uVar55 = uVar39;
        goto LAB_0378f1e0;
      }
      bVar16 = false;
LAB_0379053c:
      bVar18 = 1;
      bVar11 = true;
      in_stack_00001688 = uVar30;
      fVar61 = fVar66;
      break;
    case 3:
      uVar20 = FUN_03797154();
      in_stack_00001688 = CONCAT44((int)((ulong)uVar30 >> 0x20),uVar55);
      fVar61 = fVar66;
      break;
    case 5:
      if (uVar55 == 0 || (int)uVar20 < 0) {
        uVar20 = 0xffffffff;
        *puVar1 = 0;
        fVar61 = fVar66;
      }
      else {
        fVar61 = *(float *)(unaff_x19 + 0x338);
        uVar20 = FUN_03797154();
        if (fVar81 < fVar61 - fVar91) goto LAB_0378f7e8;
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
        in_stack_00001688 = uVar30;
        fVar61 = fVar66;
      }
      break;
    case 6:
      uVar20 = FUN_03797154();
      in_stack_00001688 = CONCAT44(3,uVar55);
      fVar61 = fVar66;
    }
LAB_0378d260:
    uVar20 = uVar20 + 1;
    lVar43 = *(long *)(unaff_x19 + 0x20);
    uVar24 = uVar21;
    if (lVar43 == 0) goto LAB_03793c9c;
    goto LAB_0378cf04;
  }
  if (((uVar21 & 0xfffffffe) == 10) && (*(int *)(unaff_x26 + 0x74) == 6)) {
    fVar61 = 0.0;
    if ((0.0 < fVar70) && (fVar61 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar61 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    if (fVar81 < (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar70)) + fVar61
       ) {
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar55;
      }
      uVar20 = FUN_03797154();
LAB_0378f7e8:
      in_stack_00001688 = CONCAT44(3,uVar55);
      fVar61 = fVar66;
      goto LAB_0378d260;
    }
  }
  if ((((uVar21 - 0x2007 < 0x23) && ((1L << ((ulong)(uVar21 - 0x2007) & 0x3f) & 0x600000001U) != 0))
      || (uVar21 - 10 < 2)) || (uVar21 == 0xa0)) {
LAB_0378f700:
    if ((uVar21 == 0xad) || (uVar21 == 0x200b)) goto LAB_0378f884;
    if (uVar21 != 0x2060) {
      lVar43 = *(long *)(unaff_x25 + 0x48);
      if (lVar43 != 0) {
        if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar43 + 0x18)) {
          lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(int *)(lVar43 + 0x2c) = *(int *)(lVar43 + 0x2c) + 1;
          *(int *)(unaff_x25 + 0x18) = *(int *)(unaff_x25 + 0x18) + 1;
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
    uVar32 = FUN_026b97f8(uVar21,0);
    if ((uVar32 & 1) != 0) goto LAB_0378f700;
  }
LAB_0378f760:
  if (uVar21 == 0xa0) {
    lVar43 = *(long *)(unaff_x25 + 0x48);
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(int *)(lVar43 + 0x20) = *(int *)(lVar43 + 0x20) + 1;
  }
LAB_0378f884:
  bVar12 = *(int *)(unaff_x26 + 0x74) == 1;
  if (bVar12 && bVar15) {
    bVar12 = uVar21 == 0x2d;
  }
  if (bVar12) {
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar61 = *(float *)(unaff_x19 + 0xf4);
    iVar22 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar92 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    lVar43 = *(long *)(unaff_x19 + 0x1a00);
    fVar68 = fVar78;
    if (*(char *)(unaff_x26 + 0xbd) != '\0') {
      fVar68 = 1.0;
    }
    if ((lVar43 == 0) || (*(long *)(lVar43 + 0x20) == 0)) goto LAB_03793c9c;
    fVar70 = *(float *)(unaff_x19 + 0xf0);
    fVar73 = *(float *)(lVar43 + 0x2c);
    fVar67 = (float)FUN_03776ea8(*(long *)(lVar43 + 0x20),0);
    fVar72 = *pfVar41;
    fVar67 = fVar70 * (fVar61 / (float)iVar22) * fVar92 * fVar68 * fVar73 * fVar67;
    fVar61 = *(float *)(unaff_x19 + 0x358);
    if ((uVar21 == 10) && (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
      lVar43 = *plVar2;
      if (lVar43 == 0) goto LAB_03793c9c;
      uVar55 = *(int *)(unaff_x19 + 0x324) - 1;
      if (*(uint *)(lVar43 + 0x18) <= uVar55) goto thunk_FUN_01ab6c44;
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar68 = *(float *)(lVar43 + (long)(int)uVar55 * 0x188 + 0x68);
      iVar22 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar70 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      lVar43 = *(long *)(unaff_x19 + 0x1a00);
      fVar92 = fVar78;
      if (*(char *)(unaff_x26 + 0xbd) != '\0') {
        fVar92 = 1.0;
      }
      if ((lVar43 == 0) || (*(long *)(lVar43 + 0x20) == 0)) goto LAB_03793c9c;
      fVar73 = *(float *)(unaff_x19 + 0xf0);
      fVar74 = *(float *)(lVar43 + 0x2c);
      fVar67 = (float)FUN_03776ea8(*(long *)(lVar43 + 0x20),0);
      lVar43 = *(long *)(unaff_x25 + 0x48);
      if (lVar43 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      fVar72 = *(float *)(lVar43 + 100);
      fVar61 = *(float *)(lVar43 + 0x68);
      fVar67 = fVar73 * (fVar68 / (float)iVar22) * fVar70 * fVar92 * fVar74 * fVar67;
    }
    fVar92 = *(float *)(unaff_x19 + 0x2f4);
    fVar68 = 0.0;
    if (*(char *)(unaff_x26 + 0xb6) == '\0') {
      if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
         (lVar43 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar43 == 0)) goto LAB_03793c9c;
      FUN_03776e6c(&stack0x000016a0,lVar43,0);
      fVar68 = (float)FUN_03776cb4(&stack0x000015c0,0);
    }
    fVar70 = *(float *)(unaff_x19 + 0x35c);
    fVar61 = (fVar96 - fVar72) - fVar61;
    bVar12 = true;
    if ((fVar70 <= fVar61) && (bVar12 = false, !NAN(fVar70))) {
      bVar12 = fVar70 == -1.0;
    }
    if (!bVar12) {
      fVar61 = fVar70;
    }
    fVar70 = 1.0;
    if (uVar52 != 0) {
      fVar70 = DAT_00d38acc;
    }
    if (ABS(fVar92) + fVar67 * fVar68 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar70 * fVar61) {
      FUN_03796df8();
      memcpy(&stack0x000005c8,__src,0x398);
      FUN_020ab0d8(lVar29,&stack0x000005c8,
                   *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__
                  );
    }
  }
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *puVar1) goto thunk_FUN_01ab6c44;
  uVar55 = *(uint *)(unaff_x19 + 0x340);
  lVar43 = lVar43 + (long)(int)*puVar1 * 0x188;
  *(uint *)(lVar43 + 0x6c) = uVar55;
  *(undefined4 *)(lVar43 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
  if ((bVar15) || ((uVar21 < 0xe && ((1 << (ulong)(uVar21 & 0x1f) & 0x2c00U) != 0)))) {
    lVar43 = *(long *)(unaff_x25 + 0x48);
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= uVar55) goto thunk_FUN_01ab6c44;
    if (*(int *)(lVar43 + (long)(int)uVar55 * 0x60 + 0x24) == 1) goto LAB_0378fbcc;
  }
  else {
    lVar43 = *(long *)(unaff_x25 + 0x48);
    if (lVar43 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
    if (*(uint *)(lVar43 + 0x18) <= uVar55) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(lVar43 + (long)(int)uVar55 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  }
  if (uVar21 != 0x200b) {
    if (uVar21 == 9) {
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar61 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      bVar17 = FUN_03779d4c(*in_stack_000001c8,0);
      fVar68 = *(float *)(unaff_x19 + 0x2f4);
      fVar92 = fVar66 * fVar61 * (float)bVar17;
      fVar61 = fVar92 * (float)(int)(fVar68 / fVar92);
      if (fVar61 <= fVar68) {
        fVar61 = fVar68 + fVar92;
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar61;
    }
    else {
      fVar61 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar61 == 0.0) {
        fVar68 = *(float *)(unaff_x19 + 0x2f4);
        if (*(char *)(unaff_x26 + 0xb6) == '\0') {
          fVar61 = (float)FUN_03776cb4(&stack0x000015f0,0);
          fVar67 = *(float *)(unaff_x19 + 0x19a8);
          fVar92 = (float)FUN_03778e7c(&stack0x000015e0,0);
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            fVar69 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
            fVar68 = fVar68 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              fVar66 * (fVar61 * fVar67 + fVar92) +
                              fVar65 * (fVar94 + fVar71 + fVar69));
            goto UnityEngine_UIElements_WheelEvent___ctor;
          }
          goto LAB_03793c9c;
        }
        fVar61 = (float)FUN_03778e7c(&stack0x000015e0,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar92 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        fVar68 = fVar68 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          fVar66 * fVar61 + fVar65 * (fVar94 + fVar71 + fVar92));
        *(float *)(unaff_x19 + 0x2f4) = fVar68;
        if ((uVar24 == 0) && (uVar21 != 0x200b)) goto FUN_0378fd94;
        fVar68 = fVar68 - fVar65 * *(float *)(unaff_x26 + 0xc4);
      }
      else {
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar68 = *(float *)(unaff_x19 + 0x2f4);
        fVar92 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        fVar68 = fVar68 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          (fVar61 - fVar69) + fVar65 * (fVar71 + fVar92));
UnityEngine_UIElements_WheelEvent___ctor:
        *(float *)(unaff_x19 + 0x2f4) = fVar68;
        if ((uVar24 == 0) && (uVar21 != 0x200b)) goto FUN_0378fd94;
        fVar68 = fVar68 + fVar65 * *(float *)(unaff_x26 + 0xc4);
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar68;
    }
  }
FUN_0378fd94:
  lVar43 = *plVar2;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar55 = *puVar1;
  if (*(uint *)(lVar43 + 0x18) <= uVar55) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar43 + (long)(int)uVar55 * 0x188 + 0x164) = *(undefined4 *)(unaff_x19 + 0x2f4);
  if (uVar21 == 0xd) {
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
  }
  if ((*(int *)(unaff_x26 + 0x74) == 5) &&
     (((0xd < uVar21 || ((1 << (ulong)(uVar21 & 0x1f) & 0x2c00U) == 0)) && (1 < uVar21 - 0x2028))))
  {
    lVar43 = *plVar48;
    if (lVar43 == 0) goto LAB_03793c9c;
    uVar52 = *(uint *)(unaff_x19 + 0x350);
    if (*(int *)(lVar43 + 0x18) < (int)(uVar52 + 1)) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff3814(plVar48,uVar52 + 1,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__);
      lVar43 = *plVar48;
      if (lVar43 == 0) goto LAB_03793c9c;
      uVar52 = *(uint *)(unaff_x19 + 0x350);
    }
    if (*(uint *)(lVar43 + 0x18) <= uVar52) goto thunk_FUN_01ab6c44;
    lVar58 = lVar43 + (long)(int)uVar52 * 0x14;
    *(undefined4 *)(lVar58 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
    fVar61 = *(float *)(unaff_x19 + 0x378);
    if (*(float *)(lVar58 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
      fVar61 = *(float *)(lVar58 + 0x30);
    }
    *(float *)(lVar58 + 0x30) = fVar61;
    if (*(char *)(unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar43 + (long)(int)uVar52 * 0x14 + 0x20) = *(undefined4 *)(unaff_x19 + 0x324)
      ;
    }
    uVar55 = *puVar1;
    *(uint *)(lVar43 + (long)(int)uVar52 * 0x14 + 0x24) = uVar55;
  }
  if (((uVar21 < 0xc) && ((1 << (ulong)(uVar21 & 0x1f) & 0xc08U) != 0)) ||
     ((uVar21 - 0x2028 < 2 || (((bool)(bVar15 & uVar21 == 0x2d) || (uVar55 == uVar28)))))) {
    if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
      fVar61 = *(float *)(unaff_x19 + 0x338);
      fVar68 = *(float *)(unaff_x19 + 0x15ac);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar61 = fVar61 - fVar68;
      if (((fVar83 < ABS(fVar61)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
         (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
        uVar19 = *(undefined4 *)(unaff_x19 + 0x328);
        uVar23 = *(undefined4 *)(unaff_x19 + 0x324);
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_037a5574(fVar61,uVar19,uVar23,unaff_x25,0);
        *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar61;
        *(float *)(unaff_x19 + 0x2e0) = fVar61 + *(float *)(unaff_x19 + 0x2e0);
        plVar56 = (long *)PTR_DAT_03cbe438;
        if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
          FUN_020ab640(lVar29,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(__src,&stack0x000016a0,0x398);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xb28,0);
          *(float *)(unaff_x19 + 0xaf0) = fVar61 + *(float *)(unaff_x19 + 0xaf0);
          *(float *)(unaff_x19 + 0xb24) = fVar61 + *(float *)(unaff_x19 + 0xb24);
          memcpy(&stack0x00000230,__src,0x398);
          FUN_020ab0d8(lVar29,&stack0x00000230,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
        }
      }
    }
    fVar68 = *(float *)(unaff_x19 + 0x2e0);
    *(undefined1 *)(unaff_x19 + 0x37c) = 0;
    fVar92 = *(float *)(unaff_x19 + 0x33c) - fVar68;
    fVar61 = *(float *)(unaff_x19 + 0x378);
    if (fVar92 <= *(float *)(unaff_x19 + 0x378)) {
      fVar61 = fVar92;
    }
    *(float *)(unaff_x19 + 0x378) = fVar61;
    fVar67 = *(float *)(unaff_x19 + 0x338);
    if (!bVar14) {
      fVar98 = fVar61;
    }
    if ((*(char *)(unaff_x26 + 0xe8) != '\0') &&
       ((*(int *)(unaff_x26 + 0xd8) <= (int)*puVar1 ||
        (*(int *)(unaff_x26 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
      bVar14 = true;
    }
    lVar43 = *(long *)(unaff_x25 + 0x48);
    if (lVar43 == 0) goto LAB_03793c9c;
    uVar55 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar43 + 0x18) <= uVar55) goto thunk_FUN_01ab6c44;
    iVar22 = *(int *)(unaff_x19 + 0x328);
    lVar58 = lVar43 + (long)(int)uVar55 * 0x60;
    *(int *)(lVar58 + 0x38) = iVar22;
    uVar52 = *(uint *)(unaff_x19 + 0x328);
    if (iVar22 <= (int)*(uint *)(unaff_x19 + 0x330)) {
      uVar52 = *(uint *)(unaff_x19 + 0x330);
    }
    *(uint *)(unaff_x19 + 0x330) = uVar52;
    *(uint *)(lVar58 + 0x3c) = uVar52;
    iVar27 = *(int *)(unaff_x19 + 0x324);
    *(int *)(unaff_x19 + 0x32c) = iVar27;
    *(int *)(lVar58 + 0x40) = iVar27;
    iVar26 = *(int *)(unaff_x19 + 0x330);
    if ((int)uVar52 <= *(int *)(unaff_x19 + 0x334)) {
      iVar26 = *(int *)(unaff_x19 + 0x334);
    }
    *(int *)(unaff_x19 + 0x334) = iVar26;
    *(int *)(lVar58 + 0x44) = iVar26;
    *(int *)(lVar58 + 0x24) = (iVar27 - iVar22) + 1;
    *(undefined4 *)(lVar58 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
    *(undefined4 *)(lVar58 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
    lVar58 = *plVar2;
    if (lVar58 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar58 + 0x18) <= uVar52) goto thunk_FUN_01ab6c44;
    uVar19 = *(undefined4 *)(lVar58 + (long)(int)uVar52 * 0x188 + 0x124);
    lVar43 = lVar43 + (long)(int)uVar55 * 0x60;
    *(float *)(lVar43 + 0x74) = fVar92;
    *(undefined4 *)(lVar43 + 0x70) = uVar19;
    lVar43 = *(long *)(unaff_x25 + 0x48);
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar58 = *plVar2;
    if (lVar58 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar58 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    uVar19 = *(undefined4 *)(lVar58 + (long)(int)*(uint *)(unaff_x19 + 0x334) * 0x188 + 0x130);
    fVar67 = fVar67 - fVar68;
    lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(float *)(lVar43 + 0x7c) = fVar67;
    *(undefined4 *)(lVar43 + 0x78) = uVar19;
    lVar43 = *(long *)(unaff_x25 + 0x48);
    if (lVar43 == 0) goto LAB_03793c9c;
    uVar55 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar43 + 0x18) <= uVar55) goto thunk_FUN_01ab6c44;
    lVar58 = lVar43 + (long)(int)uVar55 * 0x60;
    *(float *)(lVar58 + 0x48) = *(float *)(lVar58 + 0x78) - fVar66 * fVar60;
    *(float *)(lVar58 + 0x60) = fStack0000000000000174;
    if (*(int *)(lVar58 + 0x24) == 1) {
      *(undefined4 *)(lVar43 + (long)(int)uVar55 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158)
      ;
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar61 = (float)FUN_03779d0c(*in_stack_000001c8,0);
    lVar43 = *plVar2;
    if (lVar43 == 0) goto LAB_03793c9c;
    lVar58 = (long)(int)*(uint *)(unaff_x19 + 0x334);
    if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    lVar33 = *(long *)(unaff_x25 + 0x48);
    if (lVar33 == 0) goto LAB_03793c9c;
    uVar55 = *(uint *)(unaff_x19 + 0x340);
    if (((*(char *)(lVar43 + lVar58 * 0x188 + 0x1a0) == '\0') &&
        (lVar58 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
        *(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
       (uVar52 = (uint)*(undefined8 *)(lVar33 + 0x18), uVar52 <= uVar55)) goto thunk_FUN_01ab6c44;
    fVar71 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (*(float *)(unaff_x19 + 0x2ec) + fVar65 * (fVar94 + fVar71 + fVar61));
    fVar61 = -fVar71;
    if (*(char *)(unaff_x26 + 0xb6) != '\0') {
      fVar61 = fVar71;
    }
    *(float *)(lVar33 + (long)(int)uVar55 * 0x60 + 0x5c) =
         *(float *)(lVar43 + lVar58 * 0x188 + 0x164) + fVar61;
    if (uVar52 <= uVar55) goto thunk_FUN_01ab6c44;
    lVar33 = lVar33 + (long)(int)uVar55 * 0x60;
    *(float *)(lVar33 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
    *(float *)(lVar33 + 0x58) = fVar92;
    *(float *)(lVar33 + 0x4c) = fVar64 * fVar59 + (fVar67 - fVar92);
    *(float *)(lVar33 + 0x50) = fVar67;
    if (0x2c < (int)uVar21) {
      if ((uVar21 - 0x2028 < 2) || (uVar21 == 0x2d)) goto LAB_03790360;
      goto LAB_03790574;
    }
    if (uVar21 - 10 < 2) {
LAB_03790360:
      FUN_03796df8();
      uVar24 = *(uint *)(unaff_x19 + 0x324);
      iVar22 = *(int *)(unaff_x19 + 0x340) + 1;
      *(int *)(unaff_x19 + 0x340) = iVar22;
      *(uint *)(unaff_x19 + 0x328) = uVar24 + 1;
      *(undefined8 *)(unaff_x19 + 0x344) = 0;
      if (*(long *)(unaff_x25 + 0x48) != 0) {
        if (*(int *)(*(long *)(unaff_x25 + 0x48) + 0x18) <= iVar22) {
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_037a56f4(iVar22,unaff_x25,0);
          uVar24 = *puVar1;
        }
        lVar43 = *plVar2;
        if (lVar43 != 0) {
          if (uVar24 < *(uint *)(lVar43 + 0x18)) {
            fVar61 = *(float *)(lVar43 + (long)(int)uVar24 * 0x188 + 0x158);
            if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
              if ((uVar21 == 0x2029) || (fVar71 = 0.0, uVar21 == 10)) {
                fVar71 = *(float *)(unaff_x26 + 0xcc);
              }
              uVar37 = 0;
              fVar71 = fVar61 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                       fVar64 * (fVar59 + *(float *)(unaff_x19 + 0x15b0)) +
                       fVar65 * (*(float *)(unaff_x26 + 200) + fVar71) +
                       *(float *)(unaff_x19 + 0x2e0);
            }
            else {
              if ((uVar21 == 0x2029) || (fVar71 = 0.0, uVar21 == 10)) {
                fVar71 = *(float *)(unaff_x26 + 0xcc);
              }
              uVar37 = 1;
              fVar71 = *(float *)(unaff_x19 + 0x2e0) +
                       *(float *)(unaff_x19 + 0x2e4) +
                       fVar65 * (*(float *)(unaff_x26 + 200) + fVar71);
            }
            *(float *)(unaff_x19 + 0x2e0) = fVar71;
            *(float *)(unaff_x19 + 0x15ac) = fVar61;
            *(undefined1 *)(unaff_x19 + 0x2e8) = uVar37;
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
    if (uVar21 == 3) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar20 = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
        goto LAB_03790574;
      }
      goto LAB_03793c9c;
    }
  }
  else {
    lVar43 = *plVar2;
    if (lVar43 == 0) goto LAB_03793c9c;
  }
LAB_03790574:
  uVar55 = *puVar1;
  if (*(uint *)(lVar43 + 0x18) <= uVar55) goto thunk_FUN_01ab6c44;
  if (*(char *)(lVar43 + (long)(int)uVar55 * 0x188 + 0x1a0) != '\0') {
    lVar43 = lVar43 + (long)(int)uVar55 * 0x188;
    uVar32 = *(ulong *)(unaff_x19 + 0x360);
    uVar35 = *(ulong *)(lVar43 + 0x124);
    *(ulong *)(unaff_x19 + 0x360) =
         uVar32 ^ (uVar32 ^ uVar35) &
                  ~CONCAT44(-(uint)((float)(uVar32 >> 0x20) < (float)(uVar35 >> 0x20)),
                            -(uint)((float)uVar32 < (float)uVar35));
    uVar32 = *(ulong *)(unaff_x19 + 0x368);
    uVar35 = *(ulong *)(lVar43 + 0x130);
    *(ulong *)(unaff_x19 + 0x368) =
         uVar32 ^ (uVar32 ^ uVar35) &
                  ~CONCAT44(-(uint)((float)(uVar35 >> 0x20) < (float)(uVar32 >> 0x20)),
                            -(uint)((float)uVar35 < (float)uVar32));
  }
  if ((cVar38 != '\0') ||
     ((*(uint *)(unaff_x26 + 0x74) < 7 &&
      ((1 << (ulong)(*(uint *)(unaff_x26 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
    if ((uVar24 == 0) && (((uVar21 != 0x2d && (uVar21 != 0x200b)) && (uVar21 != 0xad)))) {
      if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03790684:
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar32 = FUN_037a5f20(uVar21,0);
        if ((uVar32 & 1) == 0) {
LAB_037906cc:
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar32 = FUN_037a5f90(uVar21,0);
          if ((uVar32 & 1) == 0) goto LAB_037907cc;
          if (lVar42 == 0) goto LAB_03793c9c;
        }
        else {
          if ((lVar42 == 0) || (lVar43 = FUN_037a8a5c(lVar42,0), lVar43 == 0)) goto LAB_03793c9c;
          if (*(char *)(lVar43 + 0x28) != '\0') goto LAB_037906cc;
        }
        lVar43 = FUN_037a8a5c(lVar42,0);
        if ((lVar43 == 0) || (lVar43 = FUN_037aad04(lVar43,0), lVar43 == 0)) goto LAB_03793c9c;
        uVar19 = (undefined4)(uVar45 >> 0x20);
        uVar45 = CONCAT44(uVar19,uVar21);
        uVar32 = FUN_021e4dc4(lVar43,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
        if ((int)*puVar1 < (int)uVar28) {
          lVar43 = FUN_037a8a5c(lVar42,0);
          if (lVar43 == 0) goto LAB_03793c9c;
          lVar43 = FUN_037aaf28(lVar43,0);
          lVar58 = *plVar2;
          if (lVar58 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar58 + 0x18) <= *puVar1 + 1) goto thunk_FUN_01ab6c44;
          if (lVar43 == 0) goto LAB_03793c9c;
          uVar45 = CONCAT44(uVar19,(uint)*(ushort *)
                                          (lVar58 + (long)(int)(*puVar1 + 1) * 0x188 + 0x20));
          uVar35 = FUN_021e4dc4(lVar43,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
          if ((uVar32 & 1) != 0) goto LAB_037909e8;
          if ((uVar35 & 1) == 0) goto LAB_03790cd4;
          if (bVar18 == 0) goto LAB_03790854;
        }
        else {
          if ((uVar32 & 1) == 0) {
LAB_03790cd4:
            FUN_03796df8();
            bVar18 = 0;
            goto LAB_03790864;
          }
LAB_037909e8:
          if (uVar25 != uVar4 || ((bVar18 ^ 0xff) & 1) != 0) goto LAB_03790864;
        }
        if (uVar24 != 0) {
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
        if ((uVar24 != 0 && uVar21 != 0xa0) || (!bVar16 && uVar21 == 0xad)) {
          FUN_03796df8();
        }
      }
      FUN_03796df8();
      bVar18 = 1;
    }
    else {
      if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_037907cc;
      if (((uVar21 - 0x2007 < 0x29) &&
          ((1L << ((ulong)(uVar21 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((uVar21 == 0xa0 || (uVar21 == 0x2060)))) goto LAB_03790684;
      FUN_03796df8();
      bVar18 = 0;
      *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
    }
  }
LAB_03790864:
  FUN_03796df8();
  *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
  in_stack_00001688 = uVar30;
  fVar61 = fVar66;
  goto LAB_0378d260;
LAB_0379194c:
  do {
    uVar20 = uVar21 - 1;
    if (*(uint *)(lVar29 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
    lVar58 = (long)(int)uVar20;
    lVar42 = lVar29 + lVar58 * 0x188;
    lVar43 = *(long *)(lVar42 + 0x40);
    uVar7 = *(ushort *)(lVar42 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar18 = FUN_026b63d8(uVar7,0);
    if (*(uint *)(lVar29 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
    lVar42 = *(long *)(unaff_x25 + 0x48);
    uVar25 = (uint)uVar7;
    if (lVar42 == 0) goto LAB_03793c9c;
    uVar4 = *(uint *)(lVar29 + lVar58 * 0x188 + 0x6c);
    if (*(uint *)(lVar42 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
    lVar33 = (long)(int)uVar4;
    lVar42 = lVar42 + lVar33 * 0x60;
    uVar52 = *(uint *)(lVar42 + 0x40);
    uVar55 = *(uint *)(lVar42 + 0x6c);
    iVar5 = *(int *)(lVar42 + 0x20);
    iVar26 = *(int *)(lVar42 + 0x28);
    iVar27 = *(int *)(lVar42 + 0x2c);
    uVar39 = *(uint *)(lVar42 + 0x44);
    lVar50 = (long)(int)uVar39;
    fVar86 = *(float *)(lVar42 + 0x50);
    fVar83 = *(float *)(lVar42 + 0x58);
    fVar63 = *(float *)(lVar42 + 0x5c);
    fVar79 = *(float *)(lVar42 + 0x60);
    fVar64 = *(float *)(lVar42 + 100);
    fVar98 = *(float *)(lVar42 + 0x70);
    fVar81 = *(float *)(lVar42 + 0x74);
    fVar96 = *(float *)(lVar42 + 0x78);
    fVar84 = *(float *)(lVar42 + 0x7c);
    if ((int)uVar55 < 0x421) {
      if ((int)uVar55 < 0x209) {
        if ((int)uVar55 < 0x111) {
          switch(uVar55) {
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
            if (uVar55 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar55) {
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
            if (uVar55 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar55 < 0x405) {
        if ((int)uVar55 < 0x401) {
          if (uVar55 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar55 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar55 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar55 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar55 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar55 == 0x408) || (uVar55 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar55 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar55) {
      if ((int)uVar55 < 0x2005) {
        if (0x2000 < (int)uVar55) {
          if (uVar55 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar55 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar55 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar55 != 0x1010) {
          uVar40 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar55 != 0x2008) && (uVar55 != 0x2010)) {
        uVar40 = 0x2020;
LAB_03791bc8:
        if (uVar55 != uVar40) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar63 = fVar98 + fVar96;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar55 < 0x811) {
      switch(uVar55) {
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
        if ((int)uVar20 <= (int)uVar39) {
          if (uVar25 < 0xad) {
            if ((uVar25 != 3) && (uVar25 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar25 != 0xad) && ((uVar25 != 0x200b && (uVar25 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(lVar29 + 0x18) <= uVar52) goto thunk_FUN_01ab6c44;
            uVar8 = *(undefined2 *)(lVar29 + (long)(int)uVar52 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar56 = (long *)PTR_DAT_03cbded8;
            }
            uVar35 = FUN_026b8cc4(uVar8,0);
            if ((uVar35 & 1) == 0) {
              bVar15 = (int)uVar4 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar15 = false;
            }
            if ((fVar63 <= fVar79) && (!bVar15 && (uVar55 >> 4 & 1) == 0)) {
              fStack0000000000000158 = fVar64;
              if (*(char *)(unaff_x26 + 0xb6) != '\0') {
                fStack0000000000000158 = fVar79 + fVar64;
              }
              goto LAB_03791c20;
            }
            if ((uVar21 == 1) || (uVar4 != uVar24)) {
              cVar38 = *(char *)(unaff_x26 + 0xb6);
            }
            else {
              cVar38 = *(char *)(unaff_x26 + 0xb6);
              if (uVar20 != *(uint *)(unaff_x26 + 0xe4)) {
                iVar27 = (iVar27 - iVar5) - (uVar28 & 1);
                fVar64 = -fVar63;
                if (cVar38 != '\0') {
                  fVar64 = fVar63;
                }
                if (iVar27 < 1) {
                  fVar63 = 1.0;
                }
                else {
                  fVar63 = *(float *)(unaff_x26 + 0x7c);
                }
                if (iVar27 < 2) {
                  iVar27 = 1;
                }
                fVar79 = fVar79 + fVar64;
                if (uVar25 == 9) {
LAB_037939d0:
                  if (cVar38 != '\0') {
                    fVar79 = fVar79 * (1.0 - fVar63);
                    fVar64 = (float)iVar27;
LAB_03793a0c:
                    fStack0000000000000158 = fStack0000000000000158 - fVar79 / fVar64;
                    break;
                  }
                  fVar64 = (float)iVar27;
                  fVar79 = fVar79 * (1.0 - fVar63);
                }
                else {
                  if (uVar25 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar35 = FUN_026b97f8(uVar25,0);
                    cVar38 = *(char *)(unaff_x26 + 0xb6);
                    if ((uVar35 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar79 = fVar79 * fVar63;
                  fVar64 = (float)(int)((iVar5 - (~uVar28 & 1)) + iVar26);
                  if (cVar38 != '\0') goto LAB_03793a0c;
                }
                fStack0000000000000158 = fStack0000000000000158 + fVar79 / fVar64;
                uStack0000000000000148 =
                     CONCAT44((float)((ulong)uStack0000000000000148 >> 0x20) + 0.0,
                              (float)uStack0000000000000148 + 0.0);
                break;
              }
            }
            fStack0000000000000158 = fVar64;
            if (cVar38 != '\0') {
              fStack0000000000000158 = fVar79 + fVar64;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar28 = FUN_026b97f8(uVar25,0);
            uStack0000000000000148 = 0;
          }
        }
        break;
      default:
        if (uVar55 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar55) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(unaff_x26 + 0xb6) == '\0') {
          fStack0000000000000158 = fVar64 + 0.0;
        }
        else {
          fStack0000000000000158 = 0.0 - fVar63;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        fStack0000000000000158 = (fVar64 + fVar79 * 0.5) - fVar63 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        fStack0000000000000158 = (fVar79 + fVar64) - fVar63;
        if (*(char *)(unaff_x26 + 0xb6) != '\0') {
          fStack0000000000000158 = fVar79 + fVar64;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar55 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      uStack0000000000000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar55 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar55 <= uVar20) goto thunk_FUN_01ab6c44;
    lVar42 = lVar29 + lVar58 * 0x188;
    fVar64 = fStack0000000000000120 + fStack0000000000000158;
    fVar63 = (float)uStack0000000000000118 + (float)uStack0000000000000148;
    fVar79 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)uStack0000000000000148 >> 0x20);
    if (*(char *)(lVar42 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar38 = *(char *)(lVar29 + lVar58 * 0x188 + 0x28);
    if (cVar38 != '\x01') goto LAB_0379225c;
    fVar62 = fmodf(*(float *)(unaff_x26 + 0xfc) * (float)(int)uVar4,1.0);
    plVar56 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(unaff_x26 + 0xf4)) {
    case 0:
      fVar62 = 1.0;
      lVar46 = lVar29 + lVar58 * 0x188;
      *(undefined4 *)(lVar46 + 0xbc) = 0;
      *(undefined4 *)(lVar46 + 0x94) = 0;
      *(undefined4 *)(lVar46 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar84 = *(float *)(lVar29 + lVar58 * 0x188 + 0xa0);
      if (*(int *)(unaff_x26 + 0x70) == 0x208) {
        lVar46 = lVar29 + lVar58 * 0x188;
        fVar96 = (fStack0000000000000158 + fVar84) - *(float *)(unaff_x19 + 0x360);
        fVar84 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar46 = lVar29 + lVar58 * 0x188;
      fVar96 = fVar96 - fVar98;
      *(float *)(lVar46 + 0xbc) = fVar62 + (fVar84 - fVar98) / fVar96;
      *(float *)(lVar46 + 0x94) = fVar62 + (*(float *)(lVar46 + 0x78) - fVar98) / fVar96;
      *(float *)(lVar46 + 0xe4) = fVar62 + (*(float *)(lVar46 + 200) - fVar98) / fVar96;
      fVar62 = fVar62 + (*(float *)(lVar46 + 0xf0) - fVar98) / fVar96;
      break;
    case 2:
      lVar46 = lVar29 + lVar58 * 0x188;
      fVar84 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar96 = (fStack0000000000000158 + *(float *)(lVar46 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar46 + 0xbc) = fVar62 + fVar96 / fVar84;
      *(float *)(lVar46 + 0x94) =
           fVar62 + ((fStack0000000000000158 + *(float *)(lVar46 + 0x78)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar46 + 0xe4) =
           fVar62 + ((fStack0000000000000158 + *(float *)(lVar46 + 200)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar62 = fVar62 + ((fStack0000000000000158 + *(float *)(lVar46 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(unaff_x26 + 0xf8)) {
      case 0:
        lVar46 = lVar29 + lVar58 * 0x188;
        *(undefined4 *)(lVar46 + 0xc0) = 0;
        *(undefined4 *)(lVar46 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar46 + 0xe8) = 0;
        *(undefined4 *)(lVar46 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar84 = fVar84 - fVar81;
        lVar46 = lVar29 + lVar58 * 0x188;
        fVar96 = fVar62 + (*(float *)(lVar46 + 0xa4) - fVar81) / fVar84;
        fVar84 = fVar62 + (*(float *)(lVar46 + 0x7c) - fVar81) / fVar84;
        *(float *)(lVar46 + 0xc0) = fVar96;
        *(float *)(lVar46 + 0x98) = fVar84;
        *(float *)(lVar46 + 0xe8) = fVar96;
        *(float *)(lVar46 + 0x110) = fVar84;
        break;
      case 2:
        lVar46 = lVar29 + lVar58 * 0x188;
        fVar96 = fVar62 + (*(float *)(lVar46 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar46 + 0xc0) = fVar96;
        fVar84 = *(float *)(unaff_x19 + 0x364);
        fVar98 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar46 + 0xe8) = fVar96;
        fVar96 = fVar62 + (*(float *)(lVar46 + 0x7c) - fVar84) / (fVar98 - fVar84);
        *(float *)(lVar46 + 0x98) = fVar96;
        *(float *)(lVar46 + 0x110) = fVar96;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar55 = (uint)*(undefined8 *)(lVar29 + 0x18);
      }
      if (uVar55 <= uVar20) goto thunk_FUN_01ab6c44;
      lVar46 = lVar29 + lVar58 * 0x188;
      fVar96 = *(float *)(lVar46 + 0x168);
      fVar84 = (1.0 - (*(float *)(lVar46 + 0xc0) + *(float *)(lVar46 + 0x98)) * fVar96) * 0.5;
      fVar98 = fVar62 + *(float *)(lVar46 + 0xc0) * fVar96 + fVar84;
      fVar62 = fVar62 + *(float *)(lVar46 + 0x98) * fVar96 + fVar84;
      *(float *)(lVar46 + 0xbc) = fVar98;
      *(float *)(lVar46 + 0x94) = fVar98;
      *(float *)(lVar46 + 0xe4) = fVar62;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(lVar29 + lVar58 * 0x188 + 0x10c) = fVar62;
switchD_03791d04_default:
    switch(*(undefined4 *)(unaff_x26 + 0xf8)) {
    case 0:
      if (uVar55 <= uVar20) goto thunk_FUN_01ab6c44;
      lVar46 = lVar29 + lVar58 * 0x188;
      *(undefined4 *)(lVar46 + 0xc0) = 0;
      *(undefined4 *)(lVar46 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar46 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar46 + 0x110) = 0;
      break;
    case 1:
      if (uVar20 < uVar55) {
        fVar86 = fVar86 - fVar83;
        lVar46 = lVar29 + lVar58 * 0x188;
        fVar62 = (*(float *)(lVar46 + 0xa4) - fVar83) / fVar86;
        fVar86 = (*(float *)(lVar46 + 0x7c) - fVar83) / fVar86;
        *(float *)(lVar46 + 0xc0) = fVar62;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar55 <= uVar20) goto thunk_FUN_01ab6c44;
      lVar46 = lVar29 + lVar58 * 0x188;
      fVar62 = (*(float *)(lVar46 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar46 + 0xc0) = fVar62;
      fVar86 = (*(float *)(lVar46 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar46 + 0x98) = fVar86;
      *(float *)(lVar46 + 0xe8) = fVar86;
      *(float *)(lVar46 + 0x110) = fVar62;
      break;
    case 3:
      if (uVar55 <= uVar20) goto thunk_FUN_01ab6c44;
      lVar46 = lVar29 + lVar58 * 0x188;
      fVar86 = *(float *)(lVar46 + 0x168);
      fVar96 = (1.0 - (*(float *)(lVar46 + 0xbc) + *(float *)(lVar46 + 0xe4)) / fVar86) * 0.5;
      fVar62 = *(float *)(lVar46 + 0xbc) / fVar86 + fVar96;
      fVar96 = *(float *)(lVar46 + 0xe4) / fVar86 + fVar96;
      *(float *)(lVar46 + 0xc0) = fVar62;
      *(float *)(lVar46 + 0x98) = fVar96;
      *(float *)(lVar46 + 0x110) = fVar62;
      *(float *)(lVar46 + 0xe8) = fVar96;
    }
    if (uVar55 <= uVar20) goto thunk_FUN_01ab6c44;
    lVar46 = lVar29 + lVar58 * 0x188;
    fVar62 = *(float *)(lVar46 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar46 + 100) == '\0') && ((*(byte *)(lVar29 + lVar58 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar62 = -fVar62;
    }
    lVar46 = lVar29 + lVar58 * 0x188;
    *(float *)(lVar46 + 0xb8) = fVar62;
    *(float *)(lVar46 + 0x90) = fVar62;
    *(float *)(lVar46 + 0xe0) = fVar62;
    *(float *)(lVar46 + 0x108) = fVar62;
    *(undefined4 *)(lVar46 + 0xbc) = 0x3f800000;
    *(float *)(lVar46 + 0xc0) = fVar62;
    *(undefined4 *)(lVar46 + 0x94) = 0x3f800000;
    *(float *)(lVar46 + 0x98) = fVar62;
    *(undefined4 *)(lVar46 + 0xe4) = 0x3f800000;
    *(float *)(lVar46 + 0xe8) = fVar62;
    *(undefined4 *)(lVar46 + 0x10c) = 0x3f800000;
    *(float *)(lVar46 + 0x110) = fVar62;
LAB_0379225c:
    if (((int)uVar20 < *(int *)(unaff_x26 + 0xd8)) && (iVar22 < *(int *)(unaff_x26 + 0xdc))) {
      if ((*(int *)(unaff_x26 + 0xe0) <= (int)uVar4) || (*(int *)(unaff_x26 + 0x74) == 5)) {
        if ((*(int *)(unaff_x26 + 0xe0) <= (int)uVar4) || (*(int *)(unaff_x26 + 0x74) != 5))
        goto LAB_037922d4;
        if (uVar20 < uVar55) {
          bVar15 = *(uint *)(lVar29 + lVar58 * 0x188 + 0x70) == uVar3;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar55 <= uVar20) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar42 = lVar29 + lVar58 * 0x188;
      *(ulong *)(lVar42 + 0xa0) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar42 + 0xa0) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar42 + 0xa0));
      *(float *)(lVar42 + 0xa8) = fVar79 + *(float *)(lVar42 + 0xa8);
      *(ulong *)(lVar42 + 0x78) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar42 + 0x78) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar42 + 0x78));
      *(float *)(lVar42 + 0x80) = fVar79 + *(float *)(lVar42 + 0x80);
      *(ulong *)(lVar42 + 200) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar42 + 200) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar42 + 200));
      *(float *)(lVar42 + 0xd0) = fVar79 + *(float *)(lVar42 + 0xd0);
      *(ulong *)(lVar42 + 0xf0) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar42 + 0xf0) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar42 + 0xf0));
      *(float *)(lVar42 + 0xf8) = fVar79 + *(float *)(lVar42 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar15 = false;
LAB_037922d8:
      if (uVar55 <= uVar20) goto thunk_FUN_01ab6c44;
      if (bVar15) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar56);
        DAT_0411f172 = '\x01';
        uVar55 = *(uint *)(lVar29 + 0x18);
      }
      uVar23 = *(undefined4 *)(*(undefined8 **)(*plVar56 + 0xb8) + 1);
      lVar46 = lVar29 + lVar58 * 0x188;
      *(undefined8 *)(lVar46 + 0xa0) = **(undefined8 **)(*plVar56 + 0xb8);
      *(undefined4 *)(lVar46 + 0xa8) = uVar23;
      if (uVar55 <= uVar20) goto thunk_FUN_01ab6c44;
      uVar23 = *(undefined4 *)(*(undefined8 **)(*plVar56 + 0xb8) + 1);
      lVar46 = lVar29 + lVar58 * 0x188;
      *(undefined8 *)(lVar46 + 0x78) = **(undefined8 **)(*plVar56 + 0xb8);
      *(undefined4 *)(lVar46 + 0x80) = uVar23;
      uVar23 = *(undefined4 *)(*(undefined8 **)(*plVar56 + 0xb8) + 1);
      *(undefined8 *)(lVar46 + 200) = **(undefined8 **)(*plVar56 + 0xb8);
      *(undefined4 *)(lVar46 + 0xd0) = uVar23;
      uVar23 = *(undefined4 *)(*(undefined8 **)(*plVar56 + 0xb8) + 1);
      *(undefined8 *)(lVar46 + 0xf0) = **(undefined8 **)(*plVar56 + 0xb8);
      *(undefined4 *)(lVar46 + 0xf8) = uVar23;
      *(undefined1 *)(lVar42 + 0x1a0) = 0;
    }
    iVar26 = FUN_0368e42c(0);
    if (iVar26 == 1) {
      cVar54 = *(char *)(unaff_x26 + 0xa2);
    }
    else {
      cVar54 = '\0';
    }
    if (cVar38 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar20,cVar54 != '\0',unaff_x26,unaff_x25,0);
    }
    else if (cVar38 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar20,cVar54 != '\0',unaff_x26,unaff_x25,0);
    }
LAB_037924bc:
    lVar42 = *plVar2;
    if (lVar42 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar42 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
    lVar42 = lVar42 + lVar58 * 0x188;
    uVar30 = *(undefined8 *)(lVar42 + 0x124);
    *(undefined8 *)(lVar42 + 0x124) =
         CONCAT44(fVar63 + (float)((ulong)uVar30 >> 0x20),fVar64 + (float)uVar30);
    *(float *)(lVar42 + 300) = fVar79 + *(float *)(lVar42 + 300);
    lVar42 = *plVar2;
    if (lVar42 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar42 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
    lVar42 = lVar42 + lVar58 * 0x188;
    *(ulong *)(lVar42 + 0x118) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar42 + 0x118) >> 0x20),
                  fVar64 + (float)*(undefined8 *)(lVar42 + 0x118));
    *(float *)(lVar42 + 0x120) = fVar79 + *(float *)(lVar42 + 0x120);
    lVar42 = *plVar2;
    if (lVar42 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar42 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
    lVar42 = lVar42 + lVar58 * 0x188;
    *(ulong *)(lVar42 + 0x130) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar42 + 0x130) >> 0x20),
                  fVar64 + (float)*(undefined8 *)(lVar42 + 0x130));
    *(float *)(lVar42 + 0x138) = fVar79 + *(float *)(lVar42 + 0x138);
    lVar42 = *plVar2;
    if (lVar42 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar42 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
    lVar42 = lVar42 + lVar58 * 0x188;
    *(float *)(lVar42 + 0x13c) = fVar64 + *(float *)(lVar42 + 0x13c);
    *(ulong *)(lVar42 + 0x140) =
         CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar42 + 0x140) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar42 + 0x140));
    lVar42 = *plVar2;
    if (lVar42 == 0) goto LAB_03793c9c;
    uVar55 = *(uint *)(lVar42 + 0x18);
    if (uVar55 <= uVar20) goto thunk_FUN_01ab6c44;
    lVar46 = lVar42 + lVar58 * 0x188;
    *(float *)(lVar46 + 0x148) = fVar64 + *(float *)(lVar46 + 0x148);
    *(float *)(lVar46 + 0x164) = fVar64 + *(float *)(lVar46 + 0x164);
    *(float *)(lVar46 + 0x154) = fVar63 + *(float *)(lVar46 + 0x154);
    uVar30 = *(undefined8 *)(lVar46 + 0x14c);
    *(undefined8 *)(lVar46 + 0x14c) =
         CONCAT44(fVar63 + (float)((ulong)uVar30 >> 0x20),fVar63 + (float)uVar30);
    if (uVar4 == uVar24) {
      uVar24 = *puVar1 - 1;
      if (uVar20 == uVar24) goto LAB_037926b4;
    }
    else {
      lVar46 = *(long *)(unaff_x25 + 0x48);
      if (lVar46 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar46 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
      lVar51 = (long)(int)uVar24;
      lVar53 = lVar46 + lVar51 * 0x60;
      fVar79 = fVar63 + *(float *)(lVar53 + 0x58);
      *(ulong *)(lVar53 + 0x50) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar53 + 0x50) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar53 + 0x50));
      *(float *)(lVar53 + 0x58) = fVar79;
      *(float *)(lVar53 + 0x5c) = fVar64 + *(float *)(lVar53 + 0x5c);
      if (uVar55 <= *(uint *)(lVar53 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar23 = *(undefined4 *)(lVar42 + (long)(int)*(uint *)(lVar53 + 0x38) * 0x188 + 0x124);
      lVar46 = lVar46 + lVar51 * 0x60;
      *(float *)(lVar46 + 0x74) = fVar79;
      *(undefined4 *)(lVar46 + 0x70) = uVar23;
      lVar42 = *(long *)(unaff_x25 + 0x48);
      if (lVar42 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar42 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
      lVar46 = *plVar2;
      if (lVar46 == 0) goto LAB_03793c9c;
      uVar24 = *(uint *)(lVar42 + lVar51 * 0x60 + 0x44);
      if (*(uint *)(lVar46 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
      lVar42 = lVar42 + lVar51 * 0x60;
      *(undefined4 *)(lVar42 + 0x78) = *(undefined4 *)(lVar46 + (long)(int)uVar24 * 0x188 + 0x130);
      *(undefined4 *)(lVar42 + 0x7c) = *(undefined4 *)(lVar42 + 0x50);
      uVar24 = *puVar1 - 1;
LAB_037926b4:
      if (uVar20 == uVar24) {
        lVar42 = *(long *)(unaff_x25 + 0x48);
        if (lVar42 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar42 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        lVar46 = lVar42 + lVar33 * 0x60;
        fVar79 = fVar63 + *(float *)(lVar46 + 0x58);
        *(ulong *)(lVar46 + 0x50) =
             CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar46 + 0x50) >> 0x20),
                      fVar63 + (float)*(undefined8 *)(lVar46 + 0x50));
        *(float *)(lVar46 + 0x58) = fVar79;
        *(float *)(lVar46 + 0x5c) = fVar64 + *(float *)(lVar46 + 0x5c);
        lVar51 = *plVar2;
        if (lVar51 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar51 + 0x18) <= *(uint *)(lVar46 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar23 = *(undefined4 *)(lVar51 + (long)(int)*(uint *)(lVar46 + 0x38) * 0x188 + 0x124);
        lVar42 = lVar42 + lVar33 * 0x60;
        *(float *)(lVar42 + 0x74) = fVar79;
        *(undefined4 *)(lVar42 + 0x70) = uVar23;
        lVar42 = *(long *)(unaff_x25 + 0x48);
        if (lVar42 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar42 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        lVar46 = *plVar2;
        if (lVar46 == 0) goto LAB_03793c9c;
        uVar24 = *(uint *)(lVar42 + lVar33 * 0x60 + 0x44);
        if (*(uint *)(lVar46 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar42 = lVar42 + lVar33 * 0x60;
        *(undefined4 *)(lVar42 + 0x78) = *(undefined4 *)(lVar46 + (long)(int)uVar24 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar42 + 0x7c) = *(undefined4 *)(lVar42 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar35 = FUN_026b82c4(uVar25,0);
    if (((((uVar35 & 1) == 0) && (1 < uVar25 - 0x2010)) && (uVar25 != 0xad)) && (uVar25 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar21 == 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar17 = FUN_026b81f8(uVar25,0);
          if (((uVar25 == 0x200b) || (((bVar18 | bVar17 ^ 1) & 1) != 0)) || (*puVar1 == 1))
          goto LAB_037930d8;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar21 != 1) && ((int)uVar20 < (int)(*(uint *)(lVar29 + 0x18) - 1))) &&
           (((int)uVar20 < (int)*puVar1 && ((uVar25 == 0x2019 || (uVar25 == 0x27)))))) {
          if (*(uint *)(lVar29 + 0x18) <= uVar21 - 2) goto thunk_FUN_01ab6c44;
          uVar8 = *(undefined2 *)(lVar29 + lStack00000000000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar35 = FUN_026b82c4(uVar8,0);
          if ((uVar35 & 1) != 0) {
            if (*(uint *)(lVar29 + 0x18) <= uVar21) goto thunk_FUN_01ab6c44;
            uVar8 = *(undefined2 *)(lVar29 + lStack00000000000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar35 = FUN_026b82c4(uVar8,0);
            if ((uVar35 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (uVar20 == *puVar1 - 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar35 = FUN_026b82c4(uVar25,0);
          fStack0000000000000170 = (float)uVar20;
          if ((uVar35 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar42 = *plVar48;
        if (lVar42 == 0) goto LAB_03793c9c;
        uVar24 = *(uint *)(unaff_x25 + 0x1c);
        iVar26 = *(int *)(lVar42 + 0x18);
        if (iVar26 < (int)(uVar24 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar48,iVar26 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar42 = *plVar48;
          if (lVar42 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar42 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar42 = lVar42 + (long)(int)uVar24 * 0xc;
        *(uint *)(lVar42 + 0x20) = uStack0000000000000168;
        *(float *)(lVar42 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar42 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar42 = *(long *)(unaff_x25 + 0x48);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar42 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar42 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        lVar42 = lVar42 + lVar33 * 0x60;
        uStack000000000000016c = 0;
        iVar22 = iVar22 + 1;
        *(int *)(lVar42 + 0x34) = *(int *)(lVar42 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar20;
      }
      if (uVar20 == *puVar1 - 1) {
        lVar42 = *plVar48;
        if (lVar42 == 0) goto LAB_03793c9c;
        uVar24 = *(uint *)(unaff_x25 + 0x1c);
        iVar26 = *(int *)(lVar42 + 0x18);
        if (iVar26 < (int)(uVar24 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar48,iVar26 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar42 = *plVar48;
          if (lVar42 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar42 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar42 = lVar42 + (long)(int)uVar24 * 0xc;
        *(uint *)(lVar42 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar42 + 0x24) = uVar20;
        *(uint *)(lVar42 + 0x28) = uVar21 - uStack0000000000000168;
        lVar42 = *(long *)(unaff_x25 + 0x48);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar42 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar42 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
        lVar42 = lVar42 + lVar33 * 0x60;
        iVar22 = iVar22 + 1;
        *(int *)(lVar42 + 0x34) = *(int *)(lVar42 + 0x34) + 1;
      }
LAB_0379289c:
      uStack000000000000016c = 1;
    }
    lVar42 = *plVar2;
    if (lVar42 == 0) goto LAB_03793c9c;
    uVar24 = *(uint *)(lVar42 + 0x18);
    if (uVar24 <= uVar20) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar42 + lVar58 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar11) {
LAB_037928d0:
        if (uVar21 - 2 < uVar24) {
          uVar23 = *(undefined4 *)(lVar42 + lStack00000000000001a8 + -0x354);
          uVar85 = *(undefined4 *)(lVar42 + lStack00000000000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      bVar11 = false;
    }
    else {
      lVar33 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar33 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar26 = *(int *)(lVar42 + lVar58 * 0x188 + 0x70);
      *(int *)(lVar42 + lVar58 * 0x188 + 0x178) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(unaff_x26 + 0xd8) < (int)uVar20) || (*(int *)(unaff_x26 + 0xe0) < (int)uVar4)) {
        bVar15 = true;
      }
      else if (*(int *)(unaff_x26 + 0x74) == 5) {
        bVar15 = iVar26 + 1 != *(int *)(unaff_x26 + 0xf0);
      }
      else {
        bVar15 = false;
      }
      if (uVar25 != 0x200b && (bVar18 & 1) == 0) {
        fVar79 = *(float *)(lVar42 + lVar58 * 0x188 + 0x16c);
        if (fVar78 <= fVar79) {
          fVar78 = fVar79;
        }
        if (iVar26 != iStack00000000000000c0) {
          fStack000000000000015c = fVar65;
        }
        if (lVar43 == 0) goto LAB_03793c9c;
        fVar79 = *(float *)(lVar42 + lVar58 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar62)) {
          fStack0000000000000174 = ABS(fVar62);
        }
        FUN_03779650(&stack0x000016a0,lVar43,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar96 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar79 = fVar79 + fVar78 * fVar96;
        iStack00000000000000c0 = iVar26;
        if (fVar79 <= fStack000000000000015c) {
          fStack000000000000015c = fVar79;
        }
      }
      if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar39 < (int)uVar20)) ||
         (bVar11 || bVar15)) {
LAB_03792a80:
        if (!bVar11) goto LAB_03792a8c;
      }
      else {
        if (uVar20 == uVar39) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar35 = FUN_026b97f8(uVar25,0);
          if ((uVar35 & 1) != 0) goto LAB_03792a80;
        }
        lVar42 = *plVar2;
        if (lVar42 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar42 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        lVar42 = lVar42 + lVar58 * 0x188;
        fStack00000000000000d8 = *(float *)(lVar42 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar42 + 0x124);
        bVar11 = fVar78 != 0.0;
        fVar79 = fStack00000000000000d8;
        if (bVar11) {
          fVar79 = fVar78;
        }
        fVar78 = fVar79;
        uVar19 = *(undefined4 *)(lVar42 + 0x174);
        fStack00000000000000cc = 0.0;
        fVar79 = fVar62;
        if (bVar11) {
          fVar79 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar79;
      }
      if (*puVar1 == 1) {
        lVar42 = *plVar2;
        if (lVar42 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar42 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        lVar42 = lVar42 + lVar58 * 0x188;
        uVar23 = *(undefined4 *)(lVar42 + 0x130);
        uVar85 = *(undefined4 *)(lVar42 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,fStack00000000000000cc,uVar23,
                     fStack000000000000015c,0,fStack00000000000000d8,uVar85);
      }
      else {
        if ((uVar20 == uVar52) || ((int)uVar39 <= (int)uVar20)) {
          lVar42 = *plVar2;
          if (lVar42 != 0) {
            lVar33 = lVar58;
            uVar24 = uVar20;
            if (uVar25 == 0x200b || (bVar18 & 1) != 0) {
              lVar33 = lVar50;
              uVar24 = uVar39;
            }
            if (uVar24 < *(uint *)(lVar42 + 0x18)) {
              lVar42 = lVar42 + lVar33 * 0x188;
              uVar23 = *(undefined4 *)(lVar42 + 0x130);
              uVar85 = *(undefined4 *)(lVar42 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar15) {
          lVar42 = *plVar2;
          if (lVar42 != 0) {
            uVar24 = *(uint *)(lVar42 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)(*puVar1 - 1) <= (int)uVar20) {
LAB_03793294:
          bVar11 = true;
          goto LAB_03792b70;
        }
        lVar42 = *plVar2;
        if (lVar42 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar42 + 0x18) <= uVar21) goto thunk_FUN_01ab6c44;
        uVar35 = FUN_03779528(uVar19,*(undefined4 *)(lVar42 + lStack00000000000001a8),0);
        if ((uVar35 & 1) != 0) goto LAB_03793294;
        lVar42 = *plVar2;
        if (lVar42 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar42 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        lVar42 = lVar42 + lVar58 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,fStack00000000000000cc,
                     *(undefined4 *)(lVar42 + 0x130),fStack000000000000015c,0,fStack00000000000000d8
                     ,*(undefined4 *)(lVar42 + 0x16c));
      }
      fVar78 = 0.0;
      bVar11 = false;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar42 = *plVar2;
    if (lVar42 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar42 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
    if (lVar43 == 0) goto LAB_03793c9c;
    uVar24 = *(uint *)(lVar42 + lVar58 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar43,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar79 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar24 >> 6 & 1) == 0) {
      if (bVar14) {
        lVar42 = *plVar2;
        if (lVar42 != 0) {
          if (uVar21 - 2 < *(uint *)(lVar42 + 0x18)) {
            fVar63 = *(float *)(lVar42 + lStack00000000000001a8 + -0x334);
            uVar23 = *(undefined4 *)(lVar42 + lStack00000000000001a8 + -0x354);
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
      lVar42 = *plVar2;
      if ((lVar42 == 0) || (lVar33 = *(long *)(unaff_x19 + 0x15b8), lVar33 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar42 + 0x18) <= uVar20)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar42 + lVar58 * 0x188 + 0x180) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(unaff_x26 + 0xd8) < (int)uVar20) || (*(int *)(unaff_x26 + 0xe0) < (int)uVar4)) {
        bVar15 = true;
      }
      else if (*(int *)(unaff_x26 + 0x74) == 5) {
        bVar15 = *(int *)(lVar42 + lVar58 * 0x188 + 0x70) + 1 != *(int *)(unaff_x26 + 0xf0);
      }
      else {
        bVar15 = false;
      }
      if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar39 < (int)uVar20)) ||
         (!(bool)(~bVar14 & (bVar15 ^ 1U)))) {
LAB_03792cf0:
        if (!bVar14) goto LAB_03792cf8;
      }
      else {
        if (uVar20 == uVar39) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar35 = FUN_026b97f8(uVar25,0);
          if ((uVar35 & 1) != 0) goto LAB_03792cf0;
          lVar42 = *plVar2;
          if (lVar42 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar42 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        lVar42 = lVar42 + lVar58 * 0x188;
        fVar61 = *(float *)(lVar42 + 0x16c);
        fStack00000000000000ec = *(float *)(lVar42 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar42 + 0x68);
        fStack00000000000000a4 = *(float *)(lVar42 + 0x150);
        fVar60 = fVar79 * fVar61 + fStack00000000000000a4;
        fStack00000000000000dc = 0.0;
      }
      uVar24 = *puVar1;
      if (uVar24 == 1) {
LAB_03792ef4:
        lVar33 = *plVar2;
        if (lVar33 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar33 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        lVar33 = lVar33 + lVar58 * 0x188;
      }
      else {
        lVar42 = lVar58;
        if (uVar20 == uVar52) {
          lVar33 = *plVar2;
          if (lVar33 == 0) goto LAB_03793c9c;
          uVar24 = uVar20;
          if ((uVar25 != 0x200b & (bVar18 ^ 1)) == 0) {
            lVar42 = lVar50;
            uVar24 = uVar39;
          }
          if (*(uint *)(lVar33 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)uVar24 <= (int)uVar20) {
LAB_03792fdc:
            if ((int)uVar20 < (int)uVar24) {
              iVar26 = FUN_036d3364(lVar43,0);
              if (*(uint *)(lVar29 + 0x18) <= uVar21) goto thunk_FUN_01ab6c44;
              lVar42 = *(long *)(lVar29 + lStack00000000000001a8 + -0x134);
              if (lVar42 == 0) goto LAB_03793c9c;
              iVar27 = FUN_036d3364(lVar42,0);
              if (iVar26 != iVar27) goto LAB_03792ef4;
            }
            if (!bVar15) {
              bVar14 = true;
              goto LAB_03793338;
            }
            lVar42 = *plVar2;
            if (lVar42 != 0) {
              if (uVar21 - 2 < *(uint *)(lVar42 + 0x18)) {
                fVar63 = *(float *)(lVar42 + lStack00000000000001a8 + -0x334);
                uVar23 = *(undefined4 *)(lVar42 + lStack00000000000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar33 = *plVar2;
          if (lVar33 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar33 + 0x18) <= uVar21) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar33 + lStack00000000000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar96 = *(float *)(lVar33 + lStack00000000000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar35 = FUN_037a2200(fVar63 + fVar96,fStack00000000000000a4,0);
            if ((uVar35 & 1) != 0) {
              uVar24 = *puVar1;
              goto LAB_03792fdc;
            }
            lVar33 = *plVar2;
            if (lVar33 == 0) goto LAB_03793c9c;
          }
          uVar24 = uVar20;
          if ((int)uVar39 < (int)uVar20) {
            lVar42 = lVar50;
            uVar24 = uVar39;
          }
          if (*(uint *)(lVar33 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        }
        lVar33 = lVar33 + lVar42 * 0x188;
      }
      fVar63 = *(float *)(lVar33 + 0x150);
      uVar23 = *(undefined4 *)(lVar33 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(fStack00000000000000ec,fVar60,fStack00000000000000dc,uVar23,
                   fVar61 * fVar79 + fVar63,0,fVar61,fVar61);
      bVar14 = false;
    }
LAB_03793338:
    lVar42 = *plVar2;
    if (lVar42 == 0) goto LAB_03793c9c;
    uVar24 = (uint)*(undefined8 *)(lVar42 + 0x18);
    if (uVar24 <= uVar20) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar42 + lVar58 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar16) {
        FUN_0379dd0c(fStack0000000000000128,fStack0000000000000144,fStack0000000000000124,
                     fStack000000000000012c,fVar59,fStack0000000000000124);
      }
LAB_03793428:
      bVar16 = false;
    }
    else {
      if ((*(int *)(unaff_x26 + 0xd8) < (int)uVar20) || (*(int *)(unaff_x26 + 0xe0) < (int)uVar4)) {
        bVar15 = true;
      }
      else if (*(int *)(unaff_x26 + 0x74) == 5) {
        bVar15 = *(int *)(lVar42 + lVar58 * 0x188 + 0x70) + 1 != *(int *)(unaff_x26 + 0xf0);
      }
      else {
        bVar15 = false;
      }
      if (!bVar16) {
        if (((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) ||
           (((int)uVar39 < (int)uVar20 || (bVar15)))) goto LAB_03793428;
        if (uVar20 == uVar39) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar35 = FUN_026b97f8(uVar25,0);
          if ((uVar35 & 1) != 0) goto LAB_03793428;
        }
        puVar10 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar43 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar43 = *(long *)puVar10;
        }
        lVar42 = *plVar2;
        if (lVar42 == 0) goto LAB_03793c9c;
        uVar24 = (uint)*(undefined8 *)(lVar42 + 0x18);
        if (uVar24 <= uVar20) goto thunk_FUN_01ab6c44;
        pfVar41 = *(float **)(lVar43 + 0xb8);
        fStack0000000000000128 = *pfVar41;
        fStack0000000000000144 = pfVar41[1];
        fStack000000000000012c = pfVar41[2];
        fVar59 = pfVar41[3];
        fStack0000000000000124 = 0.0;
      }
      if (uVar24 <= uVar20) goto thunk_FUN_01ab6c44;
      lVar42 = lVar42 + lVar58 * 0x188;
      fVar96 = *(float *)(lVar42 + 0x130);
      fVar83 = *(float *)(lVar42 + 0x124);
      fVar63 = *(float *)(lVar42 + 0x148);
      fVar86 = *(float *)(lVar42 + 0x14c);
      fVar84 = *(float *)(lVar42 + 0x154);
      fVar79 = *(float *)(lVar42 + 0x164);
      uVar35 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      lVar42 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar35 & 1) == 0) {
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar42);
        }
        fVar98 = (float)FUN_037a1dd8(uVar32,0);
        bVar16 = (bVar18 & 1) == 0;
        if (bVar16) {
          fVar63 = fVar83;
        }
        if (bVar16) {
          fVar79 = fVar96;
        }
        if (fVar63 - fVar98 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar63 - fVar98;
        }
        fVar63 = (float)FUN_037a1de0(uVar32,0);
        if (fStack000000000000012c <= fVar79 + fVar63) {
          fStack000000000000012c = fVar79 + fVar63;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar63 = (float)FUN_037a1df0(uVar32,0);
        if (fVar84 - fVar63 <= fStack0000000000000144) {
          fStack0000000000000144 = fVar84 - fVar63;
        }
        fVar63 = (float)FUN_037a1de8(uVar32,0);
        if (fVar59 <= fVar86 + fVar63) {
          fVar59 = fVar86 + fVar63;
        }
      }
      else {
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar42);
        }
        fVar98 = (float)FUN_037a1de0(uVar32,0);
        if ((bVar18 & 1) == 0) {
          fVar63 = fVar83;
        }
        fVar83 = fStack0000000000000144;
        if (fVar84 <= fStack0000000000000144) {
          fVar83 = fVar84;
        }
        fVar63 = (fVar63 + (fStack000000000000012c - fVar98)) * 0.5;
        if (fVar59 <= fVar86) {
          fVar59 = fVar86;
        }
        FUN_0379dd0c(fStack0000000000000128,fVar83,fStack0000000000000124,fVar63,fVar59,
                     fStack0000000000000124);
        puVar10 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar59 = (float)FUN_037a1df0(uVar45,0);
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000144 = fVar84 - fVar59;
        fStack000000000000012c = (float)FUN_037a1de0(uVar45,0);
        fVar59 = (float)FUN_037a1de8(uVar45,0);
        if ((bVar18 & 1) == 0) {
          fVar79 = fVar96;
        }
        fStack000000000000012c = fVar79 + fStack000000000000012c;
        fStack0000000000000124 = 0.0;
        fStack0000000000000128 = fVar63;
        fVar59 = fVar86 + fVar59;
      }
      if ((((*puVar1 == 1) || (uVar20 == uVar52)) || ((int)uVar39 <= (int)uVar20)) || (bVar15)) {
        FUN_0379dd0c(fStack0000000000000128,fStack0000000000000144,fStack0000000000000124,
                     fStack000000000000012c,fVar59,fStack0000000000000124);
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
    }
    uVar20 = *puVar1;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    lStack00000000000001a8 = lStack00000000000001a8 + 0x188;
    bVar15 = (int)uVar21 < (int)uVar20;
    uVar24 = uVar4;
    uVar21 = uVar21 + 1;
  } while (bVar15);
  iVar26 = uVar4 + 1;
  plVar57 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
LAB_03793a5c:
  *(uint *)(unaff_x25 + 0x10) = uVar20;
  uVar19 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(unaff_x25 + 0x24) = iVar26;
  if ((int)uVar20 < 1 || iVar22 == 0) {
    iVar22 = 1;
  }
  *(int *)(unaff_x25 + 0x1c) = iVar22;
  *(undefined4 *)(unaff_x25 + 0x14) = uVar19;
  *(int *)(unaff_x25 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(unaff_x25 + 0x2c)) {
    uVar45 = 1;
    lVar29 = 0x70;
    do {
      lVar42 = *(long *)(unaff_x25 + 0x58);
      if (lVar42 == 0) goto LAB_03793c9c;
      if (*(int *)(*plVar57 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar42 + 0x18) <= uVar45) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar42 + lVar29,0);
      if (*(int *)(unaff_x26 + 0x100) != 0) {
        lVar42 = *(long *)(unaff_x25 + 0x58);
        if (lVar42 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar57 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar42 + 0x18) <= uVar45) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03785bdc(lVar42 + lVar29,1,0);
      }
      uVar45 = uVar45 + 1;
      lVar29 = lVar29 + 0x50;
    } while ((long)uVar45 < (long)*(int *)(unaff_x25 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


