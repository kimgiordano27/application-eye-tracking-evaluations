/*
FUNCTION_NAME: FUN_0621b724
ENTRY_POINT: 0621b724
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void FUN_0621b724(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  
                    /* catch() { ... } // from try @ 0621b14c with catch @ 0621b724 */
                    /* catch() { ... } // from try @ 0621b6a8 with catch @ 0621b730 */
                    /* catch() { ... } // from try @ 0621b6a4 with catch @ 0621b734 */
                    /* catch() { ... } // from try @ 0621b398 with catch @ 0621b738 */
                    /* catch() { ... } // from try @ 0621b6a0 with catch @ 0621b73c */
  if ((DAT_06dc711c & 1) == 0) {
                    /* catch() { ... } // from try @ 0621b360 with catch @ 0621b740 */
                    /* catch() { ... } // from try @ 0621b2fc with catch @ 0621b744 */
    FUN_02d965b8(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnMoveManipulatorActivated__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_MultiColumnController_OnColumnAdded__);
                    /* try { // try from 0621b760 to 0631b763 has its CatchHandler @ 0621b824 */
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_UnmanagedByMemcpy<Vector3>__
                );
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_UnmanagedINetworkSerializable<PlayerScoreData>__
                );
                    /* try { // try from 0621b774 to 0631b77b has its CatchHandler @ 0621b840 */
    FUN_02d965b8(Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__);
                    /* try { // try from 0621b77c to 0631b793 has its CatchHandler @ 0621b028 */
    DAT_06dc711c = 1;
  }
  puVar1 = 
  Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_UnmanagedByMemcpy<Vector3>__
  ;
  if (*(long *)(param_1 + 0x70) != 0) {
                    /* try { // try from 0621b794 to 0631b797 has its CatchHandler @ 0621b7a4 */
    FUN_061d59b8(*(long *)(param_1 + 0x70),0);
    plVar7 = (long *)(param_1 + 0x60);
                    /* catch() { ... } // from try @ 0621b794 with catch @ 0621b7a4 */
    if (*plVar7 == 0) {
                    /* try { // try from 0621b7ac to 0631b7b3 has its CatchHandler @ 0621b840 */
                    /* try { // try from 0621b7b4 to 0631b7c7 has its CatchHandler @ 0621b028 */
      lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__)
      ;
      FUN_06287784(lVar2,0);
                    /* try { // try from 0621b7c8 to 0631b7df has its CatchHandler @ 0621b830 */
      *plVar7 = lVar2;
      LeanTween__value(plVar7,lVar2);
    }
    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
                    /* try { // try from 0621b7e0 to 0631b813 has its CatchHandler @ 0621b028 */
    FUN_06286114(lVar2,0);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x10) = 3;
      *(undefined1 *)(lVar2 + 0x18) = 1;
      lVar8 = *(long *)(param_1 + 0x60);
      *(undefined4 *)(lVar2 + 0x1c) = 0x42b3cccd;
                    /* try { // try from 0621b814 to 0631b823 has its CatchHandler @ 0621b830 */
      uVar3 = FUN_0634bb04(param_1,0);
      if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 0621b760 with catch @ 0621b824 */
                    /* catch() { ... } // from try @ 0621b7c8 with catch @ 0621b830
                       catch() { ... } // from try @ 0621b814 with catch @ 0621b830 */
        FUN_062879ac(lVar8,uVar3,lVar2,0,0);
                    /* try { // try from 0621b834 to 0631b837 has its CatchHandler @ 0621b840 */
                    /* try { // try from 0621b838 to 0631b843 has its CatchHandler @ 0621b028 */
        if (*plVar7 != 0) {
                    /* catch() { ... } // from try @ 0621b774 with catch @ 0621b840
                       catch() { ... } // from try @ 0621b7ac with catch @ 0621b840
                       catch() { ... } // from try @ 0621b834 with catch @ 0621b840 */
          FUN_062881e4(DAT_010fd060,*plVar7,0);
          puVar1 = 
          Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_UnmanagedINetworkSerializable<PlayerScoreData>__
          ;
          if (*(long *)(param_1 + 0x60) != 0) {
            lVar2 = *(long *)(param_1 + 0x70);
            plVar7 = *(long **)(*(long *)(param_1 + 0x60) + 0x18);
            uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnMoveManipulatorActivated__
                                      );
            FUN_04be2eb4(uVar3,param_1,*(undefined8 *)puVar1,0);
            if (plVar7 != (long *)0x0) {
              lVar8 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      *(long *)Method_UnityEngine_UIElements_MultiColumnController_OnColumnAdded__)
                  {
                    puVar4 = (undefined8 *)(lVar8 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                    goto LAB_0621b8e4;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)
                       FUN_02dd004c(plVar7,*(long *)
                                            Method_UnityEngine_UIElements_MultiColumnController_OnColumnAdded__
                                    ,1);
LAB_0621b8e4:
              uVar3 = (*(code *)*puVar4)(plVar7,uVar3,puVar4[1]);
              if (lVar2 != 0) {
                FUN_061d5624(lVar2,uVar3,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


