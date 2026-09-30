/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceServiceRequest.<PerformMainThreadCallbacks>d__9$$System.IDisposable.Dispose
ENTRY_POINT: 0329b228
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VoiceServiceRequest_<PerformMainThreadCallbacks>d__9__System_IDisposable_Dispose
               (void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  long unaff_x24;
  void *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x26 + 0xc0) + 0x18) + 0x28)) {
    unaff_x22 = unaff_x25;
  }
  memcpy(unaff_x19,unaff_x22,unaff_x23);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar2 = *(long **)(unaff_x26 + 0xc0);
  lVar1 = *plVar2;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44(lVar1);
    plVar2 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  }
  if (-1 < *(int *)(plVar2[3] + 0x28)) {
    unaff_x19 = (undefined8 *)*unaff_x19;
  }
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar1) {
        lVar1 = lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138;
        goto LAB_0329b2d4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar1 = FUN_01ecb238();
LAB_0329b2d4:
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x19;
  (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(uint *)(unaff_x29 + -0xc) & 0x7fffffff);
}


