/*
FUNCTION_NAME: FUN_055b1724
ENTRY_POINT: 055b1724
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_055b1724(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
                    /* try { // try from 055b1724 to 056b1733 has its CatchHandler @ 055b1758 */
                    /* try { // try from 055b1734 to 056b1737 has its CatchHandler @ 055b1740 */
                    /* try { // try from 055b1738 to 056b173b has its CatchHandler @ 055b1750 */
                    /* catch() { ... } // from try @ 055b16b0 with catch @ 055b173c */
                    /* catch() { ... } // from try @ 055b1734 with catch @ 055b1740 */
                    /* catch() { ... } // from try @ 055b16bc with catch @ 055b1744 */
                    /* catch() { ... } // from try @ 055b169c with catch @ 055b1748 */
  uVar2 = param_1;
  if ((DAT_066d17c6 & 1) == 0) {
                    /* catch() { ... } // from try @ 055b16d0 with catch @ 055b174c */
                    /* catch() { ... } // from try @ 055b16e8 with catch @ 055b1750
                       catch() { ... } // from try @ 055b1738 with catch @ 055b1750 */
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_Clear__
                );
                    /* catch() { ... } // from try @ 055b1668 with catch @ 055b1758
                       catch() { ... } // from try @ 055b1724 with catch @ 055b1758 */
                    /* try { // try from 055b1760 to 056b1763 has its CatchHandler @ 055b17a0 */
    FUN_02b3c81c(PTR_DAT_0631c5b8);
                    /* try { // try from 055b1764 to 056b1783 has its CatchHandler @ 055b1104 */
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_TryGetValue__
                );
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
                    /* try { // try from 055b1784 to 056b1787 has its CatchHandler @ 055b178c */
    uVar2 = FUN_02b3c81c(
                        UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo
                        );
                    /* catch() { ... } // from try @ 055b1784 with catch @ 055b178c */
    DAT_066d17c6 = 1;
  }
                    /* try { // try from 055b1790 to 056b1797 has its CatchHandler @ 055b17a0 */
  if (param_3 != 0) {
                    /* try { // try from 055b1798 to 056b17a3 has its CatchHandler @ 055b1104 */
    if (*(int *)(param_3 + 0x20) == 2) {
      uVar2 = FUN_055b4c38(uVar2,param_2,param_4);
      return uVar2;
    }
                    /* catch() { ... } // from try @ 055b1760 with catch @ 055b17a0
                       catch() { ... } // from try @ 055b1790 with catch @ 055b17a0 */
                    /* try { // try from 055b17a4 to 056b1843 has its CatchHandler @ 055b17a4
                       catch() { ... } // from try @ 055b17a4 with catch @ 055b17a4
                       catch() { ... } // from try @ 055b1870 with catch @ 055b17a4
                       catch() { ... } // from try @ 055b18a8 with catch @ 055b17a4
                       catch() { ... } // from try @ 055b18e4 with catch @ 055b17a4 */
    if (*(int *)(param_3 + 0x20) == 3) {
      if (param_4 != (long *)0x0) {
        plVar3 = (long *)thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631c5b8);
        FUN_04c149dc(plVar3,0);
        if (param_2 != 0) {
          plVar6 = *(long **)(param_2 + 0x10);
          if (plVar6 != (long *)0x0) {
            lVar5 = *(long *)
                     Method_System_Collections_Generic_Dictionary<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_Clear__
            ;
            if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) !=
                lVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3ce44(plVar6,lVar5,*(undefined8 *)(param_2 + 0x58));
            }
          }
          FUN_055b1f60(param_1,0,*(undefined8 *)(param_2 + 0x58),plVar6,param_4,plVar3);
          if (plVar3 != (long *)0x0) {
            lVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            if (lVar5 != 0) {
                    /* try { // try from 055b1844 to 056b1847 has its CatchHandler @ 055b18a8 */
              uVar2 = FUN_04c0e89c(lVar5,0);
              return uVar2;
            }
          }
        }
        goto LAB_055b194c;
      }
    }
    else {
                    /* try { // try from 055b1868 to 056b186f has its CatchHandler @ 055b18ac */
                    /* try { // try from 055b1870 to 056b18a3 has its CatchHandler @ 055b17a4 */
      uVar2 = *(undefined8 *)(param_3 + 0x10);
      uVar7 = *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo;
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar7 = FUN_04d8a7b0(uVar7,0);
                    /* try { // try from 055b18a4 to 056b18a7 has its CatchHandler @ 055b18b0 */
      uVar4 = FUN_04d938a0(uVar2,uVar7,0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 055b1844 with catch @ 055b18a8
                       try { // try from 055b18a8 to 056b18cb has its CatchHandler @ 055b17a4 */
      if ((uVar4 & 1) != 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 055b1868 with catch @ 055b18ac
                        */
        if (param_4 != (long *)0x0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 055b18a4 with catch @ 055b18b0
                        */
          bVar1 = *(byte *)(*(long *)
                             UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo
                           + 0x130);
                    /* try { // try from 055b18cc to 056b18cf has its CatchHandler @ 055b18d8 */
                    /* catch() { ... } // from try @ 055b18cc with catch @ 055b18d8 */
                    /* try { // try from 055b18dc to 056b18e3 has its CatchHandler @ 055b18ec */
          if ((*(byte *)(*param_4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(param_4);
          }
        }
                    /* try { // try from 055b18e4 to 056b18ef has its CatchHandler @ 055b17a4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 055b18dc with catch @ 055b18ec
                        */
                    /* try { // try from 055b18f0 to 056b1a6b has its CatchHandler @ 055b18f0
                       catch() { ... } // from try @ 055b18f0 with catch @ 055b18f0
                       catch() { ... } // from try @ 055b1cd4 with catch @ 055b18f0
                       catch() { ... } // from try @ 055b1efc with catch @ 055b18f0
                       catch() { ... } // from try @ 055b1fcc with catch @ 055b18f0
                       catch() { ... } // from try @ 055b1fe0 with catch @ 055b18f0
                       catch() { ... } // from try @ 055b1ff8 with catch @ 055b18f0
                       catch() { ... } // from try @ 055b20ac with catch @ 055b18f0
                       catch() { ... } // from try @ 055b20f0 with catch @ 055b18f0 */
        uVar2 = FUN_055abdec(param_1,param_4,0);
        return uVar2;
      }
      if (param_4 != (long *)0x0) {
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_TryGetValue__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar2 = FUN_055983cc(param_3,param_4,0);
        return uVar2;
      }
    }
    return 0;
  }
LAB_055b194c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


