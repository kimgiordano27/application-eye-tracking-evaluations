/*
FUNCTION_NAME: FUN_05f84a30
ENTRY_POINT: 05f84a30
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


uint FUN_05f84a30(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined1 auVar21 [16];
  
  if ((DAT_06dc44e0 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<string>__ctor__);
    FUN_02d965b8(Method_UnityEngine_Events_UnityEvent<float>__ctor__);
    FUN_02d965b8(Method_Unity_XR_CoreUtils_ScriptableSettings<InteractionLayerSettings>__ctor__);
    FUN_02d965b8(
                Method_UnityEngine_Events_UnityEvent<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>_RemoveListener__
                );
                    /* try { // try from 05f84a94 to 06084a97 has its CatchHandler @ 05f84ab8 */
                    /* try { // try from 05f84a98 to 06084a9b has its CatchHandler @ 05f84aa8 */
    FUN_02d965b8(
                Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_CAPI_ovrAvatar2LoadRequestInfo>__ctor__
                );
                    /* try { // try from 05f84a9c to 06084ad7 has its CatchHandler @ 05f843ac */
                    /* catch() { ... } // from try @ 05f847ec with catch @ 05f84aa0 */
                    /* catch() { ... } // from try @ 05f84804 with catch @ 05f84aa4 */
    FUN_02d965b8(
                Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_CAPI_ovrAvatar2LoadRequestInfo>_Invoke__
                );
                    /* catch() { ... } // from try @ 05f84a98 with catch @ 05f84aa8 */
                    /* catch() { ... } // from try @ 05f84810 with catch @ 05f84aac */
                    /* catch() { ... } // from try @ 05f84830 with catch @ 05f84ab0 */
    FUN_02d965b8(
                Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>__ctor__
                );
                    /* catch() { ... } // from try @ 05f84568 with catch @ 05f84ab4 */
                    /* catch() { ... } // from try @ 05f84a94 with catch @ 05f84ab8 */
                    /* catch() { ... } // from try @ 05f847b8 with catch @ 05f84abc */
    FUN_02d965b8(PTR_DAT_069fba08);
    DAT_06dc44e0 = 1;
  }
                    /* try { // try from 05f84ad8 to 06084adb has its CatchHandler @ 05f84afc */
  if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
                    /* try { // try from 05f84adc to 06084aff has its CatchHandler @ 05f843ac */
    thunk_FUN_02df485c();
  }
  auVar21 = FUN_05f815b8(param_2);
                    /* catch() { ... } // from try @ 05f84ad8 with catch @ 05f84afc */
  uVar5 = FUN_06336d98(auVar21._0_8_,auVar21._8_8_,*(undefined8 *)(param_1 + 0x18),
                       *(undefined8 *)(param_1 + 0x20),0);
                    /* try { // try from 05f84b00 to 06084b07 has its CatchHandler @ 05f84b58 */
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 05f84b08 to 06084b27 has its CatchHandler @ 05f843ac */
    FUN_05f84db0(param_1);
    *(undefined1 (*) [16])(param_1 + 0x18) = auVar21;
    puVar2 = Method_Unity_XR_CoreUtils_ScriptableSettings<InteractionLayerSettings>__ctor__;
    uVar13 = *(ulong *)(param_2 + (ulong)*(byte *)(param_2 + 0x10) * 8);
    uVar12 = 2;
    if (*(char *)(param_2 + 0x11) == '\0') {
      uVar10 = 1;
    }
    else {
      uVar12 = 5;
      if (*(int *)(*(long *)
                    Method_Unity_XR_CoreUtils_ScriptableSettings<InteractionLayerSettings>__ctor__ +
                  0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dc427c == '\0') {
        FUN_02d965b8(Method_Unity_XR_CoreUtils_ScriptableSettings<InteractionLayerSettings>__ctor__)
        ;
        DAT_06dc427c = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar6 = *(long *)puVar2;
      }
      uVar10 = **(undefined4 **)(lVar6 + 0xb8);
    }
    lVar6 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    bVar4 = false;
    uVar14 = *(undefined8 *)PTR_DAT_069fba08;
    do {
      iVar20 = (int)lVar6;
      if (iVar20 < 2) {
        if (iVar20 == 0) {
          uVar19 = 0x25;
          cVar1 = *(char *)(param_2 + 0x10);
          puVar11 = (undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_CAPI_ovrAvatar2LoadRequestInfo>_Invoke__
          ;
        }
        else {
          if (iVar20 != 1) goto LAB_05f84c98;
          uVar19 = 6;
          cVar1 = *(char *)(param_2 + 0x10);
          puVar11 = (undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>__ctor__
          ;
        }
        bVar4 = cVar1 != '\0';
        uVar14 = *puVar11;
        uVar17 = uVar13;
        uVar18 = uVar13 >> 0x20;
      }
      else {
        if (iVar20 == 2) {
          if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar17 = FUN_05f8166c(uVar13);
          uVar18 = uVar17 >> 0x20;
          uVar19 = 5;
          bVar4 = *(char *)(param_2 + 0x10) != '\0';
          puVar11 = (undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_CAPI_ovrAvatar2LoadRequestInfo>__ctor__
          ;
        }
        else {
          if (iVar20 != 3) goto LAB_05f84c98;
          bVar4 = false;
          uVar19 = 0x4b;
          uVar17 = (ulong)*(uint *)(param_2 + 8);
          uVar18 = (ulong)*(uint *)(param_2 + 0xc);
          puVar11 = (undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>_RemoveListener__
          ;
        }
        uVar14 = *puVar11;
      }
LAB_05f84c98:
      lVar15 = 0;
      bVar3 = true;
      do {
        bVar9 = bVar3;
        plVar16 = *(long **)(param_1 + 0x10);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<string>__ctor__ +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar7 = FUN_05f8adb4(0,uVar17 & 0xffffffff,uVar18,uVar19,uVar10,0,0,uVar12,1,0,1,0,1,1,0,0,
                             bVar4,0,0,uVar14,0);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0)) {
          uVar14 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar14,0);
        }
        if ((ulong)*(uint *)(plVar16 + 3) <= (ulong)(lVar15 + lVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar16[lVar15 + lVar6 + 4] = lVar7;
        LeanTween__value(plVar16 + lVar15 + lVar6 + 4,lVar7);
        lVar15 = 4;
        bVar3 = false;
      } while (bVar9);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 4);
  }
  return (uVar5 ^ 0xffffffff) & 1;
}


