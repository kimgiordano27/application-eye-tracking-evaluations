/*
FUNCTION_NAME: FUN_06e37ddc
ENTRY_POINT: 06e37ddc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06e37ddc(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  
                    /* try { // try from 06e37de8 to 06f37e0b has its CatchHandler @ 06e37fe4 */
  if ((DAT_076ead44 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Net_NetEventSource_WriteEvent__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
                    /* try { // try from 06e37e14 to 06f37e1f has its CatchHandler @ 06e37fc8 */
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<List<OVRSpatialAnchor>>__);
                    /* try { // try from 06e37e20 to 06f37f1f has its CatchHandler @ 06e379f8 */
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<List<string>>__);
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<List<OVRAnchor_DeferredValue>>__);
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__);
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<Guid>__);
    thunk_FUN_032e1da0(Method_OVRObjectPool_Return<LogEntry>__);
    thunk_FUN_032e1da0(PTR_DAT_0728b038);
    thunk_FUN_032e1da0(PTR_DAT_0728b040);
    thunk_FUN_032e1da0(PTR_DAT_0728b050);
    thunk_FUN_032e1da0(PTR_DAT_0728b058);
    DAT_076ead44 = 1;
  }
  puVar2 = PTR_DAT_072794f0;
  plVar8 = *(long **)(param_1 + 0x30);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    cVar1 = *(char *)(param_1 + 0x20);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)Method_System_Net_NetEventSource_WriteEvent__) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_06e37efc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_032937ac(plVar8,*(long *)Method_System_Net_NetEventSource_WriteEvent__,3);
LAB_06e37efc:
    (*(code *)*puVar4)(plVar8,cVar1 != '\0',puVar4[1]);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 06e37f20 to 06f37f23 has its CatchHandler @ 06e37fec */
    thunk_FUN_032cd7c0();
  }
                    /* try { // try from 06e37f24 to 06f37f27 has its CatchHandler @ 06e37ff4 */
                    /* try { // try from 06e37f28 to 06f37f2b has its CatchHandler @ 06e37fe0 */
                    /* try { // try from 06e37f2c to 06f37f2f has its CatchHandler @ 06e37fdc */
  uVar6 = FUN_06becf70(uVar9,0);
  puVar2 = PTR_DAT_0728b038;
                    /* try { // try from 06e37f30 to 06f37f33 has its CatchHandler @ 06e37fd4 */
  if ((uVar6 & 1) != 0) {
                    /* try { // try from 06e37f34 to 06f37f37 has its CatchHandler @ 06e37fcc */
                    /* try { // try from 06e37f38 to 06f37f3b has its CatchHandler @ 06e37fc4 */
                    /* try { // try from 06e37f3c to 06f37f3f has its CatchHandler @ 06e37ff4 */
                    /* try { // try from 06e37f40 to 06f37f43 has its CatchHandler @ 06e37f4c */
                    /* try { // try from 06e37f44 to 06f37f6f has its CatchHandler @ 06e379f8 */
    if (((*(long *)(param_1 + 0x28) != 0) &&
        (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar5 != 0)) &&
       (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
                    /* catch() { ... } // from try @ 06e37f40 with catch @ 06e37f4c */
      lVar5 = *(long *)(lVar5 + 0x10);
                    /* catch() { ... } // from try @ 06e37bb0 with catch @ 06e37f54 */
                    /* catch() { ... } // from try @ 06e37b98 with catch @ 06e37f58 */
      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728b038);
                    /* try { // try from 06e37f70 to 06f37f73 has its CatchHandler @ 06e37f9c */
                    /* try { // try from 06e37f74 to 06f37fab has its CatchHandler @ 06e379f8 */
      FUN_04af414c(uVar9,param_1,
                   *(undefined8 *)Method_OVRObjectPool_Return<List<OVRSpatialAnchor>>__,0);
      puVar3 = PTR_DAT_0728b050;
      if (lVar5 != 0) {
        FUN_04af773c(lVar5,uVar9,*(undefined8 *)PTR_DAT_0728b050);
                    /* catch() { ... } // from try @ 06e37f70 with catch @ 06e37f9c */
                    /* try { // try from 06e37fac to 06f37fbf has its CatchHandler @ 06e380a8 */
        if (((*(long *)(param_1 + 0x28) != 0) &&
            (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
          lVar5 = *(long *)(lVar5 + 0x18);
          uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 06e37d20 with catch @ 06e37fc0
                       try { // try from 06e37fc0 to 06f3800f has its CatchHandler @ 06e379f8 */
                    /* catch() { ... } // from try @ 06e37f38 with catch @ 06e37fc4 */
                    /* catch() { ... } // from try @ 06e37e14 with catch @ 06e37fc8 */
                    /* catch() { ... } // from try @ 06e37f34 with catch @ 06e37fcc */
                    /* catch() { ... } // from try @ 06e37d30 with catch @ 06e37fd0 */
                    /* catch() { ... } // from try @ 06e37f30 with catch @ 06e37fd4 */
          FUN_04af414c(uVar9,param_1,*(undefined8 *)Method_OVRObjectPool_Return<List<string>>__,0);
                    /* catch() { ... } // from try @ 06e37da0 with catch @ 06e37fd8 */
          if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 06e37f2c with catch @ 06e37fdc */
                    /* catch() { ... } // from try @ 06e37f28 with catch @ 06e37fe0 */
                    /* catch() { ... } // from try @ 06e37de8 with catch @ 06e37fe4 */
                    /* catch() { ... } // from try @ 06e37d88 with catch @ 06e37fe8 */
            FUN_04af773c(lVar5,uVar9,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 06e37f20 with catch @ 06e37fec */
                    /* catch() { ... } // from try @ 06e37d74 with catch @ 06e37ff0 */
                    /* catch() { ... } // from try @ 06e37f24 with catch @ 06e37ff4
                       catch() { ... } // from try @ 06e37f3c with catch @ 06e37ff4 */
                    /* catch() { ... } // from try @ 06e37d4c with catch @ 06e37ff8 */
                    /* catch() { ... } // from try @ 06e37cdc with catch @ 06e37ffc */
                    /* catch() { ... } // from try @ 06e37c80 with catch @ 06e38000 */
            if (((*(long *)(param_1 + 0x28) != 0) &&
                (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar5 != 0)) &&
               (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
              lVar5 = *(long *)(lVar5 + 0x20);
                    /* try { // try from 06e38010 to 06f38013 has its CatchHandler @ 06e3802c */
              uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728b040);
                    /* catch() { ... } // from try @ 06e38010 with catch @ 06e3802c */
              FUN_04af4e74(uVar9,param_1,
                           *(undefined8 *)
                            Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__
                           ,0);
              if (lVar5 != 0) {
                FUN_04afbf00(lVar5,uVar9,*(undefined8 *)PTR_DAT_0728b058);
                if (((*(long *)(param_1 + 0x28) != 0) &&
                    (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar5 != 0)) &&
                   (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
                    /* try { // try from 06e3806c to 06f38093 has its CatchHandler @ 06e380a8 */
                  lVar5 = *(long *)(lVar5 + 0x28);
                  uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                  FUN_04af414c(uVar9,param_1,*(undefined8 *)Method_OVRObjectPool_Return<Guid>__,0);
                  if (lVar5 != 0) {
                    /* try { // try from 06e38094 to 06f3809f has its CatchHandler @ 06e379f8 */
                    /* try { // try from 06e380a0 to 06f380a7 has its CatchHandler @ 06e380a8 */
                    FUN_04af773c(lVar5,uVar9,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 06e37fac with catch @ 06e380a8
                       catch() { ... } // from try @ 06e3806c with catch @ 06e380a8
                       catch() { ... } // from try @ 06e380a0 with catch @ 06e380a8 */
                    /* try { // try from 06e380ac to 06f381db has its CatchHandler @ 06e380ac
                       catch() { ... } // from try @ 06e380ac with catch @ 06e380ac
                       catch() { ... } // from try @ 06e38204 with catch @ 06e380ac
                       catch() { ... } // from try @ 06e38228 with catch @ 06e380ac
                       catch() { ... } // from try @ 06e38250 with catch @ 06e380ac
                       catch() { ... } // from try @ 06e38280 with catch @ 06e380ac */
                    if (((*(long *)(param_1 + 0x28) != 0) &&
                        (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar5 != 0)) &&
                       (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
                      lVar5 = *(long *)(lVar5 + 0x30);
                      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                      FUN_04af414c(uVar9,param_1,
                                   *(undefined8 *)Method_OVRObjectPool_Return<LogEntry>__,0);
                      if (lVar5 != 0) {
                        FUN_04af773c(lVar5,uVar9,*(undefined8 *)puVar3);
                        if (((*(long *)(param_1 + 0x28) != 0) &&
                            (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar5 != 0)) &&
                           (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
                          lVar5 = *(long *)(lVar5 + 0x38);
                          uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                          FUN_04af414c(uVar9,param_1,
                                       *(undefined8 *)
                                        Method_OVRObjectPool_Return<List<OVRAnchor_DeferredValue>>__
                                       ,0);
                          if (lVar5 != 0) {
                            FUN_04af773c(lVar5,uVar9,*(undefined8 *)puVar3);
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


