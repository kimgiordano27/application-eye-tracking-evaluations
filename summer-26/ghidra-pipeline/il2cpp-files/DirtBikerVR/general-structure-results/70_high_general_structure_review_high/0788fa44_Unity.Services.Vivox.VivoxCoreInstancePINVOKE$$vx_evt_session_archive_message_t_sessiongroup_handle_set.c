/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_sessiongroup_handle_set
ENTRY_POINT: 0788fa44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_sessiongroup_handle_set
               (long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
                    /* try { // try from 0788fa4c to 0798fa4f has its CatchHandler @ 0788fd98 */
    thunk_FUN_03ae8be4();
                    /* try { // try from 0788fa50 to 0798fa5b has its CatchHandler @ 0788fe58 */
    param_1 = *unaff_x26;
  }
  puVar5 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar5[1] == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
                    /* try { // try from 0788fa70 to 0798fa7f has its CatchHandler @ 0788fe54 */
      puVar5 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar11 = *puVar5;
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_List<WeakReference<FontAsset>>_TypeInfo);
                    /* try { // try from 0788fa90 to 0798fab7 has its CatchHandler @ 0788fe90 */
    FUN_049639e4(uVar4,uVar11,
                 *(undefined8 *)System_Collections_Generic_List<AchievementProgress>_TypeInfo,0);
    puVar5 = (undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 8);
    *puVar5 = uVar4;
    thunk_FUN_03afed3c(puVar5,uVar4);
  }
                    /* try { // try from 0788fab8 to 0798fabf has its CatchHandler @ 0788feac */
  uVar4 = FUN_044d3220();
  uVar4 = FUN_044e130c(uVar4,*(undefined8 *)PTR_DAT_08498170);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar10 = *(long **)(unaff_x20 + 0x10);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
        goto LAB_0788fb90;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_03ac43c4(plVar10,*(long *)
                                 System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_TypeInfo
                        ,6);
LAB_0788fb90:
  plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  uVar11 = *(undefined8 *)System_Collections_Generic_List<AdvancedUpscalers>_TypeInfo;
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)System_Collections_Generic_List<WeakReference<TMP_FontAsset>>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0788fc04;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_03ac43c4(plVar10,*(long *)
                                 System_Collections_Generic_List<WeakReference<TMP_FontAsset>>_TypeInfo
                        ,0);
LAB_0788fc04:
  lVar6 = (*(code *)*puVar5)(plVar10,uVar11,uVar4,puVar5[1]);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000028 =
       FUN_058b71ec(lVar6,*(undefined8 *)
                           System_Collections_Generic_List<AchievementDefinition>_TypeInfo);
  uVar7 = FUN_0587c6c4(&stack0x00000028,
                       *(undefined8 *)System_Collections_Generic_List<object[]>_TypeInfo);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff8890(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    plVar10 = (long *)FUN_0587c704(&stack0x00000028,
                                   *(undefined8 *)
                                    System_Collections_Generic_List<MetricKind[]>_TypeInfo);
    uVar7 = FUN_044b1b04(plVar10,*(undefined8 *)
                                  System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                        );
    if ((uVar7 & 1) != 0) {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0788fd18;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar10,*(long *)
                                     System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo,
                            0);
LAB_0788fd18:
      uVar4 = (*(code *)*puVar5)(plVar10,0,puVar5[1]);
      *(undefined8 *)(unaff_x19 + 0xc) = uVar4;
      thunk_FUN_03afed3c();
    }
    puVar3 = System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_TypeInfo;
    if (unaff_w25 == 2) {
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x12);
      *(undefined8 *)(unaff_x19 + 0x12) = 0;
      *unaff_x19 = 0xffffffff;
    }
    else {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar10 = *(long **)(unaff_x20 + 0x10);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_TypeInfo
             ) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0788fdb8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar10,*(long *)
                                     System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_TypeInfo
                            ,0);
LAB_0788fdb8:
      plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
      uVar1 = unaff_x19[10];
      uVar4 = *(undefined8 *)(unaff_x19 + 0xc);
      lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo
                                );
      FUN_0679343c(lVar6,0);
      *(undefined8 *)(lVar6 + 0x18) = uVar4;
      *(undefined4 *)(lVar6 + 0x10) = uVar1;
      thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x18),uVar4);
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_List<ValueTuple<int,_RichTextTagParser_TagType,_string>>_TypeInfo
                                );
      FUN_078906a4(uVar4,lVar6);
      plVar9 = *(long **)(unaff_x20 + 0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto FUN_0788fe74;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)puVar3,2);
FUN_0788fe74:
      uVar11 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)System_Collections_Generic_List<BaseUnits[]>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0788fedc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar10,*(long *)System_Collections_Generic_List<BaseUnits[]>_TypeInfo,0
                           );
LAB_0788fedc:
      lVar6 = (*(code *)*puVar5)(plVar10,uVar4,uVar11,puVar5[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000020 =
           FUN_058b71ec(lVar6,*(undefined8 *)System_Collections_Generic_List<AccountId>_TypeInfo);
      uVar7 = FUN_0587c6c4(&stack0x00000020,
                           *(undefined8 *)System_Collections_Generic_List<string[]>_TypeInfo);
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000020;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03ff8890(unaff_x19 + 2,&stack0x00000020);
        return;
      }
    }
    lVar6 = FUN_0587c704(&stack0x00000020,
                         *(undefined8 *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
    puVar3 = 
    System_Collections_Generic_List<ValueTuple<Camera,_int,_HDCamera_HistoryChannel>>_TypeInfo;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar4 = *(undefined8 *)(lVar6 + 0x10);
    iVar2 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar2 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar3);
  }
  return;
}


