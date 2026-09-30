/*
FUNCTION_NAME: System.Text.RegularExpressions.RegexTree$$.ctor
ENTRY_POINT: 057a9fac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_3
*/


void System_Text_RegularExpressions_RegexTree___ctor(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
  FUN_057aca78(param_1,0,*unaff_x20,0);
  uVar7 = thunk_FUN_02f45270(*unaff_x22);
  FUN_057acc90(uVar7,0x39,param_1,0);
  if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar7;
    puVar2 = Method_System_Collections_Generic_List_Enumerator<ShaderContainer>_get_Current__;
    uVar7 = thunk_FUN_02f45270(*unaff_x23);
    FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
    uVar8 = thunk_FUN_02f45270(*unaff_x22);
    FUN_057acc90(uVar8,1,uVar7,0);
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = uVar8;
      puVar2 = Method_System_Collections_Generic_List_Enumerator<SeverityEntry>_get_Current__;
      uVar7 = *unaff_x24;
      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x108) = unaff_x19;
      lVar9 = FUN_02f0880c(uVar7,2);
      uVar7 = thunk_FUN_02f45270(*unaff_x23);
      FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
      uVar8 = thunk_FUN_02f45270(*unaff_x22);
      FUN_057acc90(uVar8,0x3c,uVar7,0);
      if (lVar9 == 0) goto LAB_057aca74;
      if (*(int *)(lVar9 + 0x18) != 0) {
        *(undefined8 *)(lVar9 + 0x20) = uVar8;
        uVar7 = thunk_FUN_02f45270(*unaff_x23);
        FUN_057aca78(uVar7,0,*unaff_x26,0);
        uVar8 = thunk_FUN_02f45270(*unaff_x22);
        FUN_057acc90(uVar8,0x16,uVar7,0);
        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar9 + 0x28) = uVar8;
          uVar7 = *unaff_x24;
          *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x110) = lVar9;
          lVar9 = FUN_02f0880c(uVar7,2);
          uVar7 = thunk_FUN_02f45270(*unaff_x23);
          FUN_057aca78(uVar7,0,*unaff_x26,0);
          uVar8 = thunk_FUN_02f45270(*unaff_x22);
          FUN_057acc90(uVar8,0x16,uVar7,0);
          if (lVar9 == 0) goto LAB_057aca74;
          if (*(int *)(lVar9 + 0x18) != 0) {
            *(undefined8 *)(lVar9 + 0x20) = uVar8;
            puVar2 = Method_System_Collections_Generic_List_Enumerator<ShaderContainer>_Dispose__;
            uVar7 = thunk_FUN_02f45270(*unaff_x23);
            FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
            uVar8 = thunk_FUN_02f45270(*unaff_x22);
            FUN_057acc90(uVar8,0x78,uVar7,0);
            if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar9 + 0x28) = uVar8;
              uVar7 = *unaff_x24;
              *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x118) = lVar9;
              lVar9 = FUN_02f0880c(uVar7,2);
              uVar7 = thunk_FUN_02f45270(*unaff_x23);
              FUN_057aca78(uVar7,0,*unaff_x26,0);
              uVar8 = thunk_FUN_02f45270(*unaff_x22);
              FUN_057acc90(uVar8,0x16,uVar7,0);
              if (lVar9 == 0) goto LAB_057aca74;
              if (*(int *)(lVar9 + 0x18) != 0) {
                *(undefined8 *)(lVar9 + 0x20) = uVar8;
                puVar2 = Method_System_Collections_Generic_List_Enumerator<SeverityEntry>_MoveNext__
                ;
                uVar7 = thunk_FUN_02f45270(*unaff_x23);
                FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                uVar8 = thunk_FUN_02f45270(*unaff_x22);
                FUN_057acc90(uVar8,0x77,uVar7,0);
                if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar9 + 0x28) = uVar8;
                  uVar7 = *unaff_x24;
                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x120) = lVar9;
                  lVar9 = FUN_02f0880c(uVar7,2);
                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                  FUN_057aca78(uVar7,0,*unaff_x26,0);
                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                  FUN_057acc90(uVar8,0x16,uVar7,0);
                  if (lVar9 == 0) goto LAB_057aca74;
                  if (*(int *)(lVar9 + 0x18) != 0) {
                    *(undefined8 *)(lVar9 + 0x20) = uVar8;
                    puVar2 = 
                    Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_get_Current__;
                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                    FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                    FUN_057acc90(uVar8,1,uVar7,0);
                    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar9 + 0x28) = uVar8;
                      uVar7 = *unaff_x24;
                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x128) = lVar9;
                      lVar9 = FUN_02f0880c(uVar7,2);
                      uVar7 = thunk_FUN_02f45270(*unaff_x23);
                      FUN_057aca78(uVar7,0,*unaff_x26,0);
                      uVar8 = thunk_FUN_02f45270(*unaff_x22);
                      FUN_057acc90(uVar8,0x16,uVar7,0);
                      if (lVar9 == 0) goto LAB_057aca74;
                      if (*(int *)(lVar9 + 0x18) != 0) {
                        *(undefined8 *)(lVar9 + 0x20) = uVar8;
                        puVar2 = 
                        Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_MoveNext__;
                        uVar7 = thunk_FUN_02f45270(*unaff_x23);
                        FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                        uVar8 = thunk_FUN_02f45270(*unaff_x22);
                        FUN_057acc90(uVar8,0x3b,uVar7,0);
                        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar9 + 0x28) = uVar8;
                          uVar7 = *unaff_x24;
                          *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x130) = lVar9;
                          lVar9 = FUN_02f0880c(uVar7,2);
                          uVar7 = thunk_FUN_02f45270(*unaff_x23);
                          FUN_057aca78(uVar7,0,*unaff_x26,0);
                          uVar8 = thunk_FUN_02f45270(*unaff_x22);
                          FUN_057acc90(uVar8,0x16,uVar7,0);
                          if (lVar9 == 0) goto LAB_057aca74;
                          if (*(int *)(lVar9 + 0x18) != 0) {
                            *(undefined8 *)(lVar9 + 0x20) = uVar8;
                            puVar2 = 
                            Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_MoveNext__
                            ;
                            uVar7 = thunk_FUN_02f45270(*unaff_x23);
                            FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                            uVar8 = thunk_FUN_02f45270(*unaff_x22);
                            FUN_057acc90(uVar8,1,uVar7,0);
                            if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                              *(undefined8 *)(lVar9 + 0x28) = uVar8;
                              uVar7 = *unaff_x24;
                              *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x138) = lVar9;
                              lVar9 = FUN_02f0880c(uVar7,4);
                              uVar7 = thunk_FUN_02f45270(*unaff_x23);
                              FUN_057aca78(uVar7,0,*unaff_x26,0);
                              uVar8 = thunk_FUN_02f45270(*unaff_x22);
                              FUN_057acc90(uVar8,0x16,uVar7,0);
                              if (lVar9 == 0) goto LAB_057aca74;
                              if (*(int *)(lVar9 + 0x18) != 0) {
                                *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                puVar2 = 
                                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                                ;
                                uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                FUN_057acc90(uVar8,3,uVar7,0);
                                if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                  *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                  puVar3 = 
                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_get_Current__
                                  ;
                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar3,0);
                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                  FUN_057acc90(uVar8,4,uVar7,0);
                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                    puVar4 = 
                                    Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_Dispose__
                                    ;
                                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                    FUN_057aca78(uVar7,0,*(undefined8 *)puVar4,0);
                                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                    FUN_057acc90(uVar8,0x3b,uVar7,0);
                                    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                                      *(undefined8 *)(lVar9 + 0x38) = uVar8;
                                      uVar7 = *unaff_x24;
                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x140) = lVar9;
                                      lVar9 = FUN_02f0880c(uVar7,3);
                                      uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                      FUN_057aca78(uVar7,0,*unaff_x26,0);
                                      uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                      FUN_057acc90(uVar8,0x16,uVar7,0);
                                      if (lVar9 == 0) goto LAB_057aca74;
                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                        *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                        uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                        FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                        uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                        FUN_057acc90(uVar8,3,uVar7,0);
                                        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                          *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                          uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                          FUN_057aca78(uVar7,0,*(undefined8 *)puVar3,0);
                                          uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                          FUN_057acc90(uVar8,4,uVar7,0);
                                          if (2 < *(uint *)(lVar9 + 0x18)) {
                                            *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                            uVar7 = *unaff_x24;
                                            *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x148) = lVar9;
                                            lVar9 = FUN_02f0880c(uVar7,5);
                                            uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                            FUN_057aca78(uVar7,0,*unaff_x26,0);
                                            uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                            FUN_057acc90(uVar8,0x16,uVar7,0);
                                            if (lVar9 == 0) goto LAB_057aca74;
                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                              *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                              uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                              FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                              uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                              FUN_057acc90(uVar8,3,uVar7,0);
                                              if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                FUN_057aca78(uVar7,0,*(undefined8 *)puVar3,0);
                                                uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                FUN_057acc90(uVar8,4,uVar7,0);
                                                if (2 < *(uint *)(lVar9 + 0x18)) {
                                                  *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<QueryExpression>_MoveNext__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x3e,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x38) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<QueryExpression>_get_Current__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x3f,uVar7,0);
                                                  if (4 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x40) = uVar8;
                                                    uVar7 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x150)
                                                         = lVar9;
                                                    lVar9 = FUN_02f0880c(uVar7,3);
                                                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_get_Current__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,1,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_Dispose__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x40,uVar7,0);
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    uVar7 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x158)
                                                         = lVar9;
                                                    lVar9 = FUN_02f0880c(uVar7,2);
                                                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_MoveNext__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x79,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    uVar7 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x160)
                                                         = lVar9;
                                                    lVar9 = FUN_02f0880c(uVar7,2);
                                                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_get_Current__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x79,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    uVar7 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x168)
                                                         = lVar9;
                                                    lVar9 = FUN_02f0880c(uVar7,4);
                                                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_MoveNext__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,1,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_get_Current__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x41,uVar7,0);
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_Dispose__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x42,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x38) = uVar8;
                                                    uVar7 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x170)
                                                         = lVar9;
                                                    lVar9 = FUN_02f0880c(uVar7,2);
                                                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_Dispose__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x43,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    uVar7 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x178)
                                                         = lVar9;
                                                    lVar9 = FUN_02f0880c(uVar7,3);
                                                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_MoveNext__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x3e,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_get_Current__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x43,uVar7,0);
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    uVar7 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x180)
                                                         = lVar9;
                                                    lVar9 = FUN_02f0880c(uVar7,3);
                                                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_Dispose__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x35,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_MoveNext__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x44,uVar7,0);
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    uVar7 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                         = lVar9;
                                                    lVar9 = FUN_02f0880c(uVar7,3);
                                                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<PropertyPath>_get_Current__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x3e,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<QueryExpression>_Dispose__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x3f,uVar7,0);
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_Dispose__
                                                  ;
                                                  uVar7 = *unaff_x24;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 400) =
                                                       lVar9;
                                                  lVar9 = FUN_02f0880c(uVar7,2);
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x45,uVar7,0);
                                                  if (lVar9 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_MoveNext__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x7a,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_Dispose__
                                                  ;
                                                  uVar7 = *unaff_x24;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x198) =
                                                       lVar9;
                                                  lVar9 = FUN_02f0880c(uVar7,1);
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x45,uVar7,0);
                                                  if (lVar9 == 0) {
LAB_057aca74:
                    /* WARNING: Subroutine does not return */
                                                    FUN_02f089c8();
                                                  }
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                    uVar7 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a0)
                                                         = lVar9;
                                                    lVar9 = FUN_02f0880c(uVar7,2);
                                                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_Dispose__
                                                  ;
                                                  uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar8,0x43,uVar7,0);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    uVar7 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a8)
                                                         = lVar9;
                                                    lVar9 = FUN_02f0880c(uVar7,1);
                                                    uVar7 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Panel>_MoveNext__
                                                  ;
                                                  uVar7 = *(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_List_Enumerator<TcpClient>_get_Current__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b0) =
                                                       lVar9;
                                                  lVar9 = FUN_02f0880c(uVar7,0x30);
                                                  uVar8 = **(undefined8 **)(*unaff_x25 + 0xb8);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar7,0,0,uVar8,0,0,0,1);
                                                  if (lVar9 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar7;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 8);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb8);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__
                                                  );
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x4a,1,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa8);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1b0);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x4b,2,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x178);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x4c,3,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x38) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x180);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x4d,4,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (4 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x40) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x18);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 200);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x4e,5,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (5 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x48) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x10);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xc0);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x4f,6,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (6 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x50) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x80);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x128);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x50,7,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x58) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x130);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x50,8,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (8 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x60) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 400);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x51,9,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (9 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x68) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x88);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x138);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x52,10,uVar10,uVar11,uVar7,0,1
                                                              );
                                                  if (10 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x70) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x140);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x52,0xb,uVar10,uVar11,uVar7,0,
                                                               1);
                                                  if (0xb < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x78) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x90);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x53,0xc,uVar10,uVar11,uVar7,0,
                                                               1);
                                                  if (0xc < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x80) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x54,0xd,uVar10,uVar11,uVar7,0,
                                                               1);
                                                  if (0xd < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x88) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x55,0xe,uVar10,uVar11,uVar7,0,
                                                               1);
                                                  if (0xe < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x90) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x150);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x56,0xf,uVar10,uVar11,uVar7,0,
                                                               1);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffff0) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x98) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x170);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x57,0x10,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x10 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xa0) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<TcpClient>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x58);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x108);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x58,0x11,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x11 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xa8) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x20);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd0);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x59,0x12,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x12 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xb0) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x40);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf0);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x6c,0x13,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x13 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xb8) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x50);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x100);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x6e,0x14,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x14 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xc0) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x48);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf8);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x6d,0x15,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x15 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 200) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x28);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd8);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x6f,0x16,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x16 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xd0) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x30);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe0);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x70,0x17,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x17 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xd8) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x38);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe8);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x71,0x18,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x18 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xe0) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x70);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x118);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x74,0x19,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x19 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xe8) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x68);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x120);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x72,0x1a,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x1a < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xf0) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x60);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x110);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x73,0x1b,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x1b < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xf8) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x158);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x5a,0x1c,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x1c < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x100) = uVar8;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x158)
                                                    ;
                                                    uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                    uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_057accc0(uVar8,0x5b,0x1d,uVar10,uVar11,uVar7
                                                                 ,0,1);
                                                    if (0x1d < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x108) = uVar8;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xa0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x158);
                                                      uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                      uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_057accc0(uVar8,0x5c,0x1e,uVar10,uVar11,
                                                                   uVar7,0,1);
                                                      if (0x1e < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x110) = uVar8;
                                                        puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x160);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x5d,0x1f,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if ((*(uint *)(lVar9 + 0x18) & 0xffffffe0) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x118) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x168);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x5e,0x20,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x20 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x120) = uVar8;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x188);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x5f,0x21,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x21 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x128) = uVar8;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                    uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_057accc0(uVar8,0x60,0x22,uVar10,uVar11,uVar7
                                                                 ,0,1);
                                                    if (0x22 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x130) = uVar8;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                      uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_057accc0(uVar8,0x61,0x23,uVar10,uVar11,
                                                                   uVar7,0,1);
                                                      if (0x23 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x138) = uVar8;
                                                        uVar10 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar11 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                    puVar2);
                                                        FUN_057accc0(uVar8,0x62,0x24,uVar10,uVar11,
                                                                     uVar7,0,1);
                                                        if (0x24 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x140) = uVar8;
                                                          uVar10 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar11 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                      puVar2);
                                                          FUN_057accc0(uVar8,99,0x25,uVar10,uVar11,
                                                                       uVar7,0,1);
                                                          if (0x25 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x148) = uVar8;
                                                            uVar10 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar11 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar7 = thunk_FUN_02f45270(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_057acb2c(uVar7,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar8 = thunk_FUN_02f45270(*(undefined8
                                                                                         *)puVar2);
                                                            FUN_057accc0(uVar8,100,0x26,uVar10,
                                                                         uVar11,uVar7,0,1);
                                                            if (0x26 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x150) = uVar8
                                                              ;
                                                              uVar10 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0xb0);
                                                              uVar11 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0x188);
                                                              uVar7 = thunk_FUN_02f45270(*(
                                                  undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0x65,0x27,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x27 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x158) = uVar8;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                    uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_057accc0(uVar8,0x66,0x28,uVar10,uVar11,uVar7
                                                                 ,0,1);
                                                    if (0x28 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x160) = uVar8;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0);
                                                      uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_057accc0(uVar8,0x67,0x29,uVar10,uVar11,
                                                                   uVar7,0,1);
                                                      if (0x29 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x168) = uVar8;
                                                        uVar10 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar11 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                    puVar2);
                                                        FUN_057accc0(uVar8,0x68,0x2a,uVar10,uVar11,
                                                                     uVar7,0,1);
                                                        if (0x2a < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x170) = uVar8;
                                                          uVar10 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar11 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_057acb2c(uVar7,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                      puVar2);
                                                          FUN_057accc0(uVar8,0x69,0x2b,uVar10,uVar11
                                                                       ,uVar7,0,1);
                                                          if (0x2b < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x178) = uVar8;
                                                            uVar10 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar11 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar7 = thunk_FUN_02f45270(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_057acb2c(uVar7,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar8 = thunk_FUN_02f45270(*(undefined8
                                                                                         *)puVar2);
                                                            FUN_057accc0(uVar8,0x75,0x2c,uVar10,
                                                                         uVar11,uVar7,0,1);
                                                            if (0x2c < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x180) = uVar8
                                                              ;
                                                              puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<TcpClient>_MoveNext__
                                                  ;
                                                  puVar5 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_MoveNext__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_Dispose__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1a0);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar5,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                                  FUN_057acbe0(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x6b,0x2d,0,uVar11,uVar7,uVar8
                                                               ,0);
                                                  if (0x2d < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x188) = uVar10;
                                                    puVar5 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_MoveNext__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x198);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar5,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                                  FUN_057acbe0(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x6a,0x2e,0,uVar11,uVar7,uVar8
                                                               ,0);
                                                  if (0x2e < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 400) = uVar10;
                                                    puVar5 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_get_Current__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_get_Current__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x78);
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1a8);
                                                  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar7,0,*(undefined8 *)puVar5,0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                                  FUN_057acbe0(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x76,0x2f,uVar11,uVar12,uVar7,
                                                               uVar8,1);
                                                  if (0x2f < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x198) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<PokeInteractor>_MoveNext__
                                                  ;
                                                  puVar2 = PTR_DAT_067c9070;
                                                  uVar7 = *(undefined8 *)PTR_DAT_067cb890;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b8) =
                                                       lVar9;
                                                  uVar7 = FUN_02f0880c(uVar7,6);
                                                  FUN_05009b54(uVar7,*(undefined8 *)puVar3,0);
                                                  uVar8 = *(undefined8 *)puVar2;
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x25 + 0xb8) + 0x1c0) = uVar7;
                                                  lVar9 = FUN_02f0880c(uVar8,6);
                                                  if (lVar9 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if ((((uVar1 != 0) &&
                                                       (*(undefined8 *)(lVar9 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_get_Current__
                                                  , (uVar1 & 0xfffffffe) != 0)) &&
                                                  (*(undefined8 *)(lVar9 + 0x28) =
                                                        *(undefined8 *)PTR_DAT_067d4de8, 2 < uVar1))
                                                  && (((*(undefined8 *)(lVar9 + 0x30) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float3>_Awake__
                                                  , (uVar1 & 0xfffffffc) != 0 &&
                                                  (*(undefined8 *)(lVar9 + 0x38) =
                                                        *(undefined8 *)PTR_DAT_067caa08, 4 < uVar1))
                                                  && (*(undefined8 *)(lVar9 + 0x40) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<ARContactSpawnTrigger>_Dispose__
                                                  , uVar1 != 5)))) {
                                                    *(undefined8 *)(lVar9 + 0x48) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_Dispose__
                                                  ;
                                                  uVar7 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1c8) =
                                                       lVar9;
                                                  lVar9 = FUN_02f0880c(uVar7,2);
                                                  if (lVar9 == 0) goto LAB_057aca74;
                                                  if ((*(uint *)(lVar9 + 0x18) != 0) &&
                                                     (*(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__
                                                  , (*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0)) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                                                  ;
                                                  uVar7 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d0) =
                                                       lVar9;
                                                  lVar9 = FUN_02f0880c(uVar7,3);
                                                  if (lVar9 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar9 + 0x20) =
                                                            *(undefined8 *)PTR_DAT_067cd728,
                                                      (uVar1 & 0xfffffffe) != 0)) &&
                                                     (*(undefined8 *)(lVar9 + 0x28) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_set_Item__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar9 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_IEnumerator<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
                                                  ;
                                                  uVar7 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d8) =
                                                       lVar9;
                                                  lVar9 = FUN_02f0880c(uVar7,3);
                                                  if (lVar9 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar9 + 0x20) =
                                                            *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_get_Current__
                                                  , (uVar1 & 0xfffffffe) != 0)) &&
                                                  (*(undefined8 *)(lVar9 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_MoveNext__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar9 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_MoveNext__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1e0) =
                                                       lVar9;
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
  FUN_02f089d0();
}


