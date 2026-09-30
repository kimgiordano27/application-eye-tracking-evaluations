/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesCore.Android.NativeRequestNotificationPermissionsListener.OnFailureDelegate$$EndInvoke
ENTRY_POINT: 03eba5d0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnFailureDelegate__EndInvoke
               (code *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 uVar12;
  undefined4 uVar13;
  int iStack000000000000000c;
  
  (*param_1)();
  if (unaff_x19[0xc] == 0) {
LAB_03eba618:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  FUN_03f14d08(unaff_x19[0xc],1,0);
  lVar5 = FUN_03eb8edc();
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x440) == 0)) ||
     (lVar5 = *(long *)(*(long *)(lVar5 + 0x440) + 0x418), lVar5 == 0)) goto LAB_03eba618;
  FUN_03f1bbb8(lVar5,unaff_x19[0xc],0);
  (**(code **)(*unaff_x19 + 0x1d8))();
  uVar8 = *(undefined8 *)unaff_x20;
  uVar7 = *(undefined8 *)(unaff_x20 + 6);
  uVar6 = *(undefined8 *)(unaff_x20 + 4);
  unaff_x21[1] = *(undefined8 *)(unaff_x20 + 2);
  *unaff_x21 = uVar8;
  unaff_x21[3] = uVar7;
  unaff_x21[2] = uVar6;
  iStack000000000000000c = unaff_x20[6];
  if (iStack000000000000000c == 2) {
    uVar6 = FUN_03eb8edc();
    lVar5 = FUN_03eb8edc();
    if ((lVar5 == 0) || (plVar3 = (long *)FUN_03e24444(lVar5,0), plVar3 == (long *)0x0))
    goto LAB_03eba618;
    lVar5 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04237768) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03eba478;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_04237768,1);
LAB_03eba478:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar5 = FUN_03ebb214(uVar6,iVar2 + -1);
    if (lVar5 == 0) goto LAB_03eba4a8;
  }
  else {
    if (iStack000000000000000c != 1) {
      if (iStack000000000000000c != 0) {
        uVar6 = thunk_FUN_01c273e8(StringLiteral_11948);
        uVar6 = thunk_FUN_01c49334(uVar6,&stack0x0000000c);
        thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
        uVar7 = thunk_FUN_01c496e0();
        uVar8 = thunk_FUN_01c273e8(StringLiteral_11949);
        uVar9 = thunk_FUN_01c273e8(StringLiteral_11950);
        FUN_03244804(uVar7,uVar8,uVar6,uVar9,0);
        uVar6 = thunk_FUN_01c273e8(StringLiteral_11951);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar7,uVar6);
      }
      plVar3 = *(long **)(unaff_x20 + 4);
      if (plVar3 != (long *)0x0) {
        lVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
        puVar1 = System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo;
        if (*(int *)(*(long *)
                      System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo
                            );
        }
        if (lVar5 != 0) {
          FUN_03f17740(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50),0);
          return;
        }
      }
      goto LAB_03eba618;
    }
    if (*unaff_x20 == 0) {
LAB_03eba4a8:
      uVar6 = 0;
      uVar12 = 0xbf800000;
      uVar13 = 0xbf800000;
      goto LAB_03eba4b4;
    }
    uVar6 = FUN_03eb8edc();
    FUN_03ebb214(uVar6,*unaff_x20 + -1);
    uVar6 = FUN_03eb8edc();
    FUN_03ebb214(uVar6,*unaff_x20);
  }
  uVar6 = FUN_03ebc1d0();
  uVar12 = (undefined4)unaff_x19[0xd];
  uVar13 = *(undefined4 *)((long)unaff_x19 + 0x6c);
LAB_03eba4b4:
  FUN_03ebabb4(uVar6,uVar12,uVar13);
  return;
}


