/*
FUNCTION_NAME: FUN_02505cb8
ENTRY_POINT: 02505cb8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02505cb8(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar2 = Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_037828f8 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_AtlasAllocator_<>c_<_ctor>b__6_0__);
    thunk_FUN_00d48444(StringLiteral_12169);
    thunk_FUN_00d48444(Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__);
    thunk_FUN_00d48444(UnityEngine_Timeline_Extrapolation_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_9099);
    DAT_037828f8 = 1;
  }
  plVar6 = (long *)thunk_FUN_00d93c64(param_1,0);
  uVar11 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  uVar11 = FUN_01780344(uVar11,0);
  if (plVar6 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 0x218))(plVar6,uVar11,1,*(undefined8 *)(*plVar6 + 0x220));
    puVar5 = StringLiteral_12169;
    puVar4 = Method_UnityEngine_Rendering_AtlasAllocator_<>c_<_ctor>b__6_0__;
    puVar2 = UnityEngine_Timeline_Extrapolation_TypeInfo;
    if (lVar7 != 0) {
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar12 = 0;
        uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar6 = *(long **)(lVar7 + 0x20 + uVar12 * 8);
          if (plVar6 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar2 + 300);
            if ((bVar1 <= *(byte *)(*plVar6 + 300)) &&
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
              uVar11 = *(undefined8 *)puVar4;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar8 = (long *)FUN_01780344(uVar11,0);
              if (plVar8 == (long *)0x0) goto LAB_02505f80;
              uVar10 = (**(code **)(*plVar8 + 0x2c8))
                                 (plVar8,plVar6[2],*(undefined8 *)(*plVar8 + 0x2d0));
              if ((uVar10 & 1) != 0) {
                uVar11 = *(undefined8 *)puVar5;
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar8 = (long *)FUN_01780344(uVar11,0);
                if (plVar8 == (long *)0x0) goto LAB_02505f80;
                uVar10 = (**(code **)(*plVar8 + 0x2c8))
                                   (plVar8,plVar6[2],*(undefined8 *)(*plVar8 + 0x2d0));
                if ((uVar10 & 1) != 0) {
                  lVar7 = plVar6[2];
                  goto LAB_02505ea0;
                }
              }
            }
          }
          uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      lVar7 = 0;
LAB_02505ea0:
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_01789ac0(lVar7,0,0);
      puVar2 = StringLiteral_9099;
      puVar3 = StringLiteral_302;
      if ((uVar12 & 1) == 0) {
        uVar11 = FUN_02506a54(param_1,lVar7);
        FUN_024ff270(param_1,uVar11);
      }
      else {
        plVar6 = (long *)thunk_FUN_00d93c64(param_1,0);
        uVar11 = *(undefined8 *)puVar2;
        if (plVar6 == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        uVar11 = FUN_015f5b28(uVar11,uVar9,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        FUN_02661754(uVar11,0);
        uVar11 = 0;
      }
      return uVar11;
    }
  }
LAB_02505f80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


