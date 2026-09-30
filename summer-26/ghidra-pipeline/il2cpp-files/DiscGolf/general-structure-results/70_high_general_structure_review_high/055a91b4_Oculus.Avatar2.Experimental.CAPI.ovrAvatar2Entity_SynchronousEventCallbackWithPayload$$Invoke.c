/*
FUNCTION_NAME: Oculus.Avatar2.Experimental.CAPI.ovrAvatar2Entity_SynchronousEventCallbackWithPayload$$Invoke
ENTRY_POINT: 055a91b4
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


void Oculus_Avatar2_Experimental_CAPI_ovrAvatar2Entity_SynchronousEventCallbackWithPayload__Invoke
               (long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if (*(int *)(param_1 + 0x18) == 0) goto LAB_055a9a74;
  lVar9 = *(long *)(param_1 + 0x20);
  plVar3 = *(long **)(unaff_x19 + 0xe0);
  in_stack_00000018 = lVar9;
  if (plVar3 == (long *)0x0) goto LAB_055a9a70;
  lVar4 = (**(code **)(*plVar3 + 0x4e8))(plVar3,*(undefined8 *)(*plVar3 + 0x4f0));
  if (lVar4 == 0) goto LAB_055a9a70;
  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_055a9a74;
  lVar4 = *(long *)(lVar4 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar11 = *unaff_x24;
  in_stack_00000010 = lVar4;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(unaff_x25 + 0xe0));
  }
  uVar11 = FUN_054f73b4(uVar11,0);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x27);
  }
  uVar5 = FUN_055983a8(uVar10,uVar11,0);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_05592b3c(*(undefined8 *)(unaff_x19 + 0x18),0);
    if ((uVar5 & 1) != 0) {
      plVar3 = *(long **)(unaff_x19 + 0x18);
      if (plVar3 == (long *)0x0) goto LAB_055a9a70;
      plVar3 = (long *)(**(code **)(*plVar3 + 0x4c8))(plVar3,*(undefined8 *)(*plVar3 + 0x4d0));
      if (plVar3 == (long *)0x0) goto LAB_055a9a70;
      uVar10 = (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(*plVar3 + 0x370));
      uVar5 = thunk_FUN_0536b75c(uVar10,*(undefined8 *)
                                         UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_var
                                 ,0);
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x100) = 1;
      }
    }
  }
  else {
    uVar10 = *(undefined8 *)PTR_DAT_06a0a7d0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar3 = (long *)FUN_054f73b4(uVar10,0);
    plVar6 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,2);
    if (plVar6 == (long *)0x0) goto LAB_055a9a70;
    if ((lVar9 != 0) &&
       (lVar7 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_055a9a78;
    if ((int)plVar6[3] == 0) goto LAB_055a9a74;
    plVar6[4] = lVar9;
    LeanTween__value(plVar6 + 4,lVar9);
    if ((lVar4 != 0) &&
       (lVar9 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
    goto LAB_055a9a78;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_055a9a74;
    plVar6[5] = lVar4;
    LeanTween__value(plVar6 + 5,lVar4);
    if (plVar3 == (long *)0x0) goto LAB_055a9a70;
    (**(code **)(*plVar3 + 0x9c8))(plVar3,plVar6,*(undefined8 *)(*plVar3 + 0x9d0));
    FUN_055a7230();
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar11 = *(undefined8 *)System_Action<InteractorUnregisteredEventArgs>_TypeInfo;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar11 = FUN_054f73b4(uVar11,0);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x27);
  }
  bVar2 = FUN_055986b8(uVar10,uVar11,0);
  lVar9 = in_stack_00000018;
  *(byte *)(unaff_x19 + 0x28) = bVar2 & 1;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_05501380(lVar9,0,0);
  lVar9 = in_stack_00000010;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_05501380(lVar9,0,0);
    if ((uVar5 & 1) != 0) {
      uVar10 = *(undefined8 *)(unaff_x19 + 0x58);
      uVar11 = *(undefined8 *)PTR_DAT_06a0ea88;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      plVar3 = (long *)FUN_054f73b4(uVar11,0);
      puVar1 = PTR_DAT_069fc720;
      plVar6 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,2);
      lVar9 = in_stack_00000018;
      if (plVar6 == (long *)0x0) goto LAB_055a9a70;
      if ((in_stack_00000018 != 0) &&
         (lVar4 = thunk_FUN_02dd3048(in_stack_00000018,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)
         ) {
LAB_055a9a78:
        uVar10 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar10,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_055a9a74:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar6[4] = lVar9;
      LeanTween__value(plVar6 + 4,lVar9);
      lVar9 = in_stack_00000010;
      if ((in_stack_00000010 != 0) &&
         (lVar4 = thunk_FUN_02dd3048(in_stack_00000010,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)
         ) goto LAB_055a9a78;
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_055a9a74;
      plVar6[5] = lVar9;
      LeanTween__value(plVar6 + 5,lVar9);
      if (plVar3 == (long *)0x0) goto LAB_055a9a70;
      uVar11 = (**(code **)(*plVar3 + 0x9c8))(plVar3,plVar6,*(undefined8 *)(*plVar3 + 0x9d0));
      plVar3 = (long *)FUN_054f73b4(*unaff_x24,0);
      plVar6 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,2);
      lVar9 = in_stack_00000018;
      if (plVar6 == (long *)0x0) goto LAB_055a9a70;
      if ((in_stack_00000018 != 0) &&
         (lVar4 = thunk_FUN_02dd3048(in_stack_00000018,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)
         ) goto LAB_055a9a78;
      if ((int)plVar6[3] == 0) goto LAB_055a9a74;
      plVar6[4] = lVar9;
      LeanTween__value(plVar6 + 4,lVar9);
      lVar9 = in_stack_00000010;
      if ((in_stack_00000010 != 0) &&
         (lVar4 = thunk_FUN_02dd3048(in_stack_00000010,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)
         ) goto LAB_055a9a78;
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_055a9a74;
      plVar6[5] = lVar9;
      LeanTween__value(plVar6 + 5,lVar9);
      if (plVar3 == (long *)0x0) goto LAB_055a9a70;
      uVar8 = (**(code **)(*plVar3 + 0x9c8))(plVar3,plVar6,*(undefined8 *)(*plVar3 + 0x9d0));
      uVar10 = FUN_05585c64(uVar10,uVar11,uVar8,0);
      *(undefined8 *)(unaff_x19 + 0x108) = uVar10;
      LeanTween__value(unaff_x19 + 0x108,uVar10);
      uVar5 = FUN_055a8fb8();
      if ((uVar5 & 1) == 0) {
        plVar3 = *(long **)(unaff_x19 + 0x18);
        if (plVar3 == (long *)0x0) goto LAB_055a9a70;
        uVar10 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
        uVar5 = thunk_FUN_0536b75c(uVar10,*(undefined8 *)
                                           XRIDefaultInputActions1_XRILeftHandActions_var,0);
        if ((uVar5 & 1) != 0) {
          uVar10 = FUN_05592b60(*(undefined8 *)(unaff_x19 + 0x18),0);
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
          FUN_05592164(uVar10,0);
          if (DAT_06dbb678 == '\0') {
            FUN_02d965b8(
                        Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                        );
            DAT_06dbb678 = '\x01';
          }
          lVar9 = *(long *)puVar1;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar9 = *(long *)puVar1;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar9 == 0) goto LAB_055a9a70;
          uVar10 = FUN_055923e4(lVar9,in_stack_00000018,in_stack_00000010,0);
          *(undefined8 *)(unaff_x19 + 0x118) = uVar10;
          LeanTween__value(unaff_x19 + 0x118,uVar10);
        }
      }
    }
  }
  uVar10 = *unaff_x26;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  plVar3 = (long *)FUN_054f73b4(uVar10,0);
  if (plVar3 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar3 + 0x328))
                      (plVar3,*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)(*plVar3 + 0x330));
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x100) = 1;
    }
    plVar6 = (long *)(unaff_x19 + 200);
    *plVar6 = in_stack_00000018;
    LeanTween__value(plVar6);
    plVar3 = (long *)(unaff_x19 + 0xd0);
    *plVar3 = in_stack_00000010;
    LeanTween__value(plVar3);
    lVar9 = *plVar6;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_05501380(lVar9,0,0);
    if ((uVar5 & 1) != 0) {
      lVar9 = *plVar3;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_05501380(lVar9,0,0);
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined8 *)(unaff_x19 + 200);
        uVar11 = *(undefined8 *)(unaff_x19 + 0xd0);
        uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
        if (*(int *)(*(long *)UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar5 = FUN_05592b7c(uVar8,uVar10,uVar11,&stack0x00000008);
        if ((uVar5 & 1) != 0) {
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


