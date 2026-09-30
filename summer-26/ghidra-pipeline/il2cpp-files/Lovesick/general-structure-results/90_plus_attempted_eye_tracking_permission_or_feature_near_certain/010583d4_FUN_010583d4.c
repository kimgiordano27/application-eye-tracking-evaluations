/*
FUNCTION_NAME: FUN_010583d4
ENTRY_POINT: 010583d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 129
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_010583d4(float param_1,float param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float local_74;
  
  puVar2 = StringLiteral_5473;
  if ((DAT_037760a7 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Numerics_Vector<ushort>_get_Zero__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRApplications__LaunchInternalProcess_TypeInfo);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<bool>__ctor__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5473);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_037760a7 = 1;
  }
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar9 != 0) {
    FUN_01320e50(lVar9,*(undefined8 *)Method_Sirenix_Serialization_Serializer<bool>__ctor__);
    if (*(long *)(param_3 + 0x10) != 0) {
      iVar6 = FUN_02658ed8(*(long *)(param_3 + 0x10),0);
      puVar5 = Method_System_Numerics_Vector<ushort>_get_Zero__;
      puVar4 = System_Threading_Timer_TimerComparer_TypeInfo;
      puVar3 = OVR_OpenVR_IVRApplications__LaunchInternalProcess_TypeInfo;
      puVar2 = OVREyeGaze_TypeInfo;
      fVar11 = (param_1 / ((float)param_5 / (float)iVar6)) * 0.5;
      iVar6 = -0x80000000;
      if (fVar11 != INFINITY) {
        iVar6 = (int)fVar11;
      }
      if (param_4 != 0) {
        if (0 < *(int *)(param_4 + 0x18)) {
          iVar10 = 0;
          do {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            iVar7 = FUN_017724a8(iVar10 - iVar6,0,0);
            iVar8 = FUN_017726a0(*(undefined4 *)(param_4 + 0x18),iVar10 + iVar6,0);
            iVar1 = iVar8 - iVar7;
            fVar11 = 0.0;
            if (iVar1 != 0 && iVar7 <= iVar8) {
              fVar11 = 0.0;
              do {
                FUN_0132138c(param_4,iVar7,&local_74,*(undefined8 *)puVar2);
                iVar7 = iVar7 + 1;
                fVar11 = fVar11 + local_74;
              } while (iVar8 != iVar7);
            }
            FUN_00ac1d04((fVar11 / (float)iVar1) * param_2,lVar9,*(undefined8 *)puVar5);
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(param_4 + 0x18));
        }
        FUN_01325140(lVar9,*(undefined8 *)puVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


