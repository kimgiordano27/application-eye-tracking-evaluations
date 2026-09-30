/*
FUNCTION_NAME: FUN_03a44a7c
ENTRY_POINT: 03a44a7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_03a44a7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_48;
  undefined1 local_34 [4];
  
  puVar2 = StringLiteral_7262;
                    /* try { // try from 03a44a80 to 03b44a8b has its CatchHandler @ 03a44aa0 */
  if ((DAT_04838c70 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextElement_OnGenerateVisualContent__);
    thunk_FUN_01efb3a4(Method_System_Boolean_CompareTo__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__);
    thunk_FUN_01efb3a4(StringLiteral_7262);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(StringLiteral_7274);
    thunk_FUN_01efb3a4(StringLiteral_7275);
    thunk_FUN_01efb3a4(StringLiteral_7276);
    thunk_FUN_01efb3a4(StringLiteral_7277);
    DAT_04838c70 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_03a44858();
  puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  if ((uVar3 & 1) == 0) {
LAB_03a44c54:
    if ((*(byte *)(param_1 + 0x50) >> 3 & 1) != 0) {
      uVar3 = FUN_03a60570(param_1,0);
      if ((uVar3 & 1) != 0) {
        return;
      }
      lVar8 = *(long *)(param_1 + 0x40);
      thunk_FUN_01f3e6f0();
      uVar3 = FUN_035b51f0(param_2,0,0);
      puVar2 = StringLiteral_7275;
      if ((lVar8 != 0) && ((uVar3 & 1) == 0)) {
        lVar5 = *(long *)StringLiteral_7275;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar2;
        }
        lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar7 == 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar5 = *(long *)puVar2;
          }
          uVar6 = **(undefined8 **)(lVar5 + 0xb8);
          lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_UnityEngine_UIElements_TextElement_OnGenerateVisualContent__
                                    );
          FUN_035d0c04(lVar7,uVar6,*(undefined8 *)StringLiteral_7274,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *plVar4 = lVar7;
          thunk_FUN_01f51358(plVar4,lVar7);
        }
        if (*(int *)(*(long *)Method_System_Boolean_CompareTo__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_035d0d0c(lVar8,lVar7,param_1,0);
        return;
      }
    }
    FUN_03a607e8(param_1,param_2,0);
    return;
  }
  plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,2);
  lVar8 = *(long *)(param_1 + 0x40);
  thunk_FUN_01f3e6f0();
  local_34[0] = lVar8 != 0;
  lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_34);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar8 != 0) &&
     (lVar5 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_03a44d68:
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar8;
    thunk_FUN_01f51358(plVar4 + 4,lVar8);
    local_48 = param_2;
    lVar8 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__
                               ,&local_48);
    if ((lVar8 != 0) &&
       (lVar5 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_03a44d68;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar8;
      thunk_FUN_01f51358(plVar4 + 5,lVar8);
      uVar6 = FUN_034a6ed0(*(undefined8 *)StringLiteral_7276,plVar4,0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar8);
      }
      FUN_03a448bc(param_1,uVar6,*(undefined8 *)StringLiteral_7277);
      goto LAB_03a44c54;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


