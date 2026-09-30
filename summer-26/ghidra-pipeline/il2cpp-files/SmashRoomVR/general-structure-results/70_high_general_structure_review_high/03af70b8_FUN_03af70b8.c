/*
FUNCTION_NAME: FUN_03af70b8
ENTRY_POINT: 03af70b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


long FUN_03af70b8(long param_1,long *param_2,long param_3,long *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_70;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_03daf698;
  if ((DAT_03ffd743 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2297);
    thunk_FUN_01ad9084(PTR_DAT_03db5a90);
    thunk_FUN_01ad9084(StringLiteral_3223);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db65c8);
    thunk_FUN_01ad9084(PTR_DAT_03db65b8);
    thunk_FUN_01ad9084(PTR_DAT_03db65d0);
    thunk_FUN_01ad9084(PTR_DAT_03db5aa0);
    thunk_FUN_01ad9084(PTR_DAT_03db65d8);
    thunk_FUN_01ad9084(StringLiteral_2296);
    thunk_FUN_01ad9084(PTR_DAT_03daf638);
    thunk_FUN_01ad9084(PTR_DAT_03daf5d0);
    thunk_FUN_01ad9084(PTR_DAT_03daf5e0);
    thunk_FUN_01ad9084(PTR_DAT_03db65e0);
    thunk_FUN_01ad9084(PTR_DAT_03daf610);
    thunk_FUN_01ad9084(PTR_DAT_03db5ac8);
    thunk_FUN_01ad9084(PTR_DAT_03db65e8);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03db65f0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
    thunk_FUN_01ad9084(PTR_DAT_03db5a60);
    thunk_FUN_01ad9084(PTR_DAT_03db44c0);
    thunk_FUN_01ad9084(PTR_DAT_03db65f8);
    thunk_FUN_01ad9084(PTR_DAT_03db6600);
    thunk_FUN_01ad9084(PTR_DAT_03db5b00);
    thunk_FUN_01ad9084(PTR_DAT_03daf698);
    thunk_FUN_01ad9084(PTR_DAT_03db6608);
    thunk_FUN_01ad9084(PTR_DAT_03db6610);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_41__);
    thunk_FUN_01ad9084(PTR_DAT_03db6618);
    thunk_FUN_01ad9084(PTR_DAT_03db6620);
    DAT_03ffd743 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  lStack_b8 = param_4[1];
  local_c0 = *param_4;
  lStack_a8 = param_4[3];
  local_b0 = param_4[2];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lStack_d8 = lStack_b8;
  local_e0 = local_c0;
  lStack_c8 = lStack_a8;
  lStack_d0 = local_b0;
  lVar6 = FUN_03af7b14(param_2,&local_e0);
  plVar13 = (long *)StringLiteral_3223;
  if (lVar6 == 0) {
    return 0;
  }
  if (param_2 == (long *)0x0) goto LAB_03af79f0;
  lVar12 = param_2[3];
  if (*(int *)(*(long *)StringLiteral_3223 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (param_4[1] == 0) goto LAB_03af79f0;
  if ((int)lVar12 == *(int *)(param_4[1] + 0x60)) {
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    puVar2 = PTR_DAT_03db44c0;
    plVar7 = (long *)*param_4;
    if (plVar7 != (long *)0x0) {
      lVar12 = *(long *)PTR_DAT_03db44c0;
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)
         ) {
        if (*(int *)(*plVar13 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*plVar13);
          plVar7 = (long *)*param_4;
          if (plVar7 == (long *)0x0) goto LAB_03af79f0;
          lVar12 = *(long *)puVar2;
        }
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) !=
            lVar12)) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c();
        }
        plVar7[0x7c] = lVar6;
        thunk_FUN_01b4f09c(plVar7 + 0x7c,lVar6);
        goto LAB_03af7370;
      }
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2e04(*(undefined8 *)PTR_DAT_03db6618,0);
  }
LAB_03af7370:
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if ((param_4[2] != 0) &&
     (uVar8 = FUN_03af80ec(param_1,(int)param_2[3],&local_68), (uVar8 & 1) != 0)) {
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (param_4[2] == 0) goto LAB_03af79f0;
    FUN_025bc5c4(param_4[2],local_68,lVar6,*(undefined8 *)PTR_DAT_03db65c8);
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((int)param_2[7] != -1) {
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_03922f24(uVar14,0,0);
    if ((uVar8 & 1) == 0) {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar12 = FUN_03adbc5c(*(long *)(param_1 + 0x28),0), lVar12 == 0)) goto LAB_03af79f0;
      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(param_2 + 7)) goto LAB_03af7a24;
      FUN_03ac7800(lVar6,*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(lVar12 + (long)(int)*(uint *)(param_2 + 7) * 8 + 0x20),0);
    }
    else {
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f336c(*(undefined8 *)PTR_DAT_03db6620,0);
    }
    if ((int)param_2[7] != -1) {
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_03922f24(uVar14,0,0);
      if ((uVar8 & 1) == 0) {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar12 = FUN_03adbc5c(*(long *)(param_1 + 0x28),0), lVar12 == 0)) goto LAB_03af79f0;
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(param_2 + 7)) {
LAB_03af7a24:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        FUN_03ac7800(lVar6,*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(lVar12 + (long)(int)*(uint *)(param_2 + 7) * 8 + 0x20),0);
      }
      else {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f336c(*(undefined8 *)PTR_DAT_03db6620,0);
      }
    }
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_03db5a60 + 0x130);
  if (*(byte *)(*param_2 + 0x130) < bVar1) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = param_2;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03db5a60) {
      plVar7 = (long *)0x0;
    }
  }
  if (param_3 != 0) {
    uVar8 = FUN_0255c4cc(param_3,(int)param_2[3],&local_70,*(undefined8 *)PTR_DAT_03db5aa0);
    lVar12 = local_70;
    if ((uVar8 & 1) != 0) {
      uVar14 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03db5a90);
      FUN_024c4724(uVar14,0,*(undefined8 *)PTR_DAT_03db5b00,0);
      if ((lVar12 == 0) ||
         (FUN_02b5b3cc(lVar12,uVar14,*(undefined8 *)PTR_DAT_03db5ac8), local_70 == 0))
      goto LAB_03af79f0;
      FUN_02b5a400(&local_c0,local_70,*(undefined8 *)PTR_DAT_03daf610);
      puVar3 = PTR_DAT_03db6600;
      puVar2 = PTR_DAT_03daf5d0;
      lStack_88 = lStack_b8;
      local_90 = local_c0;
      local_80 = local_b0;
LAB_03af75fc:
      uVar8 = FUN_02739b98(&local_90,*(undefined8 *)puVar2);
      if ((uVar8 & 1) != 0) {
        lVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
        UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextEdition_set_autoCorrection
                  (lVar12,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        plVar13 = (long *)(lVar12 + 0x10);
        *plVar13 = local_80;
        thunk_FUN_01b4f09c(plVar13);
        lStack_f8 = param_4[1];
        local_100 = *param_4;
        lStack_e8 = param_4[3];
        lStack_f0 = param_4[2];
        lVar9 = FUN_03af70b8(param_1,*plVar13,param_3,&local_100);
        if (lVar9 != 0) {
          if (plVar7 != (long *)0x0) {
            lVar15 = plVar7[0xf];
            if (lVar15 != 0) {
              uVar14 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03db65f0);
              FUN_02d82da8(uVar14,lVar12,*(undefined8 *)PTR_DAT_03db65f8,0);
              iVar4 = FUN_02c731a0(lVar15,uVar14,*(undefined8 *)PTR_DAT_03db65e0);
              plVar13 = (long *)StringLiteral_3223;
              if (iVar4 != -1) {
                if (plVar7[0xf] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar12 = FUN_02c725e4(plVar7[0xf],iVar4,*(undefined8 *)PTR_DAT_03db65e8);
                uVar5 = FUN_02ee6cf0(lVar12,0);
                if (*(int *)(*(long *)StringLiteral_2297 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_039398c4(uVar5 & 1,*(undefined8 *)PTR_DAT_03db6608,0);
                if (*(int *)(*plVar13 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                lVar15 = param_4[2];
                if (lVar15 != 0) {
                  if (*(int *)(*plVar13 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*plVar13);
                    lVar15 = param_4[2];
                    plVar13 = (long *)StringLiteral_3223;
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                  }
                  uVar8 = FUN_025bddd0(lVar15,lVar12,&local_98,*(undefined8 *)PTR_DAT_03db65d0);
                  if ((uVar8 & 1) != 0) {
                    if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                    FUN_03acaea8(local_98,lVar9,0);
                    goto LAB_03af75fc;
                  }
                }
                plVar10 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                               ,2);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                if ((lVar12 != 0) &&
                   (lVar15 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar10 + 0x40)),
                   lVar15 == 0)) {
                  uVar14 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01b48050(uVar14,0);
                }
                if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                plVar10[4] = lVar12;
                thunk_FUN_01b4f09c(plVar10 + 4,lVar12);
                if (*(int *)(*plVar13 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                lVar12 = param_4[2];
                uVar14 = *(undefined8 *)PTR_DAT_03db6610;
                if (lVar12 == 0) {
                  lVar12 = **(long **)(*(long *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__
                                      + 0xb8);
                }
                else {
                  if (*(int *)(*plVar13 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*plVar13);
                    lVar12 = param_4[2];
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                  }
                  uVar11 = FUN_025bc384(lVar12,*(undefined8 *)PTR_DAT_03db65d8);
                  uVar11 = FUN_01ec4698(uVar11,*(undefined8 *)StringLiteral_2296);
                  lVar12 = FUN_02ee7544(*(undefined8 *)
                                         Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_41__
                                        ,uVar11,0);
                }
                if ((lVar12 != 0) &&
                   (lVar15 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar10 + 0x40)),
                   lVar15 == 0)) {
                  uVar14 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01b48050(uVar14,0);
                }
                if (*(uint *)(plVar10 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                plVar10[5] = lVar12;
                thunk_FUN_01b4f09c(plVar10 + 5,lVar12);
                if (*(int *)(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_038f3024(uVar14,plVar10,0);
                FUN_03acaea8(lVar6,lVar9,0);
                goto LAB_03af75fc;
              }
            }
            FUN_03acaea8(lVar6,lVar9,0);
            goto LAB_03af75fc;
          }
          FUN_03acaea8(lVar6,lVar9,0);
        }
        goto LAB_03af75fc;
      }
      FUN_02739b94(&local_90,*(undefined8 *)PTR_DAT_03daf638);
      plVar13 = (long *)StringLiteral_3223;
    }
    if (plVar7 != (long *)0x0) {
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar12 = param_4[2];
      if (lVar12 != 0) {
        if (*(int *)(*plVar13 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*plVar13);
          lVar12 = param_4[2];
          if (lVar12 == 0) goto LAB_03af79f0;
        }
        FUN_025bc74c(lVar12,*(undefined8 *)PTR_DAT_03db65b8);
      }
    }
    return lVar6;
  }
LAB_03af79f0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


