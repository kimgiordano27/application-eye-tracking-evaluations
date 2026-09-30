/*
FUNCTION_NAME: FUN_0582bfac
ENTRY_POINT: 0582bfac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3
*/


undefined8 FUN_0582bfac(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar4;
  
  if ((DAT_06bc0f11 & 1) == 0) {
                    /* try { // try from 0582bfcc to 0592c117 has its CatchHandler @ 0582bd6c */
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<IXRInteractable,_int>_Clear__);
    FUN_02f08768(PTR_DAT_067d7a50);
    FUN_02f08768(Method_UnityEngine_UIElements_EventBase<ChangingEvent<Rect>>_GetPooled__);
    FUN_02f08768(PTR_DAT_067ca1a8);
    FUN_02f08768(Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_TypeInfo);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<IXRGroupMember,_HashSet<IXRGroupMember>>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<int,_PointableDebugGizmos_PointData>_get_Values__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_EventBase<ChangingEvent<RectInt>>_GetPooled__);
    DAT_06bc0f11 = 1;
  }
  puVar4 = PTR_DAT_067c9338;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = FUN_050ed374(uVar5,0,0);
  if ((uVar1 & 1) != 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
    uVar7 = thunk_FUN_02f45270();
    uVar5 = thunk_FUN_02f6ef30(
                              Method_UnityEngine_UIElements_EventBase<ChangingEvent<string>>_GetPooled__
                              );
    FUN_050d5404(uVar7,uVar5,0);
    goto LAB_0582c4b8;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = FUN_050edfb8(uVar5,0,0);
  if ((uVar1 & 1) != 0) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x20) != 3) {
    FUN_02a7da48(plVar6);
    uVar5 = (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
    uVar7 = thunk_FUN_02f6ef30(
                              Method_UnityEngine_UIElements_EventBase<ChangingEvent<Vector2Int>>_GetPooled__
                              );
    uVar5 = FUN_04f65260(uVar5,uVar7,0);
LAB_0582c50c:
    thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
    uVar7 = thunk_FUN_02f45270();
    FUN_050d5404(uVar7,uVar5,0);
LAB_0582c5bc:
    uVar5 = thunk_FUN_02f6ef30(
                              Method_UnityEngine_UIElements_EventBase<ChangingEvent<Vector2>>_GetPooled__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar7,uVar5);
  }
  if (plVar6 == (long *)0x0) goto System_Net_Cookie__set_Secure;
  uVar1 = FUN_050eed48(plVar6,0);
  if ((uVar1 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 0x418))(plVar6,*(undefined8 *)(*plVar6 + 0x420));
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      return uVar5;
    }
    goto System_Net_Cookie__set_Secure;
  }
  uVar5 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<IXRInteractable,_int>_Clear__;
  if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar6 = (long *)FUN_050e4454(uVar5,0);
  if (plVar6 == (long *)0x0) goto System_Net_Cookie__set_Secure;
  uVar1 = (**(code **)(*plVar6 + 0x298))
                    (plVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar6 + 0x2a0));
  if ((uVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_EventBase<ChangingEvent<Rect>>_GetPooled__ +
                0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_0582c670(uVar5);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(puVar4 + 0xe0));
    }
    uVar1 = FUN_050edfb8(uVar5,0,0);
    if ((uVar1 & 1) != 0) goto LAB_0582c174;
    lVar8 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (lVar8 == 0) goto System_Net_Cookie__set_Secure;
    plVar6 = (long *)FUN_050ef718(lVar8,*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<IXRGroupMember,_HashSet<IXRGroupMember>>__ctor__
                                  ,*(undefined8 *)
                                    (*(long *)(*(long *)(puVar4 + 0xe0) + 0xb8) + 0x10),0);
    uVar1 = FUN_05016ec0(plVar6,0,0);
    if ((uVar1 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x10);
      if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (lVar8 == 0) goto System_Net_Cookie__set_Secure;
      plVar6 = (long *)FUN_050ef748(lVar8,*(undefined8 *)
                                           Method_UnityEngine_UIElements_EventBase<ChangingEvent<RectInt>>_GetPooled__
                                    ,0x34,0,*(undefined8 *)
                                             (*(long *)(*(long *)(puVar4 + 0xe0) + 0xb8) + 0x10),0,0
                                   );
    }
    if ((plVar6 == (long *)0x0) ||
       (lVar8 = (**(code **)(*plVar6 + 0x3d8))(plVar6,*(undefined8 *)(*plVar6 + 0x3e0)), lVar8 == 0)
       ) goto System_Net_Cookie__set_Secure;
    plVar6 = (long *)FUN_050ef8a4(lVar8,*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<int,_PointableDebugGizmos_PointData>_get_Values__
                                  ,0);
    uVar1 = FUN_05017f10(plVar6,0,0);
    if ((uVar1 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto System_Net_Cookie__set_Secure;
      uVar5 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    }
    else {
      lVar8 = *(long *)(puVar4 + 0x10);
      if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = FUN_050e4454(lVar8 + 0x20,0);
    }
    puVar4 = PTR_DAT_067ca1a8;
    lVar8 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    plVar6 = (long *)FUN_02f0880c(*(undefined8 *)puVar4,1);
    if (plVar6 == (long *)0x0) goto System_Net_Cookie__set_Secure;
    lVar9 = *(long *)(param_1 + 0x28);
    if ((lVar9 != 0) &&
       (lVar2 = thunk_FUN_02f45174(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
    goto LAB_0582c5d4;
    if ((int)plVar6[3] == 0) goto LAB_0582c534;
    plVar6[4] = lVar9;
    if (lVar8 == 0) goto System_Net_Cookie__set_Secure;
    uVar5 = FUN_050ef718(lVar8,*(undefined8 *)
                                Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_TypeInfo
                         ,plVar6,0);
    uVar1 = FUN_05016ec0(uVar5,0,0);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if ((uVar1 & 1) == 0) {
      return uVar5;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_02f6ef30(Method_UnityEngine_UIElements_EventBase<ChangingEvent<Rect>>_GetPooled__);
    FUN_02a7d698();
    puVar4 = Method_UnityEngine_UIElements_EventBase<AccordionItemValueChangedEvent>__ctor__;
  }
  else {
    uVar5 = 0;
LAB_0582c174:
    uVar7 = *(undefined8 *)PTR_DAT_067d7a50;
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    plVar6 = (long *)FUN_050e4454(uVar7,0);
    if (plVar6 == (long *)0x0) goto System_Net_Cookie__set_Secure;
    uVar1 = (**(code **)(*plVar6 + 0x298))
                      (plVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar6 + 0x2a0));
    if ((uVar1 & 1) != 0) {
      thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
      FUN_02a7d698();
      uVar5 = FUN_050656a0(0);
      plVar6 = *(long **)(param_1 + 0x10);
      FUN_02a7da48(plVar6);
      uVar7 = (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
      uVar3 = thunk_FUN_02f6ef30(
                                Method_UnityEngine_UIElements_EventBase<ChangingEvent<Vector3>>_GetPooled__
                                );
      uVar5 = FUN_04f70148(uVar5,uVar3,uVar7,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c8f88);
      uVar7 = thunk_FUN_02f45270();
      FUN_050d0a88(uVar7,uVar5,0);
      goto LAB_0582c5bc;
    }
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar1 = FUN_050edfb8(uVar5,0,0);
    if ((uVar1 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_EventBase<ChangingEvent<Rect>>_GetPooled__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar6 = (long *)FUN_0582c858(uVar5);
      uVar1 = FUN_05017f10(plVar6,0,0);
      if ((uVar1 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x10);
        FUN_02a7da48(plVar6);
        uVar5 = (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
        uVar7 = thunk_FUN_02f6ef30(
                                  Method_UnityEngine_UIElements_EventBase<ChangingEvent<Vector3Int>>_GetPooled__
                                  );
        uVar3 = thunk_FUN_02f6ef30(
                                  Method_UnityEngine_UIElements_EventBase<ChangingEvent<Vector4>>_GetPooled__
                                  );
        uVar5 = FUN_04f6f6b4(uVar7,uVar5,uVar3,0);
        goto LAB_0582c50c;
      }
      if (plVar6 == (long *)0x0) goto System_Net_Cookie__set_Secure;
      uVar5 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    }
    puVar4 = PTR_DAT_067ca1a8;
    lVar8 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    plVar6 = (long *)FUN_02f0880c(*(undefined8 *)puVar4,1);
    if (plVar6 == (long *)0x0) {
System_Net_Cookie__set_Secure:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if ((lVar9 != 0) &&
       (lVar2 = thunk_FUN_02f45174(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0)) {
LAB_0582c5d4:
      uVar5 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar5,0);
    }
    if ((int)plVar6[3] == 0) {
LAB_0582c534:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    plVar6[4] = lVar9;
    if (lVar8 == 0) goto System_Net_Cookie__set_Secure;
    uVar5 = FUN_050ef718(lVar8,*(undefined8 *)
                                Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_TypeInfo
                         ,plVar6,0);
    uVar1 = FUN_05016ec0(uVar5,0,0);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if ((uVar1 & 1) == 0) {
      return uVar5;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_02f6ef30(Method_UnityEngine_UIElements_EventBase<ChangingEvent<Rect>>_GetPooled__);
    FUN_02a7d698();
    puVar4 = Method_UnityEngine_UIElements_EventBase<ChangingEvent<float>>_GetPooled__;
  }
  uVar3 = thunk_FUN_02f6ef30(puVar4);
  uVar7 = FUN_0582c95c(uVar7,uVar3,uVar5);
LAB_0582c4b8:
  uVar5 = thunk_FUN_02f6ef30(
                            Method_UnityEngine_UIElements_EventBase<ChangingEvent<Vector2>>_GetPooled__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar7,uVar5);
}


