/*
FUNCTION_NAME: FUN_01fbe5dc
ENTRY_POINT: 01fbe5dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_01fbe5dc(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  if ((DAT_03780694 & 1) == 0) {
                    /* catch() { ... } // from try @ 01fbe614 with catch @ 01fbe600
                       catch() { ... } // from try @ 01fbe650 with catch @ 01fbe600
                       catch() { ... } // from try @ 01fbe6b8 with catch @ 01fbe600 */
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                      );
                    /* try { // try from 01fbe60c to 020be613 has its CatchHandler @ 01fbe620 */
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
                    /* try { // try from 01fbe614 to 020be637 has its CatchHandler @ 01fbe600 */
    thunk_FUN_00d48444(StringLiteral_5343);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01fbe60c with catch @ 01fbe620
                        */
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
    DAT_03780694 = 1;
  }
  puVar4 = Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
  puVar3 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
  puVar2 = PTR_DAT_033f19d8;
  if (param_2 == (long *)0x0) goto LAB_01fbe87c;
                    /* try { // try from 01fbe638 to 020be64f has its CatchHandler @ 01fbe6b0 */
  lVar8 = *param_2;
  lVar6 = *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
  plVar11 = param_2;
  if ((*(byte *)(lVar8 + 300) < *(byte *)(lVar6 + 300)) ||
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar6 + 300) * 8 + -8) != lVar6)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_033f19d8 + 300);
    if ((bVar1 <= *(byte *)(lVar8 + 300)) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_033f19d8)) {
LAB_01fbe6a4:
      puVar3 = StringLiteral_5343;
      if (plVar11 != (long *)0x0) {
        do {
          if (plVar11 == (long *)0x0) goto LAB_01fbe87c;
          plVar9 = (long *)plVar11[0x13];
          if (plVar9 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar3 + 300);
            if ((bVar1 <= *(byte *)(*plVar9 + 300)) &&
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
              lVar6 = plVar9[0xc];
              if (lVar6 != 0) goto LAB_01fbe850;
              break;
            }
          }
          plVar11 = (long *)plVar11[0xc];
          if (plVar11 == (long *)0x0) break;
          lVar6 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar6 + 300);
          if ((*(byte *)(*plVar11 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar6)) break;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_0377fe0d == '\0') {
            thunk_FUN_00d48444(puVar4);
            DAT_0377fe0d = '\x01';
          }
          lVar6 = *(long *)puVar4;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar4;
          }
          if (plVar11 == *(long **)(*(long *)(lVar6 + 0xb8) + 0x10)) break;
        } while( true );
      }
      goto LAB_01fbe814;
    }
  }
  else {
    while (plVar11 = (long *)plVar11[0xc], plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      lVar10 = *(long *)puVar2;
      bVar1 = *(byte *)(lVar10 + 300);
      if ((bVar1 <= *(byte *)(lVar8 + 300)) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) == lVar10)) goto LAB_01fbe6a4;
      if ((*(byte *)(lVar8 + 300) < *(byte *)(lVar6 + 300)) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar6 + 300) * 8 + -8) != lVar6))
      break;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377fd9c == '\0') {
        thunk_FUN_00d48444(puVar3);
        DAT_0377fd9c = '\x01';
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar3;
      }
      if (plVar11 == (long *)**(undefined8 **)(lVar6 + 0xb8)) break;
    }
LAB_01fbe814:
    if (param_2 == (long *)0x0) goto LAB_01fbe87c;
  }
  plVar11 = (long *)param_2[0xd];
  if (plVar11 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar4);
    }
    lVar6 = FUN_01fbcf30(uVar5);
    if (lVar6 != 0) {
LAB_01fbe850:
      uVar7 = FUN_01ecb76c(lVar6,0);
      FUN_01ef3760(uVar7,0);
      return;
    }
  }
LAB_01fbe87c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


