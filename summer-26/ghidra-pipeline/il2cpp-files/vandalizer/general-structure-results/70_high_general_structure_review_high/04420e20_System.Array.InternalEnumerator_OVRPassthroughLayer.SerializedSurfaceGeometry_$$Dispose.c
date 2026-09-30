/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 04420e20
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose
               (undefined1 *param_1,undefined1 *param_2,size_t param_3)

{
  long lVar1;
  ulong uVar2;
  int *unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  code *unaff_x26;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    memcpy(&stack0x00000440,&stack0x00000000,0x220);
    uVar2 = (*unaff_x26)(unaff_x23,&stack0x00000660,&stack0x00000440,
                         *(undefined8 *)(unaff_x25 + 0x1c0));
    unaff_x22 = unaff_x22 + 1;
    unaff_x24 = unaff_x24 + 0x220;
    if ((uVar2 & 1) != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_0442105c();
      return;
    }
    if ((long)(*unaff_x19 + -1) <= (long)unaff_x22) {
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0322bef4();
    }
    unaff_x23 = (long *)FUN_0442e3fc(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x80));
    lVar1 = *(long *)(unaff_x19 + 0x8a);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    memcpy(&stack0x00000220,(void *)(lVar1 + unaff_x24),0x220);
    memcpy(&stack0x00000000,unaff_x21,0x220);
    if (unaff_x23 == (long *)0x0) break;
    unaff_x25 = *unaff_x23;
    param_1 = &stack0x00000660;
    param_2 = &stack0x00000220;
    param_3 = 0x220;
    unaff_x26 = *(code **)(unaff_x25 + 0x1b8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


