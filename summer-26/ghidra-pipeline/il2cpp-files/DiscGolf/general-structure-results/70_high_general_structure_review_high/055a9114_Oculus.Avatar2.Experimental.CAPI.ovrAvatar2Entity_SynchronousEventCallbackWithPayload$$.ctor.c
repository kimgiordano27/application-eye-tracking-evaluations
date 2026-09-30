/*
FUNCTION_NAME: Oculus.Avatar2.Experimental.CAPI.ovrAvatar2Entity_SynchronousEventCallbackWithPayload$$.ctor
ENTRY_POINT: 055a9114
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Oculus_Avatar2_Experimental_CAPI_ovrAvatar2Entity_SynchronousEventCallbackWithPayload___ctor
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x19;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  puVar2 = PTR_DAT_06a0e0a8;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  FUN_055a7124();
  puVar1 = PTR_DAT_069fb9c0;
  uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar14 = *unaff_x24;
  *(undefined4 *)(unaff_x19 + 0x24) = 5;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar14 = FUN_054f73b4(uVar14,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_06a0ad80;
  uVar6 = FUN_05598430(uVar13,uVar14,unaff_x19 + 0xe0,0);
  puVar4 = PTR_DAT_06a16ff0;
  if ((uVar6 & 1) == 0) {
    uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar14 = *(undefined8 *)PTR_DAT_06a16ff0;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar14 = FUN_054f73b4(uVar14,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar2);
    }
    uVar6 = FUN_05598430(uVar13,uVar14,unaff_x19 + 0xe0,0);
    if ((uVar6 & 1) != 0) {
      plVar7 = *(long **)(unaff_x19 + 0xe0);
      if (plVar7 == (long *)0x0) goto LAB_055a9a70;
      lVar8 = (**(code **)(*plVar7 + 0x4e8))(plVar7,*(undefined8 *)(*plVar7 + 0x4f0));
      if (lVar8 == 0) goto LAB_055a9a70;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_055a9a74;
      lVar8 = *(long *)(lVar8 + 0x20);
      plVar7 = *(long **)(unaff_x19 + 0xe0);
      in_stack_00000018 = lVar8;
      if (plVar7 == (long *)0x0) goto LAB_055a9a70;
      lVar9 = (**(code **)(*plVar7 + 0x4e8))(plVar7,*(undefined8 *)(*plVar7 + 0x4f0));
      if (lVar9 == 0) goto LAB_055a9a70;
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_055a9a74;
      lVar9 = *(long *)(lVar9 + 0x28);
      uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar14 = *(undefined8 *)puVar4;
      in_stack_00000010 = lVar9;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
      }
      uVar14 = FUN_054f73b4(uVar14,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar2);
      }
      uVar6 = FUN_055983a8(uVar13,uVar14,0);
      if ((uVar6 & 1) != 0) {
        uVar13 = *(undefined8 *)System_Action<InteractorUnregisteredEventArgs>_TypeInfo;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        plVar7 = (long *)FUN_054f73b4(uVar13,0);
        plVar10 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,2);
        if (plVar10 == (long *)0x0) goto LAB_055a9a70;
        if ((lVar8 != 0) &&
           (lVar11 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
        goto LAB_055a9a78;
        if ((int)plVar10[3] == 0) goto LAB_055a9a74;
        plVar10[4] = lVar8;
        LeanTween__value(plVar10 + 4,lVar8);
        if ((lVar9 != 0) &&
           (lVar8 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0))
        goto LAB_055a9a78;
        if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_055a9a74;
        plVar10[5] = lVar9;
        LeanTween__value(plVar10 + 5,lVar9);
        if (plVar7 == (long *)0x0) goto LAB_055a9a70;
        (**(code **)(*plVar7 + 0x9c8))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x9d0));
        FUN_055a7230();
      }
      bVar5 = 1;
      goto LAB_055a965c;
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05598bc8(uVar13,&stack0x00000018,&stack0x00000010,0);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar14 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar14 = FUN_054f73b4(uVar14,0);
    uVar6 = FUN_055006dc(uVar13,uVar14,0);
    if ((uVar6 & 1) != 0) {
      uVar13 = *(undefined8 *)System_Action<InteractorRegisteredEventArgs>_TypeInfo;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_054f73b4(uVar13,0);
      FUN_055a7230();
    }
  }
  else {
    plVar7 = *(long **)(unaff_x19 + 0xe0);
    if (plVar7 == (long *)0x0) goto LAB_055a9a70;
    lVar8 = (**(code **)(*plVar7 + 0x4e8))(plVar7,*(undefined8 *)(*plVar7 + 0x4f0));
    if (lVar8 == 0) goto LAB_055a9a70;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_055a9a74;
    lVar8 = *(long *)(lVar8 + 0x20);
    plVar7 = *(long **)(unaff_x19 + 0xe0);
    in_stack_00000018 = lVar8;
    if (plVar7 == (long *)0x0) goto LAB_055a9a70;
    lVar9 = (**(code **)(*plVar7 + 0x4e8))(plVar7,*(undefined8 *)(*plVar7 + 0x4f0));
    if (lVar9 == 0) goto LAB_055a9a70;
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_055a9a74;
    lVar9 = *(long *)(lVar9 + 0x28);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar14 = *unaff_x24;
    in_stack_00000010 = lVar9;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
    }
    uVar14 = FUN_054f73b4(uVar14,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar2);
    }
    uVar6 = FUN_055983a8(uVar13,uVar14,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_05592b3c(*(undefined8 *)(unaff_x19 + 0x18),0);
      if ((uVar6 & 1) != 0) {
        plVar7 = *(long **)(unaff_x19 + 0x18);
        if (plVar7 == (long *)0x0) goto LAB_055a9a70;
        plVar7 = (long *)(**(code **)(*plVar7 + 0x4c8))(plVar7,*(undefined8 *)(*plVar7 + 0x4d0));
        if (plVar7 == (long *)0x0) goto LAB_055a9a70;
        uVar13 = (**(code **)(*plVar7 + 0x368))(plVar7,*(undefined8 *)(*plVar7 + 0x370));
        uVar6 = thunk_FUN_0536b75c(uVar13,*(undefined8 *)
                                           UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_var
                                   ,0);
        if ((uVar6 & 1) != 0) {
          *(undefined1 *)(unaff_x19 + 0x100) = 1;
        }
      }
    }
    else {
      uVar13 = *(undefined8 *)PTR_DAT_06a0a7d0;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      plVar7 = (long *)FUN_054f73b4(uVar13,0);
      plVar10 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,2);
      if (plVar10 == (long *)0x0) goto LAB_055a9a70;
      if ((lVar8 != 0) &&
         (lVar11 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_055a9a78;
      if ((int)plVar10[3] == 0) goto LAB_055a9a74;
      plVar10[4] = lVar8;
      LeanTween__value(plVar10 + 4,lVar8);
      if ((lVar9 != 0) &&
         (lVar8 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0))
      goto LAB_055a9a78;
      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_055a9a74;
      plVar10[5] = lVar9;
      LeanTween__value(plVar10 + 5,lVar9);
      if (plVar7 == (long *)0x0) goto LAB_055a9a70;
      (**(code **)(*plVar7 + 0x9c8))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x9d0));
      FUN_055a7230();
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar14 = *(undefined8 *)System_Action<InteractorUnregisteredEventArgs>_TypeInfo;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar14 = FUN_054f73b4(uVar14,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar2);
    }
    bVar5 = FUN_055986b8(uVar13,uVar14,0);
    bVar5 = bVar5 & 1;
LAB_055a965c:
    *(byte *)(unaff_x19 + 0x28) = bVar5;
  }
  lVar8 = in_stack_00000018;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_05501380(lVar8,0,0);
  lVar8 = in_stack_00000010;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_05501380(lVar8,0,0);
    if ((uVar6 & 1) != 0) {
      uVar13 = *(undefined8 *)(unaff_x19 + 0x58);
      uVar14 = *(undefined8 *)PTR_DAT_06a0ea88;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      plVar7 = (long *)FUN_054f73b4(uVar14,0);
      puVar2 = PTR_DAT_069fc720;
      plVar10 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,2);
      lVar8 = in_stack_00000018;
      if (plVar10 == (long *)0x0) goto LAB_055a9a70;
      if ((in_stack_00000018 != 0) &&
         (lVar9 = thunk_FUN_02dd3048(in_stack_00000018,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0
         )) {
LAB_055a9a78:
        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar13,0);
      }
      if ((int)plVar10[3] == 0) {
LAB_055a9a74:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar10[4] = lVar8;
      LeanTween__value(plVar10 + 4,lVar8);
      lVar8 = in_stack_00000010;
      if ((in_stack_00000010 != 0) &&
         (lVar9 = thunk_FUN_02dd3048(in_stack_00000010,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0
         )) goto LAB_055a9a78;
      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_055a9a74;
      plVar10[5] = lVar8;
      LeanTween__value(plVar10 + 5,lVar8);
      if (plVar7 == (long *)0x0) goto LAB_055a9a70;
      uVar14 = (**(code **)(*plVar7 + 0x9c8))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x9d0));
      plVar7 = (long *)FUN_054f73b4(*unaff_x24,0);
      plVar10 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,2);
      lVar8 = in_stack_00000018;
      if (plVar10 == (long *)0x0) goto LAB_055a9a70;
      if ((in_stack_00000018 != 0) &&
         (lVar9 = thunk_FUN_02dd3048(in_stack_00000018,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0
         )) goto LAB_055a9a78;
      if ((int)plVar10[3] == 0) goto LAB_055a9a74;
      plVar10[4] = lVar8;
      LeanTween__value(plVar10 + 4,lVar8);
      lVar8 = in_stack_00000010;
      if ((in_stack_00000010 != 0) &&
         (lVar9 = thunk_FUN_02dd3048(in_stack_00000010,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0
         )) goto LAB_055a9a78;
      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_055a9a74;
      plVar10[5] = lVar8;
      LeanTween__value(plVar10 + 5,lVar8);
      if (plVar7 == (long *)0x0) goto LAB_055a9a70;
      uVar12 = (**(code **)(*plVar7 + 0x9c8))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x9d0));
      uVar13 = FUN_05585c64(uVar13,uVar14,uVar12,0);
      *(undefined8 *)(unaff_x19 + 0x108) = uVar13;
      LeanTween__value(unaff_x19 + 0x108,uVar13);
      uVar6 = FUN_055a8fb8();
      if ((uVar6 & 1) == 0) {
        plVar7 = *(long **)(unaff_x19 + 0x18);
        if (plVar7 == (long *)0x0) goto LAB_055a9a70;
        uVar13 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
        uVar6 = thunk_FUN_0536b75c(uVar13,*(undefined8 *)
                                           XRIDefaultInputActions1_XRILeftHandActions_var,0);
        if ((uVar6 & 1) != 0) {
          uVar13 = FUN_05592b60(*(undefined8 *)(unaff_x19 + 0x18),0);
          puVar2 = 
          Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
          ;
          if (*(int *)(*(long *)
                        Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                      + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)
                                Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                              );
          }
          FUN_05592164(uVar13,0);
          if (DAT_06dbb678 == '\0') {
            FUN_02d965b8(
                        Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                        );
            DAT_06dbb678 = '\x01';
          }
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar8 = *(long *)puVar2;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar8 == 0) goto LAB_055a9a70;
          uVar13 = FUN_055923e4(lVar8,in_stack_00000018,in_stack_00000010,0);
          *(undefined8 *)(unaff_x19 + 0x118) = uVar13;
          LeanTween__value(unaff_x19 + 0x118,uVar13);
        }
      }
    }
  }
  uVar13 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  plVar7 = (long *)FUN_054f73b4(uVar13,0);
  if (plVar7 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar7 + 0x328))
                      (plVar7,*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)(*plVar7 + 0x330));
    if ((uVar6 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x100) = 1;
    }
    plVar10 = (long *)(unaff_x19 + 200);
    *plVar10 = in_stack_00000018;
    LeanTween__value(plVar10);
    plVar7 = (long *)(unaff_x19 + 0xd0);
    *plVar7 = in_stack_00000010;
    LeanTween__value(plVar7);
    lVar8 = *plVar10;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_05501380(lVar8,0,0);
    if ((uVar6 & 1) != 0) {
      lVar8 = *plVar7;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_05501380(lVar8,0,0);
      if ((uVar6 & 1) != 0) {
        uVar13 = *(undefined8 *)(unaff_x19 + 200);
        uVar14 = *(undefined8 *)(unaff_x19 + 0xd0);
        uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
        if (*(int *)(*(long *)UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar6 = FUN_05592b7c(uVar12,uVar13,uVar14,&stack0x00000008);
        if ((uVar6 & 1) != 0) {
          FUN_055a7230();
          *(undefined8 *)(unaff_x19 + 0x118) = uStack0000000000000000;
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


