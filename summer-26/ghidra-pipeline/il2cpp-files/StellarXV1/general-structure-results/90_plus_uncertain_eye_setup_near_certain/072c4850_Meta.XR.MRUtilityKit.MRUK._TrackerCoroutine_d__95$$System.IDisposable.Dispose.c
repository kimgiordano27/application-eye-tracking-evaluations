/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<TrackerCoroutine>d__95$$System.IDisposable.Dispose
ENTRY_POINT: 072c4850
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<TrackerCoroutine>d__95__System_IDisposable_Dispose
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_2;
      thunk_FUN_040ec700();
    }
    else {
      FUN_05c26d88();
    }
    uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x80) + 0x20,0);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
        thunk_FUN_040ec700();
      }
      else {
        FUN_05c26d88();
      }
      uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x48) + 0x20,0);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      puVar2 = PTR_DAT_092c3578;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_040ec700();
        }
        else {
          FUN_05c26d88();
        }
        FUN_06efc7d8();
        lVar4 = thunk_FUN_040b4efc(*unaff_x24);
        FUN_05c26520(lVar4,*unaff_x23);
        uVar3 = FUN_0768890c(*(undefined8 *)puVar2,0);
        if (lVar4 != 0) {
          lVar5 = *(long *)(lVar4 + 0x10);
          lVar6 = *unaff_x21;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
              thunk_FUN_040ec700();
            }
            else {
              FUN_05c26d88(lVar4,uVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x78) + 0x20,0);
            lVar5 = *(long *)(lVar4 + 0x10);
            lVar6 = *unaff_x21;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                thunk_FUN_040ec700();
              }
              else {
                FUN_05c26d88(lVar4,uVar3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x80) + 0x20,0);
              lVar5 = *(long *)(lVar4 + 0x10);
              lVar6 = *unaff_x21;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar5 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                  thunk_FUN_040ec700();
                }
                else {
                  FUN_05c26d88(lVar4,uVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                }
                uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x48) + 0x20,0);
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *unaff_x21;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                    thunk_FUN_040ec700();
                  }
                  else {
                    FUN_05c26d88(lVar4,uVar3,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar3 = FUN_0768890c(*unaff_x25,0);
                  lVar5 = *(long *)(lVar4 + 0x10);
                  lVar6 = *unaff_x21;
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  if (lVar5 != 0) {
                    uVar1 = *(uint *)(lVar4 + 0x18);
                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                      thunk_FUN_040ec700();
                    }
                    else {
                      FUN_05c26d88(lVar4,uVar3,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    FUN_06efc7d8();
                    lVar4 = thunk_FUN_040b4efc(*unaff_x24);
                    FUN_05c26520(lVar4,*unaff_x23);
                    uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x48) + 0x20,0);
                    if (lVar4 != 0) {
                      lVar5 = *(long *)(lVar4 + 0x10);
                      lVar6 = *unaff_x21;
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (lVar5 != 0) {
                        uVar1 = *(uint *)(lVar4 + 0x18);
                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                          thunk_FUN_040ec700();
                        }
                        else {
                          FUN_05c26d88(lVar4,uVar3,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                        }
                        uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x68) + 0x20,0);
                        lVar5 = *(long *)(lVar4 + 0x10);
                        lVar6 = *unaff_x21;
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        if (lVar5 != 0) {
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                            thunk_FUN_040ec700();
                          }
                          else {
                            FUN_05c26d88(lVar4,uVar3,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                          }
                          uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x38) + 0x20,0);
                          lVar5 = *(long *)(lVar4 + 0x10);
                          lVar6 = *unaff_x21;
                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          if (lVar5 != 0) {
                            uVar1 = *(uint *)(lVar4 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                              thunk_FUN_040ec700();
                            }
                            else {
                              FUN_05c26d88(lVar4,uVar3,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            }
                            uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x78) + 0x20,0);
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *unaff_x21;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                                thunk_FUN_040ec700();
                              }
                              else {
                                FUN_05c26d88(lVar4,uVar3,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                              }
                              uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x80) + 0x20,0);
                              lVar5 = *(long *)(lVar4 + 0x10);
                              lVar6 = *unaff_x21;
                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                              if (lVar5 != 0) {
                                uVar1 = *(uint *)(lVar4 + 0x18);
                                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                                  thunk_FUN_040ec700();
                                }
                                else {
                                  FUN_05c26d88(lVar4,uVar3,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                }
                                uVar3 = FUN_0768890c(*unaff_x25,0);
                                lVar5 = *(long *)(lVar4 + 0x10);
                                lVar6 = *unaff_x21;
                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                if (lVar5 != 0) {
                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                                    thunk_FUN_040ec700();
                                  }
                                  else {
                                    FUN_05c26d88(lVar4,uVar3,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  FUN_06efc7d8();
                                  lVar4 = thunk_FUN_040b4efc(*unaff_x24);
                                  FUN_05c26520(lVar4,*unaff_x23);
                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x48) + 0x20,0);
                                  if (lVar4 != 0) {
                                    lVar5 = *(long *)(lVar4 + 0x10);
                                    lVar6 = *unaff_x21;
                                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    if (lVar5 != 0) {
                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                        ;
                                        thunk_FUN_040ec700();
                                      }
                                      else {
                                        FUN_05c26d88(lVar4,uVar3,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x68) + 0x20,0);
                                      lVar5 = *(long *)(lVar4 + 0x10);
                                      lVar6 = *unaff_x21;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar5 != 0) {
                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar3;
                                          thunk_FUN_040ec700();
                                        }
                                        else {
                                          FUN_05c26d88(lVar4,uVar3,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x38) + 0x20,0);
                                        lVar5 = *(long *)(lVar4 + 0x10);
                                        lVar6 = *unaff_x21;
                                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                        if (lVar5 != 0) {
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar3;
                                            thunk_FUN_040ec700();
                                          }
                                          else {
                                            FUN_05c26d88(lVar4,uVar3,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          FUN_06efc7d8();
                                          lVar4 = thunk_FUN_040b4efc(*unaff_x24);
                                          FUN_05c26520(lVar4,*unaff_x23);
                                          uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x48) + 0x20,0)
                                          ;
                                          if (lVar4 != 0) {
                                            lVar5 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *unaff_x21;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar5 != 0) {
                                              uVar1 = *(uint *)(lVar4 + 0x18);
                                              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                     = uVar3;
                                                thunk_FUN_040ec700();
                                              }
                                              else {
                                                FUN_05c26d88(lVar4,uVar3,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar6 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x68) +
                                                                   0x20,0);
                                              lVar5 = *(long *)(lVar4 + 0x10);
                                              lVar6 = *unaff_x21;
                                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                              if (lVar5 != 0) {
                                                uVar1 = *(uint *)(lVar4 + 0x18);
                                                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                                                  thunk_FUN_040ec700();
                                                }
                                                else {
                                                  FUN_05c26d88(lVar4,uVar3,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar6 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x38) +
                                                                     0x20,0);
                                                lVar5 = *(long *)(lVar4 + 0x10);
                                                lVar6 = *unaff_x21;
                                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                                if (lVar5 != 0) {
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                                                    thunk_FUN_040ec700();
                                                  }
                                                  else {
                                                    FUN_05c26d88(lVar4,uVar3,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x78) +
                                                                       0x20,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x80) +
                                                                       0x20,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*unaff_x25,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  FUN_06efc7d8();
                                                  lVar4 = thunk_FUN_040b4efc(*unaff_x24);
                                                  FUN_05c26520(lVar4,*unaff_x23);
                                                  uVar3 = FUN_0768890c(*unaff_x25,0);
                                                  if (lVar4 != 0) {
                                                    lVar5 = *(long *)(lVar4 + 0x10);
                                                    lVar6 = *unaff_x21;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar5 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar5 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar3;
                                                        thunk_FUN_040ec700();
                                                      }
                                                      else {
                                                        FUN_05c26d88(lVar4,uVar3,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x78) +
                                                                       0x20,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x80) +
                                                                       0x20,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x48) +
                                                                       0x20,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x38) +
                                                                       0x20,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x68) +
                                                                       0x20,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  FUN_06efc7d8();
                                                  lVar4 = thunk_FUN_040b4efc(*unaff_x24);
                                                  FUN_05c26520(lVar4,*unaff_x23);
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x48) +
                                                                       0x20,0);
                                                  if (lVar4 != 0) {
                                                    lVar5 = *(long *)(lVar4 + 0x10);
                                                    lVar6 = *unaff_x21;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar5 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar5 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar3;
                                                        thunk_FUN_040ec700();
                                                      }
                                                      else {
                                                        FUN_05c26d88(lVar4,uVar3,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x68) +
                                                                       0x20,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x38) +
                                                                       0x20,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x78) +
                                                                       0x20,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x80) +
                                                                       0x20,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = FUN_0768890c(*unaff_x25,0);
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *unaff_x21;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  puVar2 = PTR_DAT_092c2f50;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_040ec700();
                                                    }
                                                    else {
                                                      FUN_05c26d88(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar6 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  FUN_06efc7d8();
                                                  **(undefined8 **)(*(long *)puVar2 + 0xb8) =
                                                       unaff_x19;
                                                  thunk_FUN_040ec700(*(undefined8 *)
                                                                      (*(long *)puVar2 + 0xb8));
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
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


