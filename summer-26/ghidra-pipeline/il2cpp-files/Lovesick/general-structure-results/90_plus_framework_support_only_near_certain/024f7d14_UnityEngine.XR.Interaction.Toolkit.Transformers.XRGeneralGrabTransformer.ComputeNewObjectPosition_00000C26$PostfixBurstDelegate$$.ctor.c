/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer.ComputeNewObjectPosition_00000C26$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 024f7d14
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_17;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition_00000C26_PostfixBurstDelegate___ctor
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  plVar3 = (long *)FUN_00da4fb8(*unaff_x21,8);
  puVar1 = OVRPlugin_OVRP_1_115_0_TypeInfo;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(long *)OVRPlugin_OVRP_1_115_0_TypeInfo != 0) &&
     (lVar4 = thunk_FUN_00d6225c(*(long *)OVRPlugin_OVRP_1_115_0_TypeInfo,
                                 *(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_024f7f08:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  puVar2 = Method_System_Collections_Generic_List<RadioButton>_Add__;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = *(long *)puVar1;
    lVar4 = FUN_017841b4();
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_024f7f08;
    puVar1 = PTR_DAT_033f2e20;
    uVar7 = *(uint *)(plVar3 + 3);
    if (1 < uVar7) {
      plVar3[5] = lVar4;
      lVar4 = *(long *)puVar1;
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar4 == 0) goto LAB_024f7f08;
        uVar7 = *(uint *)(plVar3 + 3);
      }
      if (2 < uVar7) {
        plVar3[6] = *(long *)puVar1;
        lVar4 = FUN_017841b4(unaff_x19 + 4,*(undefined8 *)puVar2,0);
                    /* try { // try from 024f7de4 to 025f7de7 has its CatchHandler @ 024f7e04 */
                    /* try { // try from 024f7de8 to 025f7deb has its CatchHandler @ 024f7e00 */
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_024f7f08;
        puVar1 = System_Action<InteractorUnregisteredEventArgs>_TypeInfo;
        uVar7 = *(uint *)(plVar3 + 3);
        if (3 < uVar7) {
          plVar3[7] = lVar4;
          lVar4 = *(long *)puVar1;
          if (lVar4 != 0) {
            lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar4 == 0) goto LAB_024f7f08;
            uVar7 = *(uint *)(plVar3 + 3);
          }
          if (4 < uVar7) {
            plVar3[8] = *(long *)puVar1;
            lVar4 = FUN_017841b4(unaff_x19 + 0xc,*(undefined8 *)puVar2,0);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_024f7f08;
            puVar1 = PTR_DAT_033f1280;
            uVar7 = *(uint *)(plVar3 + 3);
            if (5 < uVar7) {
              plVar3[9] = lVar4;
              lVar4 = *(long *)puVar1;
              if (lVar4 != 0) {
                lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                if (lVar4 == 0) goto LAB_024f7f08;
                uVar7 = *(uint *)(plVar3 + 3);
              }
              if (6 < uVar7) {
                plVar3[10] = *(long *)puVar1;
                lVar4 = FUN_017841b4(unaff_x19 + 8,*(undefined8 *)puVar2,0);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_024f7f08;
                if (7 < *(uint *)(plVar3 + 3)) {
                  plVar3[0xb] = lVar4;
                  FUN_01600844(plVar3,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


