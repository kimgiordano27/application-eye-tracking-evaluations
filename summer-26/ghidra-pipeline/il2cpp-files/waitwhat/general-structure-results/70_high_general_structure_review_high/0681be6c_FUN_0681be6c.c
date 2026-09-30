/*
FUNCTION_NAME: FUN_0681be6c
ENTRY_POINT: 0681be6c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


long FUN_0681be6c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  
  if ((DAT_07558ace & 1) == 0) {
    FUN_03188a78(System_Xml_CachingEventHandler_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_PostfixBurstDelegate_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070f8d00);
    FUN_03188a78(PTR_DAT_070c1c20);
    FUN_03188a78(PTR_DAT_070f93a8);
    DAT_07558ace = 1;
  }
  puVar6 = System_Xml_CachingEventHandler_TypeInfo;
  puVar5 = PTR_DAT_070f93a8;
  puVar4 = PTR_DAT_070f8d00;
  puVar3 = PTR_DAT_070c1c20;
  lVar8 = *(long *)(param_1 + 0x60);
  lVar11 = *(long *)(param_1 + 0x68);
  if (lVar11 == 0) {
    if (lVar8 == 0) goto LAB_0681c248;
  }
  else {
    if (lVar8 == 0) goto LAB_0681c248;
    if (*(int *)(lVar11 + 0x18) == *(int *)(lVar8 + 0x18)) {
LAB_0681bf14:
      uVar12 = 0;
      do {
        if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar12) {
          return lVar11;
        }
        lVar8 = *(long *)(param_1 + 0x60);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
        ;
        lVar10 = *(long *)(lVar8 + (long)(int)uVar12 * 0x50 + 0x30);
        if (lVar10 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
        ;
        plVar13 = (long *)(lVar11 + (long)(int)uVar12 * 0x50 + 0x30);
        lVar9 = *plVar13;
        if (lVar9 == 0) break;
        iVar1 = *(int *)(lVar10 + 0x18);
        if (*(int *)(lVar9 + 0x18) != iVar1) {
          lVar8 = FUN_03188b1c(*(undefined8 *)puVar3,iVar1);
          if (*(uint *)(lVar11 + 0x18) <= uVar12) {

            UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
            :
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          lVar11 = *(long *)(param_1 + 0x68);
          *plVar13 = lVar8;
          if (lVar11 == 0) break;
          uVar7 = FUN_03188b1c(*(undefined8 *)puVar5,iVar1);
          if (*(uint *)(lVar11 + 0x18) <= uVar12)
          goto 
          UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
          ;
          lVar8 = *(long *)(param_1 + 0x68);
          *(undefined8 *)(lVar11 + (long)(int)uVar12 * 0x50 + 0x48) = uVar7;
          if (lVar8 == 0) break;
          uVar7 = FUN_03188b1c(*(undefined8 *)puVar4,iVar1);
          if (*(uint *)(lVar8 + 0x18) <= uVar12)
          goto 
          UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
          ;
          lVar11 = *(long *)(param_1 + 0x68);
          *(undefined8 *)(lVar8 + (long)(int)uVar12 * 0x50 + 0x50) = uVar7;
          if (lVar11 == 0) break;
          uVar7 = FUN_03188b1c(*(undefined8 *)puVar6,iVar1);
          if (*(uint *)(lVar11 + 0x18) <= uVar12)
          goto 
          UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
          ;
          lVar8 = *(long *)(param_1 + 0x60);
          *(undefined8 *)(lVar11 + (long)(int)uVar12 * 0x50 + 0x58) = uVar7;
          if (lVar8 == 0) break;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
        ;
        lVar11 = *(long *)(param_1 + 0x68);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
        ;
        FUN_05953590(*(undefined8 *)(lVar8 + (long)(int)uVar12 * 0x50 + 0x30),
                     *(undefined8 *)(lVar11 + (long)(int)uVar12 * 0x50 + 0x30),iVar1,0);
        lVar8 = *(long *)(param_1 + 0x60);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
        ;
        lVar11 = *(long *)(param_1 + 0x68);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
        ;
        FUN_05953590(*(undefined8 *)(lVar8 + (long)(int)uVar12 * 0x50 + 0x48),
                     *(undefined8 *)(lVar11 + (long)(int)uVar12 * 0x50 + 0x48),iVar1,0);
        lVar8 = *(long *)(param_1 + 0x60);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
        ;
        lVar11 = *(long *)(param_1 + 0x68);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
        ;
        FUN_05953590(*(undefined8 *)(lVar8 + (long)(int)uVar12 * 0x50 + 0x50),
                     *(undefined8 *)(lVar11 + (long)(int)uVar12 * 0x50 + 0x50),iVar1,0);
        lVar8 = *(long *)(param_1 + 0x60);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
        ;
        lVar11 = *(long *)(param_1 + 0x68);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
        ;
        FUN_05953590(*(undefined8 *)(lVar8 + (long)(int)uVar12 * 0x50 + 0x58),
                     *(undefined8 *)(lVar11 + (long)(int)uVar12 * 0x50 + 0x58),iVar1,0);
        lVar11 = *(long *)(param_1 + 0x68);
        uVar12 = uVar12 + 1;
      } while (lVar11 != 0);
      goto LAB_0681c248;
    }
  }
  lVar11 = FUN_03188b1c(*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_PostfixBurstDelegate_TypeInfo
                        ,*(undefined4 *)(lVar8 + 0x18));
  *(long *)(param_1 + 0x68) = lVar11;
  if (lVar11 != 0) {
    lVar8 = 0;
    uVar12 = 0;
    do {
      if (*(int *)(lVar11 + 0x18) <= (int)uVar12) goto LAB_0681bf14;
      lVar10 = *(long *)(param_1 + 0x60);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar12)
      goto 
      UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
      ;
      lVar10 = *(long *)(lVar10 + lVar8 + 0x30);
      if (lVar10 == 0) break;
      uVar2 = *(undefined4 *)(lVar10 + 0x18);
      uVar7 = FUN_03188b1c(*(undefined8 *)puVar3,uVar2);
      if (*(uint *)(lVar11 + 0x18) <= uVar12)
      goto 
      UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
      ;
      lVar10 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(lVar11 + lVar8 + 0x30) = uVar7;
      if (lVar10 == 0) break;
      uVar7 = FUN_03188b1c(*(undefined8 *)puVar5,uVar2);
      if (*(uint *)(lVar10 + 0x18) <= uVar12)
      goto 
      UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
      ;
      lVar11 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(lVar10 + lVar8 + 0x48) = uVar7;
      if (lVar11 == 0) break;
      uVar7 = FUN_03188b1c(*(undefined8 *)puVar4,uVar2);
      if (*(uint *)(lVar11 + 0x18) <= uVar12)
      goto 
      UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
      ;
      lVar10 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(lVar11 + lVar8 + 0x50) = uVar7;
      if (lVar10 == 0) break;
      uVar7 = FUN_03188b1c(*(undefined8 *)puVar6,uVar2);
      if (*(uint *)(lVar10 + 0x18) <= uVar12)
      goto 
      UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__StopActivatedCoroutine
      ;
      lVar11 = *(long *)(param_1 + 0x68);
      lVar10 = lVar10 + lVar8;
      lVar8 = lVar8 + 0x50;
      uVar12 = uVar12 + 1;
      *(undefined8 *)(lVar10 + 0x58) = uVar7;
    } while (lVar11 != 0);
  }
LAB_0681c248:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


