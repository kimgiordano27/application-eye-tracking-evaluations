/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$RefreshLayoutPostChildren
ENTRY_POINT: 06368c4c
PROGRAM: Waifu-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__RefreshLayoutPostChildren(void)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w20;
  ulong uVar6;
  long unaff_x21;
  int iVar7;
  
                    /* try { // try from 06368c4c to 06468c53 has its CatchHandler @ 06368c6c */
                    /* try { // try from 06368c54 to 06468c7b has its CatchHandler @ 06368b94 */
  FUN_0335b6c8(&DAT_083eb0f8,1);
  DataMemoryBarrier(2,3);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06368c4c with catch @ 06368c6c
                        */
  FUN_0335b6c8(&DAT_083ebb90,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06368c7c to 06468c7f has its CatchHandler @ 06368c8c */
                    /* try { // try from 06368c80 to 06468c93 has its CatchHandler @ 06368b94 */
  FUN_0335b6c8(&DAT_083f1fa0,1);
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 06368c7c with catch @ 06368c8c */
                    /* try { // try from 06368c94 to 06468c9b has its CatchHandler @ 06368c9c */
  FUN_0335b6c8(&DAT_083f1f98,1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06368c94 with catch @ 06368c9c
                        */
  DataMemoryBarrier(2,3);
                    /* try { // try from 06368ca0 to 06468e03 has its CatchHandler @ 06368ca0
                       catch() { ... } // from try @ 06368ca0 with catch @ 06368ca0
                       catch() { ... } // from try @ 06368e70 with catch @ 06368ca0
                       catch() { ... } // from try @ 06368e8c with catch @ 06368ca0 */
  FUN_0335b6c8(&DAT_083c49c0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x92a) = 1;
  if (*(long *)(unaff_x19 + 0x110) == 0) {
LAB_06368d8c:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x110) + 0x10) + (long)unaff_w20 * 0x88;
  iVar7 = *(int *)(lVar4 + 100);
  uVar1 = *(uint *)(lVar4 + 0x68);
  uVar6 = (ulong)uVar1;
  lVar4 = FUN_03398a84(DAT_083c49c0);
  FUN_04a01f94(lVar4,uVar6,DAT_083f1f98);
  if (0 < (int)uVar1) {
    do {
      lVar2 = DAT_083f1fa0;
      if ((*(long *)(unaff_x19 + 0x120) == 0) ||
         (bVar3 = *(short *)(*(long *)(*(long *)(unaff_x19 + 0x120) + 0x10) + (long)iVar7 * 4 + 2)
                  != 0, lVar4 == 0)) goto LAB_06368d8c;
      lVar5 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06368d8c;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(uint *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = (uint)bVar3;
      }
      else {
        System_Collections_Generic_List<RuleMatcher>__BinarySearch
                  (lVar4,bVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      uVar6 = uVar6 - 1;
      iVar7 = iVar7 + 1;
    } while (uVar6 != 0);
  }
  return lVar4;
}


