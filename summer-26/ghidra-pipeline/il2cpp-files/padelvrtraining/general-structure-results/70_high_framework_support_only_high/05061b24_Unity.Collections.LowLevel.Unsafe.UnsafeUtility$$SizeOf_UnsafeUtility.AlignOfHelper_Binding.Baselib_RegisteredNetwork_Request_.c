/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<Binding.Baselib_RegisteredNetwork_Request>>
ENTRY_POINT: 05061b24
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05061c20) */
/* WARNING: Removing unreachable block (ram,0x05061cac) */
/* WARNING: Removing unreachable block (ram,0x05061cb0) */

int Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<Binding_Baselib_RegisteredNetwork_Request>>
              (undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  int unaff_w24;
  undefined8 uVar9;
  ulong unaff_x25;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  int *in_stack_00000000;
  int *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  do {
    FUN_05de897c(param_2,param_3,*param_1);
    iVar6 = *in_stack_00000000;
    iVar1 = *in_stack_00000008;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    puVar2 = PTR_DAT_091fa7f0;
    iVar4 = FUN_04f506c4(*(undefined8 *)PTR_DAT_091fa7f0);
    iVar5 = FUN_04f506c4(*(undefined8 *)puVar2);
    FUN_08082a64(&stack0x00000040,iVar1 - iVar4,2,iVar6 - iVar5,0);
    thunk_FUN_08048930(unaff_x21,in_stack_00000040,unaff_x25 & 0xffffffff,
                       *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x38));
    in_stack_00000028 = unaff_x20[1];
    in_stack_00000020 = *unaff_x20;
    in_stack_00000038 =
         thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
    iVar6 = FUN_0506ffa0(in_stack_00000018,&stack0x00000040,iVar6,unaff_x21,in_stack_00000010._4_4_,
                         &stack0x00000038,unaff_x25 & 0xffffffff,
                         *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x40));
    if (iVar6 <= unaff_w24) {
      iVar6 = unaff_w24;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_08082b08(&stack0x00000040,0);

    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_Vector2f>>
    :
    do {
      unaff_x29 = unaff_x29 + 1;
      unaff_x28 = unaff_x28 + 8;
      if ((int)unaff_x20[1] <= unaff_x29) {
        FUN_05de8814(&stack0x00000048,*(undefined8 *)PTR_DAT_091fa808);
        return iVar6;
      }
      uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar9 = FUN_07186ef4(uVar9,0);
      uVar7 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49745_091fa7b8,0);
      uVar8 = FUN_0719124c(uVar9,uVar7,0);
      if ((uVar8 & 1) == 0) {
        param_3 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar9 = FUN_07186ef4(uVar9,0);
        uVar3 = FUN_0805c3f8(in_stack_00000018,uVar9,*(undefined8 *)(unaff_x28 + *unaff_x20),0,0);
        param_3 = (ulong)uVar3;
        if ((int)uVar3 < 0)
        goto 
        Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_Vector2f>>
        ;
      }
      uVar8 = FUN_05de8a14(&stack0x00000048,param_3,*(undefined8 *)PTR_DAT_091fa800);
    } while ((uVar8 & 1) != 0);
    param_2 = &stack0x00000048;
    param_1 = (undefined8 *)PTR_DAT_091fa7f8;
    unaff_x25 = param_3;
    unaff_w24 = iVar6;
  } while( true );
}


