/*
FUNCTION_NAME: FUN_05dfc694
ENTRY_POINT: 05dfc694
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05dfc694(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7,uint param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_56c [108];
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_4dc [108];
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_44c [108];
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined2 local_3b4 [2];
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_388 [200];
  undefined1 auStack_2c0 [200];
  undefined2 local_1f8 [100];
  undefined1 auStack_130 [200];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_06bc3dcd & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__);
    DAT_06bc3dcd = 1;
  }
  uStack_3a8 = 0;
  local_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  memset(auStack_130,0,200);
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  local_3b4[0] = 0;
  if (param_3 != 0) {
    if (*(char *)(param_1 + 0x150) == '\0') {
      uVar9 = 0x17;
    }
    else {
      uVar9 = *(undefined4 *)(param_3 + 0x198);
    }
    if (*(long *)(param_3 + 0x1d8) != 0) {
      if (((*(char *)(param_1 + 0x150) != '\0') &&
          (*(char *)(*(long *)(param_3 + 0x1d8) + 0x140) != '\0')) &&
         ((*(int *)(param_3 + 0xe8) == 0 || (*(char *)(param_3 + 0x184) != '\0')))) {
        uVar9 = 0x33;
      }
      uStack_3a8 = *(undefined8 *)(param_1 + 0xc0);
      local_3b0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_398 = *(undefined8 *)(param_1 + 0xd0);
      uStack_3a0 = *(undefined8 *)(param_1 + 200);
      if (*param_5 != 0) {
        FUN_06124a50(&local_3b0,*(undefined4 *)(*param_5 + 0x3c),0);
        uVar10 = *(undefined8 *)(param_1 + 0x148);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05db0678(local_1f8,uVar10,param_2,param_3,param_4,uVar9,0);
        memcpy(auStack_130,local_1f8,200);
        puVar3 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
        if (*(long *)(param_3 + 0x1d8) != 0) {
          if (((*(char *)(*(long *)(param_3 + 0x1d8) + 0x140) == '\0') ||
              (*(char *)(param_1 + 0x150) == '\0')) ||
             ((*(int *)(param_3 + 0xe8) != 0 && (*(char *)(param_3 + 0x184) == '\0')))) {
            local_3b4[0] = FUN_06127170(param_1 + 0xd8,0);
            iVar4 = FUN_06123f20(local_3b4,0);
            if (iVar4 == 3) {
              uVar10 = 1;
              uVar7 = 4;
              goto LAB_05dfc84c;
            }
          }
          else {
            uVar10 = 0;
            uVar7 = 3;
LAB_05dfc84c:
            local_1f8[0] = 0;
            FUN_06123eac(local_1f8,uVar10,uVar7,0);
            FUN_06127178(param_1 + 0xd8,local_1f8[0],0);
            uVar5 = FUN_061271ac(param_1 + 0xd8,0);
            FUN_061271b4(param_1 + 0xd8,uVar5 | 4,0);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar6 = FUN_05d5a440(param_3,0);
          if ((param_8 & 1) == 0) {
            if (lVar6 == 0) {
              if (param_2 != 0) {
                memcpy(local_1f8,auStack_130,200);
                uStack_3d8 = uStack_3a8;
                local_3e0 = local_3b0;
                uStack_3c8 = uStack_398;
                uStack_3d0 = uStack_3a0;
                memcpy(auStack_44c,(void *)(param_1 + 0xd8),0x6c);
                lVar6 = *param_5;
                if (lVar6 != 0) {
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  memcpy(auStack_388,local_1f8,200);
                  uStack_4f8 = uStack_3d8;
                  local_500 = local_3e0;
                  uStack_4e8 = uStack_3c8;
                  uStack_4f0 = uStack_3d0;
                  memcpy(auStack_56c,auStack_44c,0x6c);
                  FUN_05dacbf0(param_6,param_2 + 0x18,auStack_388,&local_500,auStack_56c,
                               lVar6 + 0x68,0);
                  goto LAB_05dfca24;
                }
              }
            }
            else if (param_2 != 0) {
              lVar8 = *param_5;
              uVar10 = FUN_05d45d20(lVar6,param_6,param_2 + 0x18,auStack_130,&local_3b0,
                                    param_1 + 0xd8,0);
              goto joined_r0x05dfc8fc;
            }
          }
          else if (lVar6 == 0) {
            if (param_2 != 0) {
              memcpy(local_1f8,auStack_130,200);
              uStack_3d8 = uStack_3a8;
              local_3e0 = local_3b0;
              uStack_3c8 = uStack_398;
              uStack_3d0 = uStack_3a0;
              memcpy(auStack_44c,(void *)(param_1 + 0xd8),0x6c);
              lVar6 = *param_5;
              if (lVar6 != 0) {
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                memcpy(auStack_2c0,local_1f8,200);
                uStack_468 = uStack_3d8;
                local_470 = local_3e0;
                uStack_458 = uStack_3c8;
                uStack_460 = uStack_3d0;
                memcpy(auStack_4dc,auStack_44c,0x6c);
                FUN_05dace88(param_7,param_2 + 0x18,auStack_2c0,&local_470,auStack_4dc,lVar6 + 0x44,
                             0);
                goto LAB_05dfca24;
              }
            }
          }
          else if (param_2 != 0) {
            lVar8 = *param_5;
            uVar10 = FUN_05d462dc(lVar6,param_7,param_2 + 0x18,auStack_130,&local_3b0,param_1 + 0xd8
                                  ,0);
joined_r0x05dfc8fc:
            if (lVar8 != 0) {
              *(undefined8 *)(lVar8 + 0x60) = uVar10;
LAB_05dfca24:
              if (*(long *)(lVar1 + 0x28) == local_68) {
                return;
              }
              goto LAB_05dfca68;
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05dfca68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


