/*
FUNCTION_NAME: FUN_053daba4
ENTRY_POINT: 053daba4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_17;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_15
*/


void FUN_053daba4(undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  
  if ((DAT_066d09f9 & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_96_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631feb0);
    FUN_02b3c81c(PTR_DAT_063342f0);
    FUN_02b3c81c(PTR_DAT_06324178);
    FUN_02b3c81c(PTR_DAT_06324170);
    FUN_02b3c81c(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_98_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OpenXREventDelegateType_TypeInfo);
    DAT_066d09f9 = 1;
  }
  if (param_3 != 0) {
    FUN_0452ddc0(param_3,param_1,param_1,*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo);
    puVar9 = OVRPlugin_OpenXREventDelegateType_TypeInfo;
    puVar8 = OVRPlugin_OVRP_1_99_0_TypeInfo;
    puVar7 = OVRPlugin_OVRP_1_98_0_TypeInfo;
    puVar6 = OVRPlugin_OVRP_1_96_0_TypeInfo;
    puVar5 = PTR_DAT_063342f0;
    puVar4 = PTR_DAT_06324178;
    puVar3 = PTR_DAT_06324170;
    puVar2 = PTR_DAT_0631feb0;
    for (; param_2 != (long *)0x0;
        param_2 = (long *)(**(code **)(*param_2 + 0x418))(param_2,*(undefined8 *)(*param_2 + 0x420))
        ) {
      uVar10 = FUN_04d952d0(param_2,0);
      if ((uVar10 & 1) == 0) {
        lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
        FUN_037a5cd0(lVar11,*(undefined8 *)puVar4);
        lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
        FUN_03c7e090(lVar12,*(undefined8 *)puVar8);
        if ((lVar12 != 0) && (FUN_03c7e5a8(lVar12,param_2,*(undefined8 *)puVar7), lVar11 != 0)) {
          lVar16 = *(long *)(lVar11 + 0x10);
          lVar18 = *(long *)puVar2;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar16 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              plVar13 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
              *plVar13 = (long)param_2;
              thunk_FUN_02bb0e9c(plVar13,param_2);
            }
            else {
              FUN_037a6538(lVar11,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            if (*(int *)(lVar12 + 0x20) < 1) {
              return;
            }
            goto LAB_053dad9c;
          }
        }
        break;
      }
    }
  }
LAB_053dacf0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
LAB_053dad9c:
  plVar13 = (long *)FUN_03c7e738(lVar12,*(undefined8 *)OVRPlugin_OVRP_1_97_0_TypeInfo);
  uVar10 = FUN_0452dfb4(param_3,plVar13,*(undefined8 *)puVar6);
  if ((uVar10 & 1) != 0) {
    uVar20 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar20 = FUN_02b3c908(uVar20,1);
    uVar15 = FUN_053d6158(plVar13);
    FUN_0275e13c(uVar20);
    FUN_0275a400(uVar20,uVar15);
    FUN_0275a434(uVar20,0,uVar15);
    uVar15 = thunk_FUN_02ba3594(OVRPlugin_OverlayShape_TypeInfo);
    uVar20 = FUN_0540ce80(uVar15,uVar20,0);
    thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    uVar15 = thunk_FUN_02b79644();
    FUN_053f0c5c(uVar15,uVar20,0);
    uVar20 = FUN_0540c738(uVar15,0);
    uVar15 = thunk_FUN_02ba3594(OVRPlugin_PoseStatef_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar20,uVar15);
  }
  if (plVar13 == (long *)0x0) goto LAB_053dacf0;
  uVar10 = (**(code **)(*plVar13 + 0x3b8))(plVar13,*(undefined8 *)(*plVar13 + 0x3c0));
  if ((uVar10 & 1) != 0) {
    lVar16 = (**(code **)(*plVar13 + 0x458))(plVar13,*(undefined8 *)(*plVar13 + 0x460));
    if (lVar16 == 0) goto LAB_053dacf0;
    if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
      uVar10 = 0;
      uVar17 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
      do {
        if (uVar17 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar20 = *(undefined8 *)(lVar16 + 0x20 + uVar10 * 8);
        uVar17 = FUN_037a68d4(lVar11,uVar20,*(undefined8 *)puVar5);
        if ((uVar17 & 1) == 0) {
          FUN_03c7e5a8(lVar12,uVar20,*(undefined8 *)puVar7);
          lVar18 = *(long *)(lVar11 + 0x10);
          lVar19 = *(long *)puVar2;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_053dacf0;
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            puVar14 = (undefined8 *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
            *puVar14 = uVar20;
            thunk_FUN_02bb0e9c(puVar14,uVar20);
          }
          else {
            FUN_037a6538(lVar11,uVar20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar17 = (ulong)*(uint *)(lVar16 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar16 + 0x18));
    }
  }
  if (*(int *)(lVar12 + 0x20) < 1) {
    return;
  }
  goto LAB_053dad9c;
}


