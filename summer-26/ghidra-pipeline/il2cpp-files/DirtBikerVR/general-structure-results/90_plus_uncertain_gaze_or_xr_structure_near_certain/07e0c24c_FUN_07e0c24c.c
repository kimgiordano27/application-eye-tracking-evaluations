/*
FUNCTION_NAME: FUN_07e0c24c
ENTRY_POINT: 07e0c24c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void FUN_07e0c24c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  int *piVar10;
  long lVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_0899a41a & 1) == 0) {
    FUN_03a8a718(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_DisplayProperty_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexBasisProperty_TypeInfo);
    FUN_03a8a718(
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexDirectionProperty_TypeInfo
                );
    FUN_03a8a718(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexGrowProperty_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexShrinkProperty_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexWrapProperty_TypeInfo);
    FUN_03a8a718(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_03a8a718(PTR_DAT_08493d98);
    DAT_0899a41a = 1;
  }
  puVar2 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_DisplayProperty_TypeInfo;
  puVar1 = PTR_DAT_08493d98;
  if (*(long *)(param_1 + 0x2a0) == 0) {
    return;
  }
  if (*(int *)(*(long *)
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexGrowProperty_TypeInfo +
              0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar3 = FUN_0645fe94(*(undefined8 *)puVar2);
  lVar4 = *(long *)puVar1;
  lVar11 = *(long *)(param_1 + 0x2a0);
  if (lVar3 == param_2) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (lVar11 == 0) {
LAB_07e0c690:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = FUN_07f5c490(lVar11,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
    plVar5 = *(long **)(param_1 + 0x2a0);
    if (lVar3 != 0) {
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0));
        FUN_07f6d914(&local_68,lVar3 + 0x198,0);
        if (plVar5 != (long *)0x0) {
          lVar3 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
                puVar6 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_07e0c574;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_03ac43c4(plVar5,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
LAB_07e0c574:
          pcVar9 = (code *)*puVar6;
          uStack_48 = uStack_60;
          local_50 = local_68;
          local_40 = local_58;
          uVar7 = puVar6[1];
LAB_07e0c594:
          (*pcVar9)(plVar5,&local_50,uVar7);
          return;
        }
      }
      goto LAB_07e0c690;
    }
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0)),
       plVar5 == (long *)0x0)) goto LAB_07e0c690;
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    lVar3 = *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo;
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar3) goto LAB_07e0c5ac;
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
  }
  else {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar4 = *(long *)puVar1;
    }
    lVar3 = FUN_07f609d0(lVar11,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 8),0);
    if ((lVar3 != 0) && (lVar3 != param_1)) {
      return;
    }
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexShrinkProperty_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar4 = FUN_0645fe94(*(undefined8 *)
                          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexBasisProperty_TypeInfo
                        );
    if (lVar4 == param_2) {
      lVar4 = *(long *)(param_1 + 0x2a0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (lVar4 == 0) goto LAB_07e0c690;
      lVar4 = FUN_07f5c490(lVar4,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
      if (lVar4 == param_1) {
        plVar5 = *(long **)(param_1 + 0x2a0);
        if (plVar5 != (long *)0x0) {
          plVar5 = (long *)(**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0));
          FUN_07f6d914(&local_68,param_1 + 0x198,0);
          if (plVar5 != (long *)0x0) {
            lVar3 = *plVar5;
            uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_07e0c66c;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_03ac43c4(plVar5,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
LAB_07e0c66c:
            uStack_48 = uStack_60;
            local_50 = local_68;
            local_40 = local_58;
            pcVar9 = (code *)*puVar6;
            uVar7 = puVar6[1];
            goto LAB_07e0c594;
          }
        }
        goto LAB_07e0c690;
      }
    }
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexWrapProperty_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar4 = FUN_0645fe94(*(undefined8 *)
                          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexDirectionProperty_TypeInfo
                        );
    if ((lVar3 != 0) || (lVar4 != param_2)) {
      return;
    }
    plVar5 = *(long **)(param_1 + 0x2a0);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0)),
       plVar5 == (long *)0x0)) goto LAB_07e0c690;
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    lVar3 = *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo;
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar3) goto LAB_07e0c5ac;
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
  }
  puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,lVar3,1);
LAB_07e0c5bc:
                    /* WARNING: Could not recover jumptable at 0x07e0c5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
LAB_07e0c5ac:
  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
  goto LAB_07e0c5bc;
}


