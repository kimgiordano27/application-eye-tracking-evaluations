/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesCore.Android.NativeRegisterRemoteNotificationsListener.OnFailureDelegate$$BeginInvoke
ENTRY_POINT: 03eba334
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRegisterRemoteNotificationsListener_OnFailureDelegate__BeginInvoke
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined4 uVar13;
  undefined4 uVar14;
  int iStack000000000000000c;
  
  FUN_03f17740(param_2,*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x48),0);
  if (unaff_x19[0xb] == 0) {
LAB_03eba618:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar4 = (long *)FUN_03f0d9bc(unaff_x19[0xb],0);
  puVar2 = StringLiteral_11947;
  uVar5 = FUN_030d67d4(1,*(undefined8 *)StringLiteral_11947);
  puVar1 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
  if (plVar4 == (long *)0x0) goto LAB_03eba618;
  lVar10 = *plVar4;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x34) * 0x10 + 0x138);
        goto LAB_03eba4e4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01c72498(plVar4,*(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo,0x34);
LAB_03eba4e4:
  (*(code *)*puVar6)(plVar4,uVar5,puVar6[1]);
  if (unaff_x19[0xb] == 0) goto LAB_03eba618;
  FUN_03f14d08(unaff_x19[0xb],1,0);
  if (unaff_x19[10] == 0) goto LAB_03eba618;
  FUN_03f1bbb8(unaff_x19[10],unaff_x19[0xb],0);
  lVar10 = thunk_FUN_01c496e0(*unaff_x25);
  FUN_03f15048(lVar10,0);
  unaff_x19[0xc] = lVar10;
  if (lVar10 == 0) goto LAB_03eba618;
  FUN_03f17740(lVar10,*(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x48),0);
  if (unaff_x19[0xc] == 0) goto LAB_03eba618;
  plVar4 = (long *)FUN_03f0d9bc(unaff_x19[0xc],0);
  uVar5 = FUN_030d67d4(1,*(undefined8 *)puVar2);
  if (plVar4 == (long *)0x0) goto LAB_03eba618;
  lVar10 = *plVar4;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x34) * 0x10 + 0x138);
        goto LAB_03eba5c8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_01c72498(plVar4,*(long *)puVar1,0x34);
LAB_03eba5c8:
  (*(code *)*puVar6)(plVar4,uVar5,puVar6[1]);
  if (unaff_x19[0xc] == 0) goto LAB_03eba618;
  FUN_03f14d08(unaff_x19[0xc],1,0);
  lVar10 = FUN_03eb8edc();
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x440) == 0)) ||
     (lVar10 = *(long *)(*(long *)(lVar10 + 0x440) + 0x418), lVar10 == 0)) goto LAB_03eba618;
  FUN_03f1bbb8(lVar10,unaff_x19[0xc],0);
  (**(code **)(*unaff_x19 + 0x1d8))();
  uVar8 = *(undefined8 *)unaff_x20;
  uVar7 = *(undefined8 *)(unaff_x20 + 6);
  uVar5 = *(undefined8 *)(unaff_x20 + 4);
  unaff_x21[1] = *(undefined8 *)(unaff_x20 + 2);
  *unaff_x21 = uVar8;
  unaff_x21[3] = uVar7;
  unaff_x21[2] = uVar5;
  iStack000000000000000c = unaff_x20[6];
  if (iStack000000000000000c == 2) {
    uVar5 = FUN_03eb8edc();
    lVar10 = FUN_03eb8edc();
    if ((lVar10 == 0) || (plVar4 = (long *)FUN_03e24444(lVar10,0), plVar4 == (long *)0x0))
    goto LAB_03eba618;
    lVar10 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04237768) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03eba478;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04237768,1);
LAB_03eba478:
    iVar3 = (*(code *)*puVar6)(plVar4,puVar6[1]);
    lVar10 = FUN_03ebb214(uVar5,iVar3 + -1);
    if (lVar10 == 0) goto LAB_03eba4a8;
  }
  else {
    if (iStack000000000000000c != 1) {
      if (iStack000000000000000c != 0) {
        uVar5 = thunk_FUN_01c273e8(StringLiteral_11948);
        uVar5 = thunk_FUN_01c49334(uVar5,&stack0x0000000c);
        thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
        uVar7 = thunk_FUN_01c496e0();
        uVar8 = thunk_FUN_01c273e8(StringLiteral_11949);
        uVar9 = thunk_FUN_01c273e8(StringLiteral_11950);
        FUN_03244804(uVar7,uVar8,uVar5,uVar9,0);
        uVar5 = thunk_FUN_01c273e8(StringLiteral_11951);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar7,uVar5);
      }
      plVar4 = *(long **)(unaff_x20 + 4);
      if (plVar4 != (long *)0x0) {
        lVar10 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
        puVar1 = System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo;
        if (*(int *)(*(long *)
                      System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo
                            );
        }
        if (lVar10 != 0) {
          FUN_03f17740(lVar10,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50),0);
          return;
        }
      }
      goto LAB_03eba618;
    }
    if (*unaff_x20 == 0) {
LAB_03eba4a8:
      uVar5 = 0;
      uVar13 = 0xbf800000;
      uVar14 = 0xbf800000;
      goto LAB_03eba4b4;
    }
    uVar5 = FUN_03eb8edc();
    FUN_03ebb214(uVar5,*unaff_x20 + -1);
    uVar5 = FUN_03eb8edc();
    FUN_03ebb214(uVar5,*unaff_x20);
  }
  uVar5 = FUN_03ebc1d0();
  uVar13 = (undefined4)unaff_x19[0xd];
  uVar14 = *(undefined4 *)((long)unaff_x19 + 0x6c);
LAB_03eba4b4:
  FUN_03ebabb4(uVar5,uVar13,uVar14);
  return;
}


