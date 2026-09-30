/*
FUNCTION_NAME: FUN_061b0e30
ENTRY_POINT: 061b0e30
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


long * FUN_061b0e30(long param_1,long param_2,long param_3,long param_4,long *param_5,long param_6)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined4 local_64;
  
  if ((DAT_076ddc95 & 1) == 0) {
    thunk_FUN_032e1da0(System_Collections_Generic_List<IDebugManager>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionEndEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<VisualElement>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Rigidbody>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<VisualTreeAsset_UxmlObjectEntry>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_List<VoiceServiceRequestOptions_QueryParam>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<Anchor>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_List<XRDeviceSimulator_SimulatedHandExpression>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Collections_Generic_List<XRDeviceSimulatorHandsUI_HandExpressionUI>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<IXmlNode>_TypeInfo);
    DAT_076ddc95 = 1;
  }
  puVar10 = System_Collections_Generic_List<VisualElement>_TypeInfo;
  local_64 = 0;
  if (param_2 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar5 = thunk_FUN_032a56a0();
    puVar10 = System_Collections_Generic_IReadOnlyList<AccessorBase>_TypeInfo;
LAB_061b17cc:
    uVar9 = thunk_FUN_032e1da0(puVar10);
    FUN_05897d14(uVar5,uVar9,0);
    uVar9 = thunk_FUN_032e1da0(
                              System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar5,uVar9);
  }
  if (param_3 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar5 = thunk_FUN_032a56a0();
    puVar10 = System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo;
    goto LAB_061b17cc;
  }
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_061b1788;
  lVar3 = *(long *)System_Collections_Generic_List<VisualElement>_TypeInfo;
  uVar11 = 2;
  if (1 < *(int *)(*(long *)(param_1 + 0x40) + 0x1c)) {
    uVar11 = 5;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar10;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
  if (lVar3 == 0) goto LAB_061b1788;
  if (*(uint *)(lVar3 + 0x18) <= uVar11) goto LAB_061b178c;
  FUN_061af890(param_1,uVar11,*(undefined8 *)(lVar3 + (ulong)uVar11 * 8 + 0x20));
  plVar4 = *(long **)(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0x22) = 1;
  if (plVar4 == (long *)0x0) goto LAB_061b1788;
  uVar5 = (**(code **)(*plVar4 + 0x198))(plVar4,param_3,*(undefined8 *)(*plVar4 + 0x1a0));
  uVar6 = FUN_0622ced0(uVar5,*(undefined8 *)(param_1 + 0x90),0);
  if ((uVar6 & 1) != 0) {
    return (long *)0x0;
  }
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_061b1788;
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x20);
  plVar4 = (long *)thunk_FUN_032a56a0(*(undefined8 *)
                                       System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo
                                     );
  FUN_0624b7a8(plVar4,param_2,uVar5,0);
  plVar7 = *(long **)(param_1 + 0x58);
  if (plVar7 == (long *)0x0) goto LAB_061b1788;
  lVar8 = (**(code **)(*plVar7 + 0x308))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x310));
  if (lVar8 != 0) {
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      FUN_061b1800(param_1,*(undefined8 *)
                            System_Collections_Generic_List<XRDeviceSimulator_SimulatedHandExpression>_TypeInfo
                   ,uVar5);
      if (param_6 != 0) {
        FUN_061a2064(param_6,0);
      }
      return (long *)0x0;
    }
    goto LAB_061b1788;
  }
  uVar6 = FUN_0622ced0(uVar5,*(undefined8 *)(param_1 + 0x88),0);
  if ((uVar6 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0xc0);
    if (plVar7 == (long *)0x0) goto LAB_061b1788;
    uVar9 = (**(code **)(*plVar7 + 0x198))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x1a0));
    uVar6 = FUN_0622ced0(uVar9,*(undefined8 *)(param_1 + 0x100),0);
    if (((((uVar6 & 1) == 0) &&
         (uVar6 = FUN_0622ced0(uVar9,*(undefined8 *)(param_1 + 0x108),0), (uVar6 & 1) == 0)) &&
        (uVar6 = FUN_0622ced0(uVar9,*(undefined8 *)(param_1 + 0x110),0), (uVar6 & 1) == 0)) &&
       (uVar6 = FUN_0622ced0(uVar9,*(undefined8 *)(param_1 + 0x118),0), (uVar6 & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x22) = 0;
      if (plVar4 == (long *)0x0) goto LAB_061b1788;
      uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      puVar13 = (undefined8 *)System_Collections_Generic_List<Anchor>_TypeInfo;
      goto LAB_061b1734;
    }
    puVar10 = System_Collections_Generic_List<IDebugManager>_TypeInfo;
    plVar7 = *(long **)(param_1 + 0x58);
    if (*(int *)(*(long *)System_Collections_Generic_List<IDebugManager>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (plVar7 == (long *)0x0) goto LAB_061b1788;
    (**(code **)(*plVar7 + 0x2a8))
              (plVar7,plVar4,**(undefined8 **)(*(long *)puVar10 + 0xb8),
               *(undefined8 *)(*plVar7 + 0x2b0));
LAB_061b1160:
    lVar8 = 0;
    goto LAB_061b1164;
  }
  if (*(int *)(param_1 + 0x50) == 2) {
    plVar7 = *(long **)(param_1 + 0xa0);
  }
  else {
    plVar7 = (long *)0x0;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_061b1788;
  lVar8 = FUN_06173fec(*(long *)(param_1 + 0x28),lVar3,plVar4,plVar7,&local_64,0);
  plVar18 = (long *)0x0;
  plVar16 = plVar18;
  plVar17 = plVar18;
  switch(local_64) {
  case 0:
switchD_061b1210_caseD_0:
    if (lVar8 == 0) goto LAB_061b1788;
    goto LAB_061b1478;
  case 1:
    plVar7 = (long *)(param_1 + 0x60);
    if (*plVar7 == 0) {
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
      if ((lVar3 == 0) || (plVar7 = *(long **)(lVar3 + 0x28), plVar7 == (long *)0x0))
      goto LAB_061b1788;
      lVar15 = *plVar7;
      lVar14 = *(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if ((*(byte *)(lVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) goto LAB_061b1788;
      if (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar7 = (long *)0x0;
      }
      uVar6 = FUN_0619ef2c(plVar7,0,0);
      if ((uVar6 & 1) == 0) goto switchD_061b1210_caseD_0;
      FUN_061b1800(param_1,*(undefined8 *)
                            System_Collections_Generic_List<XRDeviceSimulatorHandsUI_HandExpressionUI>_TypeInfo
                   ,**(undefined8 **)(*(long *)PTR_DAT_072794f8 + 0xb8));
      goto LAB_061b1164;
    }
    puVar12 = *(undefined8 **)(*(long *)PTR_DAT_072794f8 + 0xb8);
    puVar13 = (undefined8 *)
              System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo;
    goto LAB_061b1620;
  case 2:
    lVar8 = FUN_061b1978(param_1,plVar4);
    if (lVar8 == 0) {
      if ((lVar3 == 0) && (*(int *)(param_1 + 0xf8) == 3)) {
        if ((plVar4 == (long *)0x0) || (lVar3 = plVar4[3], lVar3 == 0)) goto LAB_061b1788;
        if (*(int *)(lVar3 + 0x10) != 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_061b1788;
          uVar6 = FUN_06173e48(*(long *)(param_1 + 0x28),lVar3,0);
          if ((uVar6 & 1) != 0) {
            *(undefined1 *)(param_1 + 0x22) = 0;
            goto LAB_061b171c;
          }
        }
      }
      if (*(int *)(param_1 + 0xf8) != 1) {
        if (plVar4 == (long *)0x0) goto LAB_061b1788;
        uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        FUN_061aee0c(param_1,*(undefined8 *)
                              System_Collections_Generic_List<VisualTreeAsset_UxmlObjectEntry>_TypeInfo
                     ,uVar9,1);
      }
      goto LAB_061b1160;
    }
    goto LAB_061b1478;
  case 3:
    lVar8 = FUN_061b1978(param_1,plVar4);
    if (lVar8 == 0) {
      *(undefined1 *)(param_1 + 0x22) = 0;
      if (plVar4 == (long *)0x0) goto LAB_061b1788;
LAB_061b171c:
      uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      puVar13 = (undefined8 *)System_Collections_Generic_List<IXmlNode>_TypeInfo;
LAB_061b1734:
      FUN_061b1800(param_1,*puVar13,uVar9);
      goto LAB_061b1160;
    }
    goto LAB_061b1478;
  case 4:
    if (plVar4 == (long *)0x0) goto LAB_061b1788;
    uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    FUN_061aee0c(param_1,*(undefined8 *)
                          System_Collections_Generic_List<VisualTreeAsset_UxmlObjectEntry>_TypeInfo,
                 uVar9,1);
    goto LAB_061b15e8;
  case 5:
    break;
  case 6:
    lVar8 = FUN_061b1978(param_1,plVar4);
    if (lVar8 == 0) {
      *(undefined1 *)(param_1 + 0x22) = 0;
      if (plVar4 == (long *)0x0) goto LAB_061b1788;
      uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      puVar13 = (undefined8 *)System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo;
      goto LAB_061b1734;
    }
LAB_061b1478:
    plVar17 = *(long **)(lVar8 + 0x80);
    if (lVar3 != 0) {
      plVar7 = *(long **)(param_1 + 0x58);
      if (plVar7 == (long *)0x0) goto LAB_061b1788;
      (**(code **)(*plVar7 + 0x2a8))(plVar7,plVar4,lVar8,*(undefined8 *)(*plVar7 + 0x2b0));
    }
    if (param_4 != 0) {
      param_5 = (long *)(**(code **)(param_4 + 0x18))
                                  (*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x28));
    }
    plVar16 = (long *)FUN_061b1bcc(param_1,param_5,lVar8);
    plVar7 = *(long **)(lVar8 + 0x30);
    if (plVar7 == (long *)0x0) goto LAB_061b1788;
    iVar2 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    plVar18 = (long *)0x0;
    if ((plVar16 != (long *)0x0) && (iVar2 == 2)) {
      bVar1 = *(byte *)(*(long *)System_Collections_Generic_List<Rigidbody>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
         ((*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) !=
           *(long *)System_Collections_Generic_List<Rigidbody>_TypeInfo ||
          (plVar18 = (long *)plVar16[2], plVar18 == (long *)0x0)))) goto LAB_061b1788;
      plVar7 = (long *)plVar18[0xd];
      plVar16 = (long *)plVar16[3];
    }
    FUN_061b1e14(param_1,plVar7,plVar16,1);
    if (((*(byte *)(param_1 + 0x18) >> 3 & 1) != 0) && (*(int *)(param_1 + 0x1c) != -1)) {
      if ((plVar4 == (long *)0x0) || (param_5 == (long *)0x0)) goto LAB_061b1788;
      lVar3 = plVar4[2];
      lVar14 = plVar4[3];
      uVar9 = (**(code **)(*param_5 + 0x168))(param_5,*(undefined8 *)(*param_5 + 0x170));
      FUN_061b1fc0(param_1,lVar3,lVar14,plVar16,uVar9,plVar7);
    }
    break;
  case 7:
    *(undefined1 *)(param_1 + 0x22) = 0;
    if (plVar4 == (long *)0x0) goto LAB_061b1788;
    uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    FUN_061b1800(param_1,*(undefined8 *)
                          System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo,uVar9
                );
LAB_061b15e8:
    plVar18 = (long *)0x0;
    plVar17 = (long *)0x0;
    plVar16 = (long *)0x0;
    break;
  case 8:
    *(undefined1 *)(param_1 + 0x22) = 0;
    lVar3 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,2);
    if ((plVar4 == (long *)0x0) ||
       (uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170)), lVar3 == 0)
       ) goto LAB_061b1788;
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_061b178c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    *(undefined8 *)(lVar3 + 0x20) = uVar9;
    thunk_FUN_0333a630();
    if (plVar7 == (long *)0x0) goto LAB_061b1788;
    bVar1 = *(byte *)(*(long *)System_Func<TransitionEndEvent>_TypeInfo + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Func<TransitionEndEvent>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar7);
    }
    plVar4 = (long *)plVar7[0x10];
    if (plVar4 == (long *)0x0) goto LAB_061b1788;
    uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_061b178c;
    *(undefined8 *)(lVar3 + 0x28) = uVar9;
    thunk_FUN_0333a630();
    FUN_061b1a40(param_1,*(undefined8 *)
                          System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_TypeInfo
                 ,lVar3);
    plVar18 = (long *)0x0;
    plVar17 = (long *)0x0;
    plVar16 = (long *)0x0;
    break;
  case 9:
    *(undefined1 *)(param_1 + 0x22) = 0;
    puVar10 = PTR_DAT_072794f8;
    *(undefined4 *)(param_1 + 0x50) = 1;
    puVar12 = *(undefined8 **)(*(long *)puVar10 + 0xb8);
    puVar13 = (undefined8 *)
              System_Collections_Generic_List<VoiceServiceRequestOptions_QueryParam>_TypeInfo;
LAB_061b1620:
    FUN_061b1800(param_1,*puVar13,*puVar12);
LAB_061b1164:
    plVar18 = (long *)0x0;
    plVar16 = (long *)0x0;
    plVar17 = (long *)0x0;
    break;
  default:
    plVar17 = (long *)0x0;
    plVar16 = (long *)0x0;
  }
  uVar11 = 2;
  if (*(char *)(param_1 + 0x22) != '\0') {
    uVar11 = (uint)(lVar8 != 0);
  }
  if (param_6 != 0) {
    FUN_061a21d0(param_6,plVar17,0);
    if (plVar17 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = plVar17[0x12];
    }
    FUN_061a2140(param_6,lVar3,0);
    *(long *)(param_6 + 0x30) = (long)plVar18;
    thunk_FUN_0333a630((long *)(param_6 + 0x30),plVar18);
    *(undefined1 *)(param_6 + 0x10) = 0;
    *(uint *)(param_6 + 0x38) = uVar11;
  }
  if ((*(byte *)(param_1 + 0x18) & 3) != 0) {
    plVar4 = *(long **)(param_1 + 0x38);
    if (plVar4 == (long *)0x0) {
LAB_061b1788:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar3 = (**(code **)(*plVar4 + 0x308))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x310));
    if (lVar3 == 0) {
      plVar4 = *(long **)(param_1 + 0x38);
      if (plVar4 == (long *)0x0) goto LAB_061b1788;
      (**(code **)(*plVar4 + 0x2a8))(plVar4,uVar5,uVar5,*(undefined8 *)(*plVar4 + 0x2b0));
    }
  }
  return plVar16;
}


