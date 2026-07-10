/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable$$GetReticleDirection
ENTRY_POINT: 0363fd58
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_14;repeated_pose_getters;ui_or_gameplay_sink_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable__GetReticleDirection
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5,
               undefined8 *param_6,undefined8 *param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  
  uVar6 = param_2;
  uVar7 = param_3;
  if ((DAT_03ef6b45 & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue___03ce3e68
                );
    FUN_01c5c92c(PTR_Method_System_Nullable<Vector3>__ctor___03ce3e78);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef6b45 = 1;
  }
  *param_7 = 0;
  param_7[1] = 0;
  *(undefined4 *)param_6 = param_1;
  *(undefined4 *)((long)param_6 + 4) = param_2;
  *(undefined4 *)(param_6 + 1) = param_3;
  local_58 = 0;
  local_60 = 0;
  if ((*(long *)(param_4 + 0x1a0) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_4 + 0x1a0) + 0x20), lVar2 == 0)) goto LAB_0363ffd8;
  lVar2 = UnityEngine_XR_Interaction_Toolkit_Locomotion_LocomotionMediator__get_xrOrigin(lVar2,0);
  iVar1 = *(int *)(param_4 + 0x1a8);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      if (DAT_03ef1418 == '\0') {
        FUN_01c5c92c(PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0);
        DAT_03ef1418 = '\x01';
      }
      uVar6 = *(undefined4 *)
               (*(long *)(*(long *)PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0 + 0xb8) + 0x20);
      *param_6 = *(undefined8 *)
                  (*(long *)(*(long *)PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0 + 0xb8) + 0x18);
      *(undefined4 *)(param_6 + 1) = uVar6;
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      lVar3 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar3 == 0) goto LAB_0363ffd8;
      uVar5 = UnityEngine_Transform__get_up(lVar3,0);
      *(undefined4 *)param_6 = uVar5;
      *(undefined4 *)((long)param_6 + 4) = uVar6;
      *(undefined4 *)(param_6 + 1) = uVar7;
    }
    if ((param_5 != 0) && (*(char *)(param_4 + 0x1ac) != '\0')) {
      if (*(long *)(param_4 + 0x1d0) == 0) goto LAB_0363ffd8;
      uVar4 = System_Collections_Generic_Dictionary<object,_Vector3>__TryGetValue
                        (*(long *)(param_4 + 0x1d0),param_5,&local_60,
                         *(undefined8 *)
                          PTR_Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue___03ce3e68
                        );
      if ((uVar4 & 1) != 0) {
        uVar4 = local_60 & 0xffffffff;
        goto LAB_0363ffa0;
      }
    }
    if (*(int *)(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar4 = UnityEngine_Object__op_Inequality(lVar2,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (lVar2 == 0) goto LAB_0363ffd8;
LAB_0363ff54:
    param_4 = *(long *)(lVar2 + 0x20);
    if (param_4 == 0) goto LAB_0363ffd8;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      if (*(int *)(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar4 = UnityEngine_Object__op_Inequality(lVar2,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0x38) == 0)) ||
         (lVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar2 + 0x38),0), lVar3 == 0))
      goto LAB_0363ffd8;
      uVar5 = UnityEngine_Transform__get_up(lVar3,0);
      *(undefined4 *)param_6 = uVar5;
      *(undefined4 *)((long)param_6 + 4) = uVar6;
      *(undefined4 *)(param_6 + 1) = uVar7;
      goto LAB_0363ff54;
    }
    lVar2 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar2 == 0) goto LAB_0363ffd8;
    uVar5 = UnityEngine_Transform__get_up(lVar2,0);
    *(undefined4 *)param_6 = uVar5;
    *(undefined4 *)((long)param_6 + 4) = uVar6;
    *(undefined4 *)(param_6 + 1) = uVar7;
  }
  lVar2 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar2 != 0) {
    uVar4 = UnityEngine_Transform__get_forward(lVar2,0);
LAB_0363ffa0:
    local_70 = 0;
    uStack_68 = 0;
    System_Nullable<Vector3>___ctor
              (uVar4,&local_70,*(undefined8 *)PTR_Method_System_Nullable<Vector3>__ctor___03ce3e78);
    param_7[1] = uStack_68;
    *param_7 = local_70;
    return;
  }
LAB_0363ffd8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


