/*
FUNCTION_NAME: FUN_0560910c
ENTRY_POINT: 0560910c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3
*/


undefined8 FUN_0560910c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  long local_68;
  undefined *puVar15;
  
  puVar4 = System_Collections_Generic_List<Anchor>_TypeInfo;
  puVar15 = System_Collections_Generic_List<AdvancedUpscalers>_TypeInfo;
  if ((DAT_06b7f53f & 1) == 0) {
    FUN_02d6084c(System_Collections_Generic_List<Character>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<AnimationTrack>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<Anchor>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<Claim>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<ClimbInteractable>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<CodeTypeReference>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<AdvancedUpscalers>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<Camera>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<AsyncGPUReadbackRequest>_TypeInfo);
    DAT_06b7f53f = 1;
  }
  local_68 = 0;
  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar15);
  FUN_03aabc60(lVar8,*(undefined8 *)puVar4);
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    uVar13 = *(undefined8 *)(lVar16 + 0x28);
    lVar16 = *(long *)(lVar16 + 0x30);
    FUN_05608abc(param_1,0x6e);
    FUN_05608abc(param_1,0x28);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_05609428;
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x1c) != 0x29) {
      uVar18 = FUN_056079b0(param_1,param_2);
      puVar15 = System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo;
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar17 = *(long *)System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        while (lVar9 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar18;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494(lVar8,uVar18,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(param_1 + 0x10) == 0) break;
          if (*(int *)(*(long *)(param_1 + 0x10) + 0x1c) == 0x29) goto LAB_0560921c;
          FUN_05608abc(param_1,0x2c);
          uVar18 = FUN_056079b0(param_1,param_2);
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar17 = *(long *)puVar15;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        }
      }
      goto LAB_05609428;
    }
LAB_0560921c:
    FUN_05608abc(param_1,0x29);
    puVar4 = System_Collections_Generic_List<AsyncGPUReadbackRequest>_TypeInfo;
    puVar15 = System_Collections_Generic_List<AnimationTrack>_TypeInfo;
    if (lVar16 == 0) goto LAB_05609428;
    if (*(int *)(lVar16 + 0x10) != 0) {
LAB_05609330:
      uVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar15);
      FUN_05607260(uVar18,lVar16,uVar13,lVar8);
      return uVar18;
    }
    lVar9 = *(long *)System_Collections_Generic_List<AsyncGPUReadbackRequest>_TypeInfo;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar9 = *(long *)puVar4;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x48);
    if (lVar9 == 0) goto LAB_05609428;
    uVar10 = FUN_0489720c(lVar9,uVar13,&local_68,
                          *(undefined8 *)System_Collections_Generic_List<Character>_TypeInfo);
    puVar5 = System_Collections_Generic_List<CodeTypeReference>_TypeInfo;
    puVar4 = System_Collections_Generic_List<ClimbInteractable>_TypeInfo;
    if ((uVar10 & 1) == 0) goto LAB_05609330;
    if ((lVar8 == 0) || (local_68 == 0)) goto LAB_05609428;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if ((int)uVar1 < *(int *)(local_68 + 0x14)) {
LAB_0560960c:
      lVar8 = *(long *)(param_1 + 0x10);
      FUN_028f4e40(lVar8);
      uVar18 = *(undefined8 *)(lVar8 + 0x10);
      puVar15 = System_Collections_Generic_List<Collider>_TypeInfo;
LAB_05609640:
      uVar14 = thunk_FUN_02dc61f4(puVar15);
      uVar13 = FUN_0567b9cc(uVar14,uVar13,uVar18,0);
      uVar18 = thunk_FUN_02dc61f4(System_Collections_Generic_List<Column>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar13,uVar18);
    }
    if (*(int *)(local_68 + 0x10) == 0xd) {
      if (0 < (int)uVar1) {
        uVar19 = 0;
        do {
          plVar11 = (long *)FUN_03aac1c4(lVar8,uVar19,*(undefined8 *)puVar4);
          if (plVar11 == (long *)0x0) goto LAB_05609428;
          iVar6 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          plVar12 = plVar11;
          if (iVar6 != 1) {
            plVar12 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar15);
            FUN_05607328(plVar12,7,plVar11);
          }
          FUN_03aac218(lVar8,uVar19,plVar12,*(undefined8 *)puVar5);
          uVar19 = uVar19 + 1;
        } while (uVar1 != uVar19);
      }
    }
    else {
      if (*(int *)(local_68 + 0x18) < (int)uVar1) goto LAB_0560960c;
      if (*(long *)(local_68 + 0x20) == 0) goto LAB_05609428;
      uVar19 = *(uint *)(*(long *)(local_68 + 0x20) + 0x18);
      if ((int)uVar1 <= (int)uVar19) {
        uVar19 = uVar1;
      }
      if (0 < (int)uVar19) {
        uVar10 = 0;
LAB_05609474:
        plVar11 = (long *)FUN_03aac1c4(lVar8,uVar10 & 0xffffffff,*(undefined8 *)puVar4);
        if ((local_68 == 0) || (lVar16 = *(long *)(local_68 + 0x20), lVar16 == 0))
        goto LAB_05609428;
        if (*(uint *)(lVar16 + 0x18) <= uVar10) {
LAB_05609608:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        iVar6 = *(int *)(lVar16 + uVar10 * 4 + 0x20);
        if (iVar6 == 5) goto LAB_056095d4;
        if (plVar11 == (long *)0x0) goto LAB_05609428;
        iVar7 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        if (iVar6 == iVar7) goto LAB_056095d4;
        if ((local_68 == 0) || (lVar16 = *(long *)(local_68 + 0x20), lVar16 == 0))
        goto LAB_05609428;
        if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_05609608;
        plVar12 = plVar11;
        switch(*(undefined4 *)(lVar16 + uVar10 * 4 + 0x20)) {
        case 0:
          plVar12 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar15);
          uVar18 = 9;
          break;
        case 1:
          plVar12 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar15);
          uVar18 = 7;
          break;
        case 2:
          plVar12 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar15);
          uVar18 = 8;
          break;
        case 3:
          lVar16 = *plVar11;
          bVar3 = *(byte *)(*(long *)System_Collections_Generic_List<Camera>_TypeInfo + 0x130);
          if ((bVar3 <= *(byte *)(lVar16 + 0x130)) &&
             (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) ==
              *(long *)System_Collections_Generic_List<Camera>_TypeInfo))
          goto switchD_05609508_default;
          bVar3 = *(byte *)(*(long *)puVar15 + 0x130);
          if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
             ((*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar15 ||
              (iVar6 = (**(code **)(lVar16 + 0x188))(plVar11,*(undefined8 *)(lVar16 + 400)),
              iVar6 != 5)))) {
            lVar8 = *(long *)(param_1 + 0x10);
            FUN_028f4e40(lVar8);
            uVar18 = *(undefined8 *)(lVar8 + 0x10);
            puVar15 = System_Collections_Generic_List<Color>_TypeInfo;
            goto LAB_05609640;
          }
        default:
          goto switchD_05609508_default;
        }
        FUN_05607328(plVar12,uVar18,plVar11);
switchD_05609508_default:
        FUN_03aac218(lVar8,uVar10 & 0xffffffff,plVar12,*(undefined8 *)puVar5);
LAB_056095d4:
        uVar10 = uVar10 + 1;
        if (uVar19 == uVar10) goto LAB_056095e0;
        goto LAB_05609474;
      }
    }
LAB_056095e0:
    if (local_68 != 0) {
      uVar2 = *(undefined4 *)(local_68 + 0x10);
      uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar15);
      FUN_056071c0(uVar13,uVar2,lVar8);
      return uVar13;
    }
  }
LAB_05609428:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


