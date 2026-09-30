/*
FUNCTION_NAME: EyesControl_WriteValueIntoState_mD77233D2CFD8859814933102590F47DF402D502D
ENTRY_POINT: 0386f3a0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_12;ui_or_gameplay_sink_hits_14;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_14
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void EyesControl_WriteValueIntoState_mD77233D2CFD8859814933102590F47DF402D502D
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               EyesControl_t83617BA50C727F89DD6BB371171708BCE0FD8028 *param_5,
               Eyes_t239151DFDE1BB47589CEBD22261A793F142B211D *param_6,void *param_7)

{
  void *pvVar1;
  Il2CppObject *pIVar2;
  undefined4 uVar3;
  float fVar4;
  
  pvVar1 = (void *)EyesControl_get_leftEyePosition_m30F92C8A2393461FC8B42EF72602EDAD5DA14F22_inline
                             (param_5,(MethodInfo *)0x0);
  uVar3 = Eyes_get_leftEyePosition_m1A89E9B0B9E66EADF6A7CA493EAC8A147749FEC7_inline
                    (param_6,(MethodInfo *)0x0);
  NullCheck(pvVar1);
  VirtualActionInvoker2<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,void*>::Invoke
            (uVar3,0x12,pvVar1,param_7);
  pvVar1 = (void *)EyesControl_get_leftEyeRotation_m0B5EA6878345A4A442C9B0255E93AB26EF2BB613_inline
                             (param_5,(MethodInfo *)0x0);
  uVar3 = Eyes_get_leftEyeRotation_m66CDDF8D2CB08FFB5888B90A0338D255EF73CF46_inline
                    (param_6,(MethodInfo *)0x0);
  NullCheck(pvVar1);
  VirtualActionInvoker2<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,void*>::Invoke
            (uVar3,0x12,pvVar1,param_7);
  pvVar1 = (void *)EyesControl_get_rightEyePosition_mB656BC310A2A2A7D4A2F01AF51FF1A17B43839DB_inline
                             (param_5,(MethodInfo *)0x0);
  uVar3 = Eyes_get_rightEyePosition_m13221B0B512E4A9DE771C0A9400F0171444EDBA3_inline
                    (param_6,(MethodInfo *)0x0);
  NullCheck(pvVar1);
  VirtualActionInvoker2<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,void*>::Invoke
            (uVar3,0x12,pvVar1,param_7);
  pvVar1 = (void *)EyesControl_get_rightEyeRotation_m36CA5BE97D9B87836B916E67F041DD6381442E4A_inline
                             (param_5,(MethodInfo *)0x0);
  uVar3 = Eyes_get_rightEyeRotation_mBF6652A173022067A927A863AAA424E87448E38A_inline
                    (param_6,(MethodInfo *)0x0);
  NullCheck(pvVar1);
  VirtualActionInvoker2<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,void*>::Invoke
            (uVar3,param_2,param_3,param_4,0x12,pvVar1,param_7);
  pvVar1 = (void *)EyesControl_get_fixationPoint_mED8557F3D952CE273C0C2423019B2F9567568642_inline
                             (param_5,(MethodInfo *)0x0);
  uVar3 = Eyes_get_fixationPoint_mEC5C6BE5C97DE306C77F7BDD1E1978D13DBACDBC_inline
                    (param_6,(MethodInfo *)0x0);
  NullCheck(pvVar1);
  VirtualActionInvoker2<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,void*>::Invoke
            (uVar3,param_2,param_3,0x12,pvVar1,param_7);
  pIVar2 = (Il2CppObject *)
           EyesControl_get_leftEyeOpenAmount_m51766C0F6617225434B327DF0233EFF8081E7529_inline
                     (param_5,(MethodInfo *)0x0);
  fVar4 = (float)Eyes_get_leftEyeOpenAmount_m10E56459B9412254D87FB6390643E25C9486259E_inline
                           (param_6,(MethodInfo *)0x0);
  NullCheck(pIVar2);
  VirtualActionInvoker2<float,void*>::Invoke(0x12,pIVar2,fVar4,param_7);
  pIVar2 = (Il2CppObject *)
           EyesControl_get_rightEyeOpenAmount_m91926BDB6ACA8E71186BFDF84D4BA45381638F0C_inline
                     (param_5,(MethodInfo *)0x0);
  fVar4 = (float)Eyes_get_rightEyeOpenAmount_m213E8CCE9F1350E4144E0FEEFE3E9CD1995AD01D_inline
                           (param_6,(MethodInfo *)0x0);
  NullCheck(pIVar2);
  VirtualActionInvoker2<float,void*>::Invoke(0x12,pIVar2,fVar4,param_7);
  return;
}


