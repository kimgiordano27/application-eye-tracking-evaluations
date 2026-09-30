/*
FUNCTION_NAME: FUN_053d4344
ENTRY_POINT: 053d4344
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_053d4344(long param_1,long *param_2,long param_3,ulong param_4,long *param_5,long *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((DAT_066d09dc & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06322478);
    FUN_02b3c81c(UnityEngine_UIElements_PropagationPaths_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_28_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_39_0_TypeInfo);
    DAT_066d09dc = 1;
  }
  *param_5 = 0;
  thunk_FUN_02bb0e9c(param_5,0);
  *param_6 = 0;
  thunk_FUN_02bb0e9c(param_6,0);
  if ((param_4 & 1) == 0) {
    if (param_1 == 0) goto LAB_053d4724;
    lVar3 = FUN_04d95ce4(param_1,*(undefined8 *)UnityEngine_UIElements_PropagationPaths_TypeInfo,
                         0x34,0,param_3,0,0);
    *param_6 = lVar3;
    thunk_FUN_02bb0e9c(param_6,lVar3);
  }
  else {
    if (param_1 == 0) goto LAB_053d4724;
    lVar3 = FUN_04d95ce4(param_1,*(undefined8 *)UnityEngine_UIElements_PropagationPaths_TypeInfo,
                         0x14,0,param_3,0,0);
    *param_6 = lVar3;
    thunk_FUN_02bb0e9c(param_6,lVar3);
    uVar4 = FUN_04cb7c3c(*param_6,0,0);
    if ((uVar4 & 1) == 0) {
      plVar5 = (long *)*param_6;
      if ((plVar5 == (long *)0x0) ||
         (lVar3 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
         lVar3 == 0)) goto LAB_053d4724;
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_053d4728:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar5 = *(long **)(lVar3 + 0x20);
      if ((plVar5 == (long *)0x0) ||
         (uVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0)),
         param_3 == 0)) goto LAB_053d4724;
      if (*(int *)(param_3 + 0x18) == 0) goto LAB_053d4728;
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04d94540(uVar6,uVar9,0);
      if ((uVar4 & 1) == 0) goto LAB_053d4590;
    }
    FUN_053d4854(param_1,param_2,param_6,param_5);
    uVar4 = FUN_04cb7c3c(*param_6,0,0);
    if ((uVar4 & 1) != 0) {
      if ((param_2 == (long *)0x0) ||
         (lVar3 = (**(code **)(*param_2 + 0x8a8))(param_2,*(undefined8 *)(*param_2 + 0x8b0)),
         lVar3 == 0)) goto LAB_053d4724;
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar4 = 0;
        uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar4) goto LAB_053d4728;
          uVar6 = *(undefined8 *)(lVar3 + 0x20 + uVar4 * 8);
          uVar7 = FUN_053d49c0(uVar6);
          if ((uVar7 & 1) != 0) {
            FUN_053d4854(param_1,uVar6,param_6,param_5);
            uVar7 = FUN_04cb7c3c(*param_6,0,0);
            if ((uVar7 & 1) != 0) break;
          }
          uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
    }
  }
LAB_053d4590:
  uVar4 = FUN_04cb7c3c(*param_5,0,0);
  puVar1 = PTR_DAT_06322478;
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar6 = FUN_053dfacc(0);
  puVar2 = OVRPlugin_OVRP_1_28_0_TypeInfo;
  if (param_1 != 0) {
    lVar3 = FUN_04d95ce4(param_1,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo,0x14,0,uVar6,0,0);
    *param_5 = lVar3;
    thunk_FUN_02bb0e9c(param_5,lVar3);
    uVar4 = FUN_04cb7c3c(*param_5,0,0);
    if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 053d4620 with catch @ 053d4614
                       catch() { ... } // from try @ 053d46a8 with catch @ 053d4614
                       catch() { ... } // from try @ 053d4710 with catch @ 053d4614
                       catch() { ... } // from try @ 053d473c with catch @ 053d4614 */
                    /* try { // try from 053d461c to 054d461f has its CatchHandler @ 053d462c */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 053d4620 to 054d464b has its CatchHandler @ 053d4614 */
        thunk_FUN_02b9ad44();
      }
      plVar5 = (long *)FUN_053efc48(0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d461c with catch @ 053d462c
                        */
      plVar8 = (long *)*param_5;
                    /* try { // try from 053d464c to 054d4657 has its CatchHandler @ 053d46f8 */
      if ((plVar8 == (long *)0x0) ||
         (uVar6 = (**(code **)(*plVar8 + 0x3d8))(plVar8,*(undefined8 *)(*plVar8 + 0x3e0)),
         plVar5 == (long *)0x0)) goto LAB_053d4724;
      uVar4 = (**(code **)(*plVar5 + 0x298))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x2a0));
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
                    /* try { // try from 053d4684 to 054d469b has its CatchHandler @ 053d46f0 */
    if (param_2 != (long *)0x0) {
                    /* try { // try from 053d469c to 054d46a7 has its CatchHandler @ 053d46ec */
      uVar6 = FUN_04d96218(param_2,*(undefined8 *)OVRPlugin_OVRP_1_39_0_TypeInfo,0);
                    /* try { // try from 053d46a8 to 054d470b has its CatchHandler @ 053d4614 */
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
      }
      uVar4 = FUN_04d938a0(uVar6,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar6 = FUN_053d5a30(0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d469c with catch @ 053d46ec
                        */
      }
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d4684 with catch @ 053d46f0
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d464c with catch @ 053d46f8
                        */
      lVar3 = FUN_053d3d40(*(undefined8 *)puVar2,param_1,uVar6);
      *param_5 = lVar3;
                    /* try { // try from 053d470c to 054d470f has its CatchHandler @ 053d4730 */
                    /* try { // try from 053d4710 to 054d471f has its CatchHandler @ 053d4614 */
                    /* try { // try from 053d4720 to 054d472f has its CatchHandler @ 053d4734 */
      thunk_FUN_02bb0e9c(param_5);
      return;
    }
  }
LAB_053d4724:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


