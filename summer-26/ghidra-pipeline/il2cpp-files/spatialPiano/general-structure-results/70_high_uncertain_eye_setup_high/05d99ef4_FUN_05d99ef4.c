/*
FUNCTION_NAME: FUN_05d99ef4
ENTRY_POINT: 05d99ef4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05d99ef4(long param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,ulong param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_53c [108];
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4ac [108];
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_41c [108];
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_388 [200];
  undefined1 auStack_2c0 [200];
  undefined1 auStack_1f8 [200];
  undefined1 auStack_130 [200];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_06bc3aa4 & 1) == 0) {
    FUN_02f08768(Method_Unity_Collections_NativeSliceExtensions_Slice<Vertex>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__);
    DAT_06bc3aa4 = 1;
  }
  memset(auStack_130,0,200);
  puVar3 = Method_Unity_Collections_NativeSliceExtensions_Slice<Vertex>__;
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  lVar4 = *param_4;
  if (*(int *)(param_1 + 0xb8) == 1) {
    if (lVar4 != 0) {
      uVar6 = 0x17;
LAB_05d99fb0:
      uVar8 = *(undefined8 *)(param_1 + 0x108);
      uVar7 = *(undefined8 *)(lVar4 + 0x40);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
                    /* try { // try from 05d99ff0 to 05e9a0c7 has its CatchHandler @ 05d99ff0
                       catch() { ... } // from try @ 05d99ff0 with catch @ 05d99ff0
                       catch() { ... } // from try @ 05d9a114 with catch @ 05d99ff0
                       catch() { ... } // from try @ 05d9a168 with catch @ 05d99ff0
                       catch() { ... } // from try @ 05d9a190 with catch @ 05d99ff0
                       catch() { ... } // from try @ 05d9a1b4 with catch @ 05d99ff0 */
      FUN_05db0678(auStack_1f8,uVar8,param_2,uVar7,param_3,uVar6,0);
      memcpy(auStack_130,auStack_1f8,200);
      uVar7 = *(undefined8 *)(param_1 + 0xe8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06124118(auStack_130,uVar7,0);
      FUN_06124170(auStack_130,*(undefined4 *)(param_1 + 0xf0),0);
      FUN_06124144(auStack_130,*(undefined8 *)(param_1 + 0xf8),0);
      FUN_06124178(auStack_130,*(undefined4 *)(param_1 + 0x100),0);
      if (*param_4 != 0) {
        uVar7 = *(undefined8 *)(*param_4 + 0x40);
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar4 = FUN_05d5a440(uVar7,0);
        if ((param_7 & 1) == 0) {
          if (lVar4 == 0) {
            if (param_2 != 0) {
              memcpy(auStack_1f8,auStack_130,200);
              uStack_3a8 = *(undefined8 *)(param_1 + 0xc4);
              local_3b0 = *(undefined8 *)(param_1 + 0xbc);
              uStack_398 = *(undefined8 *)(param_1 + 0xd4);
              uStack_3a0 = *(undefined8 *)(param_1 + 0xcc);
              memcpy(auStack_41c,(void *)(param_1 + 0x118),0x6c);
              lVar4 = *param_4;
              if (lVar4 != 0) {
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                memcpy(auStack_388,auStack_1f8,200);
                uStack_4c8 = uStack_3a8;
                local_4d0 = local_3b0;
                uStack_4b8 = uStack_398;
                uStack_4c0 = uStack_3a0;
                memcpy(auStack_53c,auStack_41c,0x6c);
                FUN_05dacbf0(param_5,param_2 + 0x18,auStack_388,&local_4d0,auStack_53c,lVar4 + 0x48,
                             0);
                goto LAB_05d9a21c;
              }
            }
          }
          else {
                    /* try { // try from 05d9a0c8 to 05e9a0cf has its CatchHandler @ 05d9a170 */
            if (param_2 != 0) {
              lVar5 = *param_4;
              uVar7 = FUN_05d45d20(lVar4,param_5,param_2 + 0x18,auStack_130,param_1 + 0xbc,
                                   param_1 + 0x118,0);
              goto joined_r0x05d9a0ec;
            }
          }
        }
        else if (lVar4 == 0) {
          if (param_2 != 0) {
            memcpy(auStack_1f8,auStack_130,200);
            uStack_3a8 = *(undefined8 *)(param_1 + 0xc4);
            local_3b0 = *(undefined8 *)(param_1 + 0xbc);
            uStack_398 = *(undefined8 *)(param_1 + 0xd4);
            uStack_3a0 = *(undefined8 *)(param_1 + 0xcc);
            memcpy(auStack_41c,(void *)(param_1 + 0x118),0x6c);
            lVar4 = *param_4;
            if (lVar4 != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              memcpy(auStack_2c0,auStack_1f8,200);
              uStack_438 = uStack_3a8;
              local_440 = local_3b0;
              uStack_428 = uStack_398;
              uStack_430 = uStack_3a0;
              memcpy(auStack_4ac,auStack_41c,0x6c);
              FUN_05dace88(param_6,param_2 + 0x18,auStack_2c0,&local_440,auStack_4ac,lVar4 + 0x2c,0)
              ;
              goto LAB_05d9a21c;
            }
          }
        }
        else if (param_2 != 0) {
          lVar5 = *param_4;
          uVar7 = FUN_05d462dc(lVar4,param_6,param_2 + 0x18,auStack_130,param_1 + 0xbc,
                               param_1 + 0x118,0);
joined_r0x05d9a0ec:
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x38) = uVar7;
LAB_05d9a21c:
            if (*(long *)(lVar1 + 0x28) == local_68) {
              return;
            }
            goto LAB_05d9a260;
          }
        }
      }
    }
  }
  else if ((lVar4 != 0) && (*(long *)(lVar4 + 0x40) != 0)) {
    uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x40) + 0x198);
    goto LAB_05d99fb0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05d9a260:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


