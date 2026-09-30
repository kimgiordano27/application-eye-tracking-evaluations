/*
FUNCTION_NAME: System.Text.RegularExpressions.RegexReplacement$$.ctor
ENTRY_POINT: 057aa278
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_3
*/


void System_Text_RegularExpressions_RegexReplacement___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
  lVar7 = FUN_02f0880c();
  uVar8 = thunk_FUN_02f45270(*unaff_x23);
  FUN_057aca78(uVar8,0,*unaff_x26,0);
  uVar9 = thunk_FUN_02f45270(*unaff_x22);
  FUN_057acc90(uVar9,0x16,uVar8,0);
  if (lVar7 == 0) goto LAB_057aca74;
  if (*(int *)(lVar7 + 0x18) != 0) {
    *(undefined8 *)(lVar7 + 0x20) = uVar9;
    puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_get_Current__;
    uVar8 = thunk_FUN_02f45270(*unaff_x23);
    FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
    uVar9 = thunk_FUN_02f45270(*unaff_x22);
    FUN_057acc90(uVar9,1,uVar8,0);
    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar7 + 0x28) = uVar9;
      uVar8 = *unaff_x24;
      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x128) = lVar7;
      lVar7 = FUN_02f0880c(uVar8,2);
      uVar8 = thunk_FUN_02f45270(*unaff_x23);
      FUN_057aca78(uVar8,0,*unaff_x26,0);
      uVar9 = thunk_FUN_02f45270(*unaff_x22);
      FUN_057acc90(uVar9,0x16,uVar8,0);
      if (lVar7 == 0) goto LAB_057aca74;
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined8 *)(lVar7 + 0x20) = uVar9;
        puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_MoveNext__;
        uVar8 = thunk_FUN_02f45270(*unaff_x23);
        FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
        uVar9 = thunk_FUN_02f45270(*unaff_x22);
        FUN_057acc90(uVar9,0x3b,uVar8,0);
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar7 + 0x28) = uVar9;
          uVar8 = *unaff_x24;
          *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x130) = lVar7;
          lVar7 = FUN_02f0880c(uVar8,2);
          uVar8 = thunk_FUN_02f45270(*unaff_x23);
          FUN_057aca78(uVar8,0,*unaff_x26,0);
          uVar9 = thunk_FUN_02f45270(*unaff_x22);
          FUN_057acc90(uVar9,0x16,uVar8,0);
          if (lVar7 == 0) goto LAB_057aca74;
          if (*(int *)(lVar7 + 0x18) != 0) {
            *(undefined8 *)(lVar7 + 0x20) = uVar9;
            puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_MoveNext__;
            uVar8 = thunk_FUN_02f45270(*unaff_x23);
            FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
            uVar9 = thunk_FUN_02f45270(*unaff_x22);
            FUN_057acc90(uVar9,1,uVar8,0);
            if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar7 + 0x28) = uVar9;
              uVar8 = *unaff_x24;
              *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x138) = lVar7;
              lVar7 = FUN_02f0880c(uVar8,4);
              uVar8 = thunk_FUN_02f45270(*unaff_x23);
              FUN_057aca78(uVar8,0,*unaff_x26,0);
              uVar9 = thunk_FUN_02f45270(*unaff_x22);
              FUN_057acc90(uVar9,0x16,uVar8,0);
              if (lVar7 == 0) goto LAB_057aca74;
              if (*(int *)(lVar7 + 0x18) != 0) {
                *(undefined8 *)(lVar7 + 0x20) = uVar9;
                puVar2 = 
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                ;
                uVar8 = thunk_FUN_02f45270(*unaff_x23);
                FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                uVar9 = thunk_FUN_02f45270(*unaff_x22);
                FUN_057acc90(uVar9,3,uVar8,0);
                if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar7 + 0x28) = uVar9;
                  puVar3 = 
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_get_Current__
                  ;
                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar3,0);
                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                  FUN_057acc90(uVar9,4,uVar8,0);
                  if (2 < *(uint *)(lVar7 + 0x18)) {
                    *(undefined8 *)(lVar7 + 0x30) = uVar9;
                    puVar4 = 
                    Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_Dispose__;
                    uVar8 = thunk_FUN_02f45270(*unaff_x23);
                    FUN_057aca78(uVar8,0,*(undefined8 *)puVar4,0);
                    uVar9 = thunk_FUN_02f45270(*unaff_x22);
                    FUN_057acc90(uVar9,0x3b,uVar8,0);
                    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                      *(undefined8 *)(lVar7 + 0x38) = uVar9;
                      uVar8 = *unaff_x24;
                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x140) = lVar7;
                      lVar7 = FUN_02f0880c(uVar8,3);
                      uVar8 = thunk_FUN_02f45270(*unaff_x23);
                      FUN_057aca78(uVar8,0,*unaff_x26,0);
                      uVar9 = thunk_FUN_02f45270(*unaff_x22);
                      FUN_057acc90(uVar9,0x16,uVar8,0);
                      if (lVar7 == 0) goto LAB_057aca74;
                      if (*(int *)(lVar7 + 0x18) != 0) {
                        *(undefined8 *)(lVar7 + 0x20) = uVar9;
                        uVar8 = thunk_FUN_02f45270(*unaff_x23);
                        FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                        uVar9 = thunk_FUN_02f45270(*unaff_x22);
                        FUN_057acc90(uVar9,3,uVar8,0);
                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar7 + 0x28) = uVar9;
                          uVar8 = thunk_FUN_02f45270(*unaff_x23);
                          FUN_057aca78(uVar8,0,*(undefined8 *)puVar3,0);
                          uVar9 = thunk_FUN_02f45270(*unaff_x22);
                          FUN_057acc90(uVar9,4,uVar8,0);
                          if (2 < *(uint *)(lVar7 + 0x18)) {
                            *(undefined8 *)(lVar7 + 0x30) = uVar9;
                            uVar8 = *unaff_x24;
                            *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x148) = lVar7;
                            lVar7 = FUN_02f0880c(uVar8,5);
                            uVar8 = thunk_FUN_02f45270(*unaff_x23);
                            FUN_057aca78(uVar8,0,*unaff_x26,0);
                            uVar9 = thunk_FUN_02f45270(*unaff_x22);
                            FUN_057acc90(uVar9,0x16,uVar8,0);
                            if (lVar7 == 0) goto LAB_057aca74;
                            if (*(int *)(lVar7 + 0x18) != 0) {
                              *(undefined8 *)(lVar7 + 0x20) = uVar9;
                              uVar8 = thunk_FUN_02f45270(*unaff_x23);
                              FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                              uVar9 = thunk_FUN_02f45270(*unaff_x22);
                              FUN_057acc90(uVar9,3,uVar8,0);
                              if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                FUN_057aca78(uVar8,0,*(undefined8 *)puVar3,0);
                                uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                FUN_057acc90(uVar9,4,uVar8,0);
                                if (2 < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                  puVar2 = 
                                  Method_System_Collections_Generic_List_Enumerator<QueryExpression>_MoveNext__
                                  ;
                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                  FUN_057acc90(uVar9,0x3e,uVar8,0);
                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                                    *(undefined8 *)(lVar7 + 0x38) = uVar9;
                                    puVar2 = 
                                    Method_System_Collections_Generic_List_Enumerator<QueryExpression>_get_Current__
                                    ;
                                    uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                    FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                    uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                    FUN_057acc90(uVar9,0x3f,uVar8,0);
                                    if (4 < *(uint *)(lVar7 + 0x18)) {
                                      *(undefined8 *)(lVar7 + 0x40) = uVar9;
                                      uVar8 = *unaff_x24;
                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x150) = lVar7;
                                      lVar7 = FUN_02f0880c(uVar8,3);
                                      uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                      FUN_057aca78(uVar8,0,*unaff_x26,0);
                                      uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                      FUN_057acc90(uVar9,0x16,uVar8,0);
                                      if (lVar7 == 0) goto LAB_057aca74;
                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                        *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                        puVar2 = 
                                        Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_get_Current__
                                        ;
                                        uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                        FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                        uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                        FUN_057acc90(uVar9,1,uVar8,0);
                                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                          *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                          puVar2 = 
                                          Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_Dispose__
                                          ;
                                          uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                          FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                          uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                          FUN_057acc90(uVar9,0x40,uVar8,0);
                                          if (2 < *(uint *)(lVar7 + 0x18)) {
                                            *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                            uVar8 = *unaff_x24;
                                            *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x158) = lVar7;
                                            lVar7 = FUN_02f0880c(uVar8,2);
                                            uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                            FUN_057aca78(uVar8,0,*unaff_x26,0);
                                            uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                            FUN_057acc90(uVar9,0x16,uVar8,0);
                                            if (lVar7 == 0) goto LAB_057aca74;
                                            if (*(int *)(lVar7 + 0x18) != 0) {
                                              *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                              puVar2 = 
                                              Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_MoveNext__
                                              ;
                                              uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                              FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                              uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                              FUN_057acc90(uVar9,0x79,uVar8,0);
                                              if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                                *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                uVar8 = *unaff_x24;
                                                *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x160) =
                                                     lVar7;
                                                lVar7 = FUN_02f0880c(uVar8,2);
                                                uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                FUN_057aca78(uVar8,0,*unaff_x26,0);
                                                uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                FUN_057acc90(uVar9,0x16,uVar8,0);
                                                if (lVar7 == 0) goto LAB_057aca74;
                                                if (*(int *)(lVar7 + 0x18) != 0) {
                                                  *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_get_Current__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x79,uVar8,0);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    uVar8 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x168)
                                                         = lVar7;
                                                    lVar7 = FUN_02f0880c(uVar8,4);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_MoveNext__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,1,uVar8,0);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_get_Current__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x41,uVar8,0);
                                                  if (2 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_Dispose__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x42,uVar8,0);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x38) = uVar9;
                                                    uVar8 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x170)
                                                         = lVar7;
                                                    lVar7 = FUN_02f0880c(uVar8,2);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_Dispose__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x43,uVar8,0);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    uVar8 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x178)
                                                         = lVar7;
                                                    lVar7 = FUN_02f0880c(uVar8,3);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_MoveNext__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x3e,uVar8,0);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_get_Current__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x43,uVar8,0);
                                                  if (2 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                                    uVar8 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x180)
                                                         = lVar7;
                                                    lVar7 = FUN_02f0880c(uVar8,3);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_Dispose__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x35,uVar8,0);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_MoveNext__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x44,uVar8,0);
                                                  if (2 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                                    uVar8 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                         = lVar7;
                                                    lVar7 = FUN_02f0880c(uVar8,3);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<PropertyPath>_get_Current__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x3e,uVar8,0);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<QueryExpression>_Dispose__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x3f,uVar8,0);
                                                  if (2 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_Dispose__
                                                  ;
                                                  uVar8 = *unaff_x24;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 400) =
                                                       lVar7;
                                                  lVar7 = FUN_02f0880c(uVar8,2);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x45,uVar8,0);
                                                  if (lVar7 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_MoveNext__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x7a,uVar8,0);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_Dispose__
                                                  ;
                                                  uVar8 = *unaff_x24;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x198) =
                                                       lVar7;
                                                  lVar7 = FUN_02f0880c(uVar8,1);
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x45,uVar8,0);
                                                  if (lVar7 == 0) {
LAB_057aca74:
                    /* WARNING: Subroutine does not return */
                                                    FUN_02f089c8();
                                                  }
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                    uVar8 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a0)
                                                         = lVar7;
                                                    lVar7 = FUN_02f0880c(uVar8,2);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_Dispose__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                  FUN_057aca78(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                  FUN_057acc90(uVar9,0x43,uVar8,0);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    uVar8 = *unaff_x24;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a8)
                                                         = lVar7;
                                                    lVar7 = FUN_02f0880c(uVar8,1);
                                                    uVar8 = thunk_FUN_02f45270(*unaff_x23);
                                                    FUN_057aca78(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_02f45270(*unaff_x22);
                                                    FUN_057acc90(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Panel>_MoveNext__
                                                  ;
                                                  uVar8 = *(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_List_Enumerator<TcpClient>_get_Current__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b0) =
                                                       lVar7;
                                                  lVar7 = FUN_02f0880c(uVar8,0x30);
                                                  uVar9 = **(undefined8 **)(*unaff_x25 + 0xb8);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar8,0,0,uVar9,0,0,0,1);
                                                  if (lVar7 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x20) = uVar8;
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
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__
                                                  );
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x4a,1,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa8);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1b0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x4b,2,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (2 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x178);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x4c,3,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x38) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x180);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x4d,4,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (4 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x40) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x18);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 200);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x4e,5,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (5 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x48) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x10);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xc0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x4f,6,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (6 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x50) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x80);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x128);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x50,7,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffff8) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x58) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x130);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x50,8,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (8 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x60) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 400);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x51,9,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (9 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x68) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x88);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x138);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x52,10,uVar10,uVar11,uVar8,0,1
                                                              );
                                                  if (10 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x70) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x140);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x52,0xb,uVar10,uVar11,uVar8,0,
                                                               1);
                                                  if (0xb < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x78) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x90);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x53,0xc,uVar10,uVar11,uVar8,0,
                                                               1);
                                                  if (0xc < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x80) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x54,0xd,uVar10,uVar11,uVar8,0,
                                                               1);
                                                  if (0xd < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x88) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x55,0xe,uVar10,uVar11,uVar8,0,
                                                               1);
                                                  if (0xe < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x90) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x150);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x56,0xf,uVar10,uVar11,uVar8,0,
                                                               1);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffff0) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x98) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x170);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x57,0x10,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x10 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xa0) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<TcpClient>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x58);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x108);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x58,0x11,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x11 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xa8) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x20);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x59,0x12,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x12 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xb0) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x40);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x6c,0x13,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x13 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xb8) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x50);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x100);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x6e,0x14,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x14 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xc0) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x48);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf8);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x6d,0x15,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x15 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 200) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x28);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd8);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x6f,0x16,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x16 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xd0) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x30);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe0);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x70,0x17,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x17 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xd8) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x38);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe8);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x71,0x18,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x18 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xe0) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_get_Current__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x70);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x118);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x74,0x19,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x19 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xe8) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x68);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x120);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x72,0x1a,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x1a < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xf0) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x60);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x110);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x73,0x1b,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x1b < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xf8) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x158);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x5a,0x1c,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x1c < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x100) = uVar9;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x158)
                                                    ;
                                                    uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_057accc0(uVar9,0x5b,0x1d,uVar10,uVar11,uVar8
                                                                 ,0,1);
                                                    if (0x1d < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x108) = uVar9;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xa0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x158);
                                                      uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_057accc0(uVar9,0x5c,0x1e,uVar10,uVar11,
                                                                   uVar8,0,1);
                                                      if (0x1e < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x110) = uVar9;
                                                        puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x160);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x5d,0x1f,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xffffffe0) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x118) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_MoveNext__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x168);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x5e,0x20,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x20 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x120) = uVar9;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_Dispose__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x188);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x5f,0x21,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x21 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x128) = uVar9;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_057accc0(uVar9,0x60,0x22,uVar10,uVar11,uVar8
                                                                 ,0,1);
                                                    if (0x22 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x130) = uVar9;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_057accc0(uVar9,0x61,0x23,uVar10,uVar11,
                                                                   uVar8,0,1);
                                                      if (0x23 < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x138) = uVar9;
                                                        uVar10 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar11 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                    puVar2);
                                                        FUN_057accc0(uVar9,0x62,0x24,uVar10,uVar11,
                                                                     uVar8,0,1);
                                                        if (0x24 < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 0x140) = uVar9;
                                                          uVar10 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar11 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                      puVar2);
                                                          FUN_057accc0(uVar9,99,0x25,uVar10,uVar11,
                                                                       uVar8,0,1);
                                                          if (0x25 < *(uint *)(lVar7 + 0x18)) {
                                                            *(undefined8 *)(lVar7 + 0x148) = uVar9;
                                                            uVar10 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar11 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar8 = thunk_FUN_02f45270(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_057acb2c(uVar8,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar9 = thunk_FUN_02f45270(*(undefined8
                                                                                         *)puVar2);
                                                            FUN_057accc0(uVar9,100,0x26,uVar10,
                                                                         uVar11,uVar8,0,1);
                                                            if (0x26 < *(uint *)(lVar7 + 0x18)) {
                                                              *(undefined8 *)(lVar7 + 0x150) = uVar9
                                                              ;
                                                              uVar10 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0xb0);
                                                              uVar11 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0x188);
                                                              uVar8 = thunk_FUN_02f45270(*(
                                                  undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0x65,0x27,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x27 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x158) = uVar9;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_057accc0(uVar9,0x66,0x28,uVar10,uVar11,uVar8
                                                                 ,0,1);
                                                    if (0x28 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x160) = uVar9;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0);
                                                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_057accc0(uVar9,0x67,0x29,uVar10,uVar11,
                                                                   uVar8,0,1);
                                                      if (0x29 < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x168) = uVar9;
                                                        uVar10 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar11 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                    puVar2);
                                                        FUN_057accc0(uVar9,0x68,0x2a,uVar10,uVar11,
                                                                     uVar8,0,1);
                                                        if (0x2a < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 0x170) = uVar9;
                                                          uVar10 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar11 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_057acb2c(uVar8,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                      puVar2);
                                                          FUN_057accc0(uVar9,0x69,0x2b,uVar10,uVar11
                                                                       ,uVar8,0,1);
                                                          if (0x2b < *(uint *)(lVar7 + 0x18)) {
                                                            *(undefined8 *)(lVar7 + 0x178) = uVar9;
                                                            uVar10 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar11 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar8 = thunk_FUN_02f45270(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_057acb2c(uVar8,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar9 = thunk_FUN_02f45270(*(undefined8
                                                                                         *)puVar2);
                                                            FUN_057accc0(uVar9,0x75,0x2c,uVar10,
                                                                         uVar11,uVar8,0,1);
                                                            if (0x2c < *(uint *)(lVar7 + 0x18)) {
                                                              *(undefined8 *)(lVar7 + 0x180) = uVar9
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
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar5,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                                  FUN_057acbe0(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x6b,0x2d,0,uVar11,uVar8,uVar9
                                                               ,0);
                                                  if (0x2d < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x188) = uVar10;
                                                    puVar5 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_MoveNext__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x198);
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar5,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                                  FUN_057acbe0(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x6a,0x2e,0,uVar11,uVar8,uVar9
                                                               ,0);
                                                  if (0x2e < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 400) = uVar10;
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
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar8,0,*(undefined8 *)puVar5,0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                                  FUN_057acbe0(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x76,0x2f,uVar11,uVar12,uVar8,
                                                               uVar9,1);
                                                  if (0x2f < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x198) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<PokeInteractor>_MoveNext__
                                                  ;
                                                  puVar2 = PTR_DAT_067c9070;
                                                  uVar8 = *(undefined8 *)PTR_DAT_067cb890;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b8) =
                                                       lVar7;
                                                  uVar8 = FUN_02f0880c(uVar8,6);
                                                  FUN_05009b54(uVar8,*(undefined8 *)puVar3,0);
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x25 + 0xb8) + 0x1c0) = uVar8;
                                                  lVar7 = FUN_02f0880c(uVar9,6);
                                                  if (lVar7 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if ((((uVar1 != 0) &&
                                                       (*(undefined8 *)(lVar7 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_get_Current__
                                                  , (uVar1 & 0xfffffffe) != 0)) &&
                                                  (*(undefined8 *)(lVar7 + 0x28) =
                                                        *(undefined8 *)PTR_DAT_067d4de8, 2 < uVar1))
                                                  && (((*(undefined8 *)(lVar7 + 0x30) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float3>_Awake__
                                                  , (uVar1 & 0xfffffffc) != 0 &&
                                                  (*(undefined8 *)(lVar7 + 0x38) =
                                                        *(undefined8 *)PTR_DAT_067caa08, 4 < uVar1))
                                                  && (*(undefined8 *)(lVar7 + 0x40) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<ARContactSpawnTrigger>_Dispose__
                                                  , uVar1 != 5)))) {
                                                    *(undefined8 *)(lVar7 + 0x48) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_Dispose__
                                                  ;
                                                  uVar8 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1c8) =
                                                       lVar7;
                                                  lVar7 = FUN_02f0880c(uVar8,2);
                                                  if (lVar7 == 0) goto LAB_057aca74;
                                                  if ((*(uint *)(lVar7 + 0x18) != 0) &&
                                                     (*(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__
                                                  , (*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0)) {
                                                    *(undefined8 *)(lVar7 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                                                  ;
                                                  uVar8 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d0) =
                                                       lVar7;
                                                  lVar7 = FUN_02f0880c(uVar8,3);
                                                  if (lVar7 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar7 + 0x20) =
                                                            *(undefined8 *)PTR_DAT_067cd728,
                                                      (uVar1 & 0xfffffffe) != 0)) &&
                                                     (*(undefined8 *)(lVar7 + 0x28) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_set_Item__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar7 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_IEnumerator<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
                                                  ;
                                                  uVar8 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d8) =
                                                       lVar7;
                                                  lVar7 = FUN_02f0880c(uVar8,3);
                                                  if (lVar7 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar7 + 0x20) =
                                                            *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_get_Current__
                                                  , (uVar1 & 0xfffffffe) != 0)) &&
                                                  (*(undefined8 *)(lVar7 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_MoveNext__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar7 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_MoveNext__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1e0) =
                                                       lVar7;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


