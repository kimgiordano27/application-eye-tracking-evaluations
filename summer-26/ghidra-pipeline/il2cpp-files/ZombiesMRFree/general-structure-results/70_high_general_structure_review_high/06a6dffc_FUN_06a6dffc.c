/*
FUNCTION_NAME: FUN_06a6dffc
ENTRY_POINT: 06a6dffc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_06a6dffc(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_38;
  
  if ((DAT_073aadb1 & 1) == 0) {
    FUN_02fe925c(Pathfinding_BlockManager_TraversalProvider_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_BlurEvent_<>c_TypeInfo);
    DAT_073aadb1 = 1;
  }
  local_38 = 0;
  if (param_1 == (long *)0x0) {
LAB_06a6e204:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar4 = *param_1;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)Pathfinding_BlockManager_TraversalProvider_TypeInfo) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 7) * 0x10 + 0x138);
        goto LAB_06a6e0b0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02feb5b8(param_1,*(long *)Pathfinding_BlockManager_TraversalProvider_TypeInfo,7);
LAB_06a6e0b0:
  uVar6 = (*(code *)*puVar3)(param_1,param_4,&local_38,puVar3[1]);
  puVar2 = UnityEngine_UIElements_BlurEvent_<>c_TypeInfo;
  if (((uVar6 & 1) != 0) && (local_38 != 0)) {
    do {
      if (local_38 == 0) goto LAB_06a6e204;
      uVar6 = FUN_06b2752c(local_38,0);
      if ((uVar6 & 1) == 0) {
        if ((param_3 == 0) || (*(long *)(param_3 + 0x30) == 0)) goto LAB_06a6e204;
        uVar6 = FUN_06aac26c(*(long *)(param_3 + 0x30),local_38,0);
        if ((uVar6 & 1) != 0)
        goto UnityEngine_Networking_UnityWebRequest__set_disposeCertificateHandlerOnDispose;
      }
      else {
        if (param_3 == 0) goto LAB_06a6e204;
UnityEngine_Networking_UnityWebRequest__set_disposeCertificateHandlerOnDispose:
        uVar6 = FUN_06a6de34(*(undefined8 *)(param_3 + 0x20),local_38,
                             *(undefined8 *)(param_3 + 0x28));
        if ((uVar6 & 1) != 0) {
          param_5[2] = local_38;
          thunk_FUN_03048534(param_5 + 2);
          uVar5 = param_5[2];
          uVar10 = param_5[1];
          uVar9 = *param_5;
          if (param_2 == 0) goto LAB_06a6e204;
          lVar8 = *(long *)puVar2;
          lVar4 = *(long *)(param_2 + 0x10);
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar4 == 0) goto LAB_06a6e204;
          uVar1 = *(uint *)(param_2 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar1 + 1;
            lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
            *(undefined8 *)(lVar4 + 0x30) = uVar5;
            *(undefined8 *)(lVar4 + 0x28) = uVar10;
            *(undefined8 *)(lVar4 + 0x20) = uVar9;
            thunk_FUN_03048534(lVar4 + 0x20,0);
          }
          else {
            local_60 = uVar9;
            uStack_58 = uVar10;
            local_50 = uVar5;
            System_Collections_Generic_List<InputActionMap_BindingOverrideJson>__TrimExcess
                      (param_2,&local_60,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      if (local_38 == 0) goto LAB_06a6e204;
      local_38 = *(long *)(local_38 + 0x48);
    } while (local_38 != 0);
  }
  return;
}


