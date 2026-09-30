/*
FUNCTION_NAME: FUN_0745e93c
ENTRY_POINT: 0745e93c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0745eb64) */

void FUN_0745e93c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long local_d8;
  long *plStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined1 *local_b0;
  long *local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_78 [16];
  long local_68;
  
  puVar1 = Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_Add__;
                    /* try { // try from 0745e940 to 0755e943 has its CatchHandler @ 0745e954 */
                    /* try { // try from 0745e944 to 0755e94b has its CatchHandler @ 0745e6f4 */
                    /* try { // try from 0745e94c to 0755e94f has its CatchHandler @ 0745e950 */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 0745e8a4 with catch @ 0745e950
                       catch(type#1 @ 07542bc8) { ... } // from try @ 0745e94c with catch @ 0745e950
                       try { // try from 0745e950 to 0755e96f has its CatchHandler @ 0745e6f4 */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 0745e88c with catch @ 0745e954
                       catch(type#1 @ 07542bc8) { ... } // from try @ 0745e940 with catch @ 0745e954
                        */
                    /* try { // try from 0745e970 to 0755e973 has its CatchHandler @ 0745e97c */
                    /* catch() { ... } // from try @ 0745e970 with catch @ 0745e97c */
  if ((DAT_07ef3cc6 & 1) == 0) {
                    /* try { // try from 0745e980 to 0755e987 has its CatchHandler @ 0745e990 */
                    /* try { // try from 0745e988 to 0755e993 has its CatchHandler @ 0745e6f4 */
    FUN_03642964(Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_AddRange__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0745e980 with catch @ 0745e990
                        */
                    /* try { // try from 0745e994 to 0755eb47 has its CatchHandler @ 0745e994
                       catch() { ... } // from try @ 0745e994 with catch @ 0745e994
                       catch() { ... } // from try @ 0745eb64 with catch @ 0745e994
                       catch() { ... } // from try @ 0745ec34 with catch @ 0745e994
                       catch() { ... } // from try @ 0745ed20 with catch @ 0745e994
                       catch() { ... } // from try @ 0745edf4 with catch @ 0745e994
                       catch() { ... } // from try @ 0745ee2c with catch @ 0745e994
                       catch() { ... } // from try @ 0745ee68 with catch @ 0745e994
                       catch() { ... } // from try @ 0745eea4 with catch @ 0745e994 */
    FUN_03642964(Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_Add__);
    FUN_03642964(
                Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_RemoveAt__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_get_Count__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_get_Item__
                );
    FUN_03642964(Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_Clear__);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(
                Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>__ctor__
                );
    FUN_03642964(Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_GetEnumerator__)
    ;
    DAT_07ef3cc6 = 1;
  }
  puVar2 = Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_AddRange__;
  local_78._8_8_ = 0;
  local_68 = 0;
  local_78._0_8_ = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_a8 = (long *)0x0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  local_78 = FUN_0539e5cc(&local_68,*(undefined8 *)puVar2);
  local_b0 = local_78;
  local_b8 = 0;
  FUN_0745e324(param_2,local_68);
  if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_046c0870(&local_d8,local_68,
               *(undefined8 *)
                Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>__ctor__
              );
  local_a0 = local_d8;
  puVar3 = Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_Clear__;
  puVar2 = 
  Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_get_Count__;
  puVar1 = PTR_DAT_079f4598;
  local_d8 = 0;
  uStack_98 = plStack_d0;
  uStack_88 = uStack_c0;
  local_90 = local_c8;
  plStack_d0 = &local_a0;
  do {
    do {
      uVar6 = FUN_058d5018(&local_a0,*(undefined8 *)puVar2);
      uVar5 = uStack_88;
      if ((uVar6 & 1) == 0) {
        FUN_058d5014(plStack_d0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_RemoveAt__
                    );
        lVar8 = local_b8;
                    /* try { // try from 0745ec18 to 0755ec1b has its CatchHandler @ 0745ee70 */
        if (local_d8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c00();
        }
                    /* try { // try from 0745ec30 to 0755ec33 has its CatchHandler @ 0745ee6c */
                    /* try { // try from 0745ec34 to 0755ed03 has its CatchHandler @ 0745e994 */
        FUN_04b15ef4(local_b0,*(undefined8 *)
                               Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_GetEnumerator__
                    );
        if (lVar8 == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03642c00(lVar8);
      }
      local_a8 = (long *)FUN_0413ae3c(uStack_88,param_3,param_4,param_1,0,*(undefined8 *)puVar3);
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_0744b0c0(local_a8,uVar5,0);
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      (**(code **)(*param_2 + 0x198))(param_2,local_a8,param_5,*(undefined8 *)(*param_2 + 0x1a0));
      plVar4 = local_a8;
    } while (local_a8 == (long *)0x0);
    lVar8 = *local_a8;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                    /* try { // try from 0745eb48 to 0755eb4b has its CatchHandler @ 0745edf8 */
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0745eb54;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(local_a8,*(long *)puVar1,0);
LAB_0745eb54:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  } while( true );
}


