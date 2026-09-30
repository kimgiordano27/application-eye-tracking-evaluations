/*
FUNCTION_NAME: PXR_PermissionRequest$$RequestUserPermissionMR
ENTRY_POINT: 073c5ccc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_4
*/


void PXR_PermissionRequest__RequestUserPermissionMR(long *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x21;
  long in_stack_00000018;
  
  puVar2 = UnityEngine_Rendering_Universal_Internal_NormalReconstruction_TypeInfo;
  if ((*(byte *)(unaff_x21 + 0x699) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(Unity_Netcode_NotServerRpcTarget_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_Universal_Internal_NormalReconstruction_TypeInfo);
    FUN_0373b518(System_NotSupportedException_TypeInfo);
    FUN_0373b518(OVR_OpenVR_NotificationBitmap_t_TypeInfo);
    FUN_0373b518(UnityEngine_ProBuilder_Normals_TypeInfo);
    FUN_0373b518(Unity_Netcode_NotAuthorityRpcTarget_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x699) = 1;
  }
  in_stack_00000018 = 0;
  plVar3 = (long *)thunk_FUN_037787d0(param_2,*(undefined8 *)puVar2);
  lVar6 = 0;
  if (plVar3 == (long *)0x0) {
LAB_073c5de0:
    bVar1 = true;
  }
  else {
    lVar7 = *plVar3;
    lVar6 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_073c5da8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar3,lVar6,0);
LAB_073c5da8:
    lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar6 == 0) goto LAB_073c5de0;
    plVar3 = (long *)param_1[0x14];
    if (plVar3 == (long *)0x0) goto LAB_073c5f20;
    uVar8 = (**(code **)(*plVar3 + 0x178))(plVar3,lVar6,*(undefined8 *)(*plVar3 + 0x180));
    if ((uVar8 & 1) == 0) {
      uVar5 = FUN_060b76a8(*(undefined8 *)UnityEngine_ProBuilder_Normals_TypeInfo,param_2,0);
      uVar5 = System_Convert__ToInt32
                        (uVar5,*(undefined8 *)Unity_Netcode_NotAuthorityRpcTarget_TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d86440);
      }
      FUN_0755df88(uVar5,param_1,0);
      return;
    }
    bVar1 = false;
  }
  plVar3 = (long *)param_1[0x13];
  if (plVar3 == (long *)0x0) {
LAB_073c5f20:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar8 = (**(code **)(*plVar3 + 0x198))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x1a0));
  if ((uVar8 & 1) != 0) {
    if (!bVar1) {
      if (param_1[0x1b] == 0) goto LAB_073c5f20;
      FUN_045ba050(param_1[0x1b],param_2,*(undefined8 *)Unity_Netcode_NotServerRpcTarget_TypeInfo);
    }
    if (param_1[0x27] == 0) goto LAB_073c5f20;
    FUN_0480eb20(param_1[0x27],&stack0x00000018,*(undefined8 *)System_NotSupportedException_TypeInfo
                );
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(long *)(in_stack_00000018 + 0x10) = (long)param_1;
    thunk_FUN_037aeb94((long *)(in_stack_00000018 + 0x10),param_1);
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(undefined8 *)(in_stack_00000018 + 0x18) = param_2;
    thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x18),param_2);
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(long *)(in_stack_00000018 + 0x20) = lVar6;
    thunk_FUN_037aeb94((long *)(in_stack_00000018 + 0x20),lVar6);
    (**(code **)(*param_1 + 0x2a8))(param_1,in_stack_00000018,*(undefined8 *)(*param_1 + 0x2b0));
    FUN_04fafd58();
  }
  return;
}


