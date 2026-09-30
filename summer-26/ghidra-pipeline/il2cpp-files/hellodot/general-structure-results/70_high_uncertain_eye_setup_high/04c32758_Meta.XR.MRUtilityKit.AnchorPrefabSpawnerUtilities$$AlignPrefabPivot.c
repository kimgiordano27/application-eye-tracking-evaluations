/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$AlignPrefabPivot
ENTRY_POINT: 04c32758
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__AlignPrefabPivot(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *unaff_x19;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  puVar1 = PTR_DAT_065e60f8;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  lVar6 = *(long *)(unaff_x19 + 8);
                    /* try { // try from 04c3276c to 04d32793 has its CatchHandler @ 04c3290c */
  if (*unaff_x19 == 0) {
    _uStack0000000000000000 = *(undefined1 (*) [16])(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
    goto LAB_04c32824;
  }
  auVar8 = ZEXT816(0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  while( true ) {
    _uStack0000000000000000 = auVar8;
    lVar3 = FUN_04c2d3f0(lVar6,*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(unaff_x19 + 10));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar8 = FUN_04046650(lVar3,0,*(undefined8 *)PTR_DAT_065e1be8);
    _uStack0000000000000000 = auVar8;
    uVar4 = FUN_044a8b38();
                    /* try { // try from 04c32820 to 04d32827 has its CatchHandler @ 04c32908 */
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xc) = _uStack0000000000000000;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
                    /* try { // try from 04c328f8 to 04d328fb has its CatchHandler @ 04c32904 */
      FUN_030ab758(unaff_x19 + 2);
                    /* try { // try from 04c328fc to 04d32927 has its CatchHandler @ 04c32650 */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c328f8 with catch @ 04c32904
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c32820 with catch @ 04c32908
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c3276c with catch @ 04c3290c
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c327b0 with catch @ 04c32910
                        */
      return;
    }
LAB_04c32824:
                    /* try { // try from 04c32828 to 04d328f7 has its CatchHandler @ 04c32650 */
    uVar4 = FUN_044a8b84();
    if ((uVar4 & 1) != 0) {
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)(lVar6 + 0x48);
        lVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e6310);
        FUN_04f7383c(lVar3,0);
        *(undefined4 *)(lVar3 + 0x10) = 3;
        *(undefined8 *)(lVar3 + 0x18) = uVar7;
        lVar5 = *(long *)(lVar6 + 0x60);
        *(long *)(lVar6 + 0x70) = lVar3;
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),lVar3,*(undefined8 *)(lVar5 + 0x28));
        }
        uVar7 = *(undefined8 *)(lVar6 + 0x70);
        *unaff_x19 = -2;
        puVar2 = PTR_DAT_065e62f0;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04266690(unaff_x19 + 2,uVar7,*(undefined8 *)puVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (lVar6 == 0) break;
    uVar7 = *(undefined8 *)(lVar6 + 0x48);
    lVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e6310);
    FUN_04f7383c(lVar3,0);
                    /* try { // try from 04c327b0 to 04d32813 has its CatchHandler @ 04c32910 */
    *(undefined4 *)(lVar3 + 0x10) = 2;
    *(undefined8 *)(lVar3 + 0x18) = uVar7;
    lVar5 = *(long *)(lVar6 + 0x60);
    *(long *)(lVar6 + 0x70) = lVar3;
    auVar8 = _uStack0000000000000000;
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),lVar3,*(undefined8 *)(lVar5 + 0x28))
      ;
      auVar8 = _uStack0000000000000000;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


