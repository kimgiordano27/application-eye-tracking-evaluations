/*
FUNCTION_NAME: FUN_07e0ba58
ENTRY_POINT: 07e0ba58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_07e0ba58(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0899a40f & 1) == 0) {
    FUN_03a8a718(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_03a8a718(PTR_DAT_08493d98);
    DAT_0899a40f = 1;
  }
  if (*(long *)(param_1 + 0x1d0) != *(long *)(param_2 + 0x38)) {
    uVar2 = FUN_07f812b0(param_1 + 0x198,param_2,0);
    FUN_07f6c4c8(param_1 + 0x198,param_2,0);
    memcpy(&local_80,(void *)(param_1 + 0x198),0x50);
    FUN_07e9fd6c(param_1 + 0x168,&local_80,0);
    puVar1 = PTR_DAT_08493d98;
    lVar8 = *(long *)(param_1 + 0x2a0);
    if (lVar8 != 0) {
      lVar3 = *(long *)PTR_DAT_08493d98;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar3 = *(long *)puVar1;
      }
      lVar8 = FUN_07f5c490(lVar8,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 8),0);
      plVar4 = *(long **)(param_1 + 0x2a0);
      if (lVar8 == param_1) {
        if (plVar4 == (long *)0x0) {
LAB_07e0bc20:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(*plVar4 + 0x3a0));
        FUN_07f6d914(&local_98,param_1 + 0x198,0);
        if (plVar4 == (long *)0x0) goto LAB_07e0bc20;
        lVar8 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07e0bbc8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0)
        ;
LAB_07e0bbc8:
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        (*(code *)*puVar5)(plVar4,&local_80,puVar5[1]);
        plVar4 = *(long **)(param_1 + 0x2a0);
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x358))(plVar4,param_1,uVar2,*(undefined8 *)(*plVar4 + 0x360));
      }
    }
  }
  return;
}


