/*
FUNCTION_NAME: FUN_05b71bc0
ENTRY_POINT: 05b71bc0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_05b71bc0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if ((DAT_06a571ad & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_Component_GetComponentsInChildren<Collider>__);
    FUN_02d4dc40(PTR_DAT_0664e148);
    FUN_02d4dc40(Method_System_Net_Configuration_ConnectionManagementElementCollection_set_Item__);
    FUN_02d4dc40(PTR_DAT_0664e168);
    FUN_02d4dc40(Method_System_Data_ConstraintCollection_BaseRemove__);
    FUN_02d4dc40(Method_System_Net_FileWebRequest_get_UseDefaultCredentials__);
    DAT_06a571ad = 1;
  }
  lVar2 = FUN_05b712b0(param_1,param_2);
  if (lVar2 != 0) {
    uVar3 = FUN_036a7820(lVar2,*(undefined8 *)
                                Method_System_Net_Configuration_ConnectionManagementElementCollection_set_Item__
                        );
    puVar6 = (undefined8 *)(param_1 + 0x10);
    *puVar6 = uVar3;
    thunk_FUN_02dc1ef0(puVar6,uVar3);
    if (param_3 == 0) {
      if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponentsInChildren<Collider>__ + 0xe4)
          == 0) {
        thunk_FUN_02dabd98();
      }
      lVar2 = FUN_05af3c54(0);
      if ((param_2 == 0) || (lVar2 == 0)) goto LAB_05b71d54;
      lVar4 = *(long *)Method_System_Net_FileWebRequest_get_UseDefaultCredentials__;
      if (*(int *)(param_2 + 0x10) != 0) {
        lVar4 = param_2;
      }
      param_3 = FUN_05af3d8c(lVar2,lVar4,1,0,0,0);
    }
    puVar1 = PTR_DAT_0664e148;
    plVar5 = (long *)(param_1 + 0x18);
    *plVar5 = param_3;
    thunk_FUN_02dc1ef0(plVar5,param_3);
    lVar2 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
    FUN_05afb044(lVar2,0);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x30) = param_2;
      thunk_FUN_02dc1ef0((long *)(lVar2 + 0x30),param_2);
      if (*(long *)(lVar2 + 0x50) != 0) {
        FUN_039cf4c4(*(long *)(lVar2 + 0x50),*puVar6,
                     *(undefined8 *)Method_System_Data_ConstraintCollection_BaseRemove__);
        if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x28), lVar4 != 0)) {
          FUN_039cf3dc(lVar4,lVar2,*(undefined8 *)PTR_DAT_0664e168);
          return;
        }
      }
    }
  }
LAB_05b71d54:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


