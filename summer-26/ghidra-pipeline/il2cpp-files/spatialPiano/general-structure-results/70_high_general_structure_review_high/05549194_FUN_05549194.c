/*
FUNCTION_NAME: FUN_05549194
ENTRY_POINT: 05549194
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void FUN_05549194(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
                 ,uint param_6)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined4 local_68;
  byte local_64 [4];
  
  if ((DAT_06bbf77d & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d4730);
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067cb890);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(System_UnitySerializationHolder_var);
    DAT_06bbf77d = 1;
  }
  plVar7 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
  FUN_05079bb8(plVar7,0);
  puVar4 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
  ;
  puVar3 = PTR_DAT_067cb890;
  plVar8 = *(long **)(param_1 + 0x48);
  if (plVar8 != (long *)0x0) {
    iVar14 = 0;
    while (iVar5 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0)),
          iVar14 < iVar5) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_055498b0;
      plVar8 = (long *)FUN_0557b300(*(long *)(param_1 + 0x48),iVar14,0);
      if (plVar8 == (long *)0x0) {
LAB_055492e4:
        if ((param_6 & 1) != 0) {
LAB_055492e8:
          if (plVar8 != (long *)0x0) {
LAB_055492ec:
            lVar13 = (**(code **)(*plVar8 + 0x2b8))(plVar8,*(undefined8 *)(*plVar8 + 0x2c0));
            if (lVar13 != 0) {
              lVar13 = FUN_02f0880c(*(undefined8 *)puVar3,*(int *)(lVar13 + 0x18) + 1);
              if ((param_6 & 1) == 0) {
                uVar6 = 0;
              }
              else {
                if (*(long *)(param_1 + 0x20) == 0) goto LAB_055498b0;
                lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
                uVar9 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
                if (lVar15 == 0) goto LAB_055498b0;
                uVar6 = FUN_0558e134(lVar15,uVar9,0);
              }
              if (lVar13 != 0) {
                if (*(int *)(lVar13 + 0x18) == 0) {
LAB_055498b4:
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                *(undefined4 *)(lVar13 + 0x20) = uVar6;
                if (1 < *(int *)(lVar13 + 0x18)) {
                  uVar16 = 0;
                  do {
                    lVar15 = (**(code **)(*plVar8 + 0x2b8))(plVar8,*(undefined8 *)(*plVar8 + 0x2c0))
                    ;
                    if (lVar15 == 0) goto LAB_055498b0;
                    if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_055498b4;
                    lVar15 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
                    if (lVar15 == 0) goto LAB_055498b0;
                    uVar12 = *(uint *)(lVar13 + 0x18);
                    if ((ulong)uVar12 <= uVar16 + 1) goto LAB_055498b4;
                    lVar17 = uVar16 + 2;
                    *(undefined4 *)(lVar13 + 0x24 + uVar16 * 4) = *(undefined4 *)(lVar15 + 100);
                    uVar16 = uVar16 + 1;
                  } while (lVar17 < (int)uVar12);
                }
                lVar15 = (**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270));
                if (lVar15 != 0) {
                  lVar15 = FUN_02f0880c(*(undefined8 *)puVar3,*(int *)(lVar15 + 0x18) + 1);
                  if ((param_6 & 1) == 0) {
                    uVar6 = 0;
                  }
                  else {
                    if (*(long *)(param_1 + 0x20) == 0) goto LAB_055498b0;
                    lVar17 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
                    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                    if (lVar17 == 0) goto LAB_055498b0;
                    uVar6 = FUN_0558e134(lVar17,uVar9,0);
                  }
                  if (lVar15 != 0) {
                    if (*(int *)(lVar15 + 0x18) == 0) goto LAB_055498b4;
                    *(undefined4 *)(lVar15 + 0x20) = uVar6;
                    if (1 < *(int *)(lVar15 + 0x18)) {
                      uVar16 = 0;
                      do {
                        lVar17 = (**(code **)(*plVar8 + 0x268))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x270));
                        if (lVar17 == 0) goto LAB_055498b0;
                        if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_055498b4;
                        lVar17 = *(long *)(lVar17 + uVar16 * 8 + 0x20);
                        if (lVar17 == 0) goto LAB_055498b0;
                        uVar12 = *(uint *)(lVar15 + 0x18);
                        if ((ulong)uVar12 <= uVar16 + 1) goto LAB_055498b4;
                        lVar1 = uVar16 + 2;
                        *(undefined4 *)(lVar15 + 0x24 + uVar16 * 4) = *(undefined4 *)(lVar17 + 100);
                        uVar16 = uVar16 + 1;
                      } while (lVar1 < (int)uVar12);
                    }
                    plVar10 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
                    FUN_05079bb8(plVar10,0);
                    if (plVar10 != (long *)0x0) {
                      (**(code **)(*plVar10 + 0x308))
                                (plVar10,*(undefined8 *)System_UnitySerializationHolder_var,
                                 *(undefined8 *)(*plVar10 + 0x310));
                      uVar9 = (**(code **)(*plVar8 + 0x178))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x180));
                      (**(code **)(*plVar10 + 0x308))
                                (plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x310));
                      (**(code **)(*plVar10 + 0x308))
                                (plVar10,lVar13,*(undefined8 *)(*plVar10 + 0x310));
                      (**(code **)(*plVar10 + 0x308))
                                (plVar10,lVar15,*(undefined8 *)(*plVar10 + 0x310));
                      lVar13 = FUN_02f0880c(*(undefined8 *)puVar3,3);
                      uVar6 = (**(code **)(*plVar8 + 0x278))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x280));
                      if (lVar13 != 0) {
                        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_055498b4;
                        *(undefined4 *)(lVar13 + 0x20) = uVar6;
                        uVar6 = (**(code **)(*plVar8 + 0x2d8))
                                          (plVar8,*(undefined8 *)(*plVar8 + 0x2e0));
                        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_055498b4;
                        *(undefined4 *)(lVar13 + 0x24) = uVar6;
                        uVar6 = (**(code **)(*plVar8 + 0x298))
                                          (plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
                        if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_055498b4;
                        *(undefined4 *)(lVar13 + 0x28) = uVar6;
                        (**(code **)(*plVar10 + 0x308))
                                  (plVar10,lVar13,*(undefined8 *)(*plVar10 + 0x310));
                        uVar9 = FUN_0557b028(plVar8,0);
                        (**(code **)(*plVar10 + 0x308))
                                  (plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x310));
                        if (plVar7 != (long *)0x0) {
                          lVar13 = *plVar7;
                          goto LAB_05549674;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_055498b0;
        }
LAB_05549370:
        if (plVar8 == (long *)0x0) goto LAB_055498b0;
        lVar13 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
        if ((lVar13 == param_1) &&
           (lVar13 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0)),
           lVar13 == param_1)) goto LAB_055492ec;
      }
      else {
        lVar13 = *plVar8;
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(lVar13 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
          bVar2 = *(byte *)(*(long *)
                             UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                           + 0x130);
          if (*(byte *)(lVar13 + 0x130) < bVar2) {
            plVar8 = (long *)0x0;
            goto LAB_055492e4;
          }
          if (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)
               UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
             ) {
            plVar8 = (long *)0x0;
          }
          if ((param_6 & 1) == 0) goto LAB_05549370;
          goto LAB_055492e8;
        }
        lVar13 = (**(code **)(lVar13 + 0x268))(plVar8,*(undefined8 *)(lVar13 + 0x270));
        if ((lVar13 == 0) ||
           (lVar13 = FUN_02f0880c(*(undefined8 *)puVar3,*(undefined4 *)(lVar13 + 0x18)), lVar13 == 0
           )) goto LAB_055498b0;
        if (0 < *(int *)(lVar13 + 0x18)) {
          lVar15 = 0;
          do {
            lVar17 = (**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270));
            if (lVar17 == 0) goto LAB_055498b0;
            if (*(uint *)(lVar17 + 0x18) <= (uint)lVar15) goto LAB_055498b4;
            lVar17 = *(long *)(lVar17 + lVar15 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_055498b0;
            uVar12 = (uint)*(undefined8 *)(lVar13 + 0x18);
            if (uVar12 <= (uint)lVar15) goto LAB_055498b4;
            *(undefined4 *)(lVar13 + 0x20 + lVar15 * 4) = *(undefined4 *)(lVar17 + 100);
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 < (int)uVar12);
        }
        plVar10 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
        FUN_05079bb8(plVar10,0);
        if (plVar10 == (long *)0x0) goto LAB_055498b0;
        (**(code **)(*plVar10 + 0x308))
                  (plVar10,*(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_PostfixBurstDelegate_TypeInfo
                   ,*(undefined8 *)(*plVar10 + 0x310));
        uVar9 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        (**(code **)(*plVar10 + 0x308))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x310));
        (**(code **)(*plVar10 + 0x308))(plVar10,lVar13,*(undefined8 *)(*plVar10 + 0x310));
        local_64[0] = FUN_055afea0(plVar8,0);
        local_64[0] = local_64[0] & 1;
        uVar9 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x28),local_64);
        (**(code **)(*plVar10 + 0x308))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x310));
        uVar9 = FUN_0557b028(plVar8,0);
        (**(code **)(*plVar10 + 0x308))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar7 == (long *)0x0) goto LAB_055498b0;
        lVar13 = *plVar7;
LAB_05549674:
        (**(code **)(lVar13 + 0x308))(plVar7,plVar10,*(undefined8 *)(lVar13 + 0x310));
      }
      plVar8 = *(long **)(param_1 + 0x48);
      iVar14 = iVar14 + 1;
      if (plVar8 == (long *)0x0) goto LAB_055498b0;
    }
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050656a0(0);
    local_68 = param_5;
    uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_68);
    uVar9 = FUN_04f70148(uVar9,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_BurstDirectCall_TypeInfo
                         ,uVar11,0);
    if (param_2 != 0) {
      FUN_04fd5544(param_2,uVar9,plVar7,0);
      return;
    }
  }
LAB_055498b0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


