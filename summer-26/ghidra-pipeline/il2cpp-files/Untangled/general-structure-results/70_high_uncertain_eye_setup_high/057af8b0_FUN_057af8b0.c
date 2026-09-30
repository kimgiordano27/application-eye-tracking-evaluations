/*
FUNCTION_NAME: FUN_057af8b0
ENTRY_POINT: 057af8b0
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_057af8b0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  puVar3 = PTR_DAT_06d5b680;
  puVar2 = PTR_DAT_06d5a000;
                    /* try { // try from 057af8c8 to 058af8d7 has its CatchHandler @ 057afa74 */
                    /* try { // try from 057af8e8 to 058af8ef has its CatchHandler @ 057afa68 */
  if ((DAT_071c5ba1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d5a000);
                    /* try { // try from 057af900 to 058af90b has its CatchHandler @ 057afa64 */
    FUN_02f07e70(PTR_DAT_06d5a5f8);
    FUN_02f07e70(PTR_DAT_06d5b680);
    FUN_02f07e70(PTR_DAT_06d5b688);
                    /* try { // try from 057af920 to 058af927 has its CatchHandler @ 057afa44 */
    FUN_02f07e70(PTR_DAT_06d5b690);
    FUN_02f07e70(PTR_DAT_06d5b698);
                    /* try { // try from 057af934 to 058af953 has its CatchHandler @ 057afa4c */
    DAT_071c5ba1 = 1;
  }
  puVar5 = PTR_DAT_06d5b698;
  puVar4 = PTR_DAT_06d5b690;
  FUN_04abb060(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
                    /* try { // try from 057af96c to 058af973 has its CatchHandler @ 057afa54 */
  uVar7 = OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_HookGetInstanceProcAddr(param_2,0);
  uVar6 = FUN_0565dbf4(uVar7,0);
                    /* try { // try from 057af980 to 058af99f has its CatchHandler @ 057afa58 */
  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
  FUN_03fd04d8(lVar8,(ulong)uVar6,*(undefined8 *)puVar4);
  plVar13 = (long *)(param_1 + 0x10);
  *plVar13 = lVar8;
                    /* try { // try from 057af9a4 to 058af9a7 has its CatchHandler @ 057afac4 */
                    /* try { // try from 057af9a8 to 058af9ab has its CatchHandler @ 057afac0 */
                    /* try { // try from 057af9ac to 058af9af has its CatchHandler @ 057afaac */
  thunk_FUN_02f411dc(plVar13,lVar8);
  puVar4 = PTR_DAT_06d5b688;
  puVar3 = PTR_DAT_06d5a5f8;
                    /* try { // try from 057af9b0 to 058af9c7 has its CatchHandler @ 057afaa8 */
  if (0 < (int)uVar6) {
                    /* try { // try from 057af9c8 to 058af9cf has its CatchHandler @ 057afa98 */
    uVar14 = 0;
    do {
      lVar8 = *plVar13;
                    /* try { // try from 057af9d8 to 058af9eb has its CatchHandler @ 057afa80 */
      uVar7 = FUN_0565dbf8(uVar14,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 057af9f0 to 058afa0f has its CatchHandler @ 057afa60 */
        thunk_FUN_02f12b58(*(long *)puVar2);
      }
      uVar7 = FUN_05782f6c(param_2,uVar7,0);
                    /* try { // try from 057afa10 to 058afa37 has its CatchHandler @ 057afa5c */
      uVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
      FUN_057af314(uVar9,uVar7);
      if (lVar8 == 0) {
LAB_057afb00:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)puVar4;
                    /* try { // try from 057afa38 to 058afa3b has its CatchHandler @ 057afa9c */
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    /* try { // try from 057afa3c to 058afa3f has its CatchHandler @ 057afa7c */
      if (lVar11 == 0) goto LAB_057afb00;
                    /* try { // try from 057afa40 to 058afa43 has its CatchHandler @ 057afa74 */
      uVar1 = *(uint *)(lVar8 + 0x18);
                    /* catch() { ... } // from try @ 057af920 with catch @ 057afa44
                       try { // try from 057afa44 to 058afadb has its CatchHandler @ 057af4bc */
                    /* catch() { ... } // from try @ 057af750 with catch @ 057afa48 */
                    /* catch() { ... } // from try @ 057af934 with catch @ 057afa4c */
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                    /* catch() { ... } // from try @ 057af764 with catch @ 057afa50 */
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_02f411dc(puVar10,uVar9);
      }
      else {
        FUN_03fd0c9c(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar14 = uVar14 + 1;
    } while (uVar6 != uVar14);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar7 = OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceCreate(param_2,0);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  uVar7 = FUN_057830c4(param_2,0);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  thunk_FUN_02f411dc();
  uVar7 = FUN_05782ff0(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x18),uVar7);
  return;
}


