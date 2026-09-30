/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$set_Timeout
ENTRY_POINT: 032a49bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequest__set_Timeout(void *param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  undefined8 uVar4;
  size_t unaff_x23;
  void *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  memset(param_1,param_2,unaff_x23);
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    memset(unaff_x24,0,unaff_x23);
    memcpy(unaff_x22,unaff_x24,unaff_x23);
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    uVar2 = FUN_01f089f8(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
    if ((uVar2 & 1) == 0) {
      uVar3 = thunk_FUN_01ecaf38();
      lVar1 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44(lVar1);
      }
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_03579868(uVar4,0);
      uVar2 = FUN_03583338(uVar3,uVar4,0);
      if ((uVar2 & 1) != 0) {
        FUN_0358ac7c(0);
      }
    }
    *unaff_x20 = unaff_x19;
    thunk_FUN_01f51358();
    *(undefined4 *)(unaff_x20 + 1) = 0;
    *(int *)((long)unaff_x20 + 0xc) = (int)*(undefined8 *)(unaff_x19 + 0x18);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


