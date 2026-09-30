/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 05295218
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_s3;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  char cStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((DAT_06bbaca0 & 1) == 0) {
    FUN_02f08768(UnityEngine_Matrix4x4___TypeInfo);
    FUN_02f08768(System_Xml_Schema_DatatypeImplementation_SchemaDatatypeMap___TypeInfo);
    FUN_02f08768(System_Globalization_DateTimeFormatInfo_TokenHashValue___TypeInfo);
    FUN_02f08768(PTR_DAT_067c9790);
    DAT_06bbaca0 = 1;
  }
  puVar1 = System_Globalization_DateTimeFormatInfo_TokenHashValue___TypeInfo;
  plVar7 = *(long **)(param_2 + 0x138);
  in_stack_00000028 = 0;
  _cStack0000000000000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (plVar7 == (long *)0x0) {
    puVar3 = (undefined8 *)(param_2 + 0x1ac);
    in_stack_00000028 = *(undefined8 *)(param_2 + 0x1b4);
    _cStack0000000000000020 = *puVar3;
    in_stack_00000038 = *(undefined8 *)(param_2 + 0x1c4);
    in_stack_00000030 = *(undefined8 *)(param_2 + 0x1bc);
    if (cStack0000000000000020 != '\0') {
      in_stack_00000028 = *(undefined8 *)(param_2 + 0x1b4);
      _cStack0000000000000020 = *puVar3;
      in_stack_00000038 = *(undefined8 *)(param_2 + 0x1c4);
      in_stack_00000030 = *(undefined8 *)(param_2 + 0x1bc);
      FUN_03e23438((long)&stack0x00000000 + 4,&stack0x00000020,
                   *(undefined8 *)System_Globalization_DateTimeFormatInfo_TokenHashValue___TypeInfo)
      ;
      uVar2 = uStack0000000000000008;
      in_stack_00000028 = *(undefined8 *)(param_2 + 0x1b4);
      _cStack0000000000000020 = *puVar3;
      in_stack_00000038 = *(undefined8 *)(param_2 + 0x1c4);
      in_stack_00000030 = *(undefined8 *)(param_2 + 0x1bc);
      FUN_03e23438((long)&stack0x00000000 + 4,&stack0x00000020,*(undefined8 *)puVar1);
      uVar9 = uStack0000000000000018;
      uVar8 = FUN_060df954(uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,0);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      FUN_060fda18(in_stack_00000000._4_4_,uVar2,uStack000000000000000c,uVar8,uStack0000000000000014
                   ,uVar9,in_s3,param_1,0);
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_067c9790 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060fdf88((long)&stack0x00000000 + 4,0);
  }
  else {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)UnityEngine_Matrix4x4___TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05295378;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)UnityEngine_Matrix4x4___TypeInfo,0);
LAB_05295378:
    (*(code *)*puVar3)((long)&stack0x00000000 + 4,plVar7,puVar3[1]);
  }
  param_1[1] = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  *param_1 = CONCAT44(uStack0000000000000008,in_stack_00000000._4_4_);
  *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  return;
}


