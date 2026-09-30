/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetPropErrorNameFromEnum$$EndInvoke
ENTRY_POINT: 019be95c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


float OVR_OpenVR_IVRSystem__GetPropErrorNameFromEnum__EndInvoke(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  float unaff_s8;
  float fStack0000000000000004;
  float fStack000000000000000c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__);
  *(undefined1 *)(unaff_x20 + 0x674) = 1;
  fStack000000000000000c = 0.0;
  fStack0000000000000004 = 0.0;
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)
             Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
           ) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_019be9d8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724();
LAB_019be9d8:
    plVar2 = (long *)(*(code *)*puVar1)();
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_019bea44;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_00d59724(plVar2,*(long *)
                                    Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__
                            ,2);
LAB_019bea44:
      (*(code *)*puVar1)(0,plVar2,&stack0x00000020);
      return ((SUB84(uStack0000000000000024,4) - 0.0) * 0.0 +
             ((float)uStack0000000000000020 - 0.0) * fStack000000000000000c +
             ((float)uStack0000000000000024 - fStack0000000000000004) * 0.0) - unaff_s8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


