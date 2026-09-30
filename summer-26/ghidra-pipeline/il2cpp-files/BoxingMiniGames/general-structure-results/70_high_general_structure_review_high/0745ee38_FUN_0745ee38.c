/*
FUNCTION_NAME: FUN_0745ee38
ENTRY_POINT: 0745ee38
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


/* WARNING: Removing unreachable block (ram,0x0745f064) */

void FUN_0745ee38(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
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
                    /* try { // try from 0745ee50 to 0755ee53 has its CatchHandler @ 0745ee5c */
                    /* catch() { ... } // from try @ 0745ee50 with catch @ 0745ee5c */
                    /* try { // try from 0745ee60 to 0755ee67 has its CatchHandler @ 0745eeac */
                    /* try { // try from 0745ee68 to 0755ee8b has its CatchHandler @ 0745e994 */
                    /* catch() { ... } // from try @ 0745ec30 with catch @ 0745ee6c
                       catch() { ... } // from try @ 0745ede0 with catch @ 0745ee6c */
                    /* catch() { ... } // from try @ 0745ec18 with catch @ 0745ee70
                       catch() { ... } // from try @ 0745eddc with catch @ 0745ee70 */
  if ((DAT_07ef3cc8 & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_AddRange__);
                    /* try { // try from 0745ee8c to 0755ee8f has its CatchHandler @ 0745ee98 */
    FUN_03642964(Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_Add__);
                    /* catch() { ... } // from try @ 0745ee8c with catch @ 0745ee98 */
                    /* try { // try from 0745ee9c to 0755eea3 has its CatchHandler @ 0745eeac */
    FUN_03642964(
                Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_RemoveAt__
                );
                    /* try { // try from 0745eea4 to 0755eeaf has its CatchHandler @ 0745e994 */
                    /* catch() { ... } // from try @ 0745ee24 with catch @ 0745eeac
                       catch() { ... } // from try @ 0745ee60 with catch @ 0745eeac
                       catch() { ... } // from try @ 0745ee9c with catch @ 0745eeac */
    FUN_03642964(
                Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_get_Count__
                );
                    /* try { // try from 0745eeb0 to 0755ef57 has its CatchHandler @ 0745eeb0
                       catch() { ... } // from try @ 0745eeb0 with catch @ 0745eeb0
                       catch() { ... } // from try @ 0745ef74 with catch @ 0745eeb0
                       catch() { ... } // from try @ 0745f018 with catch @ 0745eeb0
                       catch() { ... } // from try @ 0745f024 with catch @ 0745eeb0
                       catch() { ... } // from try @ 0745f060 with catch @ 0745eeb0 */
    FUN_03642964(
                Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_get_Item__
                );
    FUN_03642964(Method_System_Collections_Generic_List<VisualTreeAsset_SlotDefinition>_get_Count__)
    ;
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(
                Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>__ctor__
                );
    FUN_03642964(Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_GetEnumerator__)
    ;
    DAT_07ef3cc8 = 1;
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
                    /* try { // try from 0745ef58 to 0755ef5b has its CatchHandler @ 0745f028 */
  FUN_046c0870(&local_d8,local_68,
               *(undefined8 *)
                Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>__ctor__
              );
  local_a0 = local_d8;
  puVar2 = Method_System_Collections_Generic_List<VisualTreeAsset_SlotDefinition>_get_Count__;
  puVar1 = 
  Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_get_Count__;
                    /* try { // try from 0745ef70 to 0755ef73 has its CatchHandler @ 0745f024 */
                    /* try { // try from 0745ef74 to 0755f013 has its CatchHandler @ 0745eeb0 */
  local_d8 = 0;
  uStack_98 = plStack_d0;
  uStack_88 = uStack_c0;
  local_90 = local_c8;
  plStack_d0 = &local_a0;
  do {
    do {
      uVar5 = FUN_058d5018(&local_a0,*(undefined8 *)puVar1);
      uVar4 = uStack_88;
      if ((uVar5 & 1) == 0) {
        FUN_058d5014(plStack_d0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_RemoveAt__
                    );
        lVar7 = local_b8;
        if (local_d8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c00();
        }
        FUN_04b15ef4(local_b0,*(undefined8 *)
                               Method_System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_GetEnumerator__
                    );
        if (lVar7 == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03642c00(lVar7);
      }
      local_a8 = (long *)FUN_0413ae3c(uStack_88,param_3,param_4,param_1,param_5 & 1,
                                      *(undefined8 *)puVar2);
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0745f058 with catch @ 0745f068
                        */
        FUN_03642c18();
      }
      FUN_0744b0c0(local_a8,uVar4,0);
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      (**(code **)(*param_2 + 0x198))(param_2,local_a8,param_6,*(undefined8 *)(*param_2 + 0x1a0));
      plVar3 = local_a8;
    } while (local_a8 == (long *)0x0);
    lVar7 = *local_a8;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 0745f014 to 0755f017 has its CatchHandler @ 0745f028 */
    if (uVar5 != 0) {
                    /* try { // try from 0745f018 to 0755f01f has its CatchHandler @ 0745eeb0 */
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 0745f020 to 0755f023 has its CatchHandler @ 0745f024 */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 0745ef70 with catch @ 0745f024
                       catch(type#1 @ 07542bc8) { ... } // from try @ 0745f020 with catch @ 0745f024
                       try { // try from 0745f024 to 0755f043 has its CatchHandler @ 0745eeb0 */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 0745ef58 with catch @ 0745f028
                       catch(type#1 @ 07542bc8) { ... } // from try @ 0745f014 with catch @ 0745f028
                        */
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_079f4598) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0745f054;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(local_a8,*(long *)PTR_DAT_079f4598,0);
                    /* try { // try from 0745f044 to 0755f047 has its CatchHandler @ 0745f054 */
LAB_0745f054:
                    /* catch() { ... } // from try @ 0745f044 with catch @ 0745f054 */
                    /* try { // try from 0745f058 to 0755f05f has its CatchHandler @ 0745f068 */
    (*(code *)*puVar6)(plVar3,puVar6[1]);
  } while( true );
}


