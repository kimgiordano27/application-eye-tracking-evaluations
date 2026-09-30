/*
FUNCTION_NAME: FUN_0554d53c
ENTRY_POINT: 0554d53c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0554d53c(long param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long local_48;
  
  if ((DAT_06bbf795 & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_0000018C_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    DAT_06bbf795 = 1;
  }
  local_48 = 0;
  if ((param_2 != (long *)0x0) && (*(char *)(param_1 + 0x170) != '\0')) {
    *(long **)(param_1 + 0x148) = param_2;
    return;
  }
  if (((param_2 == (long *)0x0) || (uVar9 = param_2[3], uVar9 == 0)) ||
     (iVar8 = (int)uVar9, iVar8 < 1)) {
LAB_0554d6bc:
    plVar5 = (long *)0x0;
  }
  else {
    uVar10 = 0;
    do {
      if (param_2[uVar10 + 4] == 0) goto LAB_0554d5dc;
      uVar10 = uVar10 + 1;
    } while (iVar8 != (int)uVar10);
    uVar10 = uVar9 & 0xffffffff;
LAB_0554d5dc:
    if ((int)uVar10 == 0) goto LAB_0554d6bc;
    plVar3 = param_2;
    if ((int)uVar10 != iVar8) {
      plVar3 = (long *)FUN_02f0880c(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                    ,uVar10 & 0xffffffff);
      uVar9 = 0;
      do {
        if (*(uint *)(param_2 + 3) <= uVar9) goto LAB_0554d918;
        if (plVar3 == (long *)0x0) goto LAB_0554d890;
        lVar11 = param_2[uVar9 + 4];
        if ((lVar11 != 0) &&
           (lVar4 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
          uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar6,0);
        }
        if (*(uint *)(plVar3 + 3) <= uVar9) goto LAB_0554d918;
        uVar1 = uVar9 + 1;
        plVar3[uVar9 + 4] = lVar11;
        uVar9 = uVar1;
      } while ((uVar10 & 0xffffffff) != uVar1);
    }
    plVar5 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                         UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                                       );
    FUN_055aee78(plVar5,plVar3,0);
    if (plVar5 == (long *)0x0) goto LAB_0554d890;
    lVar11 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (lVar11 != param_1) {
      uVar6 = FUN_05566e3c(0);
      uVar7 = thunk_FUN_02f6ef30(System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar6,uVar7);
    }
  }
  if ((plVar5 != *(long **)(param_1 + 0x138)) &&
     ((plVar5 == (long *)0x0 ||
      (uVar9 = (**(code **)(*plVar5 + 0x138))
                         (plVar5,*(long **)(param_1 + 0x138),*(undefined8 *)(*plVar5 + 0x140)),
      (uVar9 & 1) == 0)))) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_0554d890;
    plVar3 = (long *)FUN_0557ba08(*(long *)(param_1 + 0x48),plVar5,0);
    if (plVar3 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)
                         UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                       + 0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar3);
      }
      if (plVar5 == (long *)0x0) goto LAB_0554d890;
      lVar11 = FUN_055af4b8(plVar5,0);
      local_48 = plVar3[7];
      if (lVar11 == 0) goto LAB_0554d890;
      FUN_050f7cb4(lVar11,local_48,0,0);
      plVar5 = plVar3;
    }
    lVar11 = *(long *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (lVar11 != 0) {
      if (*(long *)(lVar11 + 0x40) == 0) goto LAB_0554d890;
      FUN_055ab438(*(long *)(lVar11 + 0x40),0);
      if (*(long *)(param_1 + 0x150) != 0) {
        FUN_055ab438(*(long *)(param_1 + 0x150),0);
        *(undefined8 *)(param_1 + 0x150) = 0;
      }
      if (*(long *)(param_1 + 0x158) != 0) {
        FUN_055ab438(*(long *)(param_1 + 0x158),0);
        *(undefined8 *)(param_1 + 0x158) = 0;
      }
      if (*(long *)(param_1 + 0x160) != 0) {
        FUN_055ab438(*(long *)(param_1 + 0x160),0);
        *(undefined8 *)(param_1 + 0x160) = 0;
      }
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_0554d890;
      FUN_0557cdcc(*(long *)(param_1 + 0x48),lVar11,0);
    }
    if ((plVar3 == (long *)0x0) && (plVar5 != (long *)0x0)) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_0554d890;
      FUN_0557b64c(*(long *)(param_1 + 0x48),plVar5,0);
      *(long **)(param_1 + 0x138) = plVar5;
    }
    else {
      *(long **)(param_1 + 0x138) = plVar5;
      if (plVar5 == (long *)0x0) {
        lVar4 = *(long *)
                 UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_0000018C_PostfixBurstDelegate_TypeInfo
        ;
        lVar11 = *(long *)(lVar4 + 0x38);
        if (lVar11 == 0) {
          FUN_02f41ef8(lVar4);
          lVar11 = *(long *)(lVar4 + 0x38);
        }
        lVar11 = *(long *)(lVar11 + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02f41e9c();
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar11 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02f41e9c();
        }
        *(undefined8 *)(param_1 + 0x140) = **(undefined8 **)(lVar11 + 0xb8);
        if (*(long *)(param_1 + 0x138) == 0) {
          return;
        }
        goto LAB_0554d890;
      }
    }
    local_48 = plVar5[7];
    uVar6 = FUN_05581ad0(&local_48,0);
    *(undefined8 *)(param_1 + 0x140) = uVar6;
    if (*(long *)(param_1 + 0x138) != 0) {
      if (plVar5[8] != 0) {
        FUN_055ab254(plVar5[8],0);
        lVar11 = FUN_055af4b8(plVar5,0);
        if (lVar11 != 0) {
          lVar4 = 0;
          do {
            if (*(int *)(lVar11 + 0x18) <= (int)(uint)lVar4) {
              return;
            }
            lVar11 = FUN_055af4b8(plVar5,0);
            if (lVar11 == 0) break;
            if (*(uint *)(lVar11 + 0x18) <= (uint)lVar4) {
LAB_0554d918:
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            lVar11 = *(long *)(lVar11 + lVar4 * 8 + 0x20);
            if (lVar11 == 0) break;
            FUN_0555cd88(lVar11,0,0);
            lVar11 = FUN_055af4b8(plVar5,0);
            lVar4 = lVar4 + 1;
          } while (lVar11 != 0);
        }
      }
LAB_0554d890:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  return;
}


