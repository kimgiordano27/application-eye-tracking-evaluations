/*
FUNCTION_NAME: Normal.Realtime.Serialization.SerializerResolver$$Register<Quaternion,-QuaternionSerializer>
ENTRY_POINT: 0464d540
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Normal_Realtime_Serialization_SerializerResolver__Register<Quaternion,_QuaternionSerializer>
               (void)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined4 unaff_w23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (unaff_x22 != 0) {
    FUN_050d40f0(&stack0x00000050,*(int *)(unaff_x22 + 0x18) + 4,unaff_w23,1,
                 *(undefined8 *)PTR_DAT_08492c78);
    in_stack_00000020 = 0;
    in_stack_00000028 = &stack0x00000050;
    puVar3 = (undefined4 *)
             FUN_045fcea0(in_stack_00000050,in_stack_00000058,*(undefined8 *)PTR_DAT_08492c70);
    iVar2 = *(int *)(unaff_x22 + 0x18);
    *puVar3 = unaff_w21;
    lVar1 = 0;
    if (iVar2 != 0) {
      lVar1 = unaff_x22 + 0x20;
    }
    FUN_07c3d5c0(puVar3 + 1,lVar1,(long)iVar2,0);
    if (*(int *)(*(long *)PTR_DAT_08490748 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_045db588(&stack0x00000008,puVar3,**(undefined8 **)(unaff_x20 + 0x38));
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000018;
    FUN_050d43d8(&stack0x00000050,*(undefined8 *)PTR_DAT_08492150);
    unaff_x19[1] = in_stack_00000038;
    *unaff_x19 = in_stack_00000030;
    unaff_x19[2] = in_stack_00000040;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


