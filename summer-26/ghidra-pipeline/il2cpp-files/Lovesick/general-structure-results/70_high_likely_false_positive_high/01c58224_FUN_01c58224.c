/*
FUNCTION_NAME: FUN_01c58224
ENTRY_POINT: 01c58224
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x01c58550) */

long FUN_01c58224(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_48;
  char local_34 [4];
  
  puVar5 = StringLiteral_9459;
  if ((DAT_0377eb52 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_TaskAwaiter<VRequestResponse<string>>_get_IsCompleted__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<AudioStateLoader_AudioSourceSaveState>_FindIndex__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ee8c0);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<TriangulationPoint>__);
    thunk_FUN_00d48444(Method_IntroCreditSceneManager_SkipButtonUnpressed__);
    thunk_FUN_00d48444(StringLiteral_14299);
    thunk_FUN_00d48444(StringLiteral_9459);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__);
    thunk_FUN_00d48444(Method_System_Text_ASCIIEncoding_GetChars__);
    DAT_0377eb52 = 1;
  }
  local_34[0] = '\0';
  local_48 = 0;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
  puVar5 = Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_017b46ec(lVar6,0);
  *(undefined8 *)(lVar6 + 0x10) = param_1;
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar5;
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20);
  local_34[0] = '\0';
  FUN_017d75a8(uVar11,local_34,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar5;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar8 = FUN_0129eff4(lVar7,*(undefined8 *)(lVar6 + 0x10),&local_48,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<AudioStateLoader_AudioSourceSaveState>_FindIndex__
                      );
  puVar4 = Method_IntroCreditSceneManager_SkipButtonUnpressed__;
  puVar3 = Method_System_Linq_Enumerable_ToList<TriangulationPoint>__;
  puVar2 = PTR_DAT_033ee8c0;
  if ((uVar8 & 1) != 0) goto LAB_01c58510;
  plVar9 = *(long **)(lVar6 + 0x10);
  if (plVar9 == (long *)0x0) {
LAB_01c583cc:
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Text_ASCIIEncoding_GetChars__);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01c6bdb8(lVar7,lVar6,*(undefined8 *)StringLiteral_14299,0);
    local_48 = lVar7;
  }
  else {
    lVar7 = *plVar9;
    bVar1 = *(byte *)(*(long *)Method_System_Linq_Enumerable_ToList<TriangulationPoint>__ + 300);
    if ((*(byte *)(lVar7 + 300) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Linq_Enumerable_ToList<TriangulationPoint>__)) {
      bVar1 = *(byte *)(*(long *)Method_IntroCreditSceneManager_SkipButtonUnpressed__ + 300);
      if ((*(byte *)(lVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_IntroCreditSceneManager_SkipButtonUnpressed__)) goto LAB_01c583cc;
      uVar10 = (**(code **)(lVar7 + 0x1c8))(plVar9,*(undefined8 *)(lVar7 + 0x1d0));
      plVar9 = *(long **)(lVar6 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (plVar9 == (long *)0x0) {
LAB_01c58488:
        plVar9 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if (*(byte *)(*plVar9 + 300) < bVar1) goto LAB_01c58488;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
          plVar9 = (long *)0x0;
        }
      }
      local_48 = FUN_01c6c7ac(uVar10,plVar9,0);
    }
    else {
      uVar10 = (**(code **)(lVar7 + 0x1c8))(plVar9,*(undefined8 *)(lVar7 + 0x1d0));
      plVar9 = *(long **)(lVar6 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (plVar9 == (long *)0x0) {
LAB_01c58444:
        plVar9 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)puVar3 + 300);
        if (*(byte *)(*plVar9 + 300) < bVar1) goto LAB_01c58444;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
          plVar9 = (long *)0x0;
        }
      }
      local_48 = FUN_01c6c3fc(uVar10,plVar9,0);
    }
  }
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar5;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0129a054(lVar7,*(undefined8 *)(lVar6 + 0x10),local_48,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_TaskAwaiter<VRequestResponse<string>>_get_IsCompleted__
              );
LAB_01c58510:
  lVar6 = local_48;
  if (local_34[0] != '\0') {
    thunk_FUN_00d56f10(uVar11,0);
  }
  return lVar6;
}


