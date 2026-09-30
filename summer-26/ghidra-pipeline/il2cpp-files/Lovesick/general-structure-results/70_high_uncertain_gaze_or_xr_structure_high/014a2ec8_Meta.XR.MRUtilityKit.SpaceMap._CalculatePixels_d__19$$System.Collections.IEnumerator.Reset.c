/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap.<CalculatePixels>d__19$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 014a2ec8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_SpaceMap_<CalculatePixels>d__19__System_Collections_IEnumerator_Reset
               (void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 in_w8;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 *unaff_x21;
  
  *(undefined1 *)(unaff_x20 + 0xcbc) = in_w8;
  lVar2 = thunk_FUN_00d62348(*unaff_x21);
  puVar1 = StringLiteral_160;
  if (lVar2 != 0) {
    FUN_013752a0(lVar2,*(undefined8 *)
                        System_Runtime_Serialization_Formatters_Binary_BinaryMethodReturn_TypeInfo);
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_UnityEngine_ProBuilder_VertexPositioning_VerticesInWorldSpace__;
    if (lVar2 != 0) {
      FUN_01320e50(lVar2,*(undefined8 *)Method_OVREnumerable_Enumerator<string>_MoveNext__);
      *(long *)(unaff_x19 + 0x40) = lVar2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03776401 == '\0') {
        thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_VertexPositioning_VerticesInWorldSpace__);
        DAT_03776401 = '\x01';
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar2 = *(long *)puVar1;
      }
      puVar1 = StringLiteral_12893;
      plVar7 = (long *)**(undefined8 **)(lVar2 + 0xb8);
      if (plVar7 != (long *)0x0) {
        lVar2 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_2192) {
              puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
              goto LAB_014a2fd4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(plVar7,*(long *)StringLiteral_2192,0xb);
LAB_014a2fd4:
        uVar4 = (*(code *)*puVar3)(plVar7,9,0,puVar3[1]);
        *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          FUN_01491af8(lVar2,0);
          *(long *)(unaff_x19 + 0x90) = lVar2;
          thunk_FUN_0268a01c();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


