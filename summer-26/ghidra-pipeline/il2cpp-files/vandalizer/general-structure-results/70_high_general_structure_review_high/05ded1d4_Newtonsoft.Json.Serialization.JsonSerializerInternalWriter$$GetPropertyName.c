/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetPropertyName
ENTRY_POINT: 05ded1d4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName
               (undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000018;
  
                    /* catch() { ... } // from try @ 05ded140 with catch @ 05ded1d4 */
                    /* catch() { ... } // from try @ 05ded0b8 with catch @ 05ded1d8
                       catch() { ... } // from try @ 05ded1c0 with catch @ 05ded1d8 */
                    /* try { // try from 05ded1e0 to 05eed1e3 has its CatchHandler @ 05ded268 */
                    /* try { // try from 05ded1e4 to 05eed207 has its CatchHandler @ 05dece38 */
                    /* catch() { ... } // from try @ 05ded0e0 with catch @ 05ded1ec */
  lStack0000000000000000 = param_4;
  uStack0000000000000008 = param_5;
  if ((DAT_07a45492 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075a9128);
    FUN_031f20f4(PTR_DAT_075e8180);
                    /* try { // try from 05ded208 to 05eed20b has its CatchHandler @ 05ded228 */
    FUN_031f20f4(PTR_DAT_0759c258);
    FUN_031f20f4(PTR_DAT_075a1480);
                    /* catch() { ... } // from try @ 05ded208 with catch @ 05ded228 */
    FUN_031f20f4(PTR_DAT_0759c348);
    FUN_031f20f4(PTR_DAT_075ec010);
    FUN_031f20f4(PTR_DAT_075dacd0);
                    /* try { // try from 05ded244 to 05eed253 has its CatchHandler @ 05ded268 */
    FUN_031f20f4(PTR_DAT_0759e138);
                    /* try { // try from 05ded254 to 05eed25f has its CatchHandler @ 05dece38 */
    DAT_07a45492 = 1;
  }
  puVar3 = PTR_DAT_075e8180;
                    /* try { // try from 05ded260 to 05eed267 has its CatchHandler @ 05ded268 */
  if ((int)param_3 == 0) {
    if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar6 = FUN_05ddf7e0(&stack0x00000018);
    if (lVar6 < 864000000000) {
      if ((lStack0000000000000000 == 0) ||
         (plVar5 = *(long **)(lStack0000000000000000 + 0x78), plVar5 == (long *)0x0))
      goto LAB_05ded4e8;
      uVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      if ((uVar4 & 0xffff) < 9) {
        uVar1 = 1 << (ulong)(uVar4 & 0x1f);
                    /* try { // try from 05ded2d4 to 05eed327 has its CatchHandler @ 05ded2d4
                       catch() { ... } // from try @ 05ded2d4 with catch @ 05ded2d4
                       catch() { ... } // from try @ 05ded3cc with catch @ 05ded2d4
                       catch() { ... } // from try @ 05ded420 with catch @ 05ded2d4
                       catch() { ... } // from try @ 05ded4c8 with catch @ 05ded2d4
                       catch() { ... } // from try @ 05ded504 with catch @ 05ded2d4
                       catch() { ... } // from try @ 05ded574 with catch @ 05ded2d4 */
        if ((uVar1 & 0x158) == 0) {
          if ((uVar1 & 0xa0) != 0) goto LAB_05ded314;
          goto LAB_05ded4d0;
        }
      }
      else {
LAB_05ded4d0:
                    /* try { // try from 05ded4e0 to 05eed4ef has its CatchHandler @ 05ded4f8 */
        if (((uVar4 & 0xffff) != 0xd) && ((uVar4 & 0xfffe) != 0x16)) goto LAB_05ded314;
      }
      if (*(int *)(*(long *)PTR_DAT_075a9128 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lStack0000000000000000 = FUN_05d5460c(0);
      bVar2 = true;
    }
    else {
LAB_05ded314:
      bVar2 = false;
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    /* try { // try from 05ded328 to 05eed33f has its CatchHandler @ 05ded428 */
      lVar6 = *(long *)puVar3;
    }
    uVar7 = **(undefined8 **)(lVar6 + 0xb8);
                    /* try { // try from 05ded340 to 05eed347 has its CatchHandler @ 05ded424 */
    if (*(int *)(*(long *)PTR_DAT_0759c348 + 0xe4) == 0) {
                    /* try { // try from 05ded34c to 05eed35f has its CatchHandler @ 05ded430 */
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)PTR_DAT_0759c348);
    }
    uVar8 = FUN_05e192a4(param_5,uVar7,0);
    if ((uVar8 & 1) == 0) {
      if (bVar2) {
                    /* try { // try from 05ded3a0 to 05eed3cb has its CatchHandler @ 05ded42c */
        lVar6 = *(long *)PTR_DAT_075ec010;
      }
      else {
        if (lStack0000000000000000 == 0) {
LAB_05ded4e8:
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar6 = FUN_05d55540(lStack0000000000000000,0);
      }
    }
    else {
      plVar5 = (long *)PTR_DAT_0759e138;
      if (!bVar2) {
        plVar5 = (long *)PTR_DAT_075dacd0;
      }
      lVar6 = *plVar5;
    }
    if (DAT_07a3d293 == '\0') {
                    /* try { // try from 05ded3cc to 05eed417 has its CatchHandler @ 05ded2d4 */
      FUN_031f20f4(PTR_DAT_075a1470);
      DAT_07a3d293 = '\x01';
    }
    if (lVar6 != 0) {
      param_2 = FUN_05c857f0(lVar6,0);
      param_3 = (ulong)*(uint *)(lVar6 + 0x10);
      uVar8 = 0;
      goto LAB_05ded3f8;
    }
  }
  else {
    uVar8 = param_3 >> 0x20;
                    /* catch() { ... } // from try @ 05ded1e0 with catch @ 05ded268
                       catch() { ... } // from try @ 05ded244 with catch @ 05ded268
                       catch() { ... } // from try @ 05ded260 with catch @ 05ded268 */
LAB_05ded3f8:
    if ((int)param_3 != 1) goto LAB_05ded480;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
                    /* try { // try from 05ded418 to 05eed41b has its CatchHandler @ 05ded430 */
                    /* try { // try from 05ded41c to 05eed41f has its CatchHandler @ 05ded420 */
                    /* catch() { ... } // from try @ 05ded41c with catch @ 05ded420
                       try { // try from 05ded420 to 05eed447 has its CatchHandler @ 05ded2d4 */
                    /* catch() { ... } // from try @ 05ded340 with catch @ 05ded424 */
                    /* catch() { ... } // from try @ 05ded328 with catch @ 05ded428 */
                    /* catch() { ... } // from try @ 05ded3a0 with catch @ 05ded42c */
    lVar6 = FUN_05dec5c8(param_2,uVar8 << 0x20 | 1,&stack0x00000018);
                    /* catch() { ... } // from try @ 05ded34c with catch @ 05ded430
                       catch() { ... } // from try @ 05ded418 with catch @ 05ded430 */
    if (DAT_07a3d293 == '\0') {
                    /* try { // try from 05ded468 to 05eed46b has its CatchHandler @ 05ded4f0 */
      FUN_031f20f4(PTR_DAT_075a1470);
                    /* try { // try from 05ded470 to 05eed4c7 has its CatchHandler @ 05ded50c */
      DAT_07a3d293 = '\x01';
    }
    if (lVar6 != 0) {
                    /* try { // try from 05ded448 to 05eed45f has its CatchHandler @ 05ded4f8 */
      param_2 = FUN_05c857f0(lVar6,0);
      param_3 = (ulong)*(uint *)(lVar6 + 0x10);
      uVar8 = 0;
      goto LAB_05ded480;
    }
  }
  param_3 = 0;
  uVar8 = 0;
  param_2 = 0;
LAB_05ded480:
  uVar7 = in_stack_00000018;
  lVar6 = lStack0000000000000000;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_05deaba0(uVar7,param_2,param_3 & 0xffffffff | uVar8 << 0x20,lVar6,param_5,0);
                    /* try { // try from 05ded4c8 to 05eed4df has its CatchHandler @ 05ded2d4 */
  return;
}


