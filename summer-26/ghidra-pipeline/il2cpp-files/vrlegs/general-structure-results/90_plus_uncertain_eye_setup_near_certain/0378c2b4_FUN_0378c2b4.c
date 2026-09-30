/*
FUNCTION_NAME: FUN_0378c2b4
ENTRY_POINT: 0378c2b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0378c2b4(long param_1,long param_2,long param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  long *plVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined1 uVar27;
  char cVar28;
  uint uVar29;
  float *pfVar30;
  long lVar31;
  float *pfVar32;
  long lVar33;
  long *plVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  char cVar38;
  long *plVar39;
  undefined8 uVar40;
  long lVar41;
  ulong uVar42;
  long *plVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  ulong uVar52;
  float fVar53;
  undefined8 uVar54;
  ulong uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  float fVar63;
  undefined4 uVar64;
  float fVar65;
  float fVar66;
  int local_1ab8;
  long local_1aa0;
  long lStack_1a98;
  long *local_1a90;
  float local_1a88;
  uint local_1a84;
  long local_1a80;
  void *local_1a78;
  long local_1a70;
  long local_1a68;
  float local_1a5c;
  float local_1a58;
  uint local_1a54;
  ulong local_1a50;
  ulong local_1a48;
  float local_1a3c;
  float local_1a38;
  float local_1a34;
  ulong *local_1a30;
  undefined8 local_1a28;
  float local_1a20;
  float local_1a1c;
  float local_1a18;
  float local_1a14;
  float *local_1a10;
  float local_1a08;
  float local_1a04;
  ulong local_1a00;
  float local_19f4;
  undefined8 *local_19f0;
  long *local_19e8;
  ulong *local_19e0;
  ulong local_19d8;
  long local_19d0;
  ulong local_19c8;
  float local_19c0;
  float local_19bc;
  float local_19b8;
  float local_19b4;
  float *local_19b0;
  float *local_19a8;
  float local_199c;
  ulong local_1998;
  long local_1990;
  float local_1988;
  float local_1984;
  long *local_1980;
  undefined8 local_1978;
  float local_1970;
  float local_196c;
  float local_1968;
  float local_1964;
  undefined8 local_1960;
  ulong local_1958;
  long *local_1950;
  undefined8 uStack_1948;
  ulong local_1940;
  long *local_1938;
  long local_1930;
  float local_1924;
  long local_1920;
  long *local_1918;
  float *local_1910;
  float local_1904;
  long local_1900;
  long *local_18f8;
  ulong local_18f0;
  ulong uStack_18e8;
  undefined4 local_18e0;
  ulong local_18d0;
  ulong uStack_18c8;
  undefined4 local_18c0;
  undefined1 auStack_18b0 [920];
  undefined1 auStack_1518 [920];
  undefined8 local_1180;
  undefined8 uStack_1178;
  undefined4 local_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined4 local_1158;
  ulong local_1150;
  ulong uStack_1148;
  undefined8 local_1140;
  undefined8 uStack_1138;
  ulong local_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  ulong local_1110;
  ulong uStack_1108;
  undefined4 local_1100;
  ulong local_10f0;
  ulong uStack_10e8;
  undefined4 local_10e0;
  undefined1 auStack_10d8 [920];
  undefined1 auStack_d40 [920];
  undefined1 auStack_9a8 [920];
  ulong local_610;
  ulong uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  ulong local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  ulong local_570;
  ulong uStack_568;
  undefined4 local_560;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined4 uStack_538;
  undefined4 local_534;
  undefined4 uStack_530;
  undefined8 uStack_52c;
  ulong local_520;
  ulong uStack_518;
  undefined4 local_510;
  uint local_504;
  undefined8 local_500;
  undefined8 local_4f8;
  ulong local_4f0;
  ulong uStack_4e8;
  undefined4 local_4e0;
  uint local_4d4;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  ulong local_470;
  ulong uStack_468;
  undefined4 local_460;
  undefined8 local_458;
  char local_44c [4];
  float local_448;
  uint uStack_444;
  undefined8 local_440;
  ulong uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  ulong local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  long local_a8;
  
  lVar41 = tpidr_el0;
  local_a8 = *(long *)(lVar41 + 0x28);
  if ((DAT_041374f0 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc02b0);
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__);
    FUN_01ab69ac(PTR_DAT_03ccd4e8);
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_int>_Clear__);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_Material>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_ContainsKey__)
    ;
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_TryGetValue__)
    ;
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Clear__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TextStyle>_ContainsKey__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TextStyle>_TryGetValue__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_Texture2D>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_Texture2D>_TryGetValue__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_Texture2D>_set_Item__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__)
    ;
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__);
    FUN_01ab69ac(OVRPlugin_OVRP_1_38_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_3_0_TypeInfo);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_TryGetValue__
                );
    FUN_01ab69ac(OVRPlugin_OVRP_1_42_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_44_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_45_0_TypeInfo);
    DAT_041374f0 = 1;
  }
  local_448 = 0.0;
  uStack_444 = 0;
  local_44c[0] = '\0';
  local_458 = 0;
  uStack_468 = 0;
  local_470 = 0;
  local_460 = 0;
  local_4d4 = 0;
  uStack_4e8 = 0;
  local_4f0 = 0;
  local_4e0 = 0;
  local_4f8 = 0;
  local_500 = 0;
  local_504 = 0;
  uStack_518 = 0;
  local_520 = 0;
  local_510 = 0;
  uStack_568 = 0;
  local_570 = 0;
  local_560 = 0;
  local_580 = 0;
  local_588 = 0;
  local_578 = 0;
  local_590 = 0;
  local_598 = 0;
  local_5a8 = 0;
  local_5b0 = 0;
  local_5a0 = 0;
  local_5c0 = 0;
  local_5c8 = 0;
  local_5b8 = 0;
  uStack_478 = 0;
  local_480 = 0;
  uStack_488 = 0;
  local_490 = 0;
  uStack_498 = 0;
  local_4a0 = 0;
  uStack_4a8 = 0;
  local_4b0 = 0;
  uStack_4b8 = 0;
  local_4c0 = 0;
  uStack_4c8 = 0;
  local_4d0 = 0;
  uStack_52c = 0;
  uStack_530 = 0;
  uStack_538 = 0;
  local_534 = 0;
  uStack_540 = 0;
  uStack_548 = 0;
  local_550 = 0;
  uStack_5d8 = 0;
  local_5e0 = 0;
  uStack_5e8 = 0;
  local_5f0 = 0;
  uStack_5f8 = 0;
  local_600 = 0;
  uStack_608 = 0;
  local_610 = 0;
  memset(auStack_9a8,0,0x398);
  memset(auStack_d40,0,0x398);
  memset(auStack_10d8,0,0x398);
  uStack_10e8 = 0;
  local_10f0 = 0;
  local_10e0 = 0;
  uStack_1108 = 0;
  local_1110 = 0;
  local_1100 = 0;
  if (param_2 == 0) goto LAB_03793c9c;
  uVar40 = *(undefined8 *)(param_2 + 0x40);
  pcVar1 = (char *)(param_1 + 0x1578);
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar6 = PTR_DAT_03cbe438;
  uVar19 = FUN_036d35a8(uVar40,0,0);
  if ((uVar19 & 1) == 0) {
    if (*(long *)(param_2 + 0x40) == 0) goto LAB_03793c9c;
    lVar20 = FUN_03779b3c(*(long *)(param_2 + 0x40),0);
    if (lVar20 != 0) {
      if (param_3 != 0) {
        FUN_037a7b98(param_3,0);
      }
      lVar20 = *(long *)(param_1 + 0x20);
      if ((lVar20 != 0) && (*(long *)(lVar20 + 0x18) != 0)) {
        if ((int)*(long *)(lVar20 + 0x18) == 0) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (*(int *)(lVar20 + 0x24) != 0) {
          plVar39 = (long *)(param_1 + 0x68);
          *plVar39 = *(long *)(param_2 + 0x40);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar39);
          plVar43 = (long *)(param_1 + 0x70);
          *plVar43 = *(long *)(param_2 + 0x48);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar43);
          *(undefined4 *)(param_1 + 0x78) = 0;
          local_410 = 0;
          uStack_418 = 0;
          local_420 = 0;
          uStack_428 = 0;
          local_430 = 0;
          uStack_438 = 0;
          local_440 = 0;
          local_1950 = plVar43;
          FUN_037846a0(*(undefined4 *)(param_1 + 0xd8),&local_440,0,*plVar39,0,*plVar43,0);
          uStack_1148 = uStack_438;
          local_1150 = local_440;
          uStack_1138 = uStack_428;
          local_1140 = local_430;
          uStack_1128 = uStack_418;
          local_1130 = local_420;
          local_1120 = local_410;
          FUN_020aa864(param_1 + 0x80,&local_1150,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_Texture2D>_TryGetValue__);
          plVar43 = (long *)(param_1 + 0xe0);
          *plVar43 = *(long *)(param_2 + 0x50);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar43);
          fVar63 = *(float *)(param_1 + 0xec);
          if (*(long *)(param_2 + 0x40) == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar17 = *(int *)(param_1 + 0xe8);
          local_1a10 = (float *)(param_1 + 0xec);
          local_1918 = plVar39;
          iVar14 = FUN_03776950(*(long *)(param_2 + 0x40) + 0xb0,0);
          if (*(long *)(param_2 + 0x40) == 0) goto LAB_03793c9c;
          fVar44 = (float)FUN_03776960(*(long *)(param_2 + 0x40) + 0xb0,0);
          uVar62 = *(undefined4 *)(param_1 + 0xec);
          cVar28 = *(char *)(param_2 + 0xbd);
          *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
          *(undefined4 *)(param_1 + 0xf4) = uVar62;
          puVar6 = Method_System_Collections_Generic_Dictionary<int,_Texture2D>__ctor__;
          local_1990 = CONCAT44(local_1990._4_4_,DAT_00d389a8);
          fVar49 = DAT_00d389a8;
          if (cVar28 != '\0') {
            fVar49 = 1.0;
          }
          local_440._0_4_ = uVar62;
          FUN_020aa864(param_1 + 0xf8,&local_440,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_Texture2D>__ctor__);
          uStack_444 = 0;
          uVar16 = *(uint *)(param_2 + 0x60);
          *(uint *)(param_1 + 0x124) = uVar16;
          if ((uVar16 & 1) == 0) {
            local_440._0_4_ = *(undefined4 *)(param_2 + 0xec);
          }
          else {
            local_440._0_4_ = 700;
          }
          *(undefined4 *)(param_1 + 0x134) = (undefined4)local_440;
          local_19d0 = lVar41;
          local_1920 = param_3;
          FUN_020aa864(param_1 + 0x138,&local_440,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>__ctor__
                      );
          FUN_037a7f44(param_1 + 0x128,0);
          uVar15 = *(undefined4 *)(param_2 + 0x70);
          *(undefined4 *)(param_1 + 0x158) = uVar15;
          local_440 = CONCAT44(local_440._4_4_,uVar15);
          FUN_020aa864(param_1 + 0x160,&local_440,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>_TryGetValue__);
          *(undefined4 *)(param_1 + 0x180) = 0;
          FUN_020aa7ec(param_1 + 0x188,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_TryGetValue__
                      );
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          pfVar30 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          local_19b8 = *pfVar30;
          local_199c = pfVar30[1];
          local_19bc = pfVar30[2];
          local_1900 = param_2;
          uVar15 = FUN_01b6d7fc(*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84),
                                *(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c),0);
          *(undefined4 *)(param_1 + 0x1a8) = uVar15;
          *(undefined4 *)(param_1 + 0x1ac) = uVar15;
          *(undefined4 *)(param_1 + 0x1b0) = uVar15;
          *(undefined4 *)(param_1 + 0x1b4) = uVar15;
          puVar7 = Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__;
          local_440._0_4_ = uVar15;
          FUN_020aa864(param_1 + 0x1b8,&local_440,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__
                      );
          local_440._0_4_ = *(undefined4 *)(param_1 + 0x1ac);
          FUN_020aa864(param_1 + 0x1d8,&local_440,*(undefined8 *)puVar7);
          local_440 = CONCAT44(local_440._4_4_,*(undefined4 *)(param_1 + 0x1ac));
          FUN_020aa864(param_1 + 0x1f8,&local_440,*(undefined8 *)puVar7);
          uVar15 = *(undefined4 *)(param_1 + 0x1ac);
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                      0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_037a1df8(0);
          uStack_1160 = 0;
          local_1168 = 0;
          local_1158 = 0;
          FUN_037a1fc8(&local_1168,uVar15,0);
          uStack_1178 = uStack_1160;
          local_1180 = local_1168;
          local_1170 = local_1158;
          FUN_020aa864(param_1 + 0x238,&local_1180,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Clear__);
          *(undefined8 *)(param_1 + 0x288) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x288,0);
          FUN_020aa864(param_1 + 0x290,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_Texture2D>_set_Item__);
          plVar39 = local_1918;
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_03793c9c;
          uVar16 = FUN_03779d3c(*(long *)(param_1 + 0x68),0);
          *(uint *)(param_1 + 0x19a4) = uVar16 & 0xff;
          local_440 = CONCAT44(local_440._4_4_,uVar16) & 0xffffffff000000ff;
          FUN_020aa864(param_1 + 0x268,&local_440,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>_ContainsKey__);
          FUN_020aa7ec(param_1 + 0x2c0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_Add__);
          lVar20 = local_1920;
          plVar24 = (long *)PTR_DAT_03cbe438;
          if (DAT_0411f16a == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f16a = '\x01';
          }
          uVar15 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 0x14);
          *(undefined8 *)(param_1 + 0x19a8) =
               *(undefined8 *)(*(long *)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 0xc);
          *(undefined4 *)(param_1 + 0x19b0) = uVar15;
          if (DAT_0411f169 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbdeb8);
            DAT_0411f169 = '\x01';
          }
          lVar41 = local_19d0;
          local_19e8 = (long *)(param_1 + 0x19b4);
          lVar31 = **(long **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
          *(long *)(param_1 + 0x19bc) = (*(long **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
          *local_19e8 = lVar31;
          *(undefined8 *)(param_1 + 0x2e0) = DAT_00d37268;
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_03793c9c;
          FUN_03779650(&local_440,*(long *)(param_1 + 0x68),0);
          memcpy(&local_4d0,&local_440,0x60);
          fVar45 = (float)FUN_03776970(&local_4d0,0);
          lVar31 = *plVar39;
          if (lVar31 == 0) goto LAB_03793c9c;
          local_1980 = plVar43;
          fVar46 = (float)FUN_03776980(lVar31 + 0xb0,0);
          lVar31 = *plVar39;
          if (lVar31 == 0) goto LAB_03793c9c;
          pfVar30 = (float *)(param_1 + 0x324);
          fVar47 = (float)FUN_037769c0(lVar31 + 0xb0,0);
          *(undefined8 *)(param_1 + 0x2f4) = 0;
          *(undefined8 *)(param_1 + 0x2ec) = 0;
          *(undefined4 *)(param_1 + 0x2fc) = 0;
          local_440 = local_440 & 0xffffffff00000000;
          FUN_020aa864(param_1 + 0x300,&local_440,*(undefined8 *)puVar6);
          lVar31 = local_1900;
          local_1a50 = DAT_00d377f0;
          uVar22 = _UNK_00d36c18;
          uVar40 = _DAT_00d36c10;
          *(undefined1 *)(param_1 + 800) = 0;
          pfVar30[0] = 0.0;
          pfVar30[1] = 0.0;
          *(undefined8 *)(param_1 + 0x32c) = 0;
          *(undefined4 *)(param_1 + 0x334) = 0;
          *(undefined4 *)(param_1 + 0x15ac) = 0;
          *(undefined1 *)(param_1 + 0x2e8) = 0;
          *(undefined4 *)(param_1 + 0x19c4) = 0x80000000;
          *(ulong *)(param_1 + 0x338) = local_1a50;
          *(undefined8 *)(param_1 + 0x348) = uVar22;
          *(undefined8 *)(param_1 + 0x340) = uVar40;
          *(undefined4 *)(param_1 + 0x350) = 0;
          if (lVar20 == 0) goto LAB_03793c9c;
          local_18f8 = (long *)CONCAT44(local_18f8._4_4_,uVar62);
          local_1a90 = (long *)(lVar20 + 0x50);
          if (*local_1a90 == 0) goto LAB_03793c9c;
          uVar18 = *(int *)(local_1900 + 0xf0) - 1;
          uVar16 = *(int *)(*local_1a90 + 0x18) - 1;
          if ((int)uVar18 <= (int)uVar16) {
            uVar16 = uVar18;
          }
          local_1a84 = 0;
          if (-1 < (int)uVar18) {
            local_1a84 = uVar16;
          }
          FUN_037a7e30(lVar20,0);
          local_1a88 = *(float *)(lVar31 + 0x28);
          fVar53 = *(float *)(lVar31 + 0x2c);
          fVar66 = *(float *)(param_1 + 0x58);
          fVar57 = *(float *)(param_1 + 0x5c);
          fVar48 = *(float *)(lVar31 + 0x34);
          local_19a8 = (float *)(param_1 + 0x354);
          *local_19a8 = 0.0;
          *(undefined4 *)(param_1 + 0x358) = 0;
          *(undefined4 *)(param_1 + 0x35c) = 0xbf800000;
          puVar6 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
          lVar21 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar21 = *(long *)puVar6;
          }
          *(undefined8 *)(param_1 + 0x360) = **(undefined8 **)(lVar21 + 0xb8);
          *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 8);
          FUN_037a7cb4(lVar20,0);
          *(undefined4 *)(param_1 + 0x378) = 0;
          *(undefined4 *)(param_1 + 0x19c8) = 0;
          *(undefined8 *)(param_1 + 0x370) = 0;
          local_448 = 0.0;
          local_44c[0] = '\0';
          *(undefined2 *)(param_1 + 0x37c) = 0;
          FUN_037a1dd0(&local_458,0xffffffff,0,0);
          local_1a30 = (ulong *)(param_1 + 0x380);
          local_1a54 = (uint)*(byte *)(lVar31 + 0x78);
          FUN_03796df8(param_1,local_1a30,0xffffffff,0xffffffff,lVar20,0);
          local_1a48 = param_1 + 0x718;
          FUN_03796df8(param_1,local_1a48,0xffffffff,0xffffffff,lVar20,0);
          local_1a78 = (void *)(param_1 + 0xab0);
          FUN_03796df8(param_1,local_1a78,0xffffffff,0xffffffff,lVar20,0);
          local_1a00 = param_1 + 0xe48;
          FUN_03796df8(param_1,local_1a00,0xffffffff,0xffffffff,lVar20,0);
          piVar2 = (int *)(param_1 + 0x11e0);
          FUN_03796df8(param_1,piVar2,0xffffffff,0xffffffff,lVar20,0);
          local_1a68 = param_1 + 0x15e8;
          FUN_020aa7ec(local_1a68,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_ContainsKey__
                      );
          *(undefined1 *)
           (*(long *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                     0xb8) + 8) = 0;
          fVar60 = DAT_00d38938;
          local_1a80 = *(long *)(lVar31 + 0x68);
          local_4d4 = 0;
          lVar20 = *(long *)(param_1 + 0x20);
          if (lVar20 == 0) goto LAB_03793c9c;
          lStack_1a98 = param_1 + 0x1a8;
          local_1aa0 = param_1 + 0x1ac;
          local_19f0 = (undefined8 *)(param_1 + 0x19bc);
          local_19b0 = (float *)(param_1 + 0x358);
          local_1a5c = fVar45 - (fVar46 - fVar47);
          local_1940 = local_1940 & 0xffffffff00000000;
          if (fVar66 <= 0.0) {
            fVar66 = 0.0;
          }
          if (fVar57 <= 0.0) {
            fVar57 = 0.0;
          }
          local_1a58 = (fVar63 / (float)iVar14) * fVar44 * fVar49;
          uVar52 = (ulong)(uint)local_1a58;
          local_19e0 = (ulong *)(param_1 + 0x38);
          local_1a3c = local_1a58 * local_1a5c;
          plVar39 = (long *)(local_1920 + 0x30);
          local_1a04 = (float)(iVar17 - 1);
          uVar42 = (ulong)(uint)DAT_00d3879c;
          local_1938 = (long *)(param_1 + 0x1588);
          local_1a70 = param_1 + 0x15a0;
          local_1a38 = DAT_00d38d28;
          local_19b4 = fVar66 + DAT_00d3879c;
          uVar19 = (ulong)(uint)local_19b4;
          uVar55 = (ulong)(uint)(fVar57 + DAT_00d3879c);
          local_1988 = fVar49 * local_18f8._0_4_ * DAT_00d38d28;
          local_1a34 = 1.4013e-45;
          local_1ab8 = 0;
          local_1a28 = local_1a28 & 0xffffffff00000000;
          local_1904 = 0.0;
          local_19d8 = CONCAT44(local_19d8._4_4_,fVar57 + DAT_00d3879c);
          local_1a08 = 1.4013e-45;
          plVar43 = local_1918;
          local_196c = local_19b4;
          local_1910 = pfVar30;
          local_18f8 = plVar39;
LAB_0378cf04:
          lVar21 = local_1920;
          pfVar32 = local_1a10;
          fVar63 = (float)uVar52;
          if ((int)*(uint *)(lVar20 + 0x18) <= (int)local_4d4) {
LAB_03790fec:
            if ((((*(char *)(lVar31 + 0xa8) != '\0') &&
                 (DAT_00d389f8 < *(float *)(param_1 + 0x1598) - *(float *)(param_1 + 0x159c))) &&
                (fVar63 = *local_1a10, fVar63 < *(float *)(lVar31 + 0xb0))) &&
               (*(int *)(param_1 + 0x15a0) < *(int *)(param_1 + 0x15a4))) {
              fVar49 = *(float *)(lVar31 + 0x108);
              if (*(float *)(param_1 + 0x1594) < fVar49 / 100.0) {
                *(undefined4 *)(param_1 + 0x1594) = 0;
              }
              fVar44 = (*(float *)(param_1 + 0x1598) - fVar63) * 0.5;
              if (fVar44 <= DAT_00d38b84) {
                fVar44 = DAT_00d38b84;
              }
              *(float *)(param_1 + 0x159c) = fVar63;
              fVar44 = (fVar63 + fVar44) * 20.0 + 0.5;
              fVar63 = DAT_00d38e60;
              if (fVar44 != INFINITY) {
                fVar63 = (float)(int)fVar44 / 20.0;
              }
              if (fVar49 <= fVar63) {
                fVar63 = fVar49;
              }
LAB_037910ac:
              *(float *)(param_1 + 0xec) = fVar63;
              goto LAB_0378c81c;
            }
            *(undefined1 *)(param_1 + 0x15a8) = 1;
            if (*(int *)(param_1 + 0x15a4) <= *(int *)(param_1 + 0x15a0)) {
              uVar40 = FUN_0276793c(local_1a70,0);
              uVar22 = FUN_0277fa90(pfVar32,0);
              uVar40 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar40,
                                    *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar22,0);
              if (*(int *)(*plVar24 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*plVar24);
              }
              FUN_0367a6ec(uVar40,0);
              plVar39 = local_18f8;
            }
            plVar24 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
            plVar43 = (long *)PTR_DAT_03cbded8;
            if ((*pfVar30 == 0.0) || ((*pfVar30 == 1.4013e-45 && (uStack_444 == 3)))) {
              FUN_0379e288(1,lVar21,0);
              goto LAB_0378c81c;
            }
            lVar41 = *(long *)(lVar21 + 0x58);
            if (lVar41 == 0) goto LAB_03793c9c;
            uVar16 = *(uint *)(param_1 + 0x78);
            if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ +
                        0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (*(uint *)(lVar41 + 0x18) <= uVar16) goto thunk_FUN_01ab6c44;
            FUN_03785b74(lVar41 + (long)(int)uVar16 * 0x50 + 0x20,0,0);
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbded8);
              DAT_0411f172 = '\x01';
            }
            iVar17 = *(int *)(local_1900 + 0x70);
            local_1988 = **(float **)(*plVar43 + 0xb8);
            local_1998 = *(ulong *)(*(float **)(*plVar43 + 0xb8) + 1);
            lVar41 = *(long *)(param_1 + 0x50);
            if (iVar17 < 0x421) {
              if (iVar17 < 0x205) {
                if (iVar17 < 0x109) {
                  local_19c8 = local_1998;
                  local_19c0 = local_1988;
                  if ((iVar17 - 0x101U < 8) && ((1 << (ulong)(iVar17 - 0x101U & 0x1f) & 0x8bU) != 0)
                     ) {
LAB_0379144c:
                    if (lVar41 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar41 + 0x18) < 2) goto thunk_FUN_01ab6c44;
                    uVar40 = *(undefined8 *)(lVar41 + 0x30);
                    if (*(int *)(local_1900 + 0x74) == 5) {
                      lVar20 = *local_1a90;
                      if (lVar20 == 0) goto LAB_03793c9c;
                      if (*(uint *)(lVar20 + 0x18) <= local_1a84) goto thunk_FUN_01ab6c44;
                      fVar63 = *(float *)(lVar20 + (long)(int)local_1a84 * 0x14 + 0x28);
                    }
                    else {
                      fVar63 = *(float *)(param_1 + 0x374);
                    }
                    local_19c0 = local_1a88 + 0.0 + *(float *)(lVar41 + 0x2c);
                    fVar48 = (0.0 - fVar63) - fVar53;
                    goto LAB_037917ec;
                  }
                }
                else if (iVar17 < 0x121) {
                  if ((iVar17 == 0x110) ||
                     (local_19c8 = local_1998, local_19c0 = local_1988, iVar17 == 0x120))
                  goto LAB_0379144c;
                }
                else {
                  local_19c8 = local_1998;
                  local_19c0 = local_1988;
                  if ((iVar17 - 0x201U < 4) && (iVar17 - 0x201U != 2)) goto LAB_037916dc;
                }
              }
              else {
                if (iVar17 < 0x403) {
                  if (iVar17 < 0x211) {
                    if ((iVar17 == 0x208) ||
                       (local_19c8 = local_1998, local_19c0 = local_1988, iVar17 == 0x210))
                    goto LAB_037916dc;
                    goto LAB_037917fc;
                  }
                  if (iVar17 != 0x220) {
                    local_19c8 = local_1998;
                    local_19c0 = local_1988;
                    if (iVar17 - 0x401U < 2) goto LAB_03791588;
                    goto LAB_037917fc;
                  }
LAB_037916dc:
                  if (lVar41 == 0) goto LAB_03793c9c;
                  if ((*(int *)(lVar41 + 0x18) == 1) || (*(int *)(lVar41 + 0x18) == 0))
                  goto thunk_FUN_01ab6c44;
                  fVar63 = (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
                  uVar40 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(lVar41 + 0x24) +
                                    (float)*(undefined8 *)(lVar41 + 0x30)) * 0.5);
                  if (*(int *)(local_1900 + 0x74) == 5) {
                    lVar41 = *local_1a90;
                    if (lVar41 != 0) {
                      if (local_1a84 < *(uint *)(lVar41 + 0x18)) {
                        lVar41 = lVar41 + (long)(int)local_1a84 * 0x14;
                        local_19c0 = local_1a88 + 0.0 + fVar63;
                        fVar48 = ((fVar53 + *(float *)(lVar41 + 0x28) + *(float *)(lVar41 + 0x30)) -
                                 fVar48) * -0.5 + 0.0;
                        goto LAB_037917ec;
                      }
                      goto thunk_FUN_01ab6c44;
                    }
                    goto LAB_03793c9c;
                  }
                  local_19c0 = local_1a88 + 0.0 + fVar63;
                  fVar48 = ((fVar53 + *(float *)(param_1 + 0x374) + local_448) - fVar48) * -0.5 +
                           0.0;
                }
                else {
                  if (iVar17 < 0x409) {
                    if (iVar17 != 0x404) {
                      bVar12 = iVar17 == 0x408;
                      goto LAB_03791574;
                    }
                  }
                  else if (iVar17 != 0x410) {
                    bVar12 = iVar17 == 0x420;
LAB_03791574:
                    local_19c8 = local_1998;
                    local_19c0 = local_1988;
                    if (!bVar12) goto LAB_037917fc;
                  }
LAB_03791588:
                  if (lVar41 == 0) goto LAB_03793c9c;
                  if (*(int *)(lVar41 + 0x18) == 0) goto thunk_FUN_01ab6c44;
                  uVar40 = *(undefined8 *)(lVar41 + 0x24);
                  fVar63 = local_448;
                  if (*(int *)(local_1900 + 0x74) == 5) {
                    lVar20 = *local_1a90;
                    if (lVar20 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar20 + 0x18) <= local_1a84) goto thunk_FUN_01ab6c44;
                    fVar63 = *(float *)(lVar20 + (long)(int)local_1a84 * 0x14 + 0x30);
                  }
                  local_19c0 = local_1a88 + 0.0 + *(float *)(lVar41 + 0x20);
                  fVar48 = fVar48 + (0.0 - fVar63);
                }
LAB_037917ec:
                local_19c8 = CONCAT44((float)((ulong)uVar40 >> 0x20) + 0.0,(float)uVar40 + fVar48);
              }
            }
            else if (iVar17 < 0x1005) {
              if (iVar17 < 0x809) {
                local_19c8 = local_1998;
                local_19c0 = local_1988;
                if ((iVar17 - 0x801U < 8) && ((1 << (ulong)(iVar17 - 0x801U & 0x1f) & 0x8bU) != 0))
                {
LAB_037913b0:
                  if (lVar41 != 0) {
                    if ((*(int *)(lVar41 + 0x18) != 1) && (*(int *)(lVar41 + 0x18) != 0)) {
                      local_19c8 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)
                                            ) * 0.5 + 0.0,
                                            ((float)*(undefined8 *)(lVar41 + 0x24) +
                                            (float)*(undefined8 *)(lVar41 + 0x30)) * 0.5 + 0.0);
                      local_19c0 = local_1a88 + 0.0 +
                                   (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
                      goto LAB_037917fc;
                    }
                    goto thunk_FUN_01ab6c44;
                  }
                  goto LAB_03793c9c;
                }
              }
              else if (iVar17 < 0x821) {
                if ((iVar17 == 0x810) ||
                   (local_19c8 = local_1998, local_19c0 = local_1988, iVar17 == 0x820))
                goto LAB_037913b0;
              }
              else {
                local_19c8 = local_1998;
                local_19c0 = local_1988;
                if ((iVar17 - 0x1001U < 4) && (iVar17 - 0x1001U != 2)) goto LAB_03791644;
              }
            }
            else if (iVar17 < 0x2003) {
              if (iVar17 < 0x1011) {
                if ((iVar17 == 0x1008) ||
                   (local_19c8 = local_1998, local_19c0 = local_1988, iVar17 == 0x1010))
                goto LAB_03791644;
              }
              else {
                if (iVar17 == 0x1020) {
LAB_03791644:
                  if (lVar41 != 0) {
                    if ((*(int *)(lVar41 + 0x18) != 1) && (*(int *)(lVar41 + 0x18) != 0)) {
                      uVar40 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)) *
                                        0.5,((float)*(undefined8 *)(lVar41 + 0x24) +
                                            (float)*(undefined8 *)(lVar41 + 0x30)) * 0.5);
                      local_19c0 = local_1a88 + 0.0 +
                                   (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
                      fVar48 = 0.0 - ((fVar53 + *(float *)(param_1 + 0x36c) +
                                      *(float *)(param_1 + 0x364)) - fVar48) * 0.5;
                      goto LAB_037917ec;
                    }
                    goto thunk_FUN_01ab6c44;
                  }
                  goto LAB_03793c9c;
                }
                local_19c8 = local_1998;
                local_19c0 = local_1988;
                if (iVar17 - 0x2001U < 2) goto LAB_037914ec;
              }
            }
            else {
              if (iVar17 < 0x2009) {
                if (iVar17 != 0x2004) {
                  iVar14 = 0x2008;
                  goto LAB_037914d4;
                }
              }
              else if (iVar17 != 0x2010) {
                iVar14 = 0x2020;
LAB_037914d4:
                local_19c8 = local_1998;
                local_19c0 = local_1988;
                if (iVar17 != iVar14) goto LAB_037917fc;
              }
LAB_037914ec:
              if (lVar41 == 0) goto LAB_03793c9c;
              if ((*(int *)(lVar41 + 0x18) == 1) || (*(int *)(lVar41 + 0x18) == 0))
              goto thunk_FUN_01ab6c44;
              local_19c8 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)) * 0.5 +
                                    0.0,((float)*(undefined8 *)(lVar41 + 0x24) +
                                        (float)*(undefined8 *)(lVar41 + 0x30)) * 0.5 +
                                        (0.0 - ((*(float *)(param_1 + 0x370) - fVar53) - fVar48) *
                                               0.5));
              local_19c0 = local_1a88 + 0.0 +
                           (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
            }
LAB_037917fc:
            local_19e0 = (ulong *)FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            local_19d8 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                        + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)
                                  Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                                );
            }
            FUN_037a1df8(0);
            FUN_037a1fc8(&local_470,0x4000ffff,0);
            fVar63 = *pfVar30;
            if ((int)fVar63 < 1) {
              iVar17 = 0;
              iVar14 = 0;
              goto LAB_03793a5c;
            }
            if ((long *)*plVar39 != (long *)0x0) {
              local_196c = 0.0;
              local_1a08 = 0.0;
              local_1a38 = 0.0;
              local_19e8 = (long *)(lVar21 + 0x38);
              local_19f4 = local_19b8;
              local_19f0 = (undefined8 *)((ulong)local_19f0 & 0xffffffff00000000);
              local_1a3c = 0.0;
              local_1a28 = (ulong)&local_470 | 4;
              local_1a30 = &local_420;
              uVar62 = 0;
              fVar45 = 0.0;
              fVar44 = 0.0;
              local_1a48 = (ulong)&local_10f0 | 4;
              fVar49 = 1.4013e-45;
              local_1960 = 0;
              local_19a8 = (float *)((ulong)local_19a8 & 0xffffffff00000000);
              local_1a50 = local_1a50 & 0xffffffff00000000;
              local_1978 = 0;
              local_1a20 = 0.0;
              local_1968 = 0.0;
              local_1938 = (long *)0x2fc;
              local_19b4 = local_19b8;
              local_19b0 = (float *)CONCAT44(local_19b0._4_4_,local_199c);
              local_1a18 = local_199c;
              local_1a14 = local_19bc;
              local_1a10 = (float *)CONCAT44(local_1a10._4_4_,local_19b8);
              local_1a04 = local_19bc;
              local_1a00 = CONCAT44(local_1a00._4_4_,local_199c);
              local_1a34 = DAT_00d38d70;
              local_1984 = DAT_00d38d70;
              uVar16 = 0;
              local_1918 = (long *)*plVar39;
              goto LAB_0379194c;
            }
            goto LAB_03793c9c;
          }
          if (*(uint *)(lVar20 + 0x18) <= local_4d4) goto thunk_FUN_01ab6c44;
          uVar16 = *(uint *)(lVar20 + (long)(int)local_4d4 * 0x10 + 0x24);
          if (uVar16 == 0) goto LAB_03790fec;
          uStack_444 = uVar16;
          if (5 < (int)local_1904) {
            uVar40 = FUN_0278d4e8(&uStack_444,0);
            uVar22 = FUN_0276793c(&local_4d4,0);
            uVar40 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar40,
                                  *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar22,0);
            if (*(int *)(*plVar24 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*plVar24);
            }
            FUN_0367ae18(uVar40,0);
            local_458 = CONCAT44(3,*pfVar30);
            plVar39 = local_18f8;
          }
          if (uStack_444 == 0x1a) goto LAB_0378d260;
          if ((uStack_444 == 0x3c) && (*(char *)(lVar31 + 0xb5) != '\0')) {
            pcVar1[0] = '\x01';
            pcVar1[1] = '\x01';
            uVar23 = FUN_037974c0(param_1,*(undefined8 *)(param_1 + 0x20),local_4d4 + 1,&local_504,
                                  lVar31,local_1920,0);
            if (((uVar23 & 1) != 0) && (local_4d4 = local_504, *pcVar1 == '\x01'))
            goto LAB_0378d260;
          }
          else {
            lVar41 = *plVar39;
            if (lVar41 == 0) goto LAB_03793c9c;
            if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
            lVar41 = lVar41 + (long)(int)*pfVar30 * 0x188;
            *pcVar1 = *(char *)(lVar41 + 0x28);
            *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar41 + 0x60);
            *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar41 + 0x40);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar43);
          }
          lVar41 = *plVar39;
          if (lVar41 == 0) goto LAB_03793c9c;
          fVar49 = *(float *)(param_1 + 0x324);
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar49) goto thunk_FUN_01ab6c44;
          lVar20 = (long)(int)fVar49;
          uVar62 = *(undefined4 *)(param_1 + 0x78);
          cVar28 = *(char *)(lVar41 + lVar20 * 0x188 + 100);
          *(undefined1 *)(param_1 + 0x1579) = 0;
          if ((float)local_458 == fVar49) {
            bVar12 = true;
            uStack_444 = local_458._4_4_;
            *pcVar1 = '\x01';
            if (local_458._4_4_ == 0x2026) {
              *(undefined8 *)(lVar41 + lVar20 * 0x188 + 0x30) = *(undefined8 *)(param_1 + 0x1a00);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              plVar39 = local_18f8;
              lVar41 = *local_18f8;
              if (lVar41 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar41 + 0x18) <= *(uint *)(param_1 + 0x324)) goto thunk_FUN_01ab6c44;
              lVar41 = lVar41 + (long)(int)*(uint *)(param_1 + 0x324) * 0x188;
              *(undefined1 *)(lVar41 + 0x28) = 1;
              *(undefined8 *)(lVar41 + 0x40) = *(undefined8 *)(param_1 + 0x1a08);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar41 = *plVar39;
              if (lVar41 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar41 + 0x18) <= *(uint *)(param_1 + 0x324)) goto thunk_FUN_01ab6c44;
              *(undefined8 *)(lVar41 + (long)(int)*(uint *)(param_1 + 0x324) * 0x188 + 0x58) =
                   *(undefined8 *)(param_1 + 0x1a10);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar41 = *plVar39;
              if (lVar41 == 0) goto LAB_03793c9c;
              fVar49 = *pfVar30;
              if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar49) goto thunk_FUN_01ab6c44;
              bVar12 = true;
              *(undefined4 *)(lVar41 + (long)(int)fVar49 * 0x188 + 0x60) =
                   *(undefined4 *)(param_1 + 0x1a18);
              *(undefined1 *)
               (*(long *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__
                         + 0xb8) + 8) = 1;
              local_458 = CONCAT44(3,(int)fVar49 + 1);
            }
            else if (local_458._4_4_ == 3) {
              if ((*local_1918 == 0) || (lVar31 = FUN_03779b3c(*local_1918,0), lVar31 == 0))
              goto LAB_03793c9c;
              local_1168 = CONCAT44(local_1168._4_4_,3);
              FUN_0219b634(lVar31,&local_1168,&local_440,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                          );
              if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar49) goto thunk_FUN_01ab6c44;
              *(ulong *)(lVar41 + lVar20 * 0x188 + 0x30) = local_440;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              bVar12 = true;
              *(undefined1 *)
               (*(long *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__
                         + 0xb8) + 8) = 1;
              fVar49 = *pfVar30;
            }
          }
          else {
            bVar12 = false;
          }
          uVar16 = uStack_444;
          lVar31 = local_1900;
          plVar43 = local_1918;
          if (((int)fVar49 < *(int *)(local_1900 + 0xe4)) && (uStack_444 != 3)) {
            lVar41 = *local_18f8;
            if (lVar41 != 0) {
              if ((uint)fVar49 < (uint)*(float *)(lVar41 + 0x18)) {
                lVar41 = lVar41 + (long)(int)fVar49 * 0x188;
                *(undefined1 *)(lVar41 + 0x1a0) = 0;
                *(undefined2 *)(lVar41 + 0x20) = 0x200b;
                *(undefined4 *)(lVar41 + 0x6c) = 0;
                *pfVar30 = (float)((int)fVar49 + 1);
                plVar39 = local_18f8;
                lVar41 = local_19d0;
                goto LAB_0378d260;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          cVar38 = *pcVar1;
          if (cVar38 == '\x01') {
            uVar18 = *(uint *)(param_1 + 0x124);
            if ((uVar18 >> 4 & 1) == 0) {
              if ((uVar18 >> 3 & 1) == 0) {
                local_1964 = 1.0;
                if ((uVar18 >> 5 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar23 = FUN_026b812c(uVar16,0);
                  uVar16 = uStack_444;
                  if ((uVar23 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uStack_444 = FUN_026b8410(uVar16,0);
                    uStack_444 = uStack_444 & 0xffff;
                    local_1964 = fVar60;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar23 = FUN_026b8070(uVar16,0);
                uVar16 = uStack_444;
                local_1964 = 1.0;
                if ((uVar23 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uStack_444 = FUN_026b8594(uVar16,0);
                  goto LAB_0378d3d0;
                }
              }
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar23 = FUN_026b812c(uVar16,0);
              uVar16 = uStack_444;
              local_1964 = 1.0;
              if ((uVar23 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uStack_444 = FUN_026b8410(uVar16,0);
LAB_0378d3d0:
                uStack_444 = uStack_444 & 0xffff;
              }
            }
            cVar38 = *pcVar1;
          }
          else {
            local_1964 = 1.0;
          }
          plVar39 = local_18f8;
          plVar34 = local_1938;
          plVar9 = local_1980;
          fVar49 = (float)uVar42;
          fVar45 = (float)uVar55;
          fVar44 = (float)uVar19;
          if (cVar38 == '\x01') {
            lVar41 = *local_18f8;
            if (lVar41 == 0) goto LAB_03793c9c;
            if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
            *local_1938 = *(long *)(lVar41 + (long)(int)*pfVar30 * 0x188 + 0x30);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(local_1938);
            fVar49 = (float)uVar42;
            lVar41 = local_19d0;
            if (*plVar34 == 0) goto LAB_0378d260;
            lVar41 = *plVar39;
            if (lVar41 == 0) goto LAB_03793c9c;
            if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
            *plVar43 = *(long *)(lVar41 + (long)(int)*pfVar30 * 0x188 + 0x40);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar43);
            lVar41 = *plVar39;
            if (lVar41 == 0) goto LAB_03793c9c;
            if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
            *local_1950 = *(long *)(lVar41 + (long)(int)*pfVar30 * 0x188 + 0x58);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar41 = *plVar39;
            if (lVar41 == 0) goto LAB_03793c9c;
            fVar44 = *pfVar30;
            fVar63 = *(float *)(lVar41 + 0x18);
            if ((uint)fVar63 <= (uint)fVar44) goto thunk_FUN_01ab6c44;
            *(undefined4 *)(param_1 + 0x78) =
                 *(undefined4 *)(lVar41 + (long)(int)fVar44 * 0x188 + 0x60);
            if (bVar12) {
              lVar20 = *(long *)(param_1 + 0x20);
              if (lVar20 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar20 + 0x18) <= local_4d4) goto thunk_FUN_01ab6c44;
              if ((*(int *)(lVar20 + (long)(int)local_4d4 * 0x10 + 0x24) != 10) ||
                 (fVar44 == *(float *)(param_1 + 0x328))) goto LAB_0378d570;
              if ((uint)fVar63 <= (int)fVar44 - 1U) goto thunk_FUN_01ab6c44;
              if (*plVar43 == 0) goto LAB_03793c9c;
              fVar45 = *(float *)(lVar41 + (long)(int)((int)fVar44 - 1U) * 0x188 + 0x68);
              iVar17 = FUN_03776950(*plVar43 + 0xb0,0);
              lVar41 = *plVar43;
            }
            else {
LAB_0378d570:
              if (*plVar43 == 0) goto LAB_03793c9c;
              fVar45 = *(float *)(param_1 + 0xf4);
              iVar17 = FUN_03776950(*plVar43 + 0xb0,0);
              lVar41 = *(long *)(param_1 + 0x68);
            }
            if (lVar41 == 0) goto LAB_03793c9c;
            fVar47 = (float)FUN_03776960(lVar41 + 0xb0,0);
            fVar46 = (float)local_1990;
            if (*(char *)(lVar31 + 0xbd) != '\0') {
              fVar46 = 1.0;
            }
            fVar63 = 0.0;
            uVar62 = 0;
            if (!(bool)(bVar12 & uStack_444 == 0x2026)) {
              if (*plVar43 == 0) goto LAB_03793c9c;
              uVar62 = FUN_03776980(*plVar43 + 0xb0,0);
              if (*plVar43 == 0) goto LAB_03793c9c;
              fVar63 = (float)FUN_037769c0(*plVar43 + 0xb0,0);
            }
            lVar41 = *(long *)(param_1 + 0x1588);
            if (lVar41 == 0) goto LAB_03793c9c;
            local_1960 = CONCAT44(local_1960._4_4_,uVar62);
            local_1970 = fVar63;
            if (*(long *)(lVar41 + 0x20) == 0) goto LAB_03793c9c;
            fVar66 = *(float *)(param_1 + 0xf0);
            fVar50 = *(float *)(lVar41 + 0x2c);
            fVar63 = (float)FUN_03776ea8(*(long *)(lVar41 + 0x20),0);
            if (*plVar43 == 0) goto LAB_03793c9c;
            fVar59 = (float)FUN_037769b0(*plVar43 + 0xb0,0);
            if (*plVar43 == 0) goto LAB_03793c9c;
            fVar44 = *(float *)(param_1 + 0xf0);
            fVar51 = (float)FUN_03776960(*plVar43 + 0xb0,0);
            lVar41 = *local_18f8;
            if (lVar41 == 0) goto LAB_03793c9c;
            fVar58 = *(float *)(param_1 + 0x324);
            if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar58) goto thunk_FUN_01ab6c44;
            lVar20 = lVar41 + (long)(int)fVar58 * 0x188;
            fVar46 = ((local_1964 * fVar45) / (float)iVar17) * fVar47 * fVar46;
            fVar63 = fVar46 * fVar66 * fVar50 * fVar63;
            *(undefined1 *)(lVar20 + 0x28) = 1;
            *(float *)(lVar20 + 0x16c) = fVar63;
            fVar45 = *(float *)(param_1 + 0xd8);
            fVar44 = fVar46 * fVar59 * fVar44;
            fVar51 = fVar44 * fVar51;
            local_1940 = CONCAT44(local_1940._4_4_,fVar45);
            plVar39 = local_18f8;
LAB_0378db90:
            uVar52 = (ulong)(uint)fVar63;
            if (uStack_444 == 3 || uStack_444 == 0xad) {
              uVar52 = 0;
            }
          }
          else {
            if (cVar38 == '\x02') {
              lVar41 = *local_18f8;
              if (lVar41 != 0) {
                if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
                plVar39 = *(long **)(lVar41 + (long)(int)*pfVar30 * 0x188 + 0x30);
                if (plVar39 != (long *)0x0) {
                  bVar13 = *(byte *)(*(long *)
                                      Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__
                                    + 0x130);
                  if ((*(byte *)(*plVar39 + 0x130) < bVar13) ||
                     (*(long *)(*(long *)(*plVar39 + 200) + (ulong)bVar13 * 8 + -8) !=
                      *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__
                     )) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6ee0(plVar39);
                  }
                  plVar24 = (long *)FUN_03783144(plVar39,0);
                  if (plVar24 == (long *)0x0) {
                    plVar24 = (long *)0x0;
                    *plVar9 = 0;
                  }
                  else {
                    lVar41 = *(long *)
                              Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
                    bVar13 = *(byte *)(lVar41 + 0x130);
                    if (*(byte *)(*plVar24 + 0x130) < bVar13) {
                      plVar34 = (long *)0x0;
                    }
                    else {
                      plVar34 = plVar24;
                      if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar13 * 8 + -8) != lVar41) {
                        plVar34 = (long *)0x0;
                      }
                    }
                    *plVar9 = (long)plVar34;
                    if (*(byte *)(*plVar24 + 0x130) < bVar13) {
                      plVar24 = (long *)0x0;
                    }
                    else if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar13 * 8 + -8) != lVar41
                            ) {
                      plVar24 = (long *)0x0;
                    }
                  }
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,plVar24);
                  iVar17 = FUN_0377acf0(plVar39,0);
                  *(int *)(param_1 + 0x157c) = iVar17;
                  if (uStack_444 == 0x3c) {
                    uStack_444 = iVar17 + 0xe000;
                  }
                  else {
                    uVar15 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    *(undefined4 *)(param_1 + 0x1580) = uVar15;
                  }
                  if (*(long *)(param_1 + 0x68) != 0) {
                    fVar63 = *(float *)(param_1 + 0xf4);
                    FUN_03779650(&local_440,*(long *)(param_1 + 0x68),0);
                    memcpy(&local_4d0,&local_440,0x60);
                    iVar17 = FUN_03776950(&local_4d0,0);
                    if (*plVar43 != 0) {
                      FUN_03779650(&local_440,*plVar43,0);
                      memcpy(&local_4d0,&local_440,0x60);
                      fVar49 = (float)FUN_03776960(&local_4d0,0);
                      fVar46 = (float)local_1990;
                      if (*(char *)(lVar31 + 0xbd) != '\0') {
                        fVar46 = 1.0;
                      }
                      if (*local_1980 == 0) goto LAB_03793c9c;
                      fVar46 = (fVar63 / (float)iVar17) * fVar49 * fVar46;
                      iVar17 = FUN_03776950(*local_1980 + 0x48,0);
                      plVar24 = local_1980;
                      fVar63 = *(float *)(param_1 + 0xf4);
                      if (iVar17 < 1) {
                        if (*plVar43 == 0) goto LAB_03793c9c;
                        iVar17 = FUN_03776950(*plVar43 + 0xb0,0);
                        if (*plVar43 == 0) goto LAB_03793c9c;
                        fVar44 = (float)FUN_03776960(*plVar43 + 0xb0,0);
                        fVar47 = (float)local_1990;
                        if (*(char *)(lVar31 + 0xbd) != '\0') {
                          fVar47 = 1.0;
                        }
                        if (*plVar43 == 0) goto LAB_03793c9c;
                        fVar66 = (float)FUN_03776980(*plVar43 + 0xb0,0);
                        if (plVar39[4] == 0) goto LAB_03793c9c;
                        local_1924 = fVar63;
                        FUN_03776e6c(&local_440,plVar39[4],0);
                        uStack_518 = uStack_438;
                        local_520 = local_440;
                        local_510 = (undefined4)local_430;
                        uVar15 = FUN_03776c9c(&local_520,0);
                        if (plVar39[4] == 0) goto LAB_03793c9c;
                        local_1940 = CONCAT44(local_1940._4_4_,uVar15);
                        local_1930 = CONCAT44(local_1930._4_4_,*(undefined4 *)((long)plVar39 + 0x2c)
                                             );
                        fVar45 = (float)FUN_03776ea8(plVar39[4],0);
                        if (*plVar43 == 0) goto LAB_03793c9c;
                        fVar50 = (float)FUN_03776980(*plVar43 + 0xb0,0);
                        if (*plVar43 == 0) goto LAB_03793c9c;
                        fVar63 = (float)FUN_037769b0(*plVar43 + 0xb0,0);
                        if (*plVar43 == 0) goto LAB_03793c9c;
                        fVar49 = *(float *)(param_1 + 0xf0);
                        fVar51 = (float)FUN_03776960(*plVar43 + 0xb0,0);
                        if (*(long *)(param_1 + 0x68) == 0) goto LAB_03793c9c;
                        fVar49 = fVar46 * fVar63 * fVar49;
                        fVar44 = (local_1924 / (float)iVar17) * fVar44;
                        fVar45 = (fVar66 / (float)local_1940) * (float)local_1930 * fVar45;
                        fVar51 = fVar49 * fVar51;
                        fVar63 = fVar44 * fVar47 * fVar45;
                        fVar46 = (fVar44 * fVar47) / fVar63;
                        fVar50 = fVar46 * fVar50;
                        fVar47 = (float)FUN_037769c0(*(long *)(param_1 + 0x68) + 0xb0,0);
                        fVar46 = fVar46 * fVar47;
                      }
                      else {
                        if (*local_1980 == 0) goto LAB_03793c9c;
                        iVar17 = FUN_03776950(*local_1980 + 0x48,0);
                        if (*plVar24 == 0) goto LAB_03793c9c;
                        fVar44 = (float)FUN_03776960(*plVar24 + 0x48,0);
                        if (plVar39[4] == 0) goto LAB_03793c9c;
                        fVar45 = *(float *)((long)plVar39 + 0x2c);
                        fVar47 = (float)local_1990;
                        if (*(char *)(lVar31 + 0xbd) != '\0') {
                          fVar47 = 1.0;
                        }
                        fVar66 = (float)FUN_03776ea8(plVar39[4],0);
                        plVar24 = local_1980;
                        if (*local_1980 == 0) goto LAB_03793c9c;
                        uVar15 = FUN_03776980(*local_1980 + 0x48,0);
                        lVar41 = *plVar24;
                        local_1960 = CONCAT44(local_1960._4_4_,uVar15);
                        if (lVar41 == 0) goto LAB_03793c9c;
                        fVar50 = (float)FUN_037769b0(lVar41 + 0x48,0);
                        lVar41 = *plVar24;
                        if (lVar41 == 0) goto LAB_03793c9c;
                        fVar49 = *(float *)(param_1 + 0xf0);
                        fVar51 = (float)FUN_03776960(lVar41 + 0x48,0);
                        if (*(long *)(param_1 + 0xe0) == 0) goto LAB_03793c9c;
                        fVar49 = fVar46 * fVar50 * fVar49;
                        fVar44 = (fVar63 / (float)iVar17) * fVar44;
                        fVar45 = fVar45 * fVar66;
                        fVar51 = fVar49 * fVar51;
                        fVar63 = fVar44 * fVar47 * fVar45;
                        fVar46 = (float)FUN_037769c0(*(long *)(param_1 + 0xe0) + 0x48,0);
                        fVar50 = (float)local_1960;
                      }
                      *local_1938 = (long)plVar39;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (local_1938,plVar39);
                      plVar39 = local_18f8;
                      pfVar30 = local_1910;
                      lVar41 = *local_18f8;
                      if (lVar41 != 0) {
                        if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*local_1910)
                        goto thunk_FUN_01ab6c44;
                        lVar41 = lVar41 + (long)(int)*local_1910 * 0x188;
                        *(undefined1 *)(lVar41 + 0x28) = 2;
                        *(float *)(lVar41 + 0x16c) = fVar63;
                        *(long *)(lVar41 + 0x48) = *local_1980;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        lVar41 = *plVar39;
                        if (lVar41 != 0) {
                          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30)
                          goto thunk_FUN_01ab6c44;
                          *(long *)(lVar41 + (long)(int)*pfVar30 * 0x188 + 0x40) = *plVar43;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          lVar41 = *plVar39;
                          if (lVar41 != 0) {
                            fVar58 = *pfVar30;
                            local_1960 = CONCAT44(local_1960._4_4_,fVar50);
                            local_1970 = fVar46;
                            if ((uint)fVar58 < (uint)*(float *)(lVar41 + 0x18)) {
                              *(undefined4 *)(lVar41 + (long)(int)fVar58 * 0x188 + 0x60) =
                                   *(undefined4 *)(param_1 + 0x78);
                              *(undefined4 *)(param_1 + 0x78) = uVar62;
                              local_1940 = local_1940 & 0xffffffff00000000;
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
            lVar41 = *local_18f8;
            fVar51 = 0.0;
            if (uStack_444 == 3 || uStack_444 == 0xad) {
              uVar52 = 0;
            }
            if (lVar41 == 0) goto LAB_03793c9c;
            fVar58 = *pfVar30;
            local_1960 = local_1960 & 0xffffffff00000000;
            local_1970 = 0.0;
          }
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar58) goto thunk_FUN_01ab6c44;
          lVar41 = lVar41 + (long)(int)fVar58 * 0x188;
          *(short *)(lVar41 + 0x20) = (short)uStack_444;
          *(undefined4 *)(lVar41 + 0x68) = *(undefined4 *)(param_1 + 0xf4);
          *(undefined4 *)(lVar41 + 0x170) = *(undefined4 *)(param_1 + 0x1ac);
          lVar41 = *plVar39;
          if (lVar41 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar41 + 0x18) <= *(uint *)(param_1 + 0x324)) goto thunk_FUN_01ab6c44;
          *(undefined4 *)(lVar41 + (long)(int)*(uint *)(param_1 + 0x324) * 0x188 + 0x174) =
               *(undefined4 *)(param_1 + 0x1b0);
          lVar41 = *plVar39;
          if (lVar41 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar41 + 0x18) <= *(uint *)(param_1 + 0x324)) goto thunk_FUN_01ab6c44;
          *(undefined4 *)(lVar41 + (long)(int)*(uint *)(param_1 + 0x324) * 0x188 + 0x17c) =
               *(undefined4 *)(param_1 + 0x1b4);
          lVar41 = *plVar39;
          if (lVar41 == 0) goto LAB_03793c9c;
          uStack_438 = local_19e0[1];
          local_440 = *local_19e0;
          local_430 = CONCAT44(local_430._4_4_,(int)local_19e0[2]);
          if (*(uint *)(lVar41 + 0x18) <= *(uint *)(param_1 + 0x324)) goto thunk_FUN_01ab6c44;
          lVar41 = lVar41 + (long)(int)*(uint *)(param_1 + 0x324) * 0x188;
          *(int *)(lVar41 + 0x198) = (int)local_19e0[2];
          *(ulong *)(lVar41 + 400) = uStack_438;
          *(ulong *)(lVar41 + 0x188) = local_440;
          lVar41 = *plVar39;
          if (lVar41 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
          lVar41 = lVar41 + (long)(int)*pfVar30 * 0x188;
          lVar20 = *(long *)(lVar41 + 0x38);
          *(undefined4 *)(lVar41 + 0x19c) = *(undefined4 *)(param_1 + 0x124);
          if ((lVar20 == 0) &&
             ((*local_1938 == 0 || (lVar20 = *(long *)(*local_1938 + 0x20), lVar20 == 0))))
          goto LAB_03793c9c;
          FUN_03776e6c(&local_440,lVar20,0);
          uVar16 = uStack_444;
          uStack_1108 = uStack_438;
          local_1110 = local_440;
          local_1100 = (undefined4)local_430;
          uStack_4e8 = uStack_438;
          local_4f0 = local_440;
          local_4e0 = (undefined4)local_430;
          if (uStack_444 >> 0x10 == 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_026b63d8(uVar16,0);
            uVar16 = uVar16 & 1;
          }
          else {
            uVar16 = 0;
          }
          plVar39 = local_18f8;
          local_4f8 = 0;
          local_500 = 0;
          local_1958 = CONCAT44(local_1958._4_4_,*(undefined4 *)(lVar31 + 0xc0));
          local_1984 = fVar63;
          if (*(char *)(lVar31 + 0xb4) != '\0') {
            if (*local_1938 == 0) goto LAB_03793c9c;
            fVar63 = *pfVar30;
            uVar18 = *(uint *)(*local_1938 + 0x28);
            if ((int)fVar63 < (int)local_1a04) {
              lVar41 = *local_18f8;
              if (lVar41 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar41 + 0x18) <= (int)fVar63 + 1U) goto thunk_FUN_01ab6c44;
              lVar41 = *(long *)(lVar41 + (long)(int)((int)fVar63 + 1U) * 0x188 + 0x30);
              if ((((lVar41 == 0) || (*plVar43 == 0)) ||
                  (lVar20 = *(long *)(*plVar43 + 0x170), lVar20 == 0)) ||
                 (lVar20 = *(long *)(lVar20 + 0x40), lVar20 == 0)) goto LAB_03793c9c;
              local_440 = CONCAT44(local_440._4_4_,uVar18 | *(int *)(lVar41 + 0x28) << 0x10);
              uVar19 = FUN_0219f8b8(lVar20,&local_440,&local_550,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                                   );
              if ((uVar19 & 1) != 0) {
                FUN_037791c8(&local_440,&local_550,0);
                uStack_568 = uStack_438;
                local_570 = local_440;
                local_560 = (undefined4)local_430;
                uVar62 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                                   (&local_570,0);
                local_500 = CONCAT44(fVar44,uVar62);
                local_4f8 = CONCAT44(fVar49,fVar45);
                uVar19 = FUN_037791f0(&local_550,0);
                uVar62 = (float)local_1958;
                if ((uVar19 & 0x100) != 0) {
                  uVar62 = 0;
                }
                local_1958 = CONCAT44(local_1958._4_4_,uVar62);
              }
              fVar63 = *pfVar30;
            }
            if (0 < (int)fVar63) {
              lVar41 = *plVar39;
              if (lVar41 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar41 + 0x18) <= (int)fVar63 - 1U) goto thunk_FUN_01ab6c44;
              lVar41 = *(long *)(lVar41 + (ulong)((int)fVar63 - 1U) * 0x188 + 0x30);
              if (((lVar41 == 0) || (*plVar43 == 0)) ||
                 ((lVar20 = *(long *)(*plVar43 + 0x170), lVar20 == 0 ||
                  (lVar20 = *(long *)(lVar20 + 0x40), lVar20 == 0)))) goto LAB_03793c9c;
              local_440 = CONCAT44(local_440._4_4_,*(uint *)(lVar41 + 0x28) | uVar18 << 0x10);
              uVar19 = FUN_0219f8b8(lVar20,&local_440,&local_550,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                                   );
              if ((uVar19 & 1) != 0) {
                uVar19 = local_500 & 0xffffffff;
                uVar15 = (undefined4)(local_500 >> 0x20);
                uVar61 = (undefined4)local_4f8;
                uVar64 = (undefined4)((ulong)local_4f8 >> 0x20);
                FUN_037791dc(&local_440,&local_550,0);
                uStack_568 = uStack_438;
                local_570 = local_440;
                local_560 = (undefined4)local_430;
                UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent(&local_570,0);
                uVar62 = FUN_03778e8c(uVar19,0);
                local_500 = CONCAT44(uVar15,uVar62);
                local_4f8 = CONCAT44(uVar64,uVar61);
                uVar19 = FUN_037791f0(&local_550,0);
                uVar62 = (float)local_1958;
                if ((uVar19 & 0x100) != 0) {
                  uVar62 = 0;
                }
                local_1958 = CONCAT44(local_1958._4_4_,uVar62);
              }
            }
          }
          lVar41 = *plVar39;
          if (lVar41 == 0) goto LAB_03793c9c;
          fVar63 = *pfVar30;
          uVar62 = FUN_03778e7c(&local_500,0);
          uVar18 = uStack_444;
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
          *(undefined4 *)(lVar41 + (long)(int)fVar63 * 0x188 + 0x160) = uVar62;
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_037a5c04(uVar18,0);
          lVar41 = local_1900;
          fVar63 = *pfVar30;
          fVar49 = (float)uVar52;
          if ((uVar23 & 1) == 0) {
            if ((uVar23 & 1) == 0 && 0 < (int)fVar63) {
              uVar18 = *(uint *)(param_1 + 0x19c4);
              if ((uVar18 == 0x80000000) || (uVar18 != (int)fVar63 - 1U)) {
                do {
                  lVar41 = local_1900;
                  fVar44 = (float)((int)fVar63 - 1);
                  if (((int)fVar63 < 1) || (fVar44 == *(float *)(param_1 + 0x19c4))) {
                    uVar18 = *(uint *)(param_1 + 0x19c4);
                    if (uVar18 == 0x80000000) goto LAB_0378dfc4;
                    lVar20 = *local_18f8;
                    if (lVar20 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar20 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
                    lVar20 = *(long *)(lVar20 + (long)(int)uVar18 * 0x188 + 0x30);
                    if ((lVar20 == 0) || (lVar20 = FUN_03787a68(lVar20,0), lVar20 == 0))
                    goto LAB_03793c9c;
                    uVar18 = FUN_03776e5c(lVar20,0);
                    if (*local_1938 == 0) goto LAB_03793c9c;
                    iVar17 = FUN_0377acf0(*local_1938,0);
                    if (((*plVar43 == 0) || (lVar20 = FUN_03779cb4(*plVar43,0), lVar20 == 0)) ||
                       (*(long *)(lVar20 + 0x48) == 0)) goto LAB_03793c9c;
                    local_440 = CONCAT44(local_440._4_4_,uVar18 | iVar17 << 0x10);
                    uVar19 = FUN_0219f8b8(*(long *)(lVar20 + 0x48),&local_440,&local_5c8,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__
                                         );
                    pfVar30 = local_1910;
                    if ((uVar19 & 1) == 0) goto LAB_0378dfc4;
                    lVar20 = *local_18f8;
                    if (lVar20 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar20 + 0x18) <= *(uint *)(param_1 + 0x19c4))
                    goto thunk_FUN_01ab6c44;
                    fVar45 = *(float *)(param_1 + 0x2f4);
                    fVar44 = *(float *)(lVar20 + (long)(int)*(uint *)(param_1 + 0x19c4) * 0x188 +
                                       0x148) - fVar45;
                    uVar62 = FUN_037793b0(&local_5c8,0);
                    local_590 = CONCAT44(fVar45,uVar62);
                    fVar63 = (float)FUN_03779388(&local_590,0);
                    uVar62 = FUN_037793c0(&local_5c8,0);
                    local_598 = CONCAT44(fVar45,uVar62);
                    fVar45 = (float)FUN_03779398(&local_598,0);
                    fVar63 = fVar44 / fVar49 + fVar63;
                    FUN_03778e64(fVar63 - fVar45,&local_500,0);
                    uVar62 = FUN_037793b0(&local_5c8,0);
                    local_590 = CONCAT44(fVar63,uVar62);
                    fVar44 = (float)FUN_03779390(&local_590,0);
                    puVar25 = &local_5c8;
                    goto LAB_0378f5a8;
                  }
                  lVar41 = *local_18f8;
                  if (lVar41 == 0) goto LAB_03793c9c;
                  if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar44) goto thunk_FUN_01ab6c44;
                  lVar41 = *(long *)(lVar41 + (ulong)(uint)fVar44 * 0x188 + 0x30);
                  if ((lVar41 == 0) || (lVar41 = FUN_03787a68(lVar41,0), lVar41 == 0))
                  goto LAB_03793c9c;
                  uVar18 = FUN_03776e5c(lVar41,0);
                  if (*local_1938 == 0) goto LAB_03793c9c;
                  iVar17 = FUN_0377acf0(*local_1938,0);
                  if (((*plVar43 == 0) || (lVar41 = FUN_03779cb4(*plVar43,0), lVar41 == 0)) ||
                     (*(long *)(lVar41 + 0x50) == 0)) goto LAB_03793c9c;
                  local_440 = CONCAT44(local_440._4_4_,uVar18 | iVar17 << 0x10);
                  uVar19 = FUN_0219f8b8(*(long *)(lVar41 + 0x50),&local_440,&local_5b0,
                                        *(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__
                                       );
                  pfVar30 = local_1910;
                  fVar63 = fVar44;
                } while ((uVar19 & 1) == 0);
                lVar41 = *local_18f8;
                if (lVar41 == 0) goto LAB_03793c9c;
                if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar44) goto thunk_FUN_01ab6c44;
                lVar41 = lVar41 + (ulong)(uint)fVar44 * 0x188;
                fVar63 = *(float *)(param_1 + 0x2f4);
                fVar46 = *(float *)(lVar41 + 0x148);
                fVar45 = *(float *)(lVar41 + 0x150) -
                         ((fVar51 - *(float *)(param_1 + 0x2e0)) + *(float *)(param_1 + 0x180));
                fVar47 = fVar45 / fVar49;
                uVar62 = FUN_037793d0(&local_5b0,0);
                local_590 = CONCAT44(fVar45,uVar62);
                fVar44 = (float)FUN_03779388(&local_590,0);
                uVar62 = FUN_037793e0(&local_5b0,0);
                local_598 = CONCAT44(fVar45,uVar62);
                fVar45 = (float)FUN_03779398(&local_598,0);
                fVar44 = (fVar46 - fVar63) / fVar49 + fVar44;
                FUN_03778e64(fVar44 - fVar45,&local_500,0);
                uVar62 = FUN_037793d0(&local_5b0,0);
                local_590 = CONCAT44(fVar44,uVar62);
                fVar63 = (float)FUN_03779390(&local_590,0);
                uVar62 = FUN_037793e0(&local_5b0,0);
                local_598 = CONCAT44(fVar44,uVar62);
                fVar44 = (float)FUN_037793a0(&local_598,0);
                FUN_03778e74((fVar47 + fVar63) - fVar44,&local_500,0);
                local_1958 = local_1958 & 0xffffffff00000000;
                lVar41 = local_1900;
              }
              else {
                lVar20 = *local_18f8;
                if (lVar20 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar20 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
                lVar20 = *(long *)(lVar20 + (long)(int)uVar18 * 0x188 + 0x30);
                if ((lVar20 == 0) || (lVar20 = FUN_03787a68(lVar20,0), lVar20 == 0))
                goto LAB_03793c9c;
                uVar18 = FUN_03776e5c(lVar20,0);
                if (*local_1938 == 0) goto LAB_03793c9c;
                iVar17 = FUN_0377acf0(*local_1938,0);
                if (((*plVar43 == 0) || (lVar20 = FUN_03779cb4(*plVar43,0), lVar20 == 0)) ||
                   (*(long *)(lVar20 + 0x48) == 0)) goto LAB_03793c9c;
                local_440 = CONCAT44(local_440._4_4_,uVar18 | iVar17 << 0x10);
                uVar19 = FUN_0219f8b8(*(long *)(lVar20 + 0x48),&local_440,&local_588,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__
                                     );
                pfVar30 = local_1910;
                if ((uVar19 & 1) != 0) {
                  lVar20 = *local_18f8;
                  if (lVar20 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar20 + 0x18) <= *(uint *)(param_1 + 0x19c4))
                  goto thunk_FUN_01ab6c44;
                  fVar45 = *(float *)(param_1 + 0x2f4);
                  fVar44 = *(float *)(lVar20 + (long)(int)*(uint *)(param_1 + 0x19c4) * 0x188 +
                                     0x148) - fVar45;
                  uVar62 = FUN_037793b0(&local_588,0);
                  local_590 = CONCAT44(fVar45,uVar62);
                  fVar63 = (float)FUN_03779388(&local_590,0);
                  uVar62 = FUN_037793c0(&local_588,0);
                  local_598 = CONCAT44(fVar45,uVar62);
                  fVar45 = (float)FUN_03779398(&local_598,0);
                  fVar63 = fVar44 / fVar49 + fVar63;
                  FUN_03778e64(fVar63 - fVar45,&local_500,0);
                  uVar62 = FUN_037793b0(&local_588,0);
                  local_590 = CONCAT44(fVar63,uVar62);
                  fVar44 = (float)FUN_03779390(&local_590,0);
                  puVar25 = &local_588;
LAB_0378f5a8:
                  uVar62 = FUN_037793c0(puVar25,0);
                  local_598 = CONCAT44(fVar63,uVar62);
                  fVar63 = (float)FUN_037793a0(&local_598,0);
                  FUN_03778e74(fVar44 - fVar63,&local_500,0);
                  local_1958 = local_1958 & 0xffffffff00000000;
                }
              }
            }
          }
          else {
            *(float *)(param_1 + 0x19c4) = fVar63;
          }
LAB_0378dfc4:
          uVar62 = FUN_03778e6c(&local_500,0);
          uVar15 = FUN_03778e6c(&local_500,0);
          if (*(char *)(lVar41 + 0xb6) != '\0') {
            fVar44 = *(float *)(param_1 + 0x2f4);
            fVar63 = (float)FUN_03776cb4(&local_4f0,0);
            fVar44 = fVar44 - fVar49 * fVar63 * (1.0 - *(float *)(param_1 + 0x1594));
            *(float *)(param_1 + 0x2f4) = fVar44;
            if ((uVar16 != 0) || (uStack_444 == 0x200b)) {
              *(float *)(param_1 + 0x2f4) = fVar44 - local_1988 * *(float *)(lVar41 + 0xc4);
            }
          }
          fVar63 = *(float *)(param_1 + 0x2f0);
          if (fVar63 == 0.0) {
            fVar63 = 0.0;
          }
          else {
            fVar44 = (float)FUN_03776c94(&local_4f0,0);
            fVar45 = (float)FUN_03776ca4(&local_4f0,0);
            fVar63 = (1.0 - *(float *)(param_1 + 0x1594)) *
                     (fVar63 * 0.5 - fVar49 * (fVar44 * 0.5 + fVar45));
            *(float *)(param_1 + 0x2f4) = *(float *)(param_1 + 0x2f4) + fVar63;
          }
          uVar18 = 0;
          if ((cVar28 == '\0') && (*pcVar1 == '\x01')) {
            uVar18 = *(uint *)(param_1 + 0x124) & 1;
          }
          lVar41 = *local_1950;
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_036cee6c(lVar41,0,0);
          puVar6 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
          local_1978 = CONCAT44(uVar62,uVar15);
          local_19f4 = fVar63;
          if (uVar18 == 0) {
            local_1998 = local_1998 & 0xffffffff00000000;
            if ((uVar19 & 1) != 0) {
              lVar41 = *local_1950;
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                          0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (lVar41 == 0) goto LAB_03793c9c;
              uVar19 = FUN_03699d3c(lVar41,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c)
                                    ,0);
              if ((uVar19 & 1) != 0) {
                lVar41 = *local_1950;
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                if (lVar41 == 0) goto LAB_03793c9c;
                uVar19 = FUN_03699d3c(lVar41,*(undefined4 *)
                                              (*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
                if ((uVar19 & 1) != 0) {
                  lVar41 = *local_1950;
                  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  if (lVar41 != 0) {
                    fVar63 = (float)FUN_0369e060(lVar41,*(undefined4 *)
                                                         (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),
                                                 0);
                    plVar24 = (long *)PTR_DAT_03cbe438;
                    if ((*plVar43 != 0) && (*local_1950 != 0)) {
                      fVar45 = *(float *)(*plVar43 + 0x188);
                      fVar44 = (float)FUN_0369e060(*local_1950,
                                                   *(undefined4 *)
                                                    (*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
                      fVar44 = fVar44 * fVar63 * fVar45 * 0.25;
                      if (fVar63 < (float)local_1940 + fVar44) {
                        local_1940 = CONCAT44(local_1940._4_4_,fVar63 - fVar44);
                      }
                      goto LAB_0378e344;
                    }
                  }
                  goto LAB_03793c9c;
                }
              }
            }
            fVar44 = 0.0;
            plVar24 = (long *)PTR_DAT_03cbe438;
          }
          else {
            fVar44 = 0.0;
            plVar24 = (long *)PTR_DAT_03cbe438;
            if ((uVar19 & 1) != 0) {
              lVar41 = *local_1950;
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                          0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (lVar41 == 0) goto LAB_03793c9c;
              uVar19 = FUN_03699d3c(lVar41,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c)
                                    ,0);
              plVar24 = (long *)PTR_DAT_03cbe438;
              if ((uVar19 & 1) != 0) {
                lVar41 = *local_1950;
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                if (lVar41 == 0) goto LAB_03793c9c;
                fVar63 = (float)FUN_0369e060(lVar41,*(undefined4 *)
                                                     (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
                if (*plVar43 == 0) goto LAB_03793c9c;
                fVar45 = (float)FUN_03779d1c(*plVar43,0);
                plVar24 = (long *)PTR_DAT_03cbe438;
                if (*local_1950 == 0) goto LAB_03793c9c;
                fVar44 = (float)FUN_0369e060(*local_1950,
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
                fVar44 = fVar63 * fVar45 * 0.25 * fVar44;
                if (fVar63 < (float)local_1940 + fVar44) {
                  local_1940 = CONCAT44(local_1940._4_4_,fVar63 - fVar44);
                }
              }
            }
            if (*plVar43 == 0) goto LAB_03793c9c;
            uVar62 = FUN_03779d2c(*plVar43,0);
            local_1998 = CONCAT44(local_1998._4_4_,uVar62);
          }
LAB_0378e344:
          fVar47 = *(float *)(param_1 + 0x2f4);
          fVar45 = (float)FUN_03776ca4(&local_4f0,0);
          fVar66 = *(float *)(param_1 + 0x19a8);
          fVar46 = (float)FUN_03778e5c(&local_500,0);
          fVar63 = (float)local_1940;
          fVar47 = fVar47 + (1.0 - *(float *)(param_1 + 0x1594)) *
                            fVar49 * (fVar46 + ((fVar45 * fVar66 - (float)local_1940) - fVar44));
          fVar45 = (float)FUN_03776cac(&local_4f0,0);
          fVar46 = (float)FUN_03778e6c(&local_500,0);
          fVar46 = *(float *)(param_1 + 0x180) +
                   ((fVar51 + fVar49 * (fVar63 + fVar45 + fVar46)) - *(float *)(param_1 + 0x2e0));
          fVar45 = (float)FUN_03776c9c(&local_4f0,0);
          local_1960 = CONCAT44(fVar46 - fVar49 * (fVar63 + fVar63 + fVar45),(float)local_1960);
          local_1924 = fVar46;
          fVar45 = (float)FUN_03776c94(&local_4f0,0);
          fVar63 = fVar47 + (1.0 - *(float *)(param_1 + 0x1594)) *
                            fVar49 * (fVar44 + fVar44 +
                                     fVar63 + fVar63 + fVar45 * *(float *)(param_1 + 0x19a8));
          if (((cVar28 == '\0') && (*pcVar1 == '\x01')) &&
             ((*(byte *)(param_1 + 0x124) >> 1 & 1) != 0)) {
            local_19c0 = fVar63;
            if (*(long *)(param_1 + 0x68) == 0) goto LAB_03793c9c;
            iVar17 = *(int *)(param_1 + 0x19a4);
            fVar45 = (float)FUN_03776990(*(long *)(param_1 + 0x68) + 0xb0,0);
            if (*plVar43 == 0) goto LAB_03793c9c;
            local_19c8 = CONCAT44(local_19c8._4_4_,fVar51);
            local_1968 = fVar47;
            fVar46 = (float)FUN_037769b0(*plVar43 + 0xb0,0);
            if (*plVar43 == 0) goto LAB_03793c9c;
            fVar66 = *(float *)(param_1 + 0xf0);
            fVar50 = *(float *)(param_1 + 0x180);
            fVar63 = (float)iVar17 * local_1a38;
            fVar47 = (float)FUN_03776960(*plVar43 + 0xb0,0);
            fVar47 = fVar47 * fVar66 * (fVar45 - (fVar46 + fVar50)) * 0.5;
            fVar45 = (float)FUN_03776cac(&local_4f0,0);
            fVar46 = (float)local_1940;
            fVar59 = fVar63 * fVar49 * ((fVar44 + (float)local_1940 + fVar45) - fVar47);
            fVar66 = (float)FUN_03776cac(&local_4f0,0);
            fVar50 = (float)FUN_03776c9c(&local_4f0,0);
            local_1924 = local_1924 + 0.0;
            fVar45 = local_1968 + fVar59;
            fVar63 = fVar63 * fVar49 * ((((fVar66 - fVar50) - fVar46) - fVar44) - fVar47);
            fVar47 = local_1968 + fVar63;
            fVar63 = local_19c0 + fVar63;
            local_1960 = CONCAT44(local_1960._4_4_ + 0.0,(float)local_1960);
            local_1930 = CONCAT44(local_1930._4_4_,local_19c0 + fVar59);
            fVar51 = (float)local_19c8;
          }
          else {
            local_1930 = CONCAT44(local_1930._4_4_,fVar63);
            fVar45 = fVar47;
          }
          lVar41 = *local_19e8;
          uVar40 = *local_19f0;
          if (DAT_0411f169 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbdeb8);
            DAT_0411f169 = '\x01';
          }
          uVar22 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
          uVar54 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
          fVar46 = 0.0;
          local_1968 = fVar44;
          if (DAT_00d38b04 <
              (float)((ulong)uVar40 >> 0x20) * (float)((ulong)uVar54 >> 0x20) +
              (float)uVar40 * (float)uVar54 +
              (float)lVar41 * (float)uVar22 +
              (float)((ulong)lVar41 >> 0x20) * (float)((ulong)uVar22 >> 0x20)) {
            fVar58 = 0.0;
            fVar59 = 0.0;
            fVar44 = 0.0;
            fVar49 = local_1924;
            fVar66 = local_1960._4_4_;
            fVar50 = local_1960._4_4_;
          }
          else {
            local_19c0 = fVar63;
            FUN_036be00c(&local_440,*(undefined4 *)(param_1 + 0x19b4),
                         *(undefined4 *)(param_1 + 0x19b8),*(undefined4 *)(param_1 + 0x19bc),
                         *(undefined4 *)(param_1 + 0x19c0),0);
            fVar44 = (float)local_1930;
            fVar50 = local_1960._4_4_;
            local_19c8 = CONCAT44(local_19c8._4_4_,fVar51);
            fVar63 = ((float)local_1930 + fVar47) * 0.5;
            fVar65 = (local_1960._4_4_ + local_1924) * 0.5;
            fVar51 = local_1924 - fVar65;
            uStack_608 = uStack_438;
            local_610 = local_440;
            uStack_5f8 = uStack_428;
            local_600 = local_430;
            fVar66 = 0.0;
            uStack_5e8 = uStack_418;
            local_5f0 = local_420;
            uStack_5d8 = uStack_408;
            local_5e0 = local_410;
            fVar46 = fVar51;
            local_1a1c = (float)FUN_036bdd2c(fVar45 - fVar63,&local_610,0);
            local_1a1c = fVar63 + local_1a1c;
            local_1a20 = fVar65 + fVar46;
            local_1a18 = fVar66 + 0.0;
            fVar50 = fVar50 - fVar65;
            fVar59 = 0.0;
            local_1a14 = fVar49;
            fVar66 = fVar50;
            fVar47 = (float)FUN_036bdd2c(fVar47 - fVar63,&local_610,0);
            fVar47 = fVar63 + fVar47;
            fVar59 = fVar59 + 0.0;
            fVar58 = 0.0;
            fVar44 = (float)FUN_036bdd2c(fVar44 - fVar63,&local_610,0);
            fVar49 = local_1a20;
            local_1930 = CONCAT44(local_1930._4_4_,fVar63 + fVar44);
            local_1924 = fVar65 + fVar51;
            fVar58 = fVar58 + 0.0;
            fVar46 = 0.0;
            fVar44 = (float)FUN_036bdd2c(local_19c0 - fVar63,&local_610,0);
            fVar63 = fVar63 + fVar44;
            fVar46 = fVar46 + 0.0;
            uVar52 = (ulong)(uint)local_1a14;
            fVar51 = (float)local_19c8;
            fVar44 = local_1a18;
            fVar45 = local_1a1c;
            fVar66 = fVar65 + fVar66;
            fVar50 = fVar65 + fVar50;
          }
          fVar65 = local_1968;
          lVar41 = *local_18f8;
          if (lVar41 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
          lVar41 = lVar41 + (long)(int)*pfVar30 * 0x188;
          *(float *)(lVar41 + 0x124) = fVar47;
          *(float *)(lVar41 + 0x128) = fVar66;
          *(float *)(lVar41 + 300) = fVar59;
          lVar41 = *local_18f8;
          if (lVar41 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
          lVar41 = lVar41 + (long)(int)*pfVar30 * 0x188;
          *(float *)(lVar41 + 0x118) = fVar45;
          *(float *)(lVar41 + 0x11c) = fVar49;
          *(float *)(lVar41 + 0x120) = fVar44;
          lVar41 = *local_18f8;
          if (lVar41 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
          lVar41 = lVar41 + (long)(int)*pfVar30 * 0x188;
          *(float *)(lVar41 + 0x138) = fVar58;
          *(float *)(lVar41 + 0x130) = (float)local_1930;
          *(float *)(lVar41 + 0x134) = local_1924;
          lVar41 = *local_18f8;
          if (lVar41 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
          lVar41 = lVar41 + (long)(int)*pfVar30 * 0x188;
          *(float *)(lVar41 + 0x13c) = fVar63;
          *(float *)(lVar41 + 0x140) = fVar50;
          *(float *)(lVar41 + 0x144) = fVar46;
          lVar41 = *local_18f8;
          if (lVar41 == 0) goto LAB_03793c9c;
          fVar63 = *pfVar30;
          fVar45 = *(float *)(param_1 + 0x2f4);
          fVar44 = (float)FUN_03778e5c(&local_500,0);
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
          fVar46 = (float)uVar52;
          *(float *)(lVar41 + (long)(int)fVar63 * 0x188 + 0x148) = fVar45 + fVar46 * fVar44;
          lVar41 = *local_18f8;
          if (lVar41 == 0) goto LAB_03793c9c;
          fVar63 = *pfVar30;
          fVar50 = *(float *)(param_1 + 0x2e0);
          fVar45 = *(float *)(param_1 + 0x180);
          fVar44 = (float)FUN_03778e6c(&local_500,0);
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
          *(float *)(lVar41 + (long)(int)fVar63 * 0x188 + 0x150) =
               (fVar51 - fVar50) + fVar45 + fVar46 * fVar44;
          lVar41 = *local_18f8;
          if (lVar41 == 0) goto LAB_03793c9c;
          fVar63 = *pfVar30;
          lVar20 = (long)(int)fVar63;
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
          *(float *)(lVar41 + lVar20 * 0x188 + 0x168) =
               ((float)local_1930 - fVar47) / (fVar49 - fVar66);
          fVar49 = fVar46 * ((float)local_1960 + local_1978._4_4_);
          if (*pcVar1 == '\x01') {
            fVar49 = fVar49 / local_1964;
            fVar44 = (fVar46 * (local_1970 + (float)local_1978)) / local_1964;
          }
          else {
            fVar44 = fVar46 * (local_1970 + (float)local_1978);
          }
          fVar45 = *(float *)(param_1 + 0x328);
          fVar47 = *(float *)(param_1 + 0x180);
          bVar10 = fVar63 == fVar45;
          bVar11 = uVar16 == 0;
          fVar49 = fVar47 + fVar49;
          if (bVar11 || bVar10) {
            fVar44 = fVar47 + fVar44;
            fVar66 = fVar49;
            fVar50 = fVar44;
            if (fVar47 != 0.0) {
              fVar66 = (fVar49 - fVar47) / *(float *)(param_1 + 0xf0);
              fVar50 = (fVar44 - fVar47) / *(float *)(param_1 + 0xf0);
              if (fVar66 <= fVar49) {
                fVar66 = fVar49;
              }
              if (fVar44 <= fVar50) {
                fVar50 = fVar44;
              }
            }
            lVar31 = lVar41 + lVar20 * 0x188;
            fVar47 = fVar66;
            if (fVar66 <= *(float *)(param_1 + 0x338)) {
              fVar47 = *(float *)(param_1 + 0x338);
            }
            fVar59 = fVar50;
            if (*(float *)(param_1 + 0x33c) <= fVar50) {
              fVar59 = *(float *)(param_1 + 0x33c);
            }
            *(float *)(param_1 + 0x338) = fVar47;
            *(float *)(param_1 + 0x33c) = fVar59;
            *(float *)(lVar31 + 0x158) = fVar66;
            *(float *)(lVar31 + 0x15c) = fVar50;
            fVar66 = *(float *)(param_1 + 0x2e0);
            fVar50 = fVar49 - fVar66;
          }
          else {
            fVar47 = *(float *)(param_1 + 0x338);
            lVar31 = lVar41 + lVar20 * 0x188;
            *(float *)(lVar31 + 0x158) = fVar47;
            fVar44 = *(float *)(param_1 + 0x33c);
            *(float *)(lVar31 + 0x15c) = fVar44;
            fVar66 = *(float *)(param_1 + 0x2e0);
            fVar50 = fVar47 - fVar66;
          }
          uVar42 = (ulong)(uint)fVar50;
          uVar19 = (ulong)(uint)fVar66;
          fVar44 = fVar44 - fVar66;
          uVar55 = (ulong)(uint)fVar44;
          *(float *)(lVar31 + 0x14c) = fVar50;
          *(float *)(lVar41 + lVar20 * 0x188 + 0x154) = fVar44;
          *(float *)(param_1 + 0x378) = fVar44;
          if ((*(int *)(param_1 + 0x340) == 0) || (*(char *)(param_1 + 0x37c) != '\0')) {
            if (bVar11 || bVar10) {
              *(float *)(param_1 + 0x374) = fVar47;
              if (*(long *)(param_1 + 0x68) == 0) goto LAB_03793c9c;
              fVar44 = *(float *)(param_1 + 0x370);
              fVar47 = (float)FUN_03776990(*(long *)(param_1 + 0x68) + 0xb0,0);
              uVar55 = (ulong)(uint)local_1964;
              uVar19 = (ulong)(uint)*(float *)(param_1 + 0x2e0);
              fVar47 = (fVar46 * fVar47) / local_1964;
              if (fVar44 <= fVar47) {
                fVar44 = fVar47;
              }
              *(float *)(param_1 + 0x370) = fVar44;
              if (*(float *)(param_1 + 0x2e0) == 0.0) goto LAB_0378ee0c;
            }
          }
          else if ((bVar11 || bVar10) && fVar66 == 0.0) {
LAB_0378ee0c:
            fVar44 = *(float *)(param_1 + 0x19c8);
            if (*(float *)(param_1 + 0x19c8) <= fVar49) {
              fVar44 = fVar49;
            }
            *(float *)(param_1 + 0x19c8) = fVar44;
          }
          uVar18 = uStack_444;
          plVar39 = local_18f8;
          lVar31 = local_1900;
          lVar41 = *local_18f8;
          local_1924 = fVar45;
          if (lVar41 == 0) goto LAB_03793c9c;
          fVar49 = *pfVar30;
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar49) goto thunk_FUN_01ab6c44;
          lVar41 = lVar41 + (long)(int)fVar49 * 0x188;
          *(undefined1 *)(lVar41 + 0x1a0) = 0;
          uVar36 = *(uint *)(param_1 + 0x158) & 0x18;
          if ((uStack_444 == 9) ||
             ((((uVar16 == 0 && (uStack_444 != 3)) &&
               ((uStack_444 != 0x200b && (uStack_444 != 0xad)))) ||
              ((((uint)(uStack_444 == 0xad) & ((uint)local_1a28 ^ 0xffffffff)) != 0 ||
               (*pcVar1 == '\x02')))))) {
            *(undefined1 *)(lVar41 + 0x1a0) = 1;
            pfVar32 = local_19b0;
            pfVar30 = local_19a8;
            if (bVar12) {
              lVar41 = *(long *)(local_1920 + 0x48);
              if (lVar41 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar41 + 0x18) <= *(uint *)(param_1 + 0x340)) goto thunk_FUN_01ab6c44;
              lVar41 = lVar41 + (long)(int)*(uint *)(param_1 + 0x340) * 0x60;
              pfVar30 = (float *)(lVar41 + 100);
              pfVar32 = (float *)(lVar41 + 0x68);
            }
            fVar45 = *pfVar30;
            fVar44 = *pfVar32;
            fVar49 = *(float *)(param_1 + 0x35c);
            fVar47 = *(float *)(param_1 + 0x2f4);
            local_196c = (local_19b4 - fVar45) - fVar44;
            bVar10 = true;
            if ((fVar49 <= local_196c) && (bVar10 = false, !NAN(fVar49))) {
              bVar10 = fVar49 == -1.0;
            }
            if (!bVar10) {
              local_196c = fVar49;
            }
            fVar66 = 0.0;
            fVar50 = 0.0;
            if (*(char *)(local_1900 + 0xb6) == '\0') {
              fVar50 = (float)FUN_03776cb4(&local_4f0,0);
              uVar19 = (ulong)*(uint *)(param_1 + 0x2e0);
            }
            plVar39 = local_18f8;
            pfVar30 = local_1910;
            lVar20 = local_1a68;
            fVar59 = *(float *)(param_1 + 0x1594);
            uVar55 = (ulong)(uint)fVar59;
            fVar51 = *(float *)(param_1 + 0x33c);
            uVar42 = (ulong)(uint)local_1984;
            if (uStack_444 != 0xad) {
              uVar42 = uVar52;
            }
            fVar58 = (float)uVar19;
            if ((0.0 < fVar58) && (fVar66 = 0.0, *(char *)(param_1 + 0x2e8) == '\0')) {
              fVar66 = *(float *)(param_1 + 0x338) - *(float *)(param_1 + 0x15ac);
            }
            fVar49 = *local_1910;
            fVar66 = (*(float *)(param_1 + 0x374) - (fVar51 - fVar58)) + fVar66;
            if (fVar66 <= (float)local_19d8) goto switchD_0378f0dc_caseD_2;
            if (*(int *)(param_1 + 0x34c) == -1) {
              *(float *)(param_1 + 0x34c) = fVar49;
            }
            uVar40 = DAT_00d37868;
            lVar41 = local_19d0;
            if (*(char *)(local_1900 + 0xa8) != '\0') {
              fVar56 = *(float *)(local_1900 + 0xd0);
              if (((*(float *)(param_1 + 0x15b0) <= fVar56) || (fVar58 <= 0.0)) ||
                 (*(int *)(param_1 + 0x15a4) <= *(int *)(param_1 + 0x15a0))) {
                fVar58 = *local_1a10;
                fVar66 = *(float *)(local_1900 + 0xac);
                uVar19 = (ulong)(uint)fVar66;
                if ((fVar58 <= fVar66) || (*(int *)(param_1 + 0x15a4) <= *(int *)(param_1 + 0x15a0))
                   ) goto LAB_0378f0b8;
                fVar63 = (fVar58 - *(float *)(param_1 + 0x159c)) * 0.5;
                if (fVar63 <= DAT_00d38b84) {
                  fVar63 = DAT_00d38b84;
                }
                fVar49 = (fVar58 - fVar63) * 20.0 + 0.5;
                fVar63 = DAT_00d38e60;
                if (fVar49 != INFINITY) {
                  fVar63 = (float)(int)fVar49 / 20.0;
                }
                if (fVar63 <= fVar66) {
                  fVar63 = fVar66;
                }
                *(float *)(param_1 + 0x1598) = fVar58;
                goto LAB_037910ac;
              }
              fVar63 = *(float *)(param_1 + 0x15b0) +
                       ((fVar57 - fVar66) / (float)*(int *)(param_1 + 0x340)) / local_1a58;
              if (fVar63 <= fVar56) {
                fVar63 = fVar56;
              }
LAB_03793b50:
              *(float *)(param_1 + 0x15b0) = fVar63;
              lVar41 = local_19d0;
              goto LAB_0378c81c;
            }
LAB_0378f0b8:
            switch(*(undefined4 *)(local_1900 + 0x74)) {
            case 1:
              if (*(int *)(param_1 + 0x340) < 1) goto switchD_0378f0dc_caseD_2;
              iVar17 = FUN_020aa428(local_1a68,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                   );
              if (iVar17 == 0) {
                local_458 = DAT_00d37868;
                local_4d4 = 0xffffffff;
                pfVar30[0] = 0.0;
                pfVar30[1] = 0.0;
                lVar31 = local_1900;
                plVar39 = local_18f8;
                lVar41 = local_19d0;
                plVar43 = local_1918;
              }
              else {
                FUN_020ab640(lVar20,&local_440,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
                memcpy(auStack_9a8,&local_440,0x398);
                iVar17 = FUN_03797154(param_1,auStack_9a8,local_1920,0);
                local_4d4 = iVar17 - 1;
                iVar17 = *(int *)(param_1 + 0x324) + -1;
                *(int *)(param_1 + 0x324) = iVar17;
                local_458 = CONCAT44(0x2026,iVar17);
                local_1904 = (float)((int)local_1904 + 1);
                lVar31 = local_1900;
                plVar39 = local_18f8;
                lVar41 = local_19d0;
                plVar43 = local_1918;
              }
              break;
            default:
switchD_0378f0dc_caseD_2:
              if ((uVar23 & 1) == 0) {
LAB_0378f1e0:
                plVar39 = local_18f8;
                lVar31 = local_1900;
                uVar23 = (ulong)(uint)fVar65;
                if (uVar16 == 0) {
                  if (uStack_444 != 0xad) {
                    plVar43 = &local_1aa0;
                    if (*(char *)(local_1900 + 0xa1) != '\0') {
                      plVar43 = &lStack_1a98;
                    }
                    if (*pcVar1 == '\x02') {
                      FUN_0379c8ac(param_1,*(undefined4 *)*plVar43,local_1900,local_1920,0);
                    }
                    else if (*pcVar1 == '\x01') {
                      FUN_0379bd40(local_1940 & 0xffffffff,param_1,*(undefined4 *)*plVar43,
                                   local_1900,local_1920,0);
                      uVar19 = uVar23;
                    }
                    fVar49 = *pfVar30;
                    if (((uint)local_1a34 & 1) != 0) {
                      *(float *)(param_1 + 0x330) = fVar49;
                    }
                    *(float *)(param_1 + 0x334) = fVar49;
                    *(int *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + 1;
                    lVar41 = *(long *)(local_1920 + 0x48);
                    if (lVar41 != 0) {
                      if (*(uint *)(param_1 + 0x340) < *(uint *)(lVar41 + 0x18)) {
                        lVar41 = lVar41 + (long)(int)*(uint *)(param_1 + 0x340) * 0x60;
                        local_1a34 = 0.0;
                        *(float *)(lVar41 + 100) = fVar45;
                        *(float *)(lVar41 + 0x68) = fVar44;
                        goto LAB_0378f884;
                      }
                      goto thunk_FUN_01ab6c44;
                    }
                    goto LAB_03793c9c;
                  }
                  lVar41 = *local_18f8;
                  if (lVar41 == 0) goto LAB_03793c9c;
                  if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar49) goto thunk_FUN_01ab6c44;
                  *(undefined1 *)(lVar41 + (long)(int)fVar49 * 0x188 + 0x1a0) = 0;
                }
                else {
                  lVar41 = *local_18f8;
                  if (lVar41 == 0) goto LAB_03793c9c;
                  if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar49) goto thunk_FUN_01ab6c44;
                  *(undefined1 *)(lVar41 + (long)(int)fVar49 * 0x188 + 0x1a0) = 0;
                  *(float *)(param_1 + 0x334) = fVar49;
                  lVar41 = *(long *)(local_1920 + 0x48);
                  if (lVar41 == 0) goto LAB_03793c9c;
                  uVar18 = *(uint *)(lVar41 + 0x18);
                  if (uVar18 <= *(uint *)(param_1 + 0x340)) goto thunk_FUN_01ab6c44;
                  lVar20 = lVar41 + (long)(int)*(uint *)(param_1 + 0x340) * 0x60;
                  iVar17 = *(int *)(lVar20 + 0x2c) + 1;
                  *(int *)(lVar20 + 0x2c) = iVar17;
                  *(int *)(param_1 + 0x348) = iVar17;
                  if (uVar18 <= *(uint *)(param_1 + 0x340)) goto thunk_FUN_01ab6c44;
                  lVar41 = lVar41 + (long)(int)*(uint *)(param_1 + 0x340) * 0x60;
                  *(float *)(lVar41 + 100) = fVar45;
                  *(float *)(lVar41 + 0x68) = fVar44;
                  *(int *)(local_1920 + 0x18) = *(int *)(local_1920 + 0x18) + 1;
                }
                goto LAB_0378f884;
              }
              fVar66 = 1.0 - fVar59;
              uVar19 = (ulong)(uint)fVar66;
              fVar50 = ABS(fVar47) + fVar50 * fVar66 * (float)uVar42;
              fVar47 = 1.0;
              if (uVar36 != 0) {
                fVar47 = DAT_00d38acc;
              }
              fVar65 = local_1968;
              if (fVar50 <= fVar47 * local_196c) goto LAB_0378f1e0;
              if ((local_1a54 == 0) || (fVar49 == *(float *)(param_1 + 0x328))) {
                if ((*(char *)(local_1900 + 0xa8) == '\0') ||
                   (*(int *)(param_1 + 0x15a4) <= *(int *)(param_1 + 0x15a0))) {
LAB_0378f2f0:
                  iVar17 = *(int *)(local_1900 + 0x74);
                  if (iVar17 == 1) {
                    iVar17 = FUN_020aa428(local_1a68,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                         );
                    plVar43 = local_1918;
                    if (iVar17 == 0) {
                      local_4d4 = 0xffffffff;
                      local_458 = DAT_00d37868;
                      pfVar30[0] = 0.0;
                      pfVar30[1] = 0.0;
                      lVar31 = local_1900;
                      lVar41 = local_19d0;
                    }
                    else {
                      FUN_020ab640(lVar20,&local_440,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                                  );
                      memcpy(auStack_10d8,&local_440,0x398);
                      iVar17 = FUN_03797154(param_1,auStack_10d8,local_1920,0);
                      local_4d4 = iVar17 - 1;
                      iVar17 = *(int *)(param_1 + 0x324) + -1;
                      *(int *)(param_1 + 0x324) = iVar17;
                      local_458 = CONCAT44(0x2026,iVar17);
                      local_1904 = (float)((int)local_1904 + 1);
                      lVar31 = local_1900;
                      lVar41 = local_19d0;
                    }
                    break;
                  }
                  if (iVar17 == 6) {
                    local_4d4 = FUN_03797154(param_1,local_1a30,local_1920,0);
                    fVar49 = *(float *)(param_1 + 0x324);
                  }
                  else {
                    if (iVar17 != 3) goto LAB_0378f1e0;
                    local_4d4 = FUN_03797154(param_1,local_1a30,local_1920,0);
                  }
                  goto LAB_037909d0;
                }
                uVar42 = 0x42c80000;
                fVar51 = *(float *)(local_1900 + 0x108) / 100.0;
                if (fVar51 <= fVar59) {
                  fVar66 = *(float *)(local_1900 + 0xac);
                  fVar59 = *local_1a10;
                  uVar19 = (ulong)(uint)fVar59;
                  if (fVar59 <= fVar66) goto LAB_0378f2f0;
LAB_03793bbc:
                  fVar63 = (fVar59 - *(float *)(param_1 + 0x159c)) * 0.5;
                  if (fVar63 <= DAT_00d38b84) {
                    fVar63 = DAT_00d38b84;
                  }
                  *(float *)(param_1 + 0x1598) = fVar59;
                  fVar49 = (fVar59 - fVar63) * 20.0 + 0.5;
                  fVar63 = DAT_00d38e60;
                  if (fVar49 != INFINITY) {
                    fVar63 = (float)(int)fVar49 / 20.0;
                  }
                  lVar41 = local_19d0;
                  if (fVar63 <= fVar66) {
                    fVar63 = fVar66;
                  }
                  goto LAB_037910ac;
                }
                fVar63 = fVar50 / fVar66;
                if (fVar59 <= 0.0) {
                  fVar63 = fVar50;
                }
                fVar59 = fVar59 + (fVar50 - fVar47 * (local_196c + DAT_00d38cc4)) / fVar63;
FUN_03793c4c:
                if (fVar51 <= fVar59) {
                  fVar59 = fVar51;
                }
                *(float *)(param_1 + 0x1594) = fVar59;
                lVar41 = local_19d0;
                goto LAB_0378c81c;
              }
              local_4d4 = FUN_03797154(param_1,local_1a30,local_1920,0);
              lVar20 = local_1920;
              if (*(float *)(param_1 + 0x2e4) == DAT_00d38ba4) {
                lVar21 = *plVar39;
                if (lVar21 == 0) goto LAB_03793c9c;
                fVar58 = *pfVar30;
                if ((uint)*(float *)(lVar21 + 0x18) <= (uint)fVar58) goto thunk_FUN_01ab6c44;
                fVar59 = *(float *)(param_1 + 0x2e0);
                fVar66 = 0.0;
                if ((0.0 < fVar59) && (fVar66 = 0.0, *(char *)(param_1 + 0x2e8) == '\0')) {
                  fVar66 = *(float *)(param_1 + 0x338) - *(float *)(param_1 + 0x15ac);
                }
                fVar66 = local_1988 * *(float *)(local_1900 + 200) +
                         *(float *)(lVar21 + (long)(int)fVar58 * 0x188 + 0x158) +
                         (fVar66 - *(float *)(param_1 + 0x33c)) +
                         local_1a58 * (local_1a5c + *(float *)(param_1 + 0x15b0));
              }
              else {
                fVar66 = *(float *)(local_1900 + 200);
                *(undefined1 *)(param_1 + 0x2e8) = 1;
                lVar21 = *plVar39;
                if (lVar21 == 0) goto LAB_03793c9c;
                fVar59 = *(float *)(param_1 + 0x2e0);
                fVar58 = *(float *)(param_1 + 0x324);
                fVar66 = *(float *)(param_1 + 0x2e4) + local_1988 * fVar66;
              }
              if (((uint)*(float *)(lVar21 + 0x18) <= (uint)fVar58) ||
                 (fVar51 = (float)((int)fVar58 - 1), (uint)*(float *)(lVar21 + 0x18) <= (uint)fVar51
                 )) goto thunk_FUN_01ab6c44;
              uVar55 = (ulong)(uint)*(float *)(param_1 + 0x374);
              fVar65 = *(float *)(lVar21 + (long)(int)fVar58 * 0x188 + 0x15c);
              uVar42 = (ulong)(uint)fVar65;
              fVar66 = fVar66 + *(float *)(param_1 + 0x374);
              uVar19 = (ulong)(uint)fVar66;
              fVar65 = (fVar66 + fVar59) - fVar65;
              lVar41 = local_19d0;
              plVar43 = local_1918;
              lVar31 = local_1900;
              if (((local_1a28 & 1) == 0 &&
                   *(short *)(lVar21 + (long)(int)fVar51 * 0x188 + 0x20) == 0xad) &&
                 ((fVar65 < (float)local_19d8 || (*(int *)(local_1900 + 0x74) == 0)))) {
                local_4d4 = local_4d4 - 1;
                local_1a28 = (ulong)local_1a28._4_4_ << 0x20;
                local_458 = CONCAT44(0x2d,fVar51);
                *pfVar30 = fVar51;
                break;
              }
              if (*(short *)(lVar21 + (long)(int)fVar58 * 0x188 + 0x20) == 0xad) {
                local_1a28 = CONCAT44(local_1a28._4_4_,1);
                break;
              }
              if (((uint)local_1a08 & (uint)*(byte *)(local_1900 + 0xa8) & 1) != 0) {
                fVar59 = *(float *)(param_1 + 0x1594);
                uVar55 = 0x42c80000;
                fVar51 = *(float *)(local_1900 + 0x108) / 100.0;
                if ((fVar51 <= fVar59) || (*(int *)(param_1 + 0x15a4) <= *(int *)(param_1 + 0x15a0))
                   ) {
                  fVar59 = *local_1a10;
                  uVar19 = (ulong)(uint)fVar59;
                  fVar66 = *(float *)(local_1900 + 0xac);
                  if ((fVar66 < fVar59) && (*(int *)(param_1 + 0x15a0) < *(int *)(param_1 + 0x15a4))
                     ) goto LAB_03793bbc;
                  goto LAB_03790b7c;
                }
LAB_03793c60:
                fVar63 = fVar50;
                if (0.0 < fVar59) {
                  fVar63 = fVar50 / (1.0 - fVar59);
                }
                fVar59 = fVar59 + (fVar50 - fVar47 * (local_196c + DAT_00d38cc4)) / fVar63;
                goto FUN_03793c4c;
              }
LAB_03790b7c:
              iVar17 = *piVar2;
              if ((iVar17 != local_1ab8) && (((uint)local_1a08 & (uint)(iVar17 != -1)) != 0)) {
                local_4d4 = FUN_03797154(param_1,piVar2,local_1920,0);
                plVar24 = (long *)PTR_DAT_03cbe438;
                lVar41 = *(long *)(lVar20 + 0x30);
                if (lVar41 == 0) goto LAB_03793c9c;
                fVar58 = *pfVar30;
                fVar66 = (float)((int)fVar58 - 1);
                if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar66) goto thunk_FUN_01ab6c44;
                local_1ab8 = iVar17;
                if (*(short *)(lVar41 + (long)(int)fVar66 * 0x188 + 0x20) == 0xad) {
                  local_4d4 = local_4d4 - 1;
                  local_1a28 = local_1a28 & 0xffffffff00000000;
                  local_458 = CONCAT44(0x2d,fVar66);
                  *pfVar30 = fVar66;
                  lVar31 = local_1900;
                  plVar39 = local_18f8;
                  lVar41 = local_19d0;
                  plVar43 = local_1918;
                  break;
                }
              }
              plVar39 = local_18f8;
              lVar31 = local_1900;
              lVar20 = local_1a68;
              if (fVar65 <= (float)local_19d8) {
                uVar55 = (ulong)(uint)local_1988;
                uVar42 = local_1998 & 0xffffffff;
                uVar19 = uVar52;
                FUN_037a1530(local_1a58,param_1,local_4d4,local_44c,&local_448,local_1900,local_1920
                             ,0);
                local_1a08 = 1.4013e-45;
                local_1a28 = local_1a28 & 0xffffffff00000000;
                local_1a34 = 1.4013e-45;
                plVar39 = local_18f8;
                lVar41 = local_19d0;
                plVar43 = local_1918;
                break;
              }
              if (*(int *)(param_1 + 0x34c) == -1) {
                *(float *)(param_1 + 0x34c) = fVar58;
              }
              if (*(char *)(local_1900 + 0xa8) != '\0') {
                fVar66 = *(float *)(local_1900 + 0xd0);
                if ((fVar66 < *(float *)(param_1 + 0x15b0)) &&
                   (*(int *)(param_1 + 0x15a0) < *(int *)(param_1 + 0x15a4))) {
                  fVar63 = *(float *)(param_1 + 0x15b0) +
                           ((fVar57 - fVar65) / (float)(*(int *)(param_1 + 0x340) + 1)) / local_1a58
                  ;
                  if (fVar63 <= fVar66) {
                    fVar63 = fVar66;
                  }
                  goto LAB_03793b50;
                }
                fVar59 = *(float *)(param_1 + 0x1594);
                uVar55 = 0x42c80000;
                fVar51 = *(float *)(local_1900 + 0x108) / 100.0;
                if ((fVar59 < fVar51) && (*(int *)(param_1 + 0x15a0) < *(int *)(param_1 + 0x15a4)))
                goto LAB_03793c60;
                fVar59 = *local_1a10;
                uVar19 = (ulong)(uint)fVar59;
                fVar66 = *(float *)(local_1900 + 0xac);
                if ((fVar66 < fVar59) && (*(int *)(param_1 + 0x15a0) < *(int *)(param_1 + 0x15a4)))
                goto LAB_03793bbc;
              }
              switch(*(undefined4 *)(local_1900 + 0x74)) {
              case 0:
              case 2:
              case 4:
                uVar55 = (ulong)(uint)local_1988;
                uVar42 = local_1998 & 0xffffffff;
                uVar19 = uVar52;
                FUN_037a1530(local_1a58,param_1,local_4d4,local_44c,&local_448,local_1900,local_1920
                             ,0);
                local_1a08 = 1.4013e-45;
                break;
              case 1:
                iVar17 = FUN_020aa428(local_1a68,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                     );
                plVar43 = local_1918;
                lVar41 = local_19d0;
                if (iVar17 == 0) {
                  local_458 = DAT_00d37868;
                  local_1a28 = local_1a28 & 0xffffffff00000000;
                  local_4d4 = 0xffffffff;
                  pfVar30[0] = 0.0;
                  pfVar30[1] = 0.0;
                  lVar31 = local_1900;
                }
                else {
                  FUN_020ab640(lVar20,&local_440,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                              );
                  memcpy(auStack_d40,&local_440,0x398);
                  iVar17 = FUN_03797154(param_1,auStack_d40,local_1920,0);
                  local_4d4 = iVar17 - 1;
                  local_1a28 = local_1a28 & 0xffffffff00000000;
                  iVar17 = *(int *)(param_1 + 0x324) + -1;
                  *(int *)(param_1 + 0x324) = iVar17;
                  local_458 = CONCAT44(0x2026,iVar17);
                  local_1904 = (float)((int)local_1904 + 1);
                  lVar31 = local_1900;
                }
                goto LAB_0378d260;
              case 3:
                local_4d4 = FUN_03797154(param_1,local_1a00,local_1920,0);
                local_1a28 = local_1a28 & 0xffffffff00000000;
                goto LAB_037909d0;
              case 5:
                uVar55 = (ulong)(uint)local_1988;
                uVar42 = local_1998 & 0xffffffff;
                local_1a08 = 1.4013e-45;
                *(undefined1 *)(param_1 + 0x37c) = 1;
                uVar19 = uVar52;
                FUN_037a1530(local_1a58,param_1,local_4d4,local_44c,&local_448,local_1900,local_1920
                             ,0);
                *(undefined4 *)(param_1 + 0x15ac) = 0;
                *(undefined4 *)(param_1 + 0x2e0) = 0;
                *(undefined4 *)(param_1 + 0x374) = 0;
                *(undefined4 *)(param_1 + 0x19c8) = 0;
                *(int *)(param_1 + 0x350) = *(int *)(param_1 + 0x350) + 1;
                break;
              case 6:
                local_1a28 = (ulong)local_1a28._4_4_ << 0x20;
                fVar49 = fVar58;
LAB_037909d0:
                local_458 = CONCAT44(3,fVar49);
                lVar31 = local_1900;
                lVar41 = local_19d0;
                plVar43 = local_1918;
                goto LAB_0378d260;
              default:
                local_1a28 = (ulong)local_1a28._4_4_ << 0x20;
                fVar49 = fVar58;
                fVar65 = local_1968;
                goto LAB_0378f1e0;
              }
              local_1a28 = local_1a28 & 0xffffffff00000000;
              lVar41 = local_19d0;
              plVar43 = local_1918;
LAB_0379053c:
              local_1a34 = 1.4013e-45;
              break;
            case 3:
              local_4d4 = FUN_03797154(param_1,local_1a00,local_1920,0);
              local_458 = CONCAT44(local_458._4_4_,fVar49);
              lVar31 = local_1900;
              plVar39 = local_18f8;
              lVar41 = local_19d0;
              plVar43 = local_1918;
              break;
            case 5:
              if (fVar49 == 0.0 || (int)local_4d4 < 0) {
                local_4d4 = 0xffffffff;
                *local_1910 = 0.0;
                local_458 = uVar40;
                lVar31 = local_1900;
                plVar43 = local_1918;
              }
              else {
                fVar63 = *(float *)(param_1 + 0x338);
                local_4d4 = FUN_03797154(param_1,local_1a48,local_1920,0);
                plVar39 = local_18f8;
                if ((float)local_19d8 < fVar63 - fVar51) goto LAB_0378f7e8;
                uVar19 = 0;
                *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x324);
                *(ulong *)(param_1 + 0x338) = local_1a50;
                *(int *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) + 1;
                *(undefined1 *)(param_1 + 0x37c) = 1;
                *(undefined4 *)(param_1 + 0x15ac) = 0;
                *(undefined4 *)(param_1 + 0x2e0) = 0;
                *(undefined4 *)(param_1 + 0x374) = 0;
                *(undefined4 *)(param_1 + 0x19c8) = 0;
                *(float *)(param_1 + 0x2f4) = *(float *)(param_1 + 0x2fc) + 0.0;
                *(int *)(param_1 + 0x350) = *(int *)(param_1 + 0x350) + 1;
                lVar31 = local_1900;
                lVar41 = local_19d0;
                plVar43 = local_1918;
              }
              break;
            case 6:
              local_4d4 = FUN_03797154(param_1,local_1a00,local_1920,0);
              local_458 = CONCAT44(3,fVar49);
              lVar31 = local_1900;
              plVar39 = local_18f8;
              lVar41 = local_19d0;
              plVar43 = local_1918;
            }
LAB_0378d260:
            local_4d4 = local_4d4 + 1;
            lVar20 = *(long *)(param_1 + 0x20);
            if (lVar20 == 0) goto LAB_03793c9c;
            goto LAB_0378cf04;
          }
          if (((uStack_444 & 0xfffffffe) == 10) && (*(int *)(local_1900 + 0x74) == 6)) {
            fVar45 = (float)uVar19;
            fVar44 = 0.0;
            if ((0.0 < fVar45) && (fVar44 = 0.0, *(char *)(param_1 + 0x2e8) == '\0')) {
              fVar44 = *(float *)(param_1 + 0x338) - *(float *)(param_1 + 0x15ac);
            }
            uVar55 = (ulong)(uint)*(float *)(param_1 + 0x33c);
            uVar42 = (ulong)(uint)*(float *)(param_1 + 0x374);
            uVar19 = local_19d8 & 0xffffffff;
            if ((float)local_19d8 <
                (*(float *)(param_1 + 0x374) - (*(float *)(param_1 + 0x33c) - fVar45)) + fVar44) {
              if (*(int *)(param_1 + 0x34c) == -1) {
                *(float *)(param_1 + 0x34c) = fVar49;
              }
              local_4d4 = FUN_03797154(param_1,local_1a00,local_1920,0);
              pfVar30 = local_1910;
LAB_0378f7e8:
              local_458 = CONCAT44(3,fVar49);
              lVar31 = local_1900;
              lVar41 = local_19d0;
              plVar43 = local_1918;
              goto LAB_0378d260;
            }
          }
          if ((((uStack_444 - 0x2007 < 0x23) &&
               ((1L << ((ulong)(uStack_444 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
              (uStack_444 - 10 < 2)) || (uStack_444 == 0xa0)) {
LAB_0378f700:
            pfVar30 = local_1910;
            if ((uStack_444 == 0xad) || (uStack_444 == 0x200b)) goto LAB_0378f884;
            if (uStack_444 != 0x2060) {
              lVar41 = *(long *)(local_1920 + 0x48);
              if (lVar41 != 0) {
                if (*(uint *)(param_1 + 0x340) < *(uint *)(lVar41 + 0x18)) {
                  lVar41 = lVar41 + (long)(int)*(uint *)(param_1 + 0x340) * 0x60;
                  *(int *)(lVar41 + 0x2c) = *(int *)(lVar41 + 0x2c) + 1;
                  *(int *)(local_1920 + 0x18) = *(int *)(local_1920 + 0x18) + 1;
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
            uVar23 = FUN_026b97f8(uVar18,0);
            if ((uVar23 & 1) != 0) goto LAB_0378f700;
          }
LAB_0378f760:
          pfVar30 = local_1910;
          if (uStack_444 == 0xa0) {
            lVar41 = *(long *)(local_1920 + 0x48);
            if (lVar41 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar41 + 0x18) <= *(uint *)(param_1 + 0x340)) goto thunk_FUN_01ab6c44;
            lVar41 = lVar41 + (long)(int)*(uint *)(param_1 + 0x340) * 0x60;
            *(int *)(lVar41 + 0x20) = *(int *)(lVar41 + 0x20) + 1;
          }
LAB_0378f884:
          bVar10 = *(int *)(lVar31 + 0x74) == 1;
          if (bVar10 && bVar12) {
            bVar10 = uStack_444 == 0x2d;
          }
          if (bVar10) {
            if (*(long *)(param_1 + 0x1a08) == 0) goto LAB_03793c9c;
            fVar49 = *(float *)(param_1 + 0xf4);
            iVar17 = FUN_03776950(*(long *)(param_1 + 0x1a08) + 0xb0,0);
            if (*(long *)(param_1 + 0x1a08) == 0) goto LAB_03793c9c;
            fVar45 = (float)FUN_03776960(*(long *)(param_1 + 0x1a08) + 0xb0,0);
            lVar41 = *(long *)(param_1 + 0x1a00);
            fVar44 = (float)local_1990;
            if (*(char *)(lVar31 + 0xbd) != '\0') {
              fVar44 = 1.0;
            }
            if ((lVar41 == 0) || (*(long *)(lVar41 + 0x20) == 0)) goto LAB_03793c9c;
            fVar66 = *(float *)(param_1 + 0xf0);
            fVar59 = *(float *)(lVar41 + 0x2c);
            fVar47 = (float)FUN_03776ea8(*(long *)(lVar41 + 0x20),0);
            fVar50 = *local_19a8;
            fVar47 = fVar66 * (fVar49 / (float)iVar17) * fVar45 * fVar44 * fVar59 * fVar47;
            fVar49 = *local_19b0;
            if ((uStack_444 == 10) && (*(int *)(param_1 + 0x324) != *(int *)(param_1 + 0x328))) {
              lVar41 = *local_18f8;
              if (lVar41 == 0) goto LAB_03793c9c;
              uVar18 = *(int *)(param_1 + 0x324) - 1;
              if (*(uint *)(lVar41 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
              if (*(long *)(param_1 + 0x1a08) == 0) goto LAB_03793c9c;
              fVar44 = *(float *)(lVar41 + (long)(int)uVar18 * 0x188 + 0x68);
              iVar17 = FUN_03776950(*(long *)(param_1 + 0x1a08) + 0xb0,0);
              if (*(long *)(param_1 + 0x1a08) == 0) goto LAB_03793c9c;
              fVar66 = (float)FUN_03776960(*(long *)(param_1 + 0x1a08) + 0xb0,0);
              lVar41 = *(long *)(param_1 + 0x1a00);
              fVar45 = (float)local_1990;
              if (*(char *)(lVar31 + 0xbd) != '\0') {
                fVar45 = 1.0;
              }
              if ((lVar41 == 0) || (*(long *)(lVar41 + 0x20) == 0)) goto LAB_03793c9c;
              fVar59 = *(float *)(param_1 + 0xf0);
              fVar51 = *(float *)(lVar41 + 0x2c);
              fVar47 = (float)FUN_03776ea8(*(long *)(lVar41 + 0x20),0);
              lVar41 = *(long *)(local_1920 + 0x48);
              if (lVar41 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar41 + 0x18) <= *(uint *)(param_1 + 0x340)) goto thunk_FUN_01ab6c44;
              lVar41 = lVar41 + (long)(int)*(uint *)(param_1 + 0x340) * 0x60;
              fVar50 = *(float *)(lVar41 + 100);
              fVar49 = *(float *)(lVar41 + 0x68);
              fVar47 = fVar59 * (fVar44 / (float)iVar17) * fVar66 * fVar45 * fVar51 * fVar47;
            }
            plVar39 = local_18f8;
            fVar45 = *(float *)(param_1 + 0x2f4);
            fVar44 = 0.0;
            if (*(char *)(lVar31 + 0xb6) == '\0') {
              if ((*(long *)(param_1 + 0x1a00) == 0) ||
                 (lVar41 = *(long *)(*(long *)(param_1 + 0x1a00) + 0x20), lVar41 == 0))
              goto LAB_03793c9c;
              FUN_03776e6c(&local_440,lVar41,0);
              uStack_518 = uStack_438;
              local_520 = local_440;
              local_510 = (undefined4)local_430;
              fVar44 = (float)FUN_03776cb4(&local_520,0);
            }
            pvVar8 = local_1a78;
            fVar66 = *(float *)(param_1 + 0x35c);
            fVar49 = (local_19b4 - fVar50) - fVar49;
            uVar55 = (ulong)(uint)DAT_00d38acc;
            bVar10 = true;
            if ((fVar66 <= fVar49) && (bVar10 = false, !NAN(fVar66))) {
              bVar10 = fVar66 == -1.0;
            }
            if (!bVar10) {
              fVar49 = fVar66;
            }
            uVar42 = (ulong)(uint)fVar49;
            fVar66 = 1.0;
            if (uVar36 != 0) {
              fVar66 = DAT_00d38acc;
            }
            uVar19 = (ulong)(uint)(fVar66 * fVar49);
            if (ABS(fVar45) + fVar47 * fVar44 * (1.0 - *(float *)(param_1 + 0x1594)) <
                fVar66 * fVar49) {
              FUN_03796df8(param_1,local_1a78,local_4d4,*(undefined4 *)(param_1 + 0x324),local_1920,
                           0);
              memcpy(auStack_1518,pvVar8,0x398);
              FUN_020ab0d8(local_1a68,auStack_1518,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
            }
          }
          plVar43 = local_1918;
          lVar41 = *plVar39;
          if (lVar41 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
          uVar18 = *(uint *)(param_1 + 0x340);
          lVar41 = lVar41 + (long)(int)*pfVar30 * 0x188;
          *(uint *)(lVar41 + 0x6c) = uVar18;
          *(undefined4 *)(lVar41 + 0x70) = *(undefined4 *)(param_1 + 0x350);
          if ((bVar12) || ((uStack_444 < 0xe && ((1 << (ulong)(uStack_444 & 0x1f) & 0x2c00U) != 0)))
             ) {
            lVar41 = *(long *)(local_1920 + 0x48);
            if (lVar41 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar41 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
            if (*(int *)(lVar41 + (long)(int)uVar18 * 0x60 + 0x24) == 1) goto LAB_0378fbcc;
          }
          else {
            lVar41 = *(long *)(local_1920 + 0x48);
            if (lVar41 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
            if (*(uint *)(lVar41 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
            *(undefined4 *)(lVar41 + (long)(int)uVar18 * 0x60 + 0x6c) =
                 *(undefined4 *)(param_1 + 0x158);
          }
          if (uStack_444 != 0x200b) {
            if (uStack_444 == 9) {
              if (*local_1918 == 0) goto LAB_03793c9c;
              fVar49 = (float)FUN_03776a48(*local_1918 + 0xb0,0);
              if (*plVar43 == 0) goto LAB_03793c9c;
              bVar13 = FUN_03779d4c(*plVar43,0);
              fVar44 = *(float *)(param_1 + 0x2f4);
              fVar45 = fVar46 * fVar49 * (float)bVar13;
              fVar49 = fVar45 * (float)(int)(fVar44 / fVar45);
              uVar55 = (ulong)(uint)fVar49;
              uVar19 = (ulong)(uint)(fVar44 + fVar45);
              if (fVar49 <= fVar44) {
                fVar49 = fVar44 + fVar45;
              }
              *(float *)(param_1 + 0x2f4) = fVar49;
            }
            else {
              fVar49 = *(float *)(param_1 + 0x2f0);
              if (fVar49 == 0.0) {
                fVar44 = *(float *)(param_1 + 0x2f4);
                if (*(char *)(lVar31 + 0xb6) == '\0') {
                  fVar49 = (float)FUN_03776cb4(&local_4f0,0);
                  fVar47 = *(float *)(param_1 + 0x19a8);
                  fVar45 = (float)FUN_03778e7c(&local_500,0);
                  if (*(long *)(param_1 + 0x68) != 0) {
                    fVar66 = (float)FUN_03779d0c(*(long *)(param_1 + 0x68),0);
                    fVar50 = *(float *)(param_1 + 0x1594);
                    fVar49 = fVar46 * (fVar49 * fVar47 + fVar45);
                    fVar45 = 1.0 - fVar50;
                    fVar44 = fVar44 + fVar45 * (*(float *)(param_1 + 0x2ec) +
                                               fVar49 + local_1988 *
                                                        ((float)local_1998 +
                                                        (float)local_1958 + fVar66));
                    goto UnityEngine_UIElements_WheelEvent___ctor;
                  }
                  goto LAB_03793c9c;
                }
                fVar49 = (float)FUN_03778e7c(&local_500,0);
                if (*local_1918 == 0) goto LAB_03793c9c;
                fVar45 = (float)FUN_03779d0c(*local_1918,0);
                uVar55 = (ulong)(uint)*(float *)(param_1 + 0x1594);
                uVar42 = (ulong)(uint)(fVar46 * fVar49);
                fVar47 = 1.0 - *(float *)(param_1 + 0x1594);
                uVar19 = (ulong)(uint)fVar47;
                fVar44 = fVar44 - fVar47 * (*(float *)(param_1 + 0x2ec) +
                                           fVar46 * fVar49 +
                                           local_1988 *
                                           ((float)local_1998 + (float)local_1958 + fVar45));
                *(float *)(param_1 + 0x2f4) = fVar44;
                if ((uVar16 == 0) && (uStack_444 != 0x200b)) goto FUN_0378fd94;
                fVar49 = local_1988 * *(float *)(lVar31 + 0xc4);
                fVar44 = fVar44 - fVar49;
              }
              else {
                if (*local_1918 == 0) goto LAB_03793c9c;
                fVar44 = *(float *)(param_1 + 0x2f4);
                fVar47 = (float)FUN_03779d0c(*local_1918,0);
                fVar50 = *(float *)(param_1 + 0x1594);
                fVar49 = fVar49 - local_19f4;
                fVar45 = 1.0 - fVar50;
                fVar44 = fVar44 + fVar45 * (*(float *)(param_1 + 0x2ec) +
                                           fVar49 + local_1988 * ((float)local_1958 + fVar47));
UnityEngine_UIElements_WheelEvent___ctor:
                uVar42 = (ulong)(uint)fVar49;
                uVar55 = (ulong)(uint)fVar50;
                uVar19 = (ulong)(uint)fVar45;
                *(float *)(param_1 + 0x2f4) = fVar44;
                if ((uVar16 == 0) && (uStack_444 != 0x200b)) goto FUN_0378fd94;
                fVar49 = local_1988 * *(float *)(lVar31 + 0xc4);
                fVar44 = fVar44 + fVar49;
              }
              uVar55 = (ulong)(uint)local_1988;
              uVar19 = (ulong)(uint)fVar49;
              *(float *)(param_1 + 0x2f4) = fVar44;
            }
          }
FUN_0378fd94:
          lVar41 = *plVar39;
          if (lVar41 == 0) goto LAB_03793c9c;
          fVar49 = *pfVar30;
          if ((uint)*(float *)(lVar41 + 0x18) <= (uint)fVar49) goto thunk_FUN_01ab6c44;
          *(undefined4 *)(lVar41 + (long)(int)fVar49 * 0x188 + 0x164) =
               *(undefined4 *)(param_1 + 0x2f4);
          if (uStack_444 == 0xd) {
            uVar19 = 0;
            *(float *)(param_1 + 0x2f4) = *(float *)(param_1 + 0x2fc) + 0.0;
          }
          if ((*(int *)(lVar31 + 0x74) == 5) &&
             (((0xd < uStack_444 || ((1 << (ulong)(uStack_444 & 0x1f) & 0x2c00U) == 0)) &&
              (1 < uStack_444 - 0x2028)))) {
            lVar41 = *local_1a90;
            if (lVar41 == 0) goto LAB_03793c9c;
            uVar18 = *(uint *)(param_1 + 0x350);
            if (*(int *)(lVar41 + 0x18) < (int)(uVar18 + 1)) {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                          + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              plVar39 = local_1a90;
              FUN_01ff3814(local_1a90,uVar18 + 1,1,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__
                          );
              lVar41 = *plVar39;
              if (lVar41 == 0) goto LAB_03793c9c;
              uVar18 = *(uint *)(param_1 + 0x350);
            }
            if (*(uint *)(lVar41 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
            lVar20 = lVar41 + (long)(int)uVar18 * 0x14;
            fVar44 = *(float *)(lVar20 + 0x30);
            uVar19 = (ulong)(uint)fVar44;
            *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)(param_1 + 0x19c8);
            fVar49 = *(float *)(param_1 + 0x378);
            if (fVar44 <= *(float *)(param_1 + 0x378)) {
              fVar49 = fVar44;
            }
            *(float *)(lVar20 + 0x30) = fVar49;
            if (*(char *)(param_1 + 0x37c) != '\0') {
              *(undefined1 *)(param_1 + 0x37c) = 0;
              *(undefined4 *)(lVar41 + (long)(int)uVar18 * 0x14 + 0x20) =
                   *(undefined4 *)(param_1 + 0x324);
            }
            fVar49 = *pfVar30;
            *(float *)(lVar41 + (long)(int)uVar18 * 0x14 + 0x24) = fVar49;
          }
          plVar39 = local_18f8;
          if (((uStack_444 < 0xc) && ((1 << (ulong)(uStack_444 & 0x1f) & 0xc08U) != 0)) ||
             ((uStack_444 - 0x2028 < 2 ||
              (((bool)(bVar12 & uStack_444 == 0x2d) || (fVar49 == local_1a04)))))) {
            if (0.0 < *(float *)(param_1 + 0x2e0)) {
              fVar49 = *(float *)(param_1 + 0x338);
              fVar44 = *(float *)(param_1 + 0x15ac);
              if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              fVar49 = fVar49 - fVar44;
              if (((local_1a38 < ABS(fVar49)) && (*(char *)(param_1 + 0x2e8) == '\0')) &&
                 (*(char *)(param_1 + 0x37c) != '\x01')) {
                uVar62 = *(undefined4 *)(param_1 + 0x328);
                uVar15 = *(undefined4 *)(param_1 + 0x324);
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                            0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_037a5574(fVar49,uVar62,uVar15,local_1920,0);
                plVar39 = local_18f8;
                lVar41 = local_1a68;
                *(float *)(param_1 + 0x378) = *(float *)(param_1 + 0x378) - fVar49;
                *(float *)(param_1 + 0x2e0) = fVar49 + *(float *)(param_1 + 0x2e0);
                plVar24 = (long *)PTR_DAT_03cbe438;
                if (*(int *)(param_1 + 0xad8) == *(int *)(param_1 + 0x340)) {
                  FUN_020ab640(local_1a68,&local_440,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                              );
                  pvVar8 = local_1a78;
                  memcpy(local_1a78,&local_440,0x398);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (param_1 + 0xb28,0);
                  *(float *)(param_1 + 0xaf0) = fVar49 + *(float *)(param_1 + 0xaf0);
                  *(float *)(param_1 + 0xb24) = fVar49 + *(float *)(param_1 + 0xb24);
                  memcpy(auStack_18b0,pvVar8,0x398);
                  FUN_020ab0d8(lVar41,auStack_18b0,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
                }
              }
            }
            lVar41 = local_19d0;
            fVar44 = *(float *)(param_1 + 0x2e0);
            *(undefined1 *)(param_1 + 0x37c) = 0;
            fVar45 = *(float *)(param_1 + 0x33c) - fVar44;
            fVar49 = *(float *)(param_1 + 0x378);
            if (fVar45 <= *(float *)(param_1 + 0x378)) {
              fVar49 = fVar45;
            }
            *(float *)(param_1 + 0x378) = fVar49;
            fVar47 = *(float *)(param_1 + 0x338);
            if (local_44c[0] == '\0') {
              local_448 = fVar49;
            }
            if ((*(char *)(lVar31 + 0xe8) != '\0') &&
               ((*(int *)(lVar31 + 0xd8) <= (int)*pfVar30 ||
                (*(int *)(lVar31 + 0xe0) <= *(int *)(param_1 + 0x340))))) {
              local_44c[0] = '\x01';
            }
            lVar20 = *(long *)(local_1920 + 0x48);
            if (lVar20 == 0) goto LAB_03793c9c;
            uVar18 = *(uint *)(param_1 + 0x340);
            if (*(uint *)(lVar20 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
            iVar17 = *(int *)(param_1 + 0x328);
            lVar21 = lVar20 + (long)(int)uVar18 * 0x60;
            *(int *)(lVar21 + 0x38) = iVar17;
            uVar36 = *(uint *)(param_1 + 0x328);
            if (iVar17 <= (int)*(uint *)(param_1 + 0x330)) {
              uVar36 = *(uint *)(param_1 + 0x330);
            }
            *(uint *)(param_1 + 0x330) = uVar36;
            *(uint *)(lVar21 + 0x3c) = uVar36;
            iVar3 = *(int *)(param_1 + 0x324);
            *(int *)(param_1 + 0x32c) = iVar3;
            *(int *)(lVar21 + 0x40) = iVar3;
            iVar14 = *(int *)(param_1 + 0x330);
            if ((int)uVar36 <= *(int *)(param_1 + 0x334)) {
              iVar14 = *(int *)(param_1 + 0x334);
            }
            *(int *)(param_1 + 0x334) = iVar14;
            *(int *)(lVar21 + 0x44) = iVar14;
            *(int *)(lVar21 + 0x24) = (iVar3 - iVar17) + 1;
            *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)(param_1 + 0x344);
            *(undefined4 *)(lVar21 + 0x30) = *(undefined4 *)(param_1 + 0x348);
            lVar21 = *plVar39;
            if (lVar21 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar21 + 0x18) <= uVar36) goto thunk_FUN_01ab6c44;
            uVar62 = *(undefined4 *)(lVar21 + (long)(int)uVar36 * 0x188 + 0x124);
            lVar20 = lVar20 + (long)(int)uVar18 * 0x60;
            *(float *)(lVar20 + 0x74) = fVar45;
            *(undefined4 *)(lVar20 + 0x70) = uVar62;
            lVar20 = *(long *)(local_1920 + 0x48);
            if (lVar20 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar20 + 0x18) <= *(uint *)(param_1 + 0x340)) goto thunk_FUN_01ab6c44;
            lVar21 = *plVar39;
            if (lVar21 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0x334)) goto thunk_FUN_01ab6c44;
            uVar62 = *(undefined4 *)(lVar21 + (long)(int)*(uint *)(param_1 + 0x334) * 0x188 + 0x130)
            ;
            fVar47 = fVar47 - fVar44;
            lVar20 = lVar20 + (long)(int)*(uint *)(param_1 + 0x340) * 0x60;
            *(float *)(lVar20 + 0x7c) = fVar47;
            *(undefined4 *)(lVar20 + 0x78) = uVar62;
            lVar20 = *(long *)(local_1920 + 0x48);
            if (lVar20 == 0) goto LAB_03793c9c;
            uVar18 = *(uint *)(param_1 + 0x340);
            if (*(uint *)(lVar20 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
            lVar21 = lVar20 + (long)(int)uVar18 * 0x60;
            *(float *)(lVar21 + 0x48) = *(float *)(lVar21 + 0x78) - fVar46 * (float)local_1940;
            *(float *)(lVar21 + 0x60) = local_196c;
            if (*(int *)(lVar21 + 0x24) == 1) {
              *(undefined4 *)(lVar20 + (long)(int)uVar18 * 0x60 + 0x6c) =
                   *(undefined4 *)(param_1 + 0x158);
            }
            if (*local_1918 == 0) goto LAB_03793c9c;
            fVar49 = (float)FUN_03779d0c(*local_1918,0);
            lVar20 = local_1920;
            lVar21 = *plVar39;
            if (lVar21 == 0) goto LAB_03793c9c;
            lVar35 = (long)(int)*(uint *)(param_1 + 0x334);
            if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0x334)) goto thunk_FUN_01ab6c44;
            lVar33 = *(long *)(local_1920 + 0x48);
            if (lVar33 == 0) goto LAB_03793c9c;
            uVar18 = *(uint *)(param_1 + 0x340);
            if (((*(char *)(lVar21 + lVar35 * 0x188 + 0x1a0) == '\0') &&
                (lVar35 = (long)(int)*(uint *)(param_1 + 0x32c),
                *(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0x32c))) ||
               (uVar36 = (uint)*(undefined8 *)(lVar33 + 0x18), uVar36 <= uVar18))
            goto thunk_FUN_01ab6c44;
            fVar46 = *(float *)(lVar21 + lVar35 * 0x188 + 0x164);
            uVar42 = (ulong)(uint)fVar46;
            fVar44 = (1.0 - *(float *)(param_1 + 0x1594)) *
                     (*(float *)(param_1 + 0x2ec) +
                     local_1988 * ((float)local_1998 + (float)local_1958 + fVar49));
            fVar49 = -fVar44;
            if (*(char *)(lVar31 + 0xb6) != '\0') {
              fVar49 = fVar44;
            }
            *(float *)(lVar33 + (long)(int)uVar18 * 0x60 + 0x5c) = fVar46 + fVar49;
            if (uVar36 <= uVar18) goto thunk_FUN_01ab6c44;
            lVar33 = lVar33 + (long)(int)uVar18 * 0x60;
            fVar49 = local_1a3c + (fVar47 - fVar45);
            uVar19 = (ulong)(uint)fVar49;
            uVar55 = 0;
            *(float *)(lVar33 + 0x54) = 0.0 - *(float *)(param_1 + 0x2e0);
            *(float *)(lVar33 + 0x58) = fVar45;
            *(float *)(lVar33 + 0x4c) = fVar49;
            *(float *)(lVar33 + 0x50) = fVar47;
            if (0x2c < (int)uStack_444) {
              if ((uStack_444 - 0x2028 < 2) || (uStack_444 == 0x2d)) goto LAB_03790360;
              goto LAB_03790574;
            }
            if (uStack_444 - 10 < 2) {
LAB_03790360:
              FUN_03796df8(param_1,local_1a48,local_4d4,*(undefined4 *)(param_1 + 0x324),local_1920,
                           0);
              plVar43 = local_1918;
              fVar63 = *(float *)(param_1 + 0x324);
              iVar17 = *(int *)(param_1 + 0x340) + 1;
              *(int *)(param_1 + 0x340) = iVar17;
              *(uint *)(param_1 + 0x328) = (int)fVar63 + 1;
              pfVar30[8] = 0.0;
              pfVar30[9] = 0.0;
              if (*(long *)(lVar20 + 0x48) != 0) {
                if (*(int *)(*(long *)(lVar20 + 0x48) + 0x18) <= iVar17) {
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                              + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_037a56f4(iVar17,local_1920,0);
                  fVar63 = *pfVar30;
                }
                plVar39 = local_18f8;
                lVar20 = local_1920;
                lVar21 = *local_18f8;
                if (lVar21 != 0) {
                  if ((uint)fVar63 < (uint)*(float *)(lVar21 + 0x18)) {
                    fVar49 = *(float *)(lVar21 + (long)(int)fVar63 * 0x188 + 0x158);
                    if (*(float *)(param_1 + 0x2e4) == DAT_00d38ba4) {
                      if ((uStack_444 == 0x2029) || (fVar44 = 0.0, uStack_444 == 10)) {
                        fVar44 = *(float *)(lVar31 + 0xcc);
                      }
                      uVar27 = 0;
                      fVar44 = fVar49 + (0.0 - *(float *)(param_1 + 0x33c)) +
                               local_1a58 * (local_1a5c + *(float *)(param_1 + 0x15b0)) +
                               local_1988 * (*(float *)(lVar31 + 200) + fVar44) +
                               *(float *)(param_1 + 0x2e0);
                    }
                    else {
                      if ((uStack_444 == 0x2029) || (fVar44 = 0.0, uStack_444 == 10)) {
                        fVar44 = *(float *)(lVar31 + 0xcc);
                      }
                      uVar27 = 1;
                      fVar44 = *(float *)(param_1 + 0x2e0) +
                               *(float *)(param_1 + 0x2e4) +
                               local_1988 * (*(float *)(lVar31 + 200) + fVar44);
                    }
                    *(float *)(param_1 + 0x2e0) = fVar44;
                    uVar19 = (ulong)(uint)*(float *)(param_1 + 0x2f8);
                    uVar55 = (ulong)(uint)*(float *)(param_1 + 0x2fc);
                    *(float *)(param_1 + 0x15ac) = fVar49;
                    *(undefined1 *)(param_1 + 0x2e8) = uVar27;
                    *(ulong *)(param_1 + 0x338) = local_1a50;
                    *(float *)(param_1 + 0x2f4) =
                         *(float *)(param_1 + 0x2f8) + 0.0 + *(float *)(param_1 + 0x2fc);
                    uVar42 = local_1a50;
                    FUN_03796df8(param_1,local_1a30,local_4d4,fVar63,local_1920,0);
                    FUN_03796df8(param_1,local_1a00,local_4d4,*(undefined4 *)(param_1 + 0x324),
                                 lVar20,0);
                    local_1a08 = 1.4013e-45;
                    *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
                    goto LAB_0379053c;
                  }
                  goto thunk_FUN_01ab6c44;
                }
              }
              goto LAB_03793c9c;
            }
            if (uStack_444 == 3) {
              if (*(long *)(param_1 + 0x20) != 0) {
                local_4d4 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
                goto LAB_03790574;
              }
              goto LAB_03793c9c;
            }
          }
          else {
            lVar21 = *local_18f8;
            lVar41 = local_19d0;
            if (lVar21 == 0) goto LAB_03793c9c;
          }
LAB_03790574:
          uVar18 = uStack_444;
          lVar20 = local_1920;
          lVar35 = (long)(int)*pfVar30;
          if ((uint)*(float *)(lVar21 + 0x18) <= (uint)*pfVar30) goto thunk_FUN_01ab6c44;
          if (*(char *)(lVar21 + lVar35 * 0x188 + 0x1a0) != '\0') {
            lVar21 = lVar21 + lVar35 * 0x188;
            uVar19 = *(ulong *)(param_1 + 0x360);
            uVar55 = *(ulong *)(lVar21 + 0x124);
            *(ulong *)(param_1 + 0x360) =
                 uVar19 ^ (uVar19 ^ uVar55) &
                          ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar55 >> 0x20)),
                                    -(uint)((float)uVar19 < (float)uVar55));
            uVar23 = *(ulong *)(param_1 + 0x368);
            uVar19 = *(ulong *)(lVar21 + 0x130);
            uVar55 = CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar23 >> 0x20)),
                              -(uint)((float)uVar19 < (float)uVar23));
            *(ulong *)(param_1 + 0x368) = uVar23 ^ (uVar23 ^ uVar19) & ~uVar55;
          }
          if ((local_1a54 != 0) ||
             ((plVar39 = local_18f8, plVar43 = local_1918, *(uint *)(lVar31 + 0x74) < 7 &&
              ((1 << (ulong)(*(uint *)(lVar31 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
            if ((uVar16 == 0) &&
               (((uStack_444 != 0x2d && (uStack_444 != 0x200b)) && (uStack_444 != 0xad)))) {
              if (*(char *)(param_1 + 0x37d) == '\0') {
LAB_03790684:
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                            0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar23 = FUN_037a5f20(uVar18,0);
                lVar20 = local_1a80;
                if ((uVar23 & 1) == 0) {
LAB_037906cc:
                  uVar18 = uStack_444;
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                              + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar23 = FUN_037a5f90(uVar18,0);
                  if ((uVar23 & 1) == 0) goto LAB_037907cc;
                  lVar20 = local_1a80;
                  if (local_1a80 == 0) goto LAB_03793c9c;
                }
                else {
                  if ((local_1a80 == 0) || (lVar21 = FUN_037a8a5c(local_1a80,0), lVar21 == 0))
                  goto LAB_03793c9c;
                  if (*(char *)(lVar21 + 0x28) != '\0') goto LAB_037906cc;
                }
                lVar20 = FUN_037a8a5c(lVar20,0);
                if ((lVar20 == 0) || (lVar20 = FUN_037aad04(lVar20,0), lVar20 == 0))
                goto LAB_03793c9c;
                local_440 = CONCAT44(local_440._4_4_,uStack_444);
                uVar23 = FUN_021e4dc4(lVar20,&local_440,*(undefined8 *)PTR_DAT_03ccd4e8);
                fVar49 = *pfVar30;
                if ((int)fVar49 < (int)local_1a04) {
                  lVar20 = FUN_037a8a5c(local_1a80,0);
                  if (lVar20 == 0) goto LAB_03793c9c;
                  lVar20 = FUN_037aaf28(lVar20,0);
                  lVar21 = *local_18f8;
                  if (lVar21 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar21 + 0x18) <= (int)*pfVar30 + 1U) goto thunk_FUN_01ab6c44;
                  if (lVar20 == 0) goto LAB_03793c9c;
                  local_440 = CONCAT44(local_440._4_4_,
                                       (uint)*(ushort *)
                                              (lVar21 + (long)(int)((int)*pfVar30 + 1U) * 0x188 +
                                              0x20));
                  uVar26 = FUN_021e4dc4(lVar20,&local_440,*(undefined8 *)PTR_DAT_03ccd4e8);
                  if ((uVar23 & 1) != 0) goto LAB_037909e8;
                  if ((uVar26 & 1) == 0) {
                    fVar49 = *pfVar30;
                    goto LAB_03790cd4;
                  }
                  if (((uint)local_1a08 & 1) == 0) goto LAB_03790854;
                }
                else {
                  if ((uVar23 & 1) == 0) {
LAB_03790cd4:
                    lVar20 = local_1920;
                    FUN_03796df8(param_1,local_1a30,local_4d4,fVar49,local_1920,0);
                    local_1a08 = 0.0;
                    plVar39 = local_18f8;
                    plVar43 = local_1918;
                    goto LAB_03790864;
                  }
LAB_037909e8:
                  lVar20 = local_1920;
                  plVar39 = local_18f8;
                  plVar43 = local_1918;
                  if (fVar63 != local_1924 || (((uint)local_1a08 ^ 0xffffffff) & 1) != 0)
                  goto LAB_03790864;
                }
                plVar39 = local_18f8;
                plVar43 = local_1918;
                lVar20 = local_1920;
                if (uVar16 != 0) {
                  FUN_03796df8(param_1,piVar2,local_4d4,*(undefined4 *)(param_1 + 0x324),local_1920,
                               0);
                }
                uVar62 = *(undefined4 *)(param_1 + 0x324);
              }
              else {
LAB_037907cc:
                plVar39 = local_18f8;
                plVar43 = local_1918;
                if (((uint)local_1a08 & 1) == 0) {
LAB_03790854:
                  local_1a08 = 0.0;
                  lVar20 = local_1920;
                  plVar39 = local_18f8;
                  plVar43 = local_1918;
                  goto LAB_03790864;
                }
                if ((uVar16 != 0 && uStack_444 != 0xa0) ||
                   ((local_1a28 & 1) == 0 && uStack_444 == 0xad)) {
                  FUN_03796df8(param_1,piVar2,local_4d4,*(undefined4 *)(param_1 + 0x324),local_1920,
                               0);
                }
                uVar62 = *(undefined4 *)(param_1 + 0x324);
                lVar20 = local_1920;
              }
              FUN_03796df8(param_1,local_1a30,local_4d4,uVar62,lVar20,0);
              local_1a08 = 1.4013e-45;
            }
            else {
              if (*(char *)(param_1 + 0x37d) == '\x01') goto LAB_037907cc;
              if (((uStack_444 - 0x2007 < 0x29) &&
                  ((1L << ((ulong)(uStack_444 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                 ((uStack_444 == 0xa0 || (uStack_444 == 0x2060)))) goto LAB_03790684;
              FUN_03796df8(param_1,local_1a30,local_4d4,lVar35,local_1920,0);
              local_1a08 = 0.0;
              *(undefined4 *)(param_1 + 0x11e0) = 0xffffffff;
              plVar39 = local_18f8;
              plVar43 = local_1918;
            }
          }
LAB_03790864:
          FUN_03796df8(param_1,local_1a00,local_4d4,*(undefined4 *)(param_1 + 0x324),lVar20,0);
          *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
          goto LAB_0378d260;
        }
      }
      FUN_0379e288(1,param_3,0);
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 0x15a8) = 1;
      goto LAB_0378c81c;
    }
  }
  puVar7 = Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_TryGetValue__;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_036772fc(*(undefined8 *)puVar7,0);
  *(undefined1 *)(param_1 + 0x15a8) = 1;
  goto LAB_0378c81c;
LAB_0379194c:
  do {
    plVar39 = local_1918;
    fVar63 = (float)((int)fVar49 - 1);
    local_1924 = fVar49;
    if ((uint)*(float *)(local_1918 + 3) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    lVar41 = (long)(int)fVar63;
    local_1958 = local_1918[lVar41 * 0x31 + 8];
    uVar4 = *(ushort *)(local_1918 + lVar41 * 0x31 + 4);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    local_1964 = (float)FUN_026b63d8(uVar4,0);
    fVar49 = *(float *)(plVar39 + 3);
    if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    lVar20 = *(long *)(lVar21 + 0x48);
    local_1904 = (float)(uint)uVar4;
    if (lVar20 == 0) goto LAB_03793c9c;
    uVar18 = *(uint *)((long)plVar39 + lVar41 * 0x188 + 0x6c);
    local_1980 = (long *)CONCAT44(local_1980._4_4_,uVar62);
    if (*(uint *)(lVar20 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
    local_1940 = (ulong)(int)uVar18;
    lVar20 = lVar20 + local_1940 * 0x60;
    local_1990 = (long)(int)*(float *)(lVar20 + 0x40);
    uVar36 = *(uint *)(lVar20 + 0x6c);
    iVar3 = *(int *)(lVar20 + 0x20);
    iVar17 = *(int *)(lVar20 + 0x28);
    iVar14 = *(int *)(lVar20 + 0x2c);
    local_1930 = (long)*(int *)(lVar20 + 0x44);
    fVar47 = *(float *)(lVar20 + 0x50);
    fVar48 = *(float *)(lVar20 + 0x58);
    fVar46 = *(float *)(lVar20 + 0x5c);
    fVar66 = *(float *)(lVar20 + 0x60);
    fVar50 = *(float *)(lVar20 + 100);
    fVar60 = *(float *)(lVar20 + 0x70);
    fVar59 = *(float *)(lVar20 + 0x74);
    fVar57 = *(float *)(lVar20 + 0x78);
    fVar53 = *(float *)(lVar20 + 0x7c);
    if ((int)uVar36 < 0x421) {
      if ((int)uVar36 < 0x209) {
        if ((int)uVar36 < 0x111) {
          switch(uVar36) {
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
            if (uVar36 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar36) {
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
            if (uVar36 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar36 < 0x405) {
        if ((int)uVar36 < 0x401) {
          if (uVar36 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar36 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar36 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar36 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar36 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar36 == 0x408) || (uVar36 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar36 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar36) {
      if ((int)uVar36 < 0x2005) {
        if (0x2000 < (int)uVar36) {
          if (uVar36 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar36 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar36 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar36 != 0x1010) {
          uVar29 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar36 != 0x2008) && (uVar36 != 0x2010)) {
        uVar29 = 0x2020;
LAB_03791bc8:
        if (uVar36 != uVar29) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar46 = fVar60 + fVar57;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar36 < 0x811) {
      switch(uVar36) {
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
        if ((int)fVar63 <= *(int *)(lVar20 + 0x44)) {
          if ((uint)local_1904 < 0xad) {
            if ((local_1904 != 4.2039e-45) && (local_1904 != 1.4013e-44)) goto FUN_03791eb4;
          }
          else if ((local_1904 != 2.42425e-43) &&
                  ((local_1904 != 1.14949e-41 && (local_1904 != 1.1614e-41)))) {
FUN_03791eb4:
            local_1950 = (long *)CONCAT44(local_1950._4_4_,fVar47);
            local_1a1c = fVar53;
            local_1970 = fVar48;
            if ((uint)fVar49 <= (uint)*(float *)(lVar20 + 0x40)) goto thunk_FUN_01ab6c44;
            lVar20 = local_1918[local_1990 * 0x31 + 4];
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar43 = (long *)PTR_DAT_03cbded8;
            }
            uVar19 = FUN_026b8cc4((short)lVar20,0);
            if ((uVar19 & 1) == 0) {
              bVar12 = (int)uVar18 < *(int *)(param_1 + 0x340);
            }
            else {
              bVar12 = false;
            }
            fVar47 = local_1950._0_4_;
            if ((fVar46 <= fVar66) && (!bVar12 && (uVar36 >> 4 & 1) == 0)) {
              local_1988 = fVar50;
              fVar48 = local_1970;
              fVar53 = local_1a1c;
              if (*(char *)(local_1900 + 0xb6) != '\0') {
                local_1988 = fVar66 + fVar50;
              }
              goto LAB_03791c20;
            }
            if ((local_1924 == 1.4013e-45) || (uVar18 != uVar16)) {
              cVar28 = *(char *)(local_1900 + 0xb6);
            }
            else {
              cVar28 = *(char *)(local_1900 + 0xb6);
              if (fVar63 != *(float *)(local_1900 + 0xe4)) {
                iVar14 = (iVar14 - iVar3) - ((uint)local_1a50 & 1);
                fVar49 = -fVar46;
                if (cVar28 != '\0') {
                  fVar49 = fVar46;
                }
                if (iVar14 < 1) {
                  fVar46 = 1.0;
                }
                else {
                  fVar46 = *(float *)(local_1900 + 0x7c);
                }
                if (iVar14 < 2) {
                  iVar14 = 1;
                }
                fVar66 = fVar66 + fVar49;
                if (local_1904 == 1.26117e-44) {
LAB_037939d0:
                  if (cVar28 != '\0') {
                    fVar66 = fVar66 * (1.0 - fVar46);
                    fVar49 = (float)iVar14;
LAB_03793a0c:
                    local_1988 = local_1988 - fVar66 / fVar49;
                    fVar48 = local_1970;
                    fVar53 = local_1a1c;
                    break;
                  }
                  fVar49 = (float)iVar14;
                  fVar66 = fVar66 * (1.0 - fVar46);
                }
                else {
                  uVar36 = ~(uint)local_1a50;
                  if (local_1904 != 2.24208e-43) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar19 = FUN_026b97f8(local_1904,0);
                    cVar28 = *(char *)(local_1900 + 0xb6);
                    fVar47 = local_1950._0_4_;
                    if ((uVar19 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar66 = fVar66 * fVar46;
                  fVar49 = (float)(int)((iVar3 - (uVar36 & 1)) + iVar17);
                  if (cVar28 != '\0') goto LAB_03793a0c;
                }
                local_1988 = local_1988 + fVar66 / fVar49;
                local_1998 = CONCAT44((float)(local_1998 >> 0x20) + 0.0,(float)local_1998 + 0.0);
                fVar48 = local_1970;
                fVar53 = local_1a1c;
                break;
              }
            }
            local_1988 = fVar50;
            if (cVar28 != '\0') {
              local_1988 = fVar66 + fVar50;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar62 = FUN_026b97f8(local_1904,0);
            local_1998 = 0;
            local_1a50 = CONCAT44(local_1a50._4_4_,uVar62);
            fVar47 = local_1950._0_4_;
            fVar48 = local_1970;
            fVar53 = local_1a1c;
          }
        }
        break;
      default:
        if (uVar36 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar36) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(local_1900 + 0xb6) == '\0') {
          local_1988 = fVar50 + 0.0;
        }
        else {
          local_1988 = 0.0 - fVar46;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        local_1988 = (fVar50 + fVar66 * 0.5) - fVar46 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        local_1988 = (fVar66 + fVar50) - fVar46;
        if (*(char *)(local_1900 + 0xb6) != '\0') {
          local_1988 = fVar66 + fVar50;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar36 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      local_1998 = 0;
    }
switchD_03791aa4_caseD_1003:
    lVar20 = local_1900;
    plVar39 = local_1918;
    lVar21 = local_1920;
    fVar49 = (float)local_1918[3];
    if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    fVar46 = local_19c0 + local_1988;
    local_1950 = (long *)CONCAT44((float)(local_19c8 >> 0x20) + (float)(local_1998 >> 0x20),
                                  (float)local_19c8 + (float)local_1998);
    uStack_1948 = 0;
    plVar24 = local_18f8;
    local_1970 = fVar63;
    if ((char)local_1918[lVar41 * 0x31 + 0x34] == '\0') goto LAB_037924bc;
    cVar28 = (char)local_1918[lVar41 * 0x31 + 5];
    if (cVar28 != '\x01') goto LAB_0379225c;
    local_1a1c = fVar44;
    fVar44 = fmodf(*(float *)(local_1900 + 0xfc) * (float)(int)uVar18,1.0);
    plVar43 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(lVar20 + 0xf4)) {
    case 0:
      fVar44 = 1.0;
      *(undefined4 *)((long)local_1918 + lVar41 * 0x188 + 0xbc) = 0;
      *(undefined4 *)((long)local_1918 + lVar41 * 0x188 + 0x94) = 0;
      *(undefined4 *)((long)local_1918 + lVar41 * 0x188 + 0xe4) = 0x3f800000;
      break;
    case 1:
      if (*(int *)(local_1900 + 0x70) == 0x208) {
        plVar24 = local_1918 + lVar41 * 0x31;
        fVar45 = (local_1988 + *(float *)(local_1918 + lVar41 * 0x31 + 0x14)) -
                 *(float *)(param_1 + 0x360);
        fVar53 = *(float *)(param_1 + 0x368) - *(float *)(param_1 + 0x360);
        goto LAB_03791dcc;
      }
      fVar45 = *(float *)(local_1918 + lVar41 * 0x31 + 0xf);
      fVar53 = *(float *)(local_1918 + lVar41 * 0x31 + 0x19);
      fVar57 = fVar57 - fVar60;
      fVar66 = *(float *)(local_1918 + lVar41 * 0x31 + 0x1e);
      *(float *)((long)local_1918 + lVar41 * 0x188 + 0xbc) =
           fVar44 + (*(float *)(local_1918 + lVar41 * 0x31 + 0x14) - fVar60) / fVar57;
      *(float *)((long)local_1918 + lVar41 * 0x188 + 0x94) = fVar44 + (fVar45 - fVar60) / fVar57;
      *(float *)((long)local_1918 + lVar41 * 0x188 + 0xe4) = fVar44 + (fVar53 - fVar60) / fVar57;
      fVar44 = fVar44 + (fVar66 - fVar60) / fVar57;
      break;
    case 2:
      plVar24 = local_1918 + lVar41 * 0x31;
      fVar53 = *(float *)(param_1 + 0x368) - *(float *)(param_1 + 0x360);
      fVar45 = (local_1988 + *(float *)(plVar24 + 0x14)) - *(float *)(param_1 + 0x360);
LAB_03791dcc:
      *(float *)((long)plVar24 + 0xbc) = fVar44 + fVar45 / fVar53;
      *(float *)((long)plVar24 + 0x94) =
           fVar44 + ((local_1988 + *(float *)(plVar24 + 0xf)) - *(float *)(param_1 + 0x360)) /
                    (*(float *)(param_1 + 0x368) - *(float *)(param_1 + 0x360));
      *(float *)((long)plVar24 + 0xe4) =
           fVar44 + ((local_1988 + *(float *)(plVar24 + 0x19)) - *(float *)(param_1 + 0x360)) /
                    (*(float *)(param_1 + 0x368) - *(float *)(param_1 + 0x360));
      fVar44 = fVar44 + ((local_1988 + *(float *)(plVar24 + 0x1e)) - *(float *)(param_1 + 0x360)) /
                        (*(float *)(param_1 + 0x368) - *(float *)(param_1 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(local_1900 + 0xf8)) {
      case 0:
        *(undefined4 *)(local_1918 + lVar41 * 0x31 + 0x18) = 0;
        *(undefined4 *)(local_1918 + lVar41 * 0x31 + 0x13) = 0x3f800000;
        *(undefined4 *)(local_1918 + lVar41 * 0x31 + 0x1d) = 0;
        *(undefined4 *)(local_1918 + lVar41 * 0x31 + 0x22) = 0x3f800000;
        break;
      case 1:
        fVar45 = fVar44 + (*(float *)((long)local_1918 + lVar41 * 0x188 + 0xa4) - fVar59) /
                          (fVar53 - fVar59);
        fVar53 = fVar44 + (*(float *)((long)local_1918 + lVar41 * 0x188 + 0x7c) - fVar59) /
                          (fVar53 - fVar59);
        *(float *)(local_1918 + lVar41 * 0x31 + 0x18) = fVar45;
        *(float *)(local_1918 + lVar41 * 0x31 + 0x13) = fVar53;
        *(float *)(local_1918 + lVar41 * 0x31 + 0x1d) = fVar45;
        *(float *)(local_1918 + lVar41 * 0x31 + 0x22) = fVar53;
        break;
      case 2:
        fVar57 = *(float *)((long)local_1918 + lVar41 * 0x188 + 0x7c);
        fVar45 = fVar44 + (*(float *)((long)local_1918 + lVar41 * 0x188 + 0xa4) -
                          *(float *)(param_1 + 0x364)) /
                          (*(float *)(param_1 + 0x36c) - *(float *)(param_1 + 0x364));
        *(float *)(local_1918 + lVar41 * 0x31 + 0x18) = fVar45;
        fVar53 = *(float *)(param_1 + 0x364);
        fVar66 = *(float *)(param_1 + 0x36c);
        *(float *)(local_1918 + lVar41 * 0x31 + 0x1d) = fVar45;
        fVar45 = fVar44 + (fVar57 - fVar53) / (fVar66 - fVar53);
        *(float *)(local_1918 + lVar41 * 0x31 + 0x13) = fVar45;
        *(float *)(local_1918 + lVar41 * 0x31 + 0x22) = fVar45;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        fVar49 = (float)local_1918[3];
      }
      if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
      fVar45 = *(float *)(local_1918 + lVar41 * 0x31 + 0x2d);
      fVar53 = (1.0 - (*(float *)(local_1918 + lVar41 * 0x31 + 0x18) +
                      *(float *)(local_1918 + lVar41 * 0x31 + 0x13)) * fVar45) * 0.5;
      fVar66 = fVar44 + *(float *)(local_1918 + lVar41 * 0x31 + 0x18) * fVar45 + fVar53;
      fVar44 = fVar44 + *(float *)(local_1918 + lVar41 * 0x31 + 0x13) * fVar45 + fVar53;
      *(float *)((long)local_1918 + lVar41 * 0x188 + 0xbc) = fVar66;
      *(float *)((long)local_1918 + lVar41 * 0x188 + 0x94) = fVar66;
      *(float *)((long)local_1918 + lVar41 * 0x188 + 0xe4) = fVar44;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)((long)local_1918 + lVar41 * 0x188 + 0x10c) = fVar44;
switchD_03791d04_default:
    switch(*(undefined4 *)(local_1900 + 0xf8)) {
    case 0:
      if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
      *(undefined4 *)(local_1918 + lVar41 * 0x31 + 0x18) = 0;
      *(undefined4 *)(local_1918 + lVar41 * 0x31 + 0x13) = 0x3f800000;
      *(undefined4 *)(local_1918 + lVar41 * 0x31 + 0x1d) = 0x3f800000;
      *(undefined4 *)(local_1918 + lVar41 * 0x31 + 0x22) = 0;
      break;
    case 1:
      if ((uint)fVar63 < (uint)fVar49) {
        plVar24 = local_1918 + lVar41 * 0x31;
        fVar44 = (*(float *)((long)plVar24 + 0xa4) - fVar48) / (fVar47 - fVar48);
        fVar45 = (*(float *)((long)plVar24 + 0x7c) - fVar48) / (fVar47 - fVar48);
        *(float *)(plVar24 + 0x18) = fVar44;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
      plVar24 = local_1918 + lVar41 * 0x31;
      fVar44 = (*(float *)((long)plVar24 + 0xa4) - *(float *)(param_1 + 0x364)) /
               (*(float *)(param_1 + 0x36c) - *(float *)(param_1 + 0x364));
      *(float *)(plVar24 + 0x18) = fVar44;
      fVar45 = (*(float *)((long)plVar24 + 0x7c) - *(float *)(param_1 + 0x364)) /
               (*(float *)(param_1 + 0x36c) - *(float *)(param_1 + 0x364));
LAB_0379217c:
      *(float *)(plVar24 + 0x13) = fVar45;
      *(float *)(plVar24 + 0x1d) = fVar45;
      *(float *)(plVar24 + 0x22) = fVar44;
      break;
    case 3:
      if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
      fVar44 = *(float *)((long)local_1918 + lVar41 * 0x188 + 0xbc);
      fVar45 = *(float *)((long)local_1918 + lVar41 * 0x188 + 0xe4);
      fVar48 = *(float *)(local_1918 + lVar41 * 0x31 + 0x2d);
      fVar47 = (1.0 - (fVar44 + fVar45) / fVar48) * 0.5;
      fVar44 = fVar44 / fVar48 + fVar47;
      fVar47 = fVar45 / fVar48 + fVar47;
      *(float *)(local_1918 + lVar41 * 0x31 + 0x18) = fVar44;
      *(float *)(local_1918 + lVar41 * 0x31 + 0x13) = fVar47;
      *(float *)(local_1918 + lVar41 * 0x31 + 0x22) = fVar44;
      *(float *)(local_1918 + lVar41 * 0x31 + 0x1d) = fVar47;
    }
    if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    fVar45 = *(float *)((long)local_1918 + lVar41 * 0x188 + 0x16c) *
             (1.0 - *(float *)(param_1 + 0x1594));
    if ((*(char *)((long)local_1918 + lVar41 * 0x188 + 100) == '\0') &&
       ((*(byte *)((long)local_1918 + lVar41 * 0x188 + 0x19c) & 1) != 0)) {
      fVar45 = -fVar45;
    }
    *(float *)(local_1918 + lVar41 * 0x31 + 0x17) = fVar45;
    *(float *)(local_1918 + lVar41 * 0x31 + 0x12) = fVar45;
    *(float *)(local_1918 + lVar41 * 0x31 + 0x1c) = fVar45;
    *(float *)(local_1918 + lVar41 * 0x31 + 0x21) = fVar45;
    *(undefined4 *)((long)local_1918 + lVar41 * 0x188 + 0xbc) = 0x3f800000;
    *(float *)(local_1918 + lVar41 * 0x31 + 0x18) = fVar45;
    *(undefined4 *)((long)local_1918 + lVar41 * 0x188 + 0x94) = 0x3f800000;
    *(float *)(local_1918 + lVar41 * 0x31 + 0x13) = fVar45;
    *(undefined4 *)((long)local_1918 + lVar41 * 0x188 + 0xe4) = 0x3f800000;
    *(float *)(local_1918 + lVar41 * 0x31 + 0x1d) = fVar45;
    *(undefined4 *)((long)local_1918 + lVar41 * 0x188 + 0x10c) = 0x3f800000;
    *(float *)(local_1918 + lVar41 * 0x31 + 0x22) = fVar45;
    fVar44 = local_1a1c;
LAB_0379225c:
    if (((int)fVar63 < *(int *)(local_1900 + 0xd8)) &&
       ((int)local_19a8 < *(int *)(local_1900 + 0xdc))) {
      if ((*(int *)(local_1900 + 0xe0) <= (int)uVar18) || (*(int *)(local_1900 + 0x74) == 5)) {
        if ((*(int *)(local_1900 + 0xe0) <= (int)uVar18) || (*(int *)(local_1900 + 0x74) != 5))
        goto LAB_037922d4;
        if ((uint)fVar63 < (uint)fVar49) {
          bVar12 = *(uint *)(local_1918 + lVar41 * 0x31 + 0xe) == local_1a84;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      fVar49 = SUB84(local_1950,0);
      fVar47 = (float)((ulong)local_1950 >> 0x20);
      local_1918[lVar41 * 0x31 + 0x14] =
           CONCAT44(fVar49 + (float)((ulong)local_1918[lVar41 * 0x31 + 0x14] >> 0x20),
                    fVar46 + (float)local_1918[lVar41 * 0x31 + 0x14]);
      *(float *)(local_1918 + lVar41 * 0x31 + 0x15) =
           fVar47 + *(float *)(local_1918 + lVar41 * 0x31 + 0x15);
      local_1918[lVar41 * 0x31 + 0xf] =
           CONCAT44(fVar49 + (float)((ulong)local_1918[lVar41 * 0x31 + 0xf] >> 0x20),
                    fVar46 + (float)local_1918[lVar41 * 0x31 + 0xf]);
      *(float *)(local_1918 + lVar41 * 0x31 + 0x10) =
           fVar47 + *(float *)(local_1918 + lVar41 * 0x31 + 0x10);
      local_1918[lVar41 * 0x31 + 0x19] =
           CONCAT44(fVar49 + (float)((ulong)local_1918[lVar41 * 0x31 + 0x19] >> 0x20),
                    fVar46 + (float)local_1918[lVar41 * 0x31 + 0x19]);
      *(float *)(local_1918 + lVar41 * 0x31 + 0x1a) =
           fVar47 + *(float *)(local_1918 + lVar41 * 0x31 + 0x1a);
      local_1918[lVar41 * 0x31 + 0x1e] =
           CONCAT44(fVar49 + (float)((ulong)local_1918[lVar41 * 0x31 + 0x1e] >> 0x20),
                    fVar46 + (float)local_1918[lVar41 * 0x31 + 0x1e]);
      *(float *)(local_1918 + lVar41 * 0x31 + 0x1f) =
           fVar47 + *(float *)(local_1918 + lVar41 * 0x31 + 0x1f);
    }
    else {
LAB_037922d4:
      bVar12 = false;
LAB_037922d8:
      if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
      if (bVar12) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar43);
        DAT_0411f172 = '\x01';
        fVar49 = *(float *)(local_1918 + 3);
      }
      lVar20 = (*(long **)(*plVar43 + 0xb8))[1];
      local_1918[lVar41 * 0x31 + 0x14] = **(long **)(*plVar43 + 0xb8);
      *(int *)(local_1918 + lVar41 * 0x31 + 0x15) = (int)lVar20;
      if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
      lVar20 = (*(long **)(*plVar43 + 0xb8))[1];
      local_1918[lVar41 * 0x31 + 0xf] = **(long **)(*plVar43 + 0xb8);
      *(int *)(local_1918 + lVar41 * 0x31 + 0x10) = (int)lVar20;
      lVar20 = (*(long **)(*plVar43 + 0xb8))[1];
      local_1918[lVar41 * 0x31 + 0x19] = **(long **)(*plVar43 + 0xb8);
      *(int *)(local_1918 + lVar41 * 0x31 + 0x1a) = (int)lVar20;
      lVar20 = (*(long **)(*plVar43 + 0xb8))[1];
      local_1918[lVar41 * 0x31 + 0x1e] = **(long **)(*plVar43 + 0xb8);
      *(int *)(local_1918 + lVar41 * 0x31 + 0x1f) = (int)lVar20;
      *(undefined1 *)(plVar39 + lVar41 * 0x31 + 0x34) = 0;
    }
    plVar24 = local_18f8;
    iVar17 = FUN_0368e42c(0);
    lVar20 = local_1900;
    if (iVar17 == 1) {
      cVar38 = *(char *)(local_1900 + 0xa2);
    }
    else {
      cVar38 = '\0';
    }
    if (cVar28 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar20 = local_1900;
      FUN_037a429c(local_1970,cVar38 != '\0',local_1900,lVar21,0);
    }
    else if (cVar28 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(local_1970,cVar38 != '\0',lVar20,lVar21,0);
    }
LAB_037924bc:
    lVar31 = *plVar24;
    if (lVar31 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar31 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    lVar31 = lVar31 + lVar41 * 0x188;
    uVar40 = *(undefined8 *)(lVar31 + 0x124);
    fVar49 = SUB84(local_1950,0);
    fVar47 = (float)((ulong)local_1950 >> 0x20);
    *(undefined8 *)(lVar31 + 0x124) =
         CONCAT44(fVar49 + (float)((ulong)uVar40 >> 0x20),fVar46 + (float)uVar40);
    *(float *)(lVar31 + 300) = fVar47 + *(float *)(lVar31 + 300);
    lVar31 = *plVar24;
    if (lVar31 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar31 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    lVar31 = lVar31 + lVar41 * 0x188;
    *(ulong *)(lVar31 + 0x118) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar31 + 0x118) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar31 + 0x118));
    *(float *)(lVar31 + 0x120) = fVar47 + *(float *)(lVar31 + 0x120);
    lVar31 = *plVar24;
    if (lVar31 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar31 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    lVar31 = lVar31 + lVar41 * 0x188;
    *(ulong *)(lVar31 + 0x130) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar31 + 0x130) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar31 + 0x130));
    *(float *)(lVar31 + 0x138) = fVar47 + *(float *)(lVar31 + 0x138);
    lVar31 = *plVar24;
    if (lVar31 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar31 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    lVar31 = lVar31 + lVar41 * 0x188;
    *(float *)(lVar31 + 0x13c) = fVar46 + *(float *)(lVar31 + 0x13c);
    *(ulong *)(lVar31 + 0x140) =
         CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar31 + 0x140) >> 0x20),
                  fVar49 + (float)*(undefined8 *)(lVar31 + 0x140));
    lVar31 = *plVar24;
    if (lVar31 == 0) goto LAB_03793c9c;
    fVar47 = *(float *)(lVar31 + 0x18);
    if ((uint)fVar47 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    lVar35 = lVar31 + lVar41 * 0x188;
    *(float *)(lVar35 + 0x148) = fVar46 + *(float *)(lVar35 + 0x148);
    *(float *)(lVar35 + 0x164) = fVar46 + *(float *)(lVar35 + 0x164);
    *(float *)(lVar35 + 0x154) = fVar49 + *(float *)(lVar35 + 0x154);
    uVar40 = *(undefined8 *)(lVar35 + 0x14c);
    *(undefined8 *)(lVar35 + 0x14c) =
         CONCAT44(fVar49 + (float)((ulong)uVar40 >> 0x20),fVar49 + (float)uVar40);
    fVar48 = (float)local_1978;
    if (uVar18 == uVar16) {
      fVar47 = (float)((int)*local_1910 - 1);
      if (fVar63 == fVar47) goto LAB_037926b4;
    }
    else {
      lVar35 = *(long *)(lVar21 + 0x48);
      if (lVar35 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar35 + 0x18) <= uVar16) goto thunk_FUN_01ab6c44;
      lVar33 = (long)(int)uVar16;
      lVar37 = lVar35 + lVar33 * 0x60;
      fVar53 = fVar49 + *(float *)(lVar37 + 0x58);
      *(ulong *)(lVar37 + 0x50) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar37 + 0x50) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar37 + 0x50));
      *(float *)(lVar37 + 0x58) = fVar53;
      *(float *)(lVar37 + 0x5c) = fVar46 + *(float *)(lVar37 + 0x5c);
      if ((uint)fVar47 <= (uint)*(float *)(lVar37 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar62 = *(undefined4 *)(lVar31 + (long)(int)*(float *)(lVar37 + 0x38) * 0x188 + 0x124);
      lVar35 = lVar35 + lVar33 * 0x60;
      *(float *)(lVar35 + 0x74) = fVar53;
      *(undefined4 *)(lVar35 + 0x70) = uVar62;
      lVar31 = *(long *)(lVar21 + 0x48);
      if (lVar31 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar31 + 0x18) <= uVar16) goto thunk_FUN_01ab6c44;
      lVar35 = *plVar24;
      if (lVar35 == 0) goto LAB_03793c9c;
      uVar16 = *(uint *)(lVar31 + lVar33 * 0x60 + 0x44);
      if (*(uint *)(lVar35 + 0x18) <= uVar16) goto thunk_FUN_01ab6c44;
      lVar31 = lVar31 + lVar33 * 0x60;
      *(undefined4 *)(lVar31 + 0x78) = *(undefined4 *)(lVar35 + (long)(int)uVar16 * 0x188 + 0x130);
      *(undefined4 *)(lVar31 + 0x7c) = *(undefined4 *)(lVar31 + 0x50);
      fVar47 = (float)((int)*local_1910 - 1);
LAB_037926b4:
      if (fVar63 == fVar47) {
        lVar31 = *(long *)(lVar21 + 0x48);
        if (lVar31 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar31 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
        lVar35 = lVar31 + local_1940 * 0x60;
        fVar47 = fVar49 + *(float *)(lVar35 + 0x58);
        *(ulong *)(lVar35 + 0x50) =
             CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar35 + 0x50) >> 0x20),
                      fVar49 + (float)*(undefined8 *)(lVar35 + 0x50));
        *(float *)(lVar35 + 0x58) = fVar47;
        *(float *)(lVar35 + 0x5c) = fVar46 + *(float *)(lVar35 + 0x5c);
        lVar33 = *plVar24;
        if (lVar33 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar33 + 0x18) <= *(uint *)(lVar35 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar62 = *(undefined4 *)(lVar33 + (long)(int)*(uint *)(lVar35 + 0x38) * 0x188 + 0x124);
        lVar31 = lVar31 + local_1940 * 0x60;
        *(float *)(lVar31 + 0x74) = fVar47;
        *(undefined4 *)(lVar31 + 0x70) = uVar62;
        lVar31 = *(long *)(lVar21 + 0x48);
        if (lVar31 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar31 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
        lVar35 = *plVar24;
        if (lVar35 == 0) goto LAB_03793c9c;
        uVar16 = *(uint *)(lVar31 + local_1940 * 0x60 + 0x44);
        if (*(uint *)(lVar35 + 0x18) <= uVar16) goto thunk_FUN_01ab6c44;
        lVar31 = lVar31 + local_1940 * 0x60;
        *(undefined4 *)(lVar31 + 0x78) = *(undefined4 *)(lVar35 + (long)(int)uVar16 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar31 + 0x7c) = *(undefined4 *)(lVar31 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    fVar49 = local_1904;
    uVar19 = FUN_026b82c4(local_1904,0);
    if (((((uVar19 & 1) == 0) && (1 < (int)fVar49 - 0x2010U)) && (fVar49 != 2.42425e-43)) &&
       (fVar49 != 6.30584e-44)) {
      if ((local_1978 & 0x100000000) == 0) {
        if (local_1924 == 1.4013e-45) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar49 = local_1904;
          uVar16 = FUN_026b81f8(local_1904,0);
          if (((fVar49 == 1.14949e-41) || ((((uint)local_1964 | uVar16 ^ 1) & 1) != 0)) ||
             (*local_1910 == 1.4013e-45)) goto LAB_037930d8;
        }
        local_1978 = local_1978 & 0xffffffff;
      }
      else {
        if (((local_1924 != 1.4013e-45) && ((int)fVar63 < (int)(*(uint *)(local_1918 + 3) - 1))) &&
           (((int)fVar63 < (int)*local_1910 &&
            ((local_1904 == 1.15145e-41 || (local_1904 == 5.46506e-44)))))) {
          if (*(uint *)(local_1918 + 3) <= (int)local_1924 - 2U) goto thunk_FUN_01ab6c44;
          uVar5 = *(undefined2 *)((long)local_1918 + (long)local_1938 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b82c4(uVar5,0);
          if ((uVar19 & 1) != 0) {
            if ((uint)*(float *)(local_1918 + 3) <= (uint)local_1924) goto thunk_FUN_01ab6c44;
            uVar5 = *(undefined2 *)((long)local_1918 + (long)local_1938 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b82c4(uVar5,0);
            if ((uVar19 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (fVar63 == (float)((int)*local_1910 - 1U)) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b82c4(local_1904,0);
          if ((uVar19 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          local_1970 = (float)((int)local_1968 - 1);
        }
        lVar20 = *local_19e8;
        if (lVar20 == 0) goto LAB_03793c9c;
        uVar16 = *(uint *)(lVar21 + 0x1c);
        iVar17 = *(int *)(lVar20 + 0x18);
        if (iVar17 < (int)(uVar16 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar39 = local_19e8;
          FUN_01ff37b8(local_19e8,iVar17 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar20 = *plVar39;
          if (lVar20 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar16) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + (long)(int)uVar16 * 0xc;
        *(float *)(lVar20 + 0x20) = fVar48;
        *(float *)(lVar20 + 0x24) = local_1970;
        *(int *)(lVar20 + 0x28) = ((int)local_1970 - (int)fVar48) + 1;
        lVar20 = *(long *)(lVar21 + 0x48);
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar20 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + local_1940 * 0x60;
        local_1978 = local_1978 & 0xffffffff;
        local_19a8 = (float *)CONCAT44(local_19a8._4_4_,(int)local_19a8 + 1);
        *(int *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x34) + 1;
        lVar20 = local_1900;
      }
    }
    else {
      if ((local_1978 & 0x100000000) == 0) {
        fVar48 = fVar63;
      }
      if (fVar63 == (float)((int)*local_1910 - 1U)) {
        lVar20 = *local_19e8;
        if (lVar20 == 0) goto LAB_03793c9c;
        uVar16 = *(uint *)(lVar21 + 0x1c);
        iVar17 = *(int *)(lVar20 + 0x18);
        if (iVar17 < (int)(uVar16 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar39 = local_19e8;
          FUN_01ff37b8(local_19e8,iVar17 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar20 = *plVar39;
          if (lVar20 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar16) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + (long)(int)uVar16 * 0xc;
        *(float *)(lVar20 + 0x20) = fVar48;
        *(float *)(lVar20 + 0x24) = local_1970;
        *(int *)(lVar20 + 0x28) = (int)local_1924 - (int)fVar48;
        lVar20 = *(long *)(lVar21 + 0x48);
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar20 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + local_1940 * 0x60;
        local_19a8 = (float *)CONCAT44(local_19a8._4_4_,(int)local_19a8 + 1);
        *(int *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x34) + 1;
        lVar20 = local_1900;
      }
LAB_0379289c:
      local_1978 = CONCAT44(1,(float)local_1978);
    }
    fVar49 = local_1964;
    lVar31 = *plVar24;
    if (lVar31 == 0) goto LAB_03793c9c;
    fVar46 = *(float *)(lVar31 + 0x18);
    if ((uint)fVar46 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar31 + lVar41 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if ((local_1960 & 0x100000000) == 0) {
LAB_03792a8c:
        local_1960 = local_1960 & 0xffffffff;
      }
      else {
LAB_037928d0:
        if ((uint)fVar46 <= (int)local_1924 - 2U) goto thunk_FUN_01ab6c44;
        uVar62 = *(undefined4 *)((long)local_1938 + lVar31 + -0x354);
        uVar15 = *(undefined4 *)((long)local_1938 + lVar31 + -0x318);
LAB_03792b18:
LAB_03792b34:
        FUN_0379d0d0(local_1a10._0_4_,local_1a18,local_1a14,uVar62,local_1984,0,local_1a08,uVar15,
                     param_1,(ulong)local_19e0 & 0xffffffff,lVar20,lVar21,0);
LAB_03792b60:
        fVar44 = 0.0;
        local_1960 = local_1960 & 0xffffffff;
        local_1984 = DAT_00d38d70;
        local_196c = 0.0;
      }
    }
    else {
      lVar35 = *(long *)(param_1 + 0x15b8);
      if (lVar35 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar35 + 0x18) <= *(uint *)(param_1 + 0x1a38)) goto thunk_FUN_01ab6c44;
      fVar46 = *(float *)(lVar31 + lVar41 * 0x188 + 0x70);
      *(int *)(lVar31 + lVar41 * 0x188 + 0x178) =
           *(int *)(lVar35 + (long)(int)*(uint *)(param_1 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(lVar20 + 0xd8) < (int)fVar63) || (*(int *)(lVar20 + 0xe0) < (int)uVar18)) {
        bVar12 = true;
      }
      else if (*(int *)(lVar20 + 0x74) == 5) {
        bVar12 = (int)fVar46 + 1 != *(int *)(lVar20 + 0xf0);
      }
      else {
        bVar12 = false;
      }
      bVar10 = local_1904 != 1.14949e-41;
      if (bVar10 && ((uint)local_1964 & 1) == 0) {
        fVar47 = *(float *)(lVar31 + lVar41 * 0x188 + 0x16c);
        if (fVar44 <= fVar47) {
          fVar44 = fVar47;
        }
        fVar47 = local_1984;
        if (fVar46 != local_1a20) {
          fVar47 = local_1a34;
        }
        if (local_1958 == 0) goto LAB_03793c9c;
        fVar53 = *(float *)(lVar31 + lVar41 * 0x188 + 0x150);
        if (local_196c <= ABS(fVar45)) {
          local_196c = ABS(fVar45);
        }
        FUN_03779650(&local_440,local_1958,0);
        memcpy(&local_4d0,&local_440,0x60);
        fVar66 = (float)FUN_03776a10(&local_4d0,0);
        fVar53 = fVar53 + fVar44 * fVar66;
        local_1a20 = fVar46;
        local_1984 = fVar47;
        if (fVar53 <= fVar47) {
          local_1984 = fVar53;
        }
      }
      plVar24 = local_18f8;
      if ((((local_1904 == 1.82169e-44) || (((uint)local_1904 & 0xfffe) == 10)) ||
          ((int)(float)local_1930 < (int)fVar63)) || ((local_1960 & 0x100000000) != 0 || bVar12)) {
LAB_03792a80:
        lVar20 = local_1900;
        if ((local_1960 & 0x100000000) == 0) goto LAB_03792a8c;
      }
      else {
        if (fVar63 == (float)local_1930) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(local_1904,0);
          if ((uVar19 & 1) != 0) goto LAB_03792a80;
        }
        lVar20 = *plVar24;
        if (lVar20 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar20 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + lVar41 * 0x188;
        local_1a08 = *(float *)(lVar20 + 0x16c);
        bVar11 = fVar44 != 0.0;
        fVar46 = local_1a08;
        if (bVar11) {
          fVar46 = fVar44;
        }
        fVar44 = fVar46;
        local_19e0 = (ulong *)(ulong)*(uint *)(lVar20 + 0x174);
        local_1a14 = 0.0;
        local_1a10 = (float *)CONCAT44(local_1a10._4_4_,*(undefined4 *)(lVar20 + 0x124));
        fVar46 = fVar45;
        if (bVar11) {
          fVar46 = local_196c;
        }
        local_1a18 = local_1984;
        local_196c = fVar46;
      }
      lVar20 = local_1900;
      if (*local_1910 == 1.4013e-45) {
        lVar31 = *plVar24;
        if (lVar31 != 0) {
          if ((uint)fVar63 < (uint)*(float *)(lVar31 + 0x18)) {
            lVar31 = lVar31 + lVar41 * 0x188;
            uVar62 = *(undefined4 *)(lVar31 + 0x130);
            uVar15 = *(undefined4 *)(lVar31 + 0x16c);
            goto LAB_03792b18;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
      if ((fVar63 == (float)local_1990) || ((int)(float)local_1930 <= (int)fVar63)) {
        lVar31 = *plVar24;
        if (lVar31 != 0) {
          lVar35 = lVar41;
          fVar44 = fVar63;
          if (!bVar10 || ((uint)fVar49 & 1) != 0) {
            lVar35 = local_1930;
            fVar44 = (float)local_1930;
          }
          if ((uint)fVar44 < (uint)*(float *)(lVar31 + 0x18)) {
            lVar31 = lVar31 + lVar35 * 0x188;
            uVar62 = *(undefined4 *)(lVar31 + 0x130);
            uVar15 = *(undefined4 *)(lVar31 + 0x16c);
            goto LAB_03792b34;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
      if (bVar12) {
        lVar31 = *plVar24;
        if (lVar31 != 0) {
          fVar46 = *(float *)(lVar31 + 0x18);
          goto LAB_037928d0;
        }
        goto LAB_03793c9c;
      }
      if ((int)fVar63 < (int)((int)*local_1910 - 1U)) {
        lVar31 = *plVar24;
        if (lVar31 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar31 + 0x18) <= (uint)local_1924) goto thunk_FUN_01ab6c44;
        uVar42 = (ulong)local_19e0 & 0xffffffff;
        uVar19 = FUN_03779528(uVar42,*(undefined4 *)(lVar31 + (long)local_1938),0);
        plVar24 = local_18f8;
        if ((uVar19 & 1) == 0) {
          lVar31 = *local_18f8;
          if (lVar31 != 0) {
            if ((uint)fVar63 < (uint)*(float *)(lVar31 + 0x18)) {
              lVar31 = lVar31 + lVar41 * 0x188;
              FUN_0379d0d0((ulong)local_1a10 & 0xffffffff,local_1a18,local_1a14,
                           *(undefined4 *)(lVar31 + 0x130),local_1984,0,local_1a08,
                           *(undefined4 *)(lVar31 + 0x16c),param_1,uVar42,lVar20,lVar21,0);
              plVar24 = local_18f8;
              goto LAB_03792b60;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
      }
      local_1960 = CONCAT44(1,(float)local_1960);
    }
    lVar31 = *plVar24;
    if (lVar31 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar31 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    if (local_1958 == 0) goto LAB_03793c9c;
    uVar16 = *(uint *)(lVar31 + lVar41 * 0x188 + 0x19c);
    FUN_03779650(&local_440,local_1958,0);
    memcpy(&local_4d0,&local_440,0x60);
    fVar49 = (float)FUN_03776a30(&local_4d0,0);
    if ((uVar16 >> 6 & 1) == 0) {
      if ((local_1960 & 1) != 0) {
        lVar31 = *plVar24;
        if (lVar31 != 0) {
          if ((int)local_1924 - 2U < *(uint *)(lVar31 + 0x18)) {
            fVar46 = *(float *)((long)local_1938 + lVar31 + -0x334);
            uVar62 = *(undefined4 *)((long)local_1938 + lVar31 + -0x354);
            goto LAB_037932fc;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
LAB_03792cf8:
      local_1960 = local_1960 & 0xffffffff00000000;
    }
    else {
      lVar31 = *plVar24;
      if ((lVar31 == 0) || (lVar35 = *(long *)(param_1 + 0x15b8), lVar35 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar35 + 0x18) <= *(uint *)(param_1 + 0x1a38)) ||
         ((uint)*(float *)(lVar31 + 0x18) <= (uint)fVar63)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar31 + lVar41 * 0x188 + 0x180) =
           *(int *)(lVar35 + (long)(int)*(uint *)(param_1 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(lVar20 + 0xd8) < (int)fVar63) || (*(int *)(lVar20 + 0xe0) < (int)uVar18)) {
        uVar16 = 1;
      }
      else if (*(int *)(lVar20 + 0x74) == 5) {
        uVar16 = (uint)(*(int *)(lVar31 + lVar41 * 0x188 + 0x70) + 1 != *(int *)(lVar20 + 0xf0));
      }
      else {
        uVar16 = 0;
      }
      if ((((local_1904 == 1.82169e-44) || (((uint)local_1904 & 0xfffe) == 10)) ||
          ((int)(float)local_1930 < (int)fVar63)) ||
         ((~(uint)(float)local_1960 & (uVar16 ^ 0xffffffff) & 1) == 0)) {
LAB_03792cf0:
        if ((local_1960 & 1) == 0) goto LAB_03792cf8;
      }
      else {
        if (fVar63 == (float)local_1930) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(local_1904,0);
          if ((uVar19 & 1) != 0) goto LAB_03792cf0;
          lVar31 = *plVar24;
          if (lVar31 == 0) goto LAB_03793c9c;
        }
        if ((uint)*(float *)(lVar31 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
        lVar31 = lVar31 + lVar41 * 0x188;
        local_19f4 = *(float *)(lVar31 + 0x124);
        local_1a38 = *(float *)(lVar31 + 0x68);
        local_1a3c = *(float *)(lVar31 + 0x150);
        local_19d8 = (ulong)*(uint *)(lVar31 + 0x17c);
        local_19f0 = (undefined8 *)CONCAT44(local_19f0._4_4_,*(float *)(lVar31 + 0x16c));
        local_1a04 = 0.0;
        local_1a00 = CONCAT44(local_1a00._4_4_,fVar49 * *(float *)(lVar31 + 0x16c) + local_1a3c);
      }
      fVar46 = *local_1910;
      if (fVar46 == 1.4013e-45) {
LAB_03792ef4:
        lVar35 = *plVar24;
        if (lVar35 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar35 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
        lVar35 = lVar35 + lVar41 * 0x188;
LAB_037932ec:
        fVar46 = *(float *)(lVar35 + 0x150);
        uVar62 = *(undefined4 *)(lVar35 + 0x130);
      }
      else {
        lVar31 = lVar41;
        if (fVar63 == (float)local_1990) {
          lVar35 = *plVar24;
          if (lVar35 != 0) {
            fVar46 = fVar63;
            if (((uint)(local_1904 != 1.14949e-41) & ((uint)local_1964 ^ 1)) == 0) {
              lVar31 = local_1930;
              fVar46 = (float)local_1930;
            }
            if ((uint)fVar46 < (uint)*(float *)(lVar35 + 0x18)) {
LAB_037932e8:
              lVar35 = lVar35 + lVar31 * 0x188;
              goto LAB_037932ec;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if ((int)fVar63 < (int)fVar46) {
          lVar35 = *plVar24;
          if (lVar35 != 0) {
            if ((uint)local_1924 < (uint)*(float *)(lVar35 + 0x18)) {
              if (*(float *)((long)local_1938 + lVar35 + -0x10c) == local_1a38) {
                fVar46 = *(float *)((long)local_1938 + lVar35 + -0x24);
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                            0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar19 = FUN_037a2200(SUB84(local_1950,0) + fVar46,local_1a3c,0);
                if ((uVar19 & 1) != 0) {
                  fVar46 = *local_1910;
                  goto LAB_03792fdc;
                }
                lVar35 = *plVar24;
                if (lVar35 == 0) goto LAB_03793c9c;
              }
              fVar46 = fVar63;
              if ((int)(float)local_1930 < (int)fVar63) {
                lVar31 = local_1930;
                fVar46 = (float)local_1930;
              }
              if ((uint)fVar46 < (uint)*(float *)(lVar35 + 0x18)) goto LAB_037932e8;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
LAB_03792fdc:
        if ((int)fVar63 < (int)fVar46) {
          iVar17 = FUN_036d3364(local_1958,0);
          if ((uint)*(float *)(local_1918 + 3) <= (uint)local_1924) goto thunk_FUN_01ab6c44;
          lVar31 = *(long *)((long)local_1918 + (long)local_1938 + -0x134);
          if (lVar31 == 0) goto LAB_03793c9c;
          iVar14 = FUN_036d3364(lVar31,0);
          plVar24 = local_18f8;
          if (iVar17 != iVar14) goto LAB_03792ef4;
        }
        if (uVar16 == 0) {
          local_1960 = CONCAT44(local_1960._4_4_,1);
          goto LAB_03793338;
        }
        lVar31 = *plVar24;
        if (lVar31 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar31 + 0x18) <= (int)local_1924 - 2U) goto thunk_FUN_01ab6c44;
        fVar46 = *(float *)((long)local_1938 + lVar31 + -0x334);
        uVar62 = *(undefined4 *)((long)local_1938 + lVar31 + -0x354);
      }
LAB_037932fc:
      FUN_0379d0d0(local_19f4,local_1a00 & 0xffffffff,local_1a04,uVar62,
                   local_19f0._0_4_ * fVar49 + fVar46,0,local_19f0._0_4_,local_19f0._0_4_,param_1,
                   local_19d8 & 0xffffffff,lVar20,lVar21,0);
      local_1960 = local_1960 & 0xffffffff00000000;
    }
LAB_03793338:
    lVar31 = *plVar24;
    if (lVar31 == 0) goto LAB_03793c9c;
    fVar49 = (float)*(undefined8 *)(lVar31 + 0x18);
    if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
    local_1978 = CONCAT44(local_1978._4_4_,fVar48);
    if ((*(byte *)(lVar31 + lVar41 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (((ulong)local_1980 & 1) != 0) {
        FUN_0379dd0c(local_19b8,local_199c,local_19bc,local_19b4,(ulong)local_19b0 & 0xffffffff,
                     local_19bc,param_1,local_470 & 0xffffffff,lVar20,lVar21,0);
      }
LAB_03793428:
      uVar62 = 0;
      fVar47 = local_1924;
    }
    else {
      if ((*(int *)(lVar20 + 0xd8) < (int)fVar63) || (*(int *)(lVar20 + 0xe0) < (int)uVar18)) {
        bVar12 = true;
      }
      else if (*(int *)(lVar20 + 0x74) == 5) {
        bVar12 = *(int *)(lVar31 + lVar41 * 0x188 + 0x70) + 1 != *(int *)(lVar20 + 0xf0);
      }
      else {
        bVar12 = false;
      }
      fVar46 = local_19b8;
      if (((ulong)local_1980 & 1) == 0) {
        if (((local_1904 == 1.82169e-44) || (((uint)local_1904 & 0xfffe) == 10)) ||
           (((int)(float)local_1930 < (int)fVar63 || (bVar12)))) goto LAB_03793428;
        if (fVar63 == (float)local_1930) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(local_1904,0);
          if ((uVar19 & 1) != 0) goto LAB_03793428;
        }
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar35 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar35 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar35 = *(long *)puVar6;
        }
        lVar31 = *local_18f8;
        if (lVar31 == 0) goto LAB_03793c9c;
        fVar49 = (float)*(undefined8 *)(lVar31 + 0x18);
        if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
        pfVar30 = *(float **)(lVar35 + 0xb8);
        lVar35 = lVar31 + lVar41 * 0x188;
        uStack_468 = *(ulong *)(lVar35 + 400);
        local_470 = *(ulong *)(lVar35 + 0x188);
        local_199c = pfVar30[1];
        local_460 = *(undefined4 *)(lVar35 + 0x198);
        local_19b4 = pfVar30[2];
        local_19b0 = (float *)CONCAT44(local_19b0._4_4_,pfVar30[3]);
        local_19bc = 0.0;
        fVar46 = *pfVar30;
      }
      if ((uint)fVar49 <= (uint)fVar63) goto thunk_FUN_01ab6c44;
      lVar31 = lVar31 + lVar41 * 0x188;
      local_1904 = *(float *)(lVar31 + 0x130);
      fVar57 = *(float *)(lVar31 + 0x124);
      fVar49 = *(float *)(lVar31 + 0x148);
      fVar53 = *(float *)(lVar31 + 0x14c);
      fVar66 = *(float *)(lVar31 + 0x154);
      fVar48 = *(float *)(lVar31 + 0x164);
      uStack_418 = *(undefined8 *)(lVar31 + 400);
      local_420 = *(ulong *)(lVar31 + 0x188);
      uStack_408 = *(undefined8 *)(lVar31 + 0x1a0);
      local_410 = *(undefined8 *)(lVar31 + 0x198);
      uStack_438 = *(ulong *)(lVar31 + 0x170);
      local_440 = *(ulong *)(lVar31 + 0x168);
      uStack_428 = *(undefined8 *)(lVar31 + 0x180);
      local_430 = *(undefined8 *)(lVar31 + 0x178);
      local_18c0 = local_460;
      uStack_18c8 = uStack_468;
      local_18d0 = local_470;
      local_10e0 = (undefined4)local_1a30[2];
      uStack_10e8 = local_1a30[1];
      local_10f0 = *local_1a30;
      uStack_18e8 = local_1a30[1];
      local_18f0 = *local_1a30;
      local_18e0 = (undefined4)local_1a30[2];
      uVar19 = FUN_037a20cc(&local_18d0,&local_18f0,0);
      fVar47 = local_1924;
      lVar41 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar19 & 1) == 0) {
        if (*(int *)(lVar41 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar41);
        }
        uVar19 = local_1a28;
        fVar60 = (float)FUN_037a1dd8(local_1a28,0);
        bVar10 = ((uint)local_1964 & 1) == 0;
        if (bVar10) {
          fVar49 = fVar57;
        }
        if (bVar10) {
          fVar48 = local_1904;
        }
        local_19b8 = fVar46;
        if (fVar49 - fVar60 <= fVar46) {
          local_19b8 = fVar49 - fVar60;
        }
        fVar49 = (float)FUN_037a1de0(uVar19,0);
        if (local_19b4 <= fVar48 + fVar49) {
          local_19b4 = fVar48 + fVar49;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar49 = (float)FUN_037a1df0(uVar19,0);
        if (fVar66 - fVar49 <= local_199c) {
          local_199c = fVar66 - fVar49;
        }
        fVar46 = (float)FUN_037a1de8(uVar19,0);
        fVar49 = local_19b0._0_4_;
        if (local_19b0._0_4_ <= fVar53 + fVar46) {
          fVar49 = fVar53 + fVar46;
        }
        local_19b0 = (float *)CONCAT44(local_19b0._4_4_,fVar49);
      }
      else {
        if (*(int *)(lVar41 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar41);
        }
        fVar60 = (float)FUN_037a1de0(local_1a28,0);
        if (((uint)local_1964 & 1) == 0) {
          fVar49 = fVar57;
        }
        fVar57 = local_199c;
        if (fVar66 <= local_199c) {
          fVar57 = fVar66;
        }
        local_19b8 = (fVar49 + (local_19b4 - fVar60)) * 0.5;
        fVar49 = local_19b0._0_4_;
        if (local_19b0._0_4_ <= fVar53) {
          fVar49 = fVar53;
        }
        FUN_0379dd0c(fVar46,fVar57,local_19bc,local_19b8,fVar49,local_19bc,param_1,
                     local_470 & 0xffffffff,lVar20,lVar21,0);
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = local_1a48;
        fVar49 = (float)FUN_037a1df0(local_1a48,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        local_199c = fVar66 - fVar49;
        fVar49 = (float)FUN_037a1de0(uVar19,0);
        fVar46 = (float)FUN_037a1de8(uVar19,0);
        local_19b0 = (float *)CONCAT44(local_19b0._4_4_,fVar53 + fVar46);
        if (((uint)local_1964 & 1) == 0) {
          fVar48 = local_1904;
        }
        local_19b4 = fVar48 + fVar49;
        uStack_468 = uStack_10e8;
        local_470 = local_10f0;
        local_460 = local_10e0;
        local_19bc = 0.0;
      }
      if ((((*local_1910 == 1.4013e-45) || (fVar63 == (float)local_1990)) ||
          ((int)local_1930 <= (int)fVar63)) || (bVar12)) {
        FUN_0379dd0c(local_19b8,local_199c,local_19bc,local_19b4,(ulong)local_19b0 & 0xffffffff,
                     local_19bc,param_1,local_470 & 0xffffffff,lVar20,lVar21,0);
        uVar62 = 0;
      }
      else {
        uVar62 = 1;
      }
    }
    fVar63 = *local_1910;
    local_1968 = (float)((int)local_1968 + 1);
    fVar49 = (float)((int)fVar47 + 1);
    local_1938 = local_1938 + 0x31;
    uVar16 = uVar18;
  } while ((int)fVar47 < (int)fVar63);
  iVar17 = uVar18 + 1;
  plVar24 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
  iVar14 = (int)local_19a8;
LAB_03793a5c:
  lVar41 = local_19d0;
  *(float *)(lVar21 + 0x10) = fVar63;
  uVar62 = *(undefined4 *)(param_1 + 0x15c0);
  *(int *)(lVar21 + 0x24) = iVar17;
  if ((int)fVar63 < 1 || iVar14 == 0) {
    iVar14 = 1;
  }
  *(int *)(lVar21 + 0x1c) = iVar14;
  *(undefined4 *)(lVar21 + 0x14) = uVar62;
  *(int *)(lVar21 + 0x28) = *(int *)(param_1 + 0x350) + 1;
  if (1 < *(int *)(lVar21 + 0x2c)) {
    uVar19 = 1;
    lVar20 = 0x70;
    do {
      lVar31 = *(long *)(lVar21 + 0x58);
      if (lVar31 == 0) goto LAB_03793c9c;
      if (*(int *)(*plVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar31 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar31 + lVar20,0);
      if (*(int *)(local_1900 + 0x100) != 0) {
        lVar31 = *(long *)(lVar21 + 0x58);
        if (lVar31 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar31 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
        FUN_03785bdc(lVar31 + lVar20,1,0);
      }
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 0x50;
    } while ((long)uVar19 < (long)*(int *)(lVar21 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(lVar41 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


