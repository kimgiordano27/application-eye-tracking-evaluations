/*
FUNCTION_NAME: FUN_0320764c
ENTRY_POINT: 0320764c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_21;telemetry_or_network_hits_7
*/


void FUN_0320764c(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  
  if ((DAT_03ff4542 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d832c8);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_E7A6520935E622D270A66BB158A7049033032A904B991BB281E52C703BF7985B
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d832d0);
    thunk_FUN_01ad9084(PTR_DAT_03d832d8);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d832e0);
    thunk_FUN_01ad9084(PTR_DAT_03d832e8);
    thunk_FUN_01ad9084(PTR_DAT_03d832f0);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector3Field_<>c_<DescribeFields>b__0_3__);
    DAT_03ff4542 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_3 != 0) {
    uVar8 = FUN_0391c2b8(param_3,0);
    puVar15 = (undefined8 *)(param_1 + 0x40);
    uVar16 = *puVar15;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar9 = FUN_0391f968(uVar8,uVar16,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    plVar10 = (long *)FUN_01b47fd0(*(undefined8 *)
                                    Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                   ,1);
    lVar11 = FUN_0391c2b8(param_3,0);
    if ((lVar11 != 0) && (lVar11 = FUN_039230bc(lVar11,0), plVar10 != (long *)0x0)) {
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)) {
        uVar8 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar8,0);
      }
      if ((int)plVar10[3] == 0) goto LAB_03208294;
      plVar10[4] = lVar11;
      thunk_FUN_01b4f09c(plVar10 + 4,lVar11);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2cec(*(undefined8 *)PTR_DAT_03d832e8,plVar10,0);
      plVar10 = (long *)(param_1 + 0x58);
      FUN_032063d0(plVar10);
      plVar18 = (long *)(param_1 + 0x60);
      *plVar18 = 0;
      thunk_FUN_01b4f09c(plVar18,0);
      plVar1 = (long *)(param_1 + 0x48);
      FUN_032063d0(plVar1);
      plVar17 = (long *)(param_1 + 0x50);
      *plVar17 = 0;
      thunk_FUN_01b4f09c(plVar17,0);
      FUN_03205bbc(param_1,param_2,param_3);
      puVar3 = PTR_DAT_03d832d8;
      if (param_4 != (long *)0x0) {
        lVar11 = *param_4;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03d832d8) {
              puVar13 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x36) * 0x10 + 0x138);
              goto LAB_032078d0;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ae9f78(param_4,*(long *)PTR_DAT_03d832d8,0x36);
LAB_032078d0:
        lVar11 = (*(code *)*puVar13)(param_4,puVar13[1]);
        if (lVar11 == 0) {
          uVar8 = FUN_0391c2b8(param_3,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          lVar11 = FUN_01f25754(uVar8,*(undefined8 *)
                                       Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
        }
        else {
          lVar11 = *param_4;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar9 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar13 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x36) * 0x10 + 0x138);
                goto LAB_0320796c;
              }
              uVar9 = uVar9 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_01ae9f78(param_4,*(long *)puVar3,0x36);
LAB_0320796c:
          lVar11 = (*(code *)*puVar13)(param_4,puVar13[1]);
          uVar8 = FUN_0391c2b8(param_3,0);
          if (lVar11 == 0) goto LAB_03208290;
          lVar11 = (**(code **)(lVar11 + 0x18))
                             (*(undefined8 *)(lVar11 + 0x40),uVar8,2,*(undefined8 *)(lVar11 + 0x28))
          ;
        }
        *plVar10 = lVar11;
        thunk_FUN_01b4f09c(plVar10,lVar11);
        if (*plVar10 != 0) {
          FUN_0392316c(*plVar10,*(undefined8 *)PTR_DAT_03d832e0,0);
          if (*plVar10 != 0) {
            lVar11 = FUN_0391fab4(*plVar10,0);
            if (*(char *)(param_1 + 0x10) == '\0') {
              if (param_2 == 0) goto LAB_03208290;
              uVar8 = FUN_0391fab4(param_2,0);
            }
            else {
              if (*(long *)(param_1 + 0x18) == 0) goto LAB_03208290;
              uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
            }
            if (lVar11 != 0) {
              FUN_039294c8(lVar11,uVar8,0);
              if (*plVar10 != 0) {
                uVar8 = FUN_01ed712c(*plVar10,*(undefined8 *)PTR_DAT_03d832c8);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar2);
                }
                uVar9 = FUN_03923030(uVar8,0);
                if ((uVar9 & 1) != 0) {
                  if (*plVar10 == 0) goto LAB_03208290;
                  uVar8 = FUN_01ed712c(*plVar10,*(undefined8 *)PTR_DAT_03d832c8);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar2);
                  }
                  FUN_03923a90(uVar8,0);
                }
                if (*plVar10 != 0) {
                  uVar8 = FUN_01ed712c(*plVar10,*(undefined8 *)PTR_DAT_03d832d0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar2);
                  }
                  uVar9 = FUN_03923030(uVar8,0);
                  if ((uVar9 & 1) != 0) {
                    if (*plVar10 == 0) goto LAB_03208290;
                    uVar8 = FUN_01ed712c(*plVar10,*(undefined8 *)PTR_DAT_03d832d0);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)puVar2);
                    }
                    FUN_03923a90(uVar8,0);
                  }
                  if (*plVar10 != 0) {
                    lVar11 = FUN_01ed712c(*plVar10,*(undefined8 *)
                                                                                                        
                                                  Field_<PrivateImplementationDetails>_E7A6520935E622D270A66BB158A7049033032A904B991BB281E52C703BF7985B
                                         );
                    *plVar18 = lVar11;
                    thunk_FUN_01b4f09c(plVar18,lVar11);
                    if (*plVar18 != 0) {
                      FUN_0391c798(*plVar18,*(undefined8 *)
                                             Method_UnityEngine_UIElements_Vector3Field_<>c_<DescribeFields>b__0_3__
                                   ,0);
                      if (*plVar18 != 0) {
                        FUN_038f1830(*plVar18,0,0);
                        if (*plVar18 != 0) {
                          FUN_038f0a44(DAT_00b554dc,*plVar18,0);
                          if (*plVar18 != 0) {
                            FUN_038f0e08(0,0,0x3f000000,0x3f800000,*plVar18,0);
                            lVar11 = *plVar18;
                            if (lVar11 != 0) {
                              uVar4 = FUN_038f0b18(lVar11,0);
                              lVar12 = *param_4;
                              uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                              if (uVar9 != 0) {
                                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                                    puVar13 = (undefined8 *)
                                              (lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                                    goto LAB_03207c14;
                                  }
                                  uVar9 = uVar9 - 1;
                                  piVar14 = piVar14 + 4;
                                } while (uVar9 != 0);
                              }
                              puVar13 = (undefined8 *)FUN_01ae9f78(param_4,*(long *)puVar3,2);
LAB_03207c14:
                              uVar5 = (*(code *)*puVar13)(param_4,puVar13[1]);
                              uVar6 = FUN_03920150(uVar5,0);
                              lVar12 = *param_4;
                              uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                              if (uVar9 != 0) {
                                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                                    puVar13 = (undefined8 *)
                                              (lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                                    goto LAB_03207c84;
                                  }
                                  uVar9 = uVar9 - 1;
                                  piVar14 = piVar14 + 4;
                                } while (uVar9 != 0);
                              }
                              puVar13 = (undefined8 *)FUN_01ae9f78(param_4,*(long *)puVar3,4);
LAB_03207c84:
                              uVar5 = (*(code *)*puVar13)(param_4,puVar13[1]);
                              uVar7 = FUN_03920150(uVar5,0);
                              FUN_038f0b54(lVar11,uVar7 | uVar4 & (uVar6 ^ 0xffffffff),0);
                              puVar2 = 
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              ;
                              lVar11 = *(long *)(param_1 + 0x88);
                              if (lVar11 != 0) {
                                if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03208294;
                                if (*(long *)(param_1 + 0x60) != 0) {
                                  FUN_038f0ff0(*(long *)(param_1 + 0x60),
                                               *(undefined8 *)(lVar11 + 0x20),0);
                                  if (*(char *)(param_1 + 0x71) == '\0') {
                                    if (*plVar18 == 0) goto LAB_03208290;
                                    FUN_038f0e08(0,0,0x3f800000,0x3f800000,*plVar18,0);
                                  }
                                  lVar11 = *param_4;
                                  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                  if (uVar9 != 0) {
                                    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                                        puVar13 = (undefined8 *)
                                                  (lVar11 + (long)(*piVar14 + 0x36) * 0x10 + 0x138);
                                        goto LAB_03207d5c;
                                      }
                                      uVar9 = uVar9 - 1;
                                      piVar14 = piVar14 + 4;
                                    } while (uVar9 != 0);
                                  }
                                  puVar13 = (undefined8 *)FUN_01ae9f78(param_4,*(long *)puVar3,0x36)
                                  ;
LAB_03207d5c:
                                  lVar11 = (*(code *)*puVar13)(param_4,puVar13[1]);
                                  if (lVar11 == 0) {
                                    uVar8 = FUN_0391c2b8(param_3,0);
                                    lVar11 = *(long *)puVar2;
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_01ac7298(lVar11);
                                    }
                                    lVar11 = FUN_01f25754(uVar8,*(undefined8 *)
                                                                                                                                  
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__
                                                  );
                                  }
                                  else {
                                    lVar11 = *param_4;
                                    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                    if (uVar9 != 0) {
                                      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                                          puVar13 = (undefined8 *)
                                                    (lVar11 + (long)(*piVar14 + 0x36) * 0x10 + 0x138
                                                    );
                                          goto LAB_03207df8;
                                        }
                                        uVar9 = uVar9 - 1;
                                        piVar14 = piVar14 + 4;
                                      } while (uVar9 != 0);
                                    }
                                    puVar13 = (undefined8 *)
                                              FUN_01ae9f78(param_4,*(long *)puVar3,0x36);
LAB_03207df8:
                                    lVar11 = (*(code *)*puVar13)(param_4,puVar13[1]);
                                    uVar8 = FUN_0391c2b8(param_3,0);
                                    if (lVar11 == 0) goto LAB_03208290;
                                    lVar11 = (**(code **)(lVar11 + 0x18))
                                                       (*(undefined8 *)(lVar11 + 0x40),uVar8,1,
                                                        *(undefined8 *)(lVar11 + 0x28));
                                  }
                                  *plVar1 = lVar11;
                                  thunk_FUN_01b4f09c(plVar1,lVar11);
                                  if (*plVar1 != 0) {
                                    FUN_0392316c(*plVar1,*(undefined8 *)PTR_DAT_03d832f0,0);
                                    if (*plVar1 != 0) {
                                      lVar11 = FUN_0391fab4(*plVar1,0);
                                      if (*(char *)(param_1 + 0x10) == '\0') {
                                        if (param_2 == 0) goto LAB_03208290;
                                        uVar8 = FUN_0391fab4(param_2,0);
                                      }
                                      else {
                                        if (*(long *)(param_1 + 0x18) == 0) goto LAB_03208290;
                                        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
                                      }
                                      if (lVar11 != 0) {
                                        FUN_039294c8(lVar11,uVar8,0);
                                        if (*plVar1 != 0) {
                                          uVar8 = FUN_01ed712c(*plVar1,*(undefined8 *)
                                                                        PTR_DAT_03d832c8);
                                          lVar11 = *(long *)puVar2;
                                          if (*(int *)(lVar11 + 0xe0) == 0) {
                                            thunk_FUN_01ac7298(lVar11);
                                          }
                                          uVar9 = FUN_03923030(uVar8,0);
                                          puVar2 = 
                                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                          ;
                                          if ((uVar9 & 1) != 0) {
                                            if (*plVar1 == 0) goto LAB_03208290;
                                            uVar8 = FUN_01ed712c(*plVar1,*(undefined8 *)
                                                                          PTR_DAT_03d832c8);
                                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                              thunk_FUN_01ac7298(*(long *)puVar2);
                                            }
                                            FUN_03923a90(uVar8,0);
                                          }
                                          puVar2 = 
                                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                          ;
                                          if (*plVar1 != 0) {
                                            uVar8 = FUN_01ed712c(*plVar1,*(undefined8 *)
                                                                          PTR_DAT_03d832d0);
                                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                              thunk_FUN_01ac7298(*(long *)puVar2);
                                            }
                                            uVar9 = FUN_03923030(uVar8,0);
                                            if ((uVar9 & 1) != 0) {
                                              if (*plVar1 == 0) goto LAB_03208290;
                                              uVar8 = FUN_01ed712c(*plVar1,*(undefined8 *)
                                                                            PTR_DAT_03d832d0);
                                              if (*(int *)(*(long *)
                                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                                  + 0xe0) == 0) {
                                                thunk_FUN_01ac7298(*(long *)
                                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                                  );
                                              }
                                              FUN_03923a90(uVar8,0);
                                            }
                                            if (*plVar1 != 0) {
                                              lVar11 = FUN_01ed712c(*plVar1,*(undefined8 *)
                                                                                                                                                          
                                                  Field_<PrivateImplementationDetails>_E7A6520935E622D270A66BB158A7049033032A904B991BB281E52C703BF7985B
                                                  );
                                              *plVar17 = lVar11;
                                              thunk_FUN_01b4f09c(plVar17,lVar11);
                                              if (*plVar17 != 0) {
                                                FUN_0391c798(*plVar17,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3Field_<>c_<DescribeFields>b__0_3__
                                                  ,0);
                                                if (*plVar17 != 0) {
                                                  FUN_038f1830(*plVar17,0,0);
                                                  if (*plVar18 != 0) {
                                                    lVar11 = *plVar17;
                                                    fVar19 = (float)FUN_038f0a08(*plVar18,0);
                                                    if (lVar11 != 0) {
                                                      FUN_038f0a44(fVar19 + 1.0,lVar11,0);
                                                      if (*plVar17 != 0) {
                                                        FUN_038f0e08(0x3f000000,0,0x3f000000,
                                                                     0x3f800000,*plVar17,0);
                                                        if (*plVar17 != 0) {
                                                          FUN_038f0d44(*plVar17,2,0);
                                                          lVar11 = *param_4;
                                                          lVar12 = *plVar17;
                                                          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e)
                                                          ;
                                                          if (uVar9 != 0) {
                                                            piVar14 = (int *)(*(long *)(lVar11 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar14 + -2) == *(long *)puVar3)
                                                    {
                                                      puVar13 = (undefined8 *)
                                                                (lVar11 + (long)(*piVar14 + 0xc) *
                                                                          0x10 + 0x138);
                                                      goto LAB_032080cc;
                                                    }
                                                    uVar9 = uVar9 - 1;
                                                    piVar14 = piVar14 + 4;
                                                  } while (uVar9 != 0);
                                                  }
                                                  puVar13 = (undefined8 *)
                                                            FUN_01ae9f78(param_4,*(long *)puVar3,0xc
                                                                        );
LAB_032080cc:
                                                  (*(code *)*puVar13)(param_4,puVar13[1]);
                                                  if (lVar12 != 0) {
                                                    FUN_038f0c70(lVar12,0);
                                                    lVar11 = *plVar17;
                                                    if (lVar11 != 0) {
                                                      uVar4 = FUN_038f0b18(lVar11,0);
                                                      lVar12 = *param_4;
                                                      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                                                      if (uVar9 != 0) {
                                                        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar14 + -2) ==
                                                              *(long *)puVar3) {
                                                            puVar13 = (undefined8 *)
                                                                      (lVar12 + (long)(*piVar14 + 2)
                                                                                * 0x10 + 0x138);
                                                            goto LAB_03208150;
                                                          }
                                                          uVar9 = uVar9 - 1;
                                                          piVar14 = piVar14 + 4;
                                                        } while (uVar9 != 0);
                                                      }
                                                      puVar13 = (undefined8 *)
                                                                FUN_01ae9f78(param_4,*(long *)puVar3
                                                                             ,2);
LAB_03208150:
                                                      uVar5 = (*(code *)*puVar13)(param_4,puVar13[1]
                                                                                 );
                                                      uVar6 = FUN_03920150(uVar5,0);
                                                      lVar12 = *param_4;
                                                      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                                                      if (uVar9 != 0) {
                                                        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar14 + -2) ==
                                                              *(long *)puVar3) {
                                                            puVar13 = (undefined8 *)
                                                                      (lVar12 + (long)(*piVar14 + 4)
                                                                                * 0x10 + 0x138);
                                                            goto LAB_032081bc;
                                                          }
                                                          uVar9 = uVar9 - 1;
                                                          piVar14 = piVar14 + 4;
                                                        } while (uVar9 != 0);
                                                      }
                                                      puVar13 = (undefined8 *)
                                                                FUN_01ae9f78(param_4,*(long *)puVar3
                                                                             ,4);
LAB_032081bc:
                                                      uVar5 = (*(code *)*puVar13)(param_4,puVar13[1]
                                                                                 );
                                                      uVar7 = FUN_03920150(uVar5,0);
                                                      FUN_038f0b54(lVar11,uVar7 | uVar4 & (uVar6 ^ 
                                                  0xffffffff),0);
                                                  lVar11 = *(long *)(param_1 + 0x50);
                                                  if (*(char *)(param_1 + 0x71) == '\0') {
                                                    lVar12 = *(long *)(param_1 + 0x98);
                                                    if (lVar12 != 0) {
                                                      if (*(int *)(lVar12 + 0x18) == 0)
                                                      goto LAB_03208294;
                                                      if (lVar11 != 0) {
                                                        FUN_038f0ff0(lVar11,*(undefined8 *)
                                                                             (lVar12 + 0x20),0);
                                                        if (*plVar17 != 0) {
                                                          FUN_038f0e08(0,0,0x3f800000,0x3f800000,
                                                                       *plVar17,0);
                                                          goto LAB_03208258;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    lVar12 = *(long *)(param_1 + 0x88);
                                                    if (lVar12 != 0) {
                                                      if (*(int *)(lVar12 + 0x18) == 0) {
LAB_03208294:
                    /* WARNING: Subroutine does not return */
                                                        FUN_01b48180();
                                                      }
                                                      if (lVar11 != 0) {
                                                        FUN_038f0ff0(lVar11,*(undefined8 *)
                                                                             (lVar12 + 0x20),0);
LAB_03208258:
                                                        uVar8 = FUN_0391c2b8(param_3,0);
                                                        *puVar15 = uVar8;
                                                        thunk_FUN_01b4f09c(puVar15,uVar8);
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
LAB_03208290:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


