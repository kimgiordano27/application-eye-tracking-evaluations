/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$.cctor
ENTRY_POINT: 04f94f9c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  thunk_FUN_02bb0e9c();
  uVar8 = FUN_02b3c908(*unaff_x22,4);
  FUN_04cac0f0(uVar8,*unaff_x23,0);
  lVar12 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar2 = System_Func<Task<DependencyStatus>,_Task<DependencyStatus>>_TypeInfo;
  if (lVar12 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
      *puVar9 = uVar8;
      thunk_FUN_02bb0e9c(puVar9,uVar8);
    }
    else {
      FUN_037a6538();
    }
    uVar8 = FUN_02b3c908(*unaff_x22,4);
    FUN_04cac0f0(uVar8,*(undefined8 *)puVar2,0);
    lVar12 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar2 = System_Func<ValueTuple<EventModifiers,_char>,_EventBase>_TypeInfo;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar9 = uVar8;
        thunk_FUN_02bb0e9c(puVar9,uVar8);
      }
      else {
        FUN_037a6538();
      }
      uVar8 = FUN_02b3c908(*unaff_x22,4);
      FUN_04cac0f0(uVar8,*(undefined8 *)puVar2,0);
      lVar12 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      puVar2 = System_Func<ValueTuple<EventModifiers,_KeyCode>,_EventBase>_TypeInfo;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar8;
          thunk_FUN_02bb0e9c(puVar9,uVar8);
        }
        else {
          FUN_037a6538();
        }
        uVar8 = FUN_02b3c908(*unaff_x22,5);
        FUN_04cac0f0(uVar8,*(undefined8 *)puVar2,0);
        lVar12 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        puVar7 = 
        System_Func<ValueTuple<Vector2,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo;
        puVar6 = System_Func<ValueTuple<NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo;
        puVar5 = 
        System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
        ;
        puVar4 = System_Func<KeyValuePair<string,_string>,_string>_TypeInfo;
        puVar3 = System_Func<KeyValuePair<string,_JSONNode>,_bool>_TypeInfo;
        puVar2 = System_Collections_IDictionary_var;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar8;
            thunk_FUN_02bb0e9c(puVar9,uVar8);
          }
          else {
            FUN_037a6538();
          }
          **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
          thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar2 + 0xb8));
          uVar8 = FUN_02b3c908(*(undefined8 *)puVar3,0x18);
          FUN_04cac0f0(uVar8,*(undefined8 *)puVar7,0);
          puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *puVar9 = uVar8;
          thunk_FUN_02bb0e9c(puVar9,uVar8);
          uVar8 = FUN_02b3c908(*unaff_x22,0x18);
          FUN_04cac0f0(uVar8,*(undefined8 *)puVar6,0);
          puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *puVar9 = uVar8;
          thunk_FUN_02bb0e9c(puVar9,uVar8);
          lVar12 = FUN_02b3c908(*(undefined8 *)puVar4,0x18);
          uVar8 = FUN_02b3c908(*unaff_x22,6);
          FUN_04cac0f0(uVar8,*(undefined8 *)puVar5,0);
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x18) != 0) {
              *(undefined8 *)(lVar12 + 0x20) = uVar8;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20),uVar8);
              uVar8 = FUN_02b3c908(*unaff_x22,0);
              if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar12 + 0x28) = uVar8;
                thunk_FUN_02bb0e9c();
                lVar10 = FUN_02b3c908(*unaff_x22,1);
                if (lVar10 == 0) goto LAB_04f95ef0;
                if (*(int *)(lVar10 + 0x18) != 0) {
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  *(undefined4 *)(lVar10 + 0x20) = 3;
                  if (2 < uVar1) {
                    *(long *)(lVar12 + 0x30) = lVar10;
                    thunk_FUN_02bb0e9c();
                    lVar10 = FUN_02b3c908(*unaff_x22,1);
                    if (lVar10 == 0) goto LAB_04f95ef0;
                    if (*(int *)(lVar10 + 0x18) != 0) {
                      *(undefined4 *)(lVar10 + 0x20) = 4;
                      if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) != 0) {
                        *(long *)(lVar12 + 0x38) = lVar10;
                        thunk_FUN_02bb0e9c();
                        lVar10 = FUN_02b3c908(*unaff_x22,1);
                        if (lVar10 == 0) goto LAB_04f95ef0;
                        if (*(int *)(lVar10 + 0x18) != 0) {
                          uVar1 = *(uint *)(lVar12 + 0x18);
                          *(undefined4 *)(lVar10 + 0x20) = 5;
                          if (4 < uVar1) {
                            *(long *)(lVar12 + 0x40) = lVar10;
                            thunk_FUN_02bb0e9c();
                            lVar10 = FUN_02b3c908(*unaff_x22,1);
                            if (lVar10 == 0) goto LAB_04f95ef0;
                            if (*(int *)(lVar10 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar12 + 0x18);
                              *(undefined4 *)(lVar10 + 0x20) = 0x13;
                              if (5 < uVar1) {
                                *(long *)(lVar12 + 0x48) = lVar10;
                                thunk_FUN_02bb0e9c();
                                lVar10 = FUN_02b3c908(*unaff_x22,1);
                                if (lVar10 == 0) goto LAB_04f95ef0;
                                if (*(int *)(lVar10 + 0x18) != 0) {
                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                  *(undefined4 *)(lVar10 + 0x20) = 7;
                                  if (6 < uVar1) {
                                    *(long *)(lVar12 + 0x50) = lVar10;
                                    thunk_FUN_02bb0e9c();
                                    lVar10 = FUN_02b3c908(*unaff_x22,1);
                                    if (lVar10 == 0) goto LAB_04f95ef0;
                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                      *(undefined4 *)(lVar10 + 0x20) = 8;
                                      if ((*(uint *)(lVar12 + 0x18) & 0xfffffff8) != 0) {
                                        *(long *)(lVar12 + 0x58) = lVar10;
                                        thunk_FUN_02bb0e9c();
                                        lVar10 = FUN_02b3c908(*unaff_x22,1);
                                        if (lVar10 == 0) goto LAB_04f95ef0;
                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                          uVar1 = *(uint *)(lVar12 + 0x18);
                                          *(undefined4 *)(lVar10 + 0x20) = 0x14;
                                          if (8 < uVar1) {
                                            *(long *)(lVar12 + 0x60) = lVar10;
                                            thunk_FUN_02bb0e9c();
                                            lVar10 = FUN_02b3c908(*unaff_x22,1);
                                            if (lVar10 == 0) goto LAB_04f95ef0;
                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                              uVar1 = *(uint *)(lVar12 + 0x18);
                                              *(undefined4 *)(lVar10 + 0x20) = 10;
                                              if (9 < uVar1) {
                                                *(long *)(lVar12 + 0x68) = lVar10;
                                                thunk_FUN_02bb0e9c();
                                                lVar10 = FUN_02b3c908(*unaff_x22,1);
                                                if (lVar10 == 0) goto LAB_04f95ef0;
                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  *(undefined4 *)(lVar10 + 0x20) = 0xb;
                                                  if (10 < uVar1) {
                                                    *(long *)(lVar12 + 0x70) = lVar10;
                                                    thunk_FUN_02bb0e9c();
                                                    lVar10 = FUN_02b3c908(*unaff_x22,1);
                                                    if (lVar10 == 0) goto LAB_04f95ef0;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      *(undefined4 *)(lVar10 + 0x20) = 0x15;
                                                      if (0xb < uVar1) {
                                                        *(long *)(lVar12 + 0x78) = lVar10;
                                                        thunk_FUN_02bb0e9c();
                                                        lVar10 = FUN_02b3c908(*unaff_x22,1);
                                                        if (lVar10 == 0) goto LAB_04f95ef0;
                                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar12 + 0x18);
                                                          *(undefined4 *)(lVar10 + 0x20) = 0xd;
                                                          if (0xc < uVar1) {
                                                            *(long *)(lVar12 + 0x80) = lVar10;
                                                            thunk_FUN_02bb0e9c();
                                                            lVar10 = FUN_02b3c908(*unaff_x22,1);
                                                            if (lVar10 == 0) goto LAB_04f95ef0;
                                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar12 + 0x18);
                                                              *(undefined4 *)(lVar10 + 0x20) = 0xe;
                                                              if (0xd < uVar1) {
                                                                *(long *)(lVar12 + 0x88) = lVar10;
                                                                thunk_FUN_02bb0e9c();
                                                                lVar10 = FUN_02b3c908(*unaff_x22,1);
                                                                if (lVar10 == 0) goto LAB_04f95ef0;
                                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                                  *(undefined4 *)(lVar10 + 0x20) =
                                                                       0x16;
                                                                  if (0xe < uVar1) {
                                                                    *(long *)(lVar12 + 0x90) =
                                                                         lVar10;
                                                                    thunk_FUN_02bb0e9c();
                                                                    lVar10 = FUN_02b3c908(*unaff_x22
                                                                                          ,1);
                                                                    if (lVar10 == 0)
                                                                    goto LAB_04f95ef0;
                                                                    if (*(int *)(lVar10 + 0x18) != 0
                                                                       ) {
                                                                      *(undefined4 *)(lVar10 + 0x20)
                                                                           = 0x10;
                                                                      if ((*(uint *)(lVar12 + 0x18)
                                                                          & 0xfffffff0) != 0) {
                                                                        *(long *)(lVar12 + 0x98) =
                                                                             lVar10;
                                                                        thunk_FUN_02bb0e9c();
                                                                        lVar10 = FUN_02b3c908(*
                                                  unaff_x22,1);
                                                  if (lVar10 == 0) goto LAB_04f95ef0;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x11;
                                                    if (0x10 < uVar1) {
                                                      *(long *)(lVar12 + 0xa0) = lVar10;
                                                      thunk_FUN_02bb0e9c();
                                                      lVar10 = FUN_02b3c908(*unaff_x22,1);
                                                      if (lVar10 == 0) goto LAB_04f95ef0;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        *(undefined4 *)(lVar10 + 0x20) = 0x12;
                                                        if (0x11 < uVar1) {
                                                          *(long *)(lVar12 + 0xa8) = lVar10;
                                                          thunk_FUN_02bb0e9c();
                                                          lVar10 = FUN_02b3c908(*unaff_x22,1);
                                                          if (lVar10 == 0) goto LAB_04f95ef0;
                                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar12 + 0x18);
                                                            *(undefined4 *)(lVar10 + 0x20) = 0x17;
                                                            if (0x12 < uVar1) {
                                                              *(long *)(lVar12 + 0xb0) = lVar10;
                                                              thunk_FUN_02bb0e9c((long *)(lVar12 + 
                                                  0xb0));
                                                  uVar8 = FUN_02b3c908(*unaff_x22,0);
                                                  if (0x13 < *(uint *)(lVar12 + 0x18)) {
                                                    *(undefined8 *)(lVar12 + 0xb8) = uVar8;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0xb8)
                                                                       ,uVar8);
                                                    uVar8 = FUN_02b3c908(*unaff_x22,0);
                                                    if (0x14 < *(uint *)(lVar12 + 0x18)) {
                                                      *(undefined8 *)(lVar12 + 0xc0) = uVar8;
                                                      thunk_FUN_02bb0e9c((undefined8 *)
                                                                         (lVar12 + 0xc0),uVar8);
                                                      uVar8 = FUN_02b3c908(*unaff_x22,0);
                                                      if (0x15 < *(uint *)(lVar12 + 0x18)) {
                                                        *(undefined8 *)(lVar12 + 200) = uVar8;
                                                        thunk_FUN_02bb0e9c((undefined8 *)
                                                                           (lVar12 + 200),uVar8);
                                                        uVar8 = FUN_02b3c908(*unaff_x22,0);
                                                        if (0x16 < *(uint *)(lVar12 + 0x18)) {
                                                          *(undefined8 *)(lVar12 + 0xd0) = uVar8;
                                                          thunk_FUN_02bb0e9c((undefined8 *)
                                                                             (lVar12 + 0xd0),uVar8);
                                                          uVar8 = FUN_02b3c908(*unaff_x22,0);
                                                          puVar4 = 
                                                  System_Func<StructMultiKey<Type,_Type>,_Func<object,_object>>_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  System_Func<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(lVar12 + 0x18)) {
                                                    *(undefined8 *)(lVar12 + 0xd8) = uVar8;
                                                    thunk_FUN_02bb0e9c();
                                                    plVar11 = (long *)(*(long *)(*(long *)puVar2 +
                                                                                0xb8) + 0x18);
                                                    *plVar11 = lVar12;
                                                    thunk_FUN_02bb0e9c(plVar11,lVar12);
                                                    lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_037550f8(lVar12,*(undefined8 *)puVar3);
                                                    puVar3 = 
                                                  System_Func<KeyValuePair<string,_JsonParser_JsonValue>,_string>_TypeInfo
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)
                                                  System_Func<KeyValuePair<string,_JsonParser_JsonValue>,_string>_TypeInfo
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined4 *)
                                                       (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                    }
                                                    else {
                                                      FUN_03755988(lVar12,6,*(undefined8 *)
                                                                             (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_04f95ef0;
                                                  }
                                                  puVar3 = 
                                                  System_Func<ValueTuple<string,_Type>,_string>_TypeInfo
                                                  ;
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar12,5,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar11 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar11 = lVar12;
                                                  thunk_FUN_02bb0e9c(plVar11,lVar12);
                                                  uVar8 = FUN_02b3c908(*unaff_x22,5);
                                                  FUN_04cac0f0(uVar8,*(undefined8 *)puVar3,0);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x28
                                                           );
                                                  *puVar9 = uVar8;
                                                  thunk_FUN_02bb0e9c(puVar9,uVar8);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_04f95ef0;
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
        }
      }
    }
  }
LAB_04f95ef0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


