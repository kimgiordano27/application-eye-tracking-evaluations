/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreLoadSceneFromJsonDelegate$$EndInvoke
ENTRY_POINT: 05adfb54
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate__EndInvoke
               (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  
  if (param_1 != 0) {
    if ((int)param_2[1] != *(int *)(param_1 + 0x2c)) {
      FUN_05e229e0(0);
      param_1 = *param_2;
      if (param_1 == 0) goto LAB_05adfc90;
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar3 = *(uint *)((long)param_2 + 0xc);
    do {
      uVar5 = uVar3;
      if (uVar1 <= uVar5) {
        *(uint *)((long)param_2 + 0xc) = uVar1 + 1;
        param_2[3] = 0;
        param_2[2] = 0;
        param_2[5] = 0;
        param_2[4] = 0;
        param_2[7] = 0;
        param_2[6] = 0;
        param_2[9] = 0;
        param_2[8] = 0;
        param_2[0xb] = 0;
        param_2[10] = 0;
        param_2[0xd] = 0;
        param_2[0xc] = 0;
        param_2[0xf] = 0;
        param_2[0xe] = 0;
        *(undefined4 *)(param_2 + 0x10) = 0;
        goto FUN_05adfc70;
      }
      lVar4 = *(long *)(param_1 + 0x18);
      *(uint *)((long)param_2 + 0xc) = uVar5 + 1;
      if (lVar4 == 0) goto LAB_05adfc90;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      uVar3 = uVar5 + 1;
    } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x7c + 0x20) < 0);
    lVar4 = lVar4 + (long)(int)uVar5 * 0x7c;
    uVar2 = *(undefined4 *)(lVar4 + 0x28);
    memcpy(&stack0x00000000,(void *)(lVar4 + 0x2c),0x70);
    in_stack_000000e0 = 0;
    in_stack_000000c8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    in_stack_00000078 = 0;
    in_stack_00000070 = 0;
    lVar4 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38);
    memcpy(&stack0x000000f0,&stack0x00000000,0x70);
    FUN_045dbf24(&stack0x00000070,uVar2,&stack0x000000f0,uVar6);
    memcpy(param_2 + 2,&stack0x00000070,0x74);
FUN_05adfc70:
    return uVar5 < uVar1;
  }
LAB_05adfc90:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


