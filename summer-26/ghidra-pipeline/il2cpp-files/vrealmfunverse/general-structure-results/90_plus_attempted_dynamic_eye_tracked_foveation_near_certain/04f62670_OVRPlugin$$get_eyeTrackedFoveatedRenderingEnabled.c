/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 04f62670
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 *puVar5;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000054;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000064;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000074;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000084;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  puVar2 = 
  System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
  ;
  puVar5 = *(undefined8 **)(unaff_x23 + 0x578);
  FUN_037a6fdc(&stack0x00000088,param_2,**(undefined8 **)(param_1 + 0x588));
  while( true ) {
    uVar3 = FUN_0472eaf4(&stack0x00000088,*puVar5);
    if ((uVar3 & 1) == 0) {
      FUN_0472eaf0(&stack0x00000088,*(undefined8 *)puVar2);
      uStack0000000000000084 = 0;
      uStack000000000000005c = 0;
      uStack0000000000000054 = 0;
      uStack000000000000006c = 0;
      uStack0000000000000064 = 0;
      uStack000000000000007c = 0;
      uStack0000000000000074 = 0;
      thunk_FUN_02bb0e9c(&stack0x00000040);
      uStack000000000000005c = (undefined4)*(undefined8 *)(unaff_x20 + 0xf0);
      uStack0000000000000054 = (undefined4)*(undefined8 *)(unaff_x20 + 0xe8);
      uStack0000000000000064 = (undefined4)*(undefined8 *)(unaff_x20 + 0xf8);
      uStack0000000000000074 = (undefined4)*(undefined8 *)(unaff_x20 + 0x108);
      uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x20 + 0x100);
      uStack000000000000007c = (undefined4)*(undefined8 *)(unaff_x20 + 0x110);
      memcpy(unaff_x19,&stack0x00000040,0x48);
      return;
    }
    FUN_04f621dc(&stack0x000000a0,in_stack_00000098);
    if (unaff_x21 == 0) break;
    lVar4 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)uVar1 * 0x30;
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar4 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar4 + 0x20) = in_stack_000000a0;
      *(undefined8 *)(lVar4 + 0x38) = in_stack_000000b8;
      *(undefined8 *)(lVar4 + 0x30) = in_stack_000000b0;
      *(undefined8 *)(lVar4 + 0x48) = in_stack_000000c8;
      *(undefined8 *)(lVar4 + 0x40) = in_stack_000000c0;
      thunk_FUN_02bb0e9c(lVar4 + 0x40,0);
    }
    else {
      FUN_038c4894();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


