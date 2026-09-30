/*
FUNCTION_NAME: OVRPlugin_GetBodyState_m04E3A34E470F7F3919DC0164EB07DF058AB4C302
ENTRY_POINT: 02dba650
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_11;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRPlugin_GetBodyState_m04E3A34E470F7F3919DC0164EB07DF058AB4C302
          (int param_1,void **param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBVar3;
  undefined8 *puVar4;
  undefined1 auStack_35670 [40];
  undefined1 auStack_35648 [40];
  undefined1 auStack_35620 [2784];
  undefined1 auStack_34b40 [40];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_34b18;
  void **ppvStack_34b10;
  undefined1 auStack_34b08 [40];
  undefined1 auStack_34ae0 [40];
  undefined1 auStack_34ab8 [2744];
  undefined1 auStack_34000 [80];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_33fb0;
  void **ppvStack_33fa8;
  undefined1 auStack_33fa0 [40];
  undefined1 auStack_33f78 [40];
  undefined1 auStack_33f50 [2704];
  undefined1 auStack_334c0 [120];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_33448;
  void **ppvStack_33440;
  undefined1 auStack_33438 [40];
  undefined1 auStack_33410 [40];
  undefined1 auStack_333e8 [2664];
  undefined1 auStack_32980 [160];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_328e0;
  void **ppvStack_328d8;
  undefined1 auStack_328d0 [40];
  undefined1 auStack_328a8 [40];
  undefined1 auStack_32880 [2624];
  undefined1 auStack_31e40 [200];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_31d78;
  void **ppvStack_31d70;
  undefined1 auStack_31d68 [40];
  undefined1 auStack_31d40 [40];
  undefined1 auStack_31d18 [2584];
  undefined1 auStack_31300 [240];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_31210;
  void **ppvStack_31208;
  undefined1 auStack_31200 [40];
  undefined1 auStack_311d8 [40];
  undefined1 auStack_311b0 [2544];
  undefined1 auStack_307c0 [280];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_306a8;
  void **ppvStack_306a0;
  undefined1 auStack_30698 [40];
  undefined1 auStack_30670 [40];
  undefined1 auStack_30648 [2504];
  undefined1 auStack_2fc80 [320];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_2fb40;
  void **ppvStack_2fb38;
  undefined1 auStack_2fb30 [40];
  undefined1 auStack_2fb08 [40];
  undefined1 auStack_2fae0 [2464];
  undefined1 auStack_2f140 [360];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_2efd8;
  void **ppvStack_2efd0;
  undefined1 auStack_2efc8 [40];
  undefined1 auStack_2efa0 [40];
  undefined1 auStack_2ef78 [2424];
  undefined1 auStack_2e600 [400];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_2e470;
  void **ppvStack_2e468;
  undefined1 auStack_2e460 [40];
  undefined1 auStack_2e438 [40];
  undefined1 auStack_2e410 [2384];
  undefined1 auStack_2dac0 [440];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_2d908;
  void **ppvStack_2d900;
  undefined1 auStack_2d8f8 [40];
  undefined1 auStack_2d8d0 [40];
  undefined1 auStack_2d8a8 [2344];
  undefined1 auStack_2cf80 [480];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_2cda0;
  void **ppvStack_2cd98;
  undefined1 auStack_2cd90 [40];
  undefined1 auStack_2cd68 [40];
  undefined1 auStack_2cd40 [2304];
  undefined1 auStack_2c440 [520];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_2c238;
  void **ppvStack_2c230;
  undefined1 auStack_2c228 [40];
  undefined1 auStack_2c200 [40];
  undefined1 auStack_2c1d8 [2264];
  undefined1 auStack_2b900 [560];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_2b6d0;
  void **ppvStack_2b6c8;
  undefined1 auStack_2b6c0 [40];
  undefined1 auStack_2b698 [40];
  undefined1 auStack_2b670 [2224];
  undefined1 auStack_2adc0 [600];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_2ab68;
  void **ppvStack_2ab60;
  undefined1 auStack_2ab58 [40];
  undefined1 auStack_2ab30 [40];
  undefined1 auStack_2ab08 [2184];
  undefined1 auStack_2a280 [640];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_2a000;
  void **ppvStack_29ff8;
  undefined1 auStack_29ff0 [40];
  undefined1 auStack_29fc8 [40];
  undefined1 auStack_29fa0 [2144];
  undefined1 auStack_29740 [680];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_29498;
  void **ppvStack_29490;
  undefined1 auStack_29488 [40];
  undefined1 auStack_29460 [40];
  undefined1 auStack_29438 [2104];
  undefined1 auStack_28c00 [720];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_28930;
  void **ppvStack_28928;
  undefined1 auStack_28920 [40];
  undefined1 auStack_288f8 [40];
  undefined1 auStack_288d0 [2064];
  undefined1 auStack_280c0 [760];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_27dc8;
  void **ppvStack_27dc0;
  undefined1 auStack_27db8 [40];
  undefined1 auStack_27d90 [40];
  undefined1 auStack_27d68 [2024];
  undefined1 auStack_27580 [800];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_27260;
  void **ppvStack_27258;
  undefined1 auStack_27250 [40];
  undefined1 auStack_27228 [40];
  undefined1 auStack_27200 [1984];
  undefined1 auStack_26a40 [840];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_266f8;
  void **ppvStack_266f0;
  undefined1 auStack_266e8 [40];
  undefined1 auStack_266c0 [40];
  undefined1 auStack_26698 [1944];
  undefined1 auStack_25f00 [880];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_25b90;
  void **ppvStack_25b88;
  undefined1 auStack_25b80 [40];
  undefined1 auStack_25b58 [40];
  undefined1 auStack_25b30 [1904];
  undefined1 auStack_253c0 [920];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_25028;
  void **ppvStack_25020;
  undefined1 auStack_25018 [40];
  undefined1 auStack_24ff0 [40];
  undefined1 auStack_24fc8 [1864];
  undefined1 auStack_24880 [960];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_244c0;
  void **ppvStack_244b8;
  undefined1 auStack_244b0 [40];
  undefined1 auStack_24488 [40];
  undefined1 auStack_24460 [1824];
  undefined1 auStack_23d40 [1000];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_23958;
  void **ppvStack_23950;
  undefined1 auStack_23948 [40];
  undefined1 auStack_23920 [40];
  undefined1 auStack_238f8 [1784];
  undefined1 auStack_23200 [1040];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_22df0;
  void **ppvStack_22de8;
  undefined1 auStack_22de0 [40];
  undefined1 auStack_22db8 [40];
  undefined1 auStack_22d90 [1744];
  undefined1 auStack_226c0 [1080];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_22288;
  void **ppvStack_22280;
  undefined1 auStack_22278 [40];
  undefined1 auStack_22250 [40];
  undefined1 auStack_22228 [1704];
  undefined1 auStack_21b80 [1120];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_21720;
  void **ppvStack_21718;
  undefined1 auStack_21710 [40];
  undefined1 auStack_216e8 [40];
  undefined1 auStack_216c0 [1664];
  undefined1 auStack_21040 [1160];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_20bb8;
  void **ppvStack_20bb0;
  undefined1 auStack_20ba8 [40];
  undefined1 auStack_20b80 [40];
  undefined1 auStack_20b58 [1624];
  undefined1 auStack_20500 [1200];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_20050;
  void **ppvStack_20048;
  undefined1 auStack_20040 [40];
  undefined1 auStack_20018 [40];
  undefined1 auStack_1fff0 [1584];
  undefined1 auStack_1f9c0 [1240];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_1f4e8;
  void **ppvStack_1f4e0;
  undefined1 auStack_1f4d8 [40];
  undefined1 auStack_1f4b0 [40];
  undefined1 auStack_1f488 [1544];
  undefined1 auStack_1ee80 [1280];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_1e980;
  void **ppvStack_1e978;
  undefined1 auStack_1e970 [40];
  undefined1 auStack_1e948 [40];
  undefined1 auStack_1e920 [1504];
  undefined1 auStack_1e340 [1320];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_1de18;
  void **ppvStack_1de10;
  undefined1 auStack_1de08 [40];
  undefined1 auStack_1dde0 [40];
  undefined1 auStack_1ddb8 [1464];
  undefined1 auStack_1d800 [1360];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_1d2b0;
  void **ppvStack_1d2a8;
  undefined1 auStack_1d2a0 [40];
  undefined1 auStack_1d278 [40];
  undefined1 auStack_1d250 [1424];
  undefined1 auStack_1ccc0 [1400];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_1c748;
  void **ppvStack_1c740;
  undefined1 auStack_1c738 [40];
  undefined1 auStack_1c710 [40];
  undefined1 auStack_1c6e8 [1384];
  undefined1 auStack_1c180 [1440];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_1bbe0;
  void **ppvStack_1bbd8;
  undefined1 auStack_1bbd0 [40];
  undefined1 auStack_1bba8 [40];
  undefined1 auStack_1bb80 [1344];
  undefined1 auStack_1b640 [1480];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_1b078;
  void **ppvStack_1b070;
  undefined1 auStack_1b068 [40];
  undefined1 auStack_1b040 [40];
  undefined1 auStack_1b018 [1304];
  undefined1 auStack_1ab00 [1520];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_1a510;
  void **ppvStack_1a508;
  undefined1 auStack_1a500 [40];
  undefined1 auStack_1a4d8 [40];
  undefined1 auStack_1a4b0 [1264];
  undefined1 auStack_19fc0 [1560];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_199a8;
  void **ppvStack_199a0;
  undefined1 auStack_19998 [40];
  undefined1 auStack_19970 [40];
  undefined1 auStack_19948 [1224];
  undefined1 auStack_19480 [1600];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_18e40;
  void **ppvStack_18e38;
  undefined1 auStack_18e30 [40];
  undefined1 auStack_18e08 [40];
  undefined1 auStack_18de0 [1184];
  undefined1 auStack_18940 [1640];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_182d8;
  void **ppvStack_182d0;
  undefined1 auStack_182c8 [40];
  undefined1 auStack_182a0 [40];
  undefined1 auStack_18278 [1144];
  undefined1 auStack_17e00 [1680];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_17770;
  void **ppvStack_17768;
  undefined1 auStack_17760 [40];
  undefined1 auStack_17738 [40];
  undefined1 auStack_17710 [1104];
  undefined1 auStack_172c0 [1720];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_16c08;
  void **ppvStack_16c00;
  undefined1 auStack_16bf8 [40];
  undefined1 auStack_16bd0 [40];
  undefined1 auStack_16ba8 [1064];
  undefined1 auStack_16780 [1760];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_160a0;
  void **ppvStack_16098;
  undefined1 auStack_16090 [40];
  undefined1 auStack_16068 [40];
  undefined1 auStack_16040 [1024];
  undefined1 auStack_15c40 [1800];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_15538;
  void **ppvStack_15530;
  undefined1 auStack_15528 [40];
  undefined1 auStack_15500 [40];
  undefined1 auStack_154d8 [984];
  undefined1 auStack_15100 [1840];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_149d0;
  void **ppvStack_149c8;
  undefined1 auStack_149c0 [40];
  undefined1 auStack_14998 [40];
  undefined1 auStack_14970 [944];
  undefined1 auStack_145c0 [1880];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_13e68;
  void **ppvStack_13e60;
  undefined1 auStack_13e58 [40];
  undefined1 auStack_13e30 [40];
  undefined1 auStack_13e08 [904];
  undefined1 auStack_13a80 [1920];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_13300;
  void **ppvStack_132f8;
  undefined1 auStack_132f0 [40];
  undefined1 auStack_132c8 [40];
  undefined1 auStack_132a0 [864];
  undefined1 auStack_12f40 [1960];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_12798;
  void **ppvStack_12790;
  undefined1 auStack_12788 [40];
  undefined1 auStack_12760 [40];
  undefined1 auStack_12738 [824];
  undefined1 auStack_12400 [2000];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_11c30;
  void **ppvStack_11c28;
  undefined1 auStack_11c20 [40];
  undefined1 auStack_11bf8 [40];
  undefined1 auStack_11bd0 [784];
  undefined1 auStack_118c0 [2040];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_110c8;
  void **ppvStack_110c0;
  undefined1 auStack_110b8 [40];
  undefined1 auStack_11090 [40];
  undefined1 auStack_11068 [744];
  undefined1 auStack_10d80 [2080];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBStack_10560;
  void **ppvStack_10558;
  undefined1 auStack_10550 [40];
  undefined1 auStack_10528 [40];
  undefined1 auStack_10500 [704];
  undefined1 auStack_10240 [2120];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_f9f8;
  void **local_f9f0;
  undefined1 auStack_f9e8 [40];
  undefined1 auStack_f9c0 [40];
  undefined1 auStack_f998 [664];
  undefined1 auStack_f700 [2160];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_ee90;
  void **local_ee88;
  undefined1 auStack_ee80 [40];
  undefined1 auStack_ee58 [40];
  undefined1 auStack_ee30 [624];
  undefined1 auStack_ebc0 [2200];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_e328;
  void **local_e320;
  undefined1 auStack_e318 [40];
  undefined1 auStack_e2f0 [40];
  undefined1 auStack_e2c8 [584];
  undefined1 auStack_e080 [2240];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_d7c0;
  void **local_d7b8;
  undefined1 auStack_d7b0 [40];
  undefined1 auStack_d788 [40];
  undefined1 auStack_d760 [544];
  undefined1 auStack_d540 [2280];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_cc58;
  void **local_cc50;
  undefined1 auStack_cc48 [40];
  undefined1 auStack_cc20 [40];
  undefined1 auStack_cbf8 [504];
  undefined1 auStack_ca00 [2320];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_c0f0;
  void **local_c0e8;
  undefined1 auStack_c0e0 [40];
  undefined1 auStack_c0b8 [40];
  undefined1 auStack_c090 [464];
  undefined1 auStack_bec0 [2360];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_b588;
  void **local_b580;
  undefined1 auStack_b578 [40];
  undefined1 auStack_b550 [40];
  undefined1 auStack_b528 [424];
  undefined1 auStack_b380 [2400];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_aa20;
  void **local_aa18;
  undefined1 auStack_aa10 [40];
  undefined1 auStack_a9e8 [40];
  undefined1 auStack_a9c0 [384];
  undefined1 auStack_a840 [2440];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_9eb8;
  void **local_9eb0;
  undefined1 auStack_9ea8 [40];
  undefined1 auStack_9e80 [40];
  undefined1 auStack_9e58 [344];
  undefined1 auStack_9d00 [2480];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_9350;
  void **local_9348;
  undefined1 auStack_9340 [40];
  undefined1 auStack_9318 [40];
  undefined1 auStack_92f0 [304];
  undefined1 auStack_91c0 [2520];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_87e8;
  void **local_87e0;
  undefined1 auStack_87d8 [40];
  undefined1 auStack_87b0 [40];
  undefined1 auStack_8788 [264];
  undefined1 auStack_8680 [2560];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_7c80;
  void **local_7c78;
  undefined1 auStack_7c70 [40];
  undefined1 auStack_7c48 [40];
  undefined1 auStack_7c20 [224];
  undefined1 auStack_7b40 [2600];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_7118;
  void **local_7110;
  undefined1 auStack_7108 [40];
  undefined1 auStack_70e0 [40];
  undefined1 auStack_70b8 [184];
  undefined1 auStack_7000 [2640];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_65b0;
  void **local_65a8;
  undefined1 auStack_65a0 [40];
  undefined1 auStack_6578 [40];
  undefined1 auStack_6550 [144];
  undefined1 auStack_64c0 [2680];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_5a48;
  void **local_5a40;
  undefined1 auStack_5a38 [40];
  undefined1 auStack_5a10 [40];
  undefined1 auStack_59e8 [104];
  undefined1 auStack_5980 [2720];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_4ee0;
  void **local_4ed8;
  undefined1 auStack_4ed0 [40];
  undefined1 auStack_4ea8 [40];
  undefined1 auStack_4e80 [64];
  undefined1 auStack_4e40 [2760];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_4378;
  void **local_4370;
  undefined1 auStack_4368 [40];
  undefined1 auStack_4340 [40];
  undefined1 auStack_4318 [24];
  undefined1 auStack_4300 [2800];
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *local_3810;
  void **local_3808;
  void *local_3800;
  undefined1 auStack_37f8 [16];
  void *local_37e8;
  void **local_2cf0;
  undefined4 local_2ce4;
  undefined1 auStack_2ce0 [8];
  undefined4 local_2cd8;
  void **local_21d8;
  undefined4 local_21cc;
  undefined1 auStack_21c8 [4];
  undefined4 local_21c4;
  void **local_16c0;
  int local_16b4;
  int local_16b0 [706];
  int local_ba8;
  int local_ba4;
  void *local_ba0;
  void **local_b98;
  void *local_b90;
  void *local_b88;
  void **local_b80;
  byte local_b71;
  undefined8 local_b70;
  undefined8 local_b68;
  int local_b5c;
  int local_b58;
  uint local_b54;
  undefined8 local_b50;
  void *local_b48;
  undefined1 auStack_b40 [2824];
  undefined8 local_38;
  void **local_30;
  int local_28;
  undefined1 local_21;
  
  puVar2 = Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRPlugin_GetBodyState_m04E3A34E470F7F3919DC0164EB07DF058AB4C302::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_F99AADCF7FEDEE35982AD395962CB9FFDB2CC256EA5075300D87D3032F92610F
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
              );
    OVRPlugin_GetBodyState_m04E3A34E470F7F3919DC0164EB07DF058AB4C302::s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_b40,0,0xb08);
  local_b48 = (void *)0x0;
  local_b50 = 0;
  local_b54 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_b58 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  if ((local_b58 == 3) && (local_b5c = local_28, local_28 == 0)) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    local_28 = -1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_b68 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_b70 = *puVar4;
  local_b71 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(local_b68,local_b70,0);
  local_b71 = local_b71 & 1;
  if (local_b71 == 0) {
    local_b80 = local_30;
    local_b90 = *local_30;
    local_b88 = local_b90;
    if (local_b90 == (void *)0x0) {
      local_b54 = 1;
      local_b50 = 0;
    }
    else {
      local_b48 = local_b90;
      NullCheck(local_b90);
      local_b54 = (uint)((int)*(undefined8 *)((long)local_b48 + 0x18) != 0x46);
    }
    if (local_b54 != 0) {
      local_b98 = local_30;
      local_ba0 = (void *)SZArrayNew(*(Il2CppClass **)
                                      Field_<PrivateImplementationDetails>_F99AADCF7FEDEE35982AD395962CB9FFDB2CC256EA5075300D87D3032F92610F
                                     ,0x46);
      *local_b98 = local_ba0;
      Il2CppCodeGenWriteBarrier(local_b98,local_ba0);
    }
    local_ba4 = local_28;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_ba8 = OVRP_1_78_0_ovrp_GetBodyState_m484C32B1406B0071178AF4E2BBE43CC99A09D98D
                          (local_ba4,0xffffffff,auStack_b40,0);
    if (local_ba8 == 0) {
      memcpy(local_16b0,auStack_b40,0xb08);
      local_16b4 = local_16b0[0];
      if (local_16b0[0] == 1) {
        local_16c0 = local_30;
        memcpy(auStack_21c8,auStack_b40,0xb08);
        local_21cc = local_21c4;
        *(undefined4 *)(local_16c0 + 1) = local_21c4;
        local_21d8 = local_30;
        memcpy(auStack_2ce0,auStack_b40,0xb08);
        local_2ce4 = local_2cd8;
        *(undefined4 *)((long)local_21d8 + 0xc) = local_2cd8;
        local_2cf0 = local_30;
        memcpy(auStack_37f8,auStack_b40,0xb08);
        local_3800 = local_37e8;
        local_2cf0[2] = local_37e8;
        local_3808 = local_30;
        local_3810 = *local_30;
        memcpy(auStack_4318,auStack_b40,0xb08);
        memcpy(auStack_4340,auStack_4300,0x28);
        NullCheck(local_3810);
        pBVar3 = local_3810;
        memcpy(auStack_4368,auStack_4340,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0,auStack_4368);
        local_4370 = local_30;
        local_4378 = *local_30;
        memcpy(auStack_4e80,auStack_b40,0xb08);
        memcpy(auStack_4ea8,auStack_4e40,0x28);
        NullCheck(local_4378);
        pBVar3 = local_4378;
        memcpy(auStack_4ed0,auStack_4ea8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,1,auStack_4ed0);
        local_4ed8 = local_30;
        local_4ee0 = *local_30;
        memcpy(auStack_59e8,auStack_b40,0xb08);
        memcpy(auStack_5a10,auStack_5980,0x28);
        NullCheck(local_4ee0);
        pBVar3 = local_4ee0;
        memcpy(auStack_5a38,auStack_5a10,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,2,auStack_5a38);
        local_5a40 = local_30;
        local_5a48 = *local_30;
        memcpy(auStack_6550,auStack_b40,0xb08);
        memcpy(auStack_6578,auStack_64c0,0x28);
        NullCheck(local_5a48);
        pBVar3 = local_5a48;
        memcpy(auStack_65a0,auStack_6578,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,3,auStack_65a0);
        local_65a8 = local_30;
        local_65b0 = *local_30;
        memcpy(auStack_70b8,auStack_b40,0xb08);
        memcpy(auStack_70e0,auStack_7000,0x28);
        NullCheck(local_65b0);
        pBVar3 = local_65b0;
        memcpy(auStack_7108,auStack_70e0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,4,auStack_7108);
        local_7110 = local_30;
        local_7118 = *local_30;
        memcpy(auStack_7c20,auStack_b40,0xb08);
        memcpy(auStack_7c48,auStack_7b40,0x28);
        NullCheck(local_7118);
        pBVar3 = local_7118;
        memcpy(auStack_7c70,auStack_7c48,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,5,auStack_7c70);
        local_7c78 = local_30;
        local_7c80 = *local_30;
        memcpy(auStack_8788,auStack_b40,0xb08);
        memcpy(auStack_87b0,auStack_8680,0x28);
        NullCheck(local_7c80);
        pBVar3 = local_7c80;
        memcpy(auStack_87d8,auStack_87b0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,6,auStack_87d8);
        local_87e0 = local_30;
        local_87e8 = *local_30;
        memcpy(auStack_92f0,auStack_b40,0xb08);
        memcpy(auStack_9318,auStack_91c0,0x28);
        NullCheck(local_87e8);
        pBVar3 = local_87e8;
        memcpy(auStack_9340,auStack_9318,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,7,auStack_9340);
        local_9348 = local_30;
        local_9350 = *local_30;
        memcpy(auStack_9e58,auStack_b40,0xb08);
        memcpy(auStack_9e80,auStack_9d00,0x28);
        NullCheck(local_9350);
        pBVar3 = local_9350;
        memcpy(auStack_9ea8,auStack_9e80,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,8,auStack_9ea8);
        local_9eb0 = local_30;
        local_9eb8 = *local_30;
        memcpy(auStack_a9c0,auStack_b40,0xb08);
        memcpy(auStack_a9e8,auStack_a840,0x28);
        NullCheck(local_9eb8);
        pBVar3 = local_9eb8;
        memcpy(auStack_aa10,auStack_a9e8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,9,auStack_aa10);
        local_aa18 = local_30;
        local_aa20 = *local_30;
        memcpy(auStack_b528,auStack_b40,0xb08);
        memcpy(auStack_b550,auStack_b380,0x28);
        NullCheck(local_aa20);
        pBVar3 = local_aa20;
        memcpy(auStack_b578,auStack_b550,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,10,auStack_b578);
        local_b580 = local_30;
        local_b588 = *local_30;
        memcpy(auStack_c090,auStack_b40,0xb08);
        memcpy(auStack_c0b8,auStack_bec0,0x28);
        NullCheck(local_b588);
        pBVar3 = local_b588;
        memcpy(auStack_c0e0,auStack_c0b8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0xb,auStack_c0e0);
        local_c0e8 = local_30;
        local_c0f0 = *local_30;
        memcpy(auStack_cbf8,auStack_b40,0xb08);
        memcpy(auStack_cc20,auStack_ca00,0x28);
        NullCheck(local_c0f0);
        pBVar3 = local_c0f0;
        memcpy(auStack_cc48,auStack_cc20,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0xc,auStack_cc48);
        local_cc50 = local_30;
        local_cc58 = *local_30;
        memcpy(auStack_d760,auStack_b40,0xb08);
        memcpy(auStack_d788,auStack_d540,0x28);
        NullCheck(local_cc58);
        pBVar3 = local_cc58;
        memcpy(auStack_d7b0,auStack_d788,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0xd,auStack_d7b0);
        local_d7b8 = local_30;
        local_d7c0 = *local_30;
        memcpy(auStack_e2c8,auStack_b40,0xb08);
        memcpy(auStack_e2f0,auStack_e080,0x28);
        NullCheck(local_d7c0);
        pBVar3 = local_d7c0;
        memcpy(auStack_e318,auStack_e2f0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0xe,auStack_e318);
        local_e320 = local_30;
        local_e328 = *local_30;
        memcpy(auStack_ee30,auStack_b40,0xb08);
        memcpy(auStack_ee58,auStack_ebc0,0x28);
        NullCheck(local_e328);
        pBVar3 = local_e328;
        memcpy(auStack_ee80,auStack_ee58,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0xf,auStack_ee80);
        local_ee88 = local_30;
        local_ee90 = *local_30;
        memcpy(auStack_f998,auStack_b40,0xb08);
        memcpy(auStack_f9c0,auStack_f700,0x28);
        NullCheck(local_ee90);
        pBVar3 = local_ee90;
        memcpy(auStack_f9e8,auStack_f9c0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x10,auStack_f9e8);
        local_f9f0 = local_30;
        local_f9f8 = *local_30;
        memcpy(auStack_10500,auStack_b40,0xb08);
        memcpy(auStack_10528,auStack_10240,0x28);
        NullCheck(local_f9f8);
        pBVar3 = local_f9f8;
        memcpy(auStack_10550,auStack_10528,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x11,auStack_10550);
        ppvStack_10558 = local_30;
        pBStack_10560 = *local_30;
        memcpy(auStack_11068,auStack_b40,0xb08);
        memcpy(auStack_11090,auStack_10d80,0x28);
        NullCheck(pBStack_10560);
        pBVar3 = pBStack_10560;
        memcpy(auStack_110b8,auStack_11090,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x12,auStack_110b8);
        ppvStack_110c0 = local_30;
        pBStack_110c8 = *local_30;
        memcpy(auStack_11bd0,auStack_b40,0xb08);
        memcpy(auStack_11bf8,auStack_118c0,0x28);
        NullCheck(pBStack_110c8);
        pBVar3 = pBStack_110c8;
        memcpy(auStack_11c20,auStack_11bf8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x13,auStack_11c20);
        ppvStack_11c28 = local_30;
        pBStack_11c30 = *local_30;
        memcpy(auStack_12738,auStack_b40,0xb08);
        memcpy(auStack_12760,auStack_12400,0x28);
        NullCheck(pBStack_11c30);
        pBVar3 = pBStack_11c30;
        memcpy(auStack_12788,auStack_12760,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x14,auStack_12788);
        ppvStack_12790 = local_30;
        pBStack_12798 = *local_30;
        memcpy(auStack_132a0,auStack_b40,0xb08);
        memcpy(auStack_132c8,auStack_12f40,0x28);
        NullCheck(pBStack_12798);
        pBVar3 = pBStack_12798;
        memcpy(auStack_132f0,auStack_132c8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x15,auStack_132f0);
        ppvStack_132f8 = local_30;
        pBStack_13300 = *local_30;
        memcpy(auStack_13e08,auStack_b40,0xb08);
        memcpy(auStack_13e30,auStack_13a80,0x28);
        NullCheck(pBStack_13300);
        pBVar3 = pBStack_13300;
        memcpy(auStack_13e58,auStack_13e30,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x16,auStack_13e58);
        ppvStack_13e60 = local_30;
        pBStack_13e68 = *local_30;
        memcpy(auStack_14970,auStack_b40,0xb08);
        memcpy(auStack_14998,auStack_145c0,0x28);
        NullCheck(pBStack_13e68);
        pBVar3 = pBStack_13e68;
        memcpy(auStack_149c0,auStack_14998,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x17,auStack_149c0);
        ppvStack_149c8 = local_30;
        pBStack_149d0 = *local_30;
        memcpy(auStack_154d8,auStack_b40,0xb08);
        memcpy(auStack_15500,auStack_15100,0x28);
        NullCheck(pBStack_149d0);
        pBVar3 = pBStack_149d0;
        memcpy(auStack_15528,auStack_15500,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x18,auStack_15528);
        ppvStack_15530 = local_30;
        pBStack_15538 = *local_30;
        memcpy(auStack_16040,auStack_b40,0xb08);
        memcpy(auStack_16068,auStack_15c40,0x28);
        NullCheck(pBStack_15538);
        pBVar3 = pBStack_15538;
        memcpy(auStack_16090,auStack_16068,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x19,auStack_16090);
        ppvStack_16098 = local_30;
        pBStack_160a0 = *local_30;
        memcpy(auStack_16ba8,auStack_b40,0xb08);
        memcpy(auStack_16bd0,auStack_16780,0x28);
        NullCheck(pBStack_160a0);
        pBVar3 = pBStack_160a0;
        memcpy(auStack_16bf8,auStack_16bd0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x1a,auStack_16bf8);
        ppvStack_16c00 = local_30;
        pBStack_16c08 = *local_30;
        memcpy(auStack_17710,auStack_b40,0xb08);
        memcpy(auStack_17738,auStack_172c0,0x28);
        NullCheck(pBStack_16c08);
        pBVar3 = pBStack_16c08;
        memcpy(auStack_17760,auStack_17738,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x1b,auStack_17760);
        ppvStack_17768 = local_30;
        pBStack_17770 = *local_30;
        memcpy(auStack_18278,auStack_b40,0xb08);
        memcpy(auStack_182a0,auStack_17e00,0x28);
        NullCheck(pBStack_17770);
        pBVar3 = pBStack_17770;
        memcpy(auStack_182c8,auStack_182a0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x1c,auStack_182c8);
        ppvStack_182d0 = local_30;
        pBStack_182d8 = *local_30;
        memcpy(auStack_18de0,auStack_b40,0xb08);
        memcpy(auStack_18e08,auStack_18940,0x28);
        NullCheck(pBStack_182d8);
        pBVar3 = pBStack_182d8;
        memcpy(auStack_18e30,auStack_18e08,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x1d,auStack_18e30);
        ppvStack_18e38 = local_30;
        pBStack_18e40 = *local_30;
        memcpy(auStack_19948,auStack_b40,0xb08);
        memcpy(auStack_19970,auStack_19480,0x28);
        NullCheck(pBStack_18e40);
        pBVar3 = pBStack_18e40;
        memcpy(auStack_19998,auStack_19970,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x1e,auStack_19998);
        ppvStack_199a0 = local_30;
        pBStack_199a8 = *local_30;
        memcpy(auStack_1a4b0,auStack_b40,0xb08);
        memcpy(auStack_1a4d8,auStack_19fc0,0x28);
        NullCheck(pBStack_199a8);
        pBVar3 = pBStack_199a8;
        memcpy(auStack_1a500,auStack_1a4d8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x1f,auStack_1a500);
        ppvStack_1a508 = local_30;
        pBStack_1a510 = *local_30;
        memcpy(auStack_1b018,auStack_b40,0xb08);
        memcpy(auStack_1b040,auStack_1ab00,0x28);
        NullCheck(pBStack_1a510);
        pBVar3 = pBStack_1a510;
        memcpy(auStack_1b068,auStack_1b040,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x20,auStack_1b068);
        ppvStack_1b070 = local_30;
        pBStack_1b078 = *local_30;
        memcpy(auStack_1bb80,auStack_b40,0xb08);
        memcpy(auStack_1bba8,auStack_1b640,0x28);
        NullCheck(pBStack_1b078);
        pBVar3 = pBStack_1b078;
        memcpy(auStack_1bbd0,auStack_1bba8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x21,auStack_1bbd0);
        ppvStack_1bbd8 = local_30;
        pBStack_1bbe0 = *local_30;
        memcpy(auStack_1c6e8,auStack_b40,0xb08);
        memcpy(auStack_1c710,auStack_1c180,0x28);
        NullCheck(pBStack_1bbe0);
        pBVar3 = pBStack_1bbe0;
        memcpy(auStack_1c738,auStack_1c710,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x22,auStack_1c738);
        ppvStack_1c740 = local_30;
        pBStack_1c748 = *local_30;
        memcpy(auStack_1d250,auStack_b40,0xb08);
        memcpy(auStack_1d278,auStack_1ccc0,0x28);
        NullCheck(pBStack_1c748);
        pBVar3 = pBStack_1c748;
        memcpy(auStack_1d2a0,auStack_1d278,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x23,auStack_1d2a0);
        ppvStack_1d2a8 = local_30;
        pBStack_1d2b0 = *local_30;
        memcpy(auStack_1ddb8,auStack_b40,0xb08);
        memcpy(auStack_1dde0,auStack_1d800,0x28);
        NullCheck(pBStack_1d2b0);
        pBVar3 = pBStack_1d2b0;
        memcpy(auStack_1de08,auStack_1dde0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x24,auStack_1de08);
        ppvStack_1de10 = local_30;
        pBStack_1de18 = *local_30;
        memcpy(auStack_1e920,auStack_b40,0xb08);
        memcpy(auStack_1e948,auStack_1e340,0x28);
        NullCheck(pBStack_1de18);
        pBVar3 = pBStack_1de18;
        memcpy(auStack_1e970,auStack_1e948,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x25,auStack_1e970);
        ppvStack_1e978 = local_30;
        pBStack_1e980 = *local_30;
        memcpy(auStack_1f488,auStack_b40,0xb08);
        memcpy(auStack_1f4b0,auStack_1ee80,0x28);
        NullCheck(pBStack_1e980);
        pBVar3 = pBStack_1e980;
        memcpy(auStack_1f4d8,auStack_1f4b0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x26,auStack_1f4d8);
        ppvStack_1f4e0 = local_30;
        pBStack_1f4e8 = *local_30;
        memcpy(auStack_1fff0,auStack_b40,0xb08);
        memcpy(auStack_20018,auStack_1f9c0,0x28);
        NullCheck(pBStack_1f4e8);
        pBVar3 = pBStack_1f4e8;
        memcpy(auStack_20040,auStack_20018,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x27,auStack_20040);
        ppvStack_20048 = local_30;
        pBStack_20050 = *local_30;
        memcpy(auStack_20b58,auStack_b40,0xb08);
        memcpy(auStack_20b80,auStack_20500,0x28);
        NullCheck(pBStack_20050);
        pBVar3 = pBStack_20050;
        memcpy(auStack_20ba8,auStack_20b80,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x28,auStack_20ba8);
        ppvStack_20bb0 = local_30;
        pBStack_20bb8 = *local_30;
        memcpy(auStack_216c0,auStack_b40,0xb08);
        memcpy(auStack_216e8,auStack_21040,0x28);
        NullCheck(pBStack_20bb8);
        pBVar3 = pBStack_20bb8;
        memcpy(auStack_21710,auStack_216e8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x29,auStack_21710);
        ppvStack_21718 = local_30;
        pBStack_21720 = *local_30;
        memcpy(auStack_22228,auStack_b40,0xb08);
        memcpy(auStack_22250,auStack_21b80,0x28);
        NullCheck(pBStack_21720);
        pBVar3 = pBStack_21720;
        memcpy(auStack_22278,auStack_22250,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x2a,auStack_22278);
        ppvStack_22280 = local_30;
        pBStack_22288 = *local_30;
        memcpy(auStack_22d90,auStack_b40,0xb08);
        memcpy(auStack_22db8,auStack_226c0,0x28);
        NullCheck(pBStack_22288);
        pBVar3 = pBStack_22288;
        memcpy(auStack_22de0,auStack_22db8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x2b,auStack_22de0);
        ppvStack_22de8 = local_30;
        pBStack_22df0 = *local_30;
        memcpy(auStack_238f8,auStack_b40,0xb08);
        memcpy(auStack_23920,auStack_23200,0x28);
        NullCheck(pBStack_22df0);
        pBVar3 = pBStack_22df0;
        memcpy(auStack_23948,auStack_23920,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x2c,auStack_23948);
        ppvStack_23950 = local_30;
        pBStack_23958 = *local_30;
        memcpy(auStack_24460,auStack_b40,0xb08);
        memcpy(auStack_24488,auStack_23d40,0x28);
        NullCheck(pBStack_23958);
        pBVar3 = pBStack_23958;
        memcpy(auStack_244b0,auStack_24488,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x2d,auStack_244b0);
        ppvStack_244b8 = local_30;
        pBStack_244c0 = *local_30;
        memcpy(auStack_24fc8,auStack_b40,0xb08);
        memcpy(auStack_24ff0,auStack_24880,0x28);
        NullCheck(pBStack_244c0);
        pBVar3 = pBStack_244c0;
        memcpy(auStack_25018,auStack_24ff0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x2e,auStack_25018);
        ppvStack_25020 = local_30;
        pBStack_25028 = *local_30;
        memcpy(auStack_25b30,auStack_b40,0xb08);
        memcpy(auStack_25b58,auStack_253c0,0x28);
        NullCheck(pBStack_25028);
        pBVar3 = pBStack_25028;
        memcpy(auStack_25b80,auStack_25b58,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x2f,auStack_25b80);
        ppvStack_25b88 = local_30;
        pBStack_25b90 = *local_30;
        memcpy(auStack_26698,auStack_b40,0xb08);
        memcpy(auStack_266c0,auStack_25f00,0x28);
        NullCheck(pBStack_25b90);
        pBVar3 = pBStack_25b90;
        memcpy(auStack_266e8,auStack_266c0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x30,auStack_266e8);
        ppvStack_266f0 = local_30;
        pBStack_266f8 = *local_30;
        memcpy(auStack_27200,auStack_b40,0xb08);
        memcpy(auStack_27228,auStack_26a40,0x28);
        NullCheck(pBStack_266f8);
        pBVar3 = pBStack_266f8;
        memcpy(auStack_27250,auStack_27228,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x31,auStack_27250);
        ppvStack_27258 = local_30;
        pBStack_27260 = *local_30;
        memcpy(auStack_27d68,auStack_b40,0xb08);
        memcpy(auStack_27d90,auStack_27580,0x28);
        NullCheck(pBStack_27260);
        pBVar3 = pBStack_27260;
        memcpy(auStack_27db8,auStack_27d90,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x32,auStack_27db8);
        ppvStack_27dc0 = local_30;
        pBStack_27dc8 = *local_30;
        memcpy(auStack_288d0,auStack_b40,0xb08);
        memcpy(auStack_288f8,auStack_280c0,0x28);
        NullCheck(pBStack_27dc8);
        pBVar3 = pBStack_27dc8;
        memcpy(auStack_28920,auStack_288f8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x33,auStack_28920);
        ppvStack_28928 = local_30;
        pBStack_28930 = *local_30;
        memcpy(auStack_29438,auStack_b40,0xb08);
        memcpy(auStack_29460,auStack_28c00,0x28);
        NullCheck(pBStack_28930);
        pBVar3 = pBStack_28930;
        memcpy(auStack_29488,auStack_29460,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x34,auStack_29488);
        ppvStack_29490 = local_30;
        pBStack_29498 = *local_30;
        memcpy(auStack_29fa0,auStack_b40,0xb08);
        memcpy(auStack_29fc8,auStack_29740,0x28);
        NullCheck(pBStack_29498);
        pBVar3 = pBStack_29498;
        memcpy(auStack_29ff0,auStack_29fc8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x35,auStack_29ff0);
        ppvStack_29ff8 = local_30;
        pBStack_2a000 = *local_30;
        memcpy(auStack_2ab08,auStack_b40,0xb08);
        memcpy(auStack_2ab30,auStack_2a280,0x28);
        NullCheck(pBStack_2a000);
        pBVar3 = pBStack_2a000;
        memcpy(auStack_2ab58,auStack_2ab30,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x36,auStack_2ab58);
        ppvStack_2ab60 = local_30;
        pBStack_2ab68 = *local_30;
        memcpy(auStack_2b670,auStack_b40,0xb08);
        memcpy(auStack_2b698,auStack_2adc0,0x28);
        NullCheck(pBStack_2ab68);
        pBVar3 = pBStack_2ab68;
        memcpy(auStack_2b6c0,auStack_2b698,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x37,auStack_2b6c0);
        ppvStack_2b6c8 = local_30;
        pBStack_2b6d0 = *local_30;
        memcpy(auStack_2c1d8,auStack_b40,0xb08);
        memcpy(auStack_2c200,auStack_2b900,0x28);
        NullCheck(pBStack_2b6d0);
        pBVar3 = pBStack_2b6d0;
        memcpy(auStack_2c228,auStack_2c200,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x38,auStack_2c228);
        ppvStack_2c230 = local_30;
        pBStack_2c238 = *local_30;
        memcpy(auStack_2cd40,auStack_b40,0xb08);
        memcpy(auStack_2cd68,auStack_2c440,0x28);
        NullCheck(pBStack_2c238);
        pBVar3 = pBStack_2c238;
        memcpy(auStack_2cd90,auStack_2cd68,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x39,auStack_2cd90);
        ppvStack_2cd98 = local_30;
        pBStack_2cda0 = *local_30;
        memcpy(auStack_2d8a8,auStack_b40,0xb08);
        memcpy(auStack_2d8d0,auStack_2cf80,0x28);
        NullCheck(pBStack_2cda0);
        pBVar3 = pBStack_2cda0;
        memcpy(auStack_2d8f8,auStack_2d8d0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x3a,auStack_2d8f8);
        ppvStack_2d900 = local_30;
        pBStack_2d908 = *local_30;
        memcpy(auStack_2e410,auStack_b40,0xb08);
        memcpy(auStack_2e438,auStack_2dac0,0x28);
        NullCheck(pBStack_2d908);
        pBVar3 = pBStack_2d908;
        memcpy(auStack_2e460,auStack_2e438,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x3b,auStack_2e460);
        ppvStack_2e468 = local_30;
        pBStack_2e470 = *local_30;
        memcpy(auStack_2ef78,auStack_b40,0xb08);
        memcpy(auStack_2efa0,auStack_2e600,0x28);
        NullCheck(pBStack_2e470);
        pBVar3 = pBStack_2e470;
        memcpy(auStack_2efc8,auStack_2efa0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x3c,auStack_2efc8);
        ppvStack_2efd0 = local_30;
        pBStack_2efd8 = *local_30;
        memcpy(auStack_2fae0,auStack_b40,0xb08);
        memcpy(auStack_2fb08,auStack_2f140,0x28);
        NullCheck(pBStack_2efd8);
        pBVar3 = pBStack_2efd8;
        memcpy(auStack_2fb30,auStack_2fb08,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x3d,auStack_2fb30);
        ppvStack_2fb38 = local_30;
        pBStack_2fb40 = *local_30;
        memcpy(auStack_30648,auStack_b40,0xb08);
        memcpy(auStack_30670,auStack_2fc80,0x28);
        NullCheck(pBStack_2fb40);
        pBVar3 = pBStack_2fb40;
        memcpy(auStack_30698,auStack_30670,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x3e,auStack_30698);
        ppvStack_306a0 = local_30;
        pBStack_306a8 = *local_30;
        memcpy(auStack_311b0,auStack_b40,0xb08);
        memcpy(auStack_311d8,auStack_307c0,0x28);
        NullCheck(pBStack_306a8);
        pBVar3 = pBStack_306a8;
        memcpy(auStack_31200,auStack_311d8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x3f,auStack_31200);
        ppvStack_31208 = local_30;
        pBStack_31210 = *local_30;
        memcpy(auStack_31d18,auStack_b40,0xb08);
        memcpy(auStack_31d40,auStack_31300,0x28);
        NullCheck(pBStack_31210);
        pBVar3 = pBStack_31210;
        memcpy(auStack_31d68,auStack_31d40,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x40,auStack_31d68);
        ppvStack_31d70 = local_30;
        pBStack_31d78 = *local_30;
        memcpy(auStack_32880,auStack_b40,0xb08);
        memcpy(auStack_328a8,auStack_31e40,0x28);
        NullCheck(pBStack_31d78);
        pBVar3 = pBStack_31d78;
        memcpy(auStack_328d0,auStack_328a8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x41,auStack_328d0);
        ppvStack_328d8 = local_30;
        pBStack_328e0 = *local_30;
        memcpy(auStack_333e8,auStack_b40,0xb08);
        memcpy(auStack_33410,auStack_32980,0x28);
        NullCheck(pBStack_328e0);
        pBVar3 = pBStack_328e0;
        memcpy(auStack_33438,auStack_33410,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x42,auStack_33438);
        ppvStack_33440 = local_30;
        pBStack_33448 = *local_30;
        memcpy(auStack_33f50,auStack_b40,0xb08);
        memcpy(auStack_33f78,auStack_334c0,0x28);
        NullCheck(pBStack_33448);
        pBVar3 = pBStack_33448;
        memcpy(auStack_33fa0,auStack_33f78,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x43,auStack_33fa0);
        ppvStack_33fa8 = local_30;
        pBStack_33fb0 = *local_30;
        memcpy(auStack_34ab8,auStack_b40,0xb08);
        memcpy(auStack_34ae0,auStack_34000,0x28);
        NullCheck(pBStack_33fb0);
        pBVar3 = pBStack_33fb0;
        memcpy(auStack_34b08,auStack_34ae0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x44,auStack_34b08);
        ppvStack_34b10 = local_30;
        pBStack_34b18 = *local_30;
        memcpy(auStack_35620,auStack_b40,0xb08);
        memcpy(auStack_35648,auStack_34b40,0x28);
        NullCheck(pBStack_34b18);
        pBVar3 = pBStack_34b18;
        memcpy(auStack_35670,auStack_35648,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar3,0x45,auStack_35670);
        local_21 = 1;
      }
      else {
        local_21 = 0;
      }
    }
    else {
      local_21 = 0;
    }
  }
  else {
    local_21 = 0;
  }
  return local_21;
}


