/*
FUNCTION_NAME: FUN_05440660
ENTRY_POINT: 05440660
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05440a78) */
/* WARNING: Removing unreachable block (ram,0x054409d0) */

void FUN_05440660(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  
  puVar3 = PTR_DAT_0664a998;
  if ((DAT_06a53825 & 1) == 0) {
    FUN_02d4dc40(System_Reflection_RuntimeParameterInfo_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664a998);
    FUN_02d4dc40(PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(TMPro_TMP_FontAsset_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_XR_OpenXR_Features_RuntimeDebugger_RuntimeDebuggerOpenXRFeature_TypeInfo
                );
    DAT_06a53825 = 1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar5 = *(long *)puVar3;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    FUN_031bd794(**(long **)(lVar5 + 0xb8),*(undefined8 *)TMPro_TMP_FontAsset_TypeInfo,
                 *(undefined4 *)(param_1 + 0x88),param_2,
                 *(undefined8 *)System_Reflection_RuntimeParameterInfo_TypeInfo);
    if (param_2 == 0) {
      param_2 = **(long **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
    }
    plVar15 = (long *)(param_1 + 0x50);
    uVar6 = FUN_04e7eb78(param_2,*plVar15,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    FUN_054405e0(param_1,*(undefined8 *)
                          UnityEngine_XR_OpenXR_Features_RuntimeDebugger_RuntimeDebuggerOpenXRFeature_TypeInfo
                );
    plVar7 = *(long **)(param_1 + 0x28);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
      puVar4 = PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var;
      puVar3 = PTR_DAT_066479b0;
joined_r0x054407a8:
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar13 = *plVar7;
        lVar5 = *(long *)puVar3;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar6 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar5) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0544080c;
            }
            uVar6 = uVar6 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d87540(plVar7,lVar5,0);
LAB_0544080c:
        uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        puVar2 = PTR_DAT_066479a8;
        if ((uVar6 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_02d8a53c(plVar7,*(undefined8 *)PTR_DAT_066479a8);
          if (plVar7 == (long *)0x0) goto LAB_054409c4;
          lVar5 = *plVar7;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_0544099c;
          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_05440984;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar13 = *plVar7;
        lVar5 = *(long *)puVar3;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar6 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar5) {
              puVar8 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_05440874;
            }
            uVar6 = uVar6 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d87540(plVar7,lVar5,1);
LAB_05440874:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar9);
        }
      } while (plVar9[0x13] != 0);
      lVar5 = plVar9[0x31];
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(long *)(lVar5 + 0x18) != 0) {
        if ((int)*(long *)(lVar5 + 0x18) != 1) goto joined_r0x054407a8;
        plVar10 = *(long **)(lVar5 + 0x20);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
        if (plVar10 != plVar9) goto joined_r0x054407a8;
      }
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar6 = FUN_05464148(*(long *)(param_1 + 0x28),plVar9[0x12],param_2,0,1,0);
      if ((uVar6 & 1) != 0) {
        uVar11 = FUN_0543add4(plVar9[0x12],param_2);
        uVar12 = thunk_FUN_02db45e8(TMPro_TMP_FontAssetUtilities_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar11,uVar12);
      }
      FUN_05420f4c(plVar9,param_2,0);
      FUN_054216c4(plVar9,0);
      goto joined_r0x054407a8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar14 = piVar14 + 4;
    if (uVar6 == 0) break;
LAB_05440984:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_054409b8;
    }
  }
LAB_0544099c:
  puVar8 = (undefined8 *)FUN_02d87540(plVar7,*(long *)puVar2,0);
LAB_054409b8:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_054409c4:
  *plVar15 = param_2;
  thunk_FUN_02dc1ef0(plVar15,param_2);
  uVar6 = FUN_04e7faf0(param_2,0);
  if ((uVar6 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
    thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x48));
  }
  return;
}


