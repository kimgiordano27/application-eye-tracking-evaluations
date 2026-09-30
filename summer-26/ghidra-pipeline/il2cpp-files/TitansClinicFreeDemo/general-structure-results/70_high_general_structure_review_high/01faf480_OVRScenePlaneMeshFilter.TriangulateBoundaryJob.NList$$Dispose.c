/*
FUNCTION_NAME: OVRScenePlaneMeshFilter.TriangulateBoundaryJob.NList$$Dispose
ENTRY_POINT: 01faf480
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void OVRScenePlaneMeshFilter_TriangulateBoundaryJob_NList__Dispose(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar2;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  
code_r0x01faf480:
  thunk_FUN_01286abc(unaff_x23,unaff_x22);
  lVar2 = unaff_x22;
  if (unaff_x21[4] == 0)
  goto OVRScenePrefabOverride__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  if (unaff_x19 != 0) {
    do {
      FUN_01eb0bd8();
      lVar2 = unaff_x22;
OVRScenePrefabOverride__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize:
      do {
        uVar1 = FUN_01f665dc((long)&stack0x00000008 + 4,0);
        FUN_01e5d260(*unaff_x27,uVar1,0);
        (**(code **)(*unaff_x21 + 0x1a8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1b0));
        if (unaff_x19 == 0) goto LAB_01faf594;
        FUN_01eb0bd8();
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
        if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)in_stack_00000008._4_4_) {
          uVar1 = *(undefined8 *)PTR_DAT_027bb778;
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          FUN_01f7d8a0(uVar1,0);
          if (unaff_x19 != 0) {
            FUN_01ebcc64();
            return;
          }
          goto LAB_01faf594;
        }
        if (*(uint *)(unaff_x20 + 0x18) <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        unaff_x21 = *(long **)(unaff_x20 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20);
        if (unaff_x21 == (long *)0x0) goto LAB_01faf594;
        if (unaff_x21[4] == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_01f665dc((long)&stack0x00000008 + 4,0);
          uVar1 = FUN_01e5d260(*unaff_x28,uVar1,0);
        }
        unaff_x22 = thunk_FUN_0124bba8(*unaff_x25);
        FUN_01fafed0(unaff_x22,unaff_x21,uVar1);
        if (lVar2 != 0) {
          unaff_x23 = (long *)(lVar2 + 0x40);
          *unaff_x23 = unaff_x22;
          goto code_r0x01faf480;
        }
        if (unaff_x19 == 0) goto LAB_01faf594;
        FUN_01eb0bd8();
        lVar2 = unaff_x22;
      } while (unaff_x21[4] == 0);
    } while( true );
  }
LAB_01faf594:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


