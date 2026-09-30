/*
FUNCTION_NAME: FUN_0162e3ac
ENTRY_POINT: 0162e3ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0162e3ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_get_Item__;
  puVar1 = PTR_DAT_033f2b50;
  if ((DAT_037781d2 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_get_Item__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f2b50);
    DAT_037781d2 = 1;
  }
  plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    FUN_017b46ec(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = 0x4000000040;
    *(undefined4 *)(lVar5 + 0x18) = 0;
    if (plVar4 != (long *)0x0) {
      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      puVar3 = Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__;
      if (lVar6 == 0) {
LAB_0162e4ec:
        uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar7,0);
      }
      if ((int)plVar4[3] == 0) {
LAB_0162e4f8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar4[4] = lVar5;
      **(long **)(*(long *)puVar3 + 0xb8) = (long)plVar4;
      plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        FUN_017b46ec(lVar5,0);
        *(undefined8 *)(lVar5 + 0x10) = 0x4000000040;
        *(undefined4 *)(lVar5 + 0x18) = 0;
        if (plVar4 != (long *)0x0) {
          lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar6 == 0) goto LAB_0162e4ec;
          if ((int)plVar4[3] != 0) {
            plVar4[4] = lVar5;
            *(long **)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = plVar4;
            return;
          }
          goto LAB_0162e4f8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


