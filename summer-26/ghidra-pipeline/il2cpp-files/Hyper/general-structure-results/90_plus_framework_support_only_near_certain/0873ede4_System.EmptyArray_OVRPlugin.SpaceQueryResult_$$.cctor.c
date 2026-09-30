/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 0873ede4
PROGRAM: Hyper-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_SpaceQueryResult>___cctor(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  
  FUN_04aa98a8();
  puVar3 = PTR_DAT_0ac09758;
                    /* try { // try from 0873edec to 0883edff has its CatchHandler @ 0873ec44 */
                    /* try { // try from 0873ee00 to 0883ee0f has its CatchHandler @ 0873ee20 */
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
  if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
                    /* catch() { ... } // from try @ 0873edcc with catch @ 0873ee14 */
                    /* catch() { ... } // from try @ 0873eda8 with catch @ 0873ee18 */
                    /* catch() { ... } // from try @ 0873edd0 with catch @ 0873ee1c */
                    /* catch() { ... } // from try @ 0873ed8c with catch @ 0873ee20
                       catch() { ... } // from try @ 0873ee00 with catch @ 0873ee20 */
  FUN_08d895f0(uVar5,0);
                    /* try { // try from 0873ee28 to 0883ee2b has its CatchHandler @ 0873eedc */
                    /* try { // try from 0873ee2c to 0883ee3f has its CatchHandler @ 0873ec44 */
  FUN_08c61a20();
                    /* try { // try from 0873ee40 to 0883ee57 has its CatchHandler @ 0873eecc */
                    /* try { // try from 0873ee58 to 0883eebb has its CatchHandler @ 0873ec44 */
  FUN_08c63104();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar1 = *(int *)(unaff_x21 + 0x20);
    iVar2 = *(int *)(unaff_x21 + 0x28);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34();
    }
    FUN_04947fd0(lVar4,iVar1 - iVar2);
    FUN_0873eb78();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08d895f0(uVar5,0);
    FUN_08c61a20();
    return;
  }
  return;
}


