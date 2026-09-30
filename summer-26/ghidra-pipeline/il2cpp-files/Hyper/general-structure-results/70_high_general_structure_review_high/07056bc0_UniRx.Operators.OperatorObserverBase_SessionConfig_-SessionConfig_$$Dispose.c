/*
FUNCTION_NAME: UniRx.Operators.OperatorObserverBase<SessionConfig,-SessionConfig>$$Dispose
ENTRY_POINT: 07056bc0
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8 UniRx_Operators_OperatorObserverBase<SessionConfig,_SessionConfig>__Dispose(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  void *__src;
  int in_w8;
  void *__dest;
  size_t unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x27;
  long unaff_x29;
  
  if (in_w8 == 1) {
LAB_07056be4:
    lVar2 = FUN_098a0730();
    if ((lVar2 == 0) || (uVar3 = FUN_098c3358(), (uVar3 & 1) == 0)) {
      if (unaff_x24 == 0) goto LAB_07057368;
      lVar2 = *(long *)(unaff_x24 + 0x70);
                    /* try { // try from 07056d18 to 07156d1f has its CatchHandler @ 07056e4c */
      if (lVar2 == 0) {
        FUN_0987a0a0();
        lVar2 = *(long *)(unaff_x24 + 0x70);
        if (lVar2 == 0) goto LAB_07057368;
      }
      uVar1 = (**(code **)(lVar2 + 0x18))
                        (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x21 + 0x30);
    }
    (**(code **)**(undefined8 **)(*(long *)(unaff_x22 + 0x20) + 0xc0))(uVar1);
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x30);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34(lVar2);
    }
    __dest = *(void **)(unaff_x29 + -0x30);
    __src = (void *)FUN_04948074(uVar1,lVar2);
    memcpy(__dest,__src,unaff_x20);
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x30);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    FUN_04947e94(lVar2,__dest,__src);
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return 1;
    }
  }
  else {
    if (unaff_x27 != (long *)0x0) {
      uVar1 = (**(code **)(*unaff_x27 + 0x178))();
      FUN_09877b04(uVar1,0);
      goto LAB_07056be4;
    }
LAB_07057368:
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


