/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 0211f588
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
  FUN_02d5004c(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  lVar5 = **(long **)(*unaff_x22 + 0xb8);
  lVar2 = thunk_FUN_01c496e0(*unaff_x21);
  FUN_03313b6c(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = DAT_00b92310;
  if (lVar5 != 0) {
    lVar3 = *(long *)(lVar5 + 0x10);
    lVar4 = *unaff_x23;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
      }
      else {
        FUN_02d5004c(lVar5,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = **(long **)(*unaff_x22 + 0xb8);
      lVar2 = thunk_FUN_01c496e0(*unaff_x21);
      FUN_03313b6c(lVar2,0);
      *(undefined8 *)(lVar2 + 0x10) = DAT_00b91448;
      if (lVar5 != 0) {
        lVar3 = *(long *)(lVar5 + 0x10);
        lVar4 = *unaff_x23;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
          }
          else {
            FUN_02d5004c(lVar5,lVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          lVar5 = **(long **)(*unaff_x22 + 0xb8);
          lVar2 = thunk_FUN_01c496e0(*unaff_x21);
          FUN_03313b6c(lVar2,0);
          *(undefined8 *)(lVar2 + 0x10) = DAT_00b92f20;
          if (lVar5 != 0) {
            lVar3 = *(long *)(lVar5 + 0x10);
            lVar4 = *unaff_x23;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar3 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
              }
              else {
                FUN_02d5004c(lVar5,lVar2,
                             *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              lVar5 = **(long **)(*unaff_x22 + 0xb8);
              lVar2 = thunk_FUN_01c496e0(*unaff_x21);
              FUN_03313b6c(lVar2,0);
              *(undefined8 *)(lVar2 + 0x10) = DAT_00b92c80;
              if (lVar5 != 0) {
                lVar3 = *(long *)(lVar5 + 0x10);
                lVar4 = *unaff_x23;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar3 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
                  }
                  else {
                    FUN_02d5004c(lVar5,lVar2,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar5 = **(long **)(*unaff_x22 + 0xb8);
                  lVar2 = thunk_FUN_01c496e0(*unaff_x21);
                  FUN_03313b6c(lVar2,0);
                  *(undefined8 *)(lVar2 + 0x10) = DAT_00b92f28;
                  if (lVar5 != 0) {
                    lVar3 = *(long *)(lVar5 + 0x10);
                    lVar4 = *unaff_x23;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar3 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
                      }
                      else {
                        FUN_02d5004c(lVar5,lVar2,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar5 = **(long **)(*unaff_x22 + 0xb8);
                      lVar2 = thunk_FUN_01c496e0(*unaff_x21);
                      FUN_03313b6c(lVar2,0);
                      *(undefined8 *)(lVar2 + 0x10) = DAT_00b91d50;
                      if (lVar5 != 0) {
                        lVar3 = *(long *)(lVar5 + 0x10);
                        lVar4 = *unaff_x23;
                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                        if (lVar3 != 0) {
                          uVar1 = *(uint *)(lVar5 + 0x18);
                          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                            *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
                          }
                          else {
                            FUN_02d5004c(lVar5,lVar2,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar5 = **(long **)(*unaff_x22 + 0xb8);
                          lVar2 = thunk_FUN_01c496e0(*unaff_x21);
                          FUN_03313b6c(lVar2,0);
                          *(undefined8 *)(lVar2 + 0x10) = DAT_00b91988;
                          if (lVar5 != 0) {
                            lVar3 = *(long *)(lVar5 + 0x10);
                            lVar4 = *unaff_x23;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar3 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
                              }
                              else {
                                FUN_02d5004c(lVar5,lVar2,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar5 = **(long **)(*unaff_x22 + 0xb8);
                              lVar2 = thunk_FUN_01c496e0(*unaff_x21);
                              FUN_03313b6c(lVar2,0);
                              *(undefined8 *)(lVar2 + 0x10) = DAT_00b91fa8;
                              if (lVar5 != 0) {
                                lVar3 = *(long *)(lVar5 + 0x10);
                                lVar4 = *unaff_x23;
                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                if (lVar3 != 0) {
                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                    *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
                                    return;
                                  }
                                  FUN_02d5004c(lVar5,lVar2,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


