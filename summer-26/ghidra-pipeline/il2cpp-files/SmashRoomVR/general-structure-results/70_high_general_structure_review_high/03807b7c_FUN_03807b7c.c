/*
FUNCTION_NAME: FUN_03807b7c
ENTRY_POINT: 03807b7c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_16;telemetry_or_network_hits_6
*/


void FUN_03807b7c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  puVar2 = PTR_DAT_03da5668;
  if ((DAT_03ff834a & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da5668);
    thunk_FUN_01ad9084(PTR_DAT_03da5670);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da5638);
    thunk_FUN_01ad9084(PTR_DAT_03da5650);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_684312AFB7719E57993D2826FFBAF7EA965614F20F91D999FB19B01E21AA62E6
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass14_0_<AddKeyword>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da5678);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass15_0_<RemoveKeyword>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da5680);
    thunk_FUN_01ad9084(PTR_DAT_03da5688);
    thunk_FUN_01ad9084(PTR_DAT_03da5690);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<ProcessStringResponse>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<ProcessStringResponse>b__1__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da5698);
    thunk_FUN_01ad9084(PTR_DAT_03da56a0);
    thunk_FUN_01ad9084(PTR_DAT_03da56a8);
    thunk_FUN_01ad9084(PTR_DAT_03da56b0);
    thunk_FUN_01ad9084(PTR_DAT_03da56b8);
    thunk_FUN_01ad9084(PTR_DAT_03da56c0);
    thunk_FUN_01ad9084(PTR_DAT_03da56c8);
    DAT_03ff834a = 1;
  }
  puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  lVar5 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
  plVar10 = param_1 + 8;
  *plVar10 = lVar5;
  thunk_FUN_01b4f09c(plVar10,lVar5);
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) {
LAB_03807e00:
    puVar3 = PTR_DAT_03da56c8;
    puVar2 = PTR_DAT_03da56b8;
    uVar7 = FUN_0391c2b8(param_1,0);
    uVar7 = FUN_02ede300(*(undefined8 *)puVar2,uVar7,0);
    uVar7 = FUN_02edd6e8(uVar7,*(undefined8 *)puVar3,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar5);
    }
    FUN_038f3474(uVar7,param_1,0);
  }
  else {
    lVar5 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
    goto LAB_03807e00;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(plVar10,0,0);
    puVar2 = PTR_DAT_03da5638;
    if ((uVar6 & 1) == 0) goto LAB_03807e00;
    lVar11 = param_1[8];
    lVar5 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)PTR_DAT_03da5638);
    plVar12 = param_1 + 9;
    *plVar12 = lVar5;
    uVar7 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)puVar2);
    thunk_FUN_01b4f09c(plVar12,uVar7);
    puVar3 = PTR_DAT_03da5650;
    lVar11 = param_1[8];
    lVar5 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)PTR_DAT_03da5650);
    plVar10 = param_1 + 10;
    *plVar10 = lVar5;
    uVar7 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)puVar3);
    thunk_FUN_01b4f09c(plVar10,uVar7);
    plVar13 = (long *)*plVar12;
    if (plVar13 != (long *)0x0) {
      lVar5 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0380806c;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar2,0);
LAB_0380806c:
      lVar5 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      uVar7 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03da5678);
      FUN_02200024(uVar7,param_1,*(undefined8 *)PTR_DAT_03da5698,0);
      if (lVar5 == 0) goto LAB_038082e4;
      FUN_02203a6c(lVar5,uVar7,*(undefined8 *)PTR_DAT_03da5690);
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_038082e4;
      lVar5 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto FUN_03808120;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar2,1);
FUN_03808120:
      lVar5 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      uVar7 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03da5680);
      FUN_02200024(uVar7,param_1,*(undefined8 *)PTR_DAT_03da56a8,0);
      if (lVar5 == 0) goto LAB_038082e4;
      FUN_02203a6c(lVar5,uVar7,*(undefined8 *)PTR_DAT_03da5688);
    }
    plVar12 = (long *)*plVar10;
    if (plVar12 != (long *)0x0) {
      lVar5 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_038081d0;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar3,0);
LAB_038081d0:
      lVar5 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass14_0_<AddKeyword>b__0__
                                );
      FUN_02200024(uVar7,param_1,*(undefined8 *)PTR_DAT_03da56a0,0);
      if (lVar5 == 0) goto LAB_038082e4;
      FUN_02203a6c(lVar5,uVar7,
                   *(undefined8 *)
                    Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<ProcessStringResponse>b__0__
                  );
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_038082e4;
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_03808284;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar3,1);
LAB_03808284:
      lVar5 = (*(code *)*puVar8)(plVar10,puVar8[1]);
      uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass15_0_<RemoveKeyword>b__0__
                                );
      FUN_02200024(uVar7,param_1,*(undefined8 *)PTR_DAT_03da56b0,0);
      if (lVar5 == 0) goto LAB_038082e4;
      FUN_02203a6c(lVar5,uVar7,
                   *(undefined8 *)
                    Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<ProcessStringResponse>b__1__
                  );
    }
  }
  lVar5 = param_1[7];
  if (lVar5 == 0) {
LAB_038082e4:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
    FUN_01e8b368(param_1,lVar5,*(undefined8 *)PTR_DAT_03da5670);
    if (param_1[7] == 0) goto LAB_038082e4;
    if (*(int *)(param_1[7] + 0x18) == 0) {
      uVar7 = FUN_0391c2b8(param_1,0);
      uVar7 = FUN_02ede300(*(undefined8 *)PTR_DAT_03da56c0,uVar7,0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar5);
      }
      FUN_038f3474(uVar7,param_1,0);
    }
  }
  puVar2 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_0__;
  bVar4 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  *(byte *)(param_1 + 0xc) = bVar4 & 1;
  lVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_038fd9cc(lVar5,0);
  param_1[0xb] = lVar5;
  thunk_FUN_01b4f09c(param_1 + 0xb,lVar5);
  if (((char)param_1[6] != '\0') && (plVar10 = (long *)param_1[9], plVar10 != (long *)0x0)) {
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03da5638) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_03807f98;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)PTR_DAT_03da5638,5);
LAB_03807f98:
    uVar6 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    if ((uVar6 & 1) != 0) goto LAB_03808020;
  }
  if ((*(char *)((long)param_1 + 0x31) != '\0') &&
     (plVar10 = (long *)param_1[10], plVar10 != (long *)0x0)) {
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03da5650) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_03808010;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)PTR_DAT_03da5650,6);
LAB_03808010:
    uVar6 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    if ((uVar6 & 1) != 0) {
LAB_03808020:
                    /* WARNING: Could not recover jumptable at 0x03808044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x178))(param_1,1,*(undefined8 *)(*param_1 + 0x180));
      return;
    }
  }
  return;
}


