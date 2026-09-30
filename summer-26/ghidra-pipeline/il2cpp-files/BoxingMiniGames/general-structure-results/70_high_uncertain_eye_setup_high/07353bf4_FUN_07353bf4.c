/*
FUNCTION_NAME: FUN_07353bf4
ENTRY_POINT: 07353bf4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07353bf4(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
                    /* try { // try from 07353bf4 to 07453bfb has its CatchHandler @ 07354b8c */
  if ((DAT_07ef30da & 1) == 0) {
                    /* try { // try from 07353c2c to 07453c33 has its CatchHandler @ 07354b44 */
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                );
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Key__);
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Value__);
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Key__);
                    /* try { // try from 07353c5c to 07453c63 has its CatchHandler @ 07354b3c */
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<NativeSlice<CopyMeshJobData>>_Dispose__
                );
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Value__)
    ;
    FUN_03642964(PTR_DAT_07a26870);
                    /* try { // try from 07353c80 to 07453c8b has its CatchHandler @ 07354b28 */
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Key__
                );
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Value__
                );
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<IInteractableView,_InteractionBroadcaster_Handler>_get_Key__
                );
    FUN_03642964(Unity_Properties_Internal_SystemVersionPropertyBag_BuildProperty_TypeInfo);
                    /* try { // try from 07353cb0 to 07453d27 has its CatchHandler @ 07354b74 */
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<IPoolable,_HashPool>_get_Value__);
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Key__);
    DAT_07ef30da = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0459fb44(&local_80,*(long *)(param_1 + 0x18),
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Key__)
    ;
    local_90 = local_70;
    puStack_b0 = &local_a0;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_b8 = 0;
    while (uVar6 = FUN_05897b28(&local_a0,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Value__
                               ), lVar8 = local_90, (uVar6 & 1) != 0) {
      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(char *)(local_90 + 0x38) != '\0') {
        lVar10 = *(long *)(local_90 + 0x10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(long *)(lVar10 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar11 = *(undefined8 *)(local_90 + 0x20);
        uStack_c0 = *(undefined8 *)(local_90 + 0x30);
        local_c8 = *(undefined8 *)(local_90 + 0x28);
                    /* try { // try from 07353d4c to 07453d53 has its CatchHandler @ 07354b84 */
        local_d0 = uVar11;
        UnityEngine_UIElements_MouseDownEvent__GetPooled(*(long *)(lVar10 + 0x2e0),&local_d0);
        if (*(long *)(lVar10 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_07351a7c();
                    /* try { // try from 07353d6c to 07453d73 has its CatchHandler @ 07354b7c */
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<NativeSlice<CopyMeshJobData>>_Dispose__
                    + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_07284264(0);
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_074821b0(param_2,&local_a8,0);
        uVar5 = local_a8;
                    /* try { // try from 07353da4 to 07453daf has its CatchHandler @ 07354b2c */
        uVar2 = *(undefined8 *)(param_1 + 0x48);
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        uVar14 = *(undefined8 *)(param_1 + 0x40);
        uVar15 = *(undefined8 *)(param_1 + 0x58);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                    + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
                    /* try { // try from 07353dd8 to 07453ddf has its CatchHandler @ 07354ad4 */
        FUN_073540e4(uVar11,uVar5,lVar10,uVar3,uVar2,uVar4,uVar15,uVar14);
        lVar13 = *(long *)(lVar10 + 0x2d8);
        if (lVar13 != 0) {
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
                    /* try { // try from 07353e00 to 07453e0b has its CatchHandler @ 07354b14 */
          FUN_0735cc7c(&local_e8,lVar10,*(undefined8 *)(param_1 + 0x48),uVar11,0);
          uStack_78 = uStack_e0;
          local_80 = local_e8;
          local_70 = local_d8;
          (**(code **)(lVar13 + 0x18))
                    (*(undefined8 *)(lVar13 + 0x40),&local_80,*(undefined8 *)(lVar13 + 0x28));
        }
                    /* try { // try from 07353e3c to 07453e43 has its CatchHandler @ 07354b90 */
        lVar13 = FUN_0735ca7c(lVar8 + 0x18,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_074822dc(param_2,*(undefined8 *)(lVar13 + 0x18),lVar10,*(undefined8 *)(lVar10 + 0x88),0)
        ;
        plVar12 = *(long **)(param_2 + 0x48);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar13 = *plVar12;
        uVar14 = *(undefined8 *)(param_1 + 0x58);
        uVar11 = *(undefined8 *)(param_1 + 0x48);
        uVar3 = *(undefined8 *)(param_1 + 0x50);
                    /* try { // try from 07353e74 to 07453e7b has its CatchHandler @ 07354b48 */
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
        uVar2 = *(undefined8 *)(param_1 + 0x38);
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
                    /* try { // try from 07353e98 to 07453ea3 has its CatchHandler @ 07354b40 */
            if (*(long *)(piVar9 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Value__)
            {
              puVar7 = (undefined8 *)(lVar13 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_07353ec8;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
                    /* try { // try from 07353ea4 to 07453eaf has its CatchHandler @ 07354b38 */
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_0367cd30(plVar12,*(long *)
                                       Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Value__
                              ,2);
LAB_07353ec8:
                    /* try { // try from 07353edc to 07453f53 has its CatchHandler @ 07354b78 */
        (*(code *)*puVar7)(plVar12,uVar11,uVar3,uVar2,uVar14,uVar4,puVar7[1]);
        UnityEngine_UIElements_NavigationCancelEvent_<>c___ctor(lVar10,param_2);
        lVar10 = *(long *)(param_1 + 0x38);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        iVar1 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_05e3b0f4(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
        }
        lVar10 = *(long *)(param_1 + 0x48);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        lVar10 = *(long *)(param_1 + 0x50);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 07354014 to 0745401f has its CatchHandler @ 07354b74 */
          FUN_03642c18();
        }
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        lVar10 = *(long *)(param_1 + 0x58);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
                    /* try { // try from 07353f58 to 07453f5f has its CatchHandler @ 07354b60 */
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        lVar10 = *(long *)(param_1 + 0x40);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    /* try { // try from 07353f78 to 07453f7f has its CatchHandler @ 07354ae0 */
        FUN_0748249c(param_2,0);
      }
      FUN_07354ce4(lVar8);
    }
                    /* try { // try from 07353f98 to 07453f9f has its CatchHandler @ 07354adc */
    FUN_05897b24(&local_a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Key__);
    lVar8 = *(long *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 0;
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05e3b0f4(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
                    /* try { // try from 07353fd0 to 07453fdb has its CatchHandler @ 07354b78 */
      FUN_05d345c4(param_1 + 0x10,0);
                    /* try { // try from 07353ff4 to 07453ffb has its CatchHandler @ 07354b60 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


