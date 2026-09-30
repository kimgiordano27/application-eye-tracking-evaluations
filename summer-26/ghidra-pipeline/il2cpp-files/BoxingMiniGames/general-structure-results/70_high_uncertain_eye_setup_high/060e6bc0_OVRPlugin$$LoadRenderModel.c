/*
FUNCTION_NAME: OVRPlugin$$LoadRenderModel
ENTRY_POINT: 060e6bc0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LoadRenderModel(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined *puVar65;
  undefined *puVar66;
  long lVar67;
  long lVar68;
  long *plVar69;
  undefined8 uStack_ce0;
  undefined4 uStack_cd8;
  undefined4 uStack_cd4;
  undefined4 uStack_cd0;
  undefined4 uStack_ccc;
  undefined4 uStack_cc8;
  undefined8 uStack_cc0;
  undefined4 uStack_cb8;
  undefined4 uStack_cb4;
  undefined4 uStack_cb0;
  undefined8 uStack_cac;
  undefined8 uStack_ca0;
  undefined4 uStack_c98;
  undefined4 uStack_c94;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  undefined4 uStack_c88;
  undefined8 uStack_c80;
  undefined4 uStack_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined8 uStack_c6c;
  undefined8 uStack_c60;
  undefined4 uStack_c58;
  undefined4 uStack_c54;
  undefined4 uStack_c50;
  undefined4 uStack_c4c;
  undefined4 uStack_c48;
  undefined8 uStack_c40;
  undefined4 uStack_c38;
  undefined4 uStack_c34;
  undefined4 uStack_c30;
  undefined8 uStack_c2c;
  undefined8 uStack_c20;
  undefined4 uStack_c18;
  undefined4 uStack_c14;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  undefined4 uStack_c08;
  undefined8 uStack_c00;
  undefined4 uStack_bf8;
  undefined4 uStack_bf4;
  undefined4 uStack_bf0;
  undefined8 uStack_bec;
  undefined8 uStack_be0;
  undefined4 uStack_bd8;
  undefined4 uStack_bd4;
  undefined4 uStack_bd0;
  undefined4 uStack_bcc;
  undefined4 uStack_bc8;
  undefined8 uStack_bc0;
  undefined4 uStack_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined8 uStack_bac;
  undefined8 uStack_ba0;
  undefined4 uStack_b98;
  undefined4 uStack_b94;
  undefined4 uStack_b90;
  undefined4 uStack_b8c;
  undefined4 uStack_b88;
  undefined8 uStack_b80;
  undefined4 uStack_b78;
  undefined4 uStack_b74;
  undefined4 uStack_b70;
  undefined8 uStack_b6c;
  undefined8 uStack_b60;
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  undefined4 uStack_b48;
  undefined8 uStack_b40;
  undefined4 uStack_b38;
  undefined4 uStack_b34;
  undefined4 uStack_b30;
  undefined8 uStack_b2c;
  undefined8 uStack_b20;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  undefined4 uStack_b08;
  undefined8 uStack_b00;
  undefined4 uStack_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined8 uStack_aec;
  undefined8 uStack_ae0;
  undefined4 uStack_ad8;
  undefined4 uStack_ad4;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  undefined4 uStack_ac8;
  undefined8 uStack_ac0;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  undefined4 uStack_ab0;
  undefined8 uStack_aac;
  undefined8 uStack_aa0;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined4 uStack_a88;
  undefined8 uStack_a80;
  undefined4 uStack_a78;
  undefined4 uStack_a74;
  undefined4 uStack_a70;
  undefined8 uStack_a6c;
  undefined8 uStack_a60;
  undefined4 uStack_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined4 uStack_a48;
  undefined8 uStack_a40;
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  undefined4 uStack_a30;
  undefined8 uStack_a2c;
  undefined8 uStack_a20;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined4 uStack_a08;
  undefined8 uStack_a00;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined8 uStack_9ec;
  undefined8 uStack_9e0;
  undefined4 uStack_9d8;
  undefined4 uStack_9d4;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  undefined4 uStack_9c8;
  undefined8 uStack_9c0;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined8 uStack_9ac;
  undefined8 uStack_9a0;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 uStack_988;
  undefined8 uStack_980;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  undefined8 uStack_96c;
  undefined8 uStack_960;
  undefined4 uStack_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined8 uStack_940;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined8 uStack_92c;
  undefined8 uStack_920;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined8 uStack_900;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined8 uStack_8ec;
  undefined8 uStack_8e0;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined4 uStack_8c8;
  undefined8 uStack_8c0;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined8 uStack_8ac;
  undefined8 uStack_8a0;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined8 uStack_880;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined8 uStack_86c;
  undefined8 uStack_860;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined8 uStack_840;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined8 uStack_82c;
  undefined8 uStack_820;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined8 uStack_800;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined8 uStack_7ec;
  undefined8 uStack_7e0;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined8 uStack_7c0;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined8 uStack_7ac;
  undefined8 uStack_7a0;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined8 uStack_780;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined8 uStack_76c;
  undefined8 uStack_760;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  undefined8 uStack_740;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined8 uStack_72c;
  undefined8 uStack_720;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined8 uStack_700;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined8 uStack_6ec;
  undefined8 uStack_6e0;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined8 uStack_6c0;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined8 uStack_6ac;
  undefined8 uStack_6a0;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined8 uStack_680;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined8 uStack_66c;
  undefined8 uStack_660;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined8 uStack_640;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined8 uStack_62c;
  undefined8 uStack_620;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined8 uStack_600;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined8 uStack_5ec;
  undefined8 uStack_5e0;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined8 uStack_5c0;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined8 uStack_5ac;
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined8 uStack_580;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined8 uStack_56c;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined8 uStack_540;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined8 uStack_52c;
  undefined8 uStack_520;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined8 uStack_4ec;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined8 uStack_4ac;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined8 uStack_46c;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined8 uStack_440;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined8 uStack_42c;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined8 uStack_3ec;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined8 uStack_3ac;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined8 uStack_36c;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined8 uStack_32c;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined8 uStack_2ec;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined8 uStack_2ac;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined8 uStack_26c;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined8 uStack_22c;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar66 = PTR_DAT_07a24998;
  puVar65 = PTR_DAT_07a207b8;
  if ((DAT_07ee0c2f & 1) == 0) {
    FUN_03642964(PTR_DAT_07a24998);
    FUN_03642964(PTR_DAT_07a207b8);
    DAT_07ee0c2f = 1;
  }
  lVar67 = thunk_FUN_0367fe20(*(undefined8 *)puVar65);
  FUN_060e6b40();
  lVar68 = FUN_03642a4c(*(undefined8 *)puVar66,0x1a);
  uVar4 = DAT_01651164;
  uVar1 = DAT_01650938;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  FUN_071ce4a0(DAT_01650c94,DAT_01650938,DAT_01651164,0,0,0,0x3f800000,&uStack_20,0);
  if (lVar68 == 0) goto LAB_060e874c;
  uStack_2c = CONCAT44(uStack_8,uStack_c);
  uStack_38 = uStack_18;
  uStack_40 = uStack_20;
  uStack_34 = uStack_14;
  uStack_30 = uStack_10;
  if (*(int *)(lVar68 + 0x18) != 0) {
    *(ulong *)(lVar68 + 0x2c) = CONCAT44(uStack_14,uStack_18);
    *(undefined8 *)(lVar68 + 0x24) = uStack_20;
    *(undefined8 *)(lVar68 + 0x38) = uStack_2c;
    *(ulong *)(lVar68 + 0x30) = CONCAT44(uStack_10,uStack_14);
    *(undefined4 *)(lVar68 + 0x20) = 1;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    FUN_071ce4a0(0,0,0,0,0,0,0x3f800000,&uStack_60,0);
    uVar21 = DAT_01650d04;
    uVar17 = DAT_01650c98;
    uStack_6c = CONCAT44(uStack_48,uStack_4c);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    if ((*(uint *)(lVar68 + 0x18) & 0xfffffffe) != 0) {
      *(undefined4 *)(lVar68 + 0x40) = 0xffffffff;
      *(ulong *)(lVar68 + 0x4c) = CONCAT44(uStack_54,uStack_58);
      *(undefined8 *)(lVar68 + 0x44) = uStack_60;
      uVar9 = DAT_016513dc;
      *(undefined8 *)(lVar68 + 0x58) = uStack_6c;
      *(ulong *)(lVar68 + 0x50) = CONCAT44(uStack_50,uStack_54);
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      FUN_071ce4a0(uVar9,uVar21,uVar17,DAT_016511ac,DAT_01650b6c,DAT_016509f4,DAT_01650ffc,
                   &uStack_a0,0);
      uStack_ac = CONCAT44(uStack_88,uStack_8c);
      uStack_b8 = uStack_98;
      uStack_c0 = uStack_a0;
      uStack_b4 = uStack_94;
      uStack_b0 = uStack_90;
      if (2 < *(uint *)(lVar68 + 0x18)) {
        *(undefined4 *)(lVar68 + 0x60) = 1;
        *(ulong *)(lVar68 + 0x6c) = CONCAT44(uStack_94,uStack_98);
        *(undefined8 *)(lVar68 + 100) = uStack_a0;
        uVar9 = DAT_01650ab8;
        *(undefined8 *)(lVar68 + 0x78) = uStack_ac;
        *(ulong *)(lVar68 + 0x70) = CONCAT44(uStack_90,uStack_94);
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        FUN_071ce4a0(uVar9,DAT_016512e8,DAT_01650abc,DAT_016509f8,DAT_01650c1c,DAT_016510c0,
                     DAT_01650e50,&uStack_e0,0);
        uStack_ec = CONCAT44(uStack_c8,uStack_cc);
        uStack_f8 = uStack_d8;
        uStack_100 = uStack_e0;
        uStack_f4 = uStack_d4;
        uStack_f0 = uStack_d0;
        if ((*(uint *)(lVar68 + 0x18) & 0xfffffffc) != 0) {
          *(undefined4 *)(lVar68 + 0x80) = 2;
          *(ulong *)(lVar68 + 0x8c) = CONCAT44(uStack_d4,uStack_d8);
          *(undefined8 *)(lVar68 + 0x84) = uStack_e0;
          uVar9 = DAT_01651428;
          *(undefined8 *)(lVar68 + 0x98) = uStack_ec;
          *(ulong *)(lVar68 + 0x90) = CONCAT44(uStack_d0,uStack_d4);
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          FUN_071ce4a0(uVar9,DAT_01650afc,DAT_0165142c,DAT_016512ec,DAT_01650c20,DAT_01650d08,
                       DAT_016508e0,&uStack_120,0);
          uStack_12c = CONCAT44(uStack_108,uStack_10c);
          uStack_138 = uStack_118;
          uStack_140 = uStack_120;
          uStack_134 = uStack_114;
          uStack_130 = uStack_110;
          if (4 < *(uint *)(lVar68 + 0x18)) {
            *(undefined4 *)(lVar68 + 0xa0) = 3;
            *(ulong *)(lVar68 + 0xac) = CONCAT44(uStack_114,uStack_118);
            *(undefined8 *)(lVar68 + 0xa4) = uStack_120;
            uVar36 = DAT_01651068;
            uVar9 = DAT_01650d0c;
            uVar13 = DAT_01650b70;
            *(undefined8 *)(lVar68 + 0xb8) = uStack_12c;
            *(ulong *)(lVar68 + 0xb0) = CONCAT44(uStack_110,uStack_114);
            uStack_158 = 0;
            uStack_154 = 0;
            uStack_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_14c = 0;
            FUN_071ce4a0(uVar9,DAT_01651064,uVar36,0x8700000087000000,uVar13,0xa2800000,0x3f800000,
                         &uStack_160,0);
            uVar36 = DAT_016511b0;
            uVar9 = DAT_01650b00;
            uStack_16c = CONCAT44(uStack_148,uStack_14c);
            uStack_178 = uStack_158;
            uStack_180 = uStack_160;
            uStack_174 = uStack_154;
            uStack_170 = uStack_150;
            if (5 < *(uint *)(lVar68 + 0x18)) {
              *(ulong *)(lVar68 + 0xcc) = CONCAT44(uStack_154,uStack_158);
              *(undefined8 *)(lVar68 + 0xc4) = uStack_160;
              *(undefined8 *)(lVar68 + 0xd8) = uStack_16c;
              *(ulong *)(lVar68 + 0xd0) = CONCAT44(uStack_150,uStack_154);
              *(undefined4 *)(lVar68 + 0xc0) = 4;
              uStack_198 = 0;
              uStack_194 = 0;
              uStack_1a0 = 0;
              uStack_188 = 0;
              uStack_190 = 0;
              uStack_18c = 0;
              FUN_071ce4a0(DAT_0165093c,uVar9,uVar36,0,0,0,0x3f800000,&uStack_1a0,0);
              uVar22 = DAT_01650d10;
              uStack_1ac = CONCAT44(uStack_188,uStack_18c);
              uStack_1b8 = uStack_198;
              uStack_1c0 = uStack_1a0;
              uStack_1b4 = uStack_194;
              uStack_1b0 = uStack_190;
              if (6 < *(uint *)(lVar68 + 0x18)) {
                *(undefined4 *)(lVar68 + 0xe0) = 1;
                *(ulong *)(lVar68 + 0xec) = CONCAT44(uStack_194,uStack_198);
                *(undefined8 *)(lVar68 + 0xe4) = uStack_1a0;
                *(undefined8 *)(lVar68 + 0xf8) = uStack_1ac;
                *(ulong *)(lVar68 + 0xf0) = CONCAT44(uStack_190,uStack_194);
                uVar46 = DAT_0165127c;
                uVar34 = DAT_01651000;
                uVar32 = DAT_01650fb0;
                uStack_1d8 = 0;
                uStack_1d4 = 0;
                uStack_1e0 = 0;
                uStack_1c8 = 0;
                uStack_1d0 = 0;
                uStack_1cc = 0;
                FUN_071ce4a0(DAT_01650c24,uVar22,DAT_01651000,DAT_0165127c,DAT_01650e98,DAT_016509fc
                             ,&uStack_1e0,0);
                uStack_1ec = CONCAT44(uStack_1c8,uStack_1cc);
                uStack_1f8 = uStack_1d8;
                uStack_200 = uStack_1e0;
                uStack_1f4 = uStack_1d4;
                uStack_1f0 = uStack_1d0;
                if ((*(uint *)(lVar68 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined4 *)(lVar68 + 0x100) = 6;
                  *(undefined8 *)(lVar68 + 0x118) = uStack_1ec;
                  *(ulong *)(lVar68 + 0x110) = CONCAT44(uStack_1d0,uStack_1d4);
                  *(ulong *)(lVar68 + 0x10c) = CONCAT44(uStack_1d4,uStack_1d8);
                  *(undefined8 *)(lVar68 + 0x104) = uStack_1e0;
                  uVar59 = DAT_016513e0;
                  uVar11 = DAT_01650b04;
                  uStack_218 = 0;
                  uStack_214 = 0;
                  uStack_220 = 0;
                  uStack_208 = 0;
                  uStack_210 = 0;
                  uStack_20c = 0;
                  FUN_071ce4a0(DAT_01650e54,DAT_01650b74,DAT_01650f04,DAT_01650b04,DAT_01650fb4,
                               DAT_01650b08,&uStack_220,0);
                  uStack_22c = CONCAT44(uStack_208,uStack_20c);
                  uStack_238 = uStack_218;
                  uStack_240 = uStack_220;
                  uStack_234 = uStack_214;
                  uStack_230 = uStack_210;
                  if (8 < *(uint *)(lVar68 + 0x18)) {
                    *(undefined4 *)(lVar68 + 0x120) = 7;
                    *(undefined8 *)(lVar68 + 0x138) = uStack_22c;
                    *(ulong *)(lVar68 + 0x130) = CONCAT44(uStack_210,uStack_214);
                    *(ulong *)(lVar68 + 300) = CONCAT44(uStack_214,uStack_218);
                    *(undefined8 *)(lVar68 + 0x124) = uStack_220;
                    uVar62 = DAT_01651434;
                    uVar60 = DAT_016513e4;
                    uVar35 = DAT_01651004;
                    uVar18 = DAT_01650c9c;
                    uStack_258 = 0;
                    uStack_254 = 0;
                    uStack_260 = 0;
                    uStack_248 = 0;
                    uStack_250 = 0;
                    uStack_24c = 0;
                    FUN_071ce4a0(DAT_01651430,&uStack_260,0);
                    uStack_26c = CONCAT44(uStack_248,uStack_24c);
                    uStack_278 = uStack_258;
                    uStack_280 = uStack_260;
                    uStack_274 = uStack_254;
                    uStack_270 = uStack_250;
                    if (9 < *(uint *)(lVar68 + 0x18)) {
                      *(undefined4 *)(lVar68 + 0x140) = 8;
                      *(undefined8 *)(lVar68 + 0x158) = uStack_26c;
                      *(ulong *)(lVar68 + 0x150) = CONCAT44(uStack_250,uStack_254);
                      *(ulong *)(lVar68 + 0x14c) = CONCAT44(uStack_254,uStack_258);
                      *(undefined8 *)(lVar68 + 0x144) = uStack_260;
                      uStack_298 = 0;
                      uStack_294 = 0;
                      uStack_2a0 = 0;
                      uStack_288 = 0;
                      uStack_290 = 0;
                      uStack_28c = 0;
                      FUN_071ce4a0(DAT_01650d44,DAT_016508e4,DAT_01651438,0,DAT_0165110c,0,
                                   0x3f800000,&uStack_2a0,0);
                      uStack_2ac = CONCAT44(uStack_288,uStack_28c);
                      uStack_2b8 = uStack_298;
                      uStack_2c0 = uStack_2a0;
                      uStack_2b4 = uStack_294;
                      uStack_2b0 = uStack_290;
                      if (10 < *(uint *)(lVar68 + 0x18)) {
                        *(undefined4 *)(lVar68 + 0x160) = 9;
                        *(undefined8 *)(lVar68 + 0x178) = uStack_2ac;
                        *(ulong *)(lVar68 + 0x170) = CONCAT44(uStack_290,uStack_294);
                        *(ulong *)(lVar68 + 0x16c) = CONCAT44(uStack_294,uStack_298);
                        *(undefined8 *)(lVar68 + 0x164) = uStack_2a0;
                        uVar30 = DAT_01650f54;
                        uVar28 = DAT_01650f08;
                        uStack_2d8 = 0;
                        uStack_2d4 = 0;
                        uStack_2e0 = 0;
                        uStack_2c8 = 0;
                        uStack_2d0 = 0;
                        uStack_2cc = 0;
                        FUN_071ce4a0(DAT_016510c4,DAT_01650f08,DAT_01650f54,0,0,0,0x3f800000,
                                     &uStack_2e0,0);
                        uStack_2ec = CONCAT44(uStack_2c8,uStack_2cc);
                        uStack_2f8 = uStack_2d8;
                        uStack_300 = uStack_2e0;
                        uStack_2f4 = uStack_2d4;
                        uStack_2f0 = uStack_2d0;
                        if (0xb < *(uint *)(lVar68 + 0x18)) {
                          *(undefined4 *)(lVar68 + 0x180) = 1;
                          *(undefined8 *)(lVar68 + 0x198) = uStack_2ec;
                          *(ulong *)(lVar68 + 400) = CONCAT44(uStack_2d0,uStack_2d4);
                          *(ulong *)(lVar68 + 0x18c) = CONCAT44(uStack_2d4,uStack_2d8);
                          *(undefined8 *)(lVar68 + 0x184) = uStack_2e0;
                          uVar56 = DAT_01651370;
                          uVar37 = DAT_016510c8;
                          uVar12 = DAT_01650b0c;
                          uVar5 = DAT_01650a00;
                          uStack_318 = 0;
                          uStack_314 = 0;
                          uStack_320 = 0;
                          uStack_308 = 0;
                          uStack_310 = 0;
                          uStack_30c = 0;
                          FUN_071ce4a0(DAT_0165143c,&uStack_320,0);
                          uStack_32c = CONCAT44(uStack_308,uStack_30c);
                          uStack_338 = uStack_318;
                          uStack_340 = uStack_320;
                          uStack_334 = uStack_314;
                          uStack_330 = uStack_310;
                          if (0xc < *(uint *)(lVar68 + 0x18)) {
                            *(undefined4 *)(lVar68 + 0x1a0) = 0xb;
                            *(undefined8 *)(lVar68 + 0x1b8) = uStack_32c;
                            *(ulong *)(lVar68 + 0x1b0) = CONCAT44(uStack_310,uStack_314);
                            *(ulong *)(lVar68 + 0x1ac) = CONCAT44(uStack_314,uStack_318);
                            *(undefined8 *)(lVar68 + 0x1a4) = uStack_320;
                            uVar33 = DAT_01650fb8;
                            uVar20 = DAT_01650ca4;
                            uVar19 = DAT_01650ca0;
                            uVar14 = DAT_01650bb8;
                            uStack_358 = 0;
                            uStack_354 = 0;
                            uStack_360 = 0;
                            uStack_348 = 0;
                            uStack_350 = 0;
                            uStack_34c = 0;
                            FUN_071ce4a0(DAT_016512f0,&uStack_360,0);
                            uStack_36c = CONCAT44(uStack_348,uStack_34c);
                            uStack_378 = uStack_358;
                            uStack_380 = uStack_360;
                            uStack_374 = uStack_354;
                            uStack_370 = uStack_350;
                            if (0xd < *(uint *)(lVar68 + 0x18)) {
                              *(undefined4 *)(lVar68 + 0x1c0) = 0xc;
                              *(undefined8 *)(lVar68 + 0x1d8) = uStack_36c;
                              *(ulong *)(lVar68 + 0x1d0) = CONCAT44(uStack_350,uStack_354);
                              *(ulong *)(lVar68 + 0x1cc) = CONCAT44(uStack_354,uStack_358);
                              *(undefined8 *)(lVar68 + 0x1c4) = uStack_360;
                              uVar61 = DAT_016513e8;
                              uVar51 = DAT_016512f8;
                              uVar50 = DAT_016512f4;
                              uVar40 = DAT_01651110;
                              uStack_398 = 0;
                              uStack_394 = 0;
                              uStack_3a0 = 0;
                              uStack_388 = 0;
                              uStack_390 = 0;
                              uStack_38c = 0;
                              FUN_071ce4a0(DAT_01651374,&uStack_3a0,0);
                              uStack_3ac = CONCAT44(uStack_388,uStack_38c);
                              uStack_3b8 = uStack_398;
                              uStack_3c0 = uStack_3a0;
                              uStack_3b4 = uStack_394;
                              uStack_3b0 = uStack_390;
                              if (0xe < *(uint *)(lVar68 + 0x18)) {
                                *(undefined4 *)(lVar68 + 0x1e0) = 0xd;
                                *(undefined8 *)(lVar68 + 0x1f8) = uStack_3ac;
                                *(ulong *)(lVar68 + 0x1f0) = CONCAT44(uStack_390,uStack_394);
                                *(ulong *)(lVar68 + 0x1ec) = CONCAT44(uStack_394,uStack_398);
                                *(undefined8 *)(lVar68 + 0x1e4) = uStack_3a0;
                                uVar48 = DAT_01651288;
                                uVar47 = DAT_01651284;
                                uVar43 = DAT_016511b4;
                                uStack_3d8 = 0;
                                uStack_3d4 = 0;
                                uStack_3e0 = 0;
                                uStack_3c8 = 0;
                                uStack_3d0 = 0;
                                uStack_3cc = 0;
                                FUN_071ce4a0(DAT_01650c2c,DAT_01651284,DAT_01651288,DAT_016511b4,
                                             0x22800000,0x2300000023000000,0x3f800000,&uStack_3e0,0)
                                ;
                                uStack_3ec = CONCAT44(uStack_3c8,uStack_3cc);
                                uStack_3f8 = uStack_3d8;
                                uStack_400 = uStack_3e0;
                                uStack_3f4 = uStack_3d4;
                                uStack_3f0 = uStack_3d0;
                                if ((*(uint *)(lVar68 + 0x18) & 0xfffffff0) != 0) {
                                  *(undefined4 *)(lVar68 + 0x200) = 0xe;
                                  *(undefined8 *)(lVar68 + 0x218) = uStack_3ec;
                                  *(ulong *)(lVar68 + 0x210) = CONCAT44(uStack_3d0,uStack_3d4);
                                  *(ulong *)(lVar68 + 0x20c) = CONCAT44(uStack_3d4,uStack_3d8);
                                  *(undefined8 *)(lVar68 + 0x204) = uStack_3e0;
                                  uVar38 = DAT_016510cc;
                                  uVar6 = DAT_01650a04;
                                  uStack_418 = 0;
                                  uStack_414 = 0;
                                  uStack_420 = 0;
                                  uStack_408 = 0;
                                  uStack_410 = 0;
                                  uStack_40c = 0;
                                  FUN_071ce4a0(DAT_01650ca8,DAT_016510cc,DAT_01650a04,0,0,0,
                                               0x3f800000,&uStack_420,0);
                                  uStack_42c = CONCAT44(uStack_408,uStack_40c);
                                  uStack_438 = uStack_418;
                                  uStack_440 = uStack_420;
                                  uStack_434 = uStack_414;
                                  uStack_430 = uStack_410;
                                  if (0x10 < *(uint *)(lVar68 + 0x18)) {
                                    *(undefined4 *)(lVar68 + 0x220) = 1;
                                    *(undefined8 *)(lVar68 + 0x238) = uStack_42c;
                                    *(ulong *)(lVar68 + 0x230) = CONCAT44(uStack_410,uStack_414);
                                    *(ulong *)(lVar68 + 0x22c) = CONCAT44(uStack_414,uStack_418);
                                    *(undefined8 *)(lVar68 + 0x224) = uStack_420;
                                    uVar24 = DAT_01650e5c;
                                    uVar15 = DAT_01650c30;
                                    uVar8 = DAT_01650a70;
                                    uVar3 = DAT_01650990;
                                    uStack_458 = 0;
                                    uStack_454 = 0;
                                    uStack_460 = 0;
                                    uStack_448 = 0;
                                    uStack_450 = 0;
                                    uStack_44c = 0;
                                    FUN_071ce4a0(DAT_01650bbc,&uStack_460,0);
                                    uStack_46c = CONCAT44(uStack_448,uStack_44c);
                                    uStack_478 = uStack_458;
                                    uStack_480 = uStack_460;
                                    uStack_474 = uStack_454;
                                    uStack_470 = uStack_450;
                                    if (0x11 < *(uint *)(lVar68 + 0x18)) {
                                      *(undefined4 *)(lVar68 + 0x240) = 0x10;
                                      *(undefined8 *)(lVar68 + 600) = uStack_46c;
                                      *(ulong *)(lVar68 + 0x250) = CONCAT44(uStack_450,uStack_454);
                                      *(ulong *)(lVar68 + 0x24c) = CONCAT44(uStack_454,uStack_458);
                                      *(undefined8 *)(lVar68 + 0x244) = uStack_460;
                                      uVar63 = DAT_01651440;
                                      uVar58 = DAT_0165137c;
                                      uVar57 = DAT_01651378;
                                      uVar52 = DAT_016512fc;
                                      uStack_498 = 0;
                                      uStack_494 = 0;
                                      uStack_4a0 = 0;
                                      uStack_488 = 0;
                                      uStack_490 = 0;
                                      uStack_48c = 0;
                                      FUN_071ce4a0(DAT_01651114,&uStack_4a0,0);
                                      uStack_4ac = CONCAT44(uStack_488,uStack_48c);
                                      uStack_4b8 = uStack_498;
                                      uStack_4c0 = uStack_4a0;
                                      uStack_4b4 = uStack_494;
                                      uStack_4b0 = uStack_490;
                                      if (0x12 < *(uint *)(lVar68 + 0x18)) {
                                        *(undefined4 *)(lVar68 + 0x260) = 0x11;
                                        *(undefined8 *)(lVar68 + 0x278) = uStack_4ac;
                                        *(ulong *)(lVar68 + 0x270) = CONCAT44(uStack_490,uStack_494)
                                        ;
                                        *(ulong *)(lVar68 + 0x26c) = CONCAT44(uStack_494,uStack_498)
                                        ;
                                        *(undefined8 *)(lVar68 + 0x264) = uStack_4a0;
                                        uVar53 = DAT_01651300;
                                        uVar41 = DAT_01651168;
                                        uStack_4d8 = 0;
                                        uStack_4d4 = 0;
                                        uStack_4e0 = 0;
                                        uStack_4c8 = 0;
                                        uStack_4d0 = 0;
                                        uStack_4cc = 0;
                                        FUN_071ce4a0(DAT_01650b10,DAT_01651300,DAT_01651168,
                                                     DAT_01651444,DAT_0165128c,DAT_01650bc0,
                                                     DAT_0165100c,&uStack_4e0,0);
                                        uStack_4ec = CONCAT44(uStack_4c8,uStack_4cc);
                                        uStack_4f8 = uStack_4d8;
                                        uStack_500 = uStack_4e0;
                                        uStack_4f4 = uStack_4d4;
                                        uStack_4f0 = uStack_4d0;
                                        if (0x13 < *(uint *)(lVar68 + 0x18)) {
                                          *(undefined4 *)(lVar68 + 0x280) = 0x12;
                                          *(undefined8 *)(lVar68 + 0x298) = uStack_4ec;
                                          *(ulong *)(lVar68 + 0x290) =
                                               CONCAT44(uStack_4d0,uStack_4d4);
                                          *(ulong *)(lVar68 + 0x28c) =
                                               CONCAT44(uStack_4d4,uStack_4d8);
                                          *(undefined8 *)(lVar68 + 0x284) = uStack_4e0;
                                          uStack_518 = 0;
                                          uStack_514 = 0;
                                          uStack_520 = 0;
                                          uStack_508 = 0;
                                          uStack_510 = 0;
                                          uStack_50c = 0;
                                          FUN_071ce4a0(DAT_01650994,DAT_0165106c,DAT_01650b14,
                                                       DAT_01650998,uVar13,DAT_01650e60,0x3f800000,
                                                       &uStack_520,0);
                                          uStack_52c = CONCAT44(uStack_508,uStack_50c);
                                          uStack_538 = uStack_518;
                                          uStack_540 = uStack_520;
                                          uStack_534 = uStack_514;
                                          uStack_530 = uStack_510;
                                          if (0x14 < *(uint *)(lVar68 + 0x18)) {
                                            *(undefined4 *)(lVar68 + 0x2a0) = 0x13;
                                            *(undefined8 *)(lVar68 + 0x2b8) = uStack_52c;
                                            *(ulong *)(lVar68 + 0x2b0) =
                                                 CONCAT44(uStack_510,uStack_514);
                                            *(ulong *)(lVar68 + 0x2ac) =
                                                 CONCAT44(uStack_514,uStack_518);
                                            *(undefined8 *)(lVar68 + 0x2a4) = uStack_520;
                                            uVar39 = DAT_016510d0;
                                            uVar25 = DAT_01650e64;
                                            uVar23 = DAT_01650d50;
                                            uVar16 = DAT_01650c34;
                                            uStack_558 = 0;
                                            uStack_554 = 0;
                                            uStack_560 = 0;
                                            uStack_548 = 0;
                                            uStack_550 = 0;
                                            uStack_54c = 0;
                                            FUN_071ce4a0(DAT_016513ec,&uStack_560,0);
                                            uStack_56c = CONCAT44(uStack_548,uStack_54c);
                                            uStack_578 = uStack_558;
                                            uStack_580 = uStack_560;
                                            uStack_574 = uStack_554;
                                            uStack_570 = uStack_550;
                                            if (0x15 < *(uint *)(lVar68 + 0x18)) {
                                              *(undefined4 *)(lVar68 + 0x2c0) = 1;
                                              *(undefined8 *)(lVar68 + 0x2d8) = uStack_56c;
                                              *(ulong *)(lVar68 + 0x2d0) =
                                                   CONCAT44(uStack_550,uStack_554);
                                              *(ulong *)(lVar68 + 0x2cc) =
                                                   CONCAT44(uStack_554,uStack_558);
                                              *(undefined8 *)(lVar68 + 0x2c4) = uStack_560;
                                              uVar64 = DAT_01651448;
                                              uVar45 = DAT_01651220;
                                              uVar42 = DAT_0165116c;
                                              uVar31 = DAT_01650f60;
                                              uStack_598 = 0;
                                              uStack_594 = 0;
                                              uStack_5a0 = 0;
                                              uStack_588 = 0;
                                              uStack_590 = 0;
                                              uStack_58c = 0;
                                              FUN_071ce4a0(DAT_01650f5c,&uStack_5a0,0);
                                              uStack_5ac = CONCAT44(uStack_588,uStack_58c);
                                              uStack_5b8 = uStack_598;
                                              uStack_5c0 = uStack_5a0;
                                              uStack_5b4 = uStack_594;
                                              uStack_5b0 = uStack_590;
                                              if (0x16 < *(uint *)(lVar68 + 0x18)) {
                                                *(undefined4 *)(lVar68 + 0x2e0) = 0x15;
                                                *(undefined8 *)(lVar68 + 0x2f8) = uStack_5ac;
                                                *(ulong *)(lVar68 + 0x2f0) =
                                                     CONCAT44(uStack_590,uStack_594);
                                                *(ulong *)(lVar68 + 0x2ec) =
                                                     CONCAT44(uStack_594,uStack_598);
                                                *(undefined8 *)(lVar68 + 0x2e4) = uStack_5a0;
                                                uVar54 = DAT_01651308;
                                                uVar44 = DAT_016511bc;
                                                uVar7 = DAT_01650a08;
                                                uVar2 = DAT_01650948;
                                                uStack_5d8 = 0;
                                                uStack_5d4 = 0;
                                                uStack_5e0 = 0;
                                                uStack_5c8 = 0;
                                                uStack_5d0 = 0;
                                                uStack_5cc = 0;
                                                FUN_071ce4a0(DAT_01651304,&uStack_5e0,0);
                                                uStack_5ec = CONCAT44(uStack_5c8,uStack_5cc);
                                                uStack_5f8 = uStack_5d8;
                                                uStack_600 = uStack_5e0;
                                                uStack_5f4 = uStack_5d4;
                                                uStack_5f0 = uStack_5d0;
                                                if (0x17 < *(uint *)(lVar68 + 0x18)) {
                                                  *(undefined4 *)(lVar68 + 0x300) = 0x16;
                                                  *(undefined8 *)(lVar68 + 0x318) = uStack_5ec;
                                                  *(ulong *)(lVar68 + 0x310) =
                                                       CONCAT44(uStack_5d0,uStack_5d4);
                                                  *(ulong *)(lVar68 + 0x30c) =
                                                       CONCAT44(uStack_5d4,uStack_5d8);
                                                  *(undefined8 *)(lVar68 + 0x304) = uStack_5e0;
                                                  uVar55 = DAT_0165130c;
                                                  uVar49 = DAT_01651290;
                                                  uVar29 = DAT_01650f14;
                                                  uVar10 = DAT_01650ac0;
                                                  uStack_618 = 0;
                                                  uStack_614 = 0;
                                                  uStack_620 = 0;
                                                  uStack_608 = 0;
                                                  uStack_610 = 0;
                                                  uStack_60c = 0;
                                                  FUN_071ce4a0(DAT_01650a0c,&uStack_620,0);
                                                  uStack_62c = CONCAT44(uStack_608,uStack_60c);
                                                  uStack_638 = uStack_618;
                                                  uStack_640 = uStack_620;
                                                  uStack_634 = uStack_614;
                                                  uStack_630 = uStack_610;
                                                  if (0x18 < *(uint *)(lVar68 + 0x18)) {
                                                    *(undefined4 *)(lVar68 + 800) = 0x17;
                                                    *(undefined8 *)(lVar68 + 0x338) = uStack_62c;
                                                    *(ulong *)(lVar68 + 0x330) =
                                                         CONCAT44(uStack_610,uStack_614);
                                                    *(ulong *)(lVar68 + 0x32c) =
                                                         CONCAT44(uStack_614,uStack_618);
                                                    *(undefined8 *)(lVar68 + 0x324) = uStack_620;
                                                    uVar27 = DAT_01650ea0;
                                                    uVar26 = DAT_01650e68;
                                                    uStack_658 = 0;
                                                    uStack_654 = 0;
                                                    uStack_660 = 0;
                                                    uStack_648 = 0;
                                                    uStack_650 = 0;
                                                    uStack_64c = 0;
                                                    FUN_071ce4a0(DAT_01650d54,DAT_01650ea0,
                                                                 DAT_01650e68,uVar13,uVar43,
                                                                 DAT_0165099c,0x3f800000,&uStack_660
                                                                 ,0);
                                                    uStack_66c = CONCAT44(uStack_648,uStack_64c);
                                                    uStack_678 = uStack_658;
                                                    uStack_680 = uStack_660;
                                                    uStack_674 = uStack_654;
                                                    uStack_670 = uStack_650;
                                                    if (0x19 < *(uint *)(lVar68 + 0x18)) {
                                                      *(undefined4 *)(lVar68 + 0x340) = 0x18;
                                                      *(undefined8 *)(lVar68 + 0x358) = uStack_66c;
                                                      *(ulong *)(lVar68 + 0x350) =
                                                           CONCAT44(uStack_650,uStack_654);
                                                      *(ulong *)(lVar68 + 0x34c) =
                                                           CONCAT44(uStack_654,uStack_658);
                                                      *(undefined8 *)(lVar68 + 0x344) = uStack_660;
                                                      if (lVar67 != 0) {
                                                        *(long *)(lVar67 + 0x10) = lVar68;
                                                        thunk_FUN_036b7ad0((long *)(lVar67 + 0x10),
                                                                           lVar68);
                                                        **(long **)(*(long *)puVar65 + 0xb8) =
                                                             lVar67;
                                                        thunk_FUN_036b7ad0(*(undefined8 *)
                                                                            (*(long *)puVar65 + 0xb8
                                                                            ),lVar67);
                                                        lVar67 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                     puVar65);
                                                        FUN_060e6b40();
                                                        lVar68 = FUN_03642a4c(*(undefined8 *)puVar66
                                                                              ,0x1a);
                                                        uStack_698 = 0;
                                                        uStack_694 = 0;
                                                        uStack_6a0 = 0;
                                                        uStack_688 = 0;
                                                        uStack_690 = 0;
                                                        uStack_68c = 0;
                                                        FUN_071ce4a0(DAT_01650fc0,uVar1,uVar4,0,0,0,
                                                                     0x3f800000,&uStack_6a0,0);
                                                        if (lVar68 != 0) {
                                                          uStack_6ac = CONCAT44(uStack_688,
                                                                                uStack_68c);
                                                          uStack_6b8 = uStack_698;
                                                          uStack_6c0 = uStack_6a0;
                                                          uStack_6b4 = uStack_694;
                                                          uStack_6b0 = uStack_690;
                                                          if (*(int *)(lVar68 + 0x18) != 0) {
                                                            *(ulong *)(lVar68 + 0x2c) =
                                                                 CONCAT44(uStack_694,uStack_698);
                                                            *(undefined8 *)(lVar68 + 0x24) =
                                                                 uStack_6a0;
                                                            *(undefined8 *)(lVar68 + 0x38) =
                                                                 uStack_6ac;
                                                            *(ulong *)(lVar68 + 0x30) =
                                                                 CONCAT44(uStack_690,uStack_694);
                                                            *(undefined4 *)(lVar68 + 0x20) = 1;
                                                            uStack_6d8 = 0;
                                                            uStack_6d4 = 0;
                                                            uStack_6e0 = 0;
                                                            uStack_6c8 = 0;
                                                            uStack_6d0 = 0;
                                                            uStack_6cc = 0;
                                                            FUN_071ce4a0(0,0,0,0,0,0,0x3f800000,
                                                                         &uStack_6e0,0);
                                                            uStack_6ec = CONCAT44(uStack_6c8,
                                                                                  uStack_6cc);
                                                            uStack_6f8 = uStack_6d8;
                                                            uStack_700 = uStack_6e0;
                                                            uStack_6f4 = uStack_6d4;
                                                            uStack_6f0 = uStack_6d0;
                                                            if ((*(uint *)(lVar68 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined4 *)(lVar68 + 0x40) =
                                                                   0xffffffff;
                                                              *(ulong *)(lVar68 + 0x4c) =
                                                                   CONCAT44(uStack_6d4,uStack_6d8);
                                                              *(undefined8 *)(lVar68 + 0x44) =
                                                                   uStack_6e0;
                                                              uVar1 = DAT_01651070;
                                                              *(undefined8 *)(lVar68 + 0x58) =
                                                                   uStack_6ec;
                                                              *(ulong *)(lVar68 + 0x50) =
                                                                   CONCAT44(uStack_6d0,uStack_6d4);
                                                              uStack_718 = 0;
                                                              uStack_714 = 0;
                                                              uStack_720 = 0;
                                                              uStack_708 = 0;
                                                              uStack_710 = 0;
                                                              uStack_70c = 0;
                                                              FUN_071ce4a0(uVar1,uVar21,uVar17,
                                                                           DAT_01650ea4,DAT_01650d58
                                                                           ,DAT_01650bc8,
                                                                           DAT_0165094c,&uStack_720,
                                                                           0);
                                                              uStack_72c = CONCAT44(uStack_708,
                                                                                    uStack_70c);
                                                              uStack_738 = uStack_718;
                                                              uStack_740 = uStack_720;
                                                              uStack_734 = uStack_714;
                                                              uStack_730 = uStack_710;
                                                              if (2 < *(uint *)(lVar68 + 0x18)) {
                                                                *(undefined4 *)(lVar68 + 0x60) = 1;
                                                                *(ulong *)(lVar68 + 0x6c) =
                                                                     CONCAT44(uStack_714,uStack_718)
                                                                ;
                                                                *(undefined8 *)(lVar68 + 100) =
                                                                     uStack_720;
                                                                uVar1 = DAT_01651310;
                                                                *(undefined8 *)(lVar68 + 0x78) =
                                                                     uStack_72c;
                                                                *(ulong *)(lVar68 + 0x70) =
                                                                     CONCAT44(uStack_710,uStack_714)
                                                                ;
                                                                uStack_758 = 0;
                                                                uStack_754 = 0;
                                                                uStack_760 = 0;
                                                                uStack_748 = 0;
                                                                uStack_750 = 0;
                                                                uStack_74c = 0;
                                                                FUN_071ce4a0(uVar1,DAT_01651010,
                                                                             DAT_016508e8,
                                                                             DAT_01651314,
                                                                             DAT_0165144c,
                                                                             DAT_01650dac,
                                                                             DAT_01650cb0,
                                                                             &uStack_760,0);
                                                                uStack_76c = CONCAT44(uStack_748,
                                                                                      uStack_74c);
                                                                uStack_778 = uStack_758;
                                                                uStack_780 = uStack_760;
                                                                uStack_774 = uStack_754;
                                                                uStack_770 = uStack_750;
                                                                if ((*(uint *)(lVar68 + 0x18) &
                                                                    0xfffffffc) != 0) {
                                                                  *(undefined4 *)(lVar68 + 0x80) = 2
                                                                  ;
                                                                  *(ulong *)(lVar68 + 0x8c) =
                                                                       CONCAT44(uStack_754,
                                                                                uStack_758);
                                                                  *(undefined8 *)(lVar68 + 0x84) =
                                                                       uStack_760;
                                                                  uVar1 = DAT_01651014;
                                                                  *(undefined8 *)(lVar68 + 0x98) =
                                                                       uStack_76c;
                                                                  *(ulong *)(lVar68 + 0x90) =
                                                                       CONCAT44(uStack_750,
                                                                                uStack_754);
                                                                  uStack_798 = 0;
                                                                  uStack_794 = 0;
                                                                  uStack_7a0 = 0;
                                                                  uStack_788 = 0;
                                                                  uStack_790 = 0;
                                                                  uStack_78c = 0;
                                                                  FUN_071ce4a0(uVar1,DAT_01650b18,
                                                                               DAT_01651118,
                                                                               DAT_01650a10,
                                                                               DAT_016510d4,
                                                                               DAT_01650f64,
                                                                               DAT_01651074,
                                                                               &uStack_7a0,0);
                                                                  uStack_7ac = CONCAT44(uStack_788,
                                                                                        uStack_78c);
                                                                  uStack_7b8 = uStack_798;
                                                                  uStack_7c0 = uStack_7a0;
                                                                  uStack_7b4 = uStack_794;
                                                                  uStack_7b0 = uStack_790;
                                                                  if (4 < *(uint *)(lVar68 + 0x18))
                                                                  {
                                                                    *(undefined4 *)(lVar68 + 0xa0) =
                                                                         3;
                                                                    *(ulong *)(lVar68 + 0xac) =
                                                                         CONCAT44(uStack_794,
                                                                                  uStack_798);
                                                                    *(undefined8 *)(lVar68 + 0xa4) =
                                                                         uStack_7a0;
                                                                    *(undefined8 *)(lVar68 + 0xb8) =
                                                                         uStack_7ac;
                                                                    *(ulong *)(lVar68 + 0xb0) =
                                                                         CONCAT44(uStack_790,
                                                                                  uStack_794);
                                                                    uStack_7d8 = 0;
                                                                    uStack_7d4 = 0;
                                                                    uStack_7e0 = 0;
                                                                    uStack_7c8 = 0;
                                                                    uStack_7d0 = 0;
                                                                    uStack_7cc = 0;
                                                                    FUN_071ce4a0(DAT_01650bcc,
                                                                                 DAT_01650d5c,
                                                                                 DAT_01650cb4,
                                                                                 DAT_01650950,0,0,
                                                                                 0x3f800000,
                                                                                 &uStack_7e0,0);
                                                                    uStack_7ec = CONCAT44(uStack_7c8
                                                                                          ,
                                                  uStack_7cc);
                                                  uStack_7f8 = uStack_7d8;
                                                  uStack_800 = uStack_7e0;
                                                  uStack_7f4 = uStack_7d4;
                                                  uStack_7f0 = uStack_7d0;
                                                  if (5 < *(uint *)(lVar68 + 0x18)) {
                                                    *(ulong *)(lVar68 + 0xcc) =
                                                         CONCAT44(uStack_7d4,uStack_7d8);
                                                    *(undefined8 *)(lVar68 + 0xc4) = uStack_7e0;
                                                    *(undefined8 *)(lVar68 + 0xd8) = uStack_7ec;
                                                    *(ulong *)(lVar68 + 0xd0) =
                                                         CONCAT44(uStack_7d0,uStack_7d4);
                                                    *(undefined4 *)(lVar68 + 0xc0) = 4;
                                                    uStack_818 = 0;
                                                    uStack_814 = 0;
                                                    uStack_820 = 0;
                                                    uStack_808 = 0;
                                                    uStack_810 = 0;
                                                    uStack_80c = 0;
                                                    FUN_071ce4a0(DAT_0165111c,uVar9,uVar36,0,0,0,
                                                                 0x3f800000,&uStack_820,0);
                                                    uStack_82c = CONCAT44(uStack_808,uStack_80c);
                                                    uStack_838 = uStack_818;
                                                    uStack_840 = uStack_820;
                                                    uStack_834 = uStack_814;
                                                    uStack_830 = uStack_810;
                                                    if (6 < *(uint *)(lVar68 + 0x18)) {
                                                      *(undefined4 *)(lVar68 + 0xe0) = 1;
                                                      *(ulong *)(lVar68 + 0xec) =
                                                           CONCAT44(uStack_814,uStack_818);
                                                      *(undefined8 *)(lVar68 + 0xe4) = uStack_820;
                                                      uVar1 = DAT_01650d60;
                                                      *(undefined8 *)(lVar68 + 0xf8) = uStack_82c;
                                                      *(ulong *)(lVar68 + 0xf0) =
                                                           CONCAT44(uStack_810,uStack_814);
                                                      uStack_858 = 0;
                                                      uStack_854 = 0;
                                                      uStack_860 = 0;
                                                      uStack_848 = 0;
                                                      uStack_850 = 0;
                                                      uStack_84c = 0;
                                                      FUN_071ce4a0(uVar1,uVar22,uVar34,uVar46,
                                                                   DAT_01650b1c,DAT_01650f68,uVar32,
                                                                   &uStack_860,0);
                                                      uStack_86c = CONCAT44(uStack_848,uStack_84c);
                                                      uStack_878 = uStack_858;
                                                      uStack_880 = uStack_860;
                                                      uStack_874 = uStack_854;
                                                      uStack_870 = uStack_850;
                                                      if ((*(uint *)(lVar68 + 0x18) & 0xfffffff8) !=
                                                          0) {
                                                        *(undefined4 *)(lVar68 + 0x100) = 6;
                                                        *(undefined8 *)(lVar68 + 0x118) = uStack_86c
                                                        ;
                                                        *(ulong *)(lVar68 + 0x110) =
                                                             CONCAT44(uStack_850,uStack_854);
                                                        *(ulong *)(lVar68 + 0x10c) =
                                                             CONCAT44(uStack_854,uStack_858);
                                                        *(undefined8 *)(lVar68 + 0x104) = uStack_860
                                                        ;
                                                        uStack_898 = 0;
                                                        uStack_894 = 0;
                                                        uStack_8a0 = 0;
                                                        uStack_888 = 0;
                                                        uStack_890 = 0;
                                                        uStack_88c = 0;
                                                        FUN_071ce4a0(DAT_01651318,DAT_01650a14,
                                                                     DAT_01650cb8,uVar11,
                                                                     DAT_01650e00,DAT_01651450,
                                                                     uVar59,&uStack_8a0,0);
                                                        uStack_8ac = CONCAT44(uStack_888,uStack_88c)
                                                        ;
                                                        uStack_8b8 = uStack_898;
                                                        uStack_8c0 = uStack_8a0;
                                                        uStack_8b4 = uStack_894;
                                                        uStack_8b0 = uStack_890;
                                                        if (8 < *(uint *)(lVar68 + 0x18)) {
                                                          *(undefined4 *)(lVar68 + 0x120) = 7;
                                                          *(undefined8 *)(lVar68 + 0x138) =
                                                               uStack_8ac;
                                                          *(ulong *)(lVar68 + 0x130) =
                                                               CONCAT44(uStack_890,uStack_894);
                                                          uVar1 = DAT_016513f0;
                                                          *(ulong *)(lVar68 + 300) =
                                                               CONCAT44(uStack_894,uStack_898);
                                                          *(undefined8 *)(lVar68 + 0x124) =
                                                               uStack_8a0;
                                                          uStack_8d8 = 0;
                                                          uStack_8d4 = 0;
                                                          uStack_8e0 = 0;
                                                          uStack_8c8 = 0;
                                                          uStack_8d0 = 0;
                                                          uStack_8cc = 0;
                                                          FUN_071ce4a0(DAT_01650f18,uVar60,uVar35,
                                                                       uVar18,uVar1,DAT_01650e04,
                                                                       uVar62,&uStack_8e0,0);
                                                          uStack_8ec = CONCAT44(uStack_8c8,
                                                                                uStack_8cc);
                                                          uStack_8f8 = uStack_8d8;
                                                          uStack_900 = uStack_8e0;
                                                          uStack_8f4 = uStack_8d4;
                                                          uStack_8f0 = uStack_8d0;
                                                          if (9 < *(uint *)(lVar68 + 0x18)) {
                                                            *(undefined4 *)(lVar68 + 0x140) = 8;
                                                            *(undefined8 *)(lVar68 + 0x158) =
                                                                 uStack_8ec;
                                                            *(ulong *)(lVar68 + 0x150) =
                                                                 CONCAT44(uStack_8d0,uStack_8d4);
                                                            *(ulong *)(lVar68 + 0x14c) =
                                                                 CONCAT44(uStack_8d4,uStack_8d8);
                                                            *(undefined8 *)(lVar68 + 0x144) =
                                                                 uStack_8e0;
                                                            uStack_918 = 0;
                                                            uStack_914 = 0;
                                                            uStack_920 = 0;
                                                            uStack_908 = 0;
                                                            uStack_910 = 0;
                                                            uStack_90c = 0;
                                                            FUN_071ce4a0(DAT_01650db0,DAT_01651454,
                                                                         DAT_01650a18,0,DAT_01650ea8
                                                                         ,0,0x3f800000,&uStack_920,0
                                                                        );
                                                            uStack_92c = CONCAT44(uStack_908,
                                                                                  uStack_90c);
                                                            uStack_938 = uStack_918;
                                                            uStack_940 = uStack_920;
                                                            uStack_934 = uStack_914;
                                                            uStack_930 = uStack_910;
                                                            if (10 < *(uint *)(lVar68 + 0x18)) {
                                                              *(undefined4 *)(lVar68 + 0x160) = 9;
                                                              *(undefined8 *)(lVar68 + 0x178) =
                                                                   uStack_92c;
                                                              *(ulong *)(lVar68 + 0x170) =
                                                                   CONCAT44(uStack_910,uStack_914);
                                                              *(ulong *)(lVar68 + 0x16c) =
                                                                   CONCAT44(uStack_914,uStack_918);
                                                              *(undefined8 *)(lVar68 + 0x164) =
                                                                   uStack_920;
                                                              uStack_958 = 0;
                                                              uStack_954 = 0;
                                                              uStack_960 = 0;
                                                              uStack_948 = 0;
                                                              uStack_950 = 0;
                                                              uStack_94c = 0;
                                                              FUN_071ce4a0(DAT_01650cbc,uVar28,
                                                                           uVar30,0,0,0,0x3f800000,
                                                                           &uStack_960,0);
                                                              uStack_96c = CONCAT44(uStack_948,
                                                                                    uStack_94c);
                                                              uStack_978 = uStack_958;
                                                              uStack_980 = uStack_960;
                                                              uStack_974 = uStack_954;
                                                              uStack_970 = uStack_950;
                                                              if (0xb < *(uint *)(lVar68 + 0x18)) {
                                                                *(undefined4 *)(lVar68 + 0x180) = 1;
                                                                *(undefined8 *)(lVar68 + 0x198) =
                                                                     uStack_96c;
                                                                *(ulong *)(lVar68 + 400) =
                                                                     CONCAT44(uStack_950,uStack_954)
                                                                ;
                                                                uVar1 = DAT_01651170;
                                                                *(ulong *)(lVar68 + 0x18c) =
                                                                     CONCAT44(uStack_954,uStack_958)
                                                                ;
                                                                *(undefined8 *)(lVar68 + 0x184) =
                                                                     uStack_960;
                                                                uStack_998 = 0;
                                                                uStack_994 = 0;
                                                                uStack_9a0 = 0;
                                                                uStack_988 = 0;
                                                                uStack_990 = 0;
                                                                uStack_98c = 0;
                                                                FUN_071ce4a0(DAT_016508ec,uVar12,
                                                                             uVar5,uVar37,uVar1,
                                                                             DAT_01651380,uVar56,
                                                                             &uStack_9a0,0);
                                                                uStack_9ac = CONCAT44(uStack_988,
                                                                                      uStack_98c);
                                                                uStack_9b8 = uStack_998;
                                                                uStack_9c0 = uStack_9a0;
                                                                uStack_9b4 = uStack_994;
                                                                uStack_9b0 = uStack_990;
                                                                if (0xc < *(uint *)(lVar68 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar68 + 0x1a0) =
                                                                       0xb;
                                                                  *(undefined8 *)(lVar68 + 0x1b8) =
                                                                       uStack_9ac;
                                                                  *(ulong *)(lVar68 + 0x1b0) =
                                                                       CONCAT44(uStack_990,
                                                                                uStack_994);
                                                                  uVar1 = DAT_016509a0;
                                                                  *(ulong *)(lVar68 + 0x1ac) =
                                                                       CONCAT44(uStack_994,
                                                                                uStack_998);
                                                                  *(undefined8 *)(lVar68 + 0x1a4) =
                                                                       uStack_9a0;
                                                                  uStack_9d8 = 0;
                                                                  uStack_9d4 = 0;
                                                                  uStack_9e0 = 0;
                                                                  uStack_9c8 = 0;
                                                                  uStack_9d0 = 0;
                                                                  uStack_9cc = 0;
                                                                  FUN_071ce4a0(DAT_01650cc0,uVar14,
                                                                               uVar19,uVar33,uVar1,
                                                                               DAT_01651384,uVar20,
                                                                               &uStack_9e0,0);
                                                                  uStack_9ec = CONCAT44(uStack_9c8,
                                                                                        uStack_9cc);
                                                                  uStack_9f8 = uStack_9d8;
                                                                  uStack_a00 = uStack_9e0;
                                                                  uStack_9f4 = uStack_9d4;
                                                                  uStack_9f0 = uStack_9d0;
                                                                  if (0xd < *(uint *)(lVar68 + 0x18)
                                                                     ) {
                                                                    *(undefined4 *)(lVar68 + 0x1c0)
                                                                         = 0xc;
                                                                    *(undefined8 *)(lVar68 + 0x1d8)
                                                                         = uStack_9ec;
                                                                    *(ulong *)(lVar68 + 0x1d0) =
                                                                         CONCAT44(uStack_9d0,
                                                                                  uStack_9d4);
                                                                    uVar1 = DAT_01651294;
                                                                    *(ulong *)(lVar68 + 0x1cc) =
                                                                         CONCAT44(uStack_9d4,
                                                                                  uStack_9d8);
                                                                    *(undefined8 *)(lVar68 + 0x1c4)
                                                                         = uStack_9e0;
                                                                    uStack_a18 = 0;
                                                                    uStack_a14 = 0;
                                                                    uStack_a20 = 0;
                                                                    uStack_a08 = 0;
                                                                    uStack_a10 = 0;
                                                                    uStack_a0c = 0;
                                                                    FUN_071ce4a0(DAT_01650b20,uVar40
                                                                                 ,uVar61,uVar50,
                                                                                 uVar1,DAT_01650a1c,
                                                                                 uVar51,&uStack_a20,
                                                                                 0);
                                                                    uStack_a2c = CONCAT44(uStack_a08
                                                                                          ,
                                                  uStack_a0c);
                                                  uStack_a38 = uStack_a18;
                                                  uStack_a40 = uStack_a20;
                                                  uStack_a34 = uStack_a14;
                                                  uStack_a30 = uStack_a10;
                                                  if (0xe < *(uint *)(lVar68 + 0x18)) {
                                                    *(undefined4 *)(lVar68 + 0x1e0) = 0xd;
                                                    *(undefined8 *)(lVar68 + 0x1f8) = uStack_a2c;
                                                    *(ulong *)(lVar68 + 0x1f0) =
                                                         CONCAT44(uStack_a10,uStack_a14);
                                                    *(ulong *)(lVar68 + 0x1ec) =
                                                         CONCAT44(uStack_a14,uStack_a18);
                                                    *(undefined8 *)(lVar68 + 0x1e4) = uStack_a20;
                                                    uStack_a58 = 0;
                                                    uStack_a54 = 0;
                                                    uStack_a60 = 0;
                                                    uStack_a48 = 0;
                                                    uStack_a50 = 0;
                                                    uStack_a4c = 0;
                                                    FUN_071ce4a0(DAT_01651174,uVar47,uVar48,uVar43,
                                                                 0xa2800000,0xa3000000a3000000,
                                                                 0x3f800000,&uStack_a60,0);
                                                    uStack_a6c = CONCAT44(uStack_a48,uStack_a4c);
                                                    uStack_a78 = uStack_a58;
                                                    uStack_a80 = uStack_a60;
                                                    uStack_a74 = uStack_a54;
                                                    uStack_a70 = uStack_a50;
                                                    if ((*(uint *)(lVar68 + 0x18) & 0xfffffff0) != 0
                                                       ) {
                                                      *(undefined4 *)(lVar68 + 0x200) = 0xe;
                                                      *(undefined8 *)(lVar68 + 0x218) = uStack_a6c;
                                                      *(ulong *)(lVar68 + 0x210) =
                                                           CONCAT44(uStack_a50,uStack_a54);
                                                      *(ulong *)(lVar68 + 0x20c) =
                                                           CONCAT44(uStack_a54,uStack_a58);
                                                      *(undefined8 *)(lVar68 + 0x204) = uStack_a60;
                                                      uStack_a98 = 0;
                                                      uStack_a94 = 0;
                                                      uStack_aa0 = 0;
                                                      uStack_a88 = 0;
                                                      uStack_a90 = 0;
                                                      uStack_a8c = 0;
                                                      FUN_071ce4a0(DAT_016511c0,uVar38,uVar6,0,0,0,
                                                                   0x3f800000,&uStack_aa0,0);
                                                      uStack_aac = CONCAT44(uStack_a88,uStack_a8c);
                                                      uStack_ab8 = uStack_a98;
                                                      uStack_ac0 = uStack_aa0;
                                                      uStack_ab4 = uStack_a94;
                                                      uStack_ab0 = uStack_a90;
                                                      if (0x10 < *(uint *)(lVar68 + 0x18)) {
                                                        *(undefined4 *)(lVar68 + 0x220) = 1;
                                                        *(undefined8 *)(lVar68 + 0x238) = uStack_aac
                                                        ;
                                                        *(ulong *)(lVar68 + 0x230) =
                                                             CONCAT44(uStack_a90,uStack_a94);
                                                        uVar1 = DAT_016510d8;
                                                        *(ulong *)(lVar68 + 0x22c) =
                                                             CONCAT44(uStack_a94,uStack_a98);
                                                        *(undefined8 *)(lVar68 + 0x224) = uStack_aa0
                                                        ;
                                                        uStack_ad8 = 0;
                                                        uStack_ad4 = 0;
                                                        uStack_ae0 = 0;
                                                        uStack_ac8 = 0;
                                                        uStack_ad0 = 0;
                                                        uStack_acc = 0;
                                                        FUN_071ce4a0(DAT_01651018,uVar15,uVar8,
                                                                     uVar24,uVar1,DAT_01650d14,uVar3
                                                                     ,&uStack_ae0,0);
                                                        uStack_aec = CONCAT44(uStack_ac8,uStack_acc)
                                                        ;
                                                        uStack_af8 = uStack_ad8;
                                                        uStack_b00 = uStack_ae0;
                                                        uStack_af4 = uStack_ad4;
                                                        uStack_af0 = uStack_ad0;
                                                        if (0x11 < *(uint *)(lVar68 + 0x18)) {
                                                          *(undefined4 *)(lVar68 + 0x240) = 0x10;
                                                          *(undefined8 *)(lVar68 + 600) = uStack_aec
                                                          ;
                                                          *(ulong *)(lVar68 + 0x250) =
                                                               CONCAT44(uStack_ad0,uStack_ad4);
                                                          uVar1 = DAT_01650b78;
                                                          *(ulong *)(lVar68 + 0x24c) =
                                                               CONCAT44(uStack_ad4,uStack_ad8);
                                                          *(undefined8 *)(lVar68 + 0x244) =
                                                               uStack_ae0;
                                                          uStack_b18 = 0;
                                                          uStack_b14 = 0;
                                                          uStack_b20 = 0;
                                                          uStack_b08 = 0;
                                                          uStack_b10 = 0;
                                                          uStack_b0c = 0;
                                                          FUN_071ce4a0(DAT_01651078,uVar57,uVar63,
                                                                       uVar58,uVar1,DAT_01651298,
                                                                       uVar52,&uStack_b20,0);
                                                          uStack_b2c = CONCAT44(uStack_b08,
                                                                                uStack_b0c);
                                                          uStack_b38 = uStack_b18;
                                                          uStack_b40 = uStack_b20;
                                                          uStack_b34 = uStack_b14;
                                                          uStack_b30 = uStack_b10;
                                                          if (0x12 < *(uint *)(lVar68 + 0x18)) {
                                                            *(undefined4 *)(lVar68 + 0x260) = 0x11;
                                                            *(undefined8 *)(lVar68 + 0x278) =
                                                                 uStack_b2c;
                                                            *(ulong *)(lVar68 + 0x270) =
                                                                 CONCAT44(uStack_b10,uStack_b14);
                                                            uVar1 = DAT_0165107c;
                                                            *(ulong *)(lVar68 + 0x26c) =
                                                                 CONCAT44(uStack_b14,uStack_b18);
                                                            *(undefined8 *)(lVar68 + 0x264) =
                                                                 uStack_b20;
                                                            uStack_b58 = 0;
                                                            uStack_b54 = 0;
                                                            uStack_b60 = 0;
                                                            uStack_b48 = 0;
                                                            uStack_b50 = 0;
                                                            uStack_b4c = 0;
                                                            FUN_071ce4a0(DAT_01650d64,uVar53,uVar41,
                                                                         uVar1,DAT_016510dc,
                                                                         DAT_0165122c,DAT_0165129c,
                                                                         &uStack_b60,0);
                                                            uStack_b6c = CONCAT44(uStack_b48,
                                                                                  uStack_b4c);
                                                            uStack_b78 = uStack_b58;
                                                            uStack_b80 = uStack_b60;
                                                            uStack_b74 = uStack_b54;
                                                            uStack_b70 = uStack_b50;
                                                            if (0x13 < *(uint *)(lVar68 + 0x18)) {
                                                              *(undefined4 *)(lVar68 + 0x280) = 0x12
                                                              ;
                                                              *(undefined8 *)(lVar68 + 0x298) =
                                                                   uStack_b6c;
                                                              *(ulong *)(lVar68 + 0x290) =
                                                                   CONCAT44(uStack_b50,uStack_b54);
                                                              *(ulong *)(lVar68 + 0x28c) =
                                                                   CONCAT44(uStack_b54,uStack_b58);
                                                              *(undefined8 *)(lVar68 + 0x284) =
                                                                   uStack_b60;
                                                              uVar1 = DAT_01651320;
                                                              uStack_b98 = 0;
                                                              uStack_b94 = 0;
                                                              uStack_ba0 = 0;
                                                              uStack_b88 = 0;
                                                              uStack_b90 = 0;
                                                              uStack_b8c = 0;
                                                              FUN_071ce4a0(DAT_01650eac,DAT_0165131c
                                                                           ,DAT_01651458,uVar43,
                                                                           DAT_01651320,
                                                                           0x8800000088000000,
                                                                           0x3f800000,&uStack_ba0,0)
                                                              ;
                                                              uStack_bac = CONCAT44(uStack_b88,
                                                                                    uStack_b8c);
                                                              uStack_bb8 = uStack_b98;
                                                              uStack_bc0 = uStack_ba0;
                                                              uStack_bb4 = uStack_b94;
                                                              uStack_bb0 = uStack_b90;
                                                              if (0x14 < *(uint *)(lVar68 + 0x18)) {
                                                                *(undefined4 *)(lVar68 + 0x2a0) =
                                                                     0x13;
                                                                *(undefined8 *)(lVar68 + 0x2b8) =
                                                                     uStack_bac;
                                                                *(ulong *)(lVar68 + 0x2b0) =
                                                                     CONCAT44(uStack_b90,uStack_b94)
                                                                ;
                                                                uVar4 = DAT_01651120;
                                                                *(ulong *)(lVar68 + 0x2ac) =
                                                                     CONCAT44(uStack_b94,uStack_b98)
                                                                ;
                                                                *(undefined8 *)(lVar68 + 0x2a4) =
                                                                     uStack_ba0;
                                                                uStack_bd8 = 0;
                                                                uStack_bd4 = 0;
                                                                uStack_be0 = 0;
                                                                uStack_bc8 = 0;
                                                                uStack_bd0 = 0;
                                                                uStack_bcc = 0;
                                                                FUN_071ce4a0(DAT_01650b24,uVar16,
                                                                             uVar23,uVar25,uVar4,
                                                                             DAT_01650954,uVar39,
                                                                             &uStack_be0,0);
                                                                uStack_bec = CONCAT44(uStack_bc8,
                                                                                      uStack_bcc);
                                                                uStack_bf8 = uStack_bd8;
                                                                uStack_c00 = uStack_be0;
                                                                uStack_bf4 = uStack_bd4;
                                                                uStack_bf0 = uStack_bd0;
                                                                if (0x15 < *(uint *)(lVar68 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar68 + 0x2c0) =
                                                                       1;
                                                                  *(undefined8 *)(lVar68 + 0x2d8) =
                                                                       uStack_bec;
                                                                  *(ulong *)(lVar68 + 0x2d0) =
                                                                       CONCAT44(uStack_bd0,
                                                                                uStack_bd4);
                                                                  uVar4 = DAT_0165101c;
                                                                  *(ulong *)(lVar68 + 0x2cc) =
                                                                       CONCAT44(uStack_bd4,
                                                                                uStack_bd8);
                                                                  *(undefined8 *)(lVar68 + 0x2c4) =
                                                                       uStack_be0;
                                                                  uStack_c20 = 0;
                                                                  uStack_c18 = 0;
                                                                  uStack_c14 = 0;
                                                                  uStack_c08 = 0;
                                                                  uStack_c10 = 0;
                                                                  uStack_c0c = 0;
                                                                  FUN_071ce4a0(DAT_01650e6c,uVar31,
                                                                               uVar45,uVar42,uVar4,
                                                                               DAT_01650eb0,uVar64,
                                                                               &uStack_c20,0);
                                                                  uStack_c2c = CONCAT44(uStack_c08,
                                                                                        uStack_c0c);
                                                                  uStack_c38 = uStack_c18;
                                                                  uStack_c40 = uStack_c20;
                                                                  uStack_c34 = uStack_c14;
                                                                  uStack_c30 = uStack_c10;
                                                                  if (0x16 < *(uint *)(lVar68 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar68 + 0x2e0)
                                                                         = 0x15;
                                                                    *(undefined8 *)(lVar68 + 0x2f8)
                                                                         = uStack_c2c;
                                                                    *(ulong *)(lVar68 + 0x2f0) =
                                                                         CONCAT44(uStack_c10,
                                                                                  uStack_c14);
                                                                    uVar4 = DAT_01651124;
                                                                    *(ulong *)(lVar68 + 0x2ec) =
                                                                         CONCAT44(uStack_c14,
                                                                                  uStack_c18);
                                                                    *(undefined8 *)(lVar68 + 0x2e4)
                                                                         = uStack_c20;
                                                                    uStack_c60 = 0;
                                                                    uStack_c58 = 0;
                                                                    uStack_c54 = 0;
                                                                    uStack_c48 = 0;
                                                                    uStack_c50 = 0;
                                                                    uStack_c4c = 0;
                                                                    FUN_071ce4a0(DAT_0165145c,uVar7,
                                                                                 uVar2,uVar44,uVar4,
                                                                                 DAT_01651324,uVar54
                                                                                 ,&uStack_c60,0);
                                                                    uStack_c6c = CONCAT44(uStack_c48
                                                                                          ,
                                                  uStack_c4c);
                                                  uStack_c78 = uStack_c58;
                                                  uStack_c80 = uStack_c60;
                                                  uStack_c74 = uStack_c54;
                                                  uStack_c70 = uStack_c50;
                                                  if (0x17 < *(uint *)(lVar68 + 0x18)) {
                                                    *(undefined4 *)(lVar68 + 0x300) = 0x16;
                                                    *(undefined8 *)(lVar68 + 0x318) = uStack_c6c;
                                                    *(ulong *)(lVar68 + 0x310) =
                                                         CONCAT44(uStack_c50,uStack_c54);
                                                    uVar4 = DAT_016509a4;
                                                    *(ulong *)(lVar68 + 0x30c) =
                                                         CONCAT44(uStack_c54,uStack_c58);
                                                    *(undefined8 *)(lVar68 + 0x304) = uStack_c60;
                                                    uStack_ca0 = 0;
                                                    uStack_c98 = 0;
                                                    uStack_c94 = 0;
                                                    uStack_c88 = 0;
                                                    uStack_c90 = 0;
                                                    uStack_c8c = 0;
                                                    FUN_071ce4a0(DAT_01650f6c,uVar29,uVar10,uVar49,
                                                                 uVar4,DAT_01650a20,uVar55,
                                                                 &uStack_ca0,0);
                                                    uStack_cac = CONCAT44(uStack_c88,uStack_c8c);
                                                    uStack_cb8 = uStack_c98;
                                                    uStack_cc0 = uStack_ca0;
                                                    uStack_cb4 = uStack_c94;
                                                    uStack_cb0 = uStack_c90;
                                                    if (0x18 < *(uint *)(lVar68 + 0x18)) {
                                                      *(undefined4 *)(lVar68 + 800) = 0x17;
                                                      *(undefined8 *)(lVar68 + 0x338) = uStack_cac;
                                                      *(ulong *)(lVar68 + 0x330) =
                                                           CONCAT44(uStack_c90,uStack_c94);
                                                      *(ulong *)(lVar68 + 0x32c) =
                                                           CONCAT44(uStack_c94,uStack_c98);
                                                      *(undefined8 *)(lVar68 + 0x324) = uStack_ca0;
                                                      uStack_ce0 = 0;
                                                      uStack_cd8 = 0;
                                                      uStack_cd4 = 0;
                                                      uStack_cc8 = 0;
                                                      uStack_cd0 = 0;
                                                      uStack_ccc = 0;
                                                      FUN_071ce4a0(DAT_01650e08,uVar27,uVar26,uVar13
                                                                   ,uVar13,uVar1,0x3f800000,
                                                                   &uStack_ce0,0);
                                                      if (0x19 < *(uint *)(lVar68 + 0x18)) {
                                                        *(undefined4 *)(lVar68 + 0x340) = 0x18;
                                                        *(ulong *)(lVar68 + 0x358) =
                                                             CONCAT44(uStack_cc8,uStack_ccc);
                                                        *(ulong *)(lVar68 + 0x350) =
                                                             CONCAT44(uStack_cd0,uStack_cd4);
                                                        *(ulong *)(lVar68 + 0x34c) =
                                                             CONCAT44(uStack_cd4,uStack_cd8);
                                                        *(undefined8 *)(lVar68 + 0x344) = uStack_ce0
                                                        ;
                                                        if (lVar67 != 0) {
                                                          *(long *)(lVar67 + 0x10) = lVar68;
                                                          thunk_FUN_036b7ad0((long *)(lVar67 + 0x10)
                                                                             ,lVar68);
                                                          plVar69 = (long *)(*(long *)(*(long *)
                                                  puVar65 + 0xb8) + 8);
                                                  *plVar69 = lVar67;
                                                  thunk_FUN_036b7ad0(plVar69,lVar67);
                                                  return;
                                                  }
                                                  goto LAB_060e874c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_060e8748;
                                                  }
                                                  }
LAB_060e874c:
                    /* WARNING: Subroutine does not return */
                                                  FUN_03642c18();
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_060e8748:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


