/*
FUNCTION_NAME: FUN_02e4e640
ENTRY_POINT: 02e4e640
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void FUN_02e4e640(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  if ((DAT_03ff0311 & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<CopyFrom>b__171_0__);
    thunk_FUN_01ad9084(StringLiteral_5060);
    thunk_FUN_01ad9084(StringLiteral_5061);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2184);
    thunk_FUN_01ad9084(StringLiteral_4934);
    DAT_03ff0311 = 1;
  }
  if (*(int *)(param_1 + 0x60) != param_2) {
    *(int *)(param_1 + 0x60) = param_2;
    uVar3 = FUN_02e4dd64(param_1);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_02e4e7e0;
    plVar4 = (long *)FUN_01e8ac5c(*(long *)(param_1 + 0x20),
                                  *(undefined8 *)
                                   Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<CopyFrom>b__171_0__
                                 );
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar5 = FUN_0391f968(plVar4,0,0);
    if ((uVar5 & 1) != 0) {
      uVar5 = FUN_02ee6cf0(uVar3,0);
      if ((uVar5 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_02e4e7e0;
        lVar7 = *plVar4;
        uVar6 = uVar3;
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_02e4e7e0;
        lVar7 = *plVar4;
        uVar6 = *(undefined8 *)(param_1 + 0x30);
      }
      (**(code **)(lVar7 + 0x5e8))(plVar4,uVar6,*(undefined8 *)(lVar7 + 0x5f0));
    }
    puVar2 = StringLiteral_5061;
    lVar7 = *(long *)(param_1 + 0x80);
    if ((lVar7 != 0) && (iVar1 = *(int *)(lVar7 + 0x18), 0 < iVar1)) {
      iVar8 = 0;
      while (lVar7 = FUN_02b59714(lVar7,iVar8,*(undefined8 *)puVar2), lVar7 != 0) {
        FUN_03b1de40(lVar7,iVar8 == *(int *)(param_1 + 0x60),0);
        if ((*(long *)(param_1 + 0x80) == 0) ||
           (lVar7 = FUN_02b59714(*(long *)(param_1 + 0x80),iVar8,*(undefined8 *)puVar2), lVar7 == 0)
           ) break;
        FUN_03b1771c(lVar7,iVar8 != *(int *)(param_1 + 0x60),0);
        if (iVar1 + -1 == iVar8) goto LAB_02e4e7e4;
        lVar7 = *(long *)(param_1 + 0x80);
        iVar8 = iVar8 + 1;
        if (lVar7 == 0) break;
      }
LAB_02e4e7e0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
LAB_02e4e7e4:
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_02203ccc(*(long *)(param_1 + 0x70),uVar3,*(undefined8 *)StringLiteral_2184);
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_0220330c(*(long *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x60),
                   *(undefined8 *)StringLiteral_4934);
    }
    if (*(char *)(param_1 + 0x78) != '\0') {
      FUN_02e4df68(param_1,0);
      return;
    }
  }
  return;
}


