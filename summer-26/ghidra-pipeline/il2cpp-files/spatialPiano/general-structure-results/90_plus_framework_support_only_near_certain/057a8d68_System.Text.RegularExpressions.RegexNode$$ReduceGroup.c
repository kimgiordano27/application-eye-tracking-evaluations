/*
FUNCTION_NAME: System.Text.RegularExpressions.RegexNode$$ReduceGroup
ENTRY_POINT: 057a8d68
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 99
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_9;ui_or_gameplay_sink_hits_12;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_18
*/


void System_Text_RegularExpressions_RegexNode__ReduceGroup(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar13;
  undefined8 *unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *unaff_x23;
  long *unaff_x25;
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x50) = unaff_x19;
  uVar9 = FUN_02f0880c();
  FUN_05009b54(uVar9,*unaff_x23,0);
  uVar10 = *unaff_x20;
  *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x58) = uVar9;
  uVar9 = FUN_02f0880c(uVar10,0xe);
  FUN_05009b54(uVar9,*unaff_x22,0);
  uVar10 = *unaff_x20;
  *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x60) = uVar9;
  lVar11 = FUN_02f0880c(uVar10,2);
  if (lVar11 != 0) {
    if ((*(int *)(lVar11 + 0x18) != 0) &&
       (*(undefined4 *)(lVar11 + 0x20) = 2, *(int *)(lVar11 + 0x18) != 1)) {
      lVar12 = *unaff_x25;
      *(undefined4 *)(lVar11 + 0x24) = 0x11;
      uVar9 = *unaff_x20;
      *(long *)(*(long *)(lVar12 + 0xb8) + 0x68) = lVar11;
      lVar11 = FUN_02f0880c(uVar9,2);
      if (lVar11 == 0) goto LAB_057aca74;
      if ((*(int *)(lVar11 + 0x18) != 0) &&
         (*(undefined4 *)(lVar11 + 0x20) = 2,
         puVar3 = 
         Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData>_Dispose__,
         puVar2 = Method_System_Collections_Generic_List_Enumerator<PokeInteractor>_MoveNext__,
         *(int *)(lVar11 + 0x18) != 1)) {
        lVar12 = *unaff_x25;
        *(undefined4 *)(lVar11 + 0x24) = 0x11;
        uVar9 = *unaff_x20;
        *(long *)(*(long *)(lVar12 + 0xb8) + 0x70) = lVar11;
        uVar9 = FUN_02f0880c(uVar9,5);
        FUN_05009b54(uVar9,*(undefined8 *)puVar2,0);
        uVar10 = *unaff_x20;
        *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x78) = uVar9;
        uVar9 = FUN_02f0880c(uVar10,4);
        FUN_05009b54(uVar9,*unaff_x21,0);
        uVar10 = *unaff_x20;
        *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x80) = uVar9;
        uVar9 = FUN_02f0880c(uVar10,4);
        FUN_05009b54(uVar9,*(undefined8 *)puVar3,0);
        uVar10 = *unaff_x20;
        *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x88) = uVar9;
        lVar11 = FUN_02f0880c(uVar10,2);
        if (lVar11 == 0) goto LAB_057aca74;
        if ((*(int *)(lVar11 + 0x18) != 0) &&
           (*(undefined4 *)(lVar11 + 0x20) = 2,
           puVar3 = Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__,
           puVar2 = Method_System_Collections_Generic_List_Enumerator<Popup>_MoveNext__,
           *(int *)(lVar11 + 0x18) != 1)) {
          lVar12 = *unaff_x25;
          *(undefined4 *)(lVar11 + 0x24) = 5;
          uVar9 = *unaff_x20;
          *(long *)(*(long *)(lVar12 + 0xb8) + 0x90) = lVar11;
          uVar9 = FUN_02f0880c(uVar9,6);
          FUN_05009b54(uVar9,*(undefined8 *)puVar3,0);
          uVar10 = *unaff_x20;
          *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x98) = uVar9;
          uVar9 = FUN_02f0880c(uVar10,3);
          FUN_05009b54(uVar9,*(undefined8 *)puVar2,0);
          uVar10 = *unaff_x20;
          *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0xa0) = uVar9;
          lVar11 = FUN_02f0880c(uVar10,2);
          if (lVar11 == 0) goto LAB_057aca74;
          if ((*(int *)(lVar11 + 0x18) != 0) &&
             (*(undefined4 *)(lVar11 + 0x20) = 0x2d, *(int *)(lVar11 + 0x18) != 1)) {
            lVar12 = *unaff_x25;
            *(undefined4 *)(lVar11 + 0x24) = 0x2e;
            uVar9 = *unaff_x20;
            *(long *)(*(long *)(lVar12 + 0xb8) + 0xa8) = lVar11;
            lVar11 = FUN_02f0880c(uVar9,1);
            puVar5 = 
            Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_MoveNext__;
            puVar4 = Method_System_Collections_Generic_HashSet_Enumerator<PropertyPath>_Dispose__;
            puVar3 = 
            Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData>_get_Current__
            ;
            puVar2 = 
            Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData>_MoveNext__;
            if (lVar11 == 0) goto LAB_057aca74;
            if (*(int *)(lVar11 + 0x18) != 0) {
              lVar12 = *unaff_x25;
              *(undefined4 *)(lVar11 + 0x20) = 2;
              uVar9 = *(undefined8 *)puVar2;
              *(long *)(*(long *)(lVar12 + 0xb8) + 0xb0) = lVar11;
              lVar11 = FUN_02f0880c(uVar9,7);
              uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
              FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
              uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
              FUN_057acc90(uVar10,0x46,uVar9,0);
              if (lVar11 == 0) goto LAB_057aca74;
              if (*(int *)(lVar11 + 0x18) != 0) {
                *(undefined8 *)(lVar11 + 0x20) = uVar10;
                puVar5 = 
                Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_Dispose__;
                uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                FUN_057acc90(uVar10,0x47,uVar9,0);
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar11 + 0x28) = uVar10;
                  puVar5 = 
                  Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_get_Current__
                  ;
                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                  FUN_057acc90(uVar10,0x31,uVar9,0);
                  if (2 < *(uint *)(lVar11 + 0x18)) {
                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                    puVar5 = 
                    Method_System_Collections_Generic_HashSet_Enumerator<PropertyPath>_MoveNext__;
                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                    FUN_057acc90(uVar10,0x16,uVar9,0);
                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                      *(undefined8 *)(lVar11 + 0x38) = uVar10;
                      puVar6 = 
                      Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_Dispose__
                      ;
                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                      FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                      uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                      FUN_057acc90(uVar10,0x32,uVar9,0);
                      if (4 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0x40) = uVar10;
                        puVar6 = 
                        Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_MoveNext__
                        ;
                        uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                        FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                        uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                        FUN_057acc90(uVar10,0x33,uVar9,0);
                        if (5 < *(uint *)(lVar11 + 0x18)) {
                          *(undefined8 *)(lVar11 + 0x48) = uVar10;
                          puVar6 = 
                          Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_get_Current__
                          ;
                          uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                          FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                          FUN_057acc90(uVar10,0x34,uVar9,0);
                          if (6 < *(uint *)(lVar11 + 0x18)) {
                            *(undefined8 *)(lVar11 + 0x50) = uVar10;
                            puVar6 = 
                            Method_System_Collections_Generic_List_Enumerator<RadioButton>_Dispose__
                            ;
                            uVar9 = *(undefined8 *)puVar2;
                            *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xb8) = lVar11;
                            lVar11 = FUN_02f0880c(uVar9,8);
                            uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                            FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                            uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                            FUN_057acc90(uVar10,0x1e,uVar9,0);
                            if (lVar11 == 0) goto LAB_057aca74;
                            if (*(int *)(lVar11 + 0x18) != 0) {
                              *(undefined8 *)(lVar11 + 0x20) = uVar10;
                              puVar6 = 
                              Method_System_Collections_Generic_List_Enumerator<RadioButton>_MoveNext__
                              ;
                              uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                              FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                              uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                              FUN_057acc90(uVar10,0x35,uVar9,0);
                              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                                *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                puVar6 = 
                                Method_System_Collections_Generic_List_Enumerator<RadioButton>_get_Current__
                                ;
                                uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                FUN_057acc90(uVar10,0x49,uVar9,0);
                                if (2 < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                  FUN_057acc90(uVar10,0x16,uVar9,0);
                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                                    *(undefined8 *)(lVar11 + 0x38) = uVar10;
                                    puVar6 = 
                                    Method_System_Collections_Generic_List_Enumerator<RaycastHit>_Dispose__
                                    ;
                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                    FUN_057acc90(uVar10,1,uVar9,0);
                                    if (4 < *(uint *)(lVar11 + 0x18)) {
                                      *(undefined8 *)(lVar11 + 0x40) = uVar10;
                                      puVar6 = 
                                      Method_System_Collections_Generic_List_Enumerator<RaycastHit>_MoveNext__
                                      ;
                                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                      FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                      uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                      FUN_057acc90(uVar10,0x3b,uVar9,0);
                                      if (5 < *(uint *)(lVar11 + 0x18)) {
                                        *(undefined8 *)(lVar11 + 0x48) = uVar10;
                                        puVar6 = 
                                        Method_System_Collections_Generic_List_Enumerator<RaycastHit>_get_Current__
                                        ;
                                        uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                        FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                        uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                        FUN_057acc90(uVar10,2,uVar9,0);
                                        if (6 < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined8 *)(lVar11 + 0x50) = uVar10;
                                          puVar6 = 
                                          Method_System_Collections_Generic_List_Enumerator<RaycastResult>_Dispose__
                                          ;
                                          uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                          FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                          FUN_057acc90(uVar10,0x48,uVar9,0);
                                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0) {
                                            *(undefined8 *)(lVar11 + 0x58) = uVar10;
                                            puVar6 = 
                                            Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_get_Current__
                                            ;
                                            uVar9 = *(undefined8 *)puVar2;
                                            *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xc0) = lVar11;
                                            lVar11 = FUN_02f0880c(uVar9,0xe);
                                            uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                            FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                            uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                            FUN_057acc90(uVar10,0x36,uVar9,0);
                                            if (lVar11 == 0) goto LAB_057aca74;
                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                              *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                              puVar6 = 
                                              Method_System_Collections_Generic_List_Enumerator<Renderer>_Dispose__
                                              ;
                                              uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                              FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                              uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                              FUN_057acc90(uVar10,0x37,uVar9,0);
                                              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                                                *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                puVar6 = 
                                                Method_System_Collections_Generic_List_Enumerator<Renderer>_MoveNext__
                                                ;
                                                uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                FUN_057acc90(uVar10,0x1e,uVar9,0);
                                                if (2 < *(uint *)(lVar11 + 0x18)) {
                                                  *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                  puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Renderer>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x39,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x38) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x35,uVar9,0);
                                                  if (4 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x40) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x49,uVar9,0);
                                                  if (5 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x48) = uVar10;
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (6 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x50) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,3,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x58) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,4,uVar9,0);
                                                  if (8 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x60) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,1,uVar9,0);
                                                  if (9 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x68) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3a,uVar9,0);
                                                  if (10 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x70) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Rigidbody>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3b,uVar9,0);
                                                  if (0xb < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x78) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x38,uVar9,0);
                                                  if (0xc < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x80) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Rigidbody>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,2,uVar9,0);
                                                  if (0xd < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x88) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RectTransform>_MoveNext__
                                                  ;
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 200) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,6);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x36,uVar9,0);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RectTransform>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x37,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraph>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x39,uVar9,0);
                                                  if (2 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar11 + 0x38) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraph>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,10,uVar9,0);
                                                  if (4 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x40) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraph>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,1,uVar9,0);
                                                  if (5 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x48) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xd0) =
                                                         lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,1);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__
                                                  ;
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xd8) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,2);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3c,uVar9,0);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SeverityEntry>_Dispose__
                                                  ;
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xe0) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,2);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3c,uVar9,0);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                      uVar9 = *(undefined8 *)puVar2;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xe8)
                                                           = lVar11;
                                                      lVar11 = FUN_02f0880c(uVar9,2);
                                                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                      uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_057acc90(uVar10,0x16,uVar9,0);
                                                      if (lVar11 == 0) goto LAB_057aca74;
                                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                        puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RectTransform>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,10,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RaycastResult>_MoveNext__
                                                  ;
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xf0) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,2);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3c,uVar9,0);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RaycastResult>_get_Current__
                                                  ;
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xf8) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,2);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3c,uVar9,0);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                      uVar9 = *(undefined8 *)puVar2;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x100
                                                               ) = lVar11;
                                                      lVar11 = FUN_02f0880c(uVar9,3);
                                                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                      uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_057acc90(uVar10,0x16,uVar9,0);
                                                      if (lVar11 == 0) goto LAB_057aca74;
                                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                        puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ShaderContainer>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x39,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ShaderContainer>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,1,uVar9,0);
                                                  if (2 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SeverityEntry>_get_Current__
                                                  ;
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x108) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,2);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3c,uVar9,0);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                      uVar9 = *(undefined8 *)puVar2;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x110
                                                               ) = lVar11;
                                                      lVar11 = FUN_02f0880c(uVar9,2);
                                                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                      uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_057acc90(uVar10,0x16,uVar9,0);
                                                      if (lVar11 == 0) goto LAB_057aca74;
                                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                        puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ShaderContainer>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x78,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x118)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,2);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SeverityEntry>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x77,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x120)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,2);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,1,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x128)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,2);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3b,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x130)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,2);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,1,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x138)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,4);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,3,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    puVar8 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar8,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,4,uVar9,0);
                                                  if (2 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar7,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3b,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x38) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x140)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,3);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                      uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_057acc90(uVar10,3,uVar9,0);
                                                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                        uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_057aca78(uVar9,0,*(undefined8 *)puVar8,0
                                                                    );
                                                        uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                     puVar3);
                                                        FUN_057acc90(uVar10,4,uVar9,0);
                                                        if (2 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                          uVar9 = *(undefined8 *)puVar2;
                                                          *(long *)(*(long *)(*unaff_x25 + 0xb8) +
                                                                   0x148) = lVar11;
                                                          lVar11 = FUN_02f0880c(uVar9,5);
                                                          uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_057aca78(uVar9,0,*(undefined8 *)puVar5
                                                                       ,0);
                                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *
                                                                                       )puVar3);
                                                          FUN_057acc90(uVar10,0x16,uVar9,0);
                                                          if (lVar11 == 0) goto LAB_057aca74;
                                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                            uVar9 = thunk_FUN_02f45270(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_057aca78(uVar9,0,*(undefined8 *)
                                                                                  puVar6,0);
                                                            uVar10 = thunk_FUN_02f45270(*(undefined8
                                                                                          *)puVar3);
                                                            FUN_057acc90(uVar10,3,uVar9,0);
                                                            if ((*(uint *)(lVar11 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined8 *)(lVar11 + 0x28) =
                                                                   uVar10;
                                                              uVar9 = thunk_FUN_02f45270(*(
                                                  undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar8,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,4,uVar9,0);
                                                  if (2 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<QueryExpression>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3e,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x38) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<QueryExpression>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3f,uVar9,0);
                                                  if (4 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x40) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x150)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,3);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,1,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x40,uVar9,0);
                                                  if (2 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x158)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,2);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x79,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x160)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,2);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x79,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x168)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,4);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,1,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x41,uVar9,0);
                                                  if (2 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x42,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x38) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x170)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,2);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x43,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x178)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,3);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3e,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x43,uVar9,0);
                                                  if (2 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x180)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,3);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x35,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x44,uVar9,0);
                                                  if (2 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,3);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<PropertyPath>_get_Current__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3e,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<QueryExpression>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x3f,uVar9,0);
                                                  if (2 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_Dispose__
                                                  ;
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 400) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,2);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x45,uVar9,0);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_MoveNext__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x7a,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_Dispose__
                                                  ;
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x198) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,1);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x45,uVar9,0);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a0)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,2);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_Dispose__
                                                  ;
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057aca78(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_057acc90(uVar10,0x43,uVar9,0);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a8)
                                                         = lVar11;
                                                    lVar11 = FUN_02f0880c(uVar9,1);
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057aca78(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_057acc90(uVar10,0x16,uVar9,0);
                                                    if (lVar11 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Panel>_MoveNext__
                                                  ;
                                                  uVar9 = *(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_List_Enumerator<TcpClient>_get_Current__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b0) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,0x30);
                                                  uVar10 = **(undefined8 **)(*unaff_x25 + 0xb8);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_057accc0(uVar9,0,0,uVar10,0,0,0,1);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 8);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb8);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__
                                                  );
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x4a,1,uVar13,uVar14,uVar9,0,1
                                                              );
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_MoveNext__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa8);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1b0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x4b,2,uVar13,uVar14,uVar9,0,1
                                                              );
                                                  if (2 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x178);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x4c,3,uVar13,uVar14,uVar9,0,1
                                                              );
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x38) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x180);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x4d,4,uVar13,uVar14,uVar9,0,1
                                                              );
                                                  if (4 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x40) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_get_Current__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x18);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 200);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x4e,5,uVar13,uVar14,uVar9,0,1
                                                              );
                                                  if (5 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x48) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x10);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xc0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x4f,6,uVar13,uVar14,uVar9,0,1
                                                              );
                                                  if (6 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x50) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x80);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x128);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x50,7,uVar13,uVar14,uVar9,0,1
                                                              );
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x58) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x130);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x50,8,uVar13,uVar14,uVar9,0,1
                                                              );
                                                  if (8 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x60) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_get_Current__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 400);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x51,9,uVar13,uVar14,uVar9,0,1
                                                              );
                                                  if (9 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x68) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x88);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x138);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x52,10,uVar13,uVar14,uVar9,0,
                                                               1);
                                                  if (10 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x70) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x140);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x52,0xb,uVar13,uVar14,uVar9,0
                                                               ,1);
                                                  if (0xb < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x78) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x90);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x53,0xc,uVar13,uVar14,uVar9,0
                                                               ,1);
                                                  if (0xc < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x80) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x54,0xd,uVar13,uVar14,uVar9,0
                                                               ,1);
                                                  if (0xd < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x88) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_get_Current__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x55,0xe,uVar13,uVar14,uVar9,0
                                                               ,1);
                                                  if (0xe < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x90) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x150);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x56,0xf,uVar13,uVar14,uVar9,0
                                                               ,1);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffff0) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x98) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_MoveNext__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x170);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x57,0x10,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x10 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xa0) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<TcpClient>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x58);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x108);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x58,0x11,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x11 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xa8) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x20);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x59,0x12,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x12 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xb0) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x40);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x6c,0x13,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x13 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xb8) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_MoveNext__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x50);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x100);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x6e,0x14,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x14 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xc0) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x48);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf8);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x6d,0x15,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x15 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 200) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_get_Current__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x28);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd8);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x6f,0x16,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x16 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xd0) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x30);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x70,0x17,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x17 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xd8) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_MoveNext__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x38);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe8);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x71,0x18,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x18 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xe0) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_get_Current__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x70);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x118);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x74,0x19,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x19 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xe8) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x68);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x120);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x72,0x1a,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x1a < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xf0) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_MoveNext__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x60);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x110);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x73,0x1b,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x1b < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xf8) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_MoveNext__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x158);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x5a,0x1c,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x1c < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x100) = uVar10;
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                    uVar14 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x158)
                                                    ;
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_057accc0(uVar10,0x5b,0x1d,uVar13,uVar14,
                                                                 uVar9,0,1);
                                                    if (0x1d < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x108) = uVar10;
                                                      uVar13 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xa0
                                                                );
                                                      uVar14 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x158);
                                                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                      uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_057accc0(uVar10,0x5c,0x1e,uVar13,uVar14,
                                                                   uVar9,0,1);
                                                      if (0x1e < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x110) = uVar10;
                                                        puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x160);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x5d,0x1f,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xffffffe0) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x118) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_MoveNext__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x168);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x5e,0x20,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x20 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x120) = uVar10;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_Dispose__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x188);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x5f,0x21,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x21 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x128) = uVar10;
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar14 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_057accc0(uVar10,0x60,0x22,uVar13,uVar14,
                                                                 uVar9,0,1);
                                                    if (0x22 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x130) = uVar10;
                                                      uVar13 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar14 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                      uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_057accc0(uVar10,0x61,0x23,uVar13,uVar14,
                                                                   uVar9,0,1);
                                                      if (0x23 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x138) = uVar10;
                                                        uVar13 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar14 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_057accc0(uVar10,0x62,0x24,uVar13,uVar14,
                                                                     uVar9,0,1);
                                                        if (0x24 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x140) = uVar10;
                                                          uVar13 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar14 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *
                                                                                       )puVar2);
                                                          FUN_057accc0(uVar10,99,0x25,uVar13,uVar14,
                                                                       uVar9,0,1);
                                                          if (0x25 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x148) = uVar10
                                                            ;
                                                            uVar13 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar14 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar9 = thunk_FUN_02f45270(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_057acb2c(uVar9,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar10 = thunk_FUN_02f45270(*(undefined8
                                                                                          *)puVar2);
                                                            FUN_057accc0(uVar10,100,0x26,uVar13,
                                                                         uVar14,uVar9,0,1);
                                                            if (0x26 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x150) =
                                                                   uVar10;
                                                              uVar13 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0xb0);
                                                              uVar14 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0x188);
                                                              uVar9 = thunk_FUN_02f45270(*(
                                                  undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar10,0x65,0x27,uVar13,uVar14,uVar9,
                                                               0,1);
                                                  if (0x27 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x158) = uVar10;
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar14 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                    uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_057accc0(uVar10,0x66,0x28,uVar13,uVar14,
                                                                 uVar9,0,1);
                                                    if (0x28 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x160) = uVar10;
                                                      uVar13 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar14 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0);
                                                      uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_057accc0(uVar10,0x67,0x29,uVar13,uVar14,
                                                                   uVar9,0,1);
                                                      if (0x29 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x168) = uVar10;
                                                        uVar13 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar14 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_057accc0(uVar10,0x68,0x2a,uVar13,uVar14,
                                                                     uVar9,0,1);
                                                        if (0x2a < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x170) = uVar10;
                                                          uVar13 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar14 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_057acb2c(uVar9,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *
                                                                                       )puVar2);
                                                          FUN_057accc0(uVar10,0x69,0x2b,uVar13,
                                                                       uVar14,uVar9,0,1);
                                                          if (0x2b < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x178) = uVar10
                                                            ;
                                                            uVar13 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar14 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar9 = thunk_FUN_02f45270(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_057acb2c(uVar9,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar10 = thunk_FUN_02f45270(*(undefined8
                                                                                          *)puVar2);
                                                            FUN_057accc0(uVar10,0x75,0x2c,uVar13,
                                                                         uVar14,uVar9,0,1);
                                                            if (0x2c < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x180) =
                                                                   uVar10;
                                                              puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<TcpClient>_MoveNext__
                                                  ;
                                                  puVar5 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_MoveNext__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_Dispose__
                                                  ;
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1a0);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar5,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_057acbe0(uVar10,0,*(undefined8 *)puVar3,0);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar13,0x6b,0x2d,0,uVar14,uVar9,
                                                               uVar10,0);
                                                  if (0x2d < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x188) = uVar13;
                                                    puVar5 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_MoveNext__
                                                  ;
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x198);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar5,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_057acbe0(uVar10,0,*(undefined8 *)puVar3,0);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar13,0x6a,0x2e,0,uVar14,uVar9,
                                                               uVar10,0);
                                                  if (0x2e < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 400) = uVar13;
                                                    puVar5 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_get_Current__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_get_Current__
                                                  ;
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x78);
                                                  uVar15 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1a8);
                                                  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_057acb2c(uVar9,0,*(undefined8 *)puVar5,0);
                                                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_057acbe0(uVar10,0,*(undefined8 *)puVar3,0);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar13,0x76,0x2f,uVar14,uVar15,uVar9,
                                                               uVar10,1);
                                                  if (0x2f < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x198) = uVar13;
                                                    puVar3 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<PokeInteractor>_MoveNext__
                                                  ;
                                                  puVar2 = PTR_DAT_067c9070;
                                                  uVar9 = *(undefined8 *)PTR_DAT_067cb890;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b8) =
                                                       lVar11;
                                                  uVar9 = FUN_02f0880c(uVar9,6);
                                                  FUN_05009b54(uVar9,*(undefined8 *)puVar3,0);
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x25 + 0xb8) + 0x1c0) = uVar9;
                                                  lVar11 = FUN_02f0880c(uVar10,6);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if ((((uVar1 != 0) &&
                                                       (*(undefined8 *)(lVar11 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_get_Current__
                                                  , (uVar1 & 0xfffffffe) != 0)) &&
                                                  (*(undefined8 *)(lVar11 + 0x28) =
                                                        *(undefined8 *)PTR_DAT_067d4de8, 2 < uVar1))
                                                  && (((*(undefined8 *)(lVar11 + 0x30) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float3>_Awake__
                                                  , (uVar1 & 0xfffffffc) != 0 &&
                                                  (*(undefined8 *)(lVar11 + 0x38) =
                                                        *(undefined8 *)PTR_DAT_067caa08, 4 < uVar1))
                                                  && (*(undefined8 *)(lVar11 + 0x40) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<ARContactSpawnTrigger>_Dispose__
                                                  , uVar1 != 5)))) {
                                                    *(undefined8 *)(lVar11 + 0x48) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_Dispose__
                                                  ;
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1c8) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,2);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  if ((*(uint *)(lVar11 + 0x18) != 0) &&
                                                     (*(undefined8 *)(lVar11 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__
                                                  , (*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)) {
                                                    *(undefined8 *)(lVar11 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                                                  ;
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d0) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,3);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar11 + 0x20) =
                                                            *(undefined8 *)PTR_DAT_067cd728,
                                                      (uVar1 & 0xfffffffe) != 0)) &&
                                                     (*(undefined8 *)(lVar11 + 0x28) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_set_Item__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar11 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_IEnumerator<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
                                                  ;
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d8) =
                                                       lVar11;
                                                  lVar11 = FUN_02f0880c(uVar9,3);
                                                  if (lVar11 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar11 + 0x20) =
                                                            *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_get_Current__
                                                  , (uVar1 & 0xfffffffe) != 0)) &&
                                                  (*(undefined8 *)(lVar11 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_MoveNext__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar11 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_MoveNext__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1e0) =
                                                       lVar11;
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
LAB_057aca74:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


