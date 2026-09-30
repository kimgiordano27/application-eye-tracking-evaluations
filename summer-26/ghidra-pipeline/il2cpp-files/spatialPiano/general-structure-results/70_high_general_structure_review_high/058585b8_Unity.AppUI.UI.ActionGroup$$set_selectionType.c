/*
FUNCTION_NAME: Unity.AppUI.UI.ActionGroup$$set_selectionType
ENTRY_POINT: 058585b8
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


void Unity_AppUI_UI_ActionGroup__set_selectionType(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x24;
  long in_stack_00000008;
  
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
  ;
                    /* try { // try from 058585b8 to 059585bb has its CatchHandler @ 05858684 */
  if (unaff_x24 != 0) {
                    /* try { // try from 058585bc to 059585c3 has its CatchHandler @ 05858680 */
                    /* try { // try from 058585c4 to 059585cb has its CatchHandler @ 0585867c */
                    /* try { // try from 058585cc to 059585d3 has its CatchHandler @ 05857344 */
    lVar2 = FUN_0574577c();
                    /* try { // try from 058585d4 to 059585d7 has its CatchHandler @ 05858668 */
                    /* try { // try from 058585d8 to 059585db has its CatchHandler @ 05858664 */
                    /* try { // try from 058585dc to 059585df has its CatchHandler @ 05858660 */
    uVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                    /* try { // try from 058585e0 to 059585e3 has its CatchHandler @ 05858654 */
                    /* try { // try from 058585e4 to 059585e7 has its CatchHandler @ 05858650 */
                    /* try { // try from 058585e8 to 059585eb has its CatchHandler @ 0585864c */
                    /* try { // try from 058585ec to 059585ef has its CatchHandler @ 05858640 */
    FUN_058253b4();
                    /* try { // try from 058585f0 to 059585f3 has its CatchHandler @ 05858634 */
    if (lVar2 != 0) {
                    /* try { // try from 058585f4 to 059585ff has its CatchHandler @ 05857344 */
                    /* catch() { ... } // from try @ 05857b70 with catch @ 058585fc */
                    /* try { // try from 05858600 to 05958607 has its CatchHandler @ 05858788 */
                    /* try { // try from 05858608 to 059586cb has its CatchHandler @ 05857344 */
      uVar4 = FUN_0492e7f4(lVar2,uVar3,&stack0x00000008,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<uint,_MarkToBaseAdjustmentRecord>_ContainsKey__
                          );
                    /* catch() { ... } // from try @ 058581b8 with catch @ 05858610 */
      plVar7 = (long *)Method_System_Collections_Generic_List_Enumerator<int>_Dispose__;
      if ((uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 058581ac with catch @ 05858614 */
                    /* catch() { ... } // from try @ 05858194 with catch @ 05858618 */
                    /* catch() { ... } // from try @ 05858168 with catch @ 0585861c */
                    /* catch() { ... } // from try @ 05858124 with catch @ 05858620 */
        if ((in_stack_00000008 == 0) || (*(long *)(in_stack_00000008 + 0x30) == 0))
        goto LAB_05858704;
                    /* catch() { ... } // from try @ 05857dc0 with catch @ 05858624 */
                    /* catch() { ... } // from try @ 05858498 with catch @ 05858628 */
        uVar4 = FUN_05825608(*(long *)(in_stack_00000008 + 0x30),0);
                    /* catch() { ... } // from try @ 058581d0 with catch @ 0585862c */
        plVar7 = (long *)Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__;
        if ((uVar4 & 1) == 0) {
          return;
        }
      }
                    /* catch() { ... } // from try @ 0585814c with catch @ 05858644 */
      lVar2 = *plVar7;
                    /* catch() { ... } // from try @ 05858138 with catch @ 05858648 */
      if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 058585e8 with catch @ 0585864c */
                    /* catch() { ... } // from try @ 058585e4 with catch @ 05858650 */
                    /* catch() { ... } // from try @ 058585e0 with catch @ 05858654 */
                    /* catch() { ... } // from try @ 05857d64 with catch @ 05858658 */
        uVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<Type,_XmlQualifiedName>_Add__
                                  );
                    /* catch() { ... } // from try @ 05857d4c with catch @ 0585865c */
                    /* catch() { ... } // from try @ 058585dc with catch @ 05858660 */
                    /* catch() { ... } // from try @ 058585d8 with catch @ 05858664 */
                    /* catch() { ... } // from try @ 058585d4 with catch @ 05858668 */
                    /* catch() { ... } // from try @ 0585844c with catch @ 0585866c */
                    /* catch() { ... } // from try @ 05858434 with catch @ 05858670 */
                    /* catch() { ... } // from try @ 05857df8 with catch @ 05858674 */
                    /* catch() { ... } // from try @ 058584c4 with catch @ 05858678 */
        FUN_0576408c(uVar3,lVar2);
                    /* catch() { ... } // from try @ 058585c4 with catch @ 0585867c */
        if (unaff_x19 == (long *)0x0) {
                    /* try { // try from 05858710 to 05958713 has its CatchHandler @ 05858728 */
          uVar6 = thunk_FUN_02f6ef30(
                                    Method_Unity_Burst_FunctionPointer<XRGazeAssistance_GetAssistedVelocityInternal_00001059_PostfixBurstDelegate>_get_Value__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar3,uVar6);
        }
                    /* catch() { ... } // from try @ 058585bc with catch @ 05858680 */
                    /* catch() { ... } // from try @ 058585b8 with catch @ 05858684 */
        lVar2 = *unaff_x19;
                    /* catch() { ... } // from try @ 058585b0 with catch @ 05858688 */
                    /* catch() { ... } // from try @ 058585ac with catch @ 0585868c */
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* catch() { ... } // from try @ 058585a8 with catch @ 05858690 */
                    /* catch() { ... } // from try @ 058585a4 with catch @ 05858694 */
        if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 058580bc with catch @ 05858698 */
                    /* catch() { ... } // from try @ 058580a4 with catch @ 0585869c */
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 058585a0 with catch @ 058586a0 */
                    /* catch() { ... } // from try @ 058581e8 with catch @ 058586a4 */
                    /* catch() { ... } // from try @ 05857cec with catch @ 058586a8 */
            if (*(long *)(piVar8 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary<uint,_MarkToMarkAdjustmentRecord>_Add__
               ) {
                    /* try { // try from 058586cc to 059586cf has its CatchHandler @ 058586e4 */
              puVar5 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_058586d8;
            }
                    /* catch() { ... } // from try @ 058583cc with catch @ 058586ac */
            uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 05857c88 with catch @ 058586b0 */
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02f421d0();
LAB_058586d8:
                    /* catch() { ... } // from try @ 058586cc with catch @ 058586e4 */
                    /* try { // try from 058586e8 to 059586ef has its CatchHandler @ 05858788 */
        (*(code *)*puVar5)();
      }
                    /* try { // try from 058586f0 to 0595870f has its CatchHandler @ 05857344 */
                    /* catch() { ... } // from try @ 05858368 with catch @ 058586f4 */
      return;
    }
  }
LAB_05858704:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


