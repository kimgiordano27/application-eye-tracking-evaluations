/*
FUNCTION_NAME: FUN_034d4120
ENTRY_POINT: 034d4120
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x034d42d8) */

undefined8 FUN_034d4120(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  
  puVar3 = Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__;
                    /* catch() { ... } // from try @ 034d4114 with catch @ 034d412c */
  if ((DAT_04832d48 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__);
                    /* try { // try from 034d4164 to 035d418b has its CatchHandler @ 034d41a0 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04832d48 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar3);
                    /* try { // try from 034d418c to 035d4197 has its CatchHandler @ 034d3f54 */
                    /* try { // try from 034d4198 to 035d419f has its CatchHandler @ 034d41a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034d4164 with catch @ 034d41a0
                       catch(type#2 @ 00000000) { ... } // from try @ 034d4198 with catch @ 034d41a0
                        */
                    /* try { // try from 034d41a4 to 035d420f has its CatchHandler @ 034d41a4
                       catch() { ... } // from try @ 034d41a4 with catch @ 034d41a4
                       catch() { ... } // from try @ 034d4268 with catch @ 034d41a4
                       catch() { ... } // from try @ 034d4350 with catch @ 034d41a4
                       catch() { ... } // from try @ 034d4358 with catch @ 034d41a4
                       catch() { ... } // from try @ 034d4414 with catch @ 034d41a4 */
  FUN_034dead8(plVar5,param_1,3,1,1,1,0,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
  if (0x7fffffff < (long)uVar6) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
    uVar7 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_ReadArrayElement<byte>__
                              );
    FUN_034c6a10(uVar7,uVar9,0);
    uVar9 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AsRef<BuddyAllocator_Header>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar9);
  }
  if (uVar6 == 0) {
    uVar7 = FUN_034d4408(plVar5);
                    /* try { // try from 034d4234 to 035d423b has its CatchHandler @ 034d4370 */
  }
  else {
    uVar7 = FUN_01f08890(*(undefined8 *)
                          Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                         uVar6 & 0xffffffff);
    if (0 < (int)uVar6) {
      iVar12 = 0;
      do {
                    /* try { // try from 034d4210 to 035d4217 has its CatchHandler @ 034d4378 */
        iVar4 = (**(code **)(*plVar5 + 0x328))
                          (plVar5,uVar7,iVar12,uVar6 & 0xffffffff,*(undefined8 *)(*plVar5 + 0x330));
        if (iVar4 == 0) {
          uVar7 = FUN_034c6b60(0);
          uVar9 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AsRef<BuddyAllocator_Header>__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar7,uVar9);
        }
        uVar1 = (int)uVar6 - iVar4;
        uVar6 = (ulong)uVar1;
                    /* try { // try from 034d421c to 035d4223 has its CatchHandler @ 034d4374 */
        iVar12 = iVar4 + iVar12;
      } while (0 < (int)uVar1);
    }
  }
  lVar10 = *plVar5;
                    /* try { // try from 034d4240 to 035d4247 has its CatchHandler @ 034d4368 */
  uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
                    /* try { // try from 034d425c to 035d4267 has its CatchHandler @ 034d4360 */
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_034d4288;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
                    /* try { // try from 034d4268 to 035d434b has its CatchHandler @ 034d41a4 */
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_034d4288:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return uVar7;
}


