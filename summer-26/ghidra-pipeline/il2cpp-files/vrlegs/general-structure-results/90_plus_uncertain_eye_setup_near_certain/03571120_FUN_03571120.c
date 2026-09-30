/*
FUNCTION_NAME: FUN_03571120
ENTRY_POINT: 03571120
PROGRAM: vrlegs-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_03571120(undefined4 param_1,long param_2,ulong param_3,uint param_4,int param_5,
                 undefined1 *param_6)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((DAT_0412dfe1 & 1) == 0) {
    FUN_01ab69ac(Mono_Security_PKCS7_EncryptedData_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc8e90);
    FUN_01ab69ac(PTR_DAT_03cc45a0);
    FUN_01ab69ac(PTR_DAT_03cc45a8);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Size3f_TypeInfo);
    DAT_0412dfe1 = 1;
  }
  puVar3 = Mono_Security_PKCS7_EncryptedData_TypeInfo;
  *param_6 = 0;
  local_70 = 0;
  if (((param_4 >> 1 & 1) == 0) && (param_5 == 400)) {
    if (param_2 == 0) goto UnityEngine_Application_LogCallback__Invoke;
  }
  else {
    if (param_2 == 0) goto UnityEngine_Application_LogCallback__Invoke;
    lVar6 = *(long *)(param_2 + 0x198);
    if (param_5 < 0x191) {
      if (param_5 < 0xc9) {
        lVar5 = 2;
        if (param_5 != 200) {
          lVar5 = 4;
        }
        if (param_5 == 100) {
          lVar5 = 1;
        }
      }
      else {
        lVar5 = 3;
        if (param_5 != 300) {
          lVar5 = 4;
        }
      }
    }
    else if (param_5 < 0x259) {
      lVar8 = 6;
      if (param_5 != 600) {
        lVar8 = 4;
      }
      lVar5 = 5;
      if (param_5 != 500) {
        lVar5 = lVar8;
      }
    }
    else if (param_5 == 700) {
      lVar5 = 7;
    }
    else if (param_5 == 800) {
      lVar5 = 8;
    }
    else if (param_5 == 900) {
      lVar5 = 9;
    }
    else {
      lVar5 = 4;
    }
    if (lVar6 == 0) goto UnityEngine_Application_LogCallback__Invoke;
    if (*(uint *)(lVar6 + 0x18) <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar6 = lVar6 + lVar5 * 0x10;
    plVar1 = (long *)(lVar6 + 0x20);
    if ((param_4 & 2) != 0) {
      plVar1 = (long *)(lVar6 + 0x28);
    }
    lVar6 = *plVar1;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_036cee6c(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (lVar6 == 0) goto UnityEngine_Application_LogCallback__Invoke;
      lVar5 = *(long *)(lVar6 + 200);
      if (lVar5 == 0) {
        FUN_03568878(lVar6);
        lVar5 = *(long *)(lVar6 + 200);
        if (lVar5 == 0) goto UnityEngine_Application_LogCallback__Invoke;
      }
      local_68 = param_1;
      uVar7 = FUN_0219f8b8(lVar5,&local_68,&local_70,*(undefined8 *)puVar3);
      if (((uVar7 & 1) != 0) ||
         ((*(int *)(lVar6 + 0x48) == 1 &&
          (uVar7 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(lVar6,param_1,&local_70),
          (uVar7 & 1) != 0)))) {
        *param_6 = 1;
        return local_70;
      }
    }
  }
  lVar6 = *(long *)(param_2 + 200);
  if (lVar6 == 0) {
    FUN_03568878(param_2);
    lVar6 = *(long *)(param_2 + 200);
    if (lVar6 == 0) {
UnityEngine_Application_LogCallback__Invoke:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  local_68 = param_1;
  uVar7 = FUN_0219f8b8(lVar6,&local_68,&local_70,*(undefined8 *)puVar3);
  lVar6 = local_70;
  if ((((uVar7 & 1) == 0) &&
      (((*(int *)(param_2 + 0x48) != 1 ||
        (uVar7 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(param_2,param_1,&local_70),
        lVar6 = local_70, (uVar7 & 1) == 0)) &&
       (puVar3 = PTR_DAT_03cbdf88, lVar6 = 0, local_70 == 0)))) && ((param_3 & 1) != 0)) {
    lVar6 = *(long *)(param_2 + 0x138);
    if ((lVar6 != 0) && (iVar2 = *(int *)(lVar6 + 0x18), 0 < iVar2)) {
      iVar9 = 0;
      do {
        FUN_02215a88(lVar6,iVar9,&local_68,*(undefined8 *)PTR_DAT_03cc45a8);
        lVar5 = CONCAT44(uStack_64,local_68);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_036d35a8(lVar5,0,0);
        if ((uVar7 & 1) == 0) {
          if (lVar5 == 0) goto UnityEngine_Application_LogCallback__Invoke;
          uVar4 = FUN_0355ea04(lVar5,0);
          lVar8 = *(long *)OVRPlugin_Size3f_TypeInfo;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar8);
            lVar8 = *(long *)OVRPlugin_Size3f_TypeInfo;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar8 == 0) goto UnityEngine_Application_LogCallback__Invoke;
          local_68 = uVar4;
          uVar7 = FUN_021e5f08(lVar8,&local_68,*(undefined8 *)PTR_DAT_03cc8e90);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(param_2 + 0x1c0) == 0) goto UnityEngine_Application_LogCallback__Invoke;
            local_68 = uVar4;
            FUN_021e5f08(*(long *)(param_2 + 0x1c0),&local_68,*(undefined8 *)PTR_DAT_03cc8e90);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            local_70 = FUN_03571120(param_1,lVar5,1,param_4,param_5,param_6);
            if (local_70 != 0) {
              return local_70;
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar2 != iVar9);
    }
    lVar6 = 0;
  }
  return lVar6;
}


