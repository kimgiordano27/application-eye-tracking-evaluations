/*
FUNCTION_NAME: FUN_05b7bd10
ENTRY_POINT: 05b7bd10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_12;telemetry_or_network_hits_2
*/


void FUN_05b7bd10(long param_1,long param_2,long param_3,long param_4)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  short sVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  
  if ((DAT_06dc22ce & 1) == 0) {
    FUN_02d965b8(OVR_OpenVR_IVROverlay__DestroyOverlay_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a115d0);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<IXRInteractable,_RaycastHit>_Clear__);
    FUN_02d965b8(PTR_DAT_06a115d8);
    FUN_02d965b8(PTR_DAT_06a18558);
    FUN_02d965b8(PTR_DAT_06a1ad28);
    FUN_02d965b8(Unity_Services_Qos_Http_HttpClientResponse_TypeInfo);
    DAT_06dc22ce = 1;
  }
  FUN_05b7aa50(param_1,7);
  *(undefined4 *)(param_1 + 0x70) = 0;
  puVar2 = PTR_DAT_06a115d0;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    if (((param_4 != 0) && (*(int *)(param_4 + 0x10) != 0)) ||
       ((param_2 != 0 && (*(int *)(param_2 + 0x10) != 0)))) {
      uVar8 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<IXRInteractable,_IXRPokeFilter>_Add__
                                );
      uVar8 = FUN_05bbf93c(uVar8,0);
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar9 = thunk_FUN_02dd3144();
      FUN_05452924(uVar9,uVar8,0);
      uVar8 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<IXRInteractable,_RaycastHit>_TryGetValue__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar9,uVar8);
    }
    uVar6 = thunk_FUN_0536b75c(param_3,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<IXRInteractable,_RaycastHit>_Clear__
                               ,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = thunk_FUN_0536b75c(param_3,*(undefined8 *)PTR_DAT_06a18558,0);
      if ((uVar6 & 1) == 0) goto LAB_05b7c008;
      uVar11 = 1;
    }
    else {
      uVar11 = 2;
    }
    *(undefined4 *)(param_1 + 0x70) = uVar11;
    goto LAB_05b7c008;
  }
  lVar12 = param_2;
  if ((param_2 != 0) && (lVar12 = 0, *(int *)(param_2 + 0x10) != 0)) {
    lVar12 = param_2;
  }
  bVar4 = thunk_FUN_0536b75c(param_4,*(undefined8 *)PTR_DAT_06a115d0,0);
  puVar3 = PTR_DAT_06a115d8;
  if ((lVar12 == 0 & bVar4) != 0) {
    uVar6 = FUN_0536ba54(param_3,*(undefined8 *)PTR_DAT_06a115d8,0);
    lVar12 = *(long *)puVar3;
    if ((uVar6 & 1) == 0) {
      lVar12 = 0;
    }
  }
  uVar6 = thunk_FUN_0536b75c(lVar12,*(undefined8 *)PTR_DAT_06a1ad28,0);
  puVar3 = PTR_DAT_06a115d8;
  if ((uVar6 & 1) == 0) {
    uVar6 = thunk_FUN_0536b75c(lVar12,*(undefined8 *)PTR_DAT_06a115d8,0);
    if ((uVar6 & 1) != 0) {
      bVar4 = FUN_0536ba54(*(undefined8 *)puVar2,param_4,0);
      if ((param_4 != 0 & bVar4) != 0) {
        uVar8 = thunk_FUN_02dfd288(
                                  Method_System_Collections_Generic_Dictionary<IXRInteractable,_float>__ctor__
                                  );
        uVar8 = FUN_05bbf93c(uVar8,0);
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar9 = thunk_FUN_02dd3144();
        FUN_05452924(uVar9,uVar8,0);
        uVar8 = thunk_FUN_02dfd288(
                                  Method_System_Collections_Generic_Dictionary<IXRInteractable,_RaycastHit>_TryGetValue__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,uVar8);
      }
      if ((param_3 == 0) || (*(int *)(param_3 + 0x10) == 0)) {
        *(undefined8 *)(param_1 + 0x78) = 0;
        LeanTween__value((undefined8 *)(param_1 + 0x78),0);
        lVar13 = 0;
        param_3 = lVar12;
      }
      else {
        *(long *)(param_1 + 0x78) = param_3;
        LeanTween__value((long *)(param_1 + 0x78),param_3);
        lVar13 = lVar12;
      }
      uVar11 = 3;
      lVar12 = lVar13;
      goto LAB_05b7bfc0;
    }
    if (lVar12 == 0) {
      uVar6 = thunk_FUN_0536b75c(param_3,*(undefined8 *)puVar3,0);
      if ((uVar6 & 1) != 0) {
        bVar4 = FUN_0536ba54(*(undefined8 *)puVar2,param_4,0);
        if ((param_4 != 0 & bVar4) != 0) {
          uVar8 = thunk_FUN_02dfd288(
                                    Method_System_Collections_Generic_Dictionary<IXRInteractable,_float>__ctor__
                                    );
          uVar8 = FUN_05bbf93c(uVar8,0);
          thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
          uVar9 = thunk_FUN_02dd3144();
          FUN_05452924(uVar9,uVar8,0);
          uVar8 = thunk_FUN_02dfd288(
                                    Method_System_Collections_Generic_Dictionary<IXRInteractable,_RaycastHit>_TryGetValue__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar9,uVar8);
        }
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x70) = 3;
        LeanTween__value((undefined8 *)(param_1 + 0x78),0);
        goto LAB_05b7c008;
      }
      if (param_4 == 0) goto LAB_05b7c008;
LAB_05b7c100:
      if (*(int *)(param_4 + 0x10) == 0) {
        lVar12 = **(long **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
        goto LAB_05b7bfc4;
      }
      FUN_05b7b8c4(uVar6,lVar12,param_4);
      if (lVar12 == 0) {
        lVar13 = 0;
      }
      else {
        iVar5 = FUN_05b7c3d8(param_1,lVar12);
        lVar13 = lVar12;
        if (iVar5 != -1) {
          lVar13 = 0;
        }
      }
      lVar12 = FUN_05b7b598(param_1,param_4);
      if (lVar12 == 0) {
        if (lVar13 == 0) {
          lVar13 = FUN_05b7c50c(param_1);
        }
      }
      else if ((lVar13 == 0) || (uVar6 = thunk_FUN_0536b75c(lVar13,lVar12,0), (uVar6 & 1) != 0))
      goto LAB_05b7bfc8;
      lVar12 = lVar13;
      FUN_05b7b660(param_1,lVar12,param_4,0);
      goto LAB_05b7bfc4;
    }
    if (param_4 != 0) goto LAB_05b7c100;
    iVar5 = FUN_05b7b4bc(param_1,lVar12);
    if (iVar5 == -1) {
      uVar8 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<IXRInteractable,_IXRPokeFilter>_get_Item__
                                );
      uVar8 = FUN_05bbf93c(uVar8,0);
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar9 = thunk_FUN_02dd3144();
      FUN_05452924(uVar9,uVar8,0);
      uVar8 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<IXRInteractable,_RaycastHit>_TryGetValue__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar9,uVar8);
    }
  }
  else {
    uVar6 = thunk_FUN_0536b75c(param_3,*(undefined8 *)OVR_OpenVR_IVROverlay__DestroyOverlay_TypeInfo
                               ,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = thunk_FUN_0536b75c(param_3,*(undefined8 *)
                                          Unity_Services_Qos_Http_HttpClientResponse_TypeInfo,0);
      if ((uVar6 & 1) != 0) {
        uVar11 = 1;
        goto LAB_05b7bfc0;
      }
    }
    else {
      uVar11 = 2;
LAB_05b7bfc0:
      *(undefined4 *)(param_1 + 0x70) = uVar11;
    }
LAB_05b7bfc4:
    if (lVar12 == 0) goto LAB_05b7c008;
  }
LAB_05b7bfc8:
  if (*(int *)(lVar12 + 0x10) != 0) {
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    (**(code **)(*plVar7 + 0x238))(plVar7,lVar12,*(undefined8 *)(*plVar7 + 0x240));
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    (**(code **)(*plVar7 + 0x208))(plVar7,0x3a,*(undefined8 *)(*plVar7 + 0x210));
  }
LAB_05b7c008:
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05b76cb8(*(long *)(param_1 + 0x20),*(int *)(param_1 + 0x70) != 0);
  plVar7 = *(long **)(param_1 + 0x18);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(*plVar7 + 0x238))(plVar7,param_3,*(undefined8 *)(*plVar7 + 0x240));
  plVar7 = *(long **)(param_1 + 0x18);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(*plVar7 + 0x208))(plVar7,0x3d,*(undefined8 *)(*plVar7 + 0x210));
  sVar1 = *(short *)(param_1 + 0x68);
  sVar10 = *(short *)(param_1 + 0x6a);
  if (*(short *)(param_1 + 0x6a) != sVar1) {
    *(short *)(param_1 + 0x6a) = sVar1;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(short *)(*(long *)(param_1 + 0x20) + 0x1a) = sVar1;
    sVar10 = sVar1;
  }
  plVar7 = *(long **)(param_1 + 0x18);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860(0,sVar10);
  }
  (**(code **)(*plVar7 + 0x208))(plVar7,sVar10,*(undefined8 *)(*plVar7 + 0x210));
  return;
}


