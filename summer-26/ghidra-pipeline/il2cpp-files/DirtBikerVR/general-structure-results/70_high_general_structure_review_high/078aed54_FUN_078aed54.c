/*
FUNCTION_NAME: FUN_078aed54
ENTRY_POINT: 078aed54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_078aed54(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_08987909 & 1) == 0) {
    FUN_03a8a718(System_Collections_Generic_List<PackageInitializationInfo>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<Panel>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<object>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<NetworkClient>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<PanelRaycaster>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<PanelSettings>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ParameterExpression>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ParticleSystem>_TypeInfo);
    DAT_08987909 = 1;
  }
  puVar2 = System_Collections_Generic_List<NetworkClient>_TypeInfo;
  lVar9 = *(long *)(param_1 + 8);
  local_38 = 0;
  local_48 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_078aef7c;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar9 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_uri_get
                      (lVar9,*(undefined8 *)(*(long *)(lVar9 + 0x48) + 0x28));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_38 = FUN_067c4bec(lVar4,0);
    uVar5 = FUN_0666e8e0(&local_38,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = local_38;
      thunk_FUN_03afed3c(param_1 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ffdfa0(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)System_Collections_Generic_List<Panel>_TypeInfo);
      return;
    }
  }
  FUN_0666e9a8(&local_38,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(lVar9 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar10 = *(long **)(lVar9 + 0x70);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *plVar10;
  uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0x48) + 0x28);
  uVar11 = *(undefined8 *)(lVar9 + 0x58);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 6) * 0x10 + 0x138);
        goto LAB_078aef38;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_03ac43c4(plVar10,*(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo,6)
  ;
LAB_078aef38:
  lVar4 = (*(code *)*puVar6)(plVar10,uVar7,uVar11,puVar6[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  local_48 = FUN_058b71ec(lVar4,*(undefined8 *)
                                 System_Collections_Generic_List<ParticleSystem>_TypeInfo);
  uVar5 = FUN_0587c6c4(&local_48,
                       *(undefined8 *)System_Collections_Generic_List<ParameterExpression>_TypeInfo)
  ;
  if ((uVar5 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0xc) = local_48;
    thunk_FUN_03afed3c(param_1 + 0xc,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    System_Array__InternalArray__ICollection_CopyTo<Dictionary_Entry<object,_PropertyDescriptor>>
              (param_1 + 2,&local_48,param_1,
               *(undefined8 *)System_Collections_Generic_List<PackageInitializationInfo>_TypeInfo);
    return;
  }
LAB_078aef7c:
  uVar7 = FUN_0587c704(&local_48,
                       *(undefined8 *)System_Collections_Generic_List<PanelSettings>_TypeInfo);
  if (lVar9 != 0) {
    FUN_078ad680(lVar9,6);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (lVar9 != 0) {
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),uVar7,*(undefined8 *)(lVar9 + 0x28))
      ;
    }
    puVar3 = System_Collections_Generic_List<object>_TypeInfo;
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(param_1 + 2,uVar7,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


