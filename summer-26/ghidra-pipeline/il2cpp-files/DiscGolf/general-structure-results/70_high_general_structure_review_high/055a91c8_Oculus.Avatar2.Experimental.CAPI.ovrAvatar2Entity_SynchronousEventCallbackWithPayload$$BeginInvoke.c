/*
FUNCTION_NAME: Oculus.Avatar2.Experimental.CAPI.ovrAvatar2Entity_SynchronousEventCallbackWithPayload$$BeginInvoke
ENTRY_POINT: 055a91c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Oculus_Avatar2_Experimental_CAPI_ovrAvatar2Entity_SynchronousEventCallbackWithPayload__BeginInvoke
               (long *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if (param_1 == (long *)0x0) goto LAB_055a9a70;
  lVar3 = (**(code **)(*param_1 + 0x4e8))(param_1,*(undefined8 *)(*param_1 + 0x4f0));
  if (lVar3 == 0) goto LAB_055a9a70;
  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_055a9a74;
  lVar3 = *(long *)(lVar3 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar10 = *unaff_x24;
  in_stack_00000010 = lVar3;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(unaff_x25 + 0xe0));
  }
  uVar10 = FUN_054f73b4(uVar10,0);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x27);
  }
  uVar4 = FUN_055983a8(uVar9,uVar10,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_05592b3c(*(undefined8 *)(unaff_x19 + 0x18),0);
    if ((uVar4 & 1) != 0) {
      plVar5 = *(long **)(unaff_x19 + 0x18);
      if (plVar5 == (long *)0x0) goto LAB_055a9a70;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x4c8))(plVar5,*(undefined8 *)(*plVar5 + 0x4d0));
      if (plVar5 == (long *)0x0) goto LAB_055a9a70;
      uVar9 = (**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
      uVar4 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_var
                                 ,0);
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x100) = 1;
      }
    }
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_06a0a7d0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar5 = (long *)FUN_054f73b4(uVar9,0);
    plVar6 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,2);
    if (plVar6 == (long *)0x0) goto LAB_055a9a70;
    if ((unaff_x20 != 0) && (lVar7 = thunk_FUN_02dd3048(), lVar7 == 0)) goto LAB_055a9a78;
    if ((int)plVar6[3] == 0) goto LAB_055a9a74;
    plVar6[4] = unaff_x20;
    LeanTween__value();
    if ((lVar3 != 0) &&
       (lVar7 = thunk_FUN_02dd3048(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_055a9a78;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_055a9a74;
    plVar6[5] = lVar3;
    LeanTween__value(plVar6 + 5,lVar3);
    if (plVar5 == (long *)0x0) goto LAB_055a9a70;
    (**(code **)(*plVar5 + 0x9c8))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x9d0));
    FUN_055a7230();
  }
  uVar9 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar10 = *(undefined8 *)System_Action<InteractorUnregisteredEventArgs>_TypeInfo;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar10 = FUN_054f73b4(uVar10,0);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x27);
  }
  bVar2 = FUN_055986b8(uVar9,uVar10,0);
  lVar3 = in_stack_00000018;
  *(byte *)(unaff_x19 + 0x28) = bVar2 & 1;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_05501380(lVar3,0,0);
  lVar3 = in_stack_00000010;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_05501380(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
      uVar10 = *(undefined8 *)PTR_DAT_06a0ea88;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      plVar5 = (long *)FUN_054f73b4(uVar10,0);
      puVar1 = PTR_DAT_069fc720;
      plVar6 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,2);
      lVar3 = in_stack_00000018;
      if (plVar6 == (long *)0x0) goto LAB_055a9a70;
      if ((in_stack_00000018 != 0) &&
         (lVar7 = thunk_FUN_02dd3048(in_stack_00000018,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)
         ) {
LAB_055a9a78:
        uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_055a9a74:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar6[4] = lVar3;
      LeanTween__value(plVar6 + 4,lVar3);
      lVar3 = in_stack_00000010;
      if ((in_stack_00000010 != 0) &&
         (lVar7 = thunk_FUN_02dd3048(in_stack_00000010,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)
         ) goto LAB_055a9a78;
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_055a9a74;
      plVar6[5] = lVar3;
      LeanTween__value(plVar6 + 5,lVar3);
      if (plVar5 == (long *)0x0) goto LAB_055a9a70;
      uVar10 = (**(code **)(*plVar5 + 0x9c8))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x9d0));
      plVar5 = (long *)FUN_054f73b4(*unaff_x24,0);
      plVar6 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,2);
      lVar3 = in_stack_00000018;
      if (plVar6 == (long *)0x0) goto LAB_055a9a70;
      if ((in_stack_00000018 != 0) &&
         (lVar7 = thunk_FUN_02dd3048(in_stack_00000018,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)
         ) goto LAB_055a9a78;
      if ((int)plVar6[3] == 0) goto LAB_055a9a74;
      plVar6[4] = lVar3;
      LeanTween__value(plVar6 + 4,lVar3);
      lVar3 = in_stack_00000010;
      if ((in_stack_00000010 != 0) &&
         (lVar7 = thunk_FUN_02dd3048(in_stack_00000010,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)
         ) goto LAB_055a9a78;
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_055a9a74;
      plVar6[5] = lVar3;
      LeanTween__value(plVar6 + 5,lVar3);
      if (plVar5 == (long *)0x0) goto LAB_055a9a70;
      uVar8 = (**(code **)(*plVar5 + 0x9c8))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x9d0));
      uVar9 = FUN_05585c64(uVar9,uVar10,uVar8,0);
      *(undefined8 *)(unaff_x19 + 0x108) = uVar9;
      LeanTween__value(unaff_x19 + 0x108,uVar9);
      uVar4 = FUN_055a8fb8();
      if ((uVar4 & 1) == 0) {
        plVar5 = *(long **)(unaff_x19 + 0x18);
        if (plVar5 == (long *)0x0) goto LAB_055a9a70;
        uVar9 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
        uVar4 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                          XRIDefaultInputActions1_XRILeftHandActions_var,0);
        if ((uVar4 & 1) != 0) {
          uVar9 = FUN_05592b60(*(undefined8 *)(unaff_x19 + 0x18),0);
          puVar1 = 
          Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
          ;
          if (*(int *)(*(long *)
                        Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                      + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)
                                Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                              );
          }
          FUN_05592164(uVar9,0);
          if (DAT_06dbb678 == '\0') {
            FUN_02d965b8(
                        Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                        );
            DAT_06dbb678 = '\x01';
          }
          lVar3 = *(long *)puVar1;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar3 = *(long *)puVar1;
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
          if (lVar3 == 0) goto LAB_055a9a70;
          uVar9 = FUN_055923e4(lVar3,in_stack_00000018,in_stack_00000010,0);
          *(undefined8 *)(unaff_x19 + 0x118) = uVar9;
          LeanTween__value(unaff_x19 + 0x118,uVar9);
        }
      }
    }
  }
  uVar9 = *unaff_x26;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  plVar5 = (long *)FUN_054f73b4(uVar9,0);
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x328))
                      (plVar5,*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)(*plVar5 + 0x330));
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x100) = 1;
    }
    plVar6 = (long *)(unaff_x19 + 200);
    *plVar6 = in_stack_00000018;
    LeanTween__value(plVar6);
    plVar5 = (long *)(unaff_x19 + 0xd0);
    *plVar5 = in_stack_00000010;
    LeanTween__value(plVar5);
    lVar3 = *plVar6;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_05501380(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      lVar3 = *plVar5;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_05501380(lVar3,0,0);
      if ((uVar4 & 1) != 0) {
        uVar9 = *(undefined8 *)(unaff_x19 + 200);
        uVar10 = *(undefined8 *)(unaff_x19 + 0xd0);
        uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
        if (*(int *)(*(long *)UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_05592b7c(uVar8,uVar9,uVar10,&stack0x00000008);
        if ((uVar4 & 1) != 0) {
          FUN_055a7230();
          *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000000;
          LeanTween__value(unaff_x19 + 0x118);
          *(undefined1 *)(unaff_x19 + 0x28) = 1;
        }
      }
    }
    return;
  }
LAB_055a9a70:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


