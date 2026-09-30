/*
FUNCTION_NAME: FUN_055a347c
ENTRY_POINT: 055a347c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x055a37d8) */
/* WARNING: Removing unreachable block (ram,0x055a3688) */
/* WARNING: Removing unreachable block (ram,0x055a382c) */

void FUN_055a347c(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 local_a8;
  char *pcStack_a0;
  long *local_98;
  char local_8c [4];
  long local_88;
  undefined8 local_80;
  char *pcStack_78;
  long *local_70;
  
  if ((DAT_06dbb5d6 & 1) == 0) {
    FUN_02d965b8(System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_var)
    ;
    FUN_02d965b8(OVRPlugin_Qpl_Annotation_Builder_var);
    FUN_02d965b8(PTR_DAT_06a0b000);
    FUN_02d965b8(PTR_DAT_06a0b010);
    FUN_02d965b8(PTR_DAT_06a0b020);
    FUN_02d965b8(
                UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_TypeInfo
                );
    FUN_02d965b8(UnityEngine_UIElements_UIR_UIRenderDevice_AllocToFree_var);
    FUN_02d965b8(PTR_DAT_06a0b080);
    FUN_02d965b8(
                UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>_TypeInfo
                );
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_RuntimeSettings_DistanceOption_var);
    DAT_06dbb5d6 = 1;
  }
  local_80 = 0;
  pcStack_78 = (char *)0x0;
  local_70 = (long *)0x0;
  local_88 = 0;
  local_8c[0] = '\0';
  lVar5 = (**(code **)(*param_1 + 0x198))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1a0));
  puVar4 = UnityEngine_UIElements_UIR_UIRenderDevice_AllocToFree_var;
  puVar3 = PTR_DAT_06a0b080;
  puVar2 = PTR_DAT_06a0b010;
  puVar1 = PTR_DAT_06a0b000;
  if (lVar5 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_06a0e080);
    uVar9 = thunk_FUN_02dd3144();
    uVar11 = thunk_FUN_02dfd288(System_Action<ChangeEvent<bool>>_TypeInfo);
    thunk_FUN_05570294(uVar9,uVar11,0);
    uVar11 = thunk_FUN_02dfd288(
                               System_Action<Dictionary<int,_Dictionary<string,_ChangedOrRemovedLobbyValue<PlayerDataObject>>>>_TypeInfo
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar9,uVar11);
  }
  lVar6 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_055aa3d4(lVar7,param_2,0);
  FUN_04010c90(&local_a8,lVar5,*(undefined8 *)puVar3);
  local_70 = local_98;
  pcStack_78 = pcStack_a0;
  local_80 = local_a8;
  while( true ) {
    do {
      uVar8 = FUN_05156804(&local_80,*(undefined8 *)puVar2);
      if ((uVar8 & 1) == 0) {
        FUN_05156800(&local_80,*(undefined8 *)puVar1);
        puVar1 = Meta_XR_ImmersiveDebugger_RuntimeSettings_DistanceOption_var;
        lVar5 = *(long *)Meta_XR_ImmersiveDebugger_RuntimeSettings_DistanceOption_var;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar5 = *(long *)puVar1;
        }
        puVar12 = *(undefined8 **)(lVar5 + 0xb8);
        lVar6 = puVar12[6];
        if (lVar6 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            puVar12 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar9 = *puVar12;
          lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                      UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_TypeInfo
                                    );
          FUN_03b78798(lVar6,uVar9,
                       *(undefined8 *)
                        UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>_TypeInfo
                       ,0);
          plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
          *plVar10 = lVar6;
          LeanTween__value(plVar10,lVar6);
        }
        uVar9 = FUN_0360a08c(lVar7,lVar6,
                             *(undefined8 *)
                              System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_var
                            );
        FUN_03615f24(uVar9,*(undefined8 *)OVRPlugin_Qpl_Annotation_Builder_var);
        return;
      }
      lVar5 = (**(code **)(*param_1 + 0x298))
                        (param_1,local_70,param_3,*(undefined8 *)(*param_1 + 0x2a0));
    } while (lVar5 == 0);
    local_8c[0] = '\0';
    local_a8 = 0;
    pcStack_a0 = local_8c;
    local_98 = &local_88;
    local_88 = lVar6;
    FUN_0554bf68(lVar6,local_8c,0);
    if (lVar6 == 0) break;
    uVar9 = FUN_0556e830(lVar6,*(undefined8 *)(lVar5 + 0x30),0);
    FUN_055ab7c8(lVar5,uVar9,0);
    if (local_8c[0] != '\0') {
      thunk_FUN_02da42ec(*local_98,0);
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_055abbcc(lVar7,lVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


