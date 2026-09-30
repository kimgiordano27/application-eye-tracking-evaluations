/*
FUNCTION_NAME: FUN_02801580
ENTRY_POINT: 02801580
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_19;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02801580(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  
  puVar3 = Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_DeAlias__;
  if ((DAT_03788aef & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_11729);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_605A3F93AE7A97E00C156F977E942027EA532E263A5B440A4219984F803FDD04
                      );
    thunk_FUN_00d48444(PTR_DAT_033ecc90);
    thunk_FUN_00d48444(StringLiteral_5744);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_DeAlias__);
    thunk_FUN_00d48444(StringLiteral_2843);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NoteRecorder_NoteEventData>_Add__);
    thunk_FUN_00d48444(SpaceCombatEnemy_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ProBuilderMesh>_Add__);
    thunk_FUN_00d48444(Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRReferenceObject>_IndexOf__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PoseDetection_FeatureStateProvider<TransformFeature,_string>_ReadTouchedFeatureStates__
                      );
    thunk_FUN_00d48444(StringLiteral_1925);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnDisable__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_105_0_TypeInfo);
    DAT_03788aef = 1;
  }
  local_70 = 0;
  if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5744);
    if (lVar5 == 0) goto LAB_02801b64;
    FUN_01298da0(lVar5,*(undefined8 *)
                        Field_<PrivateImplementationDetails>_605A3F93AE7A97E00C156F977E942027EA532E263A5B440A4219984F803FDD04
                );
    **(long **)(*(long *)puVar3 + 0xb8) = lVar5;
    lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
    local_78 = 0;
    FUN_028165b4(&local_78,1,0,0);
    puVar2 = PTR_DAT_033ecc90;
    if (lVar5 == 0) goto LAB_02801b64;
    local_68 = local_78;
    FUN_01299e64(lVar5,*(undefined8 *)Method_System_Collections_Generic_List<ProBuilderMesh>_Add__,
                 &local_68,*(undefined8 *)PTR_DAT_033ecc90);
    lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
    local_80 = 0;
    FUN_028165b4(&local_80,2,0,0);
    if (lVar5 == 0) goto LAB_02801b64;
    local_68 = local_80;
    FUN_01299e64(lVar5,*(undefined8 *)StringLiteral_1925,&local_68,*(undefined8 *)puVar2);
    lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
    local_88 = 0;
    FUN_028165b4(&local_88,8,0,0);
    if (lVar5 == 0) goto LAB_02801b64;
    local_68 = local_88;
    FUN_01299e64(lVar5,*(undefined8 *)SpaceCombatEnemy_TypeInfo,&local_68,*(undefined8 *)puVar2);
    lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
    local_90 = 0;
    FUN_028165b4(&local_90,8,0,0);
    if (lVar5 == 0) goto LAB_02801b64;
    local_68 = local_90;
    FUN_01299e64(lVar5,*(undefined8 *)
                        Method_Oculus_Interaction_PoseDetection_FeatureStateProvider<TransformFeature,_string>_ReadTouchedFeatureStates__
                 ,&local_68,*(undefined8 *)puVar2);
    lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
    local_98 = 0;
    FUN_028165b4(&local_98,0x20,0,0);
    if (lVar5 == 0) goto LAB_02801b64;
    local_68 = local_98;
    FUN_01299e64(lVar5,*(undefined8 *)
                        Method_System_Collections_Generic_List<NoteRecorder_NoteEventData>_Add__,
                 &local_68,*(undefined8 *)puVar2);
    lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
    local_a0 = 0;
    FUN_028165b4(&local_a0,0x40,0,0);
    if (lVar5 == 0) goto LAB_02801b64;
    local_68 = local_a0;
    FUN_01299e64(lVar5,*(undefined8 *)StringLiteral_2843,&local_68,*(undefined8 *)puVar2);
    lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
    local_a8 = 0;
    FUN_028165b4(&local_a8,0x80,0,0);
    if (lVar5 == 0) goto LAB_02801b64;
    local_68 = local_a8;
    FUN_01299e64(lVar5,*(undefined8 *)
                        Method_System_Collections_Generic_List<XRReferenceObject>_IndexOf__,
                 &local_68,*(undefined8 *)puVar2);
    lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
    local_b0 = 0;
    FUN_028165b4(&local_b0,1,1,0);
    if (lVar5 == 0) goto LAB_02801b64;
    local_68 = local_b0;
    FUN_01299e64(lVar5,*(undefined8 *)Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__,
                 &local_68,*(undefined8 *)puVar2);
    lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
    local_b8 = 0;
    FUN_028165b4(&local_b8,0x20,1,0);
    if (lVar5 == 0) goto LAB_02801b64;
    local_68 = local_b8;
    FUN_01299e64(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo,&local_68,
                 *(undefined8 *)puVar2);
  }
  puVar2 = StringLiteral_11729;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if ((int)uVar1 < 1) {
      return;
    }
    uVar14 = 0;
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar14) {
LAB_02801b88:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar5 = *(long *)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar5 == 0) break;
      lVar6 = FUN_02817cec(lVar5,0);
      lVar7 = FUN_02817cec(lVar5,0);
      if (lVar7 == 0) break;
      uVar15 = 0;
      uVar13 = 0;
      uVar12 = 0;
      lVar16 = 0x20;
      while ((long)uVar15 < (long)*(int *)(lVar7 + 0x18)) {
        lVar7 = FUN_02817cec(lVar5,0);
        if (lVar7 == 0) goto LAB_02801b64;
        if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_02801b88;
        iVar4 = FUN_02816670(lVar7 + lVar16,0);
        if (iVar4 == 4) {
          if (lVar6 == 0) goto LAB_02801b64;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_02801b88;
          lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
          uVar8 = FUN_02816668(lVar6 + lVar16,0);
          if (lVar7 == 0) goto LAB_02801b64;
          uVar9 = FUN_0129eff4(lVar7,uVar8,&local_70,*(undefined8 *)puVar2);
          if ((uVar9 & 1) == 0) {
            plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
            if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_02801b88;
            lVar7 = FUN_02816668(lVar6 + lVar16,0);
            if (plVar10 == (long *)0x0) goto LAB_02801b64;
            if ((lVar7 != 0) &&
               (lVar11 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
              uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar8,0);
            }
            if ((int)plVar10[3] == 0) goto LAB_02801b88;
            plVar10[4] = lVar7;
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02661974(*(undefined8 *)
                          Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnDisable__
                         ,plVar10,0);
          }
          else if ((local_70 & 0x100000000) == 0) {
            uVar13 = (uint)local_70 | uVar13;
          }
          else {
            uVar12 = (uint)local_70 | uVar12;
          }
        }
        uVar15 = uVar15 + 1;
        lVar7 = FUN_02817cec(lVar5,0);
        lVar16 = lVar16 + 0x18;
        if (lVar7 == 0) goto LAB_02801b64;
      }
      uVar14 = uVar14 + 1;
      *(uint *)(lVar5 + 0x1c) = uVar13;
      *(uint *)(lVar5 + 0x20) = uVar12;
      if (uVar14 == uVar1) {
        return;
      }
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 == 0) break;
    } while( true );
  }
LAB_02801b64:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


