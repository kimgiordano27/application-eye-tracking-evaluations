/*
FUNCTION_NAME: FUN_0321e888
ENTRY_POINT: 0321e888
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_0321e888(long param_1,long *param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  if ((DAT_03ff464f & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d839e0);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<CalculateHashes>b__27_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<ToString>b__24_0__);
    thunk_FUN_01ad9084(PTR_DAT_03d839e8);
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d839f0);
    thunk_FUN_01ad9084(PTR_DAT_03d83898);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d839f8);
    thunk_FUN_01ad9084(PTR_DAT_03d83a00);
    thunk_FUN_01ad9084(PTR_DAT_03d83830);
    thunk_FUN_01ad9084(PTR_DAT_03d83a08);
    thunk_FUN_01ad9084(PTR_DAT_03d83a10);
    thunk_FUN_01ad9084(PTR_DAT_03d83848);
    thunk_FUN_01ad9084(StringLiteral_2412);
    thunk_FUN_01ad9084(StringLiteral_2336);
    thunk_FUN_01ad9084(PTR_DAT_03d83a18);
    thunk_FUN_01ad9084(PTR_DAT_03d83a20);
    thunk_FUN_01ad9084(StringLiteral_12706);
    DAT_03ff464f = 1;
  }
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  if ((param_2 != (long *)0x0) &&
     (plVar6 = (long *)(**(code **)(*param_2 + 0x1a8))
                                 (param_2,*(undefined8 *)PTR_DAT_03d839f8,
                                  *(undefined8 *)(*param_2 + 0x1b0)), plVar6 != (long *)0x0)) {
    iVar3 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
    if ((0 < iVar3) &&
       (iVar3 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0)),
       puVar2 = StringLiteral_2412,
       puVar1 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
       , 0 < iVar3)) {
      iVar3 = 0;
      do {
        plVar7 = (long *)(**(code **)(*plVar6 + 0x188))(plVar6,iVar3,*(undefined8 *)(*plVar6 + 400))
        ;
        if (plVar7 == (long *)0x0) goto LAB_0321f1d8;
        uVar4 = (**(code **)(*plVar7 + 0x328))(plVar7,*(undefined8 *)(*plVar7 + 0x330));
        if ((*(long *)(param_1 + 0x38) == 0) ||
           (lVar8 = FUN_02b59714(*(long *)(param_1 + 0x38),uVar4,*(undefined8 *)puVar1), lVar8 == 0)
           ) goto LAB_0321f1d8;
        lVar8 = FUN_0391fab4(lVar8,0);
        if ((*(long *)(param_1 + 0x38) == 0) ||
           ((lVar9 = FUN_02b59714(*(long *)(param_1 + 0x38),param_3,*(undefined8 *)puVar1),
            lVar9 == 0 || (uVar10 = FUN_0391fab4(lVar9,0), lVar8 == 0)))) goto LAB_0321f1d8;
        FUN_03929618(lVar8,uVar10,0);
        plVar7 = *(long **)(param_1 + 0x10);
        if ((plVar7 == (long *)0x0) ||
           (plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                       (plVar7,*(undefined8 *)puVar2,
                                        *(undefined8 *)(*plVar7 + 0x1b0)), plVar7 == (long *)0x0))
        goto LAB_0321f1d8;
        uVar10 = (**(code **)(*plVar7 + 0x188))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 400));
        FUN_0321e888(param_1,uVar10,uVar4,param_4 & 1);
        iVar3 = iVar3 + 1;
        iVar5 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
      } while (iVar3 < iVar5);
    }
    plVar6 = (long *)(**(code **)(*param_2 + 0x1a8))
                               (param_2,*(undefined8 *)StringLiteral_2336,
                                *(undefined8 *)(*param_2 + 0x1b0));
    if ((plVar6 != (long *)0x0) &&
       (lVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170)), lVar8 != 0)
       ) {
      uVar11 = FUN_02eeacd0(lVar8,*(undefined8 *)PTR_DAT_03d83a08,0);
      puVar1 = PTR_DAT_03d83a18;
      if ((uVar11 & 1) == 0) {
        uVar10 = (**(code **)(*param_2 + 0x1a8))
                           (param_2,*(undefined8 *)PTR_DAT_03d83a18,
                            *(undefined8 *)(*param_2 + 0x1b0));
        uVar11 = FUN_032bc29c(uVar10,0,0);
        if ((uVar11 & 1) != 0) {
          plVar6 = (long *)(**(code **)(*param_2 + 0x1a8))
                                     (param_2,*(undefined8 *)puVar1,
                                      *(undefined8 *)(*param_2 + 0x1b0));
          if (plVar6 == (long *)0x0) goto LAB_0321f1d8;
          uVar4 = (**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330));
          plVar6 = *(long **)(param_1 + 0x10);
          if ((plVar6 == (long *)0x0) ||
             (plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                         (plVar6,*(undefined8 *)PTR_DAT_03d83a20,
                                          *(undefined8 *)(*plVar6 + 0x1b0)), plVar6 == (long *)0x0))
          goto LAB_0321f1d8;
          uVar10 = (**(code **)(*plVar6 + 0x188))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 400));
          FUN_0321f6f4(&local_108,param_1,uVar10,param_4 & 1);
          puVar2 = PTR_DAT_03d83a10;
          uStack_b8 = uStack_f0;
          local_c0 = local_f8;
          uStack_a8 = uStack_e0;
          local_b0 = local_e8;
          uStack_98 = uStack_d0;
          local_a0 = local_d8;
          uVar10 = (**(code **)(*param_2 + 0x1a8))
                             (param_2,*(undefined8 *)PTR_DAT_03d83a10,
                              *(undefined8 *)(*param_2 + 0x1b0));
          uVar11 = FUN_032bc29c(uVar10,0,0);
          puVar1 = 
          Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
          if ((*(long *)(param_1 + 0x38) == 0) ||
             (lVar8 = FUN_02b59714(*(long *)(param_1 + 0x38),param_3,
                                   *(undefined8 *)
                                    Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                                  ), lVar8 == 0)) goto LAB_0321f1d8;
          if ((uVar11 & 1) == 0) {
            lVar8 = FUN_01ed7044(lVar8,*(undefined8 *)
                                        Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<CalculateHashes>b__27_0__
                                );
            if (lVar8 == 0) goto LAB_0321f1d8;
            FUN_03900dc8(lVar8,local_108,0);
            if (((*(long *)(param_1 + 0x38) == 0) ||
                (lVar8 = FUN_02b59714(*(long *)(param_1 + 0x38),param_3,*(undefined8 *)puVar1),
                lVar8 == 0)) ||
               (lVar8 = FUN_01ed7044(lVar8,*(undefined8 *)
                                            Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<ToString>b__24_0__
                                    ), lVar8 == 0)) goto LAB_0321f1d8;
            FUN_038fe8bc(lVar8,uStack_100,0);
          }
          else {
            lVar8 = FUN_01ed7044(lVar8,*(undefined8 *)PTR_DAT_03d839e8);
            if (lVar8 == 0) goto LAB_0321f1d8;
            FUN_03900f94(lVar8,local_108,0);
            FUN_038fe8bc(lVar8,uStack_100,0);
            plVar6 = (long *)(**(code **)(*param_2 + 0x1a8))
                                       (param_2,*(undefined8 *)puVar2,
                                        *(undefined8 *)(*param_2 + 0x1b0));
            if (plVar6 == (long *)0x0) goto LAB_0321f1d8;
            uVar4 = (**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330));
            plVar6 = *(long **)(param_1 + 0x10);
            if ((plVar6 == (long *)0x0) ||
               (plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                           (plVar6,*(undefined8 *)PTR_DAT_03d83a00,
                                            *(undefined8 *)(*plVar6 + 0x1b0)), plVar6 == (long *)0x0
               )) goto LAB_0321f1d8;
            uVar10 = (**(code **)(*plVar6 + 0x188))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 400));
            FUN_03220094(param_1,uVar10,lVar8);
          }
          if (local_c8 != 0) {
            lVar9 = *(long *)(param_1 + 0x50);
            lVar8 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d839f0);
            FUN_03081994(lVar8,0);
            *(undefined8 *)(lVar8 + 0x10) = local_108;
            *(undefined8 *)(lVar8 + 0x18) = uStack_100;
            *(long *)(lVar8 + 0x50) = local_c8;
            *(undefined8 *)(lVar8 + 0x38) = uStack_a8;
            *(undefined8 *)(lVar8 + 0x30) = local_b0;
            *(undefined8 *)(lVar8 + 0x48) = uStack_98;
            *(undefined8 *)(lVar8 + 0x40) = local_a0;
            *(undefined8 *)(lVar8 + 0x28) = uStack_b8;
            *(undefined8 *)(lVar8 + 0x20) = local_c0;
            thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x10),0);
            if (lVar9 == 0) goto LAB_0321f1d8;
            FUN_0255ad2c(lVar9,param_3,lVar8,*(undefined8 *)PTR_DAT_03d839e0);
          }
        }
        plVar6 = (long *)(**(code **)(*param_2 + 0x1a8))
                                   (param_2,*(undefined8 *)PTR_DAT_03d83830,
                                    *(undefined8 *)(*param_2 + 0x1b0));
        if (plVar6 != (long *)0x0) {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
          plVar7 = (long *)(**(code **)(*param_2 + 0x1a8))
                                     (param_2,*(undefined8 *)PTR_DAT_03d83848,
                                      *(undefined8 *)(*param_2 + 0x1b0));
          if (plVar7 != (long *)0x0) {
            plVar7 = (long *)(**(code **)(*plVar7 + 0x3a8))(plVar7,*(undefined8 *)(*plVar7 + 0x3b0))
            ;
            plVar12 = (long *)(**(code **)(*param_2 + 0x1a8))
                                        (param_2,*(undefined8 *)StringLiteral_12706,
                                         *(undefined8 *)(*param_2 + 0x1b0));
            if ((plVar12 != (long *)0x0) &&
               (plVar12 = (long *)(**(code **)(*plVar12 + 0x3a8))
                                            (plVar12,*(undefined8 *)(*plVar12 + 0x3b0)),
               plVar6 != (long *)0x0)) {
              iVar3 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
              if (0 < iVar3) {
                uVar10 = (**(code **)(*plVar6 + 0x188))(plVar6,0,*(undefined8 *)(*plVar6 + 400));
                fVar13 = (float)FUN_032c0b68(uVar10,0);
                puVar1 = PTR_DAT_03d83898;
                lVar8 = *(long *)PTR_DAT_03d83898;
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar8 = *(long *)puVar1;
                }
                fVar18 = **(float **)(lVar8 + 0xb8);
                uVar10 = (**(code **)(*plVar6 + 0x188))(plVar6,1,*(undefined8 *)(*plVar6 + 400));
                fVar14 = (float)FUN_032c0b68(uVar10,0);
                fVar19 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 4);
                uVar10 = (**(code **)(*plVar6 + 0x188))(plVar6,2,*(undefined8 *)(*plVar6 + 400));
                fVar15 = (float)FUN_032c0b68(uVar10,0);
                if (*(long *)(param_1 + 0x38) == 0) goto LAB_0321f1d8;
                fVar20 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                lVar8 = FUN_02b59714(*(long *)(param_1 + 0x38),param_3,
                                     *(undefined8 *)
                                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                                    );
                if ((lVar8 == 0) || (lVar8 = FUN_0391fab4(lVar8,0), lVar8 == 0)) goto LAB_0321f1d8;
                FUN_03928dd4(fVar13 * fVar18,fVar14 * fVar19,fVar15 * fVar20,lVar8,0);
              }
              if (plVar7 != (long *)0x0) {
                iVar3 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                if (0 < iVar3) {
                  uVar10 = (**(code **)(*plVar7 + 0x188))(plVar7,0,*(undefined8 *)(*plVar7 + 400));
                  fVar13 = (float)FUN_032c0b68(uVar10,0);
                  puVar1 = PTR_DAT_03d83898;
                  lVar8 = *(long *)PTR_DAT_03d83898;
                  if (*(int *)(lVar8 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar8 = *(long *)puVar1;
                  }
                  fVar18 = **(float **)(lVar8 + 0xb8);
                  uVar10 = (**(code **)(*plVar7 + 0x188))(plVar7,1,*(undefined8 *)(*plVar7 + 400));
                  fVar14 = (float)FUN_032c0b68(uVar10,0);
                  fVar19 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 4);
                  uVar10 = (**(code **)(*plVar7 + 0x188))(plVar7,2,*(undefined8 *)(*plVar7 + 400));
                  fVar15 = (float)FUN_032c0b68(uVar10,0);
                  if (*(long *)(param_1 + 0x38) == 0) goto LAB_0321f1d8;
                  fVar20 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                  lVar8 = FUN_02b59714(*(long *)(param_1 + 0x38),param_3,
                                       *(undefined8 *)
                                        Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                                      );
                  if (lVar8 == 0) goto LAB_0321f1d8;
                  lVar8 = FUN_0391fab4(lVar8,0);
                  uVar10 = (**(code **)(*plVar7 + 0x188))(plVar7,3,*(undefined8 *)(*plVar7 + 400));
                  uVar10 = FUN_032c0b68(uVar10,0);
                  if (lVar8 == 0) goto LAB_0321f1d8;
                  FUN_03928f54(fVar18 * -fVar13,fVar19 * -fVar14,fVar20 * -fVar15,uVar10,lVar8,0);
                }
                if (plVar12 != (long *)0x0) {
                  iVar3 = (**(code **)(*plVar12 + 0x1e8))(plVar12,*(undefined8 *)(*plVar12 + 0x1f0))
                  ;
                  if (0 < iVar3) {
                    uVar10 = (**(code **)(*plVar12 + 0x188))
                                       (plVar12,0,*(undefined8 *)(*plVar12 + 400));
                    uVar16 = FUN_032c0b68(uVar10,0);
                    uVar10 = (**(code **)(*plVar12 + 0x188))
                                       (plVar12,1,*(undefined8 *)(*plVar12 + 400));
                    uVar17 = FUN_032c0b68(uVar10,0);
                    uVar10 = (**(code **)(*plVar12 + 0x188))
                                       (plVar12,2,*(undefined8 *)(*plVar12 + 400));
                    uVar10 = FUN_032c0b68(uVar10,0);
                    if (((*(long *)(param_1 + 0x38) == 0) ||
                        (lVar8 = FUN_02b59714(*(long *)(param_1 + 0x38),param_3,
                                              *(undefined8 *)
                                               Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                                             ), lVar8 == 0)) ||
                       (lVar8 = FUN_0391fab4(lVar8,0), lVar8 == 0)) goto LAB_0321f1d8;
                    FUN_039293f4(uVar16,uVar17,uVar10,lVar8,0);
                  }
                  return;
                }
              }
            }
          }
        }
      }
      else if (*(long *)(param_1 + 0x38) != 0) {
        uVar10 = FUN_02b59714(*(long *)(param_1 + 0x38),param_3,
                              *(undefined8 *)
                               Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                             );
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        FUN_03923a90(uVar10,0);
        return;
      }
    }
  }
LAB_0321f1d8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


