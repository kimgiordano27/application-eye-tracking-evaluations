/*
FUNCTION_NAME: FUN_01d2de3c
ENTRY_POINT: 01d2de3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * FUN_01d2de3c(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *local_28;
  
  if ((DAT_0377f361 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo);
    thunk_FUN_00d48444(
                      System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_TypeInfo
                      );
    DAT_0377f361 = 1;
  }
  local_28 = (long *)0x0;
  if (param_2 == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NavMeshLink>_Remove__);
    uVar6 = FUN_01d230a4();
LAB_01d2df54:
    uVar5 = thunk_FUN_00d48444(Method_OVRAnchor_FetchAnchors__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar5);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
System_Xml_XmlSqlBinaryReader__NameFlush:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar3 = FUN_0129eff4(*(long *)(param_1 + 0x30),param_2,&local_28,
                       *(undefined8 *)
                        System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_TypeInfo
                      );
  if ((local_28 == (long *)0x0) || (plVar4 = local_28, (uVar3 & 1) == 0)) {
    iVar2 = FUN_01d2df84(param_1,param_2);
    if (iVar2 < 0) {
      plVar4 = local_28;
      if (iVar2 == -2) {
        uVar6 = FUN_01d22ca4(param_2);
        goto LAB_01d2df54;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 == (long *)0x0) goto System_Xml_XmlSqlBinaryReader__NameFlush;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x2e8))(plVar4,iVar2,*(undefined8 *)(*plVar4 + 0x2f0))
      ;
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo + 300);
        if ((*(byte *)(*plVar4 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar4);
        }
      }
    }
  }
  return plVar4;
}


