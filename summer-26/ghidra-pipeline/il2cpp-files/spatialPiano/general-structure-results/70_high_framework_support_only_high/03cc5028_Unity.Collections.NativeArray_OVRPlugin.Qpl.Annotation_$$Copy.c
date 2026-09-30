/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 03cc5028
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(void)

{
  int iVar1;
  char in_NG;
  char in_OV;
  ulong uVar2;
  int in_w8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint uVar4;
  uint unaff_w21;
  uint uVar5;
  long unaff_x22;
  
  do {
    if (in_NG != in_OV) goto LAB_03cc4fe8;
    do {
      uVar5 = (uint)unaff_x22;
      uVar4 = unaff_w21;
      if ((int)uVar5 < in_w8) {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_03cc50a8;
        if ((*(uint *)(lVar3 + 0x18) <= uVar5) || (*(uint *)(lVar3 + 0x18) <= unaff_w21))
        goto LAB_03cc50a4;
        uVar4 = unaff_w21 + 1;
        *(undefined8 *)(lVar3 + 0x20 + (long)(int)unaff_w21 * 8) =
             *(undefined8 *)(lVar3 + 0x20 + (long)(int)uVar5 * 8);
        uVar5 = uVar5 + 1;
      }
      if (in_w8 <= (int)uVar5) {
        Newtonsoft_Json_Linq_JObject__LoadAsync
                  (*(undefined8 *)(unaff_x19 + 0x10),uVar4,in_w8 - uVar4,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar4;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - uVar4;
      }
      unaff_x22 = (long)(int)uVar5;
      unaff_w21 = uVar4;
LAB_03cc4fe8:
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) {
LAB_03cc50a8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) {
LAB_03cc50a4:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),
                         *(undefined8 *)(lVar3 + unaff_x22 * 8 + 0x20),
                         *(undefined8 *)(unaff_x20 + 0x28));
      in_w8 = *(int *)(unaff_x19 + 0x18);
    } while ((uVar2 & 1) == 0);
    unaff_x22 = unaff_x22 + 1;
    in_OV = SBORROW8(unaff_x22,(long)in_w8);
    in_NG = unaff_x22 - in_w8 < 0;
  } while( true );
}


