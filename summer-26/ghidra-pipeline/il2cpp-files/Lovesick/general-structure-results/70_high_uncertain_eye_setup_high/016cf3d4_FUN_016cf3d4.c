/*
FUNCTION_NAME: FUN_016cf3d4
ENTRY_POINT: 016cf3d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_016cf3d4(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_033f3600;
                    /* catch() { ... } // from try @ 016cf380 with catch @ 016cf3d8
                       catch() { ... } // from try @ 016cf3c0 with catch @ 016cf3d8 */
                    /* try { // try from 016cf3dc to 017cf3df has its CatchHandler @ 016cf3e8 */
                    /* try { // try from 016cf3e0 to 017cf3eb has its CatchHandler @ 016cf310 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 016cf3dc with catch @ 016cf3e8
                        */
  if ((DAT_03778790 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(StringLiteral_596);
    thunk_FUN_00d48444(PTR_DAT_033edd40);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<object>_Add__);
    DAT_03778790 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = *(long *)puVar2;
  lVar4 = *(long *)(lVar7 + 0x20);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = *(long *)(lVar7 + 0x20);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  plVar5 = (long *)**(long **)(lVar4 + 0xb8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_38 = (**(code **)(*plVar5 + 0x178))
                       (plVar5,param_3 & 0xffffffff,*(undefined8 *)(*plVar5 + 0x180));
  puStack_58 = &local_38;
  local_60 = 0;
  uVar3 = (**(code **)(*param_1 + 0x338))
                    (param_1,local_38,0,param_3 & 0xffffffff,*(undefined8 *)(*param_1 + 0x340));
  if ((long)(ulong)uVar3 <= (long)(int)param_3) {
    local_70 = 0;
    uStack_68 = 0;
    FUN_00bd8038(&local_70,local_38,0,uVar3,*(undefined8 *)PTR_DAT_033edd40);
    uStack_48 = uStack_68;
    local_50 = local_70;
    FUN_013ae66c(&local_50,param_2,param_3,*(undefined8 *)StringLiteral_596);
    FUN_00bdf29c(&local_60);
    return uVar3;
  }
  thunk_FUN_00d48444(Method_Obi_ObiNativeList<Vector2>_CopyReplicate__);
  lVar4 = thunk_FUN_00d62348();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar6 = thunk_FUN_00d48444(System_Net_PathList_PathListComparer_TypeInfo);
  FUN_016c0654(lVar4,uVar6,0);
  uVar6 = thunk_FUN_00d48444(PTR_DAT_033f3008);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(lVar4,uVar6);
}


