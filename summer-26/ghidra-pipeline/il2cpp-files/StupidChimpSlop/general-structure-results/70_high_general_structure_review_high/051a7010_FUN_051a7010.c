/*
FUNCTION_NAME: FUN_051a7010
ENTRY_POINT: 051a7010
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2
*/


void FUN_051a7010(long param_1,undefined8 param_2)

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
  
  puVar3 = UnityEngine_RaycastHit_var;
                    /* try { // try from 051a7010 to 052a701f has its CatchHandler @ 051a7020 */
  puVar2 = PlayFab_EconomyModels_GetDraftItemRequest_var;
                    /* catch() { ... } // from try @ 051a6f84 with catch @ 051a7020
                       catch() { ... } // from try @ 051a7010 with catch @ 051a7020 */
                    /* try { // try from 051a7024 to 052a7027 has its CatchHandler @ 051a7030 */
                    /* try { // try from 051a7028 to 052a7033 has its CatchHandler @ 051a6d90 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 051a7024 with catch @ 051a7030
                        */
  if ((DAT_06a51d90 & 1) == 0) {
    FUN_02d4dc40(PlayFab_EconomyModels_GetDraftItemRequest_var);
    FUN_02d4dc40(UnityEngine_RaycastHit_var);
    FUN_02d4dc40(Photon_Realtime_Player_var);
    FUN_02d4dc40(UnityEngine_EventSystems_RaycastResult_var);
    FUN_02d4dc40(System_ComponentModel_ReadOnlyAttribute_var);
    FUN_02d4dc40(System_Collections_ObjectModel_ReadOnlyCollection<T>_var);
    DAT_06a51d90 = 1;
  }
  puVar5 = System_Collections_ObjectModel_ReadOnlyCollection<T>_var;
  puVar4 = System_ComponentModel_ReadOnlyAttribute_var;
  FUN_0476fce8(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar7 = FUN_0517d22c(param_2,0);
  uVar6 = FUN_0505bfd4(uVar7,0);
  lVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
  FUN_036a5618(lVar8,(ulong)uVar6,*(undefined8 *)puVar4);
  plVar13 = (long *)(param_1 + 0x10);
  *plVar13 = lVar8;
  thunk_FUN_02dc1ef0(plVar13,lVar8);
  puVar4 = UnityEngine_EventSystems_RaycastResult_var;
  puVar3 = Photon_Realtime_Player_var;
  if (0 < (int)uVar6) {
    uVar14 = 0;
    do {
      lVar8 = *plVar13;
      uVar7 = FUN_0505bfd8(uVar14,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*(long *)puVar2);
      }
      uVar7 = FUN_0517d0d4(param_2,uVar7,0);
      uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
      FUN_051a48d8(uVar9,uVar7);
      if (lVar8 == 0) {
LAB_051a7234:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_051a7234;
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
  uVar7 = FUN_0517d158(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x18),uVar7);
  return;
}


