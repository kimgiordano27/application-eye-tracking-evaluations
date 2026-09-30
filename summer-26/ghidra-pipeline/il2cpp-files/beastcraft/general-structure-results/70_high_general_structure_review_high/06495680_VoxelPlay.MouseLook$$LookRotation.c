/*
FUNCTION_NAME: VoxelPlay.MouseLook$$LookRotation
ENTRY_POINT: 06495680
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void VoxelPlay_MouseLook__LookRotation
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char in_NG;
  char in_OV;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *plVar11;
  
  if (in_NG == in_OV) {
    FUN_05628afc(*(undefined8 *)(param_1 + 0x10),0,param_4,0);
  }
  lVar8 = *(long *)(unaff_x19 + 0x70);
  if (lVar8 != 0) {
    iVar6 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar6) {
                    /* try { // try from 064956b0 to 065956b3 has its CatchHandler @ 064956b8 */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06495510 with catch @ 064956b4
                       try { // try from 064956b4 to 065956f3 has its CatchHandler @ 064953c8 */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 064956b0 with catch @ 064956b8
                        */
      FUN_05628afc(*(undefined8 *)(lVar8 + 0x10),0,iVar6,0);
    }
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_SetStateMachine__
    ;
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 064954ac with catch @ 064956c4
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06495588 with catch @ 064956c8
                        */
    if (*(char *)(unaff_x19 + 0x54) != '\0') {
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 064954ec with catch @ 064956d0
                       catch(type#1 @ 066644a8) { ... } // from try @ 06495534 with catch @ 064956d0
                        */
      plVar11 = (long *)(unaff_x19 + 0x80);
      if (*plVar11 == 0) {
        lVar8 = thunk_FUN_02e78ab8(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_AsyncProtocolRequest_<InnerRead>d__25>__
                                  );
                    /* try { // try from 064956f4 to 065956f7 has its CatchHandler @ 06495704 */
        FUN_04e198c0(lVar8,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_get_Task__
                    );
                    /* catch() { ... } // from try @ 064956f4 with catch @ 06495704 */
                    /* try { // try from 06495708 to 0659570f has its CatchHandler @ 06495718 */
        *plVar11 = lVar8;
        thunk_FUN_02ee2be8(plVar11,lVar8);
                    /* try { // try from 06495710 to 0659571b has its CatchHandler @ 064953c8 */
        if (*plVar11 == 0) goto LAB_06495854;
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06495708 with catch @ 06495718
                        */
      FUN_04e1a258(*(undefined4 *)(unaff_x20 + 0x5c));
    }
    puVar5 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_Start<AsyncProtocolRequest_<InnerRead>d__25>__
    ;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<ConfigurationItemDefinition>>_get_Task__
    ;
    puVar2 = 
    Unity_Services_RemoteConfig_WebRequest_WebRequestExtensions_<>c__DisplayClass0_0_TypeInfo;
    lVar8 = *(long *)(unaff_x19 + 0x30);
    while (lVar8 != 0) {
      unaff_w21 = unaff_w21 + 1;
      FUN_0649659c(lVar8);
      iVar6 = FUN_038eeb68(*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)puVar2);
      if (iVar6 <= unaff_w21) {
        return;
      }
      lVar8 = *(long *)(unaff_x19 + 0x30);
      if (lVar8 == 0) break;
      FUN_0649659c(lVar8);
      lVar8 = FUN_038f2104(*(undefined8 *)(lVar8 + 0x20),unaff_w21,*(undefined8 *)puVar5);
      if (lVar8 == 0) break;
      if (*(char *)(lVar8 + 0x40) != '\0') {
        if (*(char *)(lVar8 + 0x60) == '\0') {
          if (*(int *)(lVar8 + 0x48) == 1) {
            lVar7 = *(long *)(unaff_x19 + 0x70);
          }
          else {
            lVar7 = *(long *)(unaff_x19 + 0x78);
          }
        }
        else {
          lVar7 = *(long *)(unaff_x19 + 0x68);
        }
        if (lVar7 == 0) break;
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar10 = *(long *)puVar3;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          plVar11 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar11 = lVar8;
          thunk_FUN_02ee2be8(plVar11,lVar8);
        }
        else {
          FUN_03f2b60c(lVar7,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        if (*(char *)(unaff_x19 + 0x54) != '\0') {
          if (*(long *)(unaff_x19 + 0x80) == 0) break;
          FUN_04e1a258(*(undefined4 *)(lVar8 + 0x5c),*(long *)(unaff_x19 + 0x80),lVar8,
                       *(undefined8 *)puVar4);
        }
      }
      lVar8 = *(long *)(unaff_x19 + 0x30);
    }
  }
LAB_06495854:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


