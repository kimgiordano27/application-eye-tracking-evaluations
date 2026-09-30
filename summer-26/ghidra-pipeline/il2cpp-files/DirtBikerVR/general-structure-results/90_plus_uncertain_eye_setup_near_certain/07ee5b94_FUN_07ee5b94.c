/*
FUNCTION_NAME: FUN_07ee5b94
ENTRY_POINT: 07ee5b94
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07ee5b94(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_1a0 [152];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [152];
  undefined8 local_38;
  
  if ((DAT_0899ae0b & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08494d98);
    FUN_03a8a718(Method_Unity_Properties_ContainerPropertyBag<Vector3Int>__ctor__);
    FUN_03a8a718(Method_Unity_Properties_ContainerPropertyBag<Vector3Int>_AddProperty<int>__);
    FUN_03a8a718(Method_Unity_Properties_ContainerPropertyBag<Vector4>_AddProperty<float>__);
    FUN_03a8a718(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_RemoveCallback__
                );
    FUN_03a8a718(OVRPlugin_OVRP_0_1_3_TypeInfo);
    DAT_0899ae0b = 1;
  }
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_RemoveCallback__
  ;
  local_38 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_108 = 0;
  local_100 = 0;
  if (*(char *)(param_1 + 0x310) == '\0') {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_RemoveCallback__
                + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    puVar1 = PTR_DAT_08494d98;
    if (param_2 == (long *)0x0) goto LAB_07ee6088;
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x430);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08494d98) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_07ee5ca8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)PTR_DAT_08494d98,3);
LAB_07ee5ca8:
    uVar7 = (*(code *)*puVar3)(param_2,uVar9,&local_e0,puVar3[1]);
    uVar9 = local_e0;
    if ((uVar7 & 1) == 0) {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar5 = *(long *)puVar2;
      }
      lVar6 = *param_2;
      lVar4 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x438);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_07ee5d90;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(param_2,lVar4,4);
LAB_07ee5d90:
      uVar7 = (*(code *)*puVar3)(param_2,uVar9,&local_e8,puVar3[1]);
      uVar9 = local_e8;
      if ((uVar7 & 1) == 0) {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar5 = *(long *)puVar2;
        }
        lVar6 = *param_2;
        lVar4 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x440);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
              goto LAB_07ee5e58;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03ac43c4(param_2,lVar4,5);
LAB_07ee5e58:
        uVar7 = (*(code *)*puVar3)(param_2,uVar9,&local_f0,puVar3[1]);
        uVar9 = local_f0;
        if ((uVar7 & 1) == 0) {
          FUN_07ee608c(param_1);
          goto LAB_07ee5ec4;
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar5 = *(long *)puVar2;
        }
        memcpy(auStack_d8,(void *)(*(long *)(lVar5 + 0xb8) + 0x130),0x98);
        lVar5 = param_1 + 0x2e8;
        lVar4 = param_1 + 0x2e0;
        puVar3 = (undefined8 *)
                 Method_Unity_Properties_ContainerPropertyBag<Vector4>_AddProperty<float>__;
      }
      else {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar5 = *(long *)puVar2;
        }
        memcpy(auStack_d8,(void *)(*(long *)(lVar5 + 0xb8) + 0x98),0x98);
        lVar5 = param_1 + 0x2e0;
        lVar4 = param_1 + 0x2e8;
        puVar3 = (undefined8 *)Method_Unity_Properties_ContainerPropertyBag<Vector3Int>__ctor__;
      }
      lVar6 = param_1 + 0x2d8;
      uVar10 = *puVar3;
    }
    else {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar5 = *(long *)puVar2;
      }
      memcpy(auStack_1a0,*(void **)(lVar5 + 0xb8),0x98);
      uVar10 = *(undefined8 *)
                Method_Unity_Properties_ContainerPropertyBag<Vector3Int>_AddProperty<int>__;
      memcpy(auStack_d8,auStack_1a0,0x98);
      lVar5 = param_1 + 0x2d8;
      lVar6 = param_1 + 0x2e0;
      lVar4 = param_1 + 0x2e8;
    }
    FUN_07efb728(param_1,uVar9,lVar5,lVar6,lVar4,auStack_d8,uVar10);
  }
LAB_07ee5ec4:
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_RemoveCallback__
  ;
  if (*(char *)(param_1 + 0x311) == '\0') {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_RemoveCallback__
                + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (param_2 == (long *)0x0) goto LAB_07ee6088;
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x448);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08494d98) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto LAB_07ee5f4c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)PTR_DAT_08494d98,6);
LAB_07ee5f4c:
    uVar7 = (*(code *)*puVar3)(param_2,uVar9,&local_38,puVar3[1]);
    uVar9 = local_38;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07ea7830(0x10,uVar9,&local_f4,0);
      FUN_07ee4f5c(param_1,local_f4);
    }
  }
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_RemoveCallback__
  ;
  if (*(char *)(param_1 + 0x312) == '\0') {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_RemoveCallback__
                + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (param_2 == (long *)0x0) {
LAB_07ee6088:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x450);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08494d98) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07ee6028;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)PTR_DAT_08494d98,2);
LAB_07ee6028:
    uVar7 = (*(code *)*puVar3)(param_2,uVar9,&local_108,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      uVar11 = 0x3f800000;
      uVar12 = 0x3f800000;
      uVar13 = 0x3f800000;
      uVar14 = 0x3f800000;
    }
    else {
      uVar11 = (undefined4)local_108;
      uVar12 = local_108._4_4_;
      uVar13 = (undefined4)local_100;
      uVar14 = local_100._4_4_;
    }
    FUN_07ee5068(uVar11,uVar12,uVar13,uVar14,param_1);
  }
  return;
}


