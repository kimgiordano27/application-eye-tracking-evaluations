/*
FUNCTION_NAME: Unity.AppUI.UI.ActionGroup$$get_selectionType
ENTRY_POINT: 058585b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;eye_or_gaze_keyword_boost_only
*/


void Unity_AppUI_UI_ActionGroup__get_selectionType(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 in_w8;
  long *plVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x24;
  long unaff_x25;
  long lStack0000000000000008;
  
                    /* try { // try from 058585b0 to 059585b7 has its CatchHandler @ 05858688 */
  *(undefined1 *)(unaff_x25 + 0x29) = in_w8;
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
  ;
  lStack0000000000000008 = 0;
  if (unaff_x24 != 0) {
    lVar2 = FUN_0574577c();
    uVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_058253b4();
    if (lVar2 != 0) {
      uVar4 = FUN_0492e7f4(lVar2,uVar3,&stack0x00000008,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<uint,_MarkToBaseAdjustmentRecord>_ContainsKey__
                          );
      plVar7 = (long *)Method_System_Collections_Generic_List_Enumerator<int>_Dispose__;
      if ((uVar4 & 1) != 0) {
        if ((lStack0000000000000008 == 0) || (*(long *)(lStack0000000000000008 + 0x30) == 0))
        goto LAB_05858704;
        uVar4 = FUN_05825608(*(long *)(lStack0000000000000008 + 0x30),0);
        plVar7 = (long *)Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__;
        if ((uVar4 & 1) == 0) {
          return;
        }
      }
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        uVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<Type,_XmlQualifiedName>_Add__
                                  );
        FUN_0576408c(uVar3,lVar2);
        if (unaff_x19 == (long *)0x0) {
          uVar6 = thunk_FUN_02f6ef30(
                                    Method_Unity_Burst_FunctionPointer<XRGazeAssistance_GetAssistedVelocityInternal_00001059_PostfixBurstDelegate>_get_Value__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar3,uVar6);
        }
        lVar2 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary<uint,_MarkToMarkAdjustmentRecord>_Add__
               ) {
              puVar5 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_058586d8;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02f421d0();
LAB_058586d8:
        (*(code *)*puVar5)();
      }
      return;
    }
  }
LAB_05858704:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


