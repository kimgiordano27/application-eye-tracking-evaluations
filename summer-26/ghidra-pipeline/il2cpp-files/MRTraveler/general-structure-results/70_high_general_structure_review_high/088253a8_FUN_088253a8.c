/*
FUNCTION_NAME: FUN_088253a8
ENTRY_POINT: 088253a8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_5;telemetry_or_network_hits_3
*/


void FUN_088253a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_06f74e14(param_2,0);
  if ((uVar2 & 1) == 0) {
    if (param_3 != 0) {
      if (DAT_0943d638 == (code *)0x0) {
        DAT_0943d638 = (code *)FUN_03c8f85c(
                                           "UnityEngine.Networking.UnityWebRequest::get_isModifiable()"
                                           );
      }
      uVar2 = (*DAT_0943d638)(param_1);
      if ((uVar2 & 1) != 0) {
        if (DAT_0943d658 == (code *)0x0) {
          DAT_0943d658 = (code *)FUN_03c8f85c(
                                             "UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)"
                                             );
        }
        iVar1 = (*DAT_0943d658)(param_1,param_2,param_3);
        if (iVar1 == 0) {
          return;
        }
        uVar4 = FUN_08823e64();
        thunk_FUN_03ce5214(PTR_DAT_08e71970);
        uVar5 = thunk_FUN_03cf5234();
        FUN_07100530(uVar5,uVar4,0);
        uVar4 = thunk_FUN_03ce5214(
                                  Cysharp_Threading_Tasks_IUniTaskSource<ControllerColliderHit>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar5,uVar4);
      }
      thunk_FUN_03ce5214(PTR_DAT_08e71970);
      uVar4 = thunk_FUN_03cf5234();
      uVar5 = thunk_FUN_03ce5214(Cysharp_Threading_Tasks_IUniTaskSource<Collision2D>_TypeInfo);
      FUN_07100530(uVar4,uVar5,0);
      goto LAB_088254c8;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar4 = thunk_FUN_03cf5234();
    puVar3 = Cysharp_Threading_Tasks_IUniTaskSource<Collision>_TypeInfo;
  }
  else {
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar4 = thunk_FUN_03cf5234();
    puVar3 = Cysharp_Threading_Tasks_IUniTaskSource<Collider2D>_TypeInfo;
  }
  uVar5 = thunk_FUN_03ce5214(puVar3);
  FUN_07064ba8(uVar4,uVar5,0);
LAB_088254c8:
  uVar5 = thunk_FUN_03ce5214(Cysharp_Threading_Tasks_IUniTaskSource<ControllerColliderHit>_TypeInfo)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar4,uVar5);
}


