/*
FUNCTION_NAME: FUN_053cdcdc
ENTRY_POINT: 053cdcdc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_14
*/


byte FUN_053cdcdc(long *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long local_68;
  
  if ((DAT_066d09b4 & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_BCSStyleHandler_TypeInfo);
    FUN_02b3c81c(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    FUN_02b3c81c(OVRPlugin_Media_TypeInfo);
    FUN_02b3c81c(OVRPlugin_Hand_TypeInfo);
    FUN_02b3c81c(OVRPlugin_Mesh_TypeInfo);
    FUN_02b3c81c(OVRPlugin_MeshType_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_0_1_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_HandStatus_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_IStyleHandler_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo);
    DAT_066d09b4 = 1;
  }
  local_68 = 0;
  uVar8 = FUN_053dffbc(param_1,param_2,param_3,0);
  if ((uVar8 & 1) != 0) {
    bVar7 = 1;
    goto LAB_053cde10;
  }
  uVar8 = FUN_053dfea8(param_1,param_2,param_3,0);
  bVar7 = 0;
  if ((param_2 == (long *)0x0) || ((uVar8 & 1) == 0)) goto LAB_053cde10;
  if (*param_2 == *(long *)OVRPassthroughLayer_BCSStyleHandler_TypeInfo) {
    uVar8 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    uVar9 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    if ((uVar8 & 1) == 0) {
      if ((uVar9 & 1) == 0) {
        if (param_1[9] == 0) goto LAB_053ce0b0;
        lVar14 = *(long *)(param_1[9] + 0x50);
        lVar15 = param_2[9];
        if (lVar14 != 0) {
          if (lVar15 == 0) goto LAB_053ce0b0;
          if (*(long *)(lVar15 + 0x50) != 0) {
            uVar1 = *(undefined4 *)(lVar14 + 0x18);
            lVar15 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
            FUN_0452d05c(lVar15,uVar1,*(undefined8 *)OVRPlugin_Mesh_TypeInfo);
            lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                         OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo);
            FUN_037a5cd0(lVar14,*(undefined8 *)OVRPassthroughLayer_IStyleHandler_TypeInfo);
            puVar4 = OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo;
            puVar3 = OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo;
            lVar16 = param_1[9];
            if (lVar16 != 0) {
              iVar17 = 0;
              while (puVar6 = OVRPlugin_HandStatus_TypeInfo, puVar5 = OVRPlugin_Hand_TypeInfo,
                    lVar16 = *(long *)(lVar16 + 0x50), lVar16 != 0) {
                if (*(int *)(lVar16 + 0x18) <= iVar17) {
                  lVar16 = param_2[9];
                  if (lVar16 != 0) {
                    iVar17 = 0;
                    goto LAB_053cdf7c;
                  }
                  break;
                }
                lVar16 = FUN_037a6268(lVar16,iVar17,*(undefined8 *)puVar3);
                if (lVar16 == 0) break;
                uVar10 = FUN_053e52fc(lVar16,0);
                if (((param_1[9] == 0) || (lVar16 = *(long *)(param_1[9] + 0x50), lVar16 == 0)) ||
                   (uVar11 = FUN_037a6268(lVar16,iVar17,*(undefined8 *)puVar3), lVar15 == 0)) break;
                FUN_0452ddc0(lVar15,uVar10,uVar11,*(undefined8 *)puVar4);
                lVar16 = param_1[9];
                iVar17 = iVar17 + 1;
                if (lVar16 == 0) break;
              }
            }
            goto LAB_053ce0b0;
          }
LAB_053ce0ec:
          uVar9 = FUN_053ce140(uVar9,lVar14);
          goto LAB_053ce0f0;
        }
        if (lVar15 == 0) goto LAB_053ce0b0;
        lVar14 = *(long *)(lVar15 + 0x50);
        if (lVar14 != 0) goto LAB_053ce0ec;
        goto LAB_053ce0f4;
      }
    }
    else {
LAB_053ce0f0:
      if ((uVar9 & 1) != 0) {
LAB_053ce0f4:
        if (param_1[9] == 0) {
LAB_053ce0b0:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        plVar13 = *(long **)(param_1[9] + 0x48);
        lVar14 = param_2[9];
        if (plVar13 == (long *)0x0) {
          if (lVar14 == 0) goto LAB_053ce0b0;
          bVar7 = *(long *)(lVar14 + 0x48) == 0;
          goto LAB_053cde10;
        }
        if (lVar14 == 0) goto LAB_053ce0b0;
        if (*(long *)(lVar14 + 0x48) != 0) {
          bVar7 = (**(code **)(*plVar13 + 0x268))
                            (plVar13,*(long *)(lVar14 + 0x48),param_3,
                             *(undefined8 *)(*plVar13 + 0x270));
          goto LAB_053cde10;
        }
      }
    }
  }
LAB_053cde0c:
  bVar7 = 0;
LAB_053cde10:
  return bVar7 & 1;
LAB_053cdf7c:
  lVar16 = *(long *)(lVar16 + 0x50);
  if (lVar16 == 0) goto LAB_053ce0b0;
  if (*(int *)(lVar16 + 0x18) <= iVar17) {
    if (lVar15 != 0) {
      uVar10 = FUN_0452dbe4(lVar15,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      uVar9 = FUN_053ce140(uVar10,uVar10);
      if ((uVar9 & 1) != 0) goto LAB_053ce0ec;
      goto LAB_053cde0c;
    }
    goto LAB_053ce0b0;
  }
  lVar16 = FUN_037a6268(lVar16,iVar17,*(undefined8 *)puVar3);
  if ((lVar16 == 0) || (uVar10 = FUN_053e52fc(lVar16,0), lVar15 == 0)) goto LAB_053ce0b0;
  uVar8 = FUN_0452f928(lVar15,uVar10,&local_68,*(undefined8 *)puVar5);
  lVar16 = local_68;
  if ((uVar8 & 1) == 0) {
    if (((param_2[9] == 0) || (lVar16 = *(long *)(param_2[9] + 0x50), lVar16 == 0)) ||
       (uVar10 = FUN_037a6268(lVar16,iVar17,*(undefined8 *)puVar3), lVar14 == 0)) goto LAB_053ce0b0;
    lVar16 = *(long *)(lVar14 + 0x10);
    lVar12 = *(long *)puVar6;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_053ce0b0;
    uVar2 = *(uint *)(lVar14 + 0x18);
    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538(lVar14,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  else {
    if (((param_2[9] == 0) || (lVar12 = *(long *)(param_2[9] + 0x50), lVar12 == 0)) ||
       (uVar10 = FUN_037a6268(lVar12,iVar17,*(undefined8 *)puVar3), lVar16 == 0)) goto LAB_053ce0b0;
    uVar8 = FUN_053e5680(lVar16,uVar10,param_3,0);
    if ((uVar8 & 1) == 0) goto LAB_053cde0c;
    if (local_68 == 0) goto LAB_053ce0b0;
    uVar10 = FUN_053e52fc(local_68,0);
    FUN_0452f2dc(lVar15,uVar10,*(undefined8 *)OVRPlugin_Media_TypeInfo);
  }
  lVar16 = param_2[9];
  iVar17 = iVar17 + 1;
  if (lVar16 == 0) goto LAB_053ce0b0;
  goto LAB_053cdf7c;
}


