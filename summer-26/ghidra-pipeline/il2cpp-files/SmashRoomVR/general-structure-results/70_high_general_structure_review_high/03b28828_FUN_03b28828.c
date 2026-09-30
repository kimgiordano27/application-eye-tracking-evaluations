/*
FUNCTION_NAME: FUN_03b28828
ENTRY_POINT: 03b28828
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_8
*/


void FUN_03b28828(long param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  
  puVar4 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
                    /* try { // try from 03b28830 to 03c28837 has its CatchHandler @ 03b289b4 */
                    /* try { // try from 03b28838 to 03c2886f has its CatchHandler @ 03b28500 */
  if ((DAT_03ffdb8a & 1) == 0) {
                    /* catch() { ... } // from try @ 03b28808 with catch @ 03b28854 */
                    /* catch() { ... } // from try @ 03b287f4 with catch @ 03b28858 */
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db7028);
                    /* try { // try from 03b28870 to 03c28873 has its CatchHandler @ 03b28984 */
    thunk_FUN_01ad9084(PTR_DAT_03db7030);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdb8a = 1;
  }
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 03b28898 to 03c288b3 has its CatchHandler @ 03b28994 */
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03b26f4c();
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 03b288b4 to 03c2891b has its CatchHandler @ 03b28500 */
    thunk_FUN_01ac7298(*(long *)puVar3);
  }
  uVar6 = FUN_0391f968(uVar5,param_1,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  FUN_03b28714(param_1);
  puVar4 = PTR_DAT_03db7030;
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    if (iVar1 < 1) {
LAB_03b2898c:
      bVar2 = false;
LAB_03b28990:
                    /* catch() { ... } // from try @ 03b28980 with catch @ 03b28990 */
                    /* catch() { ... } // from try @ 03b28898 with catch @ 03b28994 */
      uVar5 = *(undefined8 *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 03b28668 with catch @ 03b28998 */
                    /* catch() { ... } // from try @ 03b28970 with catch @ 03b2899c */
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03b2896c with catch @ 03b289a0 */
        thunk_FUN_01ac7298();
      }
                    /* catch() { ... } // from try @ 03b28964 with catch @ 03b289a4 */
                    /* catch() { ... } // from try @ 03b286d0 with catch @ 03b289a8 */
                    /* catch() { ... } // from try @ 03b28788 with catch @ 03b289ac */
                    /* catch() { ... } // from try @ 03b287d8 with catch @ 03b289b0 */
      uVar6 = FUN_03922f24(uVar5,0,0);
      puVar4 = PTR_DAT_03db7030;
                    /* catch() { ... } // from try @ 03b28830 with catch @ 03b289b4 */
                    /* catch() { ... } // from try @ 03b28960 with catch @ 03b289b8 */
                    /* catch() { ... } // from try @ 03b2895c with catch @ 03b289bc */
      if (((uVar6 & 1) != 0) && (0 < iVar1)) {
                    /* catch() { ... } // from try @ 03b2877c with catch @ 03b289c0 */
                    /* catch() { ... } // from try @ 03b287bc with catch @ 03b289c4 */
                    /* catch() { ... } // from try @ 03b286fc with catch @ 03b289c8 */
        iVar9 = 0;
        do {
                    /* catch() { ... } // from try @ 03b28720 with catch @ 03b289cc */
                    /* catch() { ... } // from try @ 03b2876c with catch @ 03b289d0 */
                    /* catch() { ... } // from try @ 03b28798 with catch @ 03b289d4 */
                    /* catch() { ... } // from try @ 03b286b4 with catch @ 03b289d8 */
                    /* catch() { ... } // from try @ 03b28698 with catch @ 03b289dc */
                    /* catch() { ... } // from try @ 03b2891c with catch @ 03b289e0 */
          if ((*(long *)(param_1 + 0x20) == 0) ||
             (plVar8 = (long *)FUN_02b59714(*(long *)(param_1 + 0x20),iVar9,*(undefined8 *)puVar4),
             plVar8 == (long *)0x0)) goto LAB_03b28a8c;
                    /* catch() { ... } // from try @ 03b28738 with catch @ 03b289e4 */
          uVar6 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
          if ((uVar6 & 1) != 0) {
            FUN_03b28a90(param_1,plVar8);
            return;
          }
          iVar9 = iVar9 + 1;
        } while (iVar1 != iVar9);
      }
      if (!bVar2) {
                    /* try { // try from 03b28a0c to 03c28a0f has its CatchHandler @ 03b28a1c */
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03b28a0c with catch @ 03b28a1c */
          thunk_FUN_01ac7298();
        }
                    /* try { // try from 03b28a2c to 03c28a3b has its CatchHandler @ 03b28a50 */
        uVar6 = FUN_0391f968(uVar5,0,0);
        if ((uVar6 & 1) != 0) {
          plVar8 = *(long **)(param_1 + 0x28);
          if (plVar8 != (long *)0x0) {
                    /* try { // try from 03b28a3c to 03c28a47 has its CatchHandler @ 03b28500 */
                    /* try { // try from 03b28a48 to 03c28a4f has its CatchHandler @ 03b28a50 */
                    /* catch() { ... } // from try @ 03b28934 with catch @ 03b28a50
                       catch() { ... } // from try @ 03b28a2c with catch @ 03b28a50
                       catch() { ... } // from try @ 03b28a48 with catch @ 03b28a50 */
                    /* WARNING: Could not recover jumptable at 0x03b28a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
            return;
          }
          goto LAB_03b28a8c;
        }
      }
      return;
    }
    iVar9 = 0;
    do {
      plVar8 = (long *)FUN_02b59714(lVar7,iVar9,*(undefined8 *)puVar4);
      if (plVar8 == (long *)0x0) break;
      uVar6 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
                    /* try { // try from 03b2891c to 03c2891f has its CatchHandler @ 03b289e0 */
                    /* try { // try from 03b28934 to 03c2895b has its CatchHandler @ 03b28a50 */
      if (((uVar6 & 1) != 0) &&
         (uVar6 = (**(code **)(*plVar8 + 0x288))(plVar8,*(undefined8 *)(*plVar8 + 0x290)),
         (uVar6 & 1) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 03b2895c to 03c2895f has its CatchHandler @ 03b289bc */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 03b28960 to 03c28963 has its CatchHandler @ 03b289b8 */
          thunk_FUN_01ac7298();
        }
                    /* try { // try from 03b28964 to 03c2896b has its CatchHandler @ 03b289a4 */
                    /* try { // try from 03b2896c to 03c2896f has its CatchHandler @ 03b289a0 */
                    /* try { // try from 03b28970 to 03c28973 has its CatchHandler @ 03b2899c */
        uVar6 = FUN_0391f968(uVar5,plVar8,0);
                    /* try { // try from 03b28974 to 03c2897f has its CatchHandler @ 03b28500 */
        if ((uVar6 & 1) == 0) goto LAB_03b2898c;
                    /* try { // try from 03b28980 to 03c28983 has its CatchHandler @ 03b28990 */
        FUN_03b28a90(param_1,plVar8);
                    /* catch() { ... } // from try @ 03b28870 with catch @ 03b28984
                       try { // try from 03b28984 to 03c28a0b has its CatchHandler @ 03b28500 */
        bVar2 = true;
        goto LAB_03b28990;
      }
      iVar9 = iVar9 + 1;
      if (iVar1 == iVar9) goto LAB_03b2898c;
      lVar7 = *(long *)(param_1 + 0x20);
    } while (lVar7 != 0);
  }
LAB_03b28a8c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


