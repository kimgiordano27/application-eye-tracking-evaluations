/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$.ctor
ENTRY_POINT: 03f9d9f8
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f9dac8) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>___ctor(void)

{
  char cVar1;
  ulong uVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x28;
  long unaff_x29;
  
  do {
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03f9d9d4 with catch @ 03f9d9fc
                        */
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03f9d970 with catch @ 03f9da00
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03f9d8fc with catch @ 03f9da04
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03f9d9d8 with catch @ 03f9da08
                        */
    puVar8 = unaff_x26;
    if (-1 < *(int *)(*(long *)(lVar10 + 0x80) + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x26;
    }
    puVar7 = *(undefined8 **)(lVar10 + 0xe0);
                    /* try { // try from 03f9da20 to 0409da37 has its CatchHandler @ 03f9da6c */
    puVar11 = *(undefined8 **)(unaff_x29 + -0x28);
    uVar6 = *puVar7;
    if (-1 < *(int *)(*(long *)(lVar10 + 0x90) + 0x28)) {
      puVar11 = (undefined8 *)*puVar11;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar11;
                    /* try { // try from 03f9da38 to 0409da5b has its CatchHandler @ 03f9d5e8 */
    (*(code *)puVar7[2])(uVar6);
    while( true ) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8))();
      if ((uVar2 & 1) == 0) {
        lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar10 = *(long *)(lVar9 + 0xc0);
                    /* try { // try from 03f9da5c to 0409da6b has its CatchHandler @ 03f9da6c */
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_02ce0978();
                    /* catch() { ... } // from try @ 03f9da20 with catch @ 03f9da6c
                       catch() { ... } // from try @ 03f9da5c with catch @ 03f9da6c */
          lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
                    /* try { // try from 03f9da70 to 0409da73 has its CatchHandler @ 03f9da7c */
                    /* try { // try from 03f9da74 to 0409da7f has its CatchHandler @ 03f9d5e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03f9da70 with catch @ 03f9da7c
                        */
        FUN_02ce855c(lVar10,*(undefined8 *)(lVar9 + 0xf0),*(undefined8 *)(unaff_x29 + -0x38));
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar8 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200);
      uVar6 = *puVar8;
      *(void **)(unaff_x29 + -0x20) = unaff_x28;
      (*(code *)puVar8[2])(uVar6);
      memcpy(unaff_x25,unaff_x28,unaff_x23);
      memcpy(unaff_x20,unaff_x25,unaff_x23);
      pvVar3 = (void *)thunk_FUN_02cd0998();
      memcpy(unaff_x26,pvVar3,unaff_x24);
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar8 = unaff_x26;
      if (-1 < *(int *)(*(long *)(lVar10 + 0x80) + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x26;
      }
      puVar7 = *(undefined8 **)(lVar10 + 0xd8);
      uVar6 = *puVar7;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
      (*(code *)puVar7[2])(uVar6);
      cVar1 = *(char *)(unaff_x29 + -0xc);
      memcpy(unaff_x28,unaff_x25,unaff_x23);
      if (cVar1 == '\0') break;
      pvVar3 = (void *)thunk_FUN_02cd0998();
      memcpy(unaff_x26,pvVar3,unaff_x24);
      uVar6 = thunk_FUN_02cea4e8(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
      plVar4 = (long *)AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      uVar6 = FUN_04db9af8(*(undefined8 *)PTR_DAT_065dff20,uVar6,uVar5,
                           *(undefined8 *)PTR_DAT_065dff28,0);
      if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05eb364c(uVar6,0);
    }
    pvVar3 = (void *)thunk_FUN_02cd0998();
    memcpy(unaff_x26,pvVar3,unaff_x24);
    memcpy(unaff_x20,unaff_x25,unaff_x23);
    pvVar3 = (void *)thunk_FUN_02cd0998();
    memcpy(*(void **)(unaff_x29 + -0x28),pvVar3,*(size_t *)(unaff_x29 + -0x30));
  } while( true );
}


