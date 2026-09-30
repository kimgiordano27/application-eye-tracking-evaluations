/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$UpdateScene
ENTRY_POINT: 0147ce30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__UpdateScene(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystem_set_library__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
  thunk_FUN_00d48444(StringLiteral_9740);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<IEnumerator<ITreeViewItem>>__ctor__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Queue<int>_Clear__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
  *(undefined1 *)(unaff_x21 + 0xb88) = 1;
  uVar5 = FUN_00da4fb8(*unaff_x23,2);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar5;
  uVar5 = FUN_00da4fb8(*unaff_x24,4);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar5;
  uVar5 = FUN_00da4fb8(*unaff_x24,0x36);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar5;
  lVar6 = thunk_FUN_00d62348(*unaff_x20);
  puVar4 = StringLiteral_5842;
  if (lVar6 != 0) {
    FUN_01484c38();
    *(long *)(unaff_x19 + 0xb8) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar4 = Method_UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystem_set_library__;
    if (lVar6 != 0) {
      FUN_0147ecd0();
      *(long *)(unaff_x19 + 0xc0) = lVar6;
      plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,2);
      lVar6 = FUN_00da4fb8(*unaff_x24,4);
      if (plVar7 != (long *)0x0) {
        if ((lVar6 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_0147dc38:
          uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar5,0);
        }
        if ((int)plVar7[3] != 0) {
          plVar7[4] = lVar6;
          lVar6 = FUN_00da4fb8(*unaff_x24,4);
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_0147dc38;
          if (1 < *(uint *)(plVar7 + 3)) {
            plVar7[5] = lVar6;
            *(long **)(unaff_x19 + 0xd8) = plVar7;
            plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,2);
            lVar6 = FUN_00da4fb8(*unaff_x24,2);
            if (plVar7 == (long *)0x0) goto LAB_0147dc44;
            if ((lVar6 != 0) &&
               (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
            goto LAB_0147dc38;
            if ((int)plVar7[3] != 0) {
              plVar7[4] = lVar6;
              lVar6 = FUN_00da4fb8(*unaff_x24,2);
              if ((lVar6 != 0) &&
                 (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_0147dc38;
              if (1 < *(uint *)(plVar7 + 3)) {
                plVar7[5] = lVar6;
                *(long **)(unaff_x19 + 0xe0) = plVar7;
                plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,2);
                lVar6 = FUN_00da4fb8(*unaff_x24,2);
                if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                if ((lVar6 != 0) &&
                   (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                goto LAB_0147dc38;
                if ((int)plVar7[3] != 0) {
                  plVar7[4] = lVar6;
                  lVar6 = FUN_00da4fb8(*unaff_x24,2);
                  if ((lVar6 != 0) &&
                     (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)
                     ) goto LAB_0147dc38;
                  if (1 < *(uint *)(plVar7 + 3)) {
                    plVar7[5] = lVar6;
                    *(long **)(unaff_x19 + 0xe8) = plVar7;
                    puVar3 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
                    plVar7 = (long *)FUN_00da4fb8(*unaff_x23,2);
                    lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,2);
                    if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                    if ((lVar6 != 0) &&
                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar8 == 0)) goto LAB_0147dc38;
                    if ((int)plVar7[3] != 0) {
                      plVar7[4] = lVar6;
                      lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,2);
                      if ((lVar6 != 0) &&
                         (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar8 == 0)) goto LAB_0147dc38;
                      if (1 < *(uint *)(plVar7 + 3)) {
                        plVar7[5] = lVar6;
                        *(long **)(unaff_x19 + 0xf0) = plVar7;
                        plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,2);
                        lVar6 = FUN_00da4fb8(*unaff_x24,2);
                        if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                        if ((lVar6 != 0) &&
                           (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar8 == 0)) goto LAB_0147dc38;
                        if ((int)plVar7[3] != 0) {
                          plVar7[4] = lVar6;
                          lVar6 = FUN_00da4fb8(*unaff_x24,2);
                          if ((lVar6 != 0) &&
                             (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar8 == 0)) goto LAB_0147dc38;
                          puVar2 = System_Security_Cryptography_TripleDESTransform_TypeInfo;
                          if (1 < *(uint *)(plVar7 + 3)) {
                            plVar7[5] = lVar6;
                            *(long **)(unaff_x19 + 0xf8) = plVar7;
                            puVar1 = Method_System_Collections_Generic_List<EventSystem>_IndexOf__;
                            plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,2);
                            lVar6 = FUN_00da4fb8(*(undefined8 *)puVar1,2);
                            if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                            if ((lVar6 != 0) &&
                               (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar8 == 0)) goto LAB_0147dc38;
                            if ((int)plVar7[3] != 0) {
                              plVar7[4] = lVar6;
                              lVar6 = FUN_00da4fb8(*(undefined8 *)puVar1,2);
                              if ((lVar6 != 0) &&
                                 (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                                 lVar8 == 0)) goto LAB_0147dc38;
                              if (1 < *(uint *)(plVar7 + 3)) {
                                plVar7[5] = lVar6;
                                *(long **)(unaff_x19 + 0x100) = plVar7;
                                plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,2);
                                lVar6 = FUN_00da4fb8(*(undefined8 *)puVar1,2);
                                if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                                if ((lVar6 != 0) &&
                                   (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)
                                                              ), lVar8 == 0)) goto LAB_0147dc38;
                                if ((int)plVar7[3] != 0) {
                                  plVar7[4] = lVar6;
                                  lVar6 = FUN_00da4fb8(*(undefined8 *)puVar1,2);
                                  if ((lVar6 != 0) &&
                                     (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                        (*plVar7 + 0x40)),
                                     lVar8 == 0)) goto LAB_0147dc38;
                                  if (1 < *(uint *)(plVar7 + 3)) {
                                    plVar7[5] = lVar6;
                                    *(long **)(unaff_x19 + 0x108) = plVar7;
                                    plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,2);
                                    lVar6 = FUN_00da4fb8(*unaff_x24,2);
                                    if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                                    if ((lVar6 != 0) &&
                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                          (*plVar7 + 0x40)),
                                       lVar8 == 0)) goto LAB_0147dc38;
                                    if ((int)plVar7[3] != 0) {
                                      plVar7[4] = lVar6;
                                      lVar6 = FUN_00da4fb8(*unaff_x24,2);
                                      if ((lVar6 != 0) &&
                                         (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                            (*plVar7 + 0x40)),
                                         lVar8 == 0)) goto LAB_0147dc38;
                                      if (1 < *(uint *)(plVar7 + 3)) {
                                        plVar7[5] = lVar6;
                                        *(long **)(unaff_x19 + 0x110) = plVar7;
                                        plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,2);
                                        lVar6 = FUN_00da4fb8(*unaff_x24,2);
                                        if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                                        if ((lVar6 != 0) &&
                                           (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                              (*plVar7 + 0x40)),
                                           lVar8 == 0)) goto LAB_0147dc38;
                                        if ((int)plVar7[3] != 0) {
                                          plVar7[4] = lVar6;
                                          lVar6 = FUN_00da4fb8(*unaff_x24,2);
                                          if ((lVar6 != 0) &&
                                             (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                (*plVar7 + 0x40)),
                                             lVar8 == 0)) goto LAB_0147dc38;
                                          if (1 < *(uint *)(plVar7 + 3)) {
                                            plVar7[5] = lVar6;
                                            *(long **)(unaff_x19 + 0x128) = plVar7;
                                            plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,2);
                                            lVar6 = FUN_00da4fb8(*unaff_x24,2);
                                            if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                                            if ((lVar6 != 0) &&
                                               (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                               lVar8 == 0)) goto LAB_0147dc38;
                                            if ((int)plVar7[3] != 0) {
                                              plVar7[4] = lVar6;
                                              lVar6 = FUN_00da4fb8(*unaff_x24,2);
                                              if ((lVar6 != 0) &&
                                                 (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            ), lVar8 == 0))
                                              goto LAB_0147dc38;
                                              if (1 < *(uint *)(plVar7 + 3)) {
                                                plVar7[5] = lVar6;
                                                *(long **)(unaff_x19 + 0x130) = plVar7;
                                                plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,
                                                                              2);
                                                lVar6 = FUN_00da4fb8(*unaff_x24,2);
                                                if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                                                if ((lVar6 != 0) &&
                                                   (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40)),
                                                   lVar8 == 0)) goto LAB_0147dc38;
                                                if ((int)plVar7[3] != 0) {
                                                  plVar7[4] = lVar6;
                                                  lVar6 = FUN_00da4fb8(*unaff_x24,2);
                                                  if ((lVar6 != 0) &&
                                                     (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40)), lVar8 == 0)) goto LAB_0147dc38;
                                                  if (1 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[5] = lVar6;
                                                    *(long **)(unaff_x19 + 0x138) = plVar7;
                                                    plVar7 = (long *)FUN_00da4fb8(*unaff_x23,2);
                                                    lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,2);
                                                    if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if ((int)plVar7[3] != 0) {
                                                    plVar7[4] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,2);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (1 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[5] = lVar6;
                                                    *(long **)(unaff_x19 + 0x140) = plVar7;
                                                    plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                   puVar4,2);
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,2);
                                                    if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if ((int)plVar7[3] != 0) {
                                                    plVar7[4] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,2);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  puVar2 = 
                                                  Method_System_ComponentModel_DateTimeConverter_ConvertFrom__
                                                  ;
                                                  if (1 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[5] = lVar6;
                                                    *(long **)(unaff_x19 + 0x148) = plVar7;
                                                    puVar1 = PTR_DAT_033f39e0;
                                                    uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,0x240
                                                                        );
                                                    *(undefined8 *)(unaff_x19 + 0x160) = uVar5;
                                                    uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,0x240
                                                                        );
                                                    *(undefined8 *)(unaff_x19 + 0x168) = uVar5;
                                                    uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,0x240
                                                                        );
                                                    *(undefined8 *)(unaff_x19 + 0x170) = uVar5;
                                                    plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                   puVar1,2);
                                                    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                   puVar4,4);
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,0xd);
                                                    if (plVar9 == (long *)0x0) goto LAB_0147dc44;
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if ((int)plVar9[3] != 0) {
                                                    plVar9[4] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,0xd);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (1 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[5] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,0xd);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (2 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[6] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,0x17);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (3 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[7] = lVar6;
                                                    if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                                                    lVar6 = thunk_FUN_00d6225c(plVar9,*(undefined8 *
                                                                                       )(*plVar7 +
                                                                                        0x40));
                                                    if (lVar6 == 0) goto LAB_0147dc38;
                                                    if ((int)plVar7[3] == 0) goto LAB_0147dc34;
                                                    plVar7[4] = (long)plVar9;
                                                    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                   puVar4,4);
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,0xd);
                                                    if (plVar9 == (long *)0x0) goto LAB_0147dc44;
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if ((int)plVar9[3] != 0) {
                                                    plVar9[4] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,0xd);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (1 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[5] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,0xd);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (2 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[6] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,0x17);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (3 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[7] = lVar6;
                                                    lVar6 = thunk_FUN_00d6225c(plVar9,*(undefined8 *
                                                                                       )(*plVar7 +
                                                                                        0x40));
                                                    if (lVar6 == 0) goto LAB_0147dc38;
                                                    if (1 < *(uint *)(plVar7 + 3)) {
                                                      plVar7[5] = (long)plVar9;
                                                      *(long **)(unaff_x19 + 0x180) = plVar7;
                                                      plVar7 = (long *)FUN_00da4fb8(*unaff_x23,2);
                                                      lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,
                                                                           0x243);
                                                      if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                                                      if ((lVar6 != 0) &&
                                                         (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if ((int)plVar7[3] != 0) {
                                                    plVar7[4] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,0x243
                                                                        );
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (1 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[5] = lVar6;
                                                    *(long **)(unaff_x19 + 0x188) = plVar7;
                                                    puVar2 = StringLiteral_9740;
                                                    uVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,0x240
                                                                        );
                                                    *(undefined8 *)(unaff_x19 + 400) = uVar5;
                                                    uVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,0x20)
                                                    ;
                                                    *(undefined8 *)(unaff_x19 + 0x198) = uVar5;
                                                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                                      thunk_FUN_00d32864();
                                                    }
                                                    FUN_01480a90();
                                                    plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                   puVar1,2);
                                                    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                   puVar4,2);
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,3);
                                                    if (plVar9 == (long *)0x0) goto LAB_0147dc44;
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if ((int)plVar9[3] != 0) {
                                                    plVar9[4] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (1 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[5] = lVar6;
                                                    if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                                                    lVar6 = thunk_FUN_00d6225c(plVar9,*(undefined8 *
                                                                                       )(*plVar7 +
                                                                                        0x40));
                                                    if (lVar6 == 0) goto LAB_0147dc38;
                                                    if ((int)plVar7[3] == 0) goto LAB_0147dc34;
                                                    plVar7[4] = (long)plVar9;
                                                    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                   puVar4,2);
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,3);
                                                    if (plVar9 == (long *)0x0) goto LAB_0147dc44;
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if ((int)plVar9[3] != 0) {
                                                    plVar9[4] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*unaff_x24,3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (1 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[5] = lVar6;
                                                    lVar6 = thunk_FUN_00d6225c(plVar9,*(undefined8 *
                                                                                       )(*plVar7 +
                                                                                        0x40));
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_Stack<IEnumerator<ITreeViewItem>>__ctor__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_0147dc38;
                                                  if (1 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[5] = (long)plVar9;
                                                    *(long **)(unaff_x19 + 0x118) = plVar7;
                                                    plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                   puVar4,2);
                                                    plVar9 = (long *)FUN_00da4fb8(*unaff_x23,2);
                                                    lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,3);
                                                    if (plVar9 == (long *)0x0) goto LAB_0147dc44;
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if ((int)plVar9[3] != 0) {
                                                    plVar9[4] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (1 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[5] = lVar6;
                                                    if (plVar7 == (long *)0x0) goto LAB_0147dc44;
                                                    lVar6 = thunk_FUN_00d6225c(plVar9,*(undefined8 *
                                                                                       )(*plVar7 +
                                                                                        0x40));
                                                    if (lVar6 == 0) goto LAB_0147dc38;
                                                    if ((int)plVar7[3] == 0) goto LAB_0147dc34;
                                                    plVar7[4] = (long)plVar9;
                                                    plVar9 = (long *)FUN_00da4fb8(*unaff_x23,2);
                                                    lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,3);
                                                    if (plVar9 == (long *)0x0) goto LAB_0147dc44;
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if ((int)plVar9[3] != 0) {
                                                    plVar9[4] = lVar6;
                                                    lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                                                  goto LAB_0147dc38;
                                                  if (1 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[5] = lVar6;
                                                    lVar6 = thunk_FUN_00d6225c(plVar9,*(undefined8 *
                                                                                       )(*plVar7 +
                                                                                        0x40));
                                                    if (lVar6 == 0) goto LAB_0147dc38;
                                                    if (1 < *(uint *)(plVar7 + 3)) {
                                                      plVar7[5] = (long)plVar9;
                                                      *(long **)(unaff_x19 + 0x120) = plVar7;
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
                }
              }
            }
          }
        }
LAB_0147dc34:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
    }
  }
LAB_0147dc44:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


