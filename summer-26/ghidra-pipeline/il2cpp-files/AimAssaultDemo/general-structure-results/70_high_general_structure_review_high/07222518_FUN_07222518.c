/*
FUNCTION_NAME: FUN_07222518
ENTRY_POINT: 07222518
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x072229c4) */
/* WARNING: Removing unreachable block (ram,0x07222a38) */
/* WARNING: Removing unreachable block (ram,0x07222a7c) */

void FUN_07222518(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  int *piVar17;
  
  if ((DAT_08268653 & 1) == 0) {
    FUN_0373b518(
                System_Collections_Generic_IEnumerable<DivrPostProcessController_ColorAdjustmentsSetting>_TypeInfo
                );
                    /* try { // try from 07222554 to 0732256b has its CatchHandler @ 07223718 */
    FUN_0373b518(
                System_Collections_Generic_IEnumerable<InputBindingCompositeContext_PartBinding>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07d97960);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d97980);
    FUN_0373b518(PTR_DAT_07d97988);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_IEnumerable<OpenXRInteractionFeature_ActionConfig>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_IEnumerable<StrikerProfiler_StrikerProfilerEntry>_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07d97618);
    FUN_0373b518(PTR_DAT_07d979b0);
    DAT_08268653 = 1;
  }
  if (param_1[3] == 0) goto LAB_07222a5c;
  uVar8 = FUN_05b0f8f4(param_1[3],param_2,
                       *(undefined8 *)
                        System_Collections_Generic_IEnumerable<InputBindingCompositeContext_PartBinding>_TypeInfo
                      );
  if ((uVar8 & 1) == 0) {
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_IEnumerable<StrikerProfiler_StrikerProfilerEntry>_TypeInfo
                              );
    FUN_049ce6c0(lVar9,*(undefined8 *)
                        System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    plVar10 = (long *)(**(code **)(*param_1 + 0x218))
                                (param_1,param_2,*(undefined8 *)(*param_1 + 0x220));
    if (plVar10 != (long *)0x0) {
      lVar14 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07d97980) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_072226ac;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d97980,0);
LAB_072226ac:
      plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      puVar7 = System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo;
      puVar6 = PTR_DAT_07d979b0;
      puVar5 = PTR_DAT_07d97988;
      puVar4 = PTR_DAT_07d97960;
      puVar3 = PTR_DAT_07d97618;
      puVar2 = PTR_DAT_07d89700;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar14 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0722273c;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar2,0);
LAB_0722273c:
        uVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar8 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_072229b8;
          lVar14 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 == 0) goto LAB_07222990;
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_07222978;
        }
        lVar14 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_07222798;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar5,0);
LAB_07222798:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 != (long *)0x0) {
          lVar15 = *plVar12;
          lVar14 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar15 + 0x130);
          uVar16 = (uint)bVar1;
          uVar8 = (ulong)*(byte *)(lVar14 + 0x130);
          if ((bVar1 < *(byte *)(lVar14 + 0x130)) ||
             (*(long *)(*(long *)(lVar15 + 200) + uVar8 * 8 + -8) != lVar14)) {
            lVar14 = *(long *)puVar6;
            uVar8 = (ulong)*(byte *)(lVar14 + 0x130);
            if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
               (*(long *)(*(long *)(lVar15 + 200) + uVar8 * 8 + -8) == lVar14)) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03798b70();
                lVar15 = *plVar12;
                lVar14 = *(long *)puVar6;
                uVar16 = (uint)*(byte *)(lVar15 + 0x130);
                uVar8 = (ulong)*(byte *)(lVar14 + 0x130);
              }
              if ((uVar16 < (uint)uVar8) ||
                 (*(long *)(*(long *)(lVar15 + 200) + uVar8 * 8 + -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
                FUN_0373bb54(plVar12);
              }
              uVar13 = FUN_072af50c(plVar12,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar14 = *(long *)(lVar9 + 0x10);
              lVar15 = *(long *)puVar7;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              uVar16 = *(uint *)(lVar9 + 0x18);
              if (uVar16 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar16 + 1;
                *(undefined8 *)(lVar14 + (long)(int)uVar16 * 8 + 0x20) = uVar13;
                thunk_FUN_037aeb94();
              }
              else {
                FUN_049ceef4(lVar9,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03798b70();
              lVar15 = *plVar12;
              lVar14 = *(long *)puVar4;
              uVar16 = (uint)*(byte *)(lVar15 + 0x130);
              uVar8 = (ulong)*(byte *)(lVar14 + 0x130);
            }
            if ((uVar16 < (uint)uVar8) ||
               (*(long *)(*(long *)(lVar15 + 200) + uVar8 * 8 + -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
              FUN_0373bb54(plVar12);
            }
            uVar13 = FUN_072aeb68(plVar12,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar14 = *(long *)(lVar9 + 0x10);
            lVar15 = *(long *)puVar7;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar16 = *(uint *)(lVar9 + 0x18);
            if (uVar16 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar16 + 1;
              *(undefined8 *)(lVar14 + (long)(int)uVar16 * 8 + 0x20) = uVar13;
              thunk_FUN_037aeb94();
            }
            else {
              FUN_049ceef4(lVar9,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
    goto LAB_07222a5c;
  }
  goto LAB_07222a04;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_07222978:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_072229ac;
    }
  }
LAB_07222990:
  puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d896f8,0);
LAB_072229ac:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_072229b8:
  if (lVar9 == 0) goto LAB_07222a5c;
  lVar14 = param_1[3];
  uVar13 = FUN_049d0970(lVar9,*(undefined8 *)
                               System_Collections_Generic_IEnumerable<OpenXRInteractionFeature_ActionConfig>_TypeInfo
                       );
  if (lVar14 == 0) goto LAB_07222a5c;
  FUN_05b0f700(lVar14,param_2,uVar13,
               *(undefined8 *)
                System_Collections_Generic_IEnumerable<DivrPostProcessController_ColorAdjustmentsSetting>_TypeInfo
              );
LAB_07222a04:
  if (param_1[3] != 0) {
    FUN_05b0f680(param_1[3],param_2,
                 *(undefined8 *)
                  System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                );
    return;
  }
LAB_07222a5c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


