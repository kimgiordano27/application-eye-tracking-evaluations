/*
FUNCTION_NAME: XRIF._Support.Interactable.FVRPositionalButton$$GetBoxCast
ENTRY_POINT: 03991e88
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void XRIF__Support_Interactable_FVRPositionalButton__GetBoxCast(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  FUN_01ab69ac();
  FUN_01ab69ac(Method_System_Collections_Generic_List<BadWordProvider>__ctor__);
  FUN_01ab69ac(Method_System_Collections_Generic_List<AvatarInfoItem>_Add__);
  FUN_01ab69ac(Method_System_Collections_Generic_List<AvatarInfoItem>_Find__);
  FUN_01ab69ac(Method_System_Collections_Generic_List<AvatarInfoItem>_GetEnumerator__);
  FUN_01ab69ac(Method_System_Collections_Generic_List<BadWordProvider>_GetEnumerator__);
  FUN_01ab69ac(Method_System_Collections_Generic_List<BadWordProvider>_get_Count__);
  FUN_01ab69ac(Method_System_Collections_Generic_List<AvatarInfoItem>_Remove__);
  *(undefined1 *)(unaff_x20 + 0xa73) = 1;
  in_stack_00000008 = 0;
  lVar6 = *(long *)(unaff_x19 + 10);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
LAB_03992088:
    FUN_0209f8cc(&stack0x00000008,&stack0x00000018,
                 *(undefined8 *)Method_System_Collections_Generic_List<AvatarInfoItem>_Add__);
    uVar1 = in_stack_00000018;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03cbe188 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar1 = FUN_0366d3cc(0);
    uVar1 = FUN_025b1328(uVar1,*(undefined8 *)
                                Method_System_Collections_Generic_List<AvatarInfoItem>_Remove__,0);
    uVar2 = FUN_025be440(uVar1,0);
    if ((uVar2 & 1) != 0) goto LAB_039920b0;
    lVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                Unity_Physics_Authoring_StaticOptimizeBakingSystem___codegen__OnDestroy_000001C9_PostfixBurstDelegate_var
                              );
    FUN_0309a588(lVar3,uVar1,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar1 = FUN_0309a5b8(lVar3,0);
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)
                                Method_System_Collections_Generic_List<BadWordProvider>_GetEnumerator__
                              );
    FUN_039ab4ac(uVar4,uVar1,0);
    plVar5 = (long *)thunk_FUN_01a89e68(*(undefined8 *)
                                         Method_System_Collections_Generic_List<BadWordProvider>_get_Count__
                                       );
    FUN_039acd94(plVar5,uVar4,0,0,0,0,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(char *)(lVar6 + 0x20) != '\0') {
      uVar1 = thunk_FUN_01a89e68(*(undefined8 *)
                                  Method_System_Collections_Generic_List<BadWordProvider>__ctor__);
      FUN_0399e14c(DAT_00d38e30,uVar1,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar3 = (**(code **)(*plVar5 + 0x188))(plVar5,uVar1,0,*(undefined8 *)(*plVar5 + 400));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000008 =
           FUN_020a2c44(lVar3,*(undefined8 *)
                               Method_System_Collections_Generic_List<AvatarInfoItem>_GetEnumerator__
                       );
      uVar2 = FUN_0209f888(&stack0x00000008,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<AvatarInfoItem>_Find__);
      if ((uVar2 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xc,0);
        FUN_01f2ede4(unaff_x19 + 2,&stack0x00000008);
        return;
      }
      goto LAB_03992088;
    }
    uVar1 = FUN_03083cc4(plVar5,0);
  }
  FUN_03991a88(lVar6,uVar1);
LAB_039920b0:
  *unaff_x19 = -2;
  FUN_02679440(unaff_x19 + 2,0);
  return;
}


