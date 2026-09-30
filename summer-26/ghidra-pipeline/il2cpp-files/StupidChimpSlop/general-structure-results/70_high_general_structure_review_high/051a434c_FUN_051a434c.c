/*
FUNCTION_NAME: FUN_051a434c
ENTRY_POINT: 051a434c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_051a434c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  puVar3 = UnityEngine_Physics_var;
                    /* try { // try from 051a434c to 052a436b has its CatchHandler @ 051a4988 */
  puVar2 = PlayFab_EconomyModels_GetDraftItemRequest_var;
  if ((DAT_06a51d74 & 1) == 0) {
    FUN_02d4dc40(UnityEngine_Physics2D_var);
    FUN_02d4dc40(PlayFab_EconomyModels_GetDraftItemRequest_var);
                    /* try { // try from 051a43a0 to 052a43a3 has its CatchHandler @ 051a4290 */
    FUN_02d4dc40(UnityEngine_Physics_var);
    FUN_02d4dc40(Photon_Realtime_PingMono_var);
    FUN_02d4dc40(UnityEngine_Rendering_Universal_PixelValidationChannels_var);
    FUN_02d4dc40(UnityEngine_Playables_PlayableBinding_var);
    DAT_06a51d74 = 1;
  }
  puVar5 = UnityEngine_Playables_PlayableBinding_var;
  puVar4 = UnityEngine_Rendering_Universal_PixelValidationChannels_var;
  FUN_0476fce8(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar7 = FUN_051788e0(param_2,0);
  uVar6 = FUN_0505bfd4(uVar7,0);
  lVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
  FUN_036a5618(lVar8,(ulong)uVar6,*(undefined8 *)puVar4);
  plVar13 = (long *)(param_1 + 0x10);
  *plVar13 = lVar8;
  thunk_FUN_02dc1ef0(plVar13,lVar8);
  puVar4 = Photon_Realtime_PingMono_var;
  puVar3 = UnityEngine_Physics2D_var;
  if (0 < (int)uVar6) {
    uVar14 = 0;
    do {
      lVar8 = *plVar13;
      uVar7 = FUN_0505bfd8(uVar14,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*(long *)puVar2);
      }
      uVar7 = Photon_Voice_Unity_VoiceConnection__set_FramesLostPercent(param_2,uVar7,0);
      uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
      FUN_051a4278(uVar9,uVar7);
      if (lVar8 == 0) {
LAB_051a4570:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_051a4570;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_02dc1ef0(puVar10,uVar9);
      }
      else {
        FUN_036a5e08(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar14 = uVar14 + 1;
    } while (uVar6 != uVar14);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar7 = FUN_0517880c(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x18),uVar7);
  return;
}


