/*
FUNCTION_NAME: FUN_05431188
ENTRY_POINT: 05431188
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05431188(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0631e1d8;
                    /* try { // try from 05431198 to 0553119f has its CatchHandler @ 05432204 */
  if ((DAT_066d0dab & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631e400);
    FUN_02b3c81c(PTR_DAT_0631e420);
    FUN_02b3c81c(PTR_DAT_0631e428);
    FUN_02b3c81c(PTR_DAT_0632ce70);
    FUN_02b3c81c(PTR_DAT_0631e1d8);
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    FUN_02b3c81c(System_Threading_ThreadPoolWorkQueue_WorkStealingQueue_TypeInfo);
    DAT_066d0dab = 1;
  }
  plVar3 = (long *)FUN_02b3c908(*(undefined8 *)puVar1,0x100);
  puVar1 = PTR_DAT_06312310;
  lVar7 = *(long *)(PTR_DAT_06312310 + 0x28);
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
  lVar7 = FUN_04d8a7b0(lVar7 + 0x20,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if ((lVar7 != 0) &&
     (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_05431cd8:
    uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar6,0);
  }
  if (0x86 < *(uint *)(plVar3 + 3)) {
    plVar3[0x8a] = lVar7;
    thunk_FUN_02bb0e9c(plVar3 + 0x8a,lVar7);
    lVar7 = FUN_04d8a7b0(*(long *)(puVar1 + 0x18) + 0x20,0);
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_05431cd8;
    if ((*(uint *)(plVar3 + 3) & 0xfffffff8) != 0) {
      plVar3[0xb] = lVar7;
      thunk_FUN_02bb0e9c(plVar3 + 0xb,lVar7);
      lVar7 = FUN_04d8a7b0(*(long *)(puVar1 + 0x30) + 0x20,0);
      if ((lVar7 != 0) &&
         (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_05431cd8;
      if (0x88 < *(uint *)(plVar3 + 3)) {
        plVar3[0x8c] = lVar7;
        thunk_FUN_02bb0e9c(plVar3 + 0x8c,lVar7);
        lVar7 = FUN_04d8a7b0(*(long *)(puVar1 + 0x38) + 0x20,0);
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_05431cd8;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
          plVar3[5] = lVar7;
          thunk_FUN_02bb0e9c(plVar3 + 5,lVar7);
          lVar7 = FUN_04d8a7b0(*(long *)(puVar1 + 0x40) + 0x20,0);
          if ((lVar7 != 0) &&
             (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_05431cd8;
          if (0x89 < *(uint *)(plVar3 + 3)) {
            plVar3[0x8d] = lVar7;
            thunk_FUN_02bb0e9c(plVar3 + 0x8d,lVar7);
            lVar7 = FUN_04d8a7b0(*(long *)(puVar1 + 0x50) + 0x20,0);
            if ((lVar7 != 0) &&
               (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_05431cd8;
            if (0x8a < *(uint *)(plVar3 + 3)) {
              plVar3[0x8e] = lVar7;
              thunk_FUN_02bb0e9c(plVar3 + 0x8e,lVar7);
              lVar7 = FUN_04d8a7b0(*(long *)(puVar1 + 0x78) + 0x20,0);
              if ((lVar7 != 0) &&
                 (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_05431cd8;
              if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
                plVar3[7] = lVar7;
                thunk_FUN_02bb0e9c(plVar3 + 7,lVar7);
                lVar7 = FUN_04d8a7b0(*(long *)(puVar1 + 0x80) + 0x20,0);
                if ((lVar7 != 0) &&
                   (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                goto LAB_05431cd8;
                if (4 < *(uint *)(plVar3 + 3)) {
                  plVar3[8] = lVar7;
                  thunk_FUN_02bb0e9c(plVar3 + 8,lVar7);
                  lVar7 = FUN_04d8a7b0(*(long *)(puVar1 + 0x68) + 0x20,0);
                  if ((lVar7 != 0) &&
                     (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)
                     ) goto LAB_05431cd8;
                  if (8 < *(uint *)(plVar3 + 3)) {
                    plVar3[0xc] = lVar7;
                    thunk_FUN_02bb0e9c(plVar3 + 0xc,lVar7);
                    lVar7 = FUN_04d8a7b0(*(long *)(puVar1 + 0x70) + 0x20,0);
                    if ((lVar7 != 0) &&
                       (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar4 == 0)) goto LAB_05431cd8;
                    puVar2 = OVRPlugin_OVRP_1_7_0_TypeInfo;
                    if (0x8b < *(uint *)(plVar3 + 3)) {
                      plVar3[0x8f] = lVar7;
                      thunk_FUN_02bb0e9c(plVar3 + 0x8f,lVar7);
                      lVar7 = FUN_04d8a7b0(*(undefined8 *)puVar2,0);
                      if ((lVar7 != 0) &&
                         (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar4 == 0)) goto LAB_05431cd8;
                      if (0x8c < *(uint *)(plVar3 + 3)) {
                        plVar3[0x90] = lVar7;
                        thunk_FUN_02bb0e9c(plVar3 + 0x90,lVar7);
                        lVar7 = FUN_04d8a7b0(*(long *)(puVar1 + 0x48) + 0x20,0);
                        if ((lVar7 != 0) &&
                           (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar4 == 0)) goto LAB_05431cd8;
                        if (6 < *(uint *)(plVar3 + 3)) {
                          plVar3[10] = lVar7;
                          thunk_FUN_02bb0e9c(plVar3 + 10,lVar7);
                          if ((lVar7 != 0) &&
                             (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)),
                             lVar4 == 0)) goto LAB_05431cd8;
                          puVar1 = PTR_DAT_0632ce70;
                          if (2 < *(uint *)(plVar3 + 3)) {
                            plVar3[6] = lVar7;
                            thunk_FUN_02bb0e9c(plVar3 + 6,lVar7);
                            lVar7 = FUN_04d8a7b0(*(undefined8 *)puVar1,0);
                            if ((lVar7 != 0) &&
                               (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)),
                               lVar4 == 0)) goto LAB_05431cd8;
                            if (0x14 < *(uint *)(plVar3 + 3)) {
                              plVar3[0x18] = lVar7;
                              thunk_FUN_02bb0e9c(plVar3 + 0x18,lVar7);
                              if ((lVar7 != 0) &&
                                 (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)),
                                 lVar4 == 0)) goto LAB_05431cd8;
                              if (5 < *(uint *)(plVar3 + 3)) {
                                plVar3[9] = lVar7;
                                thunk_FUN_02bb0e9c(plVar3 + 9,lVar7);
                                if ((lVar7 != 0) &&
                                   (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)
                                                              ), lVar4 == 0)) goto LAB_05431cd8;
                                if (10 < *(uint *)(plVar3 + 3)) {
                                  plVar3[0xe] = lVar7;
                                  thunk_FUN_02bb0e9c(plVar3 + 0xe,lVar7);
                                  if ((lVar7 != 0) &&
                                     (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)
                                                                        (*plVar3 + 0x40)),
                                     lVar4 == 0)) goto LAB_05431cd8;
                                  if (0xb < *(uint *)(plVar3 + 3)) {
                                    plVar3[0xf] = lVar7;
                                    thunk_FUN_02bb0e9c(plVar3 + 0xf,lVar7);
                                    if ((lVar7 != 0) &&
                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)
                                                                          (*plVar3 + 0x40)),
                                       lVar4 == 0)) goto LAB_05431cd8;
                                    puVar1 = PTR_DAT_0631e428;
                                    if (0x87 < *(uint *)(plVar3 + 3)) {
                                      plVar3[0x8b] = lVar7;
                                      thunk_FUN_02bb0e9c(plVar3 + 0x8b,lVar7);
                                      lVar7 = FUN_04d8a7b0(*(undefined8 *)puVar1,0);
                                      if ((lVar7 != 0) &&
                                         (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)
                                                                            (*plVar3 + 0x40)),
                                         lVar4 == 0)) goto LAB_05431cd8;
                                      if (0x13 < *(uint *)(plVar3 + 3)) {
                                        plVar3[0x17] = lVar7;
                                        thunk_FUN_02bb0e9c(plVar3 + 0x17,lVar7);
                                        if ((lVar7 != 0) &&
                                           (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)
                                                                              (*plVar3 + 0x40)),
                                           lVar4 == 0)) goto LAB_05431cd8;
                                        if (0x12 < *(uint *)(plVar3 + 3)) {
                                          plVar3[0x16] = lVar7;
                                          thunk_FUN_02bb0e9c(plVar3 + 0x16,lVar7);
                                          if ((lVar7 != 0) &&
                                             (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)
                                                                                (*plVar3 + 0x40)),
                                             lVar4 == 0)) goto LAB_05431cd8;
                                          if (0x81 < *(uint *)(plVar3 + 3)) {
                                            plVar3[0x85] = lVar7;
                                            thunk_FUN_02bb0e9c(plVar3 + 0x85,lVar7);
                                            if ((lVar7 != 0) &&
                                               (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)
                                                                                  (*plVar3 + 0x40)),
                                               lVar4 == 0)) goto LAB_05431cd8;
                                            if (0x82 < *(uint *)(plVar3 + 3)) {
                                              plVar3[0x86] = lVar7;
                                              thunk_FUN_02bb0e9c(plVar3 + 0x86,lVar7);
                                              if ((lVar7 != 0) &&
                                                 (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)
                                                                                    (*plVar3 + 0x40)
                                                                            ), lVar4 == 0))
                                              goto LAB_05431cd8;
                                              if (0x83 < *(uint *)(plVar3 + 3)) {
                                                plVar3[0x87] = lVar7;
                                                thunk_FUN_02bb0e9c(plVar3 + 0x87,lVar7);
                                                if ((lVar7 != 0) &&
                                                   (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)
                                                                                      (*plVar3 +
                                                                                      0x40)),
                                                   lVar4 == 0)) goto LAB_05431cd8;
                                                if ((*(uint *)(plVar3 + 3) & 0xffffff80) != 0) {
                                                  plVar3[0x83] = lVar7;
                                                  thunk_FUN_02bb0e9c(plVar3 + 0x83,lVar7);
                                                  if ((lVar7 != 0) &&
                                                     (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40)), lVar4 == 0)) goto LAB_05431cd8;
                                                  if (0x7e < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x82] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x82,lVar7);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  puVar1 = PTR_DAT_0631e420;
                                                  if (0x7d < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x81] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x81,lVar7);
                                                    lVar7 = FUN_04d8a7b0(*(undefined8 *)puVar1,0);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0x7c < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x80] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x80,lVar7);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0x7b < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x7f] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x7f,lVar7);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  puVar1 = PTR_DAT_0631e400;
                                                  if (0x7a < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x7e] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x7e,lVar7);
                                                    lVar7 = FUN_04d8a7b0(*(undefined8 *)puVar1,0);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if ((*(uint *)(plVar3 + 3) & 0xfffffff0) != 0) {
                                                    plVar3[0x13] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x13,lVar7);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0xc < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x10] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x10,lVar7);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0x17 < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x1b] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x1b,lVar7);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0x1b < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x1f] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x1f,lVar7);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0x84 < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x88] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x88,lVar7);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  puVar1 = 
                                                  System_Threading_ThreadPoolWorkQueue_WorkStealingQueue_TypeInfo
                                                  ;
                                                  if (0x85 < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x89] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x89,lVar7);
                                                    lVar7 = *(long *)puVar1;
                                                    if (*(int *)(lVar7 + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                      lVar7 = *(long *)puVar1;
                                                    }
                                                    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0xd < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x11] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x11,lVar7);
                                                    lVar7 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0x10 < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x14] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x14,lVar7);
                                                    lVar7 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0x16 < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x1a] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x1a,lVar7);
                                                    lVar7 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0xe < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x12] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x12,lVar7);
                                                    lVar7 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0x11 < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x15] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x15,lVar7);
                                                    lVar7 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (0x18 < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0x1c] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0x1c,lVar7);
                                                    lVar7 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    if ((lVar7 != 0) &&
                                                       (lVar4 = thunk_FUN_02b79548(lVar7,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                                                  goto LAB_05431cd8;
                                                  if (9 < *(uint *)(plVar3 + 3)) {
                                                    plVar3[0xd] = lVar7;
                                                    thunk_FUN_02bb0e9c(plVar3 + 0xd,lVar7);
                                                    lVar7 = *(long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 0x10);
                                                    thunk_FUN_02b4aae0();
                                                    if (lVar7 != 0) {
                                                      return;
                                                    }
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                    }
                                                    thunk_FUN_02b4aae0();
                                                    plVar5 = (long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 0x10);
                                                    *plVar5 = (long)plVar3;
                                                    thunk_FUN_02bb0e9c(plVar5,plVar3);
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


