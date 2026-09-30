/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$Close
ENTRY_POINT: 01743054
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_5;strong_file_logging_hits_4
*/


void Newtonsoft_Json_JsonWriter__Close(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 in_w8;
  int unaff_w19;
  long unaff_x20;
  int iVar9;
  long unaff_x21;
  long *plVar10;
  
  *(undefined1 *)(unaff_x21 + 0xb71) = in_w8;
  if (unaff_w19 < 0) {
    uVar4 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                              );
    uVar4 = thunk_FUN_00d61fa0(uVar4,&stack0x0000000c);
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar6 = thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    uVar7 = thunk_FUN_00d48444(
                              Method_System_Xml_Schema_XmlSchemaValidator_InternalValidateEndElement__
                              );
    System_Threading_Tasks_AsyncCausalityTracer__get_LoggingOn(uVar5,uVar6,uVar4,uVar7,0);
    uVar4 = thunk_FUN_00d48444(Method_System_Data_Common_SqlInt16Storage_Aggregate__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar4);
  }
  if (unaff_w19 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = unaff_w19 + 0x1e;
    if (-1 < unaff_w19 + -1) {
      iVar9 = unaff_w19 + -1;
    }
    iVar9 = (iVar9 >> 5) + 1;
  }
  plVar10 = (long *)(unaff_x20 + 0x10);
  if (*plVar10 != 0) {
    iVar2 = *(int *)(*plVar10 + 0x18);
    if ((iVar2 < iVar9) || (iVar9 + 0x100 < iVar2)) {
      FUN_010afdd4(plVar10,iVar9,
                   *(undefined8 *)
                    Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>__ctor__
                  );
    }
    iVar2 = *(int *)(unaff_x20 + 0x18);
    if (iVar2 < unaff_w19) {
      if (iVar2 < 1) {
        iVar8 = 0;
      }
      else {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = (iVar8 >> 5) + 1;
      }
      if (iVar2 % 0x20 < 1) {
        lVar3 = *plVar10;
      }
      else {
        lVar3 = *plVar10;
        if (lVar3 == 0) goto LAB_0174316c;
        if (*(uint *)(lVar3 + 0x18) <= (uint)((long)iVar8 + -1)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar1 = lVar3 + ((long)iVar8 + -1) * 4;
        *(uint *)(lVar1 + 0x20) =
             *(uint *)(lVar1 + 0x20) & (-1 << (ulong)(iVar2 % 0x20 & 0x1f) ^ 0xffffffffU);
      }
      FUN_0179519c(lVar3,iVar8,iVar9 - iVar8,0);
    }
    *(int *)(unaff_x20 + 0x18) = unaff_w19;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    return;
  }
LAB_0174316c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


