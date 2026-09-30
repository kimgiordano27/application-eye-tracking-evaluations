/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$AutoCompleteAll
ENTRY_POINT: 01743064
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_5;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__AutoCompleteAll(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int in_w8;
  int unaff_w19;
  long unaff_x20;
  long *plVar6;
  
  iVar3 = unaff_w19 + 0x1e;
  if (-1 < in_w8) {
    iVar3 = in_w8;
  }
  iVar1 = (iVar3 >> 5) + 1;
  plVar6 = (long *)(unaff_x20 + 0x10);
  if (*plVar6 != 0) {
    iVar5 = *(int *)(*plVar6 + 0x18);
    if ((iVar5 < iVar1) || ((iVar3 >> 5) + 0x101 < iVar5)) {
      FUN_010afdd4(plVar6,iVar1,
                   *(undefined8 *)
                    Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>__ctor__
                  );
    }
    iVar3 = *(int *)(unaff_x20 + 0x18);
    if (iVar3 < unaff_w19) {
      if (iVar3 < 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = (iVar5 >> 5) + 1;
      }
      if (iVar3 % 0x20 < 1) {
        lVar4 = *plVar6;
      }
      else {
        lVar4 = *plVar6;
        if (lVar4 == 0) goto LAB_0174316c;
        if (*(uint *)(lVar4 + 0x18) <= (uint)((long)iVar5 + -1)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar2 = lVar4 + ((long)iVar5 + -1) * 4;
        *(uint *)(lVar2 + 0x20) =
             *(uint *)(lVar2 + 0x20) & (-1 << (ulong)(iVar3 % 0x20 & 0x1f) ^ 0xffffffffU);
      }
      FUN_0179519c(lVar4,iVar5,iVar1 - iVar5,0);
    }
    *(int *)(unaff_x20 + 0x18) = unaff_w19;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    return;
  }
LAB_0174316c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


