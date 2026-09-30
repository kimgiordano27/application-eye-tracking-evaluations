/*
FUNCTION_NAME: Unity.Entities.StructuralChange.AddSharedComponentQuery_00000F98$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 030a7478
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Entities_StructuralChange_AddSharedComponentQuery_00000F98_PostfixBurstDelegate___ctor
               (undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong unaff_x21;
  long lVar8;
  undefined8 uVar9;
  
  FUN_036aa280(param_1,0);
  if ((unaff_x21 & 1) != 0) {
                    /* try { // try from 030a7484 to 031a748f has its CatchHandler @ 030a75a8 */
    FUN_036a45c0();
                    /* try { // try from 030a7498 to 031a749f has its CatchHandler @ 030a75ac */
    FUN_036a466c();
                    /* try { // try from 030a74a0 to 031a74eb has its CatchHandler @ 030a7324 */
    uVar4 = FUN_039a67c8(0);
    if ((uVar4 & 1) != 0) {
      uVar5 = FUN_036a4718();
      puVar1 = System_Action<Exception>_TypeInfo;
      lVar7 = *(long *)System_Action<Exception>_TypeInfo;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar7);
        lVar7 = *(long *)puVar1;
      }
      lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                    /* try { // try from 030a74ec to 031a74f3 has its CatchHandler @ 030a75b4 */
      if (lVar8 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
                    /* try { // try from 030a74fc to 031a7507 has its CatchHandler @ 030a7590 */
          thunk_FUN_01a58e78(lVar7);
          lVar7 = *(long *)puVar1;
        }
                    /* try { // try from 030a7510 to 031a751b has its CatchHandler @ 030a759c */
        uVar9 = **(undefined8 **)(lVar7 + 0xb8);
        lVar8 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
                    /* try { // try from 030a7524 to 031a753b has its CatchHandler @ 030a7608 */
        FUN_021de1ac(lVar8,uVar9,*(undefined8 *)System_Action<EventData>_TypeInfo,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar6 = lVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar8);
      }
      uVar5 = FUN_01f6d39c(uVar5,lVar8,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
      FUN_01f70920(uVar5,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
    }
    iVar2 = FUN_036a2ca8();
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray();
        FUN_036a2d20();
        FUN_036a2dec();
        FUN_036a2eb4();
        iVar2 = iVar2 + 1;
        iVar3 = FUN_036a2ca8();
      } while (iVar2 < iVar3);
    }
  }
  return;
}


