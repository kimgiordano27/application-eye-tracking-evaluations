/*
FUNCTION_NAME: FUN_00e8c810
ENTRY_POINT: 00e8c810
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_00e8c810(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_03774fd7 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_<>c_<BeginProfilingSampler>b__61_0__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
                    /* try { // try from 00e8c86c to 00f8c903 has its CatchHandler @ 00e8c86c
                       catch() { ... } // from try @ 00e8c86c with catch @ 00e8c86c
                       catch() { ... } // from try @ 00e8c908 with catch @ 00e8c86c */
    thunk_FUN_00d48444(StringLiteral_5707);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_GetReference__
                      );
    DAT_03774fd7 = 1;
  }
  uStack_58 = 0;
  local_50 = 0;
  local_60 = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  puVar5 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_<>c_<BeginProfilingSampler>b__61_0__
  ;
  puVar4 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_GetReference__;
  puVar3 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
  puVar2 = UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo;
  puVar1 = System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo;
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x98),&local_78,*(undefined8 *)StringLiteral_5707);
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    while (uVar7 = FUN_012b894c(&local_60,*(undefined8 *)puVar1), (uVar7 & 1) != 0) {
      lVar8 = FUN_00ac4a70(&local_60,*(undefined8 *)puVar5);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 00e8c904 to 00f8c907 has its CatchHandler @ 00e8c958 */
                    /* try { // try from 00e8c908 to 00f8c973 has its CatchHandler @ 00e8c86c */
      FUN_00efd110(0,lVar8,0,0);
    }
    FUN_012b8948(&local_60,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03774e19 == '\0') {
      thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
      DAT_03774e19 = '\x01';
    }
    lVar8 = *(long *)puVar3;
                    /* catch() { ... } // from try @ 00e8c904 with catch @ 00e8c958 */
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar3;
    }
    if (**(long **)(lVar8 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(lVar8 + 0xb8) + 0x90) = 0;
      FUN_0268ea48(*(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xb4),param_1,
                   *(undefined8 *)puVar4,0);
                    /* try { // try from 00e8c994 to 00f8ca6f has its CatchHandler @ 00e8c994
                       catch() { ... } // from try @ 00e8c994 with catch @ 00e8c994
                       catch() { ... } // from try @ 00e8ca78 with catch @ 00e8c994
                       catch() { ... } // from try @ 00e8cab8 with catch @ 00e8c994 */
      lVar8 = FUN_00ed2d08(0);
      if (lVar8 != 0) {
        FUN_00ed398c(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),
                     *(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),lVar8,1,0);
        lVar8 = FUN_00ed2d08(0);
        if (lVar8 != 0) {
          FUN_00ed3bd8(*(undefined4 *)(param_1 + 0xb4),lVar8,1,0);
          if (DAT_03774e19 == '\0') {
            thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
            DAT_03774e19 = '\x01';
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar8 = *(long *)puVar3;
          }
          if (**(long **)(lVar8 + 0xb8) != 0) {
            lVar9 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x28);
            if (DAT_03774e19 == '\0') {
              thunk_FUN_00d48444(puVar3);
              lVar8 = *(long *)puVar3;
              DAT_03774e19 = '\x01';
            }
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar8 = *(long *)puVar3;
            }
            if (((**(long **)(lVar8 + 0xb8) != 0) &&
                (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x38), lVar8 != 0)) &&
               (uVar6 = FUN_00edabf4(*(undefined8 *)(lVar8 + 0x10),0), lVar9 != 0)) {
              thunk_FUN_00eccf4c(*(undefined4 *)(param_1 + 0xb4),lVar9,0,uVar6,100,0);
              if (DAT_03774e19 == '\0') {
                thunk_FUN_00d48444(
                                  Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__
                                  );
                DAT_03774e19 = '\x01';
              }
              lVar8 = *(long *)puVar3;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar8 = *(long *)puVar3;
              }
              if (**(long **)(lVar8 + 0xb8) != 0) {
                lVar9 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x28);
                if (DAT_03774e19 == '\0') {
                  thunk_FUN_00d48444(puVar3);
                  lVar8 = *(long *)puVar3;
                  DAT_03774e19 = '\x01';
                }
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar8 = *(long *)puVar3;
                }
                if (((**(long **)(lVar8 + 0xb8) != 0) &&
                    (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x40), lVar8 != 0)) &&
                   (uVar6 = FUN_00edabf4(*(undefined8 *)(lVar8 + 0x10),0), lVar9 != 0)) {
                  thunk_FUN_00eccf4c(*(undefined4 *)(param_1 + 0xb4),lVar9,0,uVar6,100,0);
                  if (*(char *)(param_1 + 0xe0) == '\0') {
                    FUN_00fdf628(*(undefined8 *)(param_1 + 0xd8),0);
                  }
                  else {
                    FUN_00fdf628(*(undefined8 *)(param_1 + 0xd0),0);
                    *(undefined1 *)(param_1 + 0xe0) = 0;
                  }
                  if (*(long *)(param_1 + 0xb8) != 0) {
                    uVar7 = FUN_00fb7f54(*(long *)(param_1 + 0xb8),0);
                    if ((uVar7 & 1) != 0) {
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (DAT_03774e19 == '\0') {
                        thunk_FUN_00d48444(
                                          Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__
                                          );
                        DAT_03774e19 = '\x01';
                      }
                      lVar8 = *(long *)puVar3;
                      if (*(int *)(lVar8 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar8 = *(long *)puVar3;
                      }
                      if (((**(long **)(lVar8 + 0xb8) == 0) || (*(long *)(param_1 + 0xb8) == 0)) ||
                         (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0xd8), lVar8 == 0))
                      goto LAB_00e8cbe8;
                      FUN_00fbcd7c(lVar8,*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18),0,0);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00e8cbe8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


