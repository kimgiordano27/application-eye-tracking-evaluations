/*
FUNCTION_NAME: FUN_056d0714
ENTRY_POINT: 056d0714
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_056d0714(long param_1,ulong param_2,undefined8 param_3,long *param_4,undefined8 *param_5,
                 long *param_6,long *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = PTR_DAT_0664e700;
  if ((DAT_06a54afa & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06650ed0);
    FUN_02d4dc40(PTR_DAT_06646288);
    FUN_02d4dc40(PTR_DAT_06648138);
    FUN_02d4dc40(PTR_DAT_0664fdf0);
    FUN_02d4dc40(PTR_DAT_06646780);
    FUN_02d4dc40(PTR_DAT_0664e700);
    FUN_02d4dc40(PTR_DAT_06646310);
    FUN_02d4dc40(PTR_DAT_066531f8);
    FUN_02d4dc40(PlayFab_ProfilesModels_GetTitlePlayersFromMasterPlayerAccountIdsRequest_TypeInfo);
    FUN_02d4dc40(Method_Unity_Properties_ContainerPropertyBag<FontDefinition>__ctor__);
    FUN_02d4dc40(Method_Unity_Properties_ContainerPropertyBag<Length>_AddProperty<LengthUnit>__);
    FUN_02d4dc40(Method_Unity_Properties_ContainerPropertyBag<Length>_AddProperty<float>__);
    FUN_02d4dc40(PlayFab_ClientModels_GetTitleDataRequest_TypeInfo);
    FUN_02d4dc40(Method_Unity_Properties_ContainerPropertyBag<Length>__ctor__);
    FUN_02d4dc40(PTR_DAT_0664e0a0);
    FUN_02d4dc40(Method_Unity_Properties_ContainerPropertyBag<Rect>_AddProperty<float>__);
    FUN_02d4dc40(Method_Unity_Properties_ContainerPropertyBag<Rect>__ctor__);
    FUN_02d4dc40(Method_Unity_Properties_ContainerPropertyBag<RectInt>_AddProperty<int>__);
    FUN_02d4dc40(Method_Unity_Properties_ContainerPropertyBag<RectInt>__ctor__);
    FUN_02d4dc40(Method_Unity_Properties_ContainerPropertyBag<Rotate>_AddProperty<Angle>__);
    DAT_06a54afa = 1;
  }
  local_70 = 0;
  local_68 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar4 = FUN_04fc9fb4(param_3,0);
  lVar5 = FUN_056cd6b8(param_1);
  puVar3 = PlayFab_ClientModels_GetTitleDataRequest_TypeInfo;
  if (lVar5 == 0) goto LAB_056d0e18;
  lVar6 = FUN_058130c8(lVar5,*(undefined8 *)PlayFab_ClientModels_GetTitleDataRequest_TypeInfo,0);
  if (lVar6 == 0) {
    lVar6 = *(long *)Method_Unity_Properties_ContainerPropertyBag<Length>__ctor__;
  }
  else {
    uVar7 = FUN_04e7ec40(lVar6,*(undefined8 *)
                                Method_Unity_Properties_ContainerPropertyBag<Rect>__ctor__,5,0);
    if ((uVar7 & 1) != 0) {
      thunk_FUN_02db45e8(PTR_DAT_0664e5a0);
      uVar4 = thunk_FUN_02d8a638();
      uVar8 = thunk_FUN_02db45e8(
                                Method_Unity_Properties_ContainerPropertyBag<Rotate>_AddProperty<Vector3>__
                                );
      FUN_056d0e20(uVar4,uVar8);
      uVar8 = thunk_FUN_02db45e8(Method_Unity_Properties_ContainerPropertyBag<Rotate>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar4,uVar8);
    }
  }
  puVar2 = PlayFab_ProfilesModels_GetTitlePlayersFromMasterPlayerAccountIdsRequest_TypeInfo;
  lVar9 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664fdf0);
  FUN_04fd5fac(lVar9,uVar4,3,1,0);
  *param_4 = lVar9;
  thunk_FUN_02dc1ef0(param_4,lVar9);
  uVar8 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
  uVar7 = FUN_04e7e8d0(*(undefined8 *)(param_1 + 0x60),uVar8,4,0);
  puVar2 = PTR_DAT_06650ed0;
  if ((uVar7 & 1) == 0) {
    FUN_058130d8(lVar5,*(undefined8 *)puVar3,lVar6,0);
    *param_6 = 0;
    thunk_FUN_02dc1ef0(param_6,0);
    *param_7 = 0;
    thunk_FUN_02dc1ef0(param_7,0);
    plVar11 = (long *)*param_4;
    if (plVar11 == (long *)0x0) goto LAB_056d0e18;
    uVar7 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    if ((uVar7 & 1) == 0) goto LAB_056d0dd0;
    plVar11 = (long *)*param_4;
    if (plVar11 == (long *)0x0) goto LAB_056d0e18;
    uVar4 = (**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
    param_4 = (long *)*param_4;
    *(undefined8 *)(param_1 + 0x68) = uVar4;
  }
  else {
    if ((param_2 & 1) == 0) {
      lVar6 = *(long *)PTR_DAT_06650ed0;
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_02d87268(lVar6);
        lVar5 = *(long *)(lVar6 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d8720c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d8720c();
      }
      *param_6 = **(long **)(lVar5 + 0xb8);
      thunk_FUN_02dc1ef0(param_6);
      lVar6 = *(long *)puVar2;
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_02d87268(lVar6);
        lVar5 = *(long *)(lVar6 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d8720c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d8720c();
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      *param_7 = lVar5;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06648138 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      local_68 = FUN_04fe3ddc(0);
      local_70 = FUN_04fe2124(&local_68,0);
      uVar8 = FUN_04f8ca50(0);
      uVar8 = FUN_05001bf0(&local_70,*(undefined8 *)PTR_DAT_066531f8,uVar8,0);
      uVar8 = FUN_04e723e0(*(undefined8 *)
                            Method_Unity_Properties_ContainerPropertyBag<RectInt>__ctor__,uVar8,0);
      uVar10 = FUN_04e723e0(*(undefined8 *)
                             Method_Unity_Properties_ContainerPropertyBag<Rect>_AddProperty<float>__
                            ,uVar8,0);
      FUN_058130d8(lVar5,*(undefined8 *)puVar3,uVar10,0);
      lVar5 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,7);
      if (lVar5 == 0) goto LAB_056d0e18;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_056d0e1c:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_0664e0a0;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar5 + 0x20));
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_056d0e1c;
      *(undefined8 *)(lVar5 + 0x28) = uVar8;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar5 + 0x28),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_056d0e1c;
      *(undefined8 *)(lVar5 + 0x30) =
           *(undefined8 *)
            Method_Unity_Properties_ContainerPropertyBag<Length>_AddProperty<LengthUnit>__;
      thunk_FUN_02dc1ef0();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar4 = FUN_04fcbd88(uVar4,0);
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_056d0e1c;
      *(undefined8 *)(lVar5 + 0x38) = uVar4;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar5 + 0x38),uVar4);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_056d0e1c;
      *(undefined8 *)(lVar5 + 0x40) =
           *(undefined8 *)Method_Unity_Properties_ContainerPropertyBag<RectInt>_AddProperty<int>__;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar5 + 0x40));
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_056d0e1c;
      *(long *)(lVar5 + 0x48) = lVar6;
      thunk_FUN_02dc1ef0((long *)(lVar5 + 0x48),lVar6);
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_056d0e1c;
      *(undefined8 *)(lVar5 + 0x50) =
           *(undefined8 *)Method_Unity_Properties_ContainerPropertyBag<FontDefinition>__ctor__;
      thunk_FUN_02dc1ef0();
      uVar4 = FUN_04e80ce4(lVar5,0);
      plVar11 = (long *)FUN_04e99054(0);
      if (plVar11 == (long *)0x0) goto LAB_056d0e18;
      lVar5 = (**(code **)(*plVar11 + 600))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x260));
      *param_6 = lVar5;
      thunk_FUN_02dc1ef0(param_6,lVar5);
      plVar11 = (long *)FUN_04e9a5a8(0);
      uVar4 = FUN_04e80678(*(undefined8 *)
                            Method_Unity_Properties_ContainerPropertyBag<Length>_AddProperty<float>__
                           ,uVar8,*(undefined8 *)
                                   Method_Unity_Properties_ContainerPropertyBag<Rotate>_AddProperty<Angle>__
                           ,0);
      if (plVar11 == (long *)0x0) goto LAB_056d0e18;
      lVar5 = (**(code **)(*plVar11 + 600))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x260));
      *param_7 = lVar5;
    }
    thunk_FUN_02dc1ef0(param_7,lVar5);
    plVar11 = (long *)*param_4;
    if (plVar11 == (long *)0x0) goto LAB_056d0e18;
    uVar7 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    if ((uVar7 & 1) == 0) {
LAB_056d0dd0:
      uVar4 = 0x2000;
      goto LAB_056d0dd8;
    }
    plVar11 = (long *)*param_4;
    if (plVar11 == (long *)0x0) goto LAB_056d0e18;
    lVar5 = (**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
    if ((*param_6 == 0) || (*param_7 == 0)) goto LAB_056d0e18;
    param_4 = (long *)*param_4;
    *(long *)(param_1 + 0x68) =
         (long)*(int *)(*param_6 + 0x18) + (long)*(int *)(*param_7 + 0x18) + lVar5;
  }
  if (param_4 == (long *)0x0) {
LAB_056d0e18:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar4 = (**(code **)(*param_4 + 0x1e8))(param_4,*(undefined8 *)(*param_4 + 0x1f0));
  if (*(int *)(*(long *)PTR_DAT_06646780 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)PTR_DAT_06646780);
  }
  uVar4 = FUN_0500412c(0x2000,uVar4,0);
LAB_056d0dd8:
  uVar4 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646288,uVar4);
  *param_5 = uVar4;
  thunk_FUN_02dc1ef0(param_5,uVar4);
  return;
}


