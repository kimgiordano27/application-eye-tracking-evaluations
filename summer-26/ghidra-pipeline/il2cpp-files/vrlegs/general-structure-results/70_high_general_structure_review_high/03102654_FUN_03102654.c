/*
FUNCTION_NAME: FUN_03102654
ENTRY_POINT: 03102654
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_03102654(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  long *local_28;
  
  if ((DAT_0412ba41 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_UIElements_EventBase<TooltipEvent>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<FocusOutEvent>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd73c8);
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<string,_List<SVGDocument_PostponedClip>>_TypeInfo
                );
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<string,_List<SVGDocument_PostponedStopData>>_TypeInfo
                );
    DAT_0412ba41 = 1;
  }
  local_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_0219f8b8(*(long *)(param_1 + 0x18),param_2,&local_28,
                         *(undefined8 *)UnityEngine_UIElements_EventCallback<FocusOutEvent>_TypeInfo
                        );
    if ((uVar1 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x18);
      plVar2 = (long *)thunk_FUN_01a89e68(*(undefined8 *)
                                           System_Collections_Generic_Dictionary<string,_List<SVGDocument_PostponedStopData>>_TypeInfo
                                         );
      Animancer_AnimancerState__OnSetIsPlaying
                (plVar2,*(undefined8 *)
                         System_Collections_Generic_Dictionary<string,_List<SVGDocument_PostponedClip>>_TypeInfo
                );
      local_28 = plVar2;
      if (lVar5 == 0) goto LAB_031027b0;
      FUN_0219b9a4(lVar5,param_2,plVar2,
                   *(undefined8 *)UnityEngine_UIElements_EventBase<TooltipEvent>_TypeInfo);
    }
    plVar2 = local_28;
    if (local_28 != (long *)0x0) {
      lVar5 = *local_28;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_03cd73c8) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar4 + 2) * 0x10 + 0x138);
            goto LAB_03102790;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec(local_28,*(long *)PTR_DAT_03cd73c8,2);
LAB_03102790:
      (*(code *)*puVar3)(plVar2,param_3,puVar3[1]);
      return;
    }
  }
LAB_031027b0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


