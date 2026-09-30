/*
FUNCTION_NAME: FUN_05299a1c
ENTRY_POINT: 05299a1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 111
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_8;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_05299a1c(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = OVRPlugin_FaceTrackingDataSource___TypeInfo;
  puVar3 = OVRPlugin_EyeGazeState___TypeInfo;
  puVar2 = PTR_DAT_067c8fb0;
  if ((DAT_06bbacd1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8fb0);
    FUN_02f08768(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    FUN_02f08768(OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
    FUN_02f08768(UnityEngine_TextCore_Text_MaterialReference___TypeInfo);
    FUN_02f08768(System_Xml_Schema_XmlValueConverter___TypeInfo);
    FUN_02f08768(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_02f08768(OVRPlugin_FaceTrackingDataSource___TypeInfo);
    DAT_06bbacd1 = 1;
  }
  uVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_05054f60(uVar5,param_1,*(undefined8 *)puVar3,0);
  FUN_052364c4(param_1,param_1 + 9,uVar5,0);
  if (**(long **)(*(long *)puVar4 + 0xb8) == 0) {
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
    FUN_0443fcc8(uVar5,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar5;
    (**(code **)(*param_1 + 0x368))
              (param_1,**(undefined8 **)(*(long *)puVar4 + 0xb8),*(undefined8 *)(*param_1 + 0x370));
  }
  if (param_1[0x1a] != 0) goto LAB_05299bac;
  lVar6 = FUN_060ed87c(param_1,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar7 = (long *)FUN_033d910c(lVar6,*(undefined8 *)
                                       UnityEngine_TextCore_Text_MaterialReference___TypeInfo);
  param_1[0x1a] = (long)plVar7;
  if (plVar7 == (long *)0x0) {
LAB_05299b8c:
    plVar7 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlValueConverter___TypeInfo + 0x130);
    if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_05299b8c;
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Schema_XmlValueConverter___TypeInfo) {
      plVar7 = (long *)0x0;
    }
  }
  param_1[0x19] = (long)plVar7;
LAB_05299bac:
  FUN_05236568(param_1,param_1 + 9,0);
  return;
}


