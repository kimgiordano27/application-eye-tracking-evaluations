/*
FUNCTION_NAME: FUN_0320b5c4
ENTRY_POINT: 0320b5c4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0320b810) */
/* WARNING: Removing unreachable block (ram,0x0320b8bc) */

undefined8 FUN_0320b5c4(long param_1,uint param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
                    /* try { // try from 0320b5c4 to 0330b5d3 has its CatchHandler @ 0320b68c */
                    /* try { // try from 0320b5d8 to 0330b5db has its CatchHandler @ 0320b688 */
                    /* try { // try from 0320b5dc to 0330b62b has its CatchHandler @ 0320b57c */
  if ((DAT_045327a5 & 1) == 0) {
    FUN_01c5d288(PlayerHUD_<DelayClearMaintenanceMessageDisplay>d__220_TypeInfo);
    FUN_01c5d288(UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_NavigationSubmitEvent_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_045327a5 = 1;
  }
  puVar2 = UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo;
  if ((int)param_2 < 0) {
LAB_0320b850:
    uVar8 = thunk_FUN_01c273e8(PlayerHUD_<DelayClearMessageDisplay>d__219_TypeInfo);
    uVar8 = FUN_03313b64(uVar8,0);
    thunk_FUN_01c273e8(OVRPlugin_LayerLayout_TypeInfo);
    uVar5 = thunk_FUN_01c496e0();
    FUN_032485c8(uVar5,uVar8,0);
    uVar8 = thunk_FUN_01c273e8(PlayerHUD_<DelayClearMaintenanceMessageDisplay>d__220_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,uVar8);
  }
  lVar7 = *(long *)(param_1 + 0x50);
                    /* try { // try from 0320b62c to 0330b62f has its CatchHandler @ 0320b69c */
  if (lVar7 == 0) goto LAB_0320b84c;
  if ((int)*(uint *)(lVar7 + 0x18) <= (int)param_2) goto LAB_0320b850;
  if (param_2 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 0320b640 to 0330b643 has its CatchHandler @ 0320b690 */
    uVar9 = (ulong)param_2;
                    /* try { // try from 0320b650 to 0330b663 has its CatchHandler @ 0320b6a0 */
    uVar8 = *(undefined8 *)(lVar7 + uVar9 * 8 + 0x20);
    if (*(int *)(*(long *)
                  UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo + 0xe0
                ) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar3 = Oculus_Platform_CAPI__ovr_Message_GetParty(uVar8,0,0);
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 0320b678 to 0330b67b has its CatchHandler @ 0320b698 */
      plVar4 = *(long **)(param_1 + 0x10);
                    /* try { // try from 0320b67c to 0330b67f has its CatchHandler @ 0320b694 */
                    /* try { // try from 0320b680 to 0330b6b7 has its CatchHandler @ 0320b57c */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0320b5d8 with catch @ 0320b688
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0320b5c4 with catch @ 0320b68c
                        */
      if ((plVar4 == (long *)0x0) ||
         (plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400)),
         plVar4 == (long *)0x0)) goto LAB_0320b84c;
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0320b640 with catch @ 0320b690
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0320b67c with catch @ 0320b694
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0320b678 with catch @ 0320b698
                        */
      uVar8 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0320b62c with catch @ 0320b69c
                        */
      plVar4 = *(long **)(param_1 + 0x10);
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0320b650 with catch @ 0320b6a0
                        */
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
                    /* try { // try from 0320b6b8 to 0330b6bb has its CatchHandler @ 0320b6c8 */
      lVar7 = *(long *)(param_1 + 0x58);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
                    /* catch() { ... } // from try @ 0320b6b8 with catch @ 0320b6c8 */
      if (*(uint *)(lVar7 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
                    /* try { // try from 0320b6d4 to 0330b6df has its CatchHandler @ 0320b6f4 */
                    /* try { // try from 0320b6e0 to 0330b6eb has its CatchHandler @ 0320b57c */
      (**(code **)(*plVar4 + 0x208))
                (plVar4,(long)*(int *)(lVar7 + uVar9 * 4 + 0x20),*(undefined8 *)(*plVar4 + 0x210));
      plVar4 = *(long **)(param_1 + 0x10);
                    /* try { // try from 0320b6ec to 0330b6f3 has its CatchHandler @ 0320b6f4 */
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320b6d4 with catch @ 0320b6f4
                       catch(type#2 @ 00000000) { ... } // from try @ 0320b6ec with catch @ 0320b6f4
                        */
      uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
      plVar4 = *(long **)(param_1 + 0x50);
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar6 = (long *)FUN_01c5d624(uVar5,1,*(undefined8 *)
                                             UnityEngine_UIElements_NavigationSubmitEvent_TypeInfo,
                                    *(undefined8 *)
                                     PlayerHUD_<DelayClearMaintenanceMessageDisplay>d__220_TypeInfo)
      ;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (plVar6 != (long *)0x0) {
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar6);
        }
        lVar7 = thunk_FUN_01c495e4(plVar6,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar7 == 0) {
                    /* try { // try from 0320b8d8 to 0330b8db has its CatchHandler @ 0320b8e8 */
          uVar8 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar8,0);
        }
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar6);
        }
      }
      if (*(uint *)(plVar4 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar4[uVar9 + 4] = (long)plVar6;
      plVar4 = *(long **)(param_1 + 0x10);
      if ((plVar4 == (long *)0x0) ||
         (plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400)),
         plVar4 == (long *)0x0)) goto LAB_0320b84c;
      (**(code **)(*plVar4 + 0x208))(plVar4,uVar8,*(undefined8 *)(*plVar4 + 0x210));
    }
    lVar7 = *(long *)(param_1 + 0x50);
    if (lVar7 == 0) {
LAB_0320b84c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (param_2 < *(uint *)(lVar7 + 0x18)) {
      return *(undefined8 *)(lVar7 + uVar9 * 8 + 0x20);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


