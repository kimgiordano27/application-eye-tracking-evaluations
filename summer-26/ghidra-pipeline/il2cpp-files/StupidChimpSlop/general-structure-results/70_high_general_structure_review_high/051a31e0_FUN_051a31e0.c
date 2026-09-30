/*
FUNCTION_NAME: FUN_051a31e0
ENTRY_POINT: 051a31e0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void FUN_051a31e0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_48;
  uint local_44;
  
                    /* try { // try from 051a31e8 to 052a31f7 has its CatchHandler @ 051a33b4 */
                    /* try { // try from 051a31f8 to 052a321b has its CatchHandler @ 051a2390 */
                    /* catch() { ... } // from try @ 051a29cc with catch @ 051a31fc */
                    /* catch() { ... } // from try @ 051a2dc8 with catch @ 051a3200 */
                    /* catch() { ... } // from try @ 051a271c with catch @ 051a3204 */
  if ((DAT_06a51d66 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06646730);
                    /* try { // try from 051a321c to 052a3233 has its CatchHandler @ 051a33d8 */
    FUN_02d4dc40(PlayFab_ClientModels_OpenTradeResponse_var);
    FUN_02d4dc40(PTR_DAT_066463a0);
                    /* try { // try from 051a3234 to 052a32bb has its CatchHandler @ 051a2390 */
    FUN_02d4dc40(System_Runtime_Serialization_OptionalFieldAttribute_var);
    FUN_02d4dc40(UnityEditor_Analytics_PackageManagerResolvePackageAnalytic_var);
    FUN_02d4dc40(UnityEngine_UIElements_PanelEventHandler_var);
    DAT_06a51d66 = 1;
  }
  puVar3 = PlayFab_ClientModels_OpenTradeResponse_var;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = *(int *)(param_2 + 0x18) / param_3;
    }
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < (int)uVar2) {
      FUN_0291d7ec(param_2);
      FUN_05025690(param_2,0,*(undefined4 *)(param_2 + 0x18),0);
      puVar3 = PTR_DAT_066462a0;
      local_44 = uVar2;
      uVar9 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&local_44);
      lVar10 = *(long *)(param_1 + 0x28);
      FUN_0291d7ec(lVar10);
      local_48 = (uint)*(undefined8 *)(lVar10 + 0x18);
      uVar7 = thunk_FUN_02d8a270(*(undefined8 *)(puVar3 + 0x48),&local_48);
      uVar8 = thunk_FUN_02db45e8(UnityEngine_UIElements_PanelRaycaster_var);
      uVar9 = FUN_04e80fdc(uVar8,uVar9,uVar7,0);
      thunk_FUN_02db45e8(PTR_DAT_06647b18);
      uVar7 = thunk_FUN_02d8a638();
      FUN_0503a078(uVar7,uVar9,0);
      uVar9 = thunk_FUN_02db45e8(System_ParamArrayAttribute_var);
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar7,uVar9);
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (plVar15 = *(long **)(*(long *)(param_1 + 0x20) + 0x38), plVar15 != (long *)0x0)) {
      lVar10 = *plVar15;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PlayFab_ClientModels_OpenTradeResponse_var) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto LAB_051a32e4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02d87540(plVar15,*(long *)PlayFab_ClientModels_OpenTradeResponse_var,3);
LAB_051a32e4:
      uVar4 = (*(code *)*puVar5)(plVar15,puVar5[1]);
      if ((int)uVar4 < (int)uVar2) {
        if (*(char *)(*(long *)(*(long *)System_Runtime_Serialization_OptionalFieldAttribute_var +
                               0xb8) + 4) == '\0') {
          return;
        }
        plVar15 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,2);
        puVar3 = PTR_DAT_066462a0;
        local_44 = uVar2;
        lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&local_44);
        if (plVar15 != (long *)0x0) {
          if ((lVar10 != 0) &&
             (lVar6 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0)) {
LAB_051a36cc:
            uVar9 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar9,0);
          }
          if ((int)plVar15[3] != 0) {
            plVar15[4] = lVar10;
            thunk_FUN_02dc1ef0(plVar15 + 4,lVar10);
            local_48 = uVar4;
            lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(puVar3 + 0x48),&local_48);
            if ((lVar10 != 0) &&
               (lVar6 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0))
            goto LAB_051a36cc;
            if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
              plVar15[5] = lVar10;
              thunk_FUN_02dc1ef0(plVar15 + 5,lVar10);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_05ea2458(*(undefined8 *)
                            UnityEditor_Analytics_PackageManagerResolvePackageAnalytic_var,plVar15,0
                          );
              return;
            }
          }
LAB_051a3610:
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
      }
      else if ((*(long *)(param_1 + 0x20) != 0) &&
              (plVar15 = *(long **)(*(long *)(param_1 + 0x20) + 0x38), plVar15 != (long *)0x0)) {
        lVar10 = *plVar15;
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_051a3458;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d87540(plVar15,*(long *)puVar3,0);
LAB_051a3458:
        uVar4 = (*(code *)*puVar5)(plVar15,uVar9,uVar2,puVar5[1]);
        if ((int)uVar4 < (int)uVar2) {
          plVar15 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,2);
          puVar3 = PTR_DAT_066462a0;
          local_44 = uVar4;
          lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&local_44);
          if (plVar15 != (long *)0x0) {
            if ((lVar10 == 0) ||
               (lVar6 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar6 != 0)) {
              if ((int)plVar15[3] != 0) {
                plVar15[4] = lVar10;
                thunk_FUN_02dc1ef0(plVar15 + 4,lVar10);
                local_48 = uVar2;
                lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(puVar3 + 0x48),&local_48);
                if ((lVar10 != 0) &&
                   (lVar6 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0)
                   ) goto LAB_051a36cc;
                if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
                  plVar15[5] = lVar10;
                  thunk_FUN_02dc1ef0(plVar15 + 5,lVar10);
                  if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  FUN_05ea3014(*(undefined8 *)UnityEngine_UIElements_PanelEventHandler_var,plVar15,0
                              );
                  return;
                }
              }
              goto LAB_051a3610;
            }
            goto LAB_051a36cc;
          }
        }
        else {
          if ((int)uVar2 < 1) {
            fVar17 = -1.0;
          }
          else {
            lVar10 = *(long *)(param_1 + 0x28);
            if (lVar10 == 0) goto LAB_051a3614;
            uVar1 = *(uint *)(lVar10 + 0x18);
            uVar11 = 0;
            uVar4 = 0;
            fVar16 = -1.0;
            do {
              if (uVar11 == uVar1) goto LAB_051a3610;
              fVar17 = fVar16;
              if (0 < param_3) {
                fVar18 = *(float *)(lVar10 + uVar11 * 4 + 0x20);
                iVar14 = param_3;
                iVar13 = 0;
                if (uVar4 <= *(uint *)(param_2 + 0x18)) {
                  iVar13 = *(uint *)(param_2 + 0x18) - uVar4;
                }
                do {
                  if (iVar13 == 0) goto LAB_051a3610;
                  lVar6 = (long)(int)uVar4;
                  uVar4 = uVar4 + 1;
                  *(float *)(param_2 + lVar6 * 4 + 0x20) = fVar18;
                  fVar17 = fVar18;
                  if (fVar18 <= fVar16) {
                    fVar17 = fVar16;
                  }
                  iVar14 = iVar14 + -1;
                  fVar16 = fVar17;
                  iVar13 = iVar13 + -1;
                } while (iVar14 != 0);
              }
              uVar11 = uVar11 + 1;
              fVar16 = fVar17;
            } while (uVar11 != uVar2);
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            *(float *)(*(long *)(param_1 + 0x20) + 0x30) = fVar17;
            return;
          }
        }
      }
    }
  }
LAB_051a3614:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


