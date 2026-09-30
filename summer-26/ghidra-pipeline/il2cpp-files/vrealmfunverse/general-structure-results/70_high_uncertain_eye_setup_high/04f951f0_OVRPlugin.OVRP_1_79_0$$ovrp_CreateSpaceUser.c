/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_CreateSpaceUser
ENTRY_POINT: 04f951f0
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


void OVRPlugin_OVRP_1_79_0__ovrp_CreateSpaceUser(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  *param_1 = unaff_x19;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*unaff_x23 + 0xb8));
  uVar4 = FUN_02b3c908(*unaff_x27,0x18);
  FUN_04cac0f0(uVar4,*unaff_x26,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  *puVar5 = uVar4;
  thunk_FUN_02bb0e9c(puVar5,uVar4);
  uVar4 = FUN_02b3c908(*unaff_x22,0x18);
  FUN_04cac0f0(uVar4,*unaff_x25,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar5 = uVar4;
  thunk_FUN_02bb0e9c(puVar5,uVar4);
  lVar6 = FUN_02b3c908(*unaff_x24,0x18);
  uVar4 = FUN_02b3c908(*unaff_x22,6);
  FUN_04cac0f0(uVar4,*unaff_x21,0);
  if (lVar6 == 0) goto LAB_04f95ef0;
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(undefined8 *)(lVar6 + 0x20) = uVar4;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20),uVar4);
    uVar4 = FUN_02b3c908(*unaff_x22,0);
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar6 + 0x28) = uVar4;
      thunk_FUN_02bb0e9c();
      lVar7 = FUN_02b3c908(*unaff_x22,1);
      if (lVar7 == 0) goto LAB_04f95ef0;
      if (*(int *)(lVar7 + 0x18) != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        *(undefined4 *)(lVar7 + 0x20) = 3;
        if (2 < uVar1) {
          *(long *)(lVar6 + 0x30) = lVar7;
          thunk_FUN_02bb0e9c();
          lVar7 = FUN_02b3c908(*unaff_x22,1);
          if (lVar7 == 0) goto LAB_04f95ef0;
          if (*(int *)(lVar7 + 0x18) != 0) {
            *(undefined4 *)(lVar7 + 0x20) = 4;
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
              *(long *)(lVar6 + 0x38) = lVar7;
              thunk_FUN_02bb0e9c();
              lVar7 = FUN_02b3c908(*unaff_x22,1);
              if (lVar7 == 0) goto LAB_04f95ef0;
              if (*(int *)(lVar7 + 0x18) != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                *(undefined4 *)(lVar7 + 0x20) = 5;
                if (4 < uVar1) {
                  *(long *)(lVar6 + 0x40) = lVar7;
                  thunk_FUN_02bb0e9c();
                  lVar7 = FUN_02b3c908(*unaff_x22,1);
                  if (lVar7 == 0) goto LAB_04f95ef0;
                  if (*(int *)(lVar7 + 0x18) != 0) {
                    uVar1 = *(uint *)(lVar6 + 0x18);
                    *(undefined4 *)(lVar7 + 0x20) = 0x13;
                    if (5 < uVar1) {
                      *(long *)(lVar6 + 0x48) = lVar7;
                      thunk_FUN_02bb0e9c();
                      lVar7 = FUN_02b3c908(*unaff_x22,1);
                      if (lVar7 == 0) goto LAB_04f95ef0;
                      if (*(int *)(lVar7 + 0x18) != 0) {
                        uVar1 = *(uint *)(lVar6 + 0x18);
                        *(undefined4 *)(lVar7 + 0x20) = 7;
                        if (6 < uVar1) {
                          *(long *)(lVar6 + 0x50) = lVar7;
                          thunk_FUN_02bb0e9c();
                          lVar7 = FUN_02b3c908(*unaff_x22,1);
                          if (lVar7 == 0) goto LAB_04f95ef0;
                          if (*(int *)(lVar7 + 0x18) != 0) {
                            *(undefined4 *)(lVar7 + 0x20) = 8;
                            if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                              *(long *)(lVar6 + 0x58) = lVar7;
                              thunk_FUN_02bb0e9c();
                              lVar7 = FUN_02b3c908(*unaff_x22,1);
                              if (lVar7 == 0) goto LAB_04f95ef0;
                              if (*(int *)(lVar7 + 0x18) != 0) {
                                uVar1 = *(uint *)(lVar6 + 0x18);
                                *(undefined4 *)(lVar7 + 0x20) = 0x14;
                                if (8 < uVar1) {
                                  *(long *)(lVar6 + 0x60) = lVar7;
                                  thunk_FUN_02bb0e9c();
                                  lVar7 = FUN_02b3c908(*unaff_x22,1);
                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    *(undefined4 *)(lVar7 + 0x20) = 10;
                                    if (9 < uVar1) {
                                      *(long *)(lVar6 + 0x68) = lVar7;
                                      thunk_FUN_02bb0e9c();
                                      lVar7 = FUN_02b3c908(*unaff_x22,1);
                                      if (lVar7 == 0) goto LAB_04f95ef0;
                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                        *(undefined4 *)(lVar7 + 0x20) = 0xb;
                                        if (10 < uVar1) {
                                          *(long *)(lVar6 + 0x70) = lVar7;
                                          thunk_FUN_02bb0e9c();
                                          lVar7 = FUN_02b3c908(*unaff_x22,1);
                                          if (lVar7 == 0) goto LAB_04f95ef0;
                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                            uVar1 = *(uint *)(lVar6 + 0x18);
                                            *(undefined4 *)(lVar7 + 0x20) = 0x15;
                                            if (0xb < uVar1) {
                                              *(long *)(lVar6 + 0x78) = lVar7;
                                              thunk_FUN_02bb0e9c();
                                              lVar7 = FUN_02b3c908(*unaff_x22,1);
                                              if (lVar7 == 0) goto LAB_04f95ef0;
                                              if (*(int *)(lVar7 + 0x18) != 0) {
                                                uVar1 = *(uint *)(lVar6 + 0x18);
                                                *(undefined4 *)(lVar7 + 0x20) = 0xd;
                                                if (0xc < uVar1) {
                                                  *(long *)(lVar6 + 0x80) = lVar7;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar7 = FUN_02b3c908(*unaff_x22,1);
                                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    *(undefined4 *)(lVar7 + 0x20) = 0xe;
                                                    if (0xd < uVar1) {
                                                      *(long *)(lVar6 + 0x88) = lVar7;
                                                      thunk_FUN_02bb0e9c();
                                                      lVar7 = FUN_02b3c908(*unaff_x22,1);
                                                      if (lVar7 == 0) goto LAB_04f95ef0;
                                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        *(undefined4 *)(lVar7 + 0x20) = 0x16;
                                                        if (0xe < uVar1) {
                                                          *(long *)(lVar6 + 0x90) = lVar7;
                                                          thunk_FUN_02bb0e9c();
                                                          lVar7 = FUN_02b3c908(*unaff_x22,1);
                                                          if (lVar7 == 0) goto LAB_04f95ef0;
                                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar7 + 0x20) = 0x10;
                                                            if ((*(uint *)(lVar6 + 0x18) &
                                                                0xfffffff0) != 0) {
                                                              *(long *)(lVar6 + 0x98) = lVar7;
                                                              thunk_FUN_02bb0e9c();
                                                              lVar7 = FUN_02b3c908(*unaff_x22,1);
                                                              if (lVar7 == 0) goto LAB_04f95ef0;
                                                              if (*(int *)(lVar7 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar6 + 0x18);
                                                                *(undefined4 *)(lVar7 + 0x20) = 0x11
                                                                ;
                                                                if (0x10 < uVar1) {
                                                                  *(long *)(lVar6 + 0xa0) = lVar7;
                                                                  thunk_FUN_02bb0e9c();
                                                                  lVar7 = FUN_02b3c908(*unaff_x22,1)
                                                                  ;
                                                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                                    *(undefined4 *)(lVar7 + 0x20) =
                                                                         0x12;
                                                                    if (0x11 < uVar1) {
                                                                      *(long *)(lVar6 + 0xa8) =
                                                                           lVar7;
                                                                      thunk_FUN_02bb0e9c();
                                                                      lVar7 = FUN_02b3c908(*
                                                  unaff_x22,1);
                                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x17;
                                                    if (0x12 < uVar1) {
                                                      *(long *)(lVar6 + 0xb0) = lVar7;
                                                      thunk_FUN_02bb0e9c((long *)(lVar6 + 0xb0));
                                                      uVar4 = FUN_02b3c908(*unaff_x22,0);
                                                      if (0x13 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined8 *)(lVar6 + 0xb8) = uVar4;
                                                        thunk_FUN_02bb0e9c((undefined8 *)
                                                                           (lVar6 + 0xb8),uVar4);
                                                        uVar4 = FUN_02b3c908(*unaff_x22,0);
                                                        if (0x14 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined8 *)(lVar6 + 0xc0) = uVar4;
                                                          thunk_FUN_02bb0e9c((undefined8 *)
                                                                             (lVar6 + 0xc0),uVar4);
                                                          uVar4 = FUN_02b3c908(*unaff_x22,0);
                                                          if (0x15 < *(uint *)(lVar6 + 0x18)) {
                                                            *(undefined8 *)(lVar6 + 200) = uVar4;
                                                            thunk_FUN_02bb0e9c((undefined8 *)
                                                                               (lVar6 + 200),uVar4);
                                                            uVar4 = FUN_02b3c908(*unaff_x22,0);
                                                            if (0x16 < *(uint *)(lVar6 + 0x18)) {
                                                              *(undefined8 *)(lVar6 + 0xd0) = uVar4;
                                                              thunk_FUN_02bb0e9c((undefined8 *)
                                                                                 (lVar6 + 0xd0),
                                                                                 uVar4);
                                                              uVar4 = FUN_02b3c908(*unaff_x22,0);
                                                              puVar3 = 
                                                  System_Func<StructMultiKey<Type,_Type>,_Func<object,_object>>_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  System_Func<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0xd8) = uVar4;
                                                    thunk_FUN_02bb0e9c();
                                                    plVar8 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                     0x18);
                                                    *plVar8 = lVar6;
                                                    thunk_FUN_02bb0e9c(plVar8,lVar6);
                                                    lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_037550f8(lVar6,*(undefined8 *)puVar2);
                                                    puVar2 = 
                                                  System_Func<KeyValuePair<string,_JsonParser_JsonValue>,_string>_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Func<KeyValuePair<string,_JsonParser_JsonValue>,_string>_TypeInfo
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined4 *)
                                                       (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                    }
                                                    else {
                                                      FUN_03755988(lVar6,6,*(undefined8 *)
                                                                            (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_04f95ef0;
                                                  }
                                                  puVar2 = 
                                                  System_Func<ValueTuple<string,_Type>,_string>_TypeInfo
                                                  ;
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar6,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar8 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x20);
                                                  *plVar8 = lVar6;
                                                  thunk_FUN_02bb0e9c(plVar8,lVar6);
                                                  uVar4 = FUN_02b3c908(*unaff_x22,5);
                                                  FUN_04cac0f0(uVar4,*(undefined8 *)puVar2,0);
                                                  puVar5 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                                  *puVar5 = uVar4;
                                                  thunk_FUN_02bb0e9c(puVar5,uVar4);
                                                  return;
                                                  }
                                                  }
LAB_04f95ef0:
                    /* WARNING: Subroutine does not return */
                                                  FUN_02b3cac4();
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


