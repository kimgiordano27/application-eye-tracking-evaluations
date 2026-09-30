/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_session_handle_get
ENTRY_POINT: 0788fc08
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_session_handle_get
               (code *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar11;
  long *unaff_x24;
  int unaff_w25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar4 = (*param_1)();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000028 =
       FUN_058b71ec(lVar4,*(undefined8 *)
                           System_Collections_Generic_List<AchievementDefinition>_TypeInfo);
                    /* try { // try from 0788fc2c to 0798fc2f has its CatchHandler @ 0788fd7c */
                    /* try { // try from 0788fc34 to 0798fc43 has its CatchHandler @ 0788fde0 */
  uVar5 = FUN_0587c6c4(&stack0x00000028,
                       *(undefined8 *)System_Collections_Generic_List<object[]>_TypeInfo);
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 0788fcc4 to 0798fcd7 has its CatchHandler @ 0788fdb4 */
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000028;
                    /* try { // try from 0788fcd8 to 0798fd23 has its CatchHandler @ 0788f32c */
    thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff8890(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    plVar6 = (long *)FUN_0587c704(&stack0x00000028,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<MetricKind[]>_TypeInfo);
    uVar5 = FUN_044b1b04(plVar6,*(undefined8 *)
                                 System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                        );
    if ((uVar5 & 1) != 0) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0788fd18;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_03ac43c4(plVar6,*(long *)
                                    System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo,0
                           );
LAB_0788fd18:
      uVar8 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
      *(undefined8 *)(unaff_x19 + 0xc) = uVar8;
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
      plVar6 = *(long **)(unaff_x20 + 0x10);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_TypeInfo
             ) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0788fdb8;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_03ac43c4(plVar6,*(long *)
                                    System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_TypeInfo
                            ,0);
LAB_0788fdb8:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      uVar1 = unaff_x19[10];
      uVar8 = *(undefined8 *)(unaff_x19 + 0xc);
      lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo
                                );
      FUN_0679343c(lVar4,0);
      *(undefined8 *)(lVar4 + 0x18) = uVar8;
      *(undefined4 *)(lVar4 + 0x10) = uVar1;
      thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x18),uVar8);
      uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_List<ValueTuple<int,_RichTextTagParser_TagType,_string>>_TypeInfo
                                );
      FUN_078906a4(uVar8,lVar4);
      plVar11 = *(long **)(unaff_x20 + 0x10);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto FUN_0788fe74;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar3,2);
FUN_0788fe74:
      uVar9 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Collections_Generic_List<BaseUnits[]>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0788fedc;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_03ac43c4(plVar6,*(long *)System_Collections_Generic_List<BaseUnits[]>_TypeInfo,0)
      ;
LAB_0788fedc:
      lVar4 = (*(code *)*puVar7)(plVar6,uVar8,uVar9,puVar7[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000020 =
           FUN_058b71ec(lVar4,*(undefined8 *)System_Collections_Generic_List<AccountId>_TypeInfo);
      uVar5 = FUN_0587c6c4(&stack0x00000020,
                           *(undefined8 *)System_Collections_Generic_List<string[]>_TypeInfo);
      if ((uVar5 & 1) == 0) {
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
    lVar4 = FUN_0587c704(&stack0x00000020,
                         *(undefined8 *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
    puVar3 = 
    System_Collections_Generic_List<ValueTuple<Camera,_int,_HDCamera_HistoryChannel>>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 0x20);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar8 = *(undefined8 *)(lVar4 + 0x10);
    iVar2 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar2 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar8,*(undefined8 *)puVar3);
  }
  return;
}


