/*
FUNCTION_NAME: FUN_061440d0
ENTRY_POINT: 061440d0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_12
*/


long FUN_061440d0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                 uint param_6,long *param_7,long param_8,long param_9)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  undefined4 local_64;
  
  puVar2 = PTR_DAT_07285080;
  if ((DAT_076dda50 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0728f668);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionEndEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UIHoverEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Type,_EventCategory>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Func<FingerFeature,_Nullable<float>>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07292b30);
    thunk_FUN_032e1da0(PTR_DAT_07285080);
    DAT_076dda50 = 1;
  }
  uVar6 = thunk_FUN_057aa644(param_4,*(undefined8 *)puVar2,0);
  puVar2 = System_Func<FingerFeature,_Nullable<float>>_TypeInfo;
  if ((uVar6 & 1) != 0) {
    thunk_FUN_032e1da0(
                      System_Collections_Generic_List<ValueTuple<VolumeParameter,_VolumeParameter>>_TypeInfo
                      );
    uVar10 = thunk_FUN_032a56a0();
    uVar11 = thunk_FUN_032e1da0(System_Collections_Generic_List<HandJointId[]>_TypeInfo);
    FUN_06142604(uVar10,uVar11,0,0);
    uVar11 = thunk_FUN_032e1da0(System_Collections_Generic_List<ARTextureInfo>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar10,uVar11);
  }
  local_64 = 0xffffffff;
  if (param_9 == 0) goto LAB_06144798;
  iVar3 = FUN_061a330c(param_9,0);
  if (iVar3 < 1) {
    lVar15 = 0;
    lVar7 = param_8;
  }
  else {
    lVar7 = FUN_061a342c(param_9,0);
    lVar15 = param_8;
  }
  plVar8 = (long *)thunk_FUN_057aa644(param_4,*(undefined8 *)puVar2,0);
  if (((ulong)plVar8 & 1) == 0) {
    if (param_4 == 0) goto LAB_06144798;
    iVar3 = *(int *)(param_4 + 0x10);
    plVar13 = param_7;
    if (iVar3 != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_06144798;
      uVar6 = FUN_061a8c54(*(long *)(param_1 + 0x18),param_4,0);
      if ((uVar6 & 1) == 0) {
        plVar13 = (long *)thunk_FUN_032a56a0(*(undefined8 *)
                                              System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                                            );
        FUN_0619a190(plVar13,0);
        if (plVar13 == (long *)0x0) goto LAB_06144798;
        *(undefined8 *)((long)plVar13 + 0x34) = DAT_0139e570;
        if (*(int *)(param_4 + 0x10) != 0) {
          plVar13[9] = param_4;
          thunk_FUN_0333a630(plVar13 + 9,param_4);
        }
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (plVar8 = (long *)FUN_061a7c04(*(long *)(param_1 + 0x18),plVar13,0), param_3 == 0))
        goto LAB_06144798;
        if ((*(int *)(param_3 + 0x10) != 0) &&
           (plVar8 = (long *)FUN_057a933c(param_3,*(undefined8 *)PTR_DAT_07292b30,5,0),
           (int)plVar8 != 0)) {
          plVar8 = *(long **)(param_1 + 0x38);
          if (plVar8 == (long *)0x0) goto LAB_06144798;
          plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))
                                     (plVar8,param_3,param_4,*(undefined8 *)(*plVar8 + 0x200));
        }
      }
      else {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_06144798;
        plVar8 = (long *)FUN_061aa9fc(*(long *)(param_1 + 0x18),param_4,0);
        plVar13 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          lVar9 = *plVar8;
          bVar1 = *(byte *)(*(long *)PTR_DAT_0728f668 + 0x130);
          plVar13 = plVar8;
          if ((((bVar1 <= *(byte *)(lVar9 + 0x130)) &&
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_0728f668)) &&
              (plVar13 = (long *)(**(code **)(lVar9 + 0x298))(plVar8,*(undefined8 *)(lVar9 + 0x2a0))
              , 0 < (int)plVar13)) &&
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x2e8))
                                         (plVar8,0,*(undefined8 *)(*plVar8 + 0x2f0)),
             plVar13 = plVar8, plVar8 != (long *)0x0)) {
            bVar1 = *(byte *)(*(long *)
                               System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                             + 0x130);
            if (bVar1 <= *(byte *)(*plVar8 + 0x130)) {
              if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)
                   System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                 ) {
                plVar13 = (long *)0x0;
              }
              goto LAB_061443e4;
            }
          }
          plVar8 = plVar13;
          plVar13 = (long *)0x0;
        }
      }
LAB_061443e4:
      if (*(int *)(param_4 + 0x10) != 0) {
        lVar7 = FUN_061448ec(plVar8,lVar7,param_2,param_4);
        if ((lVar15 != 0) && (lVar7 == 0)) {
          lVar7 = FUN_061448ec(0,lVar15,param_2,param_4);
        }
        lVar9 = lVar7;
        if (lVar7 == 0) {
          lVar9 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<TransitionEndEvent>_TypeInfo);
          FUN_0619ce78(lVar9,0);
          uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                       System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo
                                     );
          FUN_0624b7a8(uVar10,param_2,param_4,0);
          if (lVar9 == 0) goto LAB_06144798;
          FUN_0619cbc4(lVar9,uVar10,0);
          if (((param_6 & 1) == 0) || (*(int *)(param_1 + 0x48) != 0)) {
            uVar12 = 1;
          }
          else {
            uVar12 = 3;
          }
          *(undefined4 *)(lVar9 + 0x6c) = uVar12;
          if (param_8 == 0) goto LAB_06144798;
          lVar7 = FUN_0619bae4(param_8,lVar9,0);
        }
        if (plVar13 == (long *)0x0) goto LAB_06144798;
        lVar7 = FUN_06144cb4(lVar7,plVar13[0xc],param_2);
        if (lVar7 == 0) {
          lVar7 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<TransitionEndEvent>_TypeInfo);
          FUN_0619ce78(lVar7,0);
          if (lVar7 == 0) goto LAB_06144798;
          *(undefined8 *)(lVar7 + 0x60) = param_2;
          thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x60),param_2);
          uVar10 = FUN_06145038(param_1,param_5,&local_64);
          FUN_0619cc6c(lVar7,uVar10,0);
          *(undefined4 *)(lVar7 + 0x10) = local_64;
          if (plVar13[0xc] == 0) goto LAB_06144798;
          FUN_0619bae4(plVar13[0xc],lVar7,0);
        }
        else {
          plVar8 = (long *)(lVar7 + 0x28);
          if (*plVar8 == 0) {
            local_64 = *(undefined4 *)(lVar7 + 0x10);
          }
          else {
            uVar10 = *(undefined8 *)(lVar7 + 0x78);
            if (*(int *)(*(long *)
                          System_Collections_Generic_Dictionary<Type,_EventCategory>_TypeInfo + 0xe0
                        ) == 0) {
              thunk_FUN_032cd7c0();
            }
            local_64 = FUN_06146184(uVar10);
            *plVar8 = 0;
            thunk_FUN_0333a630(plVar8,0);
          }
          uVar10 = FUN_06145038(param_1,param_5,&local_64);
          FUN_0619cc6c(lVar7,uVar10,0);
          *(undefined4 *)(lVar7 + 0x10) = local_64;
        }
        goto LAB_061446e8;
      }
    }
    lVar9 = FUN_06144cb4(plVar8,lVar7,param_2);
    if ((lVar15 != 0) && (lVar9 == 0)) {
      lVar9 = FUN_06144cb4(0,lVar15,param_2);
    }
    if (lVar9 == 0) {
      lVar9 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<TransitionEndEvent>_TypeInfo);
      FUN_0619ce78(lVar9,0);
      if (lVar9 == 0) goto LAB_06144798;
      *(undefined8 *)(lVar9 + 0x60) = param_2;
      thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x60),param_2);
      uVar10 = FUN_06145038(param_1,param_5,&local_64);
      FUN_0619cc6c(lVar9,uVar10,0);
      *(undefined4 *)(lVar9 + 0x10) = local_64;
      if (((param_6 & 1) == 0) || (*(int *)(param_1 + 0x48) != 0)) {
        uVar12 = 1;
      }
      else {
        uVar12 = 3;
      }
      *(undefined4 *)(lVar9 + 0x6c) = uVar12;
      if ((param_8 == 0) || (FUN_0619bae4(param_8,lVar9,0), plVar13 == (long *)0x0))
      goto LAB_06144798;
      if (*(int *)((long)plVar13 + 0x34) != 2) {
        *(undefined4 *)(lVar9 + 0x68) = 2;
      }
    }
    else {
      plVar8 = (long *)(lVar9 + 0x28);
      if (*plVar8 == 0) {
        local_64 = *(undefined4 *)(lVar9 + 0x10);
      }
      else {
        uVar10 = *(undefined8 *)(lVar9 + 0x78);
        if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Type,_EventCategory>_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        local_64 = FUN_06146184(uVar10);
        *plVar8 = 0;
        thunk_FUN_0333a630(plVar8,0);
      }
      uVar10 = FUN_06145038(param_1,param_5,&local_64);
      FUN_0619cc6c(lVar9,uVar10,0);
      *(undefined4 *)(lVar9 + 0x10) = local_64;
    }
    if (iVar3 == 0) {
      return lVar9;
    }
  }
  else {
    lVar9 = FUN_061448ec(plVar8,lVar7,param_2,param_4);
    if ((lVar15 != 0) && (lVar9 == 0)) {
      lVar9 = FUN_061448ec(0,lVar15,param_2,param_4);
    }
    if (lVar9 == 0) {
      lVar9 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<TransitionEndEvent>_TypeInfo);
      FUN_0619ce78(lVar9,0);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo)
      ;
      FUN_0624b7a8(uVar10,param_2,param_4,0);
      if (lVar9 == 0) goto LAB_06144798;
      FUN_0619cbc4(lVar9,uVar10,0);
      if (((param_6 & 1) == 0) || (*(int *)(param_1 + 0x48) != 0)) {
        uVar12 = 1;
      }
      else {
        uVar12 = 3;
      }
      *(undefined4 *)(lVar9 + 0x6c) = uVar12;
      if (param_8 == 0) goto LAB_06144798;
      FUN_0619bae4(param_8,lVar9,0);
    }
    plVar13 = (long *)0x0;
  }
LAB_061446e8:
  if (param_7 != (long *)0x0) {
    uVar6 = FUN_057aa92c(param_4,param_7[9],0);
    puVar2 = System_Func<UIHoverEventArgs>_TypeInfo;
    if ((uVar6 & 1) == 0) {
      return lVar9;
    }
    lVar7 = param_7[0xb];
    if (lVar7 != 0) {
      iVar3 = 0;
      uVar14 = 1;
      do {
        iVar4 = FUN_058f278c(lVar7,0);
        if (iVar4 <= iVar3) {
          if (uVar14 == 0) {
            return lVar9;
          }
          lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
          FUN_061a1fe8(lVar7,0);
          if (lVar7 != 0) {
            *(ulong *)(lVar7 + 0x48) = (ulong)plVar13;
            thunk_FUN_0333a630((ulong *)(lVar7 + 0x48),plVar13);
            if (param_4 != 0) {
              lVar15 = 0;
              if (*(int *)(param_4 + 0x10) != 0) {
                lVar15 = param_4;
              }
              *(long *)(lVar7 + 0x68) = lVar15;
              thunk_FUN_0333a630();
              if (param_7[0xb] != 0) {
                FUN_0619bae4(param_7[0xb],lVar7,0);
                return lVar9;
              }
            }
          }
          break;
        }
        plVar8 = (long *)param_7[0xb];
        if (plVar8 == (long *)0x0) break;
        plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                   (plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar8 != (long *)0x0) {
          lVar7 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar7 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == lVar7)) {
            uVar5 = thunk_FUN_057aa644(plVar8[0xd],param_4,0);
            uVar14 = uVar14 & (uVar5 ^ 1);
          }
        }
        lVar7 = param_7[0xb];
        iVar3 = iVar3 + 1;
      } while (lVar7 != 0);
    }
  }
LAB_06144798:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


