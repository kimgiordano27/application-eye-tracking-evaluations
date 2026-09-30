/*
FUNCTION_NAME: FUN_06e3816c
ENTRY_POINT: 06e3816c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06e3816c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_072794f0;
  if ((DAT_076ead45 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<List<OVRSpatialAnchor>>__);
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<List<string>>__);
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<List<OVRAnchor_DeferredValue>>__);
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__);
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<Guid>__);
                    /* try { // try from 06e381dc to 06f381e3 has its CatchHandler @ 06e38234 */
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<LogEntry>__);
    thunk_FUN_032e1da0(PTR_DAT_0728b038);
    thunk_FUN_032e1da0(PTR_DAT_0728b040);
                    /* try { // try from 06e381fc to 06f38203 has its CatchHandler @ 06e38230 */
                    /* try { // try from 06e38204 to 06f38223 has its CatchHandler @ 06e380ac */
    thunk_FUN_032e1da0(PTR_DAT_0728b068);
    thunk_FUN_032e1da0(PTR_DAT_0728b070);
    DAT_076ead45 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 06e38224 to 06f38227 has its CatchHandler @ 06e3822c */
                    /* try { // try from 06e38228 to 06f3824b has its CatchHandler @ 06e380ac */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06e38224 with catch @ 06e3822c
                        */
    thunk_FUN_032cd7c0();
  }
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06e381fc with catch @ 06e38230
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06e381dc with catch @ 06e38234
                        */
  uVar3 = FUN_06becf70(uVar5,0);
  puVar1 = PTR_DAT_0728b038;
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 06e3824c to 06f3824f has its CatchHandler @ 06e38270 */
                    /* try { // try from 06e38250 to 06f38277 has its CatchHandler @ 06e380ac */
    if (((*(long *)(param_1 + 0x28) != 0) &&
        (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728b038);
                    /* catch() { ... } // from try @ 06e3824c with catch @ 06e38270 */
                    /* try { // try from 06e38278 to 06f3827f has its CatchHandler @ 06e38294 */
                    /* try { // try from 06e38280 to 06f3828b has its CatchHandler @ 06e380ac */
      FUN_04af414c(uVar5,param_1,
                   *(undefined8 *)Method_OVRObjectPool_Return<List<OVRSpatialAnchor>>__,0);
      puVar2 = PTR_DAT_0728b068;
      if (lVar4 != 0) {
                    /* try { // try from 06e3828c to 06f38293 has its CatchHandler @ 06e38294 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06e38278 with catch @ 06e38294
                       catch(type#2 @ 00000000) { ... } // from try @ 06e3828c with catch @ 06e38294
                        */
        FUN_04af7778(lVar4,uVar5,*(undefined8 *)PTR_DAT_0728b068);
        if (((*(long *)(param_1 + 0x28) != 0) &&
            (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar4 != 0)) &&
           (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
          lVar4 = *(long *)(lVar4 + 0x18);
          uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
          FUN_04af414c(uVar5,param_1,*(undefined8 *)Method_OVRObjectPool_Return<List<string>>__,0);
          if (lVar4 != 0) {
            FUN_04af7778(lVar4,uVar5,*(undefined8 *)puVar2);
            if (((*(long *)(param_1 + 0x28) != 0) &&
                (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar4 != 0)) &&
               (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
              lVar4 = *(long *)(lVar4 + 0x20);
              uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728b040);
              FUN_04af4e74(uVar5,param_1,
                           *(undefined8 *)
                            Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__
                           ,0);
              if (lVar4 != 0) {
                FUN_04afbf3c(lVar4,uVar5,*(undefined8 *)PTR_DAT_0728b070);
                if (((*(long *)(param_1 + 0x28) != 0) &&
                    (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar4 != 0)) &&
                   (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
                  lVar4 = *(long *)(lVar4 + 0x28);
                  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                  FUN_04af414c(uVar5,param_1,*(undefined8 *)Method_OVRObjectPool_Return<Guid>__,0);
                  if (lVar4 != 0) {
                    FUN_04af7778(lVar4,uVar5,*(undefined8 *)puVar2);
                    if (((*(long *)(param_1 + 0x28) != 0) &&
                        (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar4 != 0)) &&
                       (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
                      lVar4 = *(long *)(lVar4 + 0x30);
                      uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                      FUN_04af414c(uVar5,param_1,
                                   *(undefined8 *)Method_OVRObjectPool_Return<LogEntry>__,0);
                      if (lVar4 != 0) {
                        FUN_04af7778(lVar4,uVar5,*(undefined8 *)puVar2);
                        if (((*(long *)(param_1 + 0x28) != 0) &&
                            (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar4 != 0)) &&
                           (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
                          lVar4 = *(long *)(lVar4 + 0x38);
                          uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                          FUN_04af414c(uVar5,param_1,
                                       *(undefined8 *)
                                        Method_OVRObjectPool_Return<List<OVRAnchor_DeferredValue>>__
                                       ,0);
                          if (lVar4 != 0) {
                            FUN_04af7778(lVar4,uVar5,*(undefined8 *)puVar2);
                            return;
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
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  return;
}


