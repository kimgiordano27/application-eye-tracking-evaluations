/*
FUNCTION_NAME: UnityEditor.Analytics.PackageManagerBaseAnalytic$$.ctor
ENTRY_POINT: 07ec0928
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void UnityEditor_Analytics_PackageManagerBaseAnalytic___ctor(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  long in_stack_00000008;
  
  puVar6 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
  puVar5 = Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__;
  puVar4 = PTR_DAT_08493c18;
  puVar3 = PTR_DAT_08487110;
  puVar2 = PTR_DAT_08487108;
  if (unaff_x19 != (long *)0x0) {
    unaff_x19[0x61] = unaff_x20;
    thunk_FUN_03afed3c(unaff_x19 + 0x61);
    uVar8 = *(undefined8 *)puVar6;
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    unaff_x19[0x67] = 0x41b0000000000000;
    lVar9 = thunk_FUN_03ac74bc(uVar8);
    FUN_0679343c(lVar9,0);
    unaff_x19[0x6d] = lVar9;
    thunk_FUN_03afed3c(unaff_x19 + 0x6d,lVar9);
    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    System_Collections_Generic_List<SpawnWaypoint>__TrimExcess(lVar9,*(undefined8 *)puVar3);
    unaff_x19[0x6e] = lVar9;
    thunk_FUN_03afed3c(unaff_x19 + 0x6e,lVar9);
    FUN_07db5314();
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07e0aa30();
    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_07ec0dd8();
    puVar2 = PTR_DAT_08495778;
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x28) = unaff_x19[0x6e];
      thunk_FUN_03afed3c();
      unaff_x19[0x6f] = lVar9;
      thunk_FUN_03afed3c(unaff_x19 + 0x6f,lVar9);
      FUN_07ebf6e8();
      lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      FUN_07f052a0(lVar9,0);
      plVar1 = unaff_x19 + 0x69;
      unaff_x19[0x69] = lVar9;
      thunk_FUN_03afed3c(plVar1,lVar9);
      if (unaff_x19[0x69] != 0) {
        FUN_07e0aa30(unaff_x19[0x69],*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x788),0);
        if (*plVar1 != 0) {
          lVar9 = *(long *)(*plVar1 + 0x338);
          uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0849a030);
          FUN_05e3cc5c();
          puVar2 = PTR_DAT_08493e38;
          if (lVar9 != 0) {
            FUN_07f0b0a0(lVar9,uVar8,0);
            lVar9 = unaff_x19[0x69];
            uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
            FUN_064612a8();
            puVar2 = PTR_DAT_08494d40;
            if (lVar9 != 0) {
              FUN_0446886c(lVar9,uVar8,0,*(undefined8 *)PTR_DAT_08493e40);
              thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
              FUN_064612a8();
              FUN_0446886c();
              puVar2 = PTR_DAT_08493c28;
              plVar10 = (long *)unaff_x19[0x69];
              if (plVar10 != (long *)0x0) {
                lVar9 = (**(code **)(*plVar10 + 0x988))(plVar10,*(undefined8 *)(*plVar10 + 0x990));
                uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
                FUN_064612a8();
                if (lVar9 != 0) {
                  FUN_0446886c(lVar9,uVar8,0,*(undefined8 *)PTR_DAT_08494d28);
                  puVar2 = PTR_DAT_08493c30;
                  plVar10 = (long *)*plVar1;
                  if (plVar10 != (long *)0x0) {
                    lVar9 = (**(code **)(*plVar10 + 0x988))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x990));
                    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
                    FUN_064612a8();
                    if (lVar9 != 0) {
                      FUN_0446886c(lVar9,uVar8,0,*(undefined8 *)PTR_DAT_08494d30);
                      in_stack_00000008 = unaff_x19[0x4d];
                      FUN_07e13e7c(&stack0x00000008,unaff_x19[0x69],0);
                      plVar10 = (long *)unaff_x19[0x69];
                      if (plVar10 != (long *)0x0) {
                        plVar10 = (long *)(**(code **)(*plVar10 + 0x988))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 0x990));
                        if (plVar10 != (long *)0x0) {
                          (**(code **)(*plVar10 + 0x248))
                                    (plVar10,1,*(undefined8 *)(*plVar10 + 0x250));
                          plVar10 = (long *)*plVar1;
                          if (plVar10 != (long *)0x0) {
                            lVar9 = (**(code **)(*plVar10 + 0x988))
                                              (plVar10,*(undefined8 *)(*plVar10 + 0x990));
                            if (lVar9 != 0) {
                              uVar7 = FUN_07e05068(lVar9,0);
                              FUN_07e05088(lVar9,uVar7 & 0xfffffffd,0);
                              if (*plVar1 != 0) {
                                FUN_07e04a6c(*plVar1,*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__
                                             ,0);
                                if ((*plVar1 != 0) &&
                                   (lVar9 = *(long *)(*plVar1 + 0x338), lVar9 != 0)) {
                                  FUN_07e04a6c(lVar9,0,0);
                                  puVar2 = Unity_Netcode_NetworkConfig_<>c_TypeInfo;
                                  if ((*plVar1 != 0) &&
                                     (lVar9 = *(long *)(*plVar1 + 0x330), lVar9 != 0)) {
                                    FUN_07e04a6c(lVar9,0,0);
                                    (**(code **)(*unaff_x19 + 0x248))();
                                    FUN_07e04898();
                                    FUN_07f40ad4();
                                    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
                                    FUN_05f21d70();
                                    unaff_x19[0x72] = lVar9;
                                    thunk_FUN_03afed3c(unaff_x19 + 0x72,lVar9);
                                    lVar9 = thunk_FUN_03ac74bc(*unaff_x23);
                                    FUN_066b5934();
                                    unaff_x19[0x73] = lVar9;
                                    thunk_FUN_03afed3c(unaff_x19 + 0x73,lVar9);
                                    FUN_07ec05dc();
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


