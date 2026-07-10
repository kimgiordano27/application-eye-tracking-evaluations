/*
FUNCTION_NAME: AdvancedGrabWithAttach$$Update
ENTRY_POINT: 01d40114
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_10;repeated_pose_getters;frame_or_lifecycle_behavior
*/


void AdvancedGrabWithAttach__Update
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_78 [16];
  char local_64 [4];
  
  puVar1 = PTR_UnityEngine_XR_CommonUsages_TypeInfo_03cb5a78;
  if ((DAT_03ef1391 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_XR_CommonUsages_TypeInfo_03cb5a78);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef1391 = 1;
  }
  puVar2 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  local_64[0] = '\0';
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_78 = UnityEngine_XR_InputDevices__GetDeviceAtXRNode(*(undefined4 *)(param_4 + 0x20),0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
    lVar3 = *(long *)puVar1;
  }
  UnityEngine_XR_InputDevice__TryGetFeatureValue
            (local_78,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28),local_64,0);
  uVar6 = *(undefined8 *)(param_4 + 0x50);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_4 + 0x50) != 0) {
      lVar3 = UnityEngine_GameObject__get_transform(*(long *)(param_4 + 0x50),0);
      if (*(long *)(param_4 + 0x50) != 0) {
        lVar5 = UnityEngine_GameObject__get_transform(*(long *)(param_4 + 0x50),0);
        if (lVar5 != 0) {
          fVar7 = (float)UnityEngine_Transform__get_position(lVar5,0);
          if (*(long *)(param_4 + 0x30) != 0) {
            fVar12 = param_2;
            fVar15 = param_3;
            fVar8 = (float)UnityEngine_Transform__get_position(*(long *)(param_4 + 0x30),0);
            fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
            if (lVar3 != 0) {
              fVar9 = fVar9 * 10.0;
              fVar13 = 1.0;
              if (fVar9 <= 1.0) {
                fVar13 = fVar9;
              }
              fVar14 = 0.0;
              if (0.0 <= fVar9) {
                fVar14 = fVar13;
              }
              fVar8 = (fVar8 - fVar7) * fVar14;
              param_3 = param_3 + (fVar15 - param_3) * fVar14;
              param_2 = param_2 + (fVar12 - param_2) * fVar14;
              UnityEngine_Transform__set_position(fVar7 + fVar8,param_2,param_3,lVar3,0);
              if (*(long *)(param_4 + 0x50) != 0) {
                lVar3 = UnityEngine_GameObject__get_transform(*(long *)(param_4 + 0x50),0);
                if (*(long *)(param_4 + 0x50) != 0) {
                  lVar5 = UnityEngine_GameObject__get_transform(*(long *)(param_4 + 0x50),0);
                  if (lVar5 != 0) {
                    uVar10 = UnityEngine_Transform__get_rotation(lVar5,0);
                    if (*(long *)(param_4 + 0x30) != 0) {
                      fVar7 = param_2;
                      fVar12 = fVar8;
                      fVar15 = param_3;
                      uVar11 = UnityEngine_Transform__get_rotation(*(long *)(param_4 + 0x30),0);
                      UnityEngine_Time__get_deltaTime(0);
                      UnityEngine_Quaternion__Slerp
                                (uVar10,param_2,param_3,fVar8,uVar11,fVar7,fVar15,fVar12,0);
                      if (lVar3 != 0) {
                        UnityEngine_Transform__set_rotation(lVar3,0);
                        goto LAB_01d40348;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
LAB_01d40348:
  if ((local_64[0] != '\0') && (*(char *)(param_4 + 0x58) == '\0')) {
    uVar6 = *(undefined8 *)(param_4 + 0x50);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar4 & 1) == 0) {
      AdvancedGrabWithAttach__ReleaseObject(param_4);
    }
    else {
      AdvancedGrabWithAttach__TryGrabObject(param_4);
    }
  }
  *(char *)(param_4 + 0x58) = local_64[0];
  return;
}


