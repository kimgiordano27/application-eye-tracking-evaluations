/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundingBox3D
ENTRY_POINT: 036a3a00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundingBox3D(long param_1)

{
  long lVar1;
  long in_x9;
  int in_w10;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float in_stack_00000000;
  
  if ((in_w10 != 0) && (unaff_w19 < *(uint *)(in_x9 + 0x18))) {
    lVar2 = (long)(int)unaff_w19;
    FUN_03667194(param_1 + 0x20,&stack0x00000030,in_x9 + lVar2 * 0x1c + 0x20,0);
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if (lVar1 == 0) {
LAB_036a3ae4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + lVar2 * 0x1c;
      *(ulong *)(lVar1 + 0x20) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20) * in_stack_00000000,
                    (float)*(undefined8 *)(lVar1 + 0x20) * in_stack_00000000);
      *(float *)(lVar1 + 0x28) = *(float *)(lVar1 + 0x28) * in_stack_00000000;
      lVar1 = *(long *)(unaff_x21 + 0x20);
      if (lVar1 == 0) goto LAB_036a3ae4;
      if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
        FUN_036672bc(lVar1 + lVar2 * 0x1c + 0x20);
        *(uint *)(unaff_x21 + 0x40) = *(uint *)(unaff_x21 + 0x40) & (unaff_w23 ^ 0xffffffff);
        lVar1 = *(long *)(unaff_x21 + 0x20);
        if (lVar1 == 0) goto LAB_036a3ae4;
        if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
          lVar1 = lVar1 + (long)(int)unaff_w19 * 0x1c;
          uVar3 = *(undefined8 *)(lVar1 + 0x2c);
          uVar5 = *(undefined8 *)(lVar1 + 0x28);
          uVar4 = *(undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)((long)unaff_x20 + 0x14) = *(undefined8 *)(lVar1 + 0x34);
          *(undefined8 *)((long)unaff_x20 + 0xc) = uVar3;
          unaff_x20[1] = uVar5;
          *unaff_x20 = uVar4;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


