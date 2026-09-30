/*
FUNCTION_NAME: FUN_07e42418
ENTRY_POINT: 07e42418
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_07e42418(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0899a710 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08493d50);
    FUN_03a8a718(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_MouseUpEvent_<>c_TypeInfo);
    DAT_0899a710 = 1;
  }
  if ((param_4 == 0) || (*(long *)(param_3 + 0x10) == 0)) goto LAB_07e426cc;
  fVar11 = *(float *)(param_4 + 0xa0);
  fVar12 = *(float *)(param_4 + 0xa4);
  uVar10 = *(undefined4 *)(param_4 + 0xa8);
  fVar9 = (float)FUN_07e06150(*(long *)(param_3 + 0x10),0);
  if (*(long *)(param_3 + 0x10) == 0) goto LAB_07e426cc;
  FUN_07e06150(*(long *)(param_3 + 0x10),0);
  if ((*(long *)(param_3 + 0x10) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_3 + 0x10) + 0x2e8), lVar3 == 0)) goto LAB_07e426cc;
  uVar2 = FUN_07d93c18(fVar11 - fVar9,fVar12 - param_2,uVar10,lVar3,1,0);
  if (*(long *)(param_3 + 0x10) == 0) goto LAB_07e426cc;
  plVar4 = (long *)FUN_07e05018(*(long *)(param_3 + 0x10),0);
  if (plVar4 == (long *)0x0) {
LAB_07e42514:
    plVar4 = (long *)0x0;
  }
  else {
    lVar3 = *plVar4;
    bVar1 = *(byte *)(*(long *)PTR_DAT_08493d50 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08493d50))
    goto LAB_07e42514;
    plVar4 = (long *)(**(code **)(lVar3 + 0x398))(plVar4,*(undefined8 *)(lVar3 + 0x3a0));
  }
  if (-1 < (int)uVar2) {
    lVar3 = FUN_07e41d60(param_3);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x40), lVar3 == 0)) goto LAB_07e426cc;
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (*(int *)(lVar3 + (ulong)uVar2 * 0x30 + 0x20) == 0x26afb9) {
      if (*(char *)(param_3 + 0x58) != '\0') {
        return;
      }
      *(undefined1 *)(param_3 + 0x58) = 1;
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07e4269c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
LAB_07e4269c:
      local_50 = DAT_015c5128;
      uStack_58 = 0;
      local_60 = 0;
      (*(code *)*puVar5)(plVar4,&local_60,puVar5[1]);
      return;
    }
  }
  if (*(char *)(param_3 + 0x58) != '\0') {
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_3 + 0x10) == 0) {
LAB_07e426cc:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar6 = FUN_07dfdfd8(*(long *)(param_3 + 0x10),0);
      FUN_07f6d914(&local_78,uVar6,0);
      lVar3 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07e42650;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
LAB_07e42650:
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
      (*(code *)*puVar5)(plVar4,&local_60,puVar5[1]);
    }
    *(undefined1 *)(param_3 + 0x58) = 0;
  }
  return;
}


